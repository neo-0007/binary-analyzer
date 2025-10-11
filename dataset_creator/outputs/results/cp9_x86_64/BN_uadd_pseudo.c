
int BN_uadd(BIGNUM *r,BIGNUM *a,BIGNUM *b)

{
  int num;
  ulong *ap;
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  BIGNUM *pBVar6;
  uint uVar7;
  ulong *puVar8;
  int iVar9;
  
  num = a->top;
  iVar1 = b->top;
  pBVar6 = b;
  iVar9 = iVar1;
  if (iVar1 <= num) {
    pBVar6 = a;
    a = b;
    iVar9 = num;
    num = iVar1;
  }
  lVar2 = bn_wexpand(r,iVar9 + 1);
  iVar1 = 0;
  if (lVar2 != 0) {
    r->top = iVar9;
    ap = pBVar6->d;
    puVar8 = r->d;
    uVar7 = iVar9 - num;
    uVar3 = bn_add_words(puVar8,ap,a->d,num);
    puVar8 = puVar8 + num;
    if (uVar7 != 0) {
      uVar5 = 0;
      do {
        uVar4 = uVar3 + ap[(long)num + uVar5];
        puVar8[uVar5] = uVar4;
        uVar5 = uVar5 + 1;
        uVar3 = uVar3 & uVar4 == 0;
      } while (uVar7 != uVar5);
      puVar8 = puVar8 + uVar7;
    }
    *puVar8 = uVar3;
    r->neg = 0;
    r->top = r->top + (int)uVar3;
    iVar1 = 1;
  }
  return iVar1;
}

