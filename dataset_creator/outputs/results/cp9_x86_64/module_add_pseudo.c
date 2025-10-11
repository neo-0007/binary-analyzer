
undefined8 * module_add(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *ptr;
  char *pcVar2;
  
  if ((supported_modules != (undefined8 *)0x0) ||
     (ptr = (undefined8 *)OPENSSL_sk_new_null(), supported_modules = ptr, ptr != (undefined8 *)0x0))
  {
    ptr = (undefined8 *)CRYPTO_zalloc(0x30,"../crypto/conf/conf_mod.c",0x12d);
    if (ptr == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/conf/conf_mod.c",0x12e,"module_add");
      ERR_set_error(0xe,0xc0100,0);
    }
    else {
      *ptr = param_1;
      pcVar2 = CRYPTO_strdup(param_2,"../crypto/conf/conf_mod.c",0x133);
      ptr[2] = param_3;
      ptr[1] = pcVar2;
      ptr[3] = param_4;
      if (pcVar2 == (char *)0x0) {
        CRYPTO_free(ptr);
        ptr = (undefined8 *)0x0;
      }
      else {
        iVar1 = OPENSSL_sk_push(supported_modules,ptr);
        if (iVar1 == 0) {
          CRYPTO_free((void *)ptr[1]);
          CRYPTO_free(ptr);
          ptr = (undefined8 *)0x0;
        }
      }
    }
  }
  return ptr;
}

