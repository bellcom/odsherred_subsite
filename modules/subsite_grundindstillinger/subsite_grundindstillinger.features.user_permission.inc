<?php
/**
 * @file
 * subsite_grundindstillinger.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function subsite_grundindstillinger_user_default_permissions() {
  $permissions = array();

  // Exported permission: access site map.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'site_map',
  );

  return $permissions;
}
