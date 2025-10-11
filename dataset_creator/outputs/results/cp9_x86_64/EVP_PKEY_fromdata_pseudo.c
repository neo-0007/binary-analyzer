
ulong EVP_PKEY_fromdata(byte *param_1,long *param_2)

{
  long lVar1;
  EVP_PKEY *pkey;
  ulong uVar2;
  
  if ((param_1 == (byte *)0x0) || ((*param_1 & 8) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/pmeth_gn.c",0x172,"EVP_PKEY_fromdata");
    ERR_set_error(6,0x96,0);
    uVar2 = 0xfffffffe;
  }
  else if (param_2 == (long *)0x0) {
    uVar2 = 0xffffffff;
  }
  else if (*param_2 == 0) {
    pkey = EVP_PKEY_new();
    *param_2 = (long)pkey;
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/pmeth_gn.c",0x17d,"EVP_PKEY_fromdata");
      ERR_set_error(6,0xc0100,0);
      uVar2 = 0xffffffff;
    }
    else {
      lVar1 = evp_keymgmt_util_fromdata(pkey,*(undefined8 *)(param_1 + 0x20));
      if (lVar1 != 0) {
        return 1;
      }
      *param_2 = 0;
      EVP_PKEY_free(pkey);
      uVar2 = 0;
    }
  }
  else {
    lVar1 = evp_keymgmt_util_fromdata(*param_2,*(undefined8 *)(param_1 + 0x20));
    uVar2 = (ulong)(lVar1 != 0);
  }
  return uVar2;
}

