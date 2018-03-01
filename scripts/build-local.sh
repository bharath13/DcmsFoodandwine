#!/bin/bash

# Run in VM under dcms/travelandleisure directory
# travelandleisure >> ./src/scripts/build-local.sh
vmutil build foodandwine
phing -f reference/build.xml post-deploy-master
drush pm-download stage_file_proxy
drush pm-enable --yes stage_file_proxy
drush variable-set stage_file_proxy_origin "http://www.foodandwine.com"
