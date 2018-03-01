<?php 
/**
 * Video Player Overlay
 * for Top Video Tout
 * param: $video_id
 */
$player_id = '3866761842001';
?>  
  
<div id="playerLightbox" class="playerHide">
  <div id="playerClose" class="playerClose" onClick="hideAndStop();">Close</div>
  <object id="myExperience<?php print $player_id; ?>" class="BrightcoveExperience">
    <param name="bgcolor" value="#FFFFFF" />
    <param name="width" value="640" />
    <param name="height" value="400" />
    <param name="allowScriptAccess" value="always" />       
    <param name="playerID" value="<?php if (!empty($player_id)) 
       print $player_id; ?>" />
    <param name="playerKey" value="AQ~~,AAAAAGL7jok~,vslbwQw3pdXn5PSsSjmiZNRU4ChTuD39" />
    <param name="isVid" value="true" />        
    <param name="isUI" value="true" />
    <param name="includeAPI" value="true" />
    <param name="templateLoadHandler" value="omni_onTemplateLoad" />
    <param name="templateReadyHandler" value="omni_onTemplateReady"/>
    <param name="dynamicStreaming" value="true" />
  </object>
 <div id="mediaInfo"></div>
</div>
