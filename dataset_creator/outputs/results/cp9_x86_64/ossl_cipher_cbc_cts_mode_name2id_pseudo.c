
undefined4 ossl_cipher_cbc_cts_mode_name2id(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = OPENSSL_strcasecmp(param_1,&DAT_007d7744);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_1,&DAT_007d7748);
    if (iVar1 == 0) {
      lVar2 = 1;
    }
    else {
      iVar1 = OPENSSL_strcasecmp(param_1,&DAT_007d7740);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      lVar2 = 2;
    }
  }
  return (&cts_modes)[lVar2 * 4];
}

