
void o_names_init_ossl_(void)

{
  names_lh = 0;
  obj_lock = CRYPTO_THREAD_lock_new();
  if (obj_lock == 0) {
    if (names_lh != 0) {
      o_names_init_ossl_ret_ = 0;
      return;
    }
  }
  else {
    names_lh = OPENSSL_LH_new(obj_name_hash,obj_name_cmp);
    if (names_lh != 0) {
      if (obj_lock == 0) {
        o_names_init_ossl_ret_ = 0;
        return;
      }
      o_names_init_ossl_ret_ = 1;
      return;
    }
  }
  CRYPTO_THREAD_lock_free();
  obj_lock = 0;
  o_names_init_ossl_ret_ = 0;
  return;
}

