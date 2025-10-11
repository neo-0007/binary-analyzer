
int BN_mod_lshift1_quick(BIGNUM *r,BIGNUM *a,BIGNUM *m)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BN_lshift1(r,a);
  if (iVar1 != 0) {
    iVar2 = BN_cmp(r,m);
    iVar1 = 1;
    if (-1 < iVar2) {
      iVar1 = BN_sub(r,r,m);
      return iVar1;
    }
  }
  return iVar1;
}

