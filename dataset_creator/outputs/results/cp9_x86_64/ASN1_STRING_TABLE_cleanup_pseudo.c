
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_STRING_TABLE_cleanup(void)

{
  long lVar1;
  
  lVar1 = stable;
  if (stable != 0) {
    stable = 0;
    OPENSSL_sk_pop_free(lVar1,st_free);
    return;
  }
  return;
}

