<?php
/**
 * @file
 * subsite_kontaktinfo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function subsite_kontaktinfo_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function subsite_kontaktinfo_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function subsite_kontaktinfo_node_info() {
  $items = array(
    'kontaktinfo' => array(
      'name' => t('Kontaktinfo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  return $items;
}
