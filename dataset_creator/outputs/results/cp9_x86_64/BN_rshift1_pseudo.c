
int BN_rshift1(BIGNUM *r,BIGNUM *a)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  iVar4 = BN_is_zero(a);
  if (iVar4 != 0) {
    BN_zero_ex(r);
    return 1;
  }
  iVar4 = a->top;
  puVar1 = a->d;
  if (a != r) {
    lVar6 = bn_wexpand(r,iVar4);
    if (lVar6 == 0) {
      return 0;
    }
    r->neg = a->neg;
  }
  iVar5 = iVar4 + -1;
  puVar2 = r->d;
  lVar6 = (long)iVar5;
  uVar3 = puVar1[lVar6];
  puVar2[lVar6] = uVar3 >> 1;
  iVar4 = iVar4 - (uint)(uVar3 == 1);
  r->top = iVar4;
  while (0 < iVar5) {
    uVar7 = uVar3 << 0x3f;
    uVar3 = puVar1[lVar6 + -1];
    puVar2[lVar6 + -1] = uVar3 >> 1 | uVar7;
    lVar6 = lVar6 + -1;
    iVar5 = (int)lVar6;
  }
  if (iVar4 == 0) {
    r->neg = 0;
  }
  return 1;
}

