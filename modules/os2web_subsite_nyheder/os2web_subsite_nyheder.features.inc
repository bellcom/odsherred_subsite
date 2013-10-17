<?php
/**
 * @file
 * os2web_subsite_nyheder.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_subsite_nyheder_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_subsite_nyheder_views_api() {
  return array("api" => "3.0");
}
