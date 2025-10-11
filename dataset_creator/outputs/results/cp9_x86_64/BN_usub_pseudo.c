
int BN_usub(BIGNUM *r,BIGNUM *a,BIGNUM *b)

{
  int num;
  ulong *ap;
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = a->top;
  num = b->top;
  iVar7 = iVar6 - num;
  if (-1 < iVar7) {
    lVar3 = bn_wexpand(r,iVar6);
    iVar2 = 0;
    if (lVar3 != 0) {
      ap = a->d;
      puVar5 = r->d;
      uVar4 = bn_sub_words(puVar5,ap,b->d,num);
      puVar5 = puVar5 + num;
      if (iVar7 != 0) {
        lVar3 = 0;
        do {
          uVar1 = ap[num + lVar3];
          puVar5[lVar3] = uVar1 - uVar4;
          lVar3 = lVar3 + 1;
          uVar4 = uVar4 & uVar1 == 0;
        } while (lVar3 != iVar7);
        puVar5 = puVar5 + lVar3;
      }
      while ((iVar6 != 0 && (puVar5 = puVar5 + -1, *puVar5 == 0))) {
        iVar6 = iVar6 + -1;
      }
      r->top = iVar6;
      iVar2 = 1;
      r->neg = 0;
    }
    return iVar2;
  }
  ERR_new();
  ERR_set_debug("../crypto/bn/bn_add.c",0x8b,"BN_usub");
  ERR_set_error(3,100,0);
  return 0;
}

