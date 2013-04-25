<?php
/**
 * @file
 * gsb_feature_media_mention_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_media_mention_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags_wrapper|node|media_mention|teaser';
  $field_group->group_name = 'group_tags_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_mention';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '7',
    'children' => array(
      0 => 'field_business_insight_topic',
      1 => 'field_company_organization',
      2 => 'field_discipline',
      3 => 'field_industry',
      4 => 'field_region',
      5 => 'field_tag',
      6 => 'field_target_audience',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags_wrapper|node|media_mention|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|media_mention|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_mention';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '11',
    'children' => array(
      0 => 'field_business_insight_topic',
      1 => 'field_company_organization',
      2 => 'field_discipline',
      3 => 'field_industry',
      4 => 'field_region',
      5 => 'field_tag',
      6 => 'field_target_audience',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_taxonomy|node|media_mention|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_image|node|media_mention|teaser';
  $field_group->group_name = 'group_wrapper_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_mention';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_image_single_public',
    ),
    'format_type' => 'gsb_field_formatter_group_link_to_field',
    'format_settings' => array(
      'label' => 'Image wrapper',
      'instance_settings' => array(
        'field_name' => 'field_link_single',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_image|node|media_mention|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_source|node|media_mention|teaser';
  $field_group->group_name = 'group_wrapper_source';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_mention';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Source wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'field_publisher',
    ),
    'format_type' => 'gsb_field_formatter_group_link_to_field',
    'format_settings' => array(
      'label' => 'Source wrapper',
      'instance_settings' => array(
        'field_name' => 'field_link_single',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_source|node|media_mention|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_title|node|media_mention|teaser';
  $field_group->group_name = 'group_wrapper_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_mention';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'title',
    ),
    'format_type' => 'gsb_field_formatter_group_link_to_field',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'field_name' => 'field_link_single',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_title|node|media_mention|teaser'] = $field_group;

  return $export;
}
