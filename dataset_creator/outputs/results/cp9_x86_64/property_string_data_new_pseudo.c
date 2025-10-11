
long * property_string_data_new(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)CRYPTO_zalloc(0x20,"../crypto/property/property_string.c",0x57);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar2 = CRYPTO_THREAD_lock_new();
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    lVar2 = OPENSSL_LH_new(property_hash,property_cmp);
    plVar1[1] = lVar2;
    if (lVar2 != 0) {
      lVar2 = OPENSSL_LH_new(property_hash,property_cmp);
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        return plVar1;
      }
    }
  }
  property_string_data_free_part_0(plVar1);
  return (long *)0x0;
}

