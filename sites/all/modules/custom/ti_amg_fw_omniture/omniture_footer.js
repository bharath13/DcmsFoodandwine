(function($) {
    Drupal.behaviors.omniture_footer = {
        attach: function(context, settings) {
          var attached_behavior_element = '';
          if ($('.region-page-bottom').length) {
            attached_behavior_element = '.region-page-bottom';
          }
          if ($('.footer').length) {
            attached_behavior_element = '.footer';
          }
          $(attached_behavior_element, context).once('omniture_set', function() {
            search_kw = window.omniture_search_kw;
            var channel = window.omniture_channel;            
            var sub_channel = window.omniture_sub_channel;
            var prop_four = window.omniture_prop_four;
            var titleNoBrand = window.omniture_titleNoBrand;

            //console.log(Drupal.settings.omniture);
            s_time.server = window.location.hostname;            
            s_time.channel = 'fw';
            // Slide Show Pages
            if(channel == 'slideshowsHD'){
                s_time.pageName = 'fw|' + 'slideshows' + '|' + titleNoBrand;                
            }
            else if (channel == ''){
                s_time.pageName = 'fw|' + 'home';
            }
            else{
                s_time.pageName = 'fw|' + channel + '|' + titleNoBrand;                 
            }
            s_time.prop4 = prop_four;
            s_time.prop5 = sub_channel;
            s_time.prop6 = Drupal.settings.omniture.prop6;
            s_time.prop7 = Drupal.settings.omniture.prop7;
            s_time.prop9 = prop_four;
            s_time.prop10 = window.location.pathname;
            s_time.prop11 = sub_channel;
            s_time.prop13 = Drupal.settings.omniture.prop13;
            s_time.prop15 = Drupal.settings.omniture.prop15;
            s_time.prop16 = Drupal.settings.omniture.prop16;;
            s_time.prop17 = window.location.href;
            s_time.prop19 = Drupal.settings.omniture.prop19;
            s_time.prop20 = Drupal.settings.omniture.prop20;
            s_time.prop18 = search_kw;
            if (channel == 'video') {
              if (Drupal.settings.omniture.arg_0_request_path != '' && Drupal.settings.omniture.arg_1_request_path == '') {
                  var request_path = '/' + Drupal.settings.omniture.arg_0_request_path;
              }
              else if (Drupal.settings.omniture.arg_0_request_path != '' && Drupal.settings.omniture.arg_1_request_path != '') {
                  var request_path = '/' + Drupal.settings.omniture.arg_0_request_path +
                      '/' + Drupal.settings.omniture.arg_1_request_path;
              }
              s_time.prop4 = request_path;
              s_time.prop9 = request_path;
              s_time.prop10 = location.protocol + "//" + location.host + request_path;
              s_time.prop17 = s_time.prop10;
            }
            if (typeof (catsCSV) == "string")
                s_time.prop13 = catsCSV;
            var s_code = s_time.t();
            if (s_code && channel != 'slideshowsHD')
                document.write(s_code);
//<!-- if(navigator.appVersion.indexOf('MSIE')>=0)document.write(unescape('%3C')+'\!-'+'-') //-->
          });
        }
    };
}(jQuery));


function tl_tracker() {
    console.log("again");
    s_time.server = window.location.hostname;
    s_time.channel = 'fw';
    s_time.pageName = 'fw|' + channel + '|' + titleNoBrand;
    s_time.prop4 = prop_four;
    s_time.prop5 = sub_channel;
    s_time.prop6 = Drupal.settings.omniture.prop6;
    s_time.prop7 = Drupal.settings.omniture.prop7;
    s_time.prop9 = prop_four;
    s_time.prop10 = window.location.pathname;
    s_time.prop11 = sub_channel;
    s_time.prop13 = Drupal.settings.omniture.prop13;
    s_time.prop15 = Drupal.settings.omniture.prop15;
    s_time.prop16 = channel;
    s_time.prop17 = window.location.href;
    s_time.prop19 = Drupal.settings.omniture.prop19;
    s_time.prop20 = Drupal.settings.omniture.prop20;

    s_time.prop18 = search_kw;
    if (typeof (catsCSV) == "string")
        s_time.prop13 = catsCSV;
    var s_code = s_time.t();
    if (s_code && channel != 'slideshowsHD')
        document.write(s_code);
    //<!-- if(navigator.appVersion.indexOf('MSIE')>=0)document.write(unescape('%3C')+'\!-'+'-') //-->
}
