<?php
/**
 * @file
 * subsite_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function subsite_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
      'super bruger' => 'super bruger',
    ),
    'module' => 'views',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'system',
  );

  // Exported permission: access toolbar.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'user',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
      'super bruger' => 'super bruger',
    ),
    'module' => 'block',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'super bruger' => 'super bruger',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'super bruger' => 'super bruger',
    ),
    'module' => 'user',
  );

  // Exported permission: bypass file access.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
      'super bruger' => 'super bruger',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: create banner content.
  $permissions['create banner content'] = array(
    'name' => 'create banner content',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: create subsite_nyhed content.
  $permissions['create subsite_nyhed content'] = array(
    'name' => 'create subsite_nyhed content',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: create velkomst content.
  $permissions['create velkomst content'] = array(
    'name' => 'create velkomst content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any banner content.
  $permissions['delete any banner content'] = array(
    'name' => 'delete any banner content',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any subsite_nyhed content.
  $permissions['delete any subsite_nyhed content'] = array(
    'name' => 'delete any subsite_nyhed content',
    'roles' => array(
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any velkomst content.
  $permissions['delete any velkomst content'] = array(
    'name' => 'delete any velkomst content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own banner content.
  $permissions['delete own banner content'] = array(
    'name' => 'delete own banner content',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own files.
  $permissions['delete own files'] = array(
    'name' => 'delete own files',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own subsite_nyhed content.
  $permissions['delete own subsite_nyhed content'] = array(
    'name' => 'delete own subsite_nyhed content',
    'roles' => array(
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own velkomst content.
  $permissions['delete own velkomst content'] = array(
    'name' => 'delete own velkomst content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any banner content.
  $permissions['edit any banner content'] = array(
    'name' => 'edit any banner content',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any subsite_nyhed content.
  $permissions['edit any subsite_nyhed content'] = array(
    'name' => 'edit any subsite_nyhed content',
    'roles' => array(
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any velkomst content.
  $permissions['edit any velkomst content'] = array(
    'name' => 'edit any velkomst content',
    'roles' => array(
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own banner content.
  $permissions['edit own banner content'] = array(
    'name' => 'edit own banner content',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own subsite_nyhed content.
  $permissions['edit own subsite_nyhed content'] = array(
    'name' => 'edit own subsite_nyhed content',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own velkomst content.
  $permissions['edit own velkomst content'] = array(
    'name' => 'edit own velkomst content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'media',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'search',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'let bruger' => 'let bruger',
      'super bruger' => 'super bruger',
    ),
    'module' => 'node',
  );

  return $permissions;
}
