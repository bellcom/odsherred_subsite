<?php
/**
 * @file
 * subsite_spotbokse.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function subsite_spotbokse_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function subsite_spotbokse_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function subsite_spotbokse_image_default_styles() {
  $styles = array();

  // Exported image style: spotboks.
  $styles['spotboks'] = array(
    'name' => 'spotboks',
    'effects' => array(
      4 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '212',
          'height' => '187',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function subsite_spotbokse_node_info() {
  $items = array(
    'spotboks' => array(
      'name' => t('Spotboks'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Emne'),
      'help' => '',
    ),
  );
  return $items;
}
