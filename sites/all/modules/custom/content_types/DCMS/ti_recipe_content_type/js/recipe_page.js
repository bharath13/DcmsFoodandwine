(function($){
    Drupal.behaviors.recipePage = {
        attach: function (context, settings) {
           // On Page Load
            if($("#edit-field-sponsor-flag-und").is(':checked'))
                $("#edit-field-sponsor-list").css('display','block');// checked
            else
                $("#edit-field-sponsor-list").css('display','none');  // unchecked
            
           $("#edit-field-sponsor-flag-und").change(function(){
                if($("#edit-field-sponsor-flag-und").is(':checked'))
                    $("#edit-field-sponsor-list").css('display','block');// checked
                else
                    $("#edit-field-sponsor-list").css('display','none');  // unchecked
            });
                                  
        }
    }
})(jQuery);
