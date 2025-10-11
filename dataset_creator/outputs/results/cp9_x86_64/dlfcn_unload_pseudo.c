
undefined8 dlfcn_unload(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    uVar3 = 1;
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    if (0 < iVar1) {
      lVar2 = OPENSSL_sk_pop(*(undefined8 *)(param_1 + 8));
      if (lVar2 == 0) {
        ERR_new(0);
        uVar3 = 0;
        ERR_set_debug("../crypto/dso/dso_dlfcn.c",0x99,"dlfcn_unload");
        ERR_set_error(0x25,0x68,0);
        OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),0);
      }
      else {
        dlclose();
      }
    }
    return uVar3;
  }
  ERR_new();
  ERR_set_debug("../crypto/dso/dso_dlfcn.c",0x92,"dlfcn_unload");
  ERR_set_error(0x25,0xc0102,0);
  return 0;
}

