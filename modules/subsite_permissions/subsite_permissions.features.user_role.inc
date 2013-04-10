<?php
/**
 * @file
 * subsite_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function subsite_permissions_user_default_roles() {
  $roles = array();

  // Exported role: let bruger.
  $roles['let bruger'] = array(
    'name' => 'let bruger',
    'weight' => '3',
  );

  // Exported role: super bruger.
  $roles['super bruger'] = array(
    'name' => 'super bruger',
    'weight' => '4',
  );

  return $roles;
}
