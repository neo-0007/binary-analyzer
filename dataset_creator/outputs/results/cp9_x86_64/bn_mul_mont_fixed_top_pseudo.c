
bool bn_mul_mont_fixed_top
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
               BN_CTX *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  BIGNUM *pBVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  
  iVar3 = *(int *)(param_4 + 0x28);
  iVar4 = *(int *)(param_2 + 1);
  iVar7 = *(int *)(param_3 + 1);
  if (((1 < iVar3) && (iVar3 == iVar4)) && (iVar3 == iVar7)) {
    lVar6 = bn_wexpand(param_1,iVar3);
    if (lVar6 == 0) {
      return false;
    }
    iVar4 = bn_mul_mont(*param_1,*param_2,*param_3,*(undefined8 *)(param_4 + 0x20),param_4 + 0x50,
                        iVar3);
    if (iVar4 != 0) {
      uVar1 = *(uint *)(param_2 + 2);
      uVar2 = *(uint *)(param_3 + 2);
      *(int *)(param_1 + 1) = iVar3;
      *(uint *)(param_1 + 2) = uVar1 ^ uVar2;
      return true;
    }
    iVar4 = *(int *)(param_2 + 1);
    iVar7 = *(int *)(param_3 + 1);
  }
  if (iVar3 * 2 < iVar4 + iVar7) {
    return false;
  }
  BN_CTX_start(param_5);
  pBVar5 = BN_CTX_get(param_5);
  if (pBVar5 != (BIGNUM *)0x0) {
    if (param_2 == param_3) {
      iVar3 = bn_sqr_fixed_top(pBVar5,param_2,param_5);
    }
    else {
      iVar3 = bn_mul_fixed_top(pBVar5,param_2,param_3,param_5);
    }
    if (iVar3 != 0) {
      iVar3 = bn_from_montgomery_word(param_1,pBVar5,param_4);
      bVar8 = iVar3 != 0;
      goto LAB_004b1045;
    }
  }
  bVar8 = false;
LAB_004b1045:
  BN_CTX_end(param_5);
  return bVar8;
}

