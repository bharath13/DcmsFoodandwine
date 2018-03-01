<?php
/**
 * @file
 * ti_amg_fw_base_components.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function ti_amg_fw_base_components_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'picture_breakpoints';
  $breakpoint_group->name = 'Picture Breakpoints';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.desktop',
    1 => 'custom.user.tablet',
    2 => 'custom.user.mobile',
    3 => 'module.picture.empty_srcset',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['picture_breakpoints'] = $breakpoint_group;

  return $export;
}
