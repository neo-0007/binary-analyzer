
void BN_CTX_free(BN_CTX *c)

{
  BIGNUM *pBVar1;
  BIGNUM *a;
  
  if (c == (BN_CTX *)0x0) {
    return;
  }
  CRYPTO_free(*(void **)(c + 0x20));
  a = *(BIGNUM **)c;
  *(undefined8 *)(c + 0x20) = 0;
  while (a != (BIGNUM *)0x0) {
    pBVar1 = a + 0x10;
    do {
      if (a->d != (ulong *)0x0) {
        BN_clear_free(a);
      }
      a = a + 1;
    } while (a != pBVar1);
    *(undefined8 *)(c + 8) = *(undefined8 *)((long)*(void **)c + 0x188);
    CRYPTO_free(*(void **)c);
    a = *(BIGNUM **)(c + 8);
    *(BIGNUM **)c = a;
  }
  CRYPTO_free(c);
  return;
}

