<?php
/**
 * @file
 * ti_amg_fw_base_components.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function ti_amg_fw_base_components_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Home Page Carousel Touts';
  $picture_mapping->machine_name = 'home_page_carousel_touts';
  $picture_mapping->breakpoint_group = 'picture_breakpoints';
  $picture_mapping->mapping = array(
    'custom.user.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fwrd_280x280',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive_home_page_280x280_tablet',
      ),
    ),
    'custom.user.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive_home_page_280x280_mobile',
      ),
    ),
    'module.picture.empty_srcset' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
  );
  $export['home_page_carousel_touts'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Home page hero tout';
  $picture_mapping->machine_name = 'home_page_hero_tout';
  $picture_mapping->breakpoint_group = 'picture_breakpoints';
  $picture_mapping->mapping = array(
    'custom.user.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'rd_home_hero_tout',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive_home_page_hero_tout_tablet',
      ),
    ),
    'custom.user.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive_home_page_hero_tout_mobile',
      ),
    ),
    'module.picture.empty_srcset' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
  );
  $export['home_page_hero_tout'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Home page latest larger section';
  $picture_mapping->machine_name = 'home_page_latest_larger_section';
  $picture_mapping->breakpoint_group = 'picture_breakpoints';
  $picture_mapping->mapping = array(
    'custom.user.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fwrd_280x520',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fwrd_280x520',
      ),
    ),
    'custom.user.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive_home_page_280x520_mobile',
      ),
    ),
    'module.picture.empty_srcset' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
  );
  $export['home_page_latest_larger_section'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Home page latest section';
  $picture_mapping->machine_name = 'home_page_latest_section';
  $picture_mapping->breakpoint_group = 'picture_breakpoints';
  $picture_mapping->mapping = array(
    'custom.user.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fwrd_280x280',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive_home_page_280x280_tablet',
      ),
    ),
    'custom.user.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive_home_page_152x152_mobile',
      ),
    ),
    'module.picture.empty_srcset' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
  );
  $export['home_page_latest_section'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Home page Recipe section';
  $picture_mapping->machine_name = 'home_page_recipe_section';
  $picture_mapping->breakpoint_group = 'picture_breakpoints';
  $picture_mapping->mapping = array(
    'custom.user.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fwrd_300x300',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive_home_page_190x190_mobile',
      ),
    ),
    'custom.user.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive_home_page_190x190_mobile',
      ),
    ),
    'module.picture.empty_srcset' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
  );
  $export['home_page_recipe_section'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Home Page Video section';
  $picture_mapping->machine_name = 'home_page_video_section';
  $picture_mapping->breakpoint_group = 'picture_breakpoints';
  $picture_mapping->mapping = array(
    'custom.user.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'ti_amg_fwrd_280x158',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive_home_page__video_183x103_mobile',
      ),
    ),
    'custom.user.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive_home_page__video_183x103_mobile',
      ),
    ),
    'module.picture.empty_srcset' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
  );
  $export['home_page_video_section'] = $picture_mapping;

  return $export;
}
