<?php

/**
 * @file:
 *
 * Holds the HTML for the 'connect with TL' block
 *
 */
?>
<div class='mboxDefault'>
  <div id='newsletter-signup'>
    <div id='flash-error'></div>
    <form accept-charset="UTF-8" action="#" data-remote="true" id="newsletter_form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="ywmn1PuxGOuZa6xpgrfD//rvuV70JgbSIPNtns0fqs8=" /></div>
      <div class='primary-newsletter'>
        <div class='image'>
          <img src='/sites/all/themes/foodandwine/images/thedish_110x120.jpg'>
        </div>
        <div class='title'>
          The Dish
        </div>
        <div class='desc'>
          Receive delicious recipes and smart wine advice 4x per week in this e-newsletter.
          <div class='signup-box'>
            <input id="dish_newsletter" name="newsletter[newsletter_ids][][newsletter_id]" type="checkbox" value="285407556" />
            Sign Up
          </div>
        </div>
      </div>
      <div id='secondary-newsletters'>
        <div class='ul'>
          <div class='li'>
            <input id="wine_newsletter" name="newsletter[newsletter_ids][][newsletter_id]" type="checkbox" value="2069486254" />
            <strong>
              The Wine List
            </strong>
            Weekly pairing plus best bottles to buy.
          </div>
          <div class='li'>
            <input id="daily_newsletter" name="newsletter[newsletter_ids][][newsletter_id]" type="checkbox" value="260816546" />
            <strong>
              F&W Daily
            </strong>
            One sensational dish served fresh every day.
          </div>
        </div>
      </div>
      <div class='email-bar'>
        <input class='textfieldsize clear-input' id='e_mail' name='newsletter[email]' type='text' value='Enter your email address'>
        <input alt="Go" class="signupbtn" name="submit" src="/sites/all/themes/foodandwine/images/sign-up-button.png" type="image" value="Sign Up" />
        <input id="newsletter_source" name="newsletter[source]" type="hidden" value="rightrail" />
      </div>
    </form>
  </div>
</div>
<div class='double-divider'></div>

