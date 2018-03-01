(function($){
  Drupal.behaviors.ti_amg_tl__custom_newsletter = {
      attach: function(context, settings) {
          jQuery('#newsletter_form').submit(function() {
              cm_tout = 'CM Tout';
              news_array = new Array();
              if (jQuery("#dish_newsletter").is(':checked')) {
                  cm_tout = 'CM Tout- ';
                  news_array.push('Dish');
              }
              ;
              if (jQuery("#wine_newsletter").is(':checked')) {
                  cm_tout = 'CM Tout- ';
                  news_array.push('Wine');
              }
              ;
              if (jQuery("#daily_newsletter").is(':checked')) {
                  cm_tout = 'CM Tout- ';
                  news_array.push('Daily');
              }
              ;
              newsletters = cm_tout + news_array.join(", ");
              jQuery('#newsletter_source').val(newsletters);
          });
          var formValidation = {
              'completeForm': function() {
                  var user_email = jQuery('#e_mail').val();
                  var selected_newsletter = jQuery('input:checked').length > 0;
                  if (((user_email === 'Enter your email address') || !user_email) && !selected_newsletter)
                  {
                      formValidation.errors = true;
                      jQuery('#secondary-newsletters .li, .signup-box').prepend('<span class="error">!</span>');
                      jQuery('#flash-error').css('left', '162px');
                      jQuery('input#e_mail').css('background-color', '#fca7a7');
                      jQuery('#flash-error').text('*email & selection required');
                  }
                  else if (!selected_newsletter && user_email)
                  {
                      formValidation.errors = true;
                      jQuery('#secondary-newsletters .li, .signup-box').prepend('<span class="error">!</span>');
                      jQuery('#flash-error').css('left', '162px');
                      jQuery('#flash-error').text('*selection required');
                  }
                  else if ((user_email === 'Enter your email address') || !user_email)
                  {
                      formValidation.errors = true;
                      jQuery('#flash-error').css('left', '218px');
                      jQuery('input#e_mail').css('background-color', '#fca7a7');
                      jQuery('#flash-error').text('*email required');
                  }
              },
              'correctEmail': function() {
                  var user_email = jQuery('#e_mail').val();
                  var email_pattern = /^.+@.+[.].{2,}$/i;
                  if (!email_pattern.test(user_email))
                  {
                      formValidation.errors = true;
                      jQuery('input#e_mail').css('background-color', '#fca7a7');
                      jQuery('#flash-error').css('left', '202px').text(' *valid email required');
                  }
                  else
                  {
                      jQuery('input#e_mail').css('background-color', '#fff');
                      jQuery('#flash-error').text('');
                  }
              },
              'chooseNewsletter': function() {
                  var user_email = jQuery('#e_mail').val();
                  var selected_newsletter = jQuery('input:checked').length > 0;
                  var user_email = jQuery('#e_mail').val();
                  if ((!selected_newsletter) && (user_email))
                  {
                      formValidation.errors = true;
                      jQuery('#secondary-newsletters .li, .signup-box').prepend('<span class="error">!</span>');
                      jQuery('#flash-error').text(' *selection required');
                  }
              },
              'submitForm': function() {
                  if (!formValidation.errors)
                  {
                      var newsletters = new Array();
                      var newsletter_value = jQuery('input[name="newsletter[newsletter_ids][][newsletter_id]"]:checked');
                      var email = jQuery('#e_mail').val();
                      jQuery.each(newsletter_value, function(i)
                      {
                          var newsletter_selected = jQuery(newsletter_value[i]).val();
                          newsletters.push(newsletter_selected);
                      });
                      if (jQuery.inArray('285407556', newsletters) != -1)
                      {
                          var dish = 'theDish=Y';
                      }
                      else
                      {
                          var dish = 'theDish=N';
                      }
                      ;
                      if (jQuery.inArray('2069486254', newsletters) != -1)
                      {
                          var wine = '&wineList=Y';
                      }
                      else
                      {
                          var wine = '&wineList=N';
                      }
                      ;
                      if (jQuery.inArray('260816546', newsletters) != -1)
                      {
                          var fw = '&foodandwine=Y';
                      }
                      else
                      {
                          var fw = '&foodandwine=N';
                      }
                      ;
                      window.location.replace("http://e.foodandwine.com/amex40/custom/foodandwine_reg/registration.php?" + dish + wine + fw + "&em=" + email + "&ds=CM_TOUT");
                  }
              }
          };
          jQuery(document).ready(function() {
              jQuery('#e_mail').change(formValidation.correctEmail);
              jQuery('#newsletter_form').submit(function() {
                  jQuery('.error').remove();
                  jQuery('#flash-error').text('');
                  formValidation.errors = false;
                  formValidation.completeForm();
                  formValidation.submitForm();
                  return false;
              });
              
              $(".view.view-ti-amg-fw-tags-related-videos.view-id-ti_amg_fw_tags_related_videos.view-display-id-block .views-view-grid td a, .view.view-ti-amg-fw-video-list.view-id-ti_amg_fw_video_list.view-display-id-block .views-view-grid td a").hover(function() {
                  $(this).children('span').show();
              },
                      function() {
                          $(this).children('span').hide();
                      });
          });
      }
  };
})(jQuery)    