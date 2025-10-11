
ulong FUN_004b5560(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  long lVar15;
  bool bVar16;
  ulong local_70;
  long local_60;
  
  iVar8 = FUN_004b7e80(param_3,4);
  if ((iVar8 != 0) || (iVar8 = FUN_004b7e80(param_4,4), iVar8 != 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bn/bn_exp.c",0x48c,"BN_mod_exp_mont_word");
    FUN_0051f8f0(3,0xc0101,0);
    return 0;
  }
  iVar8 = FUN_004b7d40(param_4);
  if (iVar8 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bn/bn_exp.c",0x494,"BN_mod_exp_mont_word");
    FUN_0051f8f0(3,0x66,0);
    return 0;
  }
  local_70 = param_2;
  if (*(int *)(param_4 + 1) == 1) {
    local_70 = param_2 % *(ulong *)*param_4;
  }
  iVar8 = FUN_004b7bb0(param_3);
  if (iVar8 == 0) {
    iVar8 = FUN_004b7b70(param_4,1);
    if (iVar8 == 0) {
      uVar14 = FUN_004b8190(param_1,1);
      return uVar14;
    }
LAB_004b57b1:
    FUN_004b7b50(param_1);
    return 1;
  }
  if (local_70 == 0) goto LAB_004b57b1;
  FUN_004b2c00(param_5);
  lVar11 = FUN_004b2df0(param_5);
  lVar12 = FUN_004b2df0(param_5);
  if (lVar12 == 0) {
    local_60 = 0;
    uVar10 = 0;
LAB_004b5758:
    if (param_6 != 0) goto LAB_004b5764;
  }
  else {
    local_60 = param_6;
    if (param_6 != 0) {
LAB_004b566d:
      iVar8 = iVar8 + -2;
      if (iVar8 < 0) {
        if (local_70 == 1) {
LAB_004b58d5:
          iVar8 = FUN_004b8190(param_1,1);
          uVar10 = (uint)(iVar8 != 0);
        }
        else {
LAB_004b5890:
          uVar10 = FUN_004b8190(lVar11,local_70);
          if (uVar10 != 0) {
            iVar8 = FUN_004b7d70(lVar11,lVar11,local_60,param_5);
            if (iVar8 != 0) goto LAB_004b5736;
            uVar10 = 0;
          }
        }
      }
      else {
        bVar7 = true;
        uVar14 = local_70;
        do {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar14;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar14;
          auVar5 = auVar1 * auVar3;
          uVar13 = auVar5._0_8_;
          if (auVar5._8_8_ == 0) {
            lVar15 = lVar12;
            if (!bVar7) goto LAB_004b58f8;
          }
          else {
            if (bVar7) {
              uVar10 = FUN_004b8190();
              if (uVar10 == 0) goto LAB_004b5758;
              uVar10 = FUN_004b7d70(lVar11,lVar11,local_60,param_5);
              lVar15 = lVar11;
            }
            else {
              uVar10 = FUN_004bcd70(lVar11,uVar14);
              if (uVar10 == 0) goto LAB_004b5758;
              uVar10 = FUN_004b34a0(0,lVar12,lVar11,param_4,param_5);
              lVar15 = lVar12;
              lVar12 = lVar11;
            }
            lVar11 = lVar15;
            if (uVar10 == 0) goto LAB_004b5758;
            uVar13 = 1;
LAB_004b58f8:
            uVar10 = FUN_004b9650(lVar11,lVar11,lVar11,local_60,param_5);
            auVar5._8_8_ = extraout_RDX_00;
            auVar5._0_8_ = uVar13;
            if (uVar10 == 0) goto LAB_004b5758;
            bVar7 = false;
            lVar15 = lVar12;
          }
          uVar14 = auVar5._0_8_;
          iVar9 = FUN_004b78f0(param_3,iVar8);
          auVar6._8_8_ = extraout_RDX;
          auVar6._0_8_ = uVar14;
          lVar12 = lVar15;
          if ((iVar9 != 0) &&
             (auVar2._8_8_ = 0, auVar2._0_8_ = local_70, auVar4._8_8_ = 0, auVar4._0_8_ = uVar14,
             auVar6 = auVar2 * auVar4, auVar6._8_8_ != 0)) {
            if (bVar7) {
              uVar10 = FUN_004b8190();
              if ((uVar10 == 0) ||
                 (uVar10 = FUN_004b7d70(lVar11,lVar11,local_60,param_5), uVar10 == 0))
              goto LAB_004b5758;
              bVar7 = false;
              auVar6._8_8_ = extraout_RDX_01;
              auVar6._0_8_ = local_70;
            }
            else {
              uVar10 = FUN_004bcd70(lVar11,uVar14);
              if ((uVar10 == 0) ||
                 (uVar10 = FUN_004b34a0(0,lVar15,lVar11,param_4,param_5), uVar10 == 0))
              goto LAB_004b5758;
              auVar6._8_8_ = extraout_RDX_02;
              auVar6._0_8_ = local_70;
              lVar12 = lVar11;
              lVar11 = lVar15;
            }
          }
          uVar14 = auVar6._0_8_;
          bVar16 = iVar8 != 0;
          iVar8 = iVar8 + -1;
        } while (bVar16);
        if (uVar14 == 1) {
          if (bVar7) goto LAB_004b58d5;
        }
        else {
          local_70 = uVar14;
          if (bVar7) goto LAB_004b5890;
          uVar10 = FUN_004bcd70(lVar11,uVar14);
          if ((uVar10 == 0) ||
             (uVar10 = FUN_004b34a0(0,lVar12,lVar11,param_4,param_5), lVar11 = lVar12, uVar10 == 0))
          goto LAB_004b5758;
        }
LAB_004b5736:
        iVar8 = FUN_004b96f0(param_1,lVar11,local_60,param_5);
        uVar10 = (uint)(iVar8 != 0);
      }
      goto LAB_004b5758;
    }
    local_60 = FUN_004b9790();
    if (local_60 == 0) {
      uVar10 = 0;
    }
    else {
      iVar9 = FUN_004b9860(local_60,param_4,param_5);
      if (iVar9 != 0) goto LAB_004b566d;
      uVar10 = 0;
    }
  }
  FUN_004b9810(local_60);
LAB_004b5764:
  FUN_004b2d50(param_5);
  return (ulong)uVar10;
}

