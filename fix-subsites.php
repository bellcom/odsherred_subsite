<?php

  #2. ”Basic Page” skal hedde ”Simpel side”
  $sql = "UPDATE node_type SET name = 'Simpel side' WHERE type = 'page'";
  db_query($sql);

  #3. ”node view” skal være aktiveret
  // See 6/7

  #4. Simple sider skal default IKKE være udgivet
  // Removed all status, promoted and other options
  variable_set('node_options_page', array());

  #5. Når man ser siderne i Filtered HTML, skal den IKKE stå fortløbende

  #6. Når jeg logger på som superbruger, skal brugerfladen layoutmæssigt være magen til den jeg har når jeg logger på som admin – både når jeg opretter en side og når jeg redigerer i den (og alt muligt andet, men det er det jeg lige kan se)
  #7. Superbrugere skal kunne sætte sider i menu
  $super_user_rid = 4;
  user_role_grant_permissions($super_user_rid, array('view the administration theme', 'access overlay', 'administer menu'));

  #8. Når man laver en kontaktboks, skal vejledningen omkring hvordan man skriver telefonnr. være rigtig!
  // Fixed in features

  #9. funtionerne ”a-å”, ”læs højt” og ”sitemap” også skal med på alle subsites.
  // Fixed in features

  $sql = "SELECT * FROM field_config_instance WHERE field_name = 'field_telefon'";
  $result = db_query($sql);
  foreach ($result as $row) {
    $field_data = unserialize($row->data);
    $field_data['description'] = 'Telefon nummer -(inkl. lokalnummer) - skal altid stå i blokke af 2 (ex 59 66 66 43)';
    $field_data = serialize($field_data);
    $sql = "UPDATE field_config_instance SET data = :data WHERE field_name = 'field_telefon'";
    db_query($sql, array(':data' => $field_data));
  }
