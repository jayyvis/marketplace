<p>&nbsp;</p>

<div class="panel panel-default" id="<?php print $block_html_id; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
      <div class="panel-heading">
    <h3 class="panel-title"><?php print $title; ?>
    </h3>
  </div>
  <?php print render($title_suffix); ?>
  <?php endif;?>


  <div class="panel-body">
    <?php print $content ?>
  </div>
</div>