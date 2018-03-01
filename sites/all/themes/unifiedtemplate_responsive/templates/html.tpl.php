<?php
$data = $variables;
$node = menu_get_object();
if (isset($node)) {
  $data['bodyClass'] = 'page-node-' . $node->nid;
}
print ti_patternlab_render_partial("wrappers-html", $data);
