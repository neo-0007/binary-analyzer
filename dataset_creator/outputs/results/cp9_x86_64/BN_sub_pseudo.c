
int BN_sub(BIGNUM *r,BIGNUM *a,BIGNUM *b)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = a->neg;
  if (uVar3 == b->neg) {
    iVar1 = BN_ucmp(a,b);
    if (0 < iVar1) {
      iVar1 = a->neg;
      iVar2 = BN_usub(r,a,b);
      r->neg = iVar1;
      return iVar2;
    }
    if (iVar1 == 0) {
      BN_zero_ex(r);
      iVar1 = 1;
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)(b->neg == 0);
      iVar1 = BN_usub(r,b,a);
    }
  }
  else {
    iVar1 = BN_uadd(r,a,b);
  }
  r->neg = uVar3;
  return iVar1;
}

