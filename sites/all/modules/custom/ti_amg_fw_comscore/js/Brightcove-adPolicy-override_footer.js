function onAdStart(evt) {
  var cs_adpix = new Image();
  cs_adpix.src = "http://b.scorecardresearch.com/p?c1=1&c2=6035728&c3=&c5=&rn=" + Math.ceil(Math.random() * 10000000000);
  omniAdTrack();
}
