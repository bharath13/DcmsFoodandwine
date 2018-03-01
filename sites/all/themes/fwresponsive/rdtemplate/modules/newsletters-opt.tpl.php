 <?php 

/**
 * Newsletter Opt In
 *
 * @param array $classes An array of additional lasses to add to the opt-in.
 * 
 **/

$classes = !empty($classes) ? implode(' ', $classes) : '';
$newsletter_image = !empty($newsletter_image) ? $newsletter_image : '';

?>

<div class="opt-in opt-in--newsletter <?php print($classes); ?>">
    <h2 class="opt-in--newsletter__title">Sign up for free F&amp;W Newsletters</h2>
    <form action="#" class="opt-in--newsletter-form">
        <div class="opt-in--newsletter-form__top">
            <div class="opt-in--newsletter-form__wrap opt-in--newsletter-form__wrap--left">
                <div class="opt-in--newsletter-form__info">
                    <div class="opt-in--newsletter-form__info-wrap opt-in--newsletter-form__info--image">
                        <img src="<?php print $newsletter_image; ?>" alt="Sign Up For The Dish!">
                    </div>
                    <div class="opt-in--newsletter-form__info-wrap opt-in--newsletter-form__info--text">
                        <p>Receive delicious recipes and smart wine advice 4x per week in this e-newsletter.</p>
                    </div>
                </div>
                <div class="opt-in--newsletter-form__field opt-in--newsletter-form__field--checkbox">
                    <input type="checkbox" name="dish-optin">
                    <label for="dish-optin"><span class="red">SIGN UP FOR THE DISH</span></label>
                </div>
            </div>
            <div class="opt-in--newsletter-form__wrap opt-in--newsletter-form__wrap--right">
                <div class="opt-in--newsletter-form__field opt-in--newsletter-form__field--checkbox">
                    <input type="checkbox" name="dish-optin">
                    <label for="dish-optin"><span class="red">The Wine List</span> Weekly pairing plus best bottles to buy.</label>
                </div>
                <div class="opt-in--newsletter-form__field opt-in--newsletter-form__field--checkbox">
                    <input type="checkbox" name="dish-optin">
                    <label for="dish-optin"><span class="red">F&amp;W Daily</span> One sensational dish served fresh every day.</label>
                </div>
            </div>
        </div>
        <div class="opt-in--newsletter-form__field opt-in--newsletter-form__field--email">
            <div class="form-item form-type-textfield">
              <input onfocus="if (this.value == 'Enter your email address')
              {this.value = '';}
              " onblur="if (this.value == '')
              {this.value = 'Enter your email address';}
              " id="edit-search-block-form--2" name="search_block_form" value="Enter your email address" size="15" maxlength="128" class="form-text" type="text">
                <input id="edit-submit" name="op" value="Sign Up" class="form-submit" type="submit">
            </div>
            <input name="form_id" value="search_block_form" type="hidden">
        </div>
    </form>
</div>