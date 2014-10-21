<?php

namespace boozallenhamilton\pinger;

/**
 * Class DrupalFields
 * @package boozallenhamilton\pinger
 */
class DrupalFields
{
    /**
     * @var string
     */
    var $allocated_cpu     = 'field_estimated_cpu';

    /**
     * @var string
     */
    var $used_cpu          = 'field_used_vcpu';

    /**
     * @var string
     */
    var $allocated_memory   = 'field_estimated_memory';

    /**
     * @var string
     */
    var $used_memory        = 'field_used_memory';

    /**
     * @var string
     */
    var $allocated_disk     = 'field_estimated_storage';

    /**
     * @var string
     */
    var $used_disk          = 'field_used_storage';

    /**
     * @var string
     */
    var $allocated_cost     = 'field_allocated_budget';

    /**
     * @var string
     */
    var $allocated_fund     = 'field_est_fund';

    /**
     * @var string
     */
    var $used_cost          = 'field_used_budget';

    /**
     * @var string
     */
    var $project_request    = 'field_project_req';

    /**
     * @var string
     */
    var $months_rem         = 'field_months_remaining';

    /**
     * @var string
     */
    var $system_css         = 'field_system_css';

    /**
     * @var string
     */
    var $budget_css         = 'field_budget_css';

    /**
     * @var string
     */
    var $last_ping          = 'field_last_cf_ping';

    /**
     * the constructor
     */
    public function __construct()
    {

    }

    /**
     * @return string
     */
    public function allocated_cpu()
    {
        return $this->allocated_cpu;
    }

    /**
     * @return string
     */
    public function used_cpu()
    {
        return $this->used_cpu;
    }

    /**
     * @return string
     */
    public function allocated_memory()
    {
        return $this->allocated_memory;
    }

    /**
     * @return string
     */
    public function used_memory()
    {
        return $this->used_memory;
    }

    /**
     * @return string
     */
    public function allocated_disk()
    {
        return $this->allocated_disk;
    }

    /**
     * @return string
     */
    public function used_disk()
    {
        return $this->used_disk;
    }

    /**
     * @return string
     */
    public function allocated_cost()
    {
        return $this->allocated_cost;
    }

    /**
     * @return string
     */
    public function allocated_fund()
    {
        return $this->allocated_fund;
    }

    /**
     * @return string
     */
    public function used_cost()
    {
        return $this->used_cost;
    }

    /**
     * @return string
     */
    public function months_rem()
    {
        return $this->months_rem;
    }

    /**
     * @return string
     */
    public function system_css()
    {
        return $this->system_css;
    }

    /**
     * @return string
     */
    public function budget_css()
    {
        return $this->budget_css;
    }

    /**
     * @return string
     */
    public function last_ping()
    {
        return $this->last_ping;
    }

}