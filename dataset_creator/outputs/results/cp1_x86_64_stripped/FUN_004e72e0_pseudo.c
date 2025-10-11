
undefined4
FUN_004e72e0(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    lVar5 = FUN_004ee2d0(lVar1);
    if (lVar5 != 0) {
      lVar6 = FUN_00547ef0();
      if (lVar6 != 0) {
        lVar7 = FUN_004b2a70(param_4);
        if (lVar7 == 0) {
LAB_004e74b0:
          uVar4 = 0;
          uVar10 = 0;
        }
        else {
          FUN_004b2c00(lVar7);
          iVar2 = FUN_004eb2f0(lVar5,lVar6,0,param_4,param_5,lVar7);
          if (iVar2 == 0) goto LAB_004e74b0;
          lVar8 = FUN_004ee2e0(lVar1);
          lVar9 = FUN_004ee3f0(lVar1);
          if (lVar9 != 0) {
            lVar9 = FUN_004f4df0(lVar5,lVar9,2,&local_50,lVar7);
            if (lVar9 != 0) {
              uVar11 = 6;
              iVar2 = FUN_005485f0(lVar6,&DAT_007ce5e4,local_50,lVar9);
              if (iVar2 != 0) goto LAB_004e7405;
            }
            goto LAB_004e74b0;
          }
          uVar11 = 4;
LAB_004e7405:
          if (lVar8 != 0) {
            iVar2 = FUN_004ef7f0(lVar5);
            if (0 < iVar2) {
              iVar2 = FUN_005482a0(lVar6,&DAT_007ce5df,lVar8,(long)(iVar2 + 7 >> 3));
              if (iVar2 != 0) {
                uVar3 = FUN_004ee6c0(lVar1);
                iVar2 = FUN_00547fe0(lVar6,"use-cofactor-flag",uVar3 >> 0xc & 1);
                if (iVar2 != 0) {
                  uVar11 = uVar11 | 0x81;
                  goto LAB_004e7461;
                }
              }
            }
            goto LAB_004e74b0;
          }
LAB_004e7461:
          uVar10 = FUN_00548720(lVar6);
          uVar4 = (*param_3)(param_2,uVar11,uVar10);
        }
        FUN_00547f60(lVar6);
        FUN_0041ec30(uVar10);
        FUN_0041ad60(local_50,"../crypto/ec/ec_ameth.c",0x260);
        FUN_0041ad60(local_48,"../crypto/ec/ec_ameth.c",0x261);
        FUN_004b2d50(lVar7);
        FUN_004b2b50(lVar7);
        goto LAB_004e748b;
      }
    }
  }
  uVar4 = 0;
LAB_004e748b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

