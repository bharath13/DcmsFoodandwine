<?php
/**
 * @file
 * ti_amg_fwrd_notification.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ti_amg_fwrd_notification_default_rules_configuration() {
  $items = array();
  $items['rules_send_message_to_slack_on_content_creation_fw'] = entity_import('rules_config', '{ "rules_send_message_to_slack_on_content_creation_fw" : {
      "LABEL" : "Send message to slack on content creation - FW",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "slack", "state_flow" ],
      "ON" : { "state_flow_event_fired" : [], "node_insert" : [], "node_update" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "article" : "article",
                "blog" : "blog",
                "category" : "category",
                "gallery" : "gallery",
                "recipe" : "recipe",
                "video" : "video"
              }
            }
          }
        },
        { "node_is_published" : { "node" : [ "node" ] } }
      ],
      "DO" : [
        { "slack_send_message" : {
            "webhook_url" : "https:\\/\\/hooks.slack.com\\/services\\/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",
            "channel" : "[site:slack_food_channel]",
            "username" : "Food \\u0026 Wine",
            "message" : "Content Author - [node:field-author]\\r\\nUser - [node:author]\\r\\nContent status: [node:status]",
            "title" : "[node:title]",
            "title_link " : "[node:node_public_url]"
          }
        }
      ]
    }
  }');
  return $items;
}
