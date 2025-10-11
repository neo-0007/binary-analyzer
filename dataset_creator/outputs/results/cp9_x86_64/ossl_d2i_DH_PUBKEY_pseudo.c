
dh_st * ossl_d2i_DH_PUBKEY(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  dh_st *pdVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *param_2;
  pkey = (EVP_PKEY *)ossl_d2i_PUBKEY_legacy(0,&local_38);
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_get_id(pkey);
    if (iVar1 == 0x1c) {
      pdVar2 = EVP_PKEY_get1_DH(pkey);
      EVP_PKEY_free(pkey);
      if (pdVar2 != (dh_st *)0x0) {
        *param_2 = local_38;
        if (param_1 != (undefined8 *)0x0) {
          DH_free((DH *)*param_1);
          *param_1 = pdVar2;
        }
        goto LAB_0059bf33;
      }
    }
    else {
      EVP_PKEY_free(pkey);
    }
  }
  pdVar2 = (dh_st *)0x0;
LAB_0059bf33:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pdVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

