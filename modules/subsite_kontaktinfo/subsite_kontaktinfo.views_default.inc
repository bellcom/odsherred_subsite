<?php
/**
 * @file
 * subsite_kontaktinfo.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function subsite_kontaktinfo_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kontaktblok';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Kontaktblok';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'hbg';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'hbg';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_adresse']['id'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['table'] = 'field_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse']['field'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['label'] = '';
  $handler->display->display_options['fields']['field_adresse']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Sted */
  $handler->display->display_options['fields']['field_sted']['id'] = 'field_sted';
  $handler->display->display_options['fields']['field_sted']['table'] = 'field_data_field_sted';
  $handler->display->display_options['fields']['field_sted']['field'] = 'field_sted';
  $handler->display->display_options['fields']['field_sted']['label'] = '';
  $handler->display->display_options['fields']['field_sted']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Postnr. og by */
  $handler->display->display_options['fields']['field_by']['id'] = 'field_by';
  $handler->display->display_options['fields']['field_by']['table'] = 'field_data_field_by';
  $handler->display->display_options['fields']['field_by']['field'] = 'field_by';
  $handler->display->display_options['fields']['field_by']['label'] = '';
  $handler->display->display_options['fields']['field_by']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['field_telefon']['id'] = 'field_telefon';
  $handler->display->display_options['fields']['field_telefon']['table'] = 'field_data_field_telefon';
  $handler->display->display_options['fields']['field_telefon']['field'] = 'field_telefon';
  $handler->display->display_options['fields']['field_telefon']['label'] = '';
  $handler->display->display_options['fields']['field_telefon']['alter']['path'] = 'tel:[field_telefon-value]';
  $handler->display->display_options['fields']['field_telefon']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Træffetid */
  $handler->display->display_options['fields']['field_traeffetid']['id'] = 'field_traeffetid';
  $handler->display->display_options['fields']['field_traeffetid']['table'] = 'field_data_field_traeffetid';
  $handler->display->display_options['fields']['field_traeffetid']['field'] = 'field_traeffetid';
  $handler->display->display_options['fields']['field_traeffetid']['label'] = '';
  $handler->display->display_options['fields']['field_traeffetid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_traeffetid']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_traeffetid']['multi_type'] = 'ul';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Felt: Global: Kontekstuelle links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'title' => 0,
    'field_adresse' => 0,
    'field_sted' => 0,
    'field_by' => 0,
    'field_telefon' => 0,
    'field_email' => 0,
    'field_traeffetid' => 0,
    'field_ean_nr' => 0,
  );
  /* Felt: Indhold: EAN nr */
  $handler->display->display_options['fields']['field_ean_nr']['id'] = 'field_ean_nr';
  $handler->display->display_options['fields']['field_ean_nr']['table'] = 'field_data_field_ean_nr';
  $handler->display->display_options['fields']['field_ean_nr']['field'] = 'field_ean_nr';
  $handler->display->display_options['fields']['field_ean_nr']['label'] = 'EAN';
  $handler->display->display_options['fields']['field_ean_nr']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ean_nr']['element_class'] = 'ean';
  $handler->display->display_options['fields']['field_ean_nr']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_ean_nr']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ean_nr']['element_wrapper_class'] = 'ean';
  $handler->display->display_options['fields']['field_ean_nr']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ean_nr']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ean_nr']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ean_nr']['separator'] = '<br />EAN: ';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kontaktinfo' => 'kontaktinfo',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_adresse']['id'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['table'] = 'field_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse']['field'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['label'] = '';
  $handler->display->display_options['fields']['field_adresse']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Sted */
  $handler->display->display_options['fields']['field_sted']['id'] = 'field_sted';
  $handler->display->display_options['fields']['field_sted']['table'] = 'field_data_field_sted';
  $handler->display->display_options['fields']['field_sted']['field'] = 'field_sted';
  $handler->display->display_options['fields']['field_sted']['label'] = '';
  $handler->display->display_options['fields']['field_sted']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Postnr. og by */
  $handler->display->display_options['fields']['field_by']['id'] = 'field_by';
  $handler->display->display_options['fields']['field_by']['table'] = 'field_data_field_by';
  $handler->display->display_options['fields']['field_by']['field'] = 'field_by';
  $handler->display->display_options['fields']['field_by']['label'] = '';
  $handler->display->display_options['fields']['field_by']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['field_telefon']['id'] = 'field_telefon';
  $handler->display->display_options['fields']['field_telefon']['table'] = 'field_data_field_telefon';
  $handler->display->display_options['fields']['field_telefon']['field'] = 'field_telefon';
  $handler->display->display_options['fields']['field_telefon']['label'] = '';
  $handler->display->display_options['fields']['field_telefon']['alter']['path'] = 'tel:[field_telefon-value]';
  $handler->display->display_options['fields']['field_telefon']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Træffetid */
  $handler->display->display_options['fields']['field_traeffetid']['id'] = 'field_traeffetid';
  $handler->display->display_options['fields']['field_traeffetid']['table'] = 'field_data_field_traeffetid';
  $handler->display->display_options['fields']['field_traeffetid']['field'] = 'field_traeffetid';
  $handler->display->display_options['fields']['field_traeffetid']['label'] = '';
  $handler->display->display_options['fields']['field_traeffetid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_traeffetid']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_traeffetid']['multi_type'] = 'ul';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Felt: Global: Kontekstuelle links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'title' => 0,
    'field_adresse' => 0,
    'field_sted' => 0,
    'field_by' => 0,
    'field_telefon' => 0,
    'field_email' => 0,
    'field_traeffetid' => 0,
    'field_ean_nr' => 0,
  );
  /* Felt: Indhold: EAN nr */
  $handler->display->display_options['fields']['field_ean_nr']['id'] = 'field_ean_nr';
  $handler->display->display_options['fields']['field_ean_nr']['table'] = 'field_data_field_ean_nr';
  $handler->display->display_options['fields']['field_ean_nr']['field'] = 'field_ean_nr';
  $handler->display->display_options['fields']['field_ean_nr']['label'] = 'EAN';
  $handler->display->display_options['fields']['field_ean_nr']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ean_nr']['element_class'] = 'ean';
  $handler->display->display_options['fields']['field_ean_nr']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_ean_nr']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ean_nr']['element_wrapper_class'] = 'ean';
  $handler->display->display_options['fields']['field_ean_nr']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ean_nr']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ean_nr']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ean_nr']['separator'] = '<br />EAN: ';

  /* Display: Spotboks kontaktblok */
  $handler = $view->new_display('block', 'Spotboks kontaktblok', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'grid-3 omega';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_adresse']['id'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['table'] = 'field_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse']['field'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['label'] = '';
  $handler->display->display_options['fields']['field_adresse']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Sted */
  $handler->display->display_options['fields']['field_sted']['id'] = 'field_sted';
  $handler->display->display_options['fields']['field_sted']['table'] = 'field_data_field_sted';
  $handler->display->display_options['fields']['field_sted']['field'] = 'field_sted';
  $handler->display->display_options['fields']['field_sted']['label'] = '';
  $handler->display->display_options['fields']['field_sted']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Postnr. og by */
  $handler->display->display_options['fields']['field_by']['id'] = 'field_by';
  $handler->display->display_options['fields']['field_by']['table'] = 'field_data_field_by';
  $handler->display->display_options['fields']['field_by']['field'] = 'field_by';
  $handler->display->display_options['fields']['field_by']['label'] = '';
  $handler->display->display_options['fields']['field_by']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['field_telefon']['id'] = 'field_telefon';
  $handler->display->display_options['fields']['field_telefon']['table'] = 'field_data_field_telefon';
  $handler->display->display_options['fields']['field_telefon']['field'] = 'field_telefon';
  $handler->display->display_options['fields']['field_telefon']['label'] = '';
  $handler->display->display_options['fields']['field_telefon']['alter']['path'] = 'tel:[field_telefon-value]';
  $handler->display->display_options['fields']['field_telefon']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Træffetid */
  $handler->display->display_options['fields']['field_traeffetid']['id'] = 'field_traeffetid';
  $handler->display->display_options['fields']['field_traeffetid']['table'] = 'field_data_field_traeffetid';
  $handler->display->display_options['fields']['field_traeffetid']['field'] = 'field_traeffetid';
  $handler->display->display_options['fields']['field_traeffetid']['label'] = '';
  $handler->display->display_options['fields']['field_traeffetid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_traeffetid']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_traeffetid']['multi_type'] = 'ul';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Felt: Global: Kontekstuelle links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'title' => 0,
    'field_adresse' => 0,
    'field_sted' => 0,
    'field_by' => 0,
    'field_telefon' => 0,
    'field_email' => 0,
    'field_traeffetid' => 0,
    'field_ean_nr' => 0,
  );
  /* Felt: Indhold: EAN nr */
  $handler->display->display_options['fields']['field_ean_nr']['id'] = 'field_ean_nr';
  $handler->display->display_options['fields']['field_ean_nr']['table'] = 'field_data_field_ean_nr';
  $handler->display->display_options['fields']['field_ean_nr']['field'] = 'field_ean_nr';
  $handler->display->display_options['fields']['field_ean_nr']['label'] = 'EAN';
  $handler->display->display_options['fields']['field_ean_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ean_nr']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ean_nr']['element_class'] = 'ean';
  $handler->display->display_options['fields']['field_ean_nr']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_ean_nr']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ean_nr']['element_wrapper_class'] = 'ean';
  $handler->display->display_options['fields']['field_ean_nr']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ean_nr']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ean_nr']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ean_nr']['separator'] = '<br />EAN: ';
  $translatables['kontaktblok'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Redigér-link'),
    t('EAN'),
    t('Block'),
    t('Spotboks kontaktblok'),
  );
  $export['kontaktblok'] = $view;

  return $export;
}
