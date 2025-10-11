
long ossl_namemap_new(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = CRYPTO_zalloc(0x20,"../crypto/core_namemap.c",0x1ff);
  if (lVar1 != 0) {
    lVar2 = CRYPTO_THREAD_lock_new();
    *(long *)(lVar1 + 8) = lVar2;
    if (lVar2 != 0) {
      lVar2 = OPENSSL_LH_new(namenum_hash,namenum_cmp);
      *(long *)(lVar1 + 0x10) = lVar2;
      if (lVar2 != 0) {
        return lVar1;
      }
    }
  }
  ossl_namemap_free(lVar1);
  return 0;
}

