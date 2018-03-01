<?php
/**
 * @file
 * ti_amg_fw_web_services.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function ti_amg_fw_web_services_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'pub';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'pub';
  $endpoint->authentication = array();
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'feed' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['pub'] = $endpoint;

  return $export;
}
