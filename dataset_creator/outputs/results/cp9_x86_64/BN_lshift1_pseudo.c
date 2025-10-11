
int BN_lshift1(BIGNUM *r,BIGNUM *a)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  int iVar9;
  
  if (r == a) {
    lVar5 = bn_wexpand();
    if (lVar5 == 0) {
      return 0;
    }
    iVar9 = r->top;
  }
  else {
    r->neg = a->neg;
    lVar5 = bn_wexpand();
    if (lVar5 == 0) {
      return 0;
    }
    iVar9 = a->top;
    r->top = iVar9;
  }
  iVar1 = a->top;
  puVar2 = a->d;
  puVar8 = r->d;
  if (iVar1 < 1) {
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    lVar5 = 0;
    uVar7 = 0;
    do {
      uVar3 = puVar2[lVar5];
      uVar6 = uVar3 >> 0x3f;
      puVar8[lVar5] = uVar3 * 2 | uVar7;
      lVar5 = lVar5 + 1;
      uVar7 = uVar6;
    } while (iVar1 != lVar5);
    puVar8 = puVar8 + iVar1;
    uVar4 = (uint)(uVar3 >> 0x3f);
  }
  *puVar8 = uVar6;
  r->top = iVar9 + uVar4;
  return 1;
}

