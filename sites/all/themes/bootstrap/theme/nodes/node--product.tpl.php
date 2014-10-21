<?php 
$node = menu_get_object();
//echo "<pre>"; var_dump($content["product:commerce_price"]["#object"]); echo "</pre>";
//
$cost = $content["product:commerce_price"]["#object"]->commerce_price["und"][0]["amount"]/100; //=//$product->commerce_price["und"][0]["amount"]/100;
$currency = $content["product:commerce_price"]["#object"]->commerce_price["und"][0]["currency_code"];
$sku = $content["product:commerce_price"]["#object"]->sku;

?>

<div class="row">
    <div class="col-12">
        <div class="page-header">
            <h2><?php echo $node->title ?> <small></small></h2>
        </div>
    </div>
</div>
<div class="row">
    <div class="col-md-4">
        <img src="/sites/default/files/<?php echo $node->field_server_image['und'][0]['filename'] ?>">
    </div>
    <div class="col-md-8">
        <p class="lead"><?php echo $node->body['und'][0]['value'] ?></p>
        <h4>Hourly Rate: <small><?php echo $cost ?> <?php echo $currency ?></small></h4>
        <h4>SKU: <small><?php echo $sku ?></small></h4>
    </div>
</div>
<div class="row">
    <div class="col-12">
        <div class="page-header">
            <?php print drupal_render($content['field_product']); ?>
        </div>
    </div>
</div>