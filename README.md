dcms-site-foodandwine
====================

A DCMS local VM is required for development on this repository. Instruction can be found at:
https://tools.timeinc.net/wiki/display/DCMS/DCMS+Developer+VM+Installation+and+Configuration

Corrections in the Wiki -

Configure SOLR Search
3. Configure Search Modules in your Drupal Site
a. Site Search
i. In the Admin menu, go to » Configuration » Search and metadata » Apache Solr search » Settings  (http://www.foodandwine.local/admin/config/search/apachesolr/settings)
  Edit Localhost server : /admin/config/search/apachesolr/settings/solr/edit
    1. Edit Solr Server URL to this configuration: http://localhost:8080/solr/foodandwine-site
    2. Make this default
    3. Description -> "Site Search"
    4. Make sure "Read and write (normal)" is selected
    5. Use the Test Connection button to verify the configuration before Saving.
    6. Click Save

Continue on the next steps from Wiki

Sass Compile
-------------
Site build(vmutil build foodandwine) will excute the Saas compile
If you need to just compile SaaS to Css
* ssh inside your virtual machine(ssh devadmin@dcms-developer.local)
* Go to the Themes folder (cd ~/dcms/foodandwine/site/sites/all/themes/foodandwine)
* Run - compass compile

Taxonomy Download
-----------------
Run these two drush commands to download taxonomy vocabularies 
 * drush mar
 * drush mi --group=term_migration --user=1

Set Mobile Site for FW
-----------------
we have a solution now to add /m/ support to your local sites to enable the mobile site to properly work. You'll need to follow the instructions below and then test by checking on a piece of content (probably test content that you'll create and publish through the workflow) that it works. Note: Do not just check to see if the homepage resolves on the mobile theme, that was already working, you'll need to check a piece of content that is a longer URL than just /m/.

Please email me and let me know when you've completed these changes and tested that the mobile site is working for you. If it's not working, also let me know and we'll debug together.

After SSHing into your VM:

sudo bash

Edit each of these files (using vim or nano or your text editor of choice) for the given site:
- /data/timeinc/servers/apache-dcms-origin/conf/conf.d/z-www.\<site\>.local.conf
- /data/timeinc/servers/apache-dcms-origin/conf/conf.d/z-ssl-www.\<site\>.local.conf
- /data/timeinc/servers/apache-dcms-editor/conf/conf.d/z-editor.\<site\>.local.conf
- /data/timeinc/servers/apache-dcms-editor/conf/conf.d/z-ssl-editor.\<site\>.local.conf

Find this block:
    # Pass all requests not referring directly to files in the filesystem to
    # index.php. Clean URLs are handled in drupal_environment_initialize().<br>
    RewriteCond %{REQUEST_FILENAME} !-f<br>
    RewriteCond %{REQUEST_FILENAME} !-d<br>
    RewriteCond %{REQUEST_URI} !=/favicon.ico<br>
    RewriteRule ^ index.php [L]<br>

And add this right above it:<br>
    RewriteCond %{REQUEST_FILENAME} !-f<br>
    RewriteCond %{REQUEST_FILENAME} !-d<br>
    RewriteCond %{REQUEST_URI} !=/favicon.ico<br>
    RewriteCond %{REQUEST_URI} ^/m/<br>
    RewriteRule ^ /m/index.php [L]<br>

Then bounce the Apache instances and varnish:<br>
service apache-dcms-cache restart && service apache-dcms-developer restart && service apache-dcms-origin restart && service apache-dcms-editor restart && service varnishncsa-dcms-cache restart
