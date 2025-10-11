
void BN_free(BIGNUM *a)

{
  byte bVar1;
  int iVar2;
  
  if (a == (BIGNUM *)0x0) {
    return;
  }
  iVar2 = BN_get_flags(a,2);
  if (iVar2 == 0) {
    bn_free_d(a,0);
    bVar1 = (byte)a->flags;
  }
  else {
    bVar1 = (byte)a->flags;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  CRYPTO_free(a);
  return;
}

