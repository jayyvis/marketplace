<?php

namespace boozallenhamilton\pinger;

class DataStore 
{
    var $soap = false;

    var $btye;

    /**
     * [__construct description]
     * @param [type] $url  [description]
     * @param [type] $user [description]
     * @param [type] $pass [description]
     */
    public function __construct($url, $user, $pass)
    {
        $options    = array('login' => $user, 'password' => $pass, 'trace' => true, 'exceptions' => true);
        $this->soap = new \SoapClient($url, $options);
        $this->byte = new \Byte\ByteConverter();
    }

    /**
     * [get description]
     * @return [type] [description]
     */
    public function get()
    {
        $fields         = array('total_space', 'free_space');
        $objResponse    = $this->soap->__soapCall('GetDatastoreList', array('emsGuid' => '*'));
        $cf             = array();

        // Get all nodes with their tag and the fields we want
        foreach ($objResponse as $resources) {

            $res = $this->soap->__soapCall('DatastoreGetTags', array('datastoreId' => $resources->id));

            foreach ($res as $item) {

                $ds = $this->soap->__soapCall('FindDatastoreById', array('datastoreId' => $resources->id));

                foreach ($ds as $k => $v) {
                    if(in_array($k, $fields)) {
                        $cf[$item->tag_name][$k] = $v; 
                    }
                }
            }
        }
        return $cf;
    }

    /**
     * [used_disk description]
     * @param  [type] $datastores [description]
     * @return [type]             [description]
     */
    public function used_disk($datastores)
    {
        $total  = $this->byte->getGBytes($datastores['total_space'].'b');
        $free   = $this->byte->getGBytes($datastores['free_space'].'b');
        return round($total - $free, 2);
    }

    /**
     * [allocated_disk description]
     * @param  [type] $datastores [description]
     * @return [type]             [description]
     */
    public function allocated_disk($datastores)
    {
        $total = $this->byte->getGBytes($datastores['total_space'].'b');
        return round($total, 2);
    }

    /**
     * [set_status description]
     * @param [type] $used      [description]
     * @param [type] $allocated [description]
     */
    public function set_status($used, $allocated)
    {
        $percent = $used/$allocated;
        if ($percent <= 85) {
            return 'green';
        } elseif ($percent >= 86 && $percent <= 90) {
            return 'yellow';
        } else {
            return 'red';
        }
    }

}