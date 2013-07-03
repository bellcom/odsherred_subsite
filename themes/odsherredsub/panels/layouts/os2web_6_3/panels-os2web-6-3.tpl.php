<div class="panel-display panel-node clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  
  <div class="panel-panel panel-region-left grid-6 alpha">
    <div class="inside"><?php print $content['left']; ?></div>
  </div>
  <div class="panel-panel panel-region-right grid-3 omega">
    <div class="inside"><?php print $content['right']; ?></div>
  </div>

</div>

