/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

(function($) {
  // Overwritting the default autocomplete.js functions for autocomplete to work.
  Drupal.jsAC.prototype.select = function(node) {
    this.input.value = $(node).data('autocompleteValue');
    if (jQuery(this.input.value).hasClass('unlink')) {
        this.input.value = '';
        return false;
    }
    if (this.input.value.match(/suggested_item/)) {
      var href = jQuery(this.input.value).attr('href');
      window.location.href = href;
      this.input.value = '';
    } else {
      if (jQuery(this.input).hasClass('auto_submit')) {
        this.input.form.submit();
      }
    }
  };
  // Overwritting the default autocomplete.js functions for autocomplete to work.
  Drupal.jsAC.prototype.found = function(matches) {
    // If no value in the textfield, do not show the popup.
    if (!this.input.value.length) {
      return false;
    }
    // Prepare matches.
    var ul = $('<ul class="dropdown-menu"></ul>');
    var ac = this;
    ul.css({
      display: 'block',
      right: 0
    });
    for (var key in matches) {
      $('<li></li>')
              .html(matches[key]).click(function(e) {
        e.preventDefault();
      })
              .mousedown(function() {
                ac.select(this);
              })
              .mouseover(function() {
                ac.highlight(this);
              })
              .mouseout(function() {
                ac.unhighlight(this);
              })
              .data('autocompleteValue', key)
              .appendTo(ul);
    }
    // Show popup with matches, if any.
    if (this.popup) {
      if (ul.children().length) {
        $(this.popup).empty().append(ul).show();
        if ($('body').hasClass('mobile')) {
          $('#page_header_right .dropdown').remove();
          $('body.page-searchmobi #page_header_right').append($(this.popup).empty().append(ul).show());
        }
        $(this.ariaLive).html(Drupal.t('Autocomplete popup'));
      }
      else {
        $(this.popup).css({visibility: 'hidden'});
        this.hidePopup();
      }
    }
  };

    Drupal.behaviors.tocDropDown = {
        attach: function(context, settings) {            
            
            var checkvalue = window.location.pathname;

            $(".view-ti-amg-fw-recipe-finder-recipe-theme-filter .view-content a").each(function() {
                if ($(this).attr('href') == checkvalue)
                {
                    $(this).addClass("active");
                }
            });
            $('.recipe-parent').click(function() {

                $('.recipe-parent-theme').children('.views-row').css({'display': 'none'});
            });
            if ($('body.recipe-finder-parent-term').length <= 0) {
                $('.view-ti-amg-fw-recipe-finder-recipe-theme-filter a.active').closest('.recipe-parent-theme').children('.views-row').css({'display': 'block'});
            }

            $('.more-content-link').click(function(e) {
                e.preventDefault();
                $('.hidden-links').toggle();
                val = $('.more-content-link').html();
                if (val.indexOf('More') > -1) {
                    $('.more-content-link').html('Close &#8743;');
                }
                else {
                    $('.more-content-link').html('More &#8744;');
                }
            });
            $('.selected-issue').html($('#block-ti-amg-fw-custom-toc-issue-dropdown .form-select option:selected').text());
            $('#block-ti-amg-fw-custom-toc-issue-dropdown .form-select')
                    .change(function(e) {
                        window.location.href = this.value;
                    });
        }
    };

    Drupal.behaviors.clpPromoCarousel = {        
                attach: function(context, settings) { 
                        $(".preview .frame, .preview .caption").each(function() {
                                $(this).hide();
                        });
            $(".features .feature .pointer").each(function() {
                $(this).hide();
            });
                        $('.preview .frame1, .preview .caption1, .features .frame1 .pointer').show();
                        $('.features .feature').on('mouseover', function() {
                                var $el = $(this), frm = $el.attr('data-frame');
                                $('.preview .frame, .preview .caption, .feature .pointer').hide();
                                $('.preview .frame' + frm + ', .preview .caption' + frm + ', .features .frame' + frm + ' .pointer').show();
                        }); 
                }
    };

    Drupal.behaviors.RecipeFinder = {        
                attach: function(context, settings) { 
                       $(window).load(function() {
                var checkvalue = window.location.pathname;
                $(".theme-listing .recipe-parent-theme h3 a").each(function() {
                    if ($(this).attr('href') == checkvalue)
                    {
                        $(this).addClass("active");
                    }
                });                 
            });
        }
    };

    Drupal.behaviors.HdrSrchBox = {        
                attach: function(context, settings) { 
                        $("#block-search-form .input-group-btn .btn").attr("title", "Search");
                }
    };
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
                            var dish = 'thedish=Y';
                        }
                        else
                        {
                            var dish = 'thedish=N';
                        }
                        ;
                        if (jQuery.inArray('2069486254', newsletters) != -1)
                        {
                            var wine = '&winelist=Y';
                        }
                        else
                        {
                            var wine = '&winelist=N';
                        }
                        ;
                        if (jQuery.inArray('260816546', newsletters) != -1)
                        {
                            var fw = '&fwdaily=Y';
                        }
                        else
                        {
                            var fw = '&fwdaily=N';
                        }
                        ;
                        window.location.replace("https://pages.email.foodandwine.com/opt-in?" + dish + wine + fw + "&email_address=" + email + "&source=CM_TOUT");
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
    
    Drupal.behaviors.genericPage = {
        attach: function(context, settings) {
            
            //Adding the span tag if it is not there for generic page carousel
            if(!($('.node-type-page .rsw-hdr span.counter').length > 0))
                $('.node-type-page .rsw-hdr').append("<span class='counter'></span>");
            
        }
    };
    
    //Sticking the Right Rail Ads while scrolling for 2 seconds
    Drupal.behaviors.stickyRightRail = {
        attach: function(context, settings) {            
            
            //All pages except HD slideshow pages
            if (!$('body').hasClass('gallery-layout-hd')) {
                if ($('.region-sidebar-second').length) {
                    var $win = $(window),
                    lastScrollTop = 0,
                    first_ad_flag = 0,
                    second_ad_flag = 0;                   
                    $win.scroll(function() {
                        //Calculating the scroll value
                        var scrollTop = $win.scrollTop();
                        if (scrollTop > 0) {
                            var scrollDir = scrollTop > lastScrollTop ? 'down' : 'up';
                        }
                       
                        if(scrollDir == 'up')
                        {
                            first_ad_flag = 1;
                            second_ad_flag = 1;
                        }
                        //Assigning the right rail height to left side body section
                        //when it is less than right rail height
                        var left_side_content_height = $('.region-content').height(),
                        right_sidebar_height = $('.region-sidebar-second').height();
                        if (left_side_content_height < right_sidebar_height)
                        {
                            //Making the left side content height as per the right rail height
                            //to stick the second Ad
                            $('.region-content').css('height', right_sidebar_height);
                        }
                                                
                        //Sticking the First Ad
                        var first_ad_start_limit = parseInt($('#block-ti-amg-ads-multiad-300x250').offset().top),
                        first_ad_down_limit = parseInt($('#block-ti-amg-fw-custom-fw-outbrain-block').offset().top),
                        first_ad_height = $('#block-ti-amg-ads-multiad-300x250').height();
                        if (first_ad_height >= 250) {
                            if (parseInt(scrollTop) >= first_ad_start_limit && parseInt(scrollTop) < first_ad_down_limit && first_ad_flag == 0) {
                                first_ad_flag = 1;
                                $('.region-sidebar-second').css({'position': 'fixed', 'top': '0'});
                                setTimeout(function() {
                                    $('.region-sidebar-second').css({'position': 'relative', 'top': 'auto'});                                
                                    
                                }, 2000);
                            }
                        }
                                                    
                        //Sticking the Second Ad         
                        var second_ad_start_limit = parseInt($('#block-ti-amg-ads-normal-300x250').offset().top),
                        second_ad_down_limit = parseInt($('#block-ti-amg-ads-normal-300x250').offset().top) + $('#block-ti-amg-ads-normal-300x250').height(),
                        second_ad_height = $('#block-ti-amg-ads-normal-300x250').height();
                        if (second_ad_height >= 250) {
                            if (parseInt(scrollTop) >= second_ad_start_limit && parseInt(scrollTop) < second_ad_down_limit && second_ad_flag == 0) {
                                second_ad_flag = 1;
                                
                                var second_ad_top_postion = 0;
                                $('.region-sidebar-second > section').each(function() {
                                    var ele_id = $(this).attr('id');
                                    if (ele_id == 'block-ti-amg-ads-normal-300x250') {
                                        return false;
                                    }
                                    second_ad_top_postion = second_ad_top_postion + $(this).height();
                                });
                                
                                $('.region-sidebar-second').css({'position': 'fixed', 'top': '-' + second_ad_top_postion + 'px'});
                                setTimeout(function() {
                                    $('.region-sidebar-second').css({'position': 'relative', 'top': 'auto'});
                                    //After the second Ad stick, making left side content height auto 
                                    $('.region-content').css('height','auto');
                                }, 2000);
                            }
                        }
                        //Restting the right side sticky when footer is going to reach
                        if ($(window).scrollTop() + $(window).height() > $('.footer').offset().top)
                        {
                            first_ad_flag = 1;
                            second_ad_flag = 1;
                            $('.region-content').css('height','auto');
                            $('.region-sidebar-second').css({'position': 'relative', 'top': 'auto'});
                        }
                        lastScrollTop = scrollTop;

                    });
                }
            }else if(!$('body').hasClass('mobile'))            
            { 
                //For Desktop Slideshow pages only              
                var $win = $(window),
                first_ad_flag = 0,            
                second_ad_flag = 0,
                lastScrollTop = 0;                
                $win.scroll(function() {
                    //Calculating the scroll value
                    var scrollTop = $win.scrollTop();
                    if (scrollTop > 0) {
                        var scrollDir = scrollTop > lastScrollTop ? 'down' : 'up';
                    }
                   
                    if (scrollDir == 'up')
                    {
                        first_ad_flag = 1;
                        second_ad_flag = 1;
                    }
                    //Sticking the First Ad
                    var first_ad_start_limit = parseInt($('#slide-dek').offset().top),
                    first_ad_down_limit = parseInt($('.outbrain_sec').offset().top),
                    first_ad_height = $('#ad_multiad_300x250').height();                   
                    if (first_ad_height >= 250) {
                        if (parseInt(scrollTop) >= first_ad_start_limit && parseInt(scrollTop) < first_ad_down_limit && first_ad_flag == 0) {
                            first_ad_flag = 1;
                            var first_ad_top_postion = parseInt($('header#navbar .container').height());
                            $('#slideshow_ads').css({'position': 'fixed', 'top': first_ad_top_postion + 'px', 'width': '320px'});
                            setTimeout(function() {
                                $('#slideshow_ads').css({'position': 'relative', 'top': 'auto'});
                            }, 2000);
                        }
                    }
                    //Sticking Second Ad
                    var second_ad_start_limit = parseInt($('#cmadsld_300x250').offset().top) - parseInt($('header#navbar .container').height());
                    var second_ad_down_limit = second_ad_start_limit + $('#cmadsld_300x250').height();
                    var second_ad_height = $('#cmadsld_300x250').height();
                    if (second_ad_height >= 250) {
                        if (parseInt(scrollTop) >= second_ad_start_limit && parseInt(scrollTop) < second_ad_down_limit && second_ad_flag == 0) {

                            second_ad_flag = 1;
                            var second_ad_top_height = 0;
                            $('#slideshow_ads > div').each(function() {
                                var ele_id = $(this).attr('id');
                                if (ele_id == 'cmadsld_300x250') {
                                    return false;
                                }
                                second_ad_top_height = second_ad_top_height + $(this).height();
                            });
                            var second_ad_top_postion = second_ad_top_height
                                    + parseInt($('#slide-dek').height());

                            $('#slideshow_ads').css({'position': 'fixed', 'top': '-' + second_ad_top_postion + 'px', 'width': '320px'});
                            setTimeout(function() {
                                $('#slideshow_ads').css({'position': 'relative', 'top': 'auto'});
                            }, 2000);
                        }
                    }
                    //Restting the right side sticky when footer is going to reach
                    if($(window).scrollTop() + $(window).height() > $('.footer').offset().top)
                    {
                        first_ad_flag = 1;
                        second_ad_flag = 1;
                        $('#slideshow_ads').css({'position':'relative', 'top':'auto'});
                    }
                    lastScrollTop = scrollTop;
                });
            }
            
        }
    };
    //Adding video icon on the video thumbnail mouseover function
    Drupal.behaviors.showVideoIcon = {        
        attach: function (context, settings) {                 
            $(".view-ti-amg-fw-related-video-module .frame>a:first-child").mouseover(function () {
                $(".view-ti-amg-fw-related-video-module .frame>a:first-child").children('span.play-video').hide();
                $(this).children('span.play-video').show();
            });
            $(".view-ti-amg-fw-related-video-module .frame>a:first-child").mouseleave(function () {
                $(".view-ti-amg-fw-related-video-module .frame>a:first-child").children('span.play-video').hide();
            });
        }
    };
})(jQuery);
