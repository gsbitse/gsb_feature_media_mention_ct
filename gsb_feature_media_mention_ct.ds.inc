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
    'title' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '9',
      'label' => 'inline',
      'format' => 'author',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'By',
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
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image_single_public',
      ),
      'right' => array(
        1 => 'group_content_wrapper',
        2 => 'field_region',
        3 => 'field_business_insight_topic',
        4 => 'field_industry',
        5 => 'field_tag',
        6 => 'field_company_organization',
        7 => 'title',
        8 => 'field_discipline',
        9 => 'field_date_published',
        10 => 'author',
        11 => 'field_editorial_summary',
        12 => 'group_tags_wrapper',
      ),
    ),
    'fields' => array(
      'field_image_single_public' => 'left',
      'group_content_wrapper' => 'right',
      'field_region' => 'right',
      'field_business_insight_topic' => 'right',
      'field_industry' => 'right',
      'field_tag' => 'right',
      'field_company_organization' => 'right',
      'title' => 'right',
      'field_discipline' => 'right',
      'field_date_published' => 'right',
      'author' => 'right',
      'field_editorial_summary' => 'right',
      'group_tags_wrapper' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|media_mention|teaser'] = $ds_layout;

  return $export;
}
