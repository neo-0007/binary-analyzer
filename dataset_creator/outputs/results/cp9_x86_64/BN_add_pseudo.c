
int BN_add(BIGNUM *r,BIGNUM *a,BIGNUM *b)

{
  int iVar1;
  int iVar2;
  
  iVar1 = a->neg;
  if (iVar1 == b->neg) {
    iVar2 = BN_uadd(r,a,b);
    r->neg = iVar1;
    return iVar2;
  }
  iVar1 = BN_ucmp(a,b);
  if (iVar1 < 1) {
    if (iVar1 != 0) {
      iVar1 = b->neg;
      iVar2 = BN_usub(r,b,a);
      r->neg = iVar1;
      return iVar2;
    }
    BN_zero_ex(r);
    r->neg = 0;
    return 1;
  }
  iVar1 = a->neg;
  iVar2 = BN_usub(r,a,b);
  r->neg = iVar1;
  return iVar2;
}

