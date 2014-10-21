<?php 

$test       = views_get_view_result('service_catalog');
$counter    = 0;


foreach ($test as $item):

if ($counter == 0) { 
    echo '<div class="row">'; 
}

$node       = node_load($item->nid);
$url        = drupal_get_path_alias('node/'.$item->nid);
$product    = commerce_product_load($node->field_product["und"][0]["product_id"]);
$cost       = $product->commerce_price["und"][0]["amount"]/100;
$currency   = $product->commerce_price["und"][0]["currency_code"];

?>


    <?php /* // Single Column Design
    <div class="row">
    <div class="col-md-12">

        <div class="panel panel-default">
        <div class="panel-body">

        <div class="col-md-3">
        <p class="text-center">

        <a href="<?php echo $url; ?>">
        <img height="130" width="130" src="/sites/default/files/<?php echo $node->field_server_image['und'][0]['filename'] ?>">
        </a>
        </p>
        <p class="text-center">
        <a href="<?php echo $url; ?>" class="btn btn-success btn-sm" role="button">View Item</a></p>
        </p>
        </div>

        <div class="col-md-9">
            <h4><a href="<?php echo $url; ?>"><?php echo $item->node_title ?></a> <small><?php echo $cost ?> <?php echo $currency ?> per hour</small></h4>
            <p><small><?php echo $node->body['und'][0]['value'] ?></small></p>
        </div>

        </div>
        </div>

    </div>        
    </div>
    */ ?>
   
    <div class="col-md-6">
        <div class="panel panel-default">
            <div class="panel-heading">
                <h3 class="panel-title"><?php echo $item->node_title ?></h3></div>
                <div class="panel-body" style="min-height: 300px">
                    <a href="<?php echo $url; ?>">
                       <p class="text-center"> <img height="130" width="130" src="/sites/default/files/<?php echo $node->field_server_image['und'][0]['filename'] ?>"></p>
                    </a>
                    <p><small><?php echo $node->body['und'][0]['value'] ?></small></p>
                </div>
            <div class="panel-footer"><a href="<?php echo $url; ?>" class="btn btn-success btn-block" role="button">View Item</a></div>
        </div>
    </div>

<?php

    if ($counter == 1) { 
        echo '</div>'; 
        $counter = 0; 
    } else { 
        $counter++; 
    } 

    endforeach; 
?>






