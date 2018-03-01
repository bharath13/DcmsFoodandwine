includes[src] = "../reference/reference.make"
;; FoodandWine.com Make File

core = 7.x
api = 2

; =====================================
; DCMS Modules
; =====================================

; Nativo Tokens
projects[ti_nativo_tokens][subdir] = "custom"
projects[ti_nativo_tokens][download][type] = "git"
projects[ti_nativo_tokens][download][url] = "git@github.com:TimeInc/dcms-modules-ti_nativo_tokens.git"
projects[ti_nativo_tokens][type] = "module"
projects[ti_nativo_tokens][download][tag] = 7.x-1.3

;jquery throttle
projects[jquery_throttle][subdir] = "custom"
projects[jquery_throttle][download][type] = "git"
projects[jquery_throttle][download][url] = "git@github.com:TimeInc/dcms-modules-jquery_throttle.git"
projects[jquery_throttle][type] = "module"
projects[jquery_throttle][download][tag] = 7.x-1.1

; =====================================
; Contrib Modules
; =====================================

; Playbook Approved Modules

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.7"

; Prevent js alerts
projects[prevent_js_alerts][subdir] = "contrib"
projects[prevent_js_alerts][version] = 1.0

; Voting Api Five Stars
projects[votingapi][subdir] = "contrib"
projects[votingapi][version] = 2.12
projects[fivestar][subdir] = "contrib"
projects[fivestar][version] = 2.1

; Importing Taxonomy
projects[taxonomy_csv][subdir] = "contrib"
projects[taxonomy_csv][version] = 5.10

; Node Convert.
projects[node_convert][subdir] = "contrib"
projects[node_convert][version] = 1.2

; New Relic
projects[new_relic_ti][download][type] = "git"
projects[new_relic_ti][download][url] = "git@github.com:TimeInc/dcms-modules-new_relic_ti.git"
projects[new_relic_ti][type] = "module"
projects[new_relic_ti][subdir] = "custom"
projects[new_relic_ti][download][tag] = "1.1"

projects[job_scheduler][version] = 2.0-alpha3
projects[job_scheduler][subdir] = "contrib"

projects[flexslider][version] = 2.0-alpha3
projects[flexslider][subdir] = "contrib"

projects[fences][version] = 1.0
projects[fences][subdir] = "contrib"

projects[apachesolr_panels][version] = 1.1
projects[apachesolr_panels][subdir] = "contrib"

projects[textformatter][version] = 1.3
projects[textformatter][subdir] = "contrib"

projects[webform_ssl][version] = 1.0-beta1
projects[webform_ssl][subdir] = "contrib"

projects[simplehtmldom][version] = 1.12
projects[simplehtmldom][subdir] = "contrib"

projects[migrate][version] = 2.8
projects[migrate][subdir]  = "contrib"

projects[migrate_d2d][version] = 2.1
projects[migrate_d2d][subdir]  = "contrib"

projects[term_ref_autocomplete][subdir] = "contrib"
projects[term_ref_autocomplete][version] = 1.0-alpha2

projects[tealium][version] = 1.3
projects[tealium][subdir] = "contrib"

projects[nodequeue][subdir] = "contrib"
projects[nodequeue][version] = 2.0

; Pathcache Module.
projects[pathcache][subdir] = "contrib"
projects[pathcache][version] = 1.1-beta1
projects[pathcache][patch][] = ../src/patchfiles/source_static_cache-2442779-0.patch

projects[entitycache][subdir] = "contrib"

projects[ldap][subdir] = "contrib"
projects[ldap][version] = "2.2"

; =====================================
; Time, Inc Shared Modules
; =====================================

projects[ti_udo][download][type] = "git"
projects[ti_udo][subdir] = "custom"
projects[ti_udo][download][url] = "git@github.com:TimeInc/dcms-modules-ti_udo"
projects[ti_udo][type] = "module"
projects[ti_udo][branch] = "7.x-1.x"

; =================================
; Schema.org JSON LD module
; =================================

projects[ti_schema_org][download][type] = "git"
projects[ti_schema_org][subdir] = "custom"
projects[ti_schema_org][download][url] = "git@github.com:TimeInc/dcms-modules-ti_schema_org.git"
projects[ti_schema_org][type] = "module"
projects[ti_schema_org][download][tag] = "7.x-3.0"

