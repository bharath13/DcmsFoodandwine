/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

(function($) {            
    $(document).ready(function() {
        $('.nav-icon').on('click', function() {
            $('.mobile .mobile-menu').toggle();
            $(".mobile #navbar").toggleClass("mobile-active");
            $(".mobile #fw-page").toggleClass("mobile-active");
            $('.mobile .nav-button').toggleClass("mobile-active");
            return false;
        });
        $('.search-button').on('click', function() {
            $('.mobile .region-page-header-right').slideToggle('fast', function() {
            });
            $(this).toggleClass("search-active");
            $('.mobile .region-page-header-right').toggleClass("msearch-active");
            return false;
        });
        $('.back-to-top h4').on('click', function() {           
            $('html, body').animate({
              scrollTop: 0
            }, 800);
            return false;
        });
        $('.mobile-view img').addClass('img-responsive');
        $('.mobile.mobile-blog-detail .node-image img').addClass('img-responsive');
        $('.mobile.mobile-recipe-detail .recp-image-frame img').addClass('img-responsive');
        $(".mobile .mobile-menu ul li.menu-more-fw ul li:nth-child(1)").prepend('<div id="facebook"></div>');
        $(".mobile .mobile-menu ul li.menu-more-fw ul li:nth-child(2)").prepend('<div id="twitter"></div>');
        $(".mobile .mobile-menu ul li.menu-more-fw ul li:nth-child(3)").prepend('<div id="pinterest"></div>');
        $(".mobile .mobile-menu ul li.menu-more-fw ul li:nth-child(4)").prepend('<div id="tumblr"></div>');
        var $myDiv = $('#ti-editorial-navbar');
        if ($myDiv.length) {
            $('.mobile #navbar').css('top', '45px');
            $('.mobile .mobile-menu').css('top', '45px');
            $('.mobile #fw-page').css('top', '45px');
            $('.mobile .region-page-header-right').addClass('admin');
        }
        $('.recipe-list-container a').on('click', function() {
            $(this).toggleClass("recipe-active");
        });
        // set recipe decription height
        if($(".recipe-description-row").length){
            if($(".recipe-description-row").height()>50){
              $(".recipe-description-row").css("max-height","100px");
            }else {
              //$(".recipe-description-row").children('.hideShow-button').hide();
              //$(".recipe-description-row").css("padding","10px 0");
            }
        }
        // Deck list hide and show more
        $('.rcphideShow-button').click(function (event) {
            event.preventDefault();
            if($(this).parent().hasClass('active')){
                $(this).children(".rcplink").text("see more");
                $(this).parent().css("max-height","100px");
                $(this).parent().removeClass("active");
            }
            else{
                $(this).children(".rcplink").text("see less");
                $(this).parent().css("max-height","750px");
                $(this).parent().addClass("active");
            }
        });
        $(".slide-view-button").click(function () {
            $(this).addClass("active");
            $(".list-view-button").removeClass("active");
            $(".slider.mobile-view").show();
            $(".slides-grid-view").hide();
        });
        $(".list-view-button").click(function () {
            $(this).addClass("active");
            $(".slide-view-button").removeClass("active");
            $(".slider.mobile-view").hide();
            $(".slides-grid-view").show();
        });
        $('.mobile .slides-grid-view .views-row').css("max-height","165px");
        $('.hideShow-button').click(function () {
            if($(this).parent().hasClass('active')){
              $(this).children(".link").text("see more");
              $(this).parent().css("max-height","165px");
              $(this).parent().removeClass("active");
            }
            else{
              $(this).children(".link").text("see less");
              $(this).parent().css("max-height","750px");
              $(this).parent().addClass("active");
            }
        });
        $.fn.flexvids = function() {
            "use strict";

            return this.each(function(){
              var selectors = [
                "iframe[src*='player.vimeo.com']",
                "iframe[src*='youtube.com']",
                "iframe[src*='youtube-nocookie.com']",
                "iframe[src*='kickstarter.com'][src*='video.html']",
                "iframe",
                "object",
                "embed"
              ];

              var $allVideos = $(this).find(selectors.join(','));
              $allVideos = $allVideos.not("object object"); // SwfObj conflict patch

              $allVideos.each(function(){
                var $this = $(this);
                if (this.tagName.toLowerCase() === 'embed' && $this.parent('object').length) { return; }

                $this.wrap('<div class="flex-video"></div>');
              });
            });
        };
        $(".flex-video-container").flexvids();
        $(".flex-video-container-blogdet").flexvids();  
        if($('.mobile .view-ti-amg-fw-mobile-home-page-blocks .flex-video-container iframe').length <= 0){
            $('.mobile .view-ti-amg-fw-mobile-home-page-blocks .flex-video-container').next('.field-name-body').addClass('flex-vid-sum');
        }    
        if($('.mobile .view-ti-amg-fw-blog-details .blog-video iframe').length <= 0){
            $('.mobile .view-ti-amg-fw-blog-details .blog-video.flex-video-container-blogdet').closest('.views-row').find('.views-field-body').addClass('flex-vid-sum');
        }
    });    
   
    $(window).load(function(){
        $('.mobile-view img').addClass('img-responsive');
        $('.mobile.mobile-blog-detail .node-image img').addClass('img-responsive');
        $('.mobile.mobile-recipe-detail .recp-image-frame img').addClass('img-responsive');
        
        var ad_width = $('#block-ti-amg-ads-mobile-320x50 #ad-mobile_leader_board_ad iframe').width();
        var page_width = $('#block-ti-amg-ads-mobile-320x50').width();
        ad_margin = (page_width - ad_width) / 2;
            
        if(ad_width > 0){
            //Stick the mobile leaderboard Ad to bottom of the pages
            //On Scroll Adding a touchmove listener
            document.addEventListener("touchmove", StickBottomAd, false);
        }  
    });    
   
    var ad_margin = 0; 
    //touchmove listener function for mobile leaderboard Ad to bottom of the pages   
    function StickBottomAd(event) {        
        $(window).scroll(function() {
            var $win = $(window);
            var scrollTop = $win.scrollTop();

            var logo_height = $('#block-ti-amg-fw-mobile-blocks-logo').height();
            var top_ad_position = $('.main-container').offset().top;

            var top_ad_stick_limit = top_ad_position - logo_height;

            if (scrollTop > top_ad_stick_limit) {
                $('#block-ti-amg-ads-mobile-320x50').css({'margin-left': ad_margin + 'px', 'margin-right': ad_margin + 'px'});
                $('#block-ti-amg-fw-custom-fw-social-media-block').css({'display': 'none'});
                $('#block-ti-amg-ads-mobile-320x50').removeClass('top_normal');
                $('#block-ti-amg-ads-mobile-320x50').addClass('bottom_stick');
            }
            var bottom_ad_stick_limit = $('.main-container').offset().top - logo_height;
            if (scrollTop < bottom_ad_stick_limit) {
                $('#block-ti-amg-fw-custom-fw-social-media-block').css({'display': 'block'});
                $('#block-ti-amg-ads-mobile-320x50').removeClass('bottom_stick');
                $('#block-ti-amg-ads-mobile-320x50').addClass('top_normal');

            }

        });
    }
})(jQuery);
