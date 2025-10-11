
int BN_set_bit(BIGNUM *a,int n)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong *puVar4;
  
  if (n < 0) {
    return 0;
  }
  iVar3 = n >> 6;
  if (iVar3 < a->top) {
    puVar4 = a->d;
  }
  else {
    lVar2 = bn_wexpand();
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = a->top;
    puVar4 = a->d;
    if (iVar1 <= iVar3) {
      memset(puVar4 + iVar1,0,(ulong)(uint)(iVar3 - iVar1) * 8 + 8);
    }
    a->top = iVar3 + 1;
  }
  puVar4[iVar3] = puVar4[iVar3] | 1L << ((byte)n & 0x3f);
  return 1;
}

