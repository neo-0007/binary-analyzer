
bool ossl_pw_set_passphrase(undefined4 *param_1,long param_2,long param_3)

{
  void *pvVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    ossl_pw_clear_passphrase_data();
    *param_1 = 1;
    if (param_3 == 0) {
      pvVar1 = CRYPTO_malloc(1,"../crypto/passphrase.c",0x2d);
    }
    else {
      pvVar1 = (void *)CRYPTO_memdup(param_2,param_3,"../crypto/passphrase.c",0x2c);
    }
    *(void **)(param_1 + 2) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/passphrase.c",0x2f,"ossl_pw_set_passphrase");
      ERR_set_error(0xf,0xc0100,0);
    }
    else {
      *(long *)(param_1 + 4) = param_3;
    }
    return pvVar1 != (void *)0x0;
  }
  ERR_new();
  ERR_set_debug("../crypto/passphrase.c",0x26,"ossl_pw_set_passphrase");
  ERR_set_error(0xf,0xc0102,0);
  return false;
}

