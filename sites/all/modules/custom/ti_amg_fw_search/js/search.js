/**
 * @file
 * Customizations for search page.
 */

(function($) {
    Drupal.behaviors.fw_search = {
        attach: function(context, settings) {
            var search_button = $('<input type="image" id="custom-search-button" value="search" src="/sites/all/themes/foodandwine/images/btn_search.gif"/>');
            $('input#edit-keyword').after(search_button);

            $('#views-exposed-form-foodandwine-search-page').on('submit',function(){
                var keyword = encodeURIComponent($('#edit-keyword').val().replace(/<.*?>|%3C.*%3E/gi, '').replace(/[\"\{\}><]/, ''));
                var filter = $('#search-tab li.active-tab').attr('id');
                filter_query = '';
              if (filter) {
                  var filter_query = encodeURIComponent("f[0]") + "=" + encodeURIComponent("type:" + filter);
              }
                var query = "?keyword=" + keyword + "&" + filter_query;
                window.location.href = location.protocol + "//" + location.host + "/search" + query;
                return false;
            });
            $('#custom-search-button').on('click', function() {
                $('#views-exposed-form-foodandwine-search-page').submit();
            });
             // On mousover show large image.
            $('.result-image img').on('mouseover', function() {
              $(this).addClass('large-image');
            });

             $('.result-image img').on('mouseout', function() {
               $(this).removeClass('large-image');
             });

            // Toggle lengthy facets.
            function toggleFWFacets(selector) {
                var limit = 5;
                selector.each(function() {
                    var total_length = $(this).find('li').length;
                  if (total_length > limit) {
                      $('li', this).eq(limit - 1).nextAll().hide().addClass('extra');
                      $(this).append('<li class="expand">Expand List</li>');
                  }
                });

                selector.on('click', '.expand', function() {
                  if ($(this).hasClass('reduce')) {
                      $(this).text('Expand List').removeClass('reduce');
                  }
                  else {
                      $(this).text('Reduce List').addClass('reduce');
                  }
                    $(this).siblings('li.extra').slideToggle();

                });
            }

            var selector = $('ul.facetapi-facetapi-checkbox-links').not('.facetapi-facet-field-complex-themeparents-all');
            toggleFWFacets(selector);
            var selector = $('ul.facetapi-facet-field-complex-themeparents-all li.expanded ul.expanded');
            toggleFWFacets(selector);

            // Show static blocks only if search result is not empty.
            if ($('.view-foodandwine-search .views-row').length > 0) {
                $('.facet-heading').show();
                $('#block-ti-amg-fw-search-search-text').show();
                $('.views-widget-sort-by').show();
            }

            // Redirect when sort value is changed.
            $('#edit-sort-by').on('change', function() {
                var id = '#fw_' + this.value;
                var new_location = $('a.' + id).attr('href');
              if (new_location) {
                  window.location.href = new_location;
              }

            });

        }
  }
})(jQuery);
