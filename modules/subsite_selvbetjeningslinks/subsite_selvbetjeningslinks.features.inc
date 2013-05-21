<?php
/**
 * @file
 * subsite_selvbetjeningslinks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function subsite_selvbetjeningslinks_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function subsite_selvbetjeningslinks_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function subsite_selvbetjeningslinks_node_info() {
  $items = array(
    'selv' => array(
      'name' => t('Selvbetjeningslinks'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
