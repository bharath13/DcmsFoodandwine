@seo
Feature: SL-227 Tests that important SEO features are present on the articles

  Scenario: Verify that article page has main image on it
    Given I am not logged in
    When I visit a random "article" with reference "field_images"
    Then The css id "main-content" should be availabe
    Then I should match with expression of type "xpath" "//*[@class='views-field views-field-colorbox']//img"

  Scenario: Verify that article page has content well
    Given I am not logged in
    When I visit a random "article" with reference "field_images"
    Then The css id "main-content" should be availabe

  @api
  Scenario: Verify that article page has h1 headline on it
    Given I am viewing an "article" node:
      | title          | Test Article    |
      | field_headline | Test Article    |
      | field_seo_path | my-test-article |
    Then I should see the heading "Test Article"

  @api
  Scenario: Verify that multipage article has pagination links
    Given I am viewing an "article" node:
      | title          | Test Article    |
      | field_headline | Test Article    |
      | field_seo_path | my-test-article |
      | body | one [ pagebreak ] two|
    Then I should see the link "2"

  Scenario: Verify that articles have enlarge link
    Given I visit a random "article" with reference "field_images"
    Then I should match with expression of type "xpath" "//span[@class='enlarge']"

  Scenario: Verify that articles have infobox tout
    Given I visit a random "article" with reference "field_touts"
    Then I should match with expression of type "xpath" "//div[@class='tout-image-150x150']"

  Scenario: Verify that articles have comments enabled
    Given I visit a random "article"
    Then I should match with expression of type "xpath" "//form[@class='comment-form']"

  Scenario: Verify that articles have outbrain enabled
    Given I visit a random "article"
    Then I should match with expression of type "xpath" "//div[@class='ob_container']//a//img"

  Scenario: Verify that articles have google ads
    Given I visit a random "article"
    Then I should match with expression of type "xpath" "//div[@class='ad_attribution']//a"

  Scenario: Verify that articles have ofie cm ad
    Given I visit a random "article"
    Then I should match with expression of type "css" "div[class='ofie']"

  Scenario: Verify that articles have newsletter subscription form
    Given I visit a random "article"
    Then I should match with expression of type "xpath" "//*[@id='edit-email']"

  @api
  Scenario: Verify that articles have news from the web
    Given I visit a random "article"
    Then I should match with expression of type "xpath" "//div[@id='outbrain_widget_1']"

