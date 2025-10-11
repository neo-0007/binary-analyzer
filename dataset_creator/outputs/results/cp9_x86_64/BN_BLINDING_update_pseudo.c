
int BN_BLINDING_update(BN_BLINDING *b,BN_CTX *ctx)

{
  BIGNUM *pBVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  BN_BLINDING *pBVar6;
  
  if ((*(long *)b == 0) || (pBVar1 = *(BIGNUM **)(b + 8), pBVar1 == (BIGNUM *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/bn/bn_blind.c",0x62,"BN_BLINDING_update");
    ERR_set_error(3,0x6b,0);
    uVar5 = 0;
  }
  else {
    uVar2 = *(ulong *)(b + 0x30);
    if (*(int *)(b + 0x28) == -1) {
      *(undefined4 *)(b + 0x28) = 1;
LAB_005af157:
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
    else {
      iVar4 = *(int *)(b + 0x28) + 1;
      *(int *)(b + 0x28) = iVar4;
      if (iVar4 != 0x20) goto LAB_005af157;
      if ((*(long *)(b + 0x10) != 0) && ((uVar2 & 2) == 0)) {
        pBVar6 = BN_BLINDING_create_param
                           (b,(BIGNUM *)0x0,(BIGNUM *)0x0,ctx,(bn_mod_exp *)0x0,(BN_MONT_CTX *)0x0);
        uVar5 = (uint)(pBVar6 != (BN_BLINDING *)0x0);
        goto LAB_005af1a2;
      }
      uVar5 = 1;
      if ((uVar2 & 1) != 0) goto LAB_005af1a8;
    }
    if (*(long *)(b + 0x38) == 0) {
      iVar4 = BN_mod_mul(pBVar1,pBVar1,pBVar1,*(BIGNUM **)(b + 0x18),ctx);
      if (iVar4 == 0) goto LAB_005af148;
      pBVar1 = *(BIGNUM **)b;
      iVar4 = BN_mod_mul(pBVar1,pBVar1,pBVar1,*(BIGNUM **)(b + 0x18),ctx);
      uVar5 = (uint)(iVar4 != 0);
    }
    else {
      iVar4 = bn_mul_mont_fixed_top(pBVar1,pBVar1,pBVar1,*(long *)(b + 0x38),ctx);
      if (iVar4 == 0) {
LAB_005af148:
        uVar5 = 0;
      }
      else {
        uVar3 = *(undefined8 *)b;
        iVar4 = bn_mul_mont_fixed_top(uVar3,uVar3,uVar3,*(undefined8 *)(b + 0x38),ctx);
        uVar5 = (uint)(iVar4 != 0);
      }
    }
  }
LAB_005af1a2:
  if (*(int *)(b + 0x28) != 0x20) {
    return uVar5;
  }
LAB_005af1a8:
  *(undefined4 *)(b + 0x28) = 0;
  return uVar5;
}

