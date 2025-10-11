
long ossl_d2i_X25519_PUBKEY(long *param_1,undefined8 *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *param_2;
  pkey = (EVP_PKEY *)ossl_d2i_PUBKEY_legacy(0,&local_38);
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_get_id(pkey);
    if (iVar1 == 0x40a) {
      lVar2 = ossl_evp_pkey_get1_X25519();
      EVP_PKEY_free(pkey);
      if (lVar2 != 0) {
        *param_2 = local_38;
        if (param_1 != (long *)0x0) {
          ossl_ecx_key_free(*param_1);
          *param_1 = lVar2;
        }
        goto LAB_0059c7c5;
      }
    }
    else {
      EVP_PKEY_free(pkey);
    }
  }
  lVar2 = 0;
LAB_0059c7c5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

