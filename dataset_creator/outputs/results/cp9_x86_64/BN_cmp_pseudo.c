
int BN_cmp(BIGNUM *a,BIGNUM *b)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  if ((a == (BIGNUM *)0x0) || (b == (BIGNUM *)0x0)) {
    iVar2 = -1;
    if (a == (BIGNUM *)0x0) {
      return (int)(b != (BIGNUM *)0x0);
    }
  }
  else {
    iVar2 = a->neg;
    if (iVar2 != b->neg) {
      return (-(uint)(iVar2 == 0) & 2) - 1;
    }
    iVar1 = a->top;
    uVar4 = -(uint)(iVar2 == 0) | 1;
    iVar2 = (-(uint)(iVar2 == 0) & 2) - 1;
    if (iVar1 <= b->top) {
      if (iVar1 < b->top) {
        return uVar4;
      }
      if (-1 < iVar1 + -1) {
        lVar3 = (long)(iVar1 + -1);
        do {
          if (b->d[lVar3] < a->d[lVar3]) {
            return iVar2;
          }
          if (a->d[lVar3] < b->d[lVar3]) {
            return uVar4;
          }
          lVar3 = lVar3 + -1;
        } while (-1 < (int)lVar3);
      }
      return 0;
    }
  }
  return iVar2;
}

