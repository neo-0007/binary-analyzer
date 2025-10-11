
dh_st * EVP_PKEY_get1_DH(EVP_PKEY *pkey)

{
  DH *dh;
  
  dh = (DH *)evp_pkey_get0_DH_int();
  if (dh != (DH *)0x0) {
    DH_up_ref(dh);
  }
  return dh;
}

