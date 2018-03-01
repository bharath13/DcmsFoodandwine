(function($){
    Drupal.behaviors.personPage = {
        attach: function (context, settings) {
          
          // Moving the person related articles to the top of node from sidebar            
            $('#block-views-ti-amg-fw-person-blocks-block-2').prependTo('#person-node-form .node-form-sidebar');
            $('#block-views-ti-amg-fw-person-blocks-block-2').css('display','block');            
            
            // Moving the person related recipes to the top of node from sidebar 
            $('#block-views-ti-amg-fw-person-blocks-block-4').prependTo('#person-node-form .node-form-sidebar');
            $('#block-views-ti-amg-fw-person-blocks-block-4').css('display','block');
            
            // Moving the source related recipes to the top of node from sidebar 
            $('#block-views-ti-amg-fw-person-blocks-block-6').prependTo('#person-node-form .node-form-sidebar');
            $('#block-views-ti-amg-fw-person-blocks-block-6').css('display','block');
            
            // On Page Load
            if($('#edit-field-person-type-und input:radio[name=field_person_type[und]]:checked').val() == 's')
            {
                $('#edit-field-source-name').css({'display':'block'});
                $('#edit-field-given-name, #edit-field-middle-initial, #edit-field-last-name').css({'display':'none'});
                $('#block-views-ti-amg-fw-person-blocks-block-4').css('display','none');
            }else
            {
                $('#edit-field-source-name').css({'display':'none'});
                $('#edit-field-given-name, #edit-field-middle-initial, #edit-field-last-name').css({'display':'block'});                    
                $('#block-views-ti-amg-fw-person-blocks-block-6').css('display','none');
            }
            
            // On selecting the type
            $('#edit-field-person-type-und input:radio[name=field_person_type[und]]').change(function(){
                if($(this).val() == 's'){                    
                    $('#edit-field-source-name').css({'display':'block'});
                    $('#edit-field-given-name, #edit-field-middle-initial, #edit-field-last-name').css({'display':'none'});
                }else{
                    $('#edit-field-source-name').css({'display':'none'});
                    $('#edit-field-given-name, #edit-field-middle-initial, #edit-field-last-name').css({'display':'block'});                    
                }             
            });
                        
            // Enabling Opengraph and Advanced sections under metatags
            $('.vertical-tab-button a').click(function(){
                $('.vertical-tabs .vertical-tabs-panes fieldset legend').css('display','block');
                
            });
        }
    }
})(jQuery);
