
void BN_clear(BIGNUM *a)

{
  if (a != (BIGNUM *)0x0) {
    if (a->d != (ulong *)0x0) {
      OPENSSL_cleanse(a->d,(long)a->dmax << 3);
    }
    a->neg = 0;
    a->top = 0;
    return;
  }
  return;
}

