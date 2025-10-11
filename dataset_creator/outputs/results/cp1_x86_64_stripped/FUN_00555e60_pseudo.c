
uint FUN_00555e60(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined1 *param_6,int param_7,code *param_8,undefined8 param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  undefined8 uVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [16];
  long local_4d8;
  long local_4d0;
  long local_4c8;
  int local_4a8;
  int local_4a4;
  long local_4a0;
  undefined1 local_498 [16];
  undefined1 local_488 [64];
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4a8 = 0;
  local_4a4 = 0;
  if (param_5 == 0) {
    local_4d0 = 0;
LAB_00555fe1:
    iVar5 = (*param_1)(param_4,0);
    if (0 < iVar5) {
      local_4d8 = FUN_0041ad90(iVar5 + 0x14,"../crypto/pem/pem_lib.c",0x15b);
      local_4c8 = (long)iVar5;
      if (local_4d8 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/pem/pem_lib.c",0x15d,"PEM_ASN1_write_bio");
        FUN_0051f8f0(9,0xc0100,0);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = extraout_RDX_05;
        auVar10 = auVar2 << 0x40;
        uVar7 = 0;
        goto LAB_00555f57;
      }
      local_4a0 = local_4d8;
      local_4a8 = (*param_1)(param_4,&local_4a0);
      if (param_5 == 0) {
        local_448[0] = 0;
        lVar8 = 0;
      }
      else {
        if (param_6 == (undefined1 *)0x0) {
          if (param_8 == (code *)0x0) {
            param_7 = FUN_005551d0(local_448,0x400,1,param_9);
          }
          else {
            param_7 = (*param_8)();
          }
          param_6 = local_448;
          if (param_7 < 1) {
            FUN_0051f420();
            FUN_0051f540("../crypto/pem/pem_lib.c",0x16a,"PEM_ASN1_write_bio");
            FUN_0051f8f0(9,0x6f,0);
            uVar7 = 0;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = extraout_RDX_06;
            auVar10 = auVar3 << 0x40;
            goto LAB_00555f57;
          }
        }
        uVar6 = FUN_00409910(param_5);
        iVar5 = FUN_00429650(local_498,uVar6);
        if (iVar5 < 1) {
          uVar7 = 0;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = extraout_RDX_00;
          auVar10 = auVar1 << 0x40;
          goto LAB_00555f57;
        }
        uVar9 = FUN_0053edb0();
        iVar5 = FUN_005fdb00(param_5,uVar9,local_498,param_6,param_7,1,local_488);
        if (iVar5 == 0) {
          auVar10 = ZEXT816(0);
          uVar7 = 0;
          goto LAB_00555f57;
        }
        if (param_6 == local_448) {
          FUN_004227b0(local_448,0x400,0);
        }
        local_448[0] = 0;
        FUN_005552c0(local_448,10);
        uVar6 = FUN_00409910(param_5);
        FUN_00555330(local_448,local_4d0,uVar6,local_498);
        auVar10 = FUN_00535890();
        lVar8 = auVar10._0_8_;
        uVar7 = 0;
        if (lVar8 == 0) goto LAB_00555f57;
        uVar7 = FUN_00538aa0(lVar8,param_5,0,local_488,local_498);
        auVar10._8_8_ = extraout_RDX_01;
        auVar10._0_8_ = lVar8;
        if (uVar7 == 0) goto LAB_00555f57;
        uVar7 = FUN_00535bf0(lVar8,local_4d8,&local_4a4,local_4d8,local_4a8);
        auVar10._8_8_ = extraout_RDX_02;
        if (uVar7 == 0) goto LAB_00555f57;
        uVar7 = FUN_00535df0(lVar8,local_4a4 + local_4d8,&local_4a8);
        auVar10._8_8_ = extraout_RDX_03;
        if (uVar7 == 0) goto LAB_00555f57;
        local_4a8 = local_4a4 + local_4a8;
      }
      local_4a8 = FUN_00555b20(param_3,param_2,local_448,local_4d8,(long)local_4a8);
      auVar10._8_8_ = extraout_RDX_04;
      auVar10._0_8_ = lVar8;
      uVar7 = (uint)(0 < local_4a8);
      goto LAB_00555f57;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/pem/pem_lib.c",0x155,"PEM_ASN1_write_bio");
    uVar9 = 0x8000d;
  }
  else {
    local_4d0 = FUN_0040a3d0(param_5);
    if (((local_4d0 != 0) && (iVar5 = FUN_00409910(param_5), iVar5 != 0)) &&
       (iVar5 = FUN_00409910(param_5), iVar5 < 0x11)) {
      lVar8 = thunk_FUN_007129d0(local_4d0);
      iVar5 = FUN_00409910(param_5);
      if ((ulong)(lVar8 + 0x24 + (long)(iVar5 * 2)) < 0x401) goto LAB_00555fe1;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/pem/pem_lib.c",0x14f,"PEM_ASN1_write_bio");
    uVar9 = 0x71;
  }
  FUN_0051f8f0(9,uVar9,0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = extraout_RDX;
  auVar10 = auVar4 << 0x40;
  local_4d8 = 0;
  uVar7 = 0;
  local_4c8 = 0;
LAB_00555f57:
  FUN_004227b0(local_488,0x40,auVar10._8_8_);
  FUN_004227b0(local_498,0x10);
  FUN_00537b70(auVar10._0_8_);
  FUN_004227b0(local_448,0x400);
  FUN_0041aef0(local_4d8,local_4c8,"../crypto/pem/pem_lib.c",0x19a);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar7;
}

