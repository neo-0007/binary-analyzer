
void property_defns_new(void)

{
  OPENSSL_LH_new(property_defn_hash,property_defn_cmp);
  return;
}

