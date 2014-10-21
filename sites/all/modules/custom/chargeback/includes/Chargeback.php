<?php

namespace boozallenhamilton\pinger;

/**
 * Chargeback class
 */
class Chargeback
{
    /**
     * node information
     * @var Object
     */
    var $node = null;

    /**
     * pricing info
     * @var Array
     */
    var $pricing;

    /**
     * the json url
     * @var String
     */
    var $jurl = null;

    /**
     * the constructor
     * @param Object $node Drupal node object of the node (project) we want to get totals for
     */
    public function __construct($node)
    {

        if ($this->set_node($node) === false) {
            return false;
        }

        if ($this->get_pricing() === false) {
            return false;
        }

    }

    /**
     * sets teh node for use with this project
     * @param Object $node Drupal node object of the node (project) we want to get totals for
     */
    public function set_node($node)
    {
        if ($node === null) {
            return false;
        }
        $this->node = $node;
        return $this;
    }

    /**
     * set the url for the chargeback data
     */
    public function set_jurl()
    {
        global $base_url;
        $this->jurl = $base_url.'/chargeback.json';
        return $this;     
    }

    /**
     * returns the last ping time
     * @return [type] [description]
     */
    public function get_run_in_production()
    {
        return $this->node->field_appl_runinprod[LANGUAGE_NONE][0]['value'];
    }

    /**
     * returns the last ping time
     * @return [type] [description]
     */
    public function get_lastping()
    {
        return date('Y-m-d', strtotime($this->node->field_last_cf_ping[LANGUAGE_NONE][0]['value']));
    }

    /**
     * returns the currently used budget
     * @return Float    The currently used budget
     */
    public function get_used_budget()
    {
        return $this->node->field_used_budget[LANGUAGE_NONE][0]['value'];
    }
    
    /**
     * get the allocated budget for the current node (project)
     * @return [type] [description]
     */
    public function allocated_budget()
    {
        return $this->node->og_credits[LANGUAGE_NONE][0]['value'];
    }

    /**
     * the total number of months remaining in the calendar year
     * @return [type] [description]
     */
    public function remaining_months()
    {
        $current_used   = $this->get_used_budget();
        $og_credits     = $this->allocated_budget();
        if (empty($current_used)) {
            return '--';
        }
        $months = $og_credits / $current_used;
        return round($months, 0);
    }
    
    /**
     * get the pricing data
     * @return Array The pricing data
     */
    public function get_pricing()
    {
        $this->set_jurl();

        if ($this->jurl === null) {
            return false;
        }

        $data = json_decode(file_get_contents($this->jurl), true);

        if ($data === null) {
            return false;
        }
        $run_in_prod = $this->get_run_in_production();
        if ($run_in_prod == 'Yes') {
            $this->pricing = $data['production'];
            return true;
        }

        $this->pricing = $data['development'];
        return false;
    }



    /**
     * Calculates the budget used
     * @return Float    The new calculated used budget
     */
    public function used_budget($totals)
    {
        
        $current_used       = $this->get_used_budget();

        $sum['vcpu_total']  = $totals->allocated_vcpu * $this->pricing['vcpu_total'];
        $sum['vcpu_used']   = $totals->used_vcpu * $this->pricing['vcpu_used'];

        $sum['ram_total']   = $totals->allocated_memory * $this->pricing['ram_total'];
        $sum['ram_used']    = $totals->used_memory * $this->pricing['ram_used'];

        $sum['disk_total']  = $totals->allocated_disk * $this->pricing['disk_total'];
        $sum['disk_used']   = $totals->used_disk * $this->pricing['disk_used'];

        $day_total          = 0;

        $day_total          = array_sum($sum);

        // just send back the current budget if we have already run today
        if (date('Y-m-d') == $this->get_lastping()) {

            return $current_used;
        }

        return $current_used + $day_total;
    }

}
