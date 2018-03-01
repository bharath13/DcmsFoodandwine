/**
 * @file
 * JS for inserting Ads in specific position of campaign page.
 */

(function($) {
  Drupal.behaviors.Campaign = {
    attach: function(context, settings) {
      if (typeof (Drupal.settings.sponsor_campaign) != "undefined") {
        if (!jQuery.isEmptyObject(Drupal.settings.sponsor_campaign.campaign_img)) {
          var detect_device = get_device();
          var campaign_img = Drupal.settings.sponsor_campaign.campaign_img[detect_device];
          var campaign_url = Drupal.settings.sponsor_campaign.campaign_url;

          var img_tag = $('<img/>').attr('src', campaign_img)
                  .attr('class', 'sponsor_logo_img')
                  .attr('data-pin-no-hover', 'true');

          var link_tag = $('<a></a>').wrapInner(img_tag)
                  .attr("href", campaign_url)
                  .attr("class", 'sponsor_logo_data');

          $('#sponsor_logo_container').html(link_tag);
        }
      }
    }
  }
})(jQuery);
