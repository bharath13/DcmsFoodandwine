<?php
/**
 * Callback for retrieving partner_feed services.
 *
 * @param int $id
 *
 * @return object
 */
function _ti_amg_fw_partner_feed_retrieve($id, $name) {
  if (empty($name)) {
    return services_error(t("Partner Name Blank"));
  }
  $alias = 'partner-feed/' . $name;
  $path = drupal_lookup_path("source", $alias);
  $node = menu_get_object("node", 1, $path);
  if (!$node) {
    return services_error(t("Partner Feed not found"));
  }
  //$recipes_nid = array();
  if (isset($node->field_feed_recipe[LANGUAGE_NONE])) {
    foreach ($node->field_feed_recipe[LANGUAGE_NONE] as $recipe) {
      $recipes_nid[] = $recipe['target_id'];
    }
  }
  if (count($recipes_nid) == 0) {
    return services_error(t("Recipes are not attached"));
  }

  $recipes_obj = node_load_multiple($recipes_nid);
  $i = 0;
  
  foreach ($recipes_obj as $recipe_obj) {
      if ($recipe_obj->status != 0) {
            $ing_entity = array();
            $recipes_arr[$i]['title'] = $recipe_obj->title;
            $recipes_arr[$i]['import_ucid'] = "";
            $recipes_arr[$i]['subheading'] = '<![CDATA[' . $recipe_obj->title . ']]>';
            $nid = $recipe_obj->nid;
            $path = drupal_get_path_alias('node/' . $nid);
            $url = $GLOBALS['base_url'] . '/' . $path;
            $recipes_arr[$i]['url'] = $url;
            $recipes_arr[$i]['magazine_brand'] = 'FW';
            $date = $recipe_obj->published_at;
            $recipes_arr[$i]['publish_date'] = date("d-m-Y", $date);
            //* issue date*/
            if (isset($recipe_obj->field_issue[LANGUAGE_NONE][0]['tid'])) {
                $tid = $recipe_obj->field_issue[LANGUAGE_NONE][0]['tid'];
                $issue_arr[$i] = $tid;
                $recipes_arr[$i]['issue_date'] = $tid;
            }
            else {
                $recipes_arr[$i]['issue_date'] = "";
            }
            $recipes_arr[$i]['metadata_title'] = '<![CDATA[' . $recipe_obj->title . ']]>';
            $metadata_description = isset($recipe_obj->metatags[LANGUAGE_NONE]['description']) ? $recipe_obj->metatags[LANGUAGE_NONE]['description']['value'] : "";
            $recipes_arr[$i]['metadata_description'] = '<![CDATA[' . strip_tags($metadata_description) . ']]>';
            $recipes_arr[$i]['metadata_keywords'] = isset($recipe_obj->metatags[LANGUAGE_NONE]['keywords']) ? $recipe_obj->metatags[LANGUAGE_NONE]['keywords']['value'] : "";
            $recipes_arr[$i]['promo_title'] = $recipes_arr[$i]['title'];
            $teaser = (isset($recipe_obj->field_deck[LANGUAGE_NONE][0]['value'])) ? $recipe_obj->field_deck[LANGUAGE_NONE][0]['value'] : "";
            $recipes_arr[$i]['teaser'] = '<![CDATA[' . strip_tags($teaser) . ']]>';
            //author */
            if (isset($recipe_obj->field_chefs_author[LANGUAGE_NONE])) {
                $j = 0;
                foreach ($recipe_obj->field_chefs_author[LANGUAGE_NONE] as $index => $id) {
                    $chef_ids[] = $id['target_id'];
                    $recipes_arr[$i]['authors']['author' . $j]["author_id"] = $id['target_id'];
                    $j++;
                }
            }else{
                $recipes_arr[$i]['authors'] = '';
            }
            $recipes_arr[$i]['copyright'] = "";
            $recipes_arr[$i]['serves'] = isset($recipe_obj->field_serving_units[LANGUAGE_NONE][0]['value']) ? $recipe_obj->field_serving_units[LANGUAGE_NONE][0]['value'] : "";
            $yields = isset($recipe_obj->field_yield[LANGUAGE_NONE][0]['value']) ? $recipe_obj->field_yield[LANGUAGE_NONE][0]['value'] : "";
            $recipes_arr[$i]['yields'] = '<![CDATA[' . $yields . ']]>';
            $recipes_arr[$i]['level_of_difficulty'] = "";
            $recipes_arr[$i]['prep_time'] = "";
            $recipes_arr[$i]['prep_time_comment'] = "";
            if (isset($recipe_obj->field_active_time[LANGUAGE_NONE])) {
                
                foreach ($recipe_obj->field_active_time[LANGUAGE_NONE] as $key => $collectionItem) {
                    $entity = entity_load('field_collection_item', array($collectionItem['value']));
                }

                foreach ($entity as $entityid => $entityobject) {
                    $active_hour = 0;
                    if (isset($entityobject->field_active_time_hour[LANGUAGE_NONE][0]['value'])) {
                        $active_hour = $entityobject->field_active_time_hour[LANGUAGE_NONE][0]['value'];
                    }
                    $active_minute = 0;
                    if (isset($entityobject->field_active_time_minute[LANGUAGE_NONE][0]['value'])) {
                        $active_minute = $entityobject->field_active_time_minute[LANGUAGE_NONE][0]['value'];
                    }
                    $cook_time = 0;
                    if (isset($active_hour) && $active_hour != 0) {
                        $cook_time = $active_hour * 60;
                    }
                    if (isset($active_minute) && $active_minute != 0) {
                        $cook_time += $active_minute;
                    }
                    if ($cook_time != 0)
                        $recipes_arr[$i]['cook_time'] = $cook_time;
                    else
                        $recipes_arr[$i]['cook_time'] = "";
                }
            }
            else {
                $recipes_arr[$i]['cook_time'] = "";
            }
            $recipes_arr[$i]['cook_time_comment'] = "";
            $recipes_arr[$i]['cooking_time_vary'] = "";
            //Process recipe time field
            if (isset($recipe_obj->field_recipe_time[LANGUAGE_NONE])) {

                foreach ($recipe_obj->field_recipe_time[LANGUAGE_NONE] as $key => $collectionItem) {
                    $entity = entity_load('field_collection_item', array($collectionItem['value']));
                }
                foreach ($entity as $entityid => $entityobject) {
                    $recipe_hour = 0;
                    if (isset($entityobject->field_recipe_time_hour[LANGUAGE_NONE][0]['value'])) {
                        $recipe_hour = $entityobject->field_recipe_time_hour[LANGUAGE_NONE][0]['value'];
                    }
                    $recipe_minute = 0;
                    if (isset($entityobject->field_recipe_time_minute[LANGUAGE_NONE][0]
                            ['value']
                        )) {
                        $recipe_minute = $entityobject->field_recipe_time_minute[LANGUAGE_NONE][0]['value'];
                    }
                    $span = "<span>";
                    $span_end = "</span>";
                    $total_time = 0;
                    if (isset($recipe_hour) && $recipe_hour != 0) {
                        $total_time = $recipe_hour * 60;
                    }
                    
                    if (isset($recipe_minute) && $recipe_minute != 0) {
                        $total_time += $recipe_minute;
                    }
                    if ($total_time != 0)
                        $recipes_arr[$i]['total_time'] = $total_time;
                    else
                        $recipes_arr[$i]['total_time'] = "";
                }
            }
            else {
                $recipes_arr[$i]['total_time'] = "";
            }

            $recipes_arr[$i]['total_time_comment'] = "";
            $recipes_arr[$i]['oven_temperature'] = "";
            $recipes_arr[$i]['recipes']['recipe_subhead'] = "";
            //* field_ingredients */

            if (isset($recipe_obj->field_ingredients[LANGUAGE_NONE])) {
                $y = 0;
                foreach ($recipe_obj->field_ingredients[LANGUAGE_NONE] as $key => $collectionItem) {
                    $ing_entity[] = entity_load('field_collection_item', array($collectionItem['value']));
                }

                $main_ingredients = array();
                foreach ($ing_entity as $ing_index => $ingid) {
                    foreach ($ingid as $ing_entityid => $ing_entityobject) {
                        $ingredient_amount = '';
                        if (isset($ing_entityobject->field_ingredient_whole[LANGUAGE_NONE]
                                [0]['value']
                            ) && $ing_entityobject->field_ingredient_whole
                            [LANGUAGE_NONE][0]['value'] != 0
                        ) {
                            $ingredient_amount = $ing_entityobject->field_ingredient_whole[LANGUAGE_NONE][0]['value'];
                        }

                        if (isset($ing_entityobject->field_ingredient_fraction[LANGUAGE_NONE]
                                [0]['tid']
                            ) && $ing_entityobject->field_ingredient_fraction
                            [LANGUAGE_NONE][0]['tid'] != '_none'
                        ) {
                            $ingredient_amount .= " " . taxonomy_term_load($ing_entityobject->field_ingredient_fraction[LANGUAGE_NONE][0]['tid'])->name;
                        }

                        $recipes_arr[$i]['recipes']['ingredient' . $y]['ingredient_amount'] = trim($ingredient_amount);

                        if (isset($ing_entityobject->field_ingredient_unit[LANGUAGE_NONE]
                                [0]['tid']
                            )) {
                            $ing_unit_tid = $ing_entityobject->field_ingredient_unit[LANGUAGE_NONE][0]['tid'];
                            $ingredient_unit_arr[] = $ing_unit_tid;
                            $recipes_arr[$i]['recipes']['ingredient' . $y]['ingredient_amount_type'] = $ing_unit_tid;
                            //$recipes_arr[$i]['ingredient']['ingredient' . $y]['ingredient_amount_type'] = $ing_unit_tid;
                        }
                        else {
                            $recipes_arr[$i]['recipes']['ingredient' . $y]['ingredient_amount_type'] = "";
                            //$recipes_arr[$i]['ingredient']['ingredient' . $y]['ingredient_amount_type'] = "";
                        }
                        $recipes_arr[$i]['recipes']['ingredient' . $y]['ingredient_amount_qualifier'] = "";
                        if (isset($ing_entityobject->field_ingredient_name
                                [LANGUAGE_NONE][0]['value']
                            )) {
                            $ing_name = $ing_entityobject->field_ingredient_name[LANGUAGE_NONE][0]['value'];
                            $recipes_arr[$i]['recipes']['ingredient' . $y]['ingredient_name'] = '<![CDATA[' . $ing_name . ']]>';
                        }
                        else {
                            $recipes_arr[$i]['recipes']['ingredient' . $y]['ingredient_name'] = "";
                        }

                        $recipes_arr[$i]['recipes']['ingredient' . $y]['ingredient_comments'] = isset($ing_entityobject->field_prep_notes[LANGUAGE_NONE][0]['value']) ? $ing_entityobject->field_prep_notes[LANGUAGE_NONE][0]['value'] : "";

                        if (isset($ing_entityobject->field_ingredient_is_main[LANGUAGE_NONE][0]['value']) && $ing_entityobject->field_ingredient_is_main[LANGUAGE_NONE][0]['value'] == '1') {
                            if (isset($ing_entityobject->field_ingredient_display_text
                                    [LANGUAGE_NONE][0]['value']
                                )) {
                                $main_ingredients[] = $ing_entityobject->field_ingredient_display_text[LANGUAGE_NONE][0]['value'];
                            }
                        }

                        $recipes_arr[$i]['recipes']['ingredient' . $y]['display_comments'] = "";
                        $recipes_arr[$i]['recipes']['ingredient' . $y]['shopping_list_category'] = "";
                    }

                    $y++;
                }
            }
            else {
                $recipes_arr[$i]['recipes']['ingredient' . $y]['ingredient_amount'] = "";
                $recipes_arr[$i]['recipes']['ingredient' . $y]['ingredient_amount_type'] = "";
                $recipes_arr[$i]['recipes']['ingredient' . $y]['ingredient_amount_qualifier'] = "";
                $recipes_arr[$i]['recipes']['ingredient' . $y]['ingredient_name'] = "";
                $recipes_arr[$i]['recipes']['ingredient' . $y]['ingredient_comments'] = "";
                $recipes_arr[$i]['recipes']['ingredient' . $y]['display_comments'] = "";
                $recipes_arr[$i]['recipes']['ingredient' . $y]['shopping_list_category'] = "";
            }
            
            $field_directions = array();
            if (isset($recipe_obj->field_directions[LANGUAGE_NONE])) {
                foreach ($recipe_obj->field_directions[LANGUAGE_NONE] as $key => $collectionItem) {
                    $field_directions[] = entity_load('field_collection_item', array($collectionItem['value']));
                }

                $count = 0;                
                
                foreach ($field_directions as $index => $id) {
                    foreach ($id as $entityid => $entityobject) {
                        
                        if (isset($entityobject->field_direction_list_title[LANGUAGE_NONE]
                                [0]['value']
                            )) {
                            $step_title = $entityobject->field_direction_list_title[LANGUAGE_NONE][0]['value'];
                        }
                         $step_count = 0;
                        if (isset($entityobject->field_direction_steps[LANGUAGE_NONE])) {
                            $step_content = array();
                            foreach ($entityobject->field_direction_steps[LANGUAGE_NONE] as $step_key => $steps) {
                                if (isset($step_title)) {
                                    $step_title_tag = $step_title;
                                    if (isset($steps['value'])) {
                                        $step_value = $step_title_tag . $steps['value'];
                                    }
                                }
                                else {
                                    if (isset($steps['value'])) {
                                        $step_value = $steps['value'];
                                    }
                                }
                               
                                $step_content[$step_count] = $step_value;
                                $step_count++;
                            }

                            foreach ($step_content as $step) {
                                $recipes_arr[$i]['preparation_steps']['step' . $count] = '<![CDATA[' . strip_tags($step) . ']]>';
                                $count++;
                            }
                        }
                    }
                }
            }
            else
                $recipes_arr[$i]['preparation_steps']['step'] = "";

            $recipes_arr[$i]['course_type']['value'] = "";
            $recipes_arr[$i]['food_type']['value'] = "";
            $recipes_arr[$i]['main_ingredient']['value'] = isset($main_ingredients) ? '<![CDATA[' . strip_tags($main_ingredients[0]) . ']]>' : "";
            $recipes_arr[$i]['cuisine']['value'] = "";
            $recipes_arr[$i]['special_diet']['value'] = "";
            $recipes_arr[$i]['calories'] = "";
            $recipes_arr[$i]['total_fat'] = "";
            $recipes_arr[$i]['saturated_fat'] = "";
            $recipes_arr[$i]['cholesterol'] = "";
            $recipes_arr[$i]['sodium'] = "";
            $recipes_arr[$i]['carbohydrates'] = "";
            $recipes_arr[$i]['fiber'] = "";
            $recipes_arr[$i]['protein'] = "";
            $recipes_arr[$i]['sugar'] = "";
            $recipes_arr[$i]['calcium'] = "";
            $recipes_arr[$i]['tip_text'] = "";
            if (isset($recipe_obj->field_images[LANGUAGE_NONE][0]['target_id'])) {
                $image_obj = node_load($recipe_obj->field_images[LANGUAGE_NONE][0]['target_id']);
                $image_uri = isset($image_obj->field_image[LANGUAGE_NONE][0]['uri']) ? $image_obj->field_image[LANGUAGE_NONE][0]['uri'] : "";
                $image_path = file_create_url($image_uri);
                $image_title = isset($image_obj->title) ? $image_obj->title : "";
            }
            
            $recipes_arr[$i]['images']['image']['image_title'] = "";
            $recipes_arr[$i]['images']['image']['image_cut'] = "";
            $recipes_arr[$i]['images']['image']['image_url'] = $image_path;
            $image_alt_text = isset($recipe_obj->field_overwrite_image_alt_text[LANGUAGE_NONE][0]['value'])?$recipe_obj->field_overwrite_image_alt_text[LANGUAGE_NONE][0]['value']:'';
            $recipes_arr[$i]['images']['image']['image_alt_text'] = '<![CDATA[' . strip_tags($image_alt_text) . ']]>';
            $recipes_arr[$i]['images']['image']['image_description'] = "";
            $image_display_credit = isset($recipe_obj->field_overwrite_image_credit[LANGUAGE_NONE][0]['value']) ? $recipe_obj->field_overwrite_image_credit[LANGUAGE_NONE][0]['value'] : "";
            $recipes_arr[$i]['images']['image']['image_display_credit'] = '<![CDATA[' . strip_tags($image_display_credit) . ']]>';
            $recipes_arr[$i]['images']['image']['image_keywords'] = "";

            $recipes_arr[$i]['images']['image']['cut']['image_size'] = "";
            $recipes_arr[$i]['images']['image']['cut']['image_url'] = $image_path;

            if (isset($recipe_obj->field_related_videos[LANGUAGE_NONE])) {
                $x = 0;
                foreach ($recipe_obj->field_related_videos[LANGUAGE_NONE] as $index => $id) {
                    $target_ids = $id['target_id'];
                    $video_obj = node_load($target_ids);
                    $video_promo_text = $video_obj->title;
                    $video_uri = $video_obj->field_video_thumbnail[LANGUAGE_NONE][0]['uri'];
                    $video_url = file_create_url($video_uri);

                    $recipes_arr[$i]['related_videos'][$x]['related_video']['video_promo_text'] = $video_promo_text;
                    $recipes_arr[$i]['related_videos'][$x]['related_video']['video_url'] = $video_url;
                    $x++;
                }
            }
            else {
                $recipes_arr[$i]['related_videos']['related_video']['video_promo_text'] = "";
                $recipes_arr[$i]['related_videos']['related_video']['video_url'] = "";
            }
            $recipes_arr[$i]['sponsor']['sponsor_name'] = "";
            $recipes_arr[$i]['sponsor']['sponsor_url'] = "";
            $recipes_arr[$i]['sponsor']['sponsor_logo_url'] = "";
            $recipes_arr[$i]['sponsor']['sponsor_tracking_tag'] = "";
            $recipes_arr[$i]['book']['title'] = "";

            $i++;
        }
    }
  $data_arr["issues"] = _partner_feed_taxonomy_name_by_id($issue_arr);
  $data_arr["ing_unit"] = _partner_feed_taxonomy_name_by_id($ingredient_unit_arr);  
  $data_arr['authors'] = _partner_feed_get_chef_details($chef_ids);
  $recipes_arr = _partner_feed_array_value_replace($recipes_arr, $data_arr);
  return $recipes_arr;
}

