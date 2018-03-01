// Enabling Advanced and Open graph options in meta tags
(function($){
    Drupal.behaviors.nodeForms = {
        attach: function (context, settings) {
            
            $('.vertical-tab-button a').click(function(){
                $('.vertical-tabs .vertical-tabs-panes fieldset legend').css('display','block');
                
            });
        }
    }
    Drupal.behaviors.ti_amg_fw_video_node = {
            attach: function(context, settings) {                        
            if($('body').hasClass('page-node-add-video') && !$.isEmptyObject(CKEDITOR.instances)){                
                var shortDescription = Drupal.settings.ti_amg_fw_video_node.shortDescription;
                var longDescription = Drupal.settings.ti_amg_fw_video_node.longDescription;                 
                // For the Headline Field
                if(!$.isEmptyObject(CKEDITOR.instances['edit-field-headline-und-0-value'])
                        && shortDescription !== null){                    
                    CKEDITOR.instances['edit-field-headline-und-0-value'].setData('<p>' + shortDescription + '</p>');                    
                }
                else{
                    CKEDITOR.instances['edit-field-headline-und-0-value'].setData('');
                }
                // For the Deck Field
                if(!$.isEmptyObject(CKEDITOR.instances['edit-field-deck-und-0-value'])
                        && shortDescription !== null){                    
                    CKEDITOR.instances['edit-field-deck-und-0-value'].setData('<p>' + shortDescription + '</p>');                    
                }
                else{
                    CKEDITOR.instances['edit-field-deck-und-0-value'].setData('');
                }
                // For the Description Field                
                if(!$.isEmptyObject(CKEDITOR.instances['edit-field-description-und-0-value']) 
                        && longDescription !== null){                    
                    CKEDITOR.instances['edit-field-description-und-0-value'].setData('<p>' + longDescription + '</p>');                    
                }
                else{                    
                   CKEDITOR.instances['edit-field-description-und-0-value'].setData(''); 
                }
            }           
        }
    }
    Drupal.behaviors.ti_amg_fw_recipe_node = {
        attach: function(context, settings) {            
            var rformValidation = {  
                'checkWfFlags': function() {
                    var flagarr = new Array();                   
                    flagarr = [];
                    $(".workflow-flags .form-checkbox").each(function() {
                        if(this.id !='edit-field-wf-photo-added-und' && this.id !='edit-field-wf-photo-qa-und' && this.id !='edit-field-wf-rights-check-und'){
                            if($(this).prop('checked')){
                                flagarr.push('1');
                            } else {
                                flagarr.push('0');
                            }
                        }    
                    });
                    if ($.inArray('0', flagarr) != -1) {
                        $('#recipe-node-form #edit-status').prop('checked', false);
                        return false;                           
                    } else {
                        $('#recipe-node-form #edit-status').prop('checked', true);
                        return true;                           
                    }                                          
                },
                'submitRcpForm': function() {
                    var flagarr = new Array();
                    var ckdcnt = 0;
                    flagarr = [];
                    $(".workflow-flags .form-checkbox").each(function() {
                        if(this.id !='edit-field-wf-photo-added-und' && this.id !='edit-field-wf-photo-qa-und' && this.id !='edit-field-wf-rights-check-und'){
                            if($(this).prop('checked')){
                                flagarr.push('1');   
                                ckdcnt += 1;
                            } else {
                                flagarr.push('0');
                                $(this).next().css('color', '#cc0000');
                            }
                        }    
                    });
                    if ($.inArray('0', flagarr) != -1) {                   
                        $('#recipe-node-form #edit-status').prop('checked', false);
                        if(ckdcnt == 0){
                            return true;
                        } else {
                            $('.workflow-flags .summary').css('color', '#000000');
                            $('.workflow-flags .summary').html('');
                            $('#recipe-node-form #edit-status').prop("disabled", false);
                            return true;
                        }                   
                    } else {
                        $('#recipe-node-form #edit-status').prop("disabled", false);
                        $('#recipe-node-form #edit-status').prop('checked', true);
                        return true;                           
                    }
                }
            };            
            $(document).ready(function() {
                if ($('body').hasClass('node-type-recipe') || $('body').hasClass('page-node-add-recipe')) {
                    rformValidation.checkWfFlags();
                    var rcp_node_status = Drupal.settings.ti_amg_fw_custom.rcp_node_status;
                    var rcp_node_op = Drupal.settings.ti_amg_fw_custom.rcp_node_op;
                    if (rcp_node_op == 'update' && rcp_node_status == '1') {
                        $(".workflow-flags .form-checkbox").each(function() {
                            if (this.id != 'edit-field-wf-photo-added-und' && this.id != 'edit-field-wf-photo-qa-und' && this.id != 'edit-field-wf-rights-check-und') {
                                if (!$(this).prop('checked')) {
                                    $(this).prop('checked', true);
                                }
                            }
                        });
                        $('#recipe-node-form #edit-status').prop('checked', true);
                    }
                    $('#recipe-node-form #edit-status').prop("disabled", true);
                    $(".workflow-flags .form-checkbox").change(rformValidation.checkWfFlags);
                    $("#recipe-node-form #edit-submit").click(rformValidation.submitRcpForm);
                }
            });   
        }
    }     
})(jQuery);
