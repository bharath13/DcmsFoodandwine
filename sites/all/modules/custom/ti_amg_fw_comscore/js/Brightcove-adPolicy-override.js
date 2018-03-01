var VPO = {};
(function($) {
    Drupal.behaviors.ti_amg_fw_comscore = {
        attach: function(context, settings) {

            VPO.myTemplateLoaded = function(experienceID) {
                VPO.player = brightcove.api.getExperience(experienceID);
                player = VPO.player;
                VPO.modVP = VPO.player.getModule(brightcove.api.modules.APIModules.VIDEO_PLAYER);
                VPO.modAdPolicy = VPO.player.getModule(brightcove.api.modules.APIModules.ADVERTISING);
                VPO.modExp = VPO.player.getModule(brightcove.api.modules.APIModules.EXPERIENCE);
                VPO.modExp.addEventListener(brightcove.api.events.ExperienceEvent.TEMPLATE_READY, VPO.onTemplateReady);
            };
        }
    };
    Drupal.behaviors.ti_amg_fw_ga = {
        attach: function(context, settings) {
            VPO.onTemplateReady = function(event) {
                VPO.modAdPolicy.addEventListener(brightcove.api.events.AdEvent.START, onAdStart);
                VPO.modVP.loadVideoByID(videoData.video.videoid);
            };
        }
    };
})(jQuery);