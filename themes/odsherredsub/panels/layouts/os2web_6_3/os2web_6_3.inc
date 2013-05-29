<?php

/**
 * Implements hook_panels_layouts().
 */
$plugin = array(
  'title' => t('OS2Web 6-3'),
  'category' => t('OS2Web'),
  'icon' => 'os2web-6-3.png',
  'theme' => 'panels_os2web_6_3',
  'theme arguments' => array('id', 'content'),
  'admin css' => 'os2web-6-3_admin.css',
  'regions' => array(
    'left' => t('Left'),
    'right' => t('Right'),
  ),
);
