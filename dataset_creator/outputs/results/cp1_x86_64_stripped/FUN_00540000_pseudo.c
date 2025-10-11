
int FUN_00540000(undefined8 param_1,long param_2,int param_3,int *param_4,undefined8 param_5,
                undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = FUN_0040ab30(param_6);
  if (((param_4 == (int *)0x0) || (*param_4 != 0x10)) || (*(long *)(param_4 + 2) == 0)) {
    FUN_0051f420();
    uVar6 = 0x2f;
  }
  else {
    uVar7 = FUN_005bb480();
    puVar8 = (undefined8 *)FUN_004a12d0(uVar7,param_4);
    if (puVar8 != (undefined8 *)0x0) {
      uVar1 = FUN_00409910(param_5);
      if (uVar1 < 0x11) {
        uVar2 = FUN_0040a170(param_5);
        if (0x40 < uVar2) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/p5_crpt.c",0x40,"PKCS5_PBE_keyivgen_ex");
          uVar6 = 0x82;
          goto LAB_005403c4;
        }
        local_1ac = 1;
        if (puVar8[1] != 0) {
          local_1ac = FUN_0049fa00();
        }
        uVar7 = *(undefined8 *)((int *)*puVar8 + 2);
        iVar4 = *(int *)*puVar8;
        if (param_2 == 0) {
          param_3 = 0;
        }
        else if (param_3 == -1) {
          param_3 = thunk_FUN_007129d0(param_2);
        }
        iVar3 = FUN_0040ac10(param_6);
        if (iVar3 < 0) goto LAB_005403d0;
        uVar9 = FUN_0053c390(param_8,"PBKDF1",param_9);
        lVar10 = FUN_0053ba70(uVar9);
        thunk_FUN_0053bf90(uVar9);
        if (lVar10 == 0) goto LAB_005403d0;
        iVar5 = 0;
        FUN_0041e2e0(&local_1e8,"pass",param_2,(long)param_3);
        local_1a8 = local_1e8;
        uStack_1a0 = uStack_1e0;
        local_198 = local_1d8;
        uStack_190 = uStack_1d0;
        local_188 = local_1c8;
        FUN_0041e2e0(&local_1e8,"salt",uVar7,(long)iVar4);
        local_180 = local_1e8;
        uStack_178 = uStack_1e0;
        local_170 = local_1d8;
        uStack_168 = uStack_1d0;
        local_160 = local_1c8;
        FUN_0041cea0(&local_1e8,"iter",&local_1ac);
        local_158 = local_1e8;
        uStack_150 = uStack_1e0;
        local_148 = local_1d8;
        uStack_140 = uStack_1d0;
        local_138 = local_1c8;
        FUN_0041e290(&local_1e8,"digest",uVar6,0);
        local_110 = local_1c8;
        local_130 = local_1e8;
        uStack_128 = uStack_1e0;
        local_120 = local_1d8;
        uStack_118 = uStack_1d0;
        FUN_0041e470(&local_1e8);
        local_108 = local_1e8;
        uStack_100 = uStack_1e0;
        local_e8 = local_1c8;
        local_f8 = local_1d8;
        uStack_f0 = uStack_1d0;
        iVar4 = FUN_0053bea0(lVar10,local_c8,(long)iVar3,&local_1a8);
        if (iVar4 == 1) {
          FUN_00771fb0(local_88,local_c8,(long)(int)uVar2,0x40);
          uVar6 = FUN_00771fb0(local_d8,local_c8 + (int)(0x10 - uVar1),(long)(int)uVar1,0x10);
          iVar5 = FUN_00538a80(param_1,param_5,0,local_88,uVar6,param_7);
          if (iVar5 != 0) {
            iVar5 = 1;
            FUN_004227b0(local_c8,0x40);
            FUN_004227b0(local_88,0x40);
            FUN_004227b0(uVar6,0x10);
          }
        }
      }
      else {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/p5_crpt.c",0x3b,"PKCS5_PBE_keyivgen_ex");
        uVar6 = 0xc2;
LAB_005403c4:
        FUN_0051f8f0(6,uVar6,0);
LAB_005403d0:
        lVar10 = 0;
        iVar5 = 0;
      }
      FUN_0053bb90(lVar10);
      FUN_005bb510(puVar8);
      goto LAB_0054009a;
    }
    FUN_0051f420();
    uVar6 = 0x35;
  }
  iVar5 = 0;
  FUN_0051f540("../crypto/evp/p5_crpt.c",uVar6,"PKCS5_PBE_keyivgen_ex");
  FUN_0051f8f0(6,0x72,0);
LAB_0054009a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

