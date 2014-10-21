<?php

namespace boozallenhamilton\pinger;

class DrupalNode 
{
    /**
     * the node id we want to lookup
     * @var boolean
     */
    var $node = false;


    /**
     * the constructor
     * @param String $drupal_url  The URL of the Drupal installation
     * @param String $drupal_root The location of the Drupal installation
     */
    public function __construct()
    {

    }

    /**
     * get the node id we want to lookup
     * @return [type] [description]
     */
    public function get($id)
    {
        if (is_numeric($id)) {
            $this->node = node_load((int)$id);
            return $this->node;       
        }

        $query      = new \EntityFieldQuery;
        $result     = $query->entityCondition('entity_type', 'node')->propertyCondition('status', 1)->fieldCondition('field_app_code', 'value', $id, '=')->execute();
        if (count($result) == 0) {
            return false;
        }
         
        $nid        = array_keys($result['node']);
        $this->node = node_load($nid[0]);
        return $this->node;
    }

    /**
     * save the node
     * @param  [type] $node [description]
     * @return [type]       [description]
     */
    public function save($node)
    {
        return node_save($node);
    }

    /**
     * sets a field value
     * @param [type] $node  [description]
     * @param [type] $field [description]
     * @param [type] $value [description]
     */
    public function set_field($node, $field, $value)
    {
        $node->{$field}[LANGUAGE_NONE][0]['value'] = $value;
        return $node;
    }

    public function get_field($node, $field, $value = 'value')
    {
        return $node->{$field}[LANGUAGE_NONE][0][$value];
    }

    public function set_resource_color($totals)
    {
        $color              = 'green';
        $per['storage']     = ($totals->used_disk/$totals->allocated_disk)*100;
        $per['memory']      = ($totals->used_memory/$totals->allocated_memory)*100;
        $per['vcpu']        = ($totals->used_vcpu/$totals->allocated_vcpu)*100;

        if ($totals->used_disk >= $totals->allocated_disk) {
            return 'red';
        } elseif ($totals->used_memory >= $totals->allocated_memory) {
            return 'red';
        } elseif ($totals->used_vcpu >= $totals->allocated_vcpu) {
            return 'red';
        }


        foreach ($per as $item) {


            if ($item >= 85 && $item <= 94) {
                $color = 'yellow';
            } elseif ($item >= 95) {
                return 'red';
            }
        }

        return $color;
    }

    public function set_budget_color($totals)
    {
        $color      = 'green';
        $per[]      = ($totals->used_budget/$totals->allocated_budget)*100;

        if ($totals->used_budget >= $totals->allocated_budget) {
            return 'red';
        }

        foreach ($per as $item) {
            if ($item >= 85 && $item <= 94) {
                $color = 'yellow';
            } elseif ($item >= 95) {
                return 'red';
            }
        }

        return $color;
    }

}