; =====================================
; TI Optimizely
; =====================================
projects[ti_optimizely][download][type] = "git"
projects[ti_optimizely][subdir] = "custom"
projects[ti_optimizely][download][url] = "git@github.com:TimeInc/dcms-modules-ti_optimizely.git"
projects[ti_optimizely][type] = "module"
projects[ti_optimizely][download][branch] = "master"
projects[ti_optimizely][download][tag] = ""

; =====================================
; Libraries
; =====================================

; CKEditor 4.5.11 Full
libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.5.11/ckeditor_4.5.11_full.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

; FlexSlider 2.2.2
libraries[flexslider][download][type]= "git"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider.git"
libraries[flexslider][download][tag]= "version/2.2.2"
libraries[flexslider][directory_name] = "flexslider"
libraries[flexslider][destination] = "libraries"

; html5shiv
libraries[html5shiv][download][type]= "git"
libraries[html5shiv][download][url] = "https://github.com/aFarkas/html5shiv.git"
libraries[history][download][tag]= "master"
libraries[html5shiv][directory_name] = "html5shiv"
libraries[html5shiv][destination] = "libraries"

; SimpleHTMLDOM 1.5
libraries[simplehtmldom][download][type]= "get"
libraries[simplehtmldom][download][url] = "http://downloads.sourceforge.net/project/simplehtmldom/simplehtmldom/1.5/simplehtmldom_1_5.zip"
libraries[simplehtmldom][directory_name] = "simplehtmldom"
libraries[simplehtmldom][destination] = "libraries"

;jquery-throttle-debounce
libraries[jquery-throttle-debounce][download][type] = "git"
libraries[jquery-throttle-debounce][download][url] = "https://github.com/cowboy/jquery-throttle-debounce.git"
libraries[jquery-throttle-debounce][type] = "library"
libraries[html5shiv][destination] = "libraries"
libraries[jquery-throttle-debounce][download][tag] = v1.1

;=======================================
;Pronto Modules
;=======================================
;TODO: Remove this once reference.make updates to pronto formatter 7.x
; Start Pronto version upgrade.
projects[ti_pronto_field_formatters][download][type] = "git"
projects[ti_pronto_field_formatters][subdir] = "custom"
projects[ti_pronto_field_formatters][download][url] = "git@github.com:TimeInc/dcms-modules-ti_pronto_field_formatters.git"
projects[ti_pronto_field_formatters][type] = "module"
projects[ti_pronto_field_formatters][download][tag] = "7.x-7.18.1"
projects[ti_pronto_field_formatters][download][branch] = ""
; disable declaration from reference.make to enable ti_pronto_field_formatters
; pull in version for update.
projects[ti_oembed] = 0
; End Pronto version upgrade.

; =====================================
; Patches
; =====================================

; #2043365: ckeditor profile exported as feature with filter format does not import properly.
;projects[ckeditor][patch][] = https://www.drupal.org/files/ckeditor-ckeditor_features_format-2043365-2.patch
;projects[ckeditor][patch][] = https://drushmakecache.phase2technology.com/drupal.org/files/ckeditor-ckeditor_features_format-2043365-2.patch

; #1970064: Page metatag set with context generate a notice (also applies to Panels)
;projects[metatag][patch][] = https://www.drupal.org/files/metatag-notice-1970064-13.patch
;projects[metatag][patch][] = https://drushmakecache.phase2technology.com/drupal.org/files/metatag-notice-1970064-13.patch

; #1433366: Text field values not mapped in field_apachesolr_field_mappings()
projects[apachesolr][patch][] = https://www.drupal.org/files/apachesolr-text-field-mapping-1433366-5.patch
projects[apachesolr][patch][] = https://drushmakecache.phase2technology.com/drupal.org/files/apachesolr-text-field-mapping-1433366-5.patch

; #2057097: Webform scheduler undefined index: scheduler (line 215). https://drupal.org/node/2057097
; projects[webform_scheduler][patch][] = http://cgit.drupalcode.org/webform_scheduler/patch/?id=d0c88a6&id2=8ae78cdd74610bfe0670004a471157011876fe67

