
int BN_ucmp(BIGNUM *a,BIGNUM *b)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = a->top - b->top;
  if (iVar3 == 0) {
    iVar1 = a->top + -1;
    if (-1 < iVar1) {
      lVar2 = (long)iVar1;
      do {
        if (a->d[lVar2] != b->d[lVar2]) {
          return (-(uint)(b->d[lVar2] < a->d[lVar2]) & 2) - 1;
        }
        lVar2 = lVar2 + -1;
      } while (-1 < (int)lVar2);
    }
  }
  return iVar3;
}

