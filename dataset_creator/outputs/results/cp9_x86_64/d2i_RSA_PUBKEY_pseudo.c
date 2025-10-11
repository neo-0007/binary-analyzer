
RSA * d2i_RSA_PUBKEY(RSA **a,uchar **pp,long length)

{
  EVP_PKEY *pkey;
  rsa_st *prVar1;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *pp;
  pkey = (EVP_PKEY *)ossl_d2i_PUBKEY_legacy(0,&local_38);
  if (pkey != (EVP_PKEY *)0x0) {
    prVar1 = EVP_PKEY_get1_RSA(pkey);
    EVP_PKEY_free(pkey);
    if (prVar1 != (rsa_st *)0x0) {
      *pp = local_38;
      if (a != (RSA **)0x0) {
        RSA_free(*a);
        *a = prVar1;
      }
      goto LAB_0059be0c;
    }
  }
  prVar1 = (rsa_st *)0x0;
LAB_0059be0c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return prVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

