// Test for existence of new (tgx.js) library. Cast tgxAds as boolean.
var tgxAds = !!( typeof adFactory != 'undefined' );
var initedLegacy = false;
var insertAds = function(){ 
	if (tgxAds) { 
	    // Do DFPP ad calls
            window.slideshowAdSlots = ['ad_mobile_320x50'];
			if (typeof(window.slideshowAdSlots) != "undefined") {                             
				adFactory.tileCounter = 1;
                                adFactory.randomNumber = TiiAdsGetRandomNumber();
				adFactory.refreshAds(slideshowAdSlots);
			} else { 
				// this is first load stuff
				//Refresh all ads.. Ad container ID
				window.slideshowAdSlots = ['ad_mobile_320x50'];				
			}
	
	}
	else { 
		console.log('TGX is not Initiated');
	}
	
};


