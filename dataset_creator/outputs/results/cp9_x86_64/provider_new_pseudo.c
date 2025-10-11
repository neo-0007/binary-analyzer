
long provider_new(char *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  lVar1 = CRYPTO_zalloc(0xe0,"../crypto/provider_core.c",0x1c9);
  if (lVar1 != 0) {
    lVar2 = CRYPTO_THREAD_lock_new();
    *(long *)(lVar1 + 0xb8) = lVar2;
    if (lVar2 != 0) {
      lVar2 = CRYPTO_THREAD_lock_new();
      *(long *)(lVar1 + 8) = lVar2;
      if (lVar2 != 0) {
        pcVar3 = CRYPTO_strdup(param_1,"../crypto/provider_core.c",0x1cf);
        *(char **)(lVar1 + 0x28) = pcVar3;
        if (pcVar3 != (char *)0x0) {
          lVar2 = OPENSSL_sk_deep_copy(param_3,infopair_copy,infopair_free);
          *(long *)(lVar1 + 0x48) = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(undefined4 *)(lVar1 + 0x10) = 1;
            UNLOCK();
            *(undefined8 *)(lVar1 + 0x40) = param_2;
            return lVar1;
          }
        }
      }
    }
  }
  ossl_provider_free(lVar1);
  ERR_new();
  ERR_set_debug("../crypto/provider_core.c",0x1d4,"provider_new");
  ERR_set_error(0xf,0xc0100,0);
  return 0;
}

