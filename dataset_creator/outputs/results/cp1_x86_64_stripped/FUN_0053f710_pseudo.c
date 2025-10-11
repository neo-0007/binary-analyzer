
long FUN_0053f710(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_RCX;
  char *pcVar6;
  undefined8 in_R8;
  long in_R9;
  long lVar7;
  long in_FS_OFFSET;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_e0 = in_stack_00000020;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_0053fe10();
  local_a0 = 0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (in_stack_00000030 != (undefined8 *)0x0) {
    *in_stack_00000030 = 0;
  }
  if (lVar2 == 0) {
    lVar4 = 0;
    goto LAB_0053f849;
  }
  if (in_RCX == 0) {
LAB_0053f806:
    if (in_R9 == 0 && in_stack_00000008 == 0) {
      in_R9 = in_stack_00000010;
    }
    lVar4 = 0;
    lVar7 = 0;
    lVar5 = FUN_0053f090(lVar2);
    if (lVar5 != 0) {
      iVar1 = FUN_0053f3a0(lVar5,local_98);
      if (iVar1 != 0) {
        iVar1 = FUN_0053f3a0(lVar5,in_R8);
        if (iVar1 != 0) {
          iVar1 = FUN_0053f310(lVar5,in_R9,in_stack_00000008,in_R8);
          lVar4 = lVar7;
          if (iVar1 != 0) {
            iVar1 = FUN_0053f330(lVar5,in_stack_00000010,in_stack_00000018);
            if (iVar1 != 0) {
              iVar1 = FUN_0053f650(lVar5,in_stack_00000020,&local_a0,in_stack_00000028);
              if (iVar1 != 0) {
                if (in_stack_00000020 == 0) {
                  local_e0 = FUN_0041ad90(local_a0,"../crypto/evp/mac_lib.c",0x120);
                  lVar4 = local_e0;
                  if (local_e0 != 0) {
                    iVar1 = FUN_0053f650(lVar5,local_e0,0,local_a0);
                    if (iVar1 != 0) goto LAB_0053f8ec;
                    lVar4 = 0;
                    FUN_0041ad60(local_e0,"../crypto/evp/mac_lib.c",0x122);
                  }
                }
                else {
LAB_0053f8ec:
                  lVar4 = local_e0;
                  if (in_stack_00000030 != (undefined8 *)0x0) {
                    *in_stack_00000030 = local_a0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar3 = FUN_0053fef0(lVar2);
    lVar4 = thunk_FUN_0041cdd0(uVar3,"digest");
    pcVar6 = "digest";
    if (lVar4 != 0) {
LAB_0053f7d7:
      FUN_0041e290(&local_d8,pcVar6,in_RCX,0);
      local_78._0_8_ = local_b8;
      local_98._8_8_ = uStack_d0;
      local_98._0_8_ = local_d8;
      local_88._8_8_ = uStack_c0;
      local_88._0_8_ = local_c8;
      goto LAB_0053f806;
    }
    lVar4 = thunk_FUN_0041cdd0(uVar3,"cipher");
    pcVar6 = "cipher";
    if (lVar4 != 0) goto LAB_0053f7d7;
    FUN_0051f420();
    lVar4 = 0;
    FUN_0051f540("../crypto/evp/mac_lib.c",0x10f,"EVP_Q_mac");
    FUN_0051f8f0(6,0x80106,0);
    lVar5 = 0;
  }
  FUN_0053f190(lVar5);
  thunk_FUN_0053f9f0(lVar2);
LAB_0053f849:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

