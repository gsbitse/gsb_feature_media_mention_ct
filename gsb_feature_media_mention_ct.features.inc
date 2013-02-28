<?php
/**
 * @file
 * gsb_feature_media_mention_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_media_mention_ct_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_media_mention_ct_node_info() {
  $items = array(
    'gsb_media_mention' => array(
      'name' => t('Media Mention'),
      'base' => 'node_content',
      'description' => t('The GSB Public Media Mention content type is used for media mentions on the GSB Public web site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}