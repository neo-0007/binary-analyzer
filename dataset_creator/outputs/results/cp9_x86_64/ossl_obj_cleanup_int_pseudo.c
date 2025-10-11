
void ossl_obj_cleanup_int(void)

{
  if (added != 0) {
    OPENSSL_LH_set_down_load(added,0);
    OPENSSL_LH_doall(added,cleanup1_doall);
    OPENSSL_LH_doall(added,cleanup2_doall);
    OPENSSL_LH_doall(added,cleanup3_doall);
    OPENSSL_LH_free(added);
    added = 0;
    return;
  }
  return;
}

