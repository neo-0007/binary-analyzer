
EC_KEY * d2i_EC_PUBKEY(EC_KEY **a,uchar **pp,long length)

{
  int iVar1;
  EVP_PKEY *pkey;
  ec_key_st *peVar2;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *pp;
  pkey = (EVP_PKEY *)ossl_d2i_PUBKEY_legacy(0,&local_38);
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_get_id(pkey);
    if ((iVar1 == 0x198) || (iVar1 == 0x494)) {
      peVar2 = EVP_PKEY_get1_EC_KEY(pkey);
      EVP_PKEY_free(pkey);
      if (peVar2 != (ec_key_st *)0x0) {
        *pp = local_38;
        if (a != (EC_KEY **)0x0) {
          EC_KEY_free(*a);
          *a = peVar2;
        }
        goto LAB_0059c3dc;
      }
    }
    else {
      EVP_PKEY_free(pkey);
    }
  }
  peVar2 = (EC_KEY *)0x0;
LAB_0059c3dc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return peVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

