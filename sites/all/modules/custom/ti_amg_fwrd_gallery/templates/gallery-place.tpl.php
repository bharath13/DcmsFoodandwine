 <?php 

/**
 * Gallery place
 *
 * @param array $place
 * 
 */
   if (!empty($place)):
 ?>
 <?php if (isset($place['venue_title'])): ?> 
   <div class="place venue_title"><?php print $place['venue_title']; ?></div>
 <?php endif; ?>
 <?php if (isset($place['street'])): ?> 
   <div class="place street"><?php print $place['street']; ?></div>
 <?php endif; ?> 
 <?php if (!empty($place['city_section'])): ?> 
   <div class="place city">
     <?php if (isset($place['city_section']['locality'])): ?> 
       <span class="locality"><?php print $place['city_section']['locality']; ?>, </span>
     <?php endif; ?> 
     <?php if (isset($place['city_section']['region'])): ?> 
       <span class="region"><?php print $place['city_section']['region']; ?>, </span>
     <?php endif; ?> 
     <?php if (isset($place['city_section']['zipcode'])): ?> 
       <span class="zipcode"><?php print $place['city_section']['zipcode']; ?>, </span>
     <?php endif; ?> 
   </div>
 <?php endif; ?> 
 <?php if (isset($place['country'])): ?>
   <div class="place country"><?php print $place['country']; ?></div>
 <?php endif; ?>
 <?php if (isset($place['phone'])): ?>
   <div class="place phone"><?php print $place['phone']; ?></div>
 <?php endif; ?>
 <?php if (isset($place['web_url'])): ?>
   <?php print $place['web_url']; ?>
  <?php endif; ?> 
 <?php endif; 
  