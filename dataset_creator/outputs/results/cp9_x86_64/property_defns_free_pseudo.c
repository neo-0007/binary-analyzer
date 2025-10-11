
void property_defns_free(long param_1)

{
  if (param_1 != 0) {
    OPENSSL_LH_doall(param_1,property_defn_free);
    OPENSSL_LH_free(param_1);
    return;
  }
  return;
}

