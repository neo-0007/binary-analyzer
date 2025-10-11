
long dlfcn_bind_func(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    if (0 < iVar1) {
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
      lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar1 + -1);
      if (lVar2 == 0) {
        ERR_new(0);
        lVar2 = 0;
        ERR_set_debug("../crypto/dso/dso_dlfcn.c",0xb7,"dlfcn_bind_func");
        ERR_set_error(0x25,0x68,0);
      }
      else {
        lVar2 = dlsym(lVar2,param_2);
        if (lVar2 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/dso/dso_dlfcn.c",0xbc,"dlfcn_bind_func");
          uVar3 = dlerror();
          ERR_set_error(0x25,0x6a,"symname(%s): %s",param_2,uVar3);
        }
      }
      return lVar2;
    }
    ERR_new();
    ERR_set_debug("../crypto/dso/dso_dlfcn.c",0xb2,"dlfcn_bind_func");
    ERR_set_error(0x25,0x69,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("../crypto/dso/dso_dlfcn.c",0xae,"dlfcn_bind_func");
  ERR_set_error(0x25,0xc0102,0);
  return 0;
}

