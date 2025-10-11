
ulong BN_GF2m_mod_mul_arr(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                         BN_CTX *param_5)

{
  undefined8 uVar1;
  BIGNUM *pBVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  int local_94;
  long local_90;
  ulong local_68 [4];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == param_3) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BN_GF2m_mod_sqr_arr(param_1,param_2,param_4,param_5);
      return uVar5;
    }
    goto LAB_00616e6a;
  }
  BN_CTX_start(param_5);
  pBVar2 = BN_CTX_get(param_5);
  if (pBVar2 == (BIGNUM *)0x0) {
LAB_00616e30:
    uVar5 = 0;
  }
  else {
    iVar7 = (int)param_3[1] + (int)param_2[1];
    iVar8 = iVar7 + 4;
    lVar3 = bn_wexpand(pBVar2);
    if (lVar3 == 0) goto LAB_00616e30;
    pBVar2->top = iVar8;
    if (0 < iVar8) {
      memset(pBVar2->d,0,(ulong)(iVar7 + 3) * 8 + 8);
    }
    iVar8 = (int)param_3[1];
    if (0 < iVar8) {
      local_90 = 0;
      iVar7 = (int)param_2[1];
      local_94 = 0;
      do {
        uVar10 = 0;
        uVar1 = *(undefined8 *)(*param_3 + local_90);
        if (iVar8 != local_94 + 1) {
          uVar10 = *(undefined8 *)(*param_3 + 8 + local_90);
        }
        if (0 < iVar7) {
          lVar3 = 8;
          iVar8 = 0;
          do {
            uVar9 = 0;
            if (iVar7 != iVar8 + 1) {
              uVar9 = *(undefined8 *)(*param_2 + lVar3);
            }
            bn_GF2m_mul_2x2(local_68,uVar9,*(undefined8 *)(*param_2 + -8 + lVar3),uVar10,uVar1);
            puVar4 = (ulong *)(local_90 + -8 + lVar3 + (long)pBVar2->d);
            puVar6 = local_68;
            do {
              uVar5 = *puVar6;
              puVar6 = puVar6 + 1;
              *puVar4 = *puVar4 ^ uVar5;
              puVar4 = puVar4 + 1;
            } while (&local_48 != puVar6);
            iVar7 = (int)param_2[1];
            iVar8 = iVar8 + 2;
            lVar3 = lVar3 + 0x10;
          } while (iVar8 < iVar7);
          iVar8 = (int)param_3[1];
        }
        local_94 = local_94 + 2;
        local_90 = local_90 + 0x10;
      } while (local_94 < iVar8);
    }
    bn_correct_top(pBVar2);
    iVar8 = BN_GF2m_mod_arr(param_1,pBVar2,param_4);
    uVar5 = (ulong)(iVar8 != 0);
  }
  BN_CTX_end(param_5);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_00616e6a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

