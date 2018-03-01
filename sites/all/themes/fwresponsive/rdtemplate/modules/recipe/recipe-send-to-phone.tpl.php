<?php

/**
 * Recipe Send To Phone
 *
 * @param string $recipe_url The url of the recipe to send
 */

?>
<div class="recipe__stp divider" data-bind="allowBindings: false">
  <svg class="recipe__stp__icon" width="53" height="49" viewBox="0 0 53 49" role="presentation">
    <use xlink:href="<?php asset('img/spritemap.svg#icon-send-to-phone'); ?>"></use>
  </svg>
  <div class="recipe__stp__content" data-js-component="recipeSendToPhone">
    <p class="recipe__stp__msg">Send this recipe link to your phone via text<sup>*</sup></p>
    <form action="" method="post" data-bind="submit: submitForm, visible: !formSubmitted()">
      <input class="phone-number" type="tel" name="sms_to">
      <input type="hidden" name="recipe_url" value="<?php print $recipe_url; ?>">
      <button class="recipe__stp__send">Send To Your Phone ></button>
    </form>
    <p class="recipe__stp__success" data-bind="visible: formSubmitted">You will receive the link shortly!</p>
    <p class="fine-print"><sup>*</sup>Your carrier's standard messaging rates apply.</p>
  </div>
</div>