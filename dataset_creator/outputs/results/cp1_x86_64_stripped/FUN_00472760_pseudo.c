
int FUN_00472760(long param_1,uint param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  iVar1 = FUN_0043b840();
  if (((param_1 != 0) && (iVar1 != 0)) && ((param_2 & 4) != 0)) {
    if (((param_2 & 3) != 1) && ((param_2 & 0x83) != 0x80)) {
      lVar4 = FUN_00547ef0();
      if (lVar4 != 0) {
        uVar5 = FUN_004ee2a0(param_1);
        lVar6 = FUN_004b2a70(uVar5);
        if (lVar6 == 0) {
          lVar9 = 0;
          iVar1 = 0;
        }
        else {
          FUN_004b2c00(lVar6);
          uVar5 = FUN_004ee2b0(param_1);
          uVar7 = FUN_004ee2a0(param_1);
          uVar8 = FUN_004ee2d0(param_1);
          iVar1 = FUN_004eb2f0(uVar8,lVar4,0,uVar7,uVar5,lVar6,&local_48);
          lVar9 = 0;
          if (iVar1 != 0) {
            if ((param_2 & 3) != 0) {
              iVar1 = FUN_004708d0(param_1,lVar4,0,param_2 & 1,&local_50);
              lVar9 = 0;
              if (iVar1 == 0) goto LAB_00472990;
            }
            if ((param_2 & 0x80) != 0) {
              uVar2 = FUN_004ee650(param_1);
              lVar9 = FUN_004eb2c0(uVar2);
              if (lVar9 != 0) {
                iVar1 = FUN_00548b40(lVar4,0,"point-format",lVar9);
                lVar9 = 0;
                if (iVar1 == 0) goto LAB_00472990;
              }
              uVar3 = FUN_004ee6c0(param_1);
              lVar9 = FUN_004eb120(uVar3 & 0x6000);
              if (lVar9 != 0) {
                iVar1 = FUN_00548b40(lVar4,0,"group-check",lVar9);
                lVar9 = 0;
                if (iVar1 == 0) goto LAB_00472990;
              }
              uVar10 = FUN_004ee630(param_1);
              if ((uVar10 & 2) != 0) {
                iVar1 = FUN_00548aa0(lVar4,0,"include-public",0);
                lVar9 = 0;
                if (iVar1 == 0) goto LAB_00472990;
              }
              uVar3 = FUN_004ee6c0(param_1);
              iVar1 = FUN_00548aa0(lVar4,0,"use-cofactor-flag",uVar3 >> 0xc & 1);
              lVar9 = 0;
              if (iVar1 == 0) goto LAB_00472990;
            }
            lVar9 = FUN_00548720(lVar4);
            iVar1 = 1;
            if (lVar9 != 0) {
              iVar1 = (*param_3)(lVar9,param_4);
            }
          }
        }
LAB_00472990:
        FUN_0041ec30(lVar9);
        FUN_00547f60(lVar4);
        FUN_0041ad60(local_50,"../providers/implementations/keymgmt/ec_kmgmt.c",0x1fb);
        FUN_0041ad60(local_48,"../providers/implementations/keymgmt/ec_kmgmt.c",0x1fc);
        FUN_004b2d50(lVar6);
        FUN_004b2b50(lVar6);
        goto LAB_004729ea;
      }
    }
  }
  iVar1 = 0;
LAB_004729ea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

