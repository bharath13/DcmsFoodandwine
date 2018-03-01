<?php
/**
 * @file
 * ti_amg_fw_channel_landing_page_context_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_channel_landing_page_context_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_channel_landing_page';
  $context->description = 'TI AMG FoodandWine Channel Landing Page';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'channel_landing_page' => 'channel_landing_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-eba760fec706dbf3d875a6ba175a1503' => array(
          'module' => 'views',
          'delta' => 'eba760fec706dbf3d875a6ba175a1503',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-aa78129e30f57ea12cc43025c6d2b40b' => array(
          'module' => 'views',
          'delta' => 'aa78129e30f57ea12cc43025c6d2b40b',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-49cf75b6c39db855fabfc5769ff9e8dd' => array(
          'module' => 'views',
          'delta' => '49cf75b6c39db855fabfc5769ff9e8dd',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-3a55ba200aa45766742c4e7d8194ce0b' => array(
          'module' => 'views',
          'delta' => '3a55ba200aa45766742c4e7d8194ce0b',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-e1b6d86d5dc2507127c7d74ec17cd483' => array(
          'module' => 'views',
          'delta' => 'e1b6d86d5dc2507127c7d74ec17cd483',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-6ad428bd2e09a13e22baf5e12bc4f1a5' => array(
          'module' => 'views',
          'delta' => '6ad428bd2e09a13e22baf5e12bc4f1a5',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-6ecd65296a66c3448dab7b8e41f680b4' => array(
          'module' => 'views',
          'delta' => '6ecd65296a66c3448dab7b8e41f680b4',
          'region' => 'content',
          'weight' => '-3',
        ),
        'views-2eab58869da1ae4edfdeec9438d693f7' => array(
          'module' => 'views',
          'delta' => '2eab58869da1ae4edfdeec9438d693f7',
          'region' => 'content',
          'weight' => '-2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('TI AMG FoodandWine Channel Landing Page');
  $export['ti_amg_fw_channel_landing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_recipe_landing_page_context';
  $context->description = 'TI AMG FoodandWine Recipe Landing Page Context';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'channel_landing_page' => 'channel_landing_page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'recipes' => 'recipes',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'FALSE' => 'FALSE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-eba760fec706dbf3d875a6ba175a1503' => array(
          'module' => 'views',
          'delta' => 'eba760fec706dbf3d875a6ba175a1503',
          'region' => 'content',
          'weight' => '-10',
        ),
        'ti_amg_fw_custom-fw_recipe_search_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_recipe_search_block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-aa78129e30f57ea12cc43025c6d2b40b' => array(
          'module' => 'views',
          'delta' => 'aa78129e30f57ea12cc43025c6d2b40b',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-49cf75b6c39db855fabfc5769ff9e8dd' => array(
          'module' => 'views',
          'delta' => '49cf75b6c39db855fabfc5769ff9e8dd',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-3a55ba200aa45766742c4e7d8194ce0b' => array(
          'module' => 'views',
          'delta' => '3a55ba200aa45766742c4e7d8194ce0b',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-e1b6d86d5dc2507127c7d74ec17cd483' => array(
          'module' => 'views',
          'delta' => 'e1b6d86d5dc2507127c7d74ec17cd483',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-6ad428bd2e09a13e22baf5e12bc4f1a5' => array(
          'module' => 'views',
          'delta' => '6ad428bd2e09a13e22baf5e12bc4f1a5',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-6ecd65296a66c3448dab7b8e41f680b4' => array(
          'module' => 'views',
          'delta' => '6ecd65296a66c3448dab7b8e41f680b4',
          'region' => 'content',
          'weight' => '-3',
        ),
        'views-2eab58869da1ae4edfdeec9438d693f7' => array(
          'module' => 'views',
          'delta' => '2eab58869da1ae4edfdeec9438d693f7',
          'region' => 'content',
          'weight' => '-2',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('TI AMG FoodandWine Recipe Landing Page Context');
  $export['ti_amg_fw_recipe_landing_page_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_section_fronts_context';
  $context->description = 'TI AMG FoodandWine Section Fronts Context';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'video' => 'video',
        'recipes' => 'recipes',
        'wine' => 'wine',
        'restaurants' => 'restaurants',
        'entertaining' => 'entertaining',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_ads-multiad_300x250' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'multiad_300x250',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'ti_amg_fw_custom-fw_outbrain_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_outbrain_block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'ti_amg_ads-normal_300x250' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'normal_300x250',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'ti_amg_ads-cmtoutad_300x250' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'cmtoutad_300x250',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'ti_amg_fw_custom-fw_newsletter_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_newsletter_block',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'ti_amg_fw_custom-fw_pinterest_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_pinterest_block',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'ti_amg_fw_custom-fw_twitter_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_twitter_block',
          'region' => 'sidebar_second',
          'weight' => '-4',
        ),
        'ti_amg_ads-142x70_1' => array(
          'module' => 'ti_amg_ads',
          'delta' => '142x70_1',
          'region' => 'sidebar_second',
          'weight' => '-3',
        ),
        'ti_amg_ads-142x70_2' => array(
          'module' => 'ti_amg_ads',
          'delta' => '142x70_2',
          'region' => 'sidebar_second',
          'weight' => '-2',
        ),
        'ti_amg_ads-142x70_3' => array(
          'module' => 'ti_amg_ads',
          'delta' => '142x70_3',
          'region' => 'sidebar_second',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('TI AMG FoodandWine Section Fronts Context');
  $export['ti_amg_fw_section_fronts_context'] = $context;

  return $export;
}
