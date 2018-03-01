// Test for existence of new (tgx.js) library. Cast tgxAds as boolean.
var tgxAds = !!( typeof adFactory != 'undefined' );
var initedLegacy = false;
var insertAds = function(){
	if (tgxAds) { 
	    // Do DFPP ad calls
			if (typeof(window.slideshowAdSlots) != "undefined") { 
				adFactory.tileCounter = 1;
			  adFactory.randomNumber = TiiAdsGetRandomNumber();
				adFactory.refreshAds(slideshowAdSlots);
			} else { //alert('else window.slideshowAdSlots');
				// this is first load stuff
				//Refresh all ads.. Ad container ID
				window.slideshowAdSlots = ['adTop', 'ad_88x31_1', 'ad_multiad_300x250', 'ad_300x100_1', 'ad_142x70_1', 'ad_142x70_2', 'ad_142x70_3'];				
			}
	
	}
	else { 
		if (initedLegacy) { 
		  var ad_728 = adFactory.getMultiAd(new Array('728x90', '101x1', '970x90', '970x66', '970x250')); ad_728.setPosition('1'); 
		  var ad_300_1 = adFactory.getMultiAd(new Array('300x250', '300x600')); ad_300_1.setPosition('1');
		  var ad_300_2 = adFactory.getAd(new Array('300x250')); ad_300_2.setPosition('1');
		  var ad_142_70_1 = adFactory.getAd(142, 70); ad_142_70_1.setPosition('1');
		  var ad_142_70_2 = adFactory.getAd(142, 70); ad_142_70_2.setPosition('2');
		  var ad_142_70_3 = adFactory.getAd(142, 70); ad_142_70_3.setPosition('3');
		  // var ad_cm_textlink = adFactory.getCmAd(142, 70, "slideshow", "text");

		  createIframeAd(ad_728,'ad_728x90_1',970,90);
		  createIframeAd(ad_300_1,'ad_300x250_1',300,250);
		  createIframeAd(ad_300_2,'ad_300x250_2',300,250);
		  createIframeAd(ad_142_70_1,'ad_142_70_1',240,55);
		  createIframeAd(ad_142_70_2,'ad_142_70_2',240,55);
		  createIframeAd(ad_142_70_3,'ad_142_70_3',240,55);
		  // createIframeAd(ad_142_70_3,'#ad_cm_textlink',240,55);
		  adFactory.tileCounter = 1;
		  adFactory.randomNumber = TiiAdsGetRandomNumber();  
		} else { 
			initedLegacy = true;
		}
	}
	
	function createIframeAd(adTag,adDiv,width,height){ 
	  // + '<img src="http://lorempixel.com/'+width+'/'+height+'"/>'

	  var adUnit = document.createElement('iframe'); adUnit.width = width; adUnit.height = height; adUnit.frameBorder = 0; adUnit.scrolling = 'no';
	  var adContent = 
	    '<!DOCTYPE html><head></head><body>'
	  + '<style type="text/css">body{margin:0; padding:0;}img{border:0;padding:0;margin:0;}form{margin:0;padding:0;}input,textarea,form{padding:0;margin:0;}a{color: #7D7D7D;text-decoration:none;}</style>'
	  + '<script>var inDapIF=true;<\/script>'
	  + adTag._getAdTag()
	  + '</body></html>';
	    $('#'+adDiv).html(adUnit);
	    adUnit.contentWindow.contents = adContent;
	    adUnit.src = 'javascript:window["contents"]';
	}	

};


