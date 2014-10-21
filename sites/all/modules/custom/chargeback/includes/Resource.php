<?php

namespace boozallenhamilton\pinger;

class Resource 
{
    /**
     * [$soap description]
     * @var boolean
     */
    var $soap = false;

    /**
     * [$byte description]
     * @var [type]
     */
    var $byte;

    /**
     * [__construct description]
     * @param [type] $url  [description]
     * @param [type] $user [description]
     * @param [type] $pass [description]
     */
    public function __construct($url, $user, $pass)
    {
        $this->soap = new \SoapClient($url, array('login' => $user, 'password' => $pass));
        $this->byte = new \Byte\ByteConverter();
    }

    /**
     * [get description]
     * @return [type] [description]
     */
    public function get()
    {
        $fields         = array('aggregate_vm_cpus', 'aggregate_vm_memory', 'aggregate_logical_cpus', 'aggregate_physical_cpus');
        $objResponse    = $this->soap->__soapCall('GetResourcePoolList', array('emsGuid' => '*'));
        $cf             = array();

        // Get all nodes with their tag and the fields we want
        foreach ($objResponse as $resources) {
            
            $res = $this->soap->__soapCall('ResourcePoolGetTags', array('resourcepoolId' => $resources->id));

            if (empty($res[0]->tag_name)) {
                continue;
            }

            $res2 = $this->soap->__soapCall('FindResourcePoolById', array('resourcepoolId' => $resources->id));

            foreach ($res2 as $item) {

                if (!is_array($item)) {
                    continue;
                }
                 
                $cf[$res[0]->tag_name]['app_code'] = $res[0]->tag_name;

                foreach ($item as $foo) {

                    if (!in_array($foo->name, $fields)) {
                        continue;
                    }

                    $cf[$res[0]->tag_name][$foo->name] = $foo->value;
                }
            }

        }
        return $cf;
    }

    /**
     * [total_ram_used description]
     * @param  [type] $res [description]
     * @return [type]      [description]
     */
    public function total_ram_used($res)
    {
        $total = $this->byte->getGBytes($res.'m');
        return round($total);
    }

    /**
     * [total_ram_allocated description]
     * @param  [type] $res [description]
     * @return [type]      [description]
     */
    public function total_ram_allocated($res)
    {
        return round($res); 
    }

}