; #2210623: Scheduling a poorly formed node or vid can break cron.
; https://drupal.org/node/2210623
;projects[state_machine][patch][] = https://drushmakecache.phase2technology.com/drupal.org/files/issues/state_flow_schedule-2.2-check-revisions-exist-2210623-3.patch

; #1796596: Fix and prevent circular redirects
; https://drupal.org/node/1796596#comment-8506117
;projects[redirect][patch][] = https://drupal.org/files/issues/redirect.circular-loops.1796596-146.patch

; #2195211: Warning after update: Missing argument 4 for entity_metadata_taxonomy_access
;projects[ctools][patch][] = https://drushmakecache.phase2technology.com/drupal.org/files/issues/ctools-n2195211-entity-from-field-access-callback-15.patch

; Alpha version not DCMS compatible.
projects[term_ref_autocomplete][patch][] = ../src/patchfiles/term_ref_autocomplete_1.x-dev_6345250104de8f65e6.patch
; #2232283 Frontpage is not cleaned in Varnish by Drush because it is reported as and not as / by expire
;projects[expire][patch][] = https://www.drupal.org/files/issues/frontpage-not-cleaned-by-varnish-2232283-1.patch

; #2232283#comment-8967169 Frontpage is not cleaned in Varnish by Drush because it is reported as and not as / by expire
;projects[expire][patch][] = http://cgit.drupalcode.org/expire/patch/?id=84cec7e35f0efed206c11f4b44f4763382e54ccd

; MRDRPL1560 :: memcache set created time changed to server request time. Allows us to clear and cache_set in same request
projects[memcache][patch][] = ../src/patchfiles/memcache-7.x-1.5-cache_set-created-time-changed-to-server-request-time.patch

; Fix for “DatabaseSchemaObjectExistsException: Table already exist” issue on content type creation
projects[drupal][patch][] = ../src/patchfiles/drupal-install-schema-shared-tables-D7-47.patch

; Fix to fetch node title in pronto json.
; projects[ti_pronto_field_formatters][patch][] = ../src/patchfiles/fw_pronto_component_changes.patch

;Whitelisting urlIsAjaxTrusted and make sure function ti_editorial_entityreference_search_image_attached_to_content returns an array FWDRUPAL-1333

; Refrain node_modules folder being scanned by drupal.
projects[drupal][patch][] = ../src/patchfiles/exclude-node_modules-folder-in-file-scan-directory.patch

; Fix for fast_404 module to allow subpath menu.
projects[fast_404][patch][] = ../src/patchfiles/fast_404_fix_for_subpath_menu.patch

; Field collection feeds import
projects[field_collection][patch][] = patchfiles/field_collection_feeds_import.patch

; =====================================
; Development Aide Modules
; =====================================
projects[token_tweaks][version] = 1.x-dev
projects[token_tweaks][subdir] = "contrib"

projects[stage_file_proxy][version] = 1.7
projects[stage_file_proxy][subdir] = "contrib"

projects[devel][subdir] = "contrib"

projects[ti_pronto_caas_importer][subdir] = "custom"
projects[ti_pronto_caas_importer][download][type] = "git"
projects[ti_pronto_caas_importer][download][url] = "git@github.com:TimeInc/dcms-modules-ti_pronto_caas_importer.git"
projects[ti_pronto_caas_importer][type] = "module"
projects[ti_pronto_caas_importer][download][branch] = master
projects[ti_pronto_caas_importer][download][tag] = ""

;======================================
; Timeinc Advertising Module
;======================================
projects[timeinc_advertising][subdir] = "custom"
projects[timeinc_advertising][type] = "module"
projects[timeinc_advertising][download][type] = "git"
projects[timeinc_advertising][download][url] = "git@github.com:TimeInc/timeinc_advertising.git"
projects[timeinc_advertising][download][tag] = "7.x-8.4-rc4"

;======================================
; Backfill to CaaS
;======================================
projects[ti_caas_backfill][subdir] = "custom"
projects[ti_caas_backfill][download][type] = "git"
projects[ti_caas_backfill][download][url] = "git@github.com:TimeInc/dcms-modules-ti_caas_backfill.git"
projects[ti_caas_backfill][type] = "module"
projects[ti_caas_backfill][download][tag] = "7.x-2.1"

