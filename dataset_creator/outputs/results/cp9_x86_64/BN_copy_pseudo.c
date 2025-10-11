
BIGNUM * BN_copy(BIGNUM *a,BIGNUM *b)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = BN_get_flags(b,4);
  iVar1 = b->dmax;
  if (iVar2 == 0) {
    iVar1 = b->top;
  }
  if (b != a) {
    lVar3 = bn_wexpand(a,iVar1);
    if (lVar3 == 0) {
      a = (BIGNUM *)0x0;
    }
    else {
      iVar2 = b->top;
      if (0 < iVar2) {
        memcpy(a->d,b->d,(long)iVar1 << 3);
        iVar2 = b->top;
      }
      iVar1 = b->neg;
      a->top = iVar2;
      a->neg = iVar1;
    }
  }
  return a;
}

