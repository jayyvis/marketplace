<?php
/**
 * @file
 * rules_config.rules_send_data_to_fuse.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_send_data_to_fuse" : {
      "LABEL" : "Send Data to Fuse",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "fuse" ],
      "REQUIRES" : [ "php", "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "php_eval" : { "code" : "\\u003C?php\\r\\n\\r\\n  $ch = curl_init();\\r\\n  $options = array(\\r\\n    CURLOPT_URL =\\u003E \\u0027http:\\/\\/10.1.1.57:8183\\/orders\\/create\\/\\u0027,\\r\\n    CURLOPT_HTTPHEADER =\\u003E array(\\u0027Content-Type: application\\/json\\u0027),\\r\\n    CURLOPT_POST =\\u003E 1,\\r\\n    CURLOPT_POSTFIELDS =\\u003E json_encode($commerce_order),\\r\\n    CURLOPT_HEADER =\\u003E FALSE,\\r\\n    CURLOPT_RETURNTRANSFER =\\u003E TRUE,\\r\\n    CURLOPT_FAILONERROR =\\u003E TRUE\\r\\n  );\\r\\n\\r\\n   \\/\\/ Handle Basic Authentication, if needed.\\r\\n  $username = \\u0027fuseuser\\u0027;\\r\\n  $password = \\u0027goaitc2014!\\u0027;\\r\\n  if (!empty($username)) {\\r\\n    $options[CURLOPT_USERPWD] = $username .\\u0027:\\u0027 . $password;\\r\\n  }\\r\\n  curl_setopt_array($ch, $options);\\r\\n\\r\\n  $response = curl_exec($ch);\\r\\n  $http_code = curl_getinfo($ch, CURLINFO_HTTP_CODE);\\r\\n\\r\\nfile_put_contents (\\u0027\\/tmp\\/chk.txt\\u0027 , json_encode($commerce_order));\\r\\n\\r\\n?\\u003E" } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'commerce_checkout',
  2 => 'php',
  3 => 'rules',
);
