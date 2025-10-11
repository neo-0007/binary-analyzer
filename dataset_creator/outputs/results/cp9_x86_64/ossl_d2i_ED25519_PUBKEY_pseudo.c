
long ossl_d2i_ED25519_PUBKEY(long *param_1,undefined8 *param_2)

{
  EVP_PKEY *pkey;
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *param_2;
  pkey = (EVP_PKEY *)ossl_d2i_PUBKEY_legacy(0,&local_38);
  if (pkey != (EVP_PKEY *)0x0) {
    lVar1 = ossl_evp_pkey_get1_ED25519(pkey);
    EVP_PKEY_free(pkey);
    if (lVar1 != 0) {
      *param_2 = local_38;
      if (param_1 != (long *)0x0) {
        ossl_ecx_key_free(*param_1);
        *param_1 = lVar1;
      }
      goto LAB_0059c54c;
    }
  }
  lVar1 = 0;
LAB_0059c54c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

