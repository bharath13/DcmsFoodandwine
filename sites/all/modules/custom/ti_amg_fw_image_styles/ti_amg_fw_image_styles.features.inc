<?php
/**
 * @file
 * ti_amg_fw_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function ti_amg_fw_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: 100x125.
  $styles['100x125'] = array(
    'label' => '100x125',
    'effects' => array(
      38 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 125,
          'style_name' => '100x125',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: 1200x1200.
  $styles['1200x1200'] = array(
    'label' => '1200x1200',
    'effects' => array(
      4 => array(
        'name' => 'ti_editorial_image_crop_crop',
        'data' => array(
          'width' => 1200,
          'height' => 1200,
          'upscale' => 0,
          'weight' => 0,
          'style_name' => '1200x1200',
        ),
        'weight' => -7,
      ),
      6 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 1200,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
          'style_name' => '1200x1200',
        ),
        'weight' => -4,
      ),
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 1200,
          'style_name' => '1200x1200',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: 120x90.
  $styles['120x90'] = array(
    'label' => '120x90',
    'effects' => array(
      40 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 90,
          'style_name' => '120x90',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: 1600x1000.
  $styles['1600x1000'] = array(
    'label' => '1600x1000',
    'effects' => array(
      7 => array(
        'name' => 'ti_editorial_image_crop_crop',
        'data' => array(
          'width' => 1600,
          'height' => 1000,
          'upscale' => 0,
          'weight' => 0,
          'style_name' => '1600x1000',
        ),
        'weight' => -6,
      ),
      9 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 1000,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
          'style_name' => '1600x1000',
        ),
        'weight' => -4,
      ),
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 1000,
          'style_name' => '1600x1000',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: 16_9_related_content_480x270.
  $styles['16_9_related_content_480x270'] = array(
    'label' => '16_9_related_content_480x270',
    'effects' => array(
      13 => array(
        'name' => 'nested_image_style',
        'data' => array(
          'scale' => array(
            0 => 'master_widescreen_16_9',
          ),
          'style_name' => '16_9_related_content_480x270',
        ),
        'weight' => -10,
      ),
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 270,
          'upscale' => 0,
          'style_name' => '16_9_related_content_480x270',
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: 1_1_-_200x200.
  $styles['1_1_-_200x200'] = array(
    'label' => '1:1 - 200x200',
    'effects' => array(
      7 => array(
        'name' => 'nested_image_style',
        'data' => array(
          'scale' => array(
            0 => 'master_square_1_1',
          ),
          'style_name' => '1_1_-_200x200',
        ),
        'weight' => -10,
      ),
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => 200,
          'upscale' => 0,
          'style_name' => '1_1_-_200x200',
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: 1_1_-_375x375.
  $styles['1_1_-_375x375'] = array(
    'label' => '1:1 - 375x375',
    'effects' => array(
      5 => array(
        'name' => 'nested_image_style',
        'data' => array(
          'scale' => array(
            0 => 'master_square_1_1',
          ),
          'style_name' => '1_1_-_375x375',
        ),
        'weight' => -10,
      ),
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 375,
          'height' => 375,
          'upscale' => 0,
          'style_name' => '1_1_-_375x375',
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: 1_1_-_500x500.
  $styles['1_1_-_500x500'] = array(
    'label' => '1:1 - 500x500',
    'effects' => array(
      2 => array(
        'name' => 'nested_image_style',
        'data' => array(
          'scale' => array(
            0 => 'master_square_1_1',
          ),
          'style_name' => '1_1_-_500x500',
        ),
        'weight' => -3,
      ),
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => 500,
          'upscale' => 0,
          'style_name' => '1_1_-_500x500',
        ),
        'weight' => -2,
      ),
    ),
  );

  // Exported image style: 200x250.
  $styles['200x250'] = array(
    'label' => '200x250',
    'effects' => array(
      50 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 250,
          'style_name' => '200x250',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: 291x291.
  $styles['291x291'] = array(
    'label' => '291x291',
    'effects' => array(
      48 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 291,
          'height' => 291,
          'style_name' => '291x291',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: 310x235.
  $styles['310x235'] = array(
    'label' => '310x235',
    'effects' => array(
      46 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 310,
          'height' => 235,
          'style_name' => '310x235',
        ),
        'weight' => 2,
      ),
      45 => array(
        'name' => 'ti_editorial_image_crop_generate_on_crop',
        'data' => array(),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: 445x445.
  $styles['445x445'] = array(
    'label' => '445x445',
    'effects' => array(
      42 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 445,
          'height' => 445,
          'style_name' => '445x445',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: 450x450.
  $styles['450x450'] = array(
    'label' => '450x450',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 450,
          'style_name' => '450x450',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: 4_3_horizontal_-_1200x900.
  $styles['4_3_horizontal_-_1200x900'] = array(
    'label' => '4:3 Horizontal - 1200x900',
    'effects' => array(
      14 => array(
        'name' => 'nested_image_style',
        'data' => array(
          'scale' => array(
            0 => 'master_landscape_4_3',
          ),
          'style_name' => '4_3_horizontal_-_1200x900',
        ),
        'weight' => -10,
      ),
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => 900,
          'upscale' => 0,
          'style_name' => '4_3_horizontal_-_1200x900',
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: 4_3_horizontal_-_400x300.
  $styles['4_3_horizontal_-_400x300'] = array(
    'label' => '4:3 Horizontal - 400x300',
    'effects' => array(
      5 => array(
        'name' => 'nested_image_style',
        'data' => array(
          'scale' => array(
            0 => 'master_landscape_4_3',
          ),
          'style_name' => '4_3_horizontal_-_400x300',
        ),
        'weight' => -10,
      ),
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => 300,
          'upscale' => 0,
          'style_name' => '4_3_horizontal_-_400x300',
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: 4_3_horizontal_-_900x675.
  $styles['4_3_horizontal_-_900x675'] = array(
    'label' => '4:3 Horizontal - 900x675',
    'effects' => array(
      3 => array(
        'name' => 'nested_image_style',
        'data' => array(
          'scale' => array(
            0 => 'master_landscape_4_3',
          ),
          'style_name' => '4_3_horizontal_-_900x675',
        ),
        'weight' => -10,
      ),
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 900,
          'height' => 675,
          'upscale' => 0,
          'style_name' => '4_3_horizontal_-_900x675',
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: 4_3_horizontal_inbody_900x506.
  $styles['4_3_horizontal_inbody_900x506'] = array(
    'label' => '4_3_horizontal_inbody_900x506',
    'effects' => array(
      12 => array(
        'name' => 'nested_image_style',
        'data' => array(
          'scale' => array(
            0 => 'master_widescreen_16_9',
          ),
          'style_name' => '4_3_horizontal_inbody_900x506',
        ),
        'weight' => -10,
      ),
      13 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 900,
          'height' => 506,
          'upscale' => 0,
          'style_name' => '4_3_horizontal_inbody_900x506',
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: 4_3_vertical_-_660x880.
  $styles['4_3_vertical_-_660x880'] = array(
    'label' => '4:3 Vertical - 660x880',
    'effects' => array(
      1 => array(
        'name' => 'nested_image_style',
        'data' => array(
          'scale' => array(
            0 => 'master_portrait_3_4',
          ),
          'style_name' => '4_3_vertical_-_660x880',
        ),
        'weight' => -10,
      ),
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 660,
          'height' => 880,
          'upscale' => 0,
          'style_name' => '4_3_vertical_-_660x880',
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: 50x50.
  $styles['50x50'] = array(
    'label' => '50x50',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
          'style_name' => '50x50',
        ),
        'weight' => -2,
      ),
    ),
  );

  // Exported image style: 550x550.
  $styles['550x550'] = array(
    'label' => '550x550',
    'effects' => array(
      1 => array(
        'name' => 'ti_editorial_image_crop_crop',
        'data' => array(
          'width' => 550,
          'height' => 550,
          'upscale' => 1,
          'style_name' => '550x550',
        ),
        'weight' => -11,
      ),
      3 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 550,
          'height' => 550,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
          'style_name' => '550x550',
        ),
        'weight' => -10,
      ),
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 550,
          'height' => 550,
          'style_name' => '550x550',
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: 551x551.
  $styles['551x551'] = array(
    'label' => '551x551',
    'effects' => array(
      14 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 551,
          'height' => 551,
          'upscale' => 0,
          'style_name' => '551x551',
        ),
        'weight' => -9,
      ),
      15 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 551,
          'height' => 551,
          'anchor' => 'center-center',
          'style_name' => '551x551',
        ),
        'weight' => -8,
      ),
      12 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => '551x551',
        ),
        'weight' => -7,
      ),
    ),
  );

  // Exported image style: 90x112.
  $styles['90x112'] = array(
    'label' => '90X112',
    'effects' => array(
      39 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 90,
          'height' => 112,
          'style_name' => '90x112',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: 90x90.
  $styles['90x90'] = array(
    'label' => '90x90',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 90,
          'height' => 90,
          'style_name' => '90x90',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: 920x575.
  $styles['920x575'] = array(
    'label' => '920x575',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 920,
          'height' => 575,
          'style_name' => '920x575',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: campaign_desktop_970x127.
  $styles['campaign_desktop_970x127'] = array(
    'label' => 'Campaign Desktop 970x127',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 970,
          'height' => 127,
          'style_name' => 'campaign_desktop_970x127',
        ),
        'weight' => -2,
      ),
    ),
  );

  // Exported image style: campaign_mobile_320x124.
  $styles['campaign_mobile_320x124'] = array(
    'label' => 'Campaign Mobile 320X124',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 124,
          'style_name' => 'campaign_mobile_320x124',
        ),
        'weight' => -2,
      ),
    ),
  );

  // Exported image style: campaign_tablet_728x124.
  $styles['campaign_tablet_728x124'] = array(
    'label' => 'Campaign Tablet 728X124',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 728,
          'height' => 124,
          'style_name' => 'campaign_tablet_728x124',
        ),
        'weight' => -2,
      ),
    ),
  );

  // Exported image style: fw_newsletter_banner_800x118.
  $styles['fw_newsletter_banner_800x118'] = array(
    'label' => 'fw_newsletter_banner_800x118',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 118,
          'style_name' => 'fw_newsletter_banner_800x118',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: fw_newsletter_bottom_tout_390x425.
  $styles['fw_newsletter_bottom_tout_390x425'] = array(
    'label' => 'fw_newsletter_bottom_tout_390x425',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 390,
          'height' => 425,
          'style_name' => 'fw_newsletter_bottom_tout_390x425',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: fw_newsletter_tout_270x270.
  $styles['fw_newsletter_tout_270x270'] = array(
    'label' => 'fw_newsletter_tout_270x270',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 270,
          'style_name' => 'fw_newsletter_tout_270x270',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: fwrd_280x280.
  $styles['fwrd_280x280'] = array(
    'label' => 'fwrd_280x280',
    'effects' => array(
      55 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 280,
          'height' => 280,
          'style_name' => 'fwrd_280x280',
        ),
        'weight' => -5,
      ),
      56 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => 'fwrd_280x280',
        ),
        'weight' => -1,
      ),
      57 => array(
        'name' => 'ti_editorial_image_crop_generate_on_crop',
        'data' => array(),
        'weight' => 4,
      ),
    ),
  );

  // Exported image style: fwrd_280x520.
  $styles['fwrd_280x520'] = array(
    'label' => 'fwrd_280x520',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 280,
          'height' => 520,
          'style_name' => 'fwrd_280x520',
        ),
        'weight' => -5,
      ),
      9 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => 'fwrd_280x520',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: fwrd_300x300.
  $styles['fwrd_300x300'] = array(
    'label' => 'fwrd_300x300',
    'effects' => array(
      110 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
          'style_name' => 'fwrd_300x300',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: large_thumbnail.
  $styles['large_thumbnail'] = array(
    'label' => 'Large Thumbnail',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'style_name' => 'large_thumbnail',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: master_landscape_4_3.
  $styles['master_landscape_4_3'] = array(
    'label' => 'Master landscape 4:3',
    'effects' => array(
      11 => array(
        'name' => 'ti_editorial_image_crop_crop',
        'data' => array(
          'width' => 10000,
          'height' => 7500,
          'upscale' => 0,
          'weight' => 0,
          'style_name' => 'master_landscape_4_3',
        ),
        'weight' => -1,
      ),
      12 => array(
        'name' => 'ti_editorial_image_crop_generate_on_crop',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: rd_feature_image.
  $styles['rd_feature_image'] = array(
    'label' => 'rd_feature_image',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 670,
          'height' => '',
          'upscale' => 0,
          'style_name' => 'rd_feature_image',
        ),
        'weight' => -6,
      ),
      9 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => 'rd_feature_image',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: rd_feature_main_image.
  $styles['rd_feature_main_image'] = array(
    'label' => 'rd_feature_main_image',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 660,
          'height' => 530,
          'style_name' => 'rd_feature_main_image',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: rd_fwrd_blog_main_image.
  $styles['rd_fwrd_blog_main_image'] = array(
    'label' => 'rd_fwrd_blog_main_image',
    'effects' => array(
      14 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 660,
          'height' => '',
          'upscale' => 1,
          'style_name' => 'rd_fwrd_blog_main_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: rd_home_hero_slide.
  $styles['rd_home_hero_slide'] = array(
    'label' => 'rd_home_hero_slide',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 940,
          'height' => 530,
          'upscale' => 0,
          'style_name' => 'rd_home_hero_slide',
        ),
        'weight' => -2,
      ),
      12 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => 'rd_home_hero_slide',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: rd_home_hero_tout.
  $styles['rd_home_hero_tout'] = array(
    'label' => 'rd_home_hero_tout',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1400,
          'height' => '',
          'upscale' => 0,
          'style_name' => 'rd_home_hero_tout',
        ),
        'weight' => -2,
      ),
    ),
  );

  // Exported image style: rd_related_content_190x190.
  $styles['rd_related_content_190x190'] = array(
    'label' => 'rd_related_content_190x190',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 190,
          'height' => 190,
          'style_name' => 'rd_related_content_190x190',
        ),
        'weight' => -5,
      ),
    ),
  );

  // Exported image style: rd_video_tout.
  $styles['rd_video_tout'] = array(
    'label' => 'rd_video_tout',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => 187,
          'upscale' => 0,
          'style_name' => 'rd_video_tout',
        ),
        'weight' => 0,
      ),
      2 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => 'rd_video_tout',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: recipe_carousel_551_551.
  $styles['recipe_carousel_551_551'] = array(
    'label' => 'Recipe Carousel (551 X 551)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 551,
          'height' => 551,
          'style_name' => 'recipe_carousel_551_551',
        ),
        'weight' => 0,
      ),
      2 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => 'recipe_carousel_551_551',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: responsive_home_page_152x152_mobile.
  $styles['responsive_home_page_152x152_mobile'] = array(
    'label' => 'Responsive Home Page Latest 152X152',
    'effects' => array(
      94 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 152,
          'height' => 152,
          'style_name' => 'responsive_home_page_152x152_mobile',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: responsive_home_page_190x190_mobile.
  $styles['responsive_home_page_190x190_mobile'] = array(
    'label' => 'Responsive Home Page  Recipe 190X190',
    'effects' => array(
      98 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 190,
          'height' => 190,
          'style_name' => 'responsive_home_page_190x190_mobile',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: responsive_home_page_280x280_mobile.
  $styles['responsive_home_page_280x280_mobile'] = array(
    'label' => 'Responsive Home Page Hero 280x280 Mobile',
    'effects' => array(
      100 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 190,
          'height' => 190,
          'style_name' => 'responsive_home_page_280x280_mobile',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: responsive_home_page_280x280_tablet.
  $styles['responsive_home_page_280x280_tablet'] = array(
    'label' => 'Responsive Home Page Hero 280x280 Tablet',
    'effects' => array(
      102 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 222,
          'height' => 222,
          'style_name' => 'responsive_home_page_280x280_tablet',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: responsive_home_page_280x520_mobile.
  $styles['responsive_home_page_280x520_mobile'] = array(
    'label' => 'Responsive Home Page Latest 280x520 Mobile',
    'effects' => array(
      96 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 152,
          'height' => 281,
          'style_name' => 'responsive_home_page_280x520_mobile',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: responsive_home_page__video_183x103_mobile.
  $styles['responsive_home_page__video_183x103_mobile'] = array(
    'label' => 'Responsive Home Page  Video 183X103 Mobile',
    'effects' => array(
      104 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 183,
          'height' => 103,
          'style_name' => 'responsive_home_page__video_183x103_mobile',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: responsive_home_page_hero_tout_mobile.
  $styles['responsive_home_page_hero_tout_mobile'] = array(
    'label' => 'Responsive Home Page Hero Tout Mobile',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 498,
          'height' => 280,
          'style_name' => 'responsive_home_page_hero_tout_mobile',
        ),
        'weight' => -2,
      ),
    ),
  );

  // Exported image style: responsive_home_page_hero_tout_tablet.
  $styles['responsive_home_page_hero_tout_tablet'] = array(
    'label' => 'Responsive Home Page Hero Tout Tablet',
    'effects' => array(
      108 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 728,
          'height' => 409,
          'style_name' => 'responsive_home_page_hero_tout_tablet',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: ti_amg_fwrd_120x120.
  $styles['ti_amg_fwrd_120x120'] = array(
    'label' => 'ti_amg_fwrd_120x120',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
          'style_name' => 'ti_amg_fwrd_120x120',
        ),
        'weight' => -4,
      ),
      16 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => 'ti_amg_fwrd_120x120',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: ti_amg_fwrd_232x232.
  $styles['ti_amg_fwrd_232x232'] = array(
    'label' => 'ti_amg_fwrd_232x232',
    'effects' => array(
      27 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 232,
          'height' => 232,
          'style_name' => 'ti_amg_fwrd_232x232',
        ),
        'weight' => -5,
      ),
    ),
  );

  // Exported image style: ti_amg_fwrd_240x160.
  $styles['ti_amg_fwrd_240x160'] = array(
    'label' => 'ti_amg_fwrd_240x160',
    'effects' => array(
      24 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 160,
          'style_name' => 'ti_amg_fwrd_240x160',
        ),
        'weight' => -5,
      ),
      25 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => 'ti_amg_fwrd_240x160',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: ti_amg_fwrd_280x158.
  $styles['ti_amg_fwrd_280x158'] = array(
    'label' => 'ti_amg_fwrd_280x158',
    'effects' => array(
      21 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 280,
          'height' => 158,
          'style_name' => 'ti_amg_fwrd_280x158',
        ),
        'weight' => -4,
      ),
      22 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => 'ti_amg_fwrd_280x158',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: ti_amg_fwrd_920x517.
  $styles['ti_amg_fwrd_920x517'] = array(
    'label' => 'ti_amg_fwrd_920x517',
    'effects' => array(
      18 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 920,
          'height' => 517,
          'style_name' => 'ti_amg_fwrd_920x517',
        ),
        'weight' => -4,
      ),
      19 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => 'ti_amg_fwrd_920x517',
        ),
        'weight' => -1,
      ),
    ),
  );

  return $styles;
}
