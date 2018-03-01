<?php
/**
 * @file
 * ti_amg_fw_base_components.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function ti_amg_fw_base_components_ckeditor_profile_defaults() {
  $data = array(
    'Articles' => array(
      'name' => 'Articles',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Source\'],
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\',\'-\',\'SpellChecker\',\'Scayt\'],
    [\'Undo\',\'Redo\',\'Find\',\'Replace\',\'-\',\'SelectAll\',\'RemoveFormat\'],
    [\'ti_image_rights\',\'Flash\',\'Table\',\'HorizontalRule\',\'Smiley\',\'SpecialChar\',\'Iframe\',\'next_gen_oembed\',\'hotlinks\',\'node\'],
    \'/\',
    [\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'-\',\'Subscript\',\'Superscript\'],
    [\'NumberedList\',\'BulletedList\',\'-\',\'Outdent\',\'Indent\',\'Blockquote\',\'CreateDiv\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\',\'-\',\'BidiLtr\',\'BidiRtl\'],
    [\'Link\',\'Unlink\',\'Anchor\'],
    [\'DrupalBreak\'],
    \'/\',
    [\'Format\',\'Font\',\'FontSize\'],
    [\'TextColor\',\'BGColor\'],
    [\'Maximize\',\'ShowBlocks\',\'caas_videos\',\'ecommerce\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 'f',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => 'config.allowedContent = true;
config.pasteFromWordRemoveFontStyles = true;
CKEDITOR.on(\'instanceReady\', function(ev) {
ev.editor.on(\'afterPasteFromWord\', function(evt) {
evt.data.dataValue = evt.data.dataValue.replace(/<p[^>]*>(&nbsp;|\\s)*<\\/p>/g,\'\');
evt.data.dataValue = evt.data.dataValue.replace(/<p><\\/p>/g,\'\');
evt.data.dataValue = evt.data.dataValue.replace(/<p> <\\/p>/g,\'\');
evt.data.dataValue = evt.data.dataValue.replace(/<span style="([^"]*)">/g,\'\');
evt.data.dataValue = evt.data.dataValue.replace(/<\\/span>/g,\'\');
console.log(evt.data.dataValue); }, null, null, 9);
});',
        'loadPlugins' => array(
          'caas_videos' => array(
            'name' => 'caas_videos',
            'desc' => 'Plugin to query caas for videos',
            'path' => '%base_path%sites/all/modules/custom/workflow_content_creation_ti/ti_editorial_ckeditor_plugins/plugins/caas_videos/',
            'buttons' => array(
              'caas_videos' => array(
                'icon' => 'icons/caas_videos.png',
                'label' => 'CaasVideos',
              ),
            ),
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'drupalentity' => array(
            'name' => 'drupalentity',
            'desc' => 'Plugin for embedding entities',
            'path' => '/sites/all/modules/contrib/entity_embed/js/plugins/drupalentity/',
            'default' => 'f',
            'buttons' => array(
              'node' => array(
                'label' => 'Content',
                'icon' => 'entity.png',
              ),
              'ti_media_oembed' => array(
                'label' => 'Ti Media Oembed',
                'icon' => 'entity.png',
              ),
            ),
          ),
          'ecommerce' => array(
            'name' => 'ecommerce',
            'path' => '%base_path%sites/all/modules/custom/editorial_ecommerce_workflow/plugins/ecommerce/',
            'desc' => 'Plugin for Ecommerce',
            'load' => TRUE,
            'buttons' => array(
              'ecommerce' => array(
                'label' => 'Ecommerce',
                'icon' => '/icons/icon.png',
              ),
            ),
          ),
          'hotlinks' => array(
            'name' => 'hotlinks',
            'path' => '%base_path%sites/all/modules/custom/workflow_content_creation_ti/ti_editorial_ckeditor_plugins/plugins/hotlinks/',
            'desc' => 'Plugin to Replace word as Hotlinks',
            'load' => TRUE,
            'buttons' => array(
              'hotlinks' => array(
                'label' => 'HotlinkReplacer',
                'icon' => 'hotlinks.svg',
              ),
            ),
          ),
          'next_gen_oembed' => array(
            'name' => 'next_gen_oembed',
            'path' => '%base_path%sites/all/modules/custom/ti_oembed/plugins/next_gen_oembed/',
            'desc' => 'Next Gen oEmbed Plugin',
            'load' => TRUE,
            'buttons' => array(
              'next_gen_oembed' => array(
                'label' => 'Next Gen oEmbed',
                'icon' => '/icons/icon.png',
              ),
            ),
          ),
          'ti_image_rights' => array(
            'name' => 'ti_image_rights',
            'desc' => 'Plugin for Image upload with Image rights',
            'path' => '%base_path%sites/all/modules/custom/workflow_content_creation_ti/ti_editorial_ckeditor_plugins/plugins/ti_image_rights/',
            'load' => TRUE,
            'buttons' => array(
              'ti_image_rights' => array(
                'icon' => 'icons/ti_image_rights.png',
                'label' => 'Ti Image Rigths',
              ),
            ),
          ),
          'wordcount' => array(
            'name' => 'wordcount',
            'path' => '%base_path%sites/all/modules/custom/workflow_content_creation_ti/ti_editorial_ckeditor_plugins/plugins/wordcount/',
            'desc' => 'Plugin to Count words',
            'load' => TRUE,
          ),
        ),
      ),
      'input_formats' => array(
        'article_html' => 'Article HTML',
      ),
    ),
    'FWHeadline' => array(
      'name' => 'FWHeadline',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Bold\',\'Italic\',\'Underline\',\'Link\',\'Unlink\',\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'br',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'theme',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'picture_ckeditor' => array(
            'name' => 'picture_ckeditor',
            'desc' => 'Support responsive images with the Picture module.',
            'buttons' => FALSE,
            'path' => '%base_path%sites/all/modules/contrib/picture/ckeditor/plugins/',
            'default' => 't',
          ),
        ),
      ),
      'input_formats' => array(
        'fw_headline_html' => 'FW Headline HTML',
      ),
    ),
    'WYSIWYG' => array(
      'name' => 'WYSIWYG',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Source\',\'Format\',\'Bold\',\'Italic\',\'-\',\'NumberedList\',\'BulletedList\',\'-\',\'Link\',\'Unlink\',\'Image\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\',\'next_gen_oembed\',\'hotlinks\',\'caas_videos\',\'ecommerce\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 'f',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => 'config.pasteFromWordRemoveFontStyles = true;
CKEDITOR.on(\'instanceReady\', function(ev) {
ev.editor.on(\'afterPasteFromWord\', function(evt) {
evt.data.dataValue = evt.data.dataValue.replace(/<p[^>]*>(&nbsp;|\\s)*<\\/p>/g,\'\');
evt.data.dataValue = evt.data.dataValue.replace(/<p><\\/p>/g,\'\');
evt.data.dataValue = evt.data.dataValue.replace(/<p> <\\/p>/g,\'\');
evt.data.dataValue = evt.data.dataValue.replace(/<span style="([^"]*)">/g,\'\');
evt.data.dataValue = evt.data.dataValue.replace(/<\\/span>/g,\'\');
console.log(evt.data.dataValue); }, null, null, 9);
});',
        'loadPlugins' => array(
          'caas_videos' => array(
            'name' => 'caas_videos',
            'desc' => 'Plugin to query caas for videos',
            'path' => '%base_path%sites/all/modules/custom/workflow_content_creation_ti/ti_editorial_ckeditor_plugins/plugins/caas_videos/',
            'buttons' => array(
              'caas_videos' => array(
                'icon' => 'icons/caas_videos.png',
                'label' => 'CaasVideos',
              ),
            ),
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'drupalentity' => array(
            'name' => 'drupalentity',
            'desc' => 'Plugin for embedding entities',
            'path' => '/sites/all/modules/contrib/entity_embed/js/plugins/drupalentity/',
            'default' => 'f',
            'buttons' => array(
              'node' => array(
                'label' => 'Content',
                'icon' => 'entity.png',
              ),
              'ti_media_oembed' => array(
                'label' => 'Ti Media Oembed',
                'icon' => 'entity.png',
              ),
            ),
          ),
          'ecommerce' => array(
            'name' => 'ecommerce',
            'path' => '%base_path%sites/all/modules/custom/editorial_ecommerce_workflow/plugins/ecommerce/',
            'desc' => 'Plugin for Ecommerce',
            'load' => TRUE,
            'buttons' => array(
              'ecommerce' => array(
                'label' => 'Ecommerce',
                'icon' => '/icons/icon.png',
              ),
            ),
          ),
          'hotlinks' => array(
            'name' => 'hotlinks',
            'path' => '%base_path%sites/all/modules/custom/workflow_content_creation_ti/ti_editorial_ckeditor_plugins/plugins/hotlinks/',
            'desc' => 'Plugin to Replace word as Hotlinks',
            'load' => TRUE,
            'buttons' => array(
              'hotlinks' => array(
                'label' => 'HotlinkReplacer',
                'icon' => 'hotlinks.svg',
              ),
            ),
          ),
          'next_gen_oembed' => array(
            'name' => 'next_gen_oembed',
            'path' => '%base_path%sites/all/modules/custom/ti_oembed/plugins/next_gen_oembed/',
            'desc' => 'Next Gen oEmbed Plugin',
            'load' => TRUE,
            'buttons' => array(
              'next_gen_oembed' => array(
                'label' => 'Next Gen oEmbed',
                'icon' => '/icons/icon.png',
              ),
            ),
          ),
          'ti_brightcove' => array(
            'name' => 'ti_brightcove',
            'path' => '%base_path%sites/all/modules/custom/ti_editorial_brightcove_ckeditor_plugin/plugins/brightcove/',
            'desc' => 'Plugin to insert brightcove video in to content',
            'load' => TRUE,
            'buttons' => array(
              'ti_brightcove' => array(
                'label' => 'ti_brightcove',
                'icon' => 'icons/brightcove.png',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'wysiwyg' => 'WYSIWYG',
      ),
    ),
  );
  return $data;
}