/**
 * Access callback for the partner_feed service.
 *
 * @param string $op
 *  The operation that's going to be performed.
 * @param array $args
 *  The arguments that will be passed to the callback.
 *
 * @return bool
 *  Whether access is given or not.
 */
function _ti_amg_fw_partner_feed_access($args) {
  $access = TRUE;
  return $access;
}

function _partner_feed_taxonomy_name_by_id($tid_arr) {
  $term_arr = taxonomy_term_load_multiple($tid_arr);
  foreach ($term_arr as $term) {
    $term_name[$term->tid] = $term->name;
  }
  return $term_name;
}

function _partner_feed_array_value_replace($recipes_arr, $data_arr) {

  foreach ($recipes_arr as $recipe_key => $recipe_value) {      
    $recipes_arr[$recipe_key]["issue_date"] = $data_arr["issues"][$recipe_value["issue_date"]];   
     
    $ingredient_count = count($recipe_value['recipes']) - 1;
    if($ingredient_count >= 1){
        for($ingredient=0;$ingredient<$ingredient_count;$ingredient++) {
          $unit_tid = $recipes_arr[$recipe_key]["recipes"]['ingredient'.$ingredient]["ingredient_amount_type"];      
          $recipes_arr[$recipe_key]['recipes']['ingredient'.$ingredient]["ingredient_amount_type"] = $data_arr["ing_unit"][$unit_tid];          
        }
    }
    $n = 0;
    foreach ($recipe_value['authors'] as $author_key => $author_value) {
      $author_id = $recipes_arr[$recipe_key]['authors']['author'.$n]["author_id"];
      $recipes_arr[$recipe_key]['authors']['author'.$n]['first_name'] = $data_arr['authors'][$author_id]['first_name'];
      $recipes_arr[$recipe_key]['authors']['author'.$n]['last_name'] = $data_arr['authors'][$author_id]['last_name'];
      $recipes_arr[$recipe_key]['authors']['author'.$n]['title'] = $data_arr['authors'][$author_id]['title'];
      $recipes_arr[$recipe_key]['authors']['author'.$n]['email'] = $data_arr['authors'][$author_id]['email'];
      $recipes_arr[$recipe_key]['authors']['author'.$n]['nick_name'] = $data_arr['authors'][$author_id]['nick_name'];
      unset($recipes_arr[$recipe_key]['authors']['author'.$n]["author_id"]);
      $n++;
    }
    unset($recipes_arr[$recipe_key]["ingredient"]);
  }
  return $recipes_arr;
}

function _partner_feed_get_chef_details($chef_ids) {
  $author_node = node_load_multiple($chef_ids);
  foreach ($author_node as $author) {
    $authors[$author->nid]['first_name'] = isset($author->field_given_name[LANGUAGE_NONE][0]['value']) ? $author->field_given_name[LANGUAGE_NONE][0]['value'] : "";
    $authors[$author->nid]['last_name'] = isset($author->field_last_name[LANGUAGE_NONE][0]['value']) ? $author->field_last_name[LANGUAGE_NONE][0]['value'] : "";
    $authors[$author->nid]['title'] = isset($author->field_job_title[LANGUAGE_NONE][0]['value']) ? $author->field_job_title[LANGUAGE_NONE][0]['value'] : "";
    $authors[$author->nid]['email'] = isset($author->field_email[LANGUAGE_NONE][0]['value']) ? $author->field_email[LANGUAGE_NONE][0]['value'] : "";
    $authors[$author->nid]['nick_name'] = "";
  }
  return $authors;
}
