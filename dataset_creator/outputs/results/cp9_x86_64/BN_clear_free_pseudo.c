
void BN_clear_free(BIGNUM *a)

{
  int iVar1;
  
  if (a == (BIGNUM *)0x0) {
    return;
  }
  if (a->d != (ulong *)0x0) {
    iVar1 = BN_get_flags(a,2);
    if (iVar1 == 0) {
      bn_free_d(a,1);
    }
  }
  iVar1 = BN_get_flags(a,1);
  if (iVar1 == 0) {
    return;
  }
  OPENSSL_cleanse(a,0x18);
  CRYPTO_free(a);
  return;
}

