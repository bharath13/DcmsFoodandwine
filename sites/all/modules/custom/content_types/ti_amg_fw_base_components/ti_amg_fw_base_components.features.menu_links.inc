<?php
/**
 * @file
 * ti_amg_fw_base_components.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ti_amg_fw_base_components_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_fivestar:admin/config/content/fivestar
  $menu_links['management_fivestar:admin/config/content/fivestar'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/fivestar',
    'router_path' => 'admin/config/content/fivestar',
    'link_title' => 'Fivestar',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure site-wide widgets used for Fivestar rating.',
      ),
      'identifier' => 'management_fivestar:admin/config/content/fivestar',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_voting-api:admin/config/search/votingapi
  $menu_links['management_voting-api:admin/config/search/votingapi'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/votingapi',
    'router_path' => 'admin/config/search/votingapi',
    'link_title' => 'Voting API',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure sitewide settings for user-generated ratings and votes.',
      ),
      'identifier' => 'management_voting-api:admin/config/search/votingapi',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Fivestar');
  t('Voting API');


  return $menu_links;
}
