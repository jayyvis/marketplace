<p>&nbsp;</p>


<?php 
$node = menu_get_object();



/* 
$temp = field_get_items('node', $node, 'field_budget_css', $node->language);
array(1) { [0]=> array(3) { ["value"]=> string(3) "red" ["format"]=> NULL ["safe_value"]=> string(3) "red" } }
*/

$vars = array('field_budget_css', 
              'og_credits', 
              'field_used_budget', 
              'field_months_remaining'
            );

foreach ($vars as $var) {
  $foo = field_get_items('node', $node, $var, $node->language);
  //echo "<pre> {$var}<br>";var_dump($foo);echo "</pre>";
  if ($foo === false) {
    ${$var} = '0';
  } else {
    ${$var} = $foo[0]['value'];
  }
}

switch($field_budget_css) {
	
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
      <div class="panel-heading">
    <h3 class="panel-title">Project Budget Status <?php //print $title; ?>
    </h3>
  </div>

  <div class="panel-body">
      <?php //print $content ?>
  </div>
    
    <table class="table table-bordered table-striped">
      <tbody>
        <tr>
          <th class="text-nowrap">Allocated Budget</th>
          <td><?php print $og_credits ?></td>
        </tr>
        <tr>
          <th class="text-nowrap">Used Budget</th>
          <td><?php print $field_used_budget ?></td>
        </tr>
        <tr>
          <th class="text-nowrap">Months Remaining</th>
          <td><?php print $field_months_remaining ?></td>
        </tr>
      </tbody>
    </table>
  
</div>