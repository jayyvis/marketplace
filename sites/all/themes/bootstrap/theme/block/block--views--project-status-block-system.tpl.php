<p>&nbsp;</p>


<?php 
$node = menu_get_object();

$vars = array('field_system_css', 
              'field_estimated_memory', 
              'field_estimated_cpu', 
              'field_estimated_storage',
              'field_used_memory',
              'field_used_vcpu',
              'field_used_storage');

foreach ($vars as $var) {
  $foo = field_get_items('node', $node, $var, $node->language);
  //echo "<pre> {$var}<br>";var_dump($foo);echo "</pre>";
  if ($foo === false) {
    ${$var} = '0';
  } else {
    ${$var} = $foo[0]['value'];
  }
}


switch($field_system_css) {
	
	case "red":
		$css = 'danger';
		break;
	
	case "yellow":
		$css = 'warning';
		break;
	
	case "green":
		$css = 'success';
	break;
	
	default:
		$css = 'default';
	break;
		
}

?>


<div class="panel panel-<?php print $css ?>" id="<?php print $block_html_id; ?>">
  <?php //print render($title_prefix); ?>
  <?php //if ($title): ?>
      <div class="panel-heading">
    <h3 class="panel-title">Project Resource Status <?php //print $title; ?>
    </h3>
  </div>
  <?php //print render($title_suffix); ?>
  <?php //endif;?>


  <div class="panel-body">
    <?php //print $content ?>
  </div>
  
    <table class="table table-bordered table-striped">
      <thead>
        <tr>
          <th></th>
          <th>
            <strong>Memory</strong>
          </th>
          <th>
            <strong>vCPU</strong>
          </th>
          <th>
            <strong>Storage</strong>
          </th>
        </tr>
      </thead>
      <tbody>
        <tr>
          <th class="text-nowrap">Allocated</th>
          <td><?php print $field_estimated_memory ?></td>
          <td><?php print $field_estimated_cpu ?></td>
		  <td><?php print $field_estimated_storage ?></td>
        </tr>
        <tr>
          <th class="text-nowrap">Used</th>
          <td><?php print $field_used_memory ?></td>
          <td><?php print $field_used_vcpu ?></td>
          <td><?php print $field_used_storage ?></td>
        </tr>
      </tbody>
    </table>
  
</div>