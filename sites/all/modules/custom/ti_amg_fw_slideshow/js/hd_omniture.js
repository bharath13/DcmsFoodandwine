/**
 * @file
 * Javascript for slideshow links.
 */

// var s_account = "timefoodandwine";

function fw_linktracker(linkname){
var titleNoBrand = document.title;
titleNoBrand = titleNoBrand.slice(0,titleNoBrand.indexOf(' |'));
s_time=s_gi(s_account);
s_time.linkTrackVars='events,prop13';
s_time.linkTrackEvents= 'event5';
s_time.events='event5';
s_time.prop13= titleNoBrand
s_time.tl(true,'o',linkname + ' = ' + titleNoBrand);
}

function fw_pagetracker(slidePermaLink){
// var slidePermaLink = (slidePermaLink) ? slidePermaLink : window.location.href

var search_kw = "";
var channel = "slideshows";
var sub_channel = "";
var titleNoBrand = document.title;
titleNoBrand = titleNoBrand.slice(0,titleNoBrand.indexOf(' |'));

var now = new Date();
var omni_date = new Object;
omni_date.year = now.getFullYear();
omni_date.month = now.getMonth() + 1;

// extract date from url, like /blogs/mouthing-off/2010/4/30/Derby-Drinking-and-Fight-Night-Eats
var matches =
window.location.pathname.match(/blogs\/.*?\/(\d{4})\/(\d{1,2})\/(\d{1,2})/);
if(matches != null){
  omni_date.year = matches[1];
  omni_date.month = matches[2];
}

s_time.server = window.location.hostname;
s_time.channel = 'fw';
s_time.pageName = 'fw|'+ channel +'|'+titleNoBrand;
// s_time.prop4 = window.location.pathname + '/' + slidePermaLink.split("/").slice(5);
// s_time.prop5 = channel + '|' + slidePermaLink.split("/").slice(4,5);
// s_time.prop9 = window.location.pathname + '/' + slidePermaLink.split("/").slice(5);
// s_time.prop10 = window.location.pathname + '/' + slidePermaLink.split("/").slice(5);
// s_time.prop11 = channel + '|' + slidePermaLink.split("/").slice(4,5);
s_time.prop16 = channel;
s_time.prop18 = search_kw;

if (slidePermaLink){
	s_time.prop4 = window.location.pathname + slidePermaLink.split("/").slice(5);
	s_time.prop5 = channel + '|' + slidePermaLink.split("/").slice(4,5);
	s_time.prop9 = window.location.pathname + slidePermaLink.split("/").slice(5);
	s_time.prop10 = window.location.pathname + slidePermaLink.split("/").slice(5);
	s_time.prop11 = channel + '|' + slidePermaLink.split("/").slice(4,5);
	s_time.prop17 = slidePermaLink;
}
else {
	s_time.prop4 = window.location.href;
	s_time.prop5 = channel + '|' + window.location.href.split("/").slice(4,5);
	s_time.prop9 = window.location.href;
	s_time.prop10 = window.location.href;
	s_time.prop11 = channel + '|' + window.location.href.split("/").slice(4,5);
	s_time.prop17 = window.location.href;
}

// s_time.eVar21 = '#{@omniture_value}';
    if (typeof (catsCSV) == "string")
        s_time.prop13 = catsCSV;
    var s_code = s_time.t();
    if (s_code && channel=='slideshows' )
        document.write(s_code);
}
