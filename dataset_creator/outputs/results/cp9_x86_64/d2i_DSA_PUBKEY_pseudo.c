
DSA * d2i_DSA_PUBKEY(DSA **a,uchar **pp,long length)

{
  EVP_PKEY *pkey;
  dsa_st *pdVar1;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *pp;
  pkey = (EVP_PKEY *)ossl_d2i_PUBKEY_legacy(0,&local_38);
  if (pkey != (EVP_PKEY *)0x0) {
    pdVar1 = EVP_PKEY_get1_DSA(pkey);
    EVP_PKEY_free(pkey);
    if (pdVar1 != (dsa_st *)0x0) {
      *pp = local_38;
      if (a != (DSA **)0x0) {
        DSA_free(*a);
        *a = pdVar1;
      }
      goto LAB_0059c1ec;
    }
  }
  pdVar1 = (dsa_st *)0x0;
LAB_0059c1ec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pdVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

