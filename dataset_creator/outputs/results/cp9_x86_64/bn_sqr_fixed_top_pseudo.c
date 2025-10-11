
bool bn_sqr_fixed_top(BIGNUM *param_1,BIGNUM *param_2,BN_CTX *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BIGNUM *pBVar4;
  long lVar5;
  BIGNUM *pBVar6;
  byte bVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined1 local_148 [264];
  long local_40;
  
  iVar1 = param_2->top;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar1 < 1) {
    param_1->top = 0;
    bVar8 = true;
    param_1->neg = 0;
    goto LAB_004b3d7b;
  }
  BN_CTX_start(param_3);
  if (param_2 == param_1) {
    pBVar6 = BN_CTX_get(param_3);
    pBVar4 = BN_CTX_get(param_3);
    if (pBVar6 != (BIGNUM *)0x0) goto LAB_004b3ce3;
LAB_004b3d70:
    bVar8 = false;
  }
  else {
    pBVar4 = BN_CTX_get(param_3);
    pBVar6 = param_1;
    if (param_1 == (BIGNUM *)0x0) goto LAB_004b3d70;
LAB_004b3ce3:
    if (pBVar4 == (BIGNUM *)0x0) goto LAB_004b3d70;
    iVar2 = iVar1 * 2;
    lVar5 = bn_wexpand(pBVar6,iVar2);
    if (lVar5 == 0) goto LAB_004b3d70;
    if (iVar1 == 4) {
      bn_sqr_comba4(pBVar6->d,param_2->d);
    }
    else if (iVar1 == 8) {
      bn_sqr_comba8(pBVar6->d,param_2->d);
    }
    else if (iVar1 < 0x10) {
      bn_sqr_normal(pBVar6->d,param_2->d,iVar1,local_148);
    }
    else {
      iVar3 = BN_num_bits_word((long)iVar1);
      bVar7 = (char)iVar3 - 1;
      if (iVar1 == 1 << (bVar7 & 0x1f)) {
        lVar5 = bn_wexpand(pBVar4,4 << (bVar7 & 0x1f));
        if (lVar5 == 0) goto LAB_004b3d70;
        bn_sqr_recursive(pBVar6->d,param_2->d,iVar1,pBVar4->d);
      }
      else {
        lVar5 = bn_wexpand(pBVar4,iVar2);
        if (lVar5 == 0) goto LAB_004b3d70;
        bn_sqr_normal(pBVar6->d,param_2->d,iVar1,pBVar4->d);
      }
    }
    pBVar6->neg = 0;
    bVar8 = true;
    pBVar6->top = iVar2;
    if (pBVar6 != param_1) {
      pBVar6 = BN_copy(param_1,pBVar6);
      bVar8 = pBVar6 != (BIGNUM *)0x0;
    }
  }
  BN_CTX_end(param_3);
LAB_004b3d7b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar8;
}

