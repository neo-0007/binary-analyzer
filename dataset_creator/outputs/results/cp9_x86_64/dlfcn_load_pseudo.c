
undefined4 dlfcn_load(DSO *param_1)

{
  int iVar1;
  char *ptr;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  ptr = DSO_convert_filename(param_1,(char *)0x0);
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (ptr == (char *)0x0) {
    ERR_new();
    uVar5 = 0;
    ERR_set_debug("../crypto/dso/dso_dlfcn.c",0x69,"dlfcn_load");
    ERR_set_error(0x25,0x6f,0);
    CRYPTO_free((void *)0x0);
  }
  else {
    lVar3 = dlopen(ptr,(-(uint)((param_1->flags & 0x20U) == 0) & 0xffffff00) + 0x102);
    if (lVar3 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/dso/dso_dlfcn.c",0x76,"dlfcn_load");
      uVar4 = dlerror();
      ERR_set_error(0x25,0x67,"filename(%s): %s",ptr,uVar4);
      CRYPTO_free(ptr);
      return 0;
    }
    *piVar2 = iVar1;
    iVar1 = OPENSSL_sk_push(param_1->meth_data,lVar3);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/dso/dso_dlfcn.c",0x80,"dlfcn_load");
      ERR_set_error(0x25,0x69,0);
      CRYPTO_free(ptr);
      dlclose(lVar3);
      return 0;
    }
    param_1->loaded_filename = ptr;
    uVar5 = 1;
  }
  return uVar5;
}

