<?php
/**
 * @file
 * gsb_feature_media_mention_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_media_mention_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|media_mention|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'media_mention';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'author' => array(
      'weight' => '2',
      'label' => 'inline',
      'format' => 'author_linked',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'by',
          'lb-col' => TRUE,
        ),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|media_mention|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_media_mention_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|media_mention|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'media_mention';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image_single_public',
        1 => 'field_link_single',
        2 => 'author',
        3 => 'field_business_insight_topic',
        4 => 'field_date_published',
        5 => 'field_target_audience',
        6 => 'field_editorial_summary',
        7 => 'field_discipline',
        8 => 'group_tags_wrapper',
        9 => 'field_industry',
        10 => 'field_region',
        11 => 'field_company_organization',
        12 => 'field_tag',
      ),
    ),
    'fields' => array(
      'field_image_single_public' => 'ds_content',
      'field_link_single' => 'ds_content',
      'author' => 'ds_content',
      'field_business_insight_topic' => 'ds_content',
      'field_date_published' => 'ds_content',
      'field_target_audience' => 'ds_content',
      'field_editorial_summary' => 'ds_content',
      'field_discipline' => 'ds_content',
      'group_tags_wrapper' => 'ds_content',
      'field_industry' => 'ds_content',
      'field_region' => 'ds_content',
      'field_company_organization' => 'ds_content',
      'field_tag' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|media_mention|teaser'] = $ds_layout;

  return $export;
}
