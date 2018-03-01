<?php
/**
 * @file
 * ti_amg_fw_base_components.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_base_components_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'category_page';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/page*' => 'node/*/page*',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => '[category_pagination:term_name] - Page  [category_pagination:page_number] | [site:name]',
          ),
          'description' => array(
            'value' => 'Looking for [category_pagination:term_name] recipes? Find the best [category_pagination:term_name] ideas on Food & Wine with recipes that are fast & easy. View page [category_pagination:page_number] results. [category_pagination:page_description]',
          ),
          'robots' => array(
            'value' => array(
              'index' => 0,
              'follow' => 0,
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
          ),
          'og:title' => array(
            'value' => '[category_pagination:term_name] - Page  [category_pagination:page_number] | [site:name]',
          ),
          'og:image' => array(
            'value' => '[site:url]sites/default/files/foodandwine-social.jpg',
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['category_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'html_sitemap';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sitemap/*/page*' => 'sitemap/*/page*',
        'sitemap/*/*/page*' => 'sitemap/*/*/page*',
        'sitemap/*/*/*/page*' => 'sitemap/*/*/*/page*',
        'sitemap/*/*/*/*/page*' => 'sitemap/*/*/*/*/page*',
        '' => '',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => '[current-page:title] - Page  [category_pagination:page_number] | [site:name]',
          ),
          'description' => array(
            'value' => 'Use this sitemap to find the most exciting places, experiences, emerging trends & sensations with Food & Wine. View [current-page:title]  page [category_pagination:page_number] results.',
          ),
          'robots' => array(
            'value' => array(
              'follow' => 'follow',
              'noindex' => 'noindex',
              'index' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
          ),
          'og:type' => array(
            'value' => '',
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['html_sitemap'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'microsite';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'microsites/*' => 'microsites/*',
        'microsites/*/*' => 'microsites/*/*',
        '' => '',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'robots' => array(
            'value' => array(
              'index' => 0,
              'follow' => 0,
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
          ),
          'og:title' => array(
            'value' => '[current-page:title]',
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['microsite'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nativo_partner_page';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'partner' => 'partner',
        'partner*' => 'partner*',
        'partner/*' => 'partner/*',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => '[nativo:og:title] | [site:name]',
          ),
          'robots' => array(
            'value' => array(
              'noindex' => 'noindex',
              'nofollow' => 'nofollow',
              'index' => 0,
              'follow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
          ),
          'canonical' => array(
            'value' => '[nativo:canonical]',
          ),
          'og:url' => array(
            'value' => '[nativo:og:url]',
          ),
          'og:title' => array(
            'value' => '[nativo:og:title]| [site:name]',
          ),
          'og:description' => array(
            'value' => '[nativo:og:description]',
          ),
          'og:image' => array(
            'value' => '[nativo:og:image]',
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['nativo_partner_page'] = $context;

  return $export;
}