;=================================
; AMP Notifier
;=================================
projects[ti_amp_notifier][subdir] = "custom"
projects[ti_amp_notifier][download][type] = "git"
projects[ti_amp_notifier][download][url] = "git@github.com:TimeInc/dcms-modules-ti_amp_notifier.git"
projects[ti_amp_notifier][type] = "module"
projects[ti_amp_notifier][download][branch] = "master"

;====================================
; TimeINC Third Party Panel Plagin
;====================================
projects[timeinc_third_party_panel_plugin][subdir] = "custom"
projects[timeinc_third_party_panel_plugin][download][type] = "git"
projects[timeinc_third_party_panel_plugin][download][url] = "git@github.com:TimeInc/timeinc_third_party_panel_plugin.git"
projects[timeinc_third_party_panel_plugin][type] = "module"
projects[timeinc_third_party_panel_plugin][download][tag] = 7.x-1.1

;=================================
; Moscow Mule Fallback Components
;=================================
projects[ti_mm_fallthrough_components][subdir] = "custom"
projects[ti_mm_fallthrough_components][download][type] = "git"
projects[ti_mm_fallthrough_components][download][url] = "git@github.com:TimeInc/dcms-modules-mm-fallthrough-components.git"
projects[ti_mm_fallthrough_components][type] = "module"
projects[ti_mm_fallthrough_components][download][tag] = 'v1.20'


; Segment IO Module
; ------------
projects[segmentio][subdir] = "custom"
projects[segmentio][type] = "module"
projects[segmentio][download][type] = "git"
projects[segmentio][download][url] = "git@github.com:TimeInc/dcms-modules-segmentio.git"
projects[segmentio][download][branch] = "master"

;====================================
; TimeINC XML Sitemap integration
;====================================
projects[timeinc_xmlsitemap][type] = module
projects[timeinc_xmlsitemap][subdir] = custom
projects[timeinc_xmlsitemap][download][type] = git
projects[timeinc_xmlsitemap][download][url] = git@github.com:TimeInc/timeinc_xmlsitemap.git
projects[timeinc_xmlsitemap][download][tag] = "7.x-2.3"
; This patch comes from xmlsitemap_views and it *must* be applied here
; because of how drush make handles recursive make files...
; drush make *unsets* "repeated" projects when they come from
; recursive make files and this causes our patch file to not be applied.
; We move it here to ensure patch for views integration is applied reliably.
projects[xmlsitemap][patch][] = ../src/patchfiles/xmlsitemap-views-integration.patch
; -------------------------

;Moscow Mule Data Layer
; ------------
projects[ti_content_api][subdir] = "custom"
projects[ti_content_api][type] = "module"
projects[ti_content_api][download][type] = "git"
projects[ti_content_api][download][url] = "git@github.com:TimeInc/dcms-modules-content-api.git"
;projects[ti_content_api][download][branch] = master

; Search Ti Temp for Image Rights
projects[search_ti][subdir] = "custom"
projects[search_ti][type] = "module"
projects[search_ti][download][type] = "git"
projects[search_ti][download][url] = "git@github.com:TimeInc/dcms-modules-search.git"
projects[search_ti][download][tag] = "v1.18"

; Workflow and Content Creation
; ------------
projects[workflow_content_creation_ti][subdir] = "custom"
projects[workflow_content_creation_ti][type] = "module"
projects[workflow_content_creation_ti][download][type] = "git"
projects[workflow_content_creation_ti][download][url] = "git@github.com:TimeInc/dcms-modules-workflow-content-creation.git"
projects[workflow_content_creation_ti][download][tag] = "v1.30"

;=================================
; Cache Control
;=================================

projects[ti_cache_control][subdir] = "custom"
projects[ti_cache_control][download][type] = "git"
projects[ti_cache_control][download][url] = "git@github.com:TimeInc/dcms-modules-cache-control.git"
projects[ti_cache_control][type] = "module"
projects[ti_cache_control][download][branch] = 'master'
