
dsa_st * EVP_PKEY_get1_DSA(EVP_PKEY *pkey)

{
  DSA *r;
  
  if (pkey->type == 0x74) {
    r = (DSA *)evp_pkey_get_legacy();
    if (r != (DSA *)0x0) {
      DSA_up_ref(r);
    }
    return r;
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/p_lib.c",0x348,"evp_pkey_get0_DSA_int");
  ERR_set_error(6,0x81,0);
  return (dsa_st *)0x0;
}

