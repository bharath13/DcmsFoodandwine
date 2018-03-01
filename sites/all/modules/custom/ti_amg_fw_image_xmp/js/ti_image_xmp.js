(function ($) {
    Drupal.ajax.prototype.commands.modal = function(ajax, response, status) {
        $( "#replace_imagexmp_div").html(response.text);
        $( "#replace_imagexmp_div" ).dialog({
            modal: true,
            width: 500,
            buttons: {
              Ok: function() {
                $( this ).dialog( "close" );
              }
            }
          });
    }   

})(jQuery);
