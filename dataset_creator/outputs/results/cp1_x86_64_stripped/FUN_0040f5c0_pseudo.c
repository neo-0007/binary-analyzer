
long FUN_0040f5c0(undefined8 param_1,long param_2,undefined8 param_3,int param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,int param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long in_FS_OFFSET;
  long local_e0;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  long local_a8;
  long local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  if (param_5 == 0) {
    local_a0 = 0;
    if (param_2 == 0) {
      if (param_4 != 0) {
        local_e0 = FUN_004a1430(&local_a0,param_4);
        goto LAB_0040f7d4;
      }
LAB_0040f884:
      FUN_0051a270(0);
    }
    else {
      local_e0 = FUN_004a14a0(&local_a0,param_2,0xffffffff);
LAB_0040f7d4:
      if (local_a0 == 0) goto LAB_0040f884;
      FUN_0051a270();
      if (local_e0 != 0) goto LAB_0040f602;
    }
    lVar3 = param_2;
    if (param_2 == 0) {
      lVar3 = FUN_00423b00(param_4,0);
    }
    lVar3 = FUN_00413510(param_1,lVar3,param_3);
    if (lVar3 != 0) {
      FUN_0051f000();
      iVar2 = FUN_004122e0(lVar3);
      if (iVar2 != 1) {
        FUN_0051f050();
        goto LAB_0040f604;
      }
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      FUN_0051f1a0();
      puVar5 = &DAT_007ce5df;
      if (param_8 == 0) {
        puVar5 = &DAT_007ce5e4;
      }
      FUN_0041e2e0(local_d8,puVar5,param_6,param_7);
      local_78._0_8_ = local_b8;
      iVar2 = FUN_00412350(lVar3,&local_a8,0x87,local_98);
      if (iVar2 == 1) goto LAB_0040f76f;
      FUN_0051f420();
      uVar4 = 0x1a6;
      goto LAB_0040f73d;
    }
  }
  else {
LAB_0040f602:
    lVar3 = 0;
LAB_0040f604:
    local_a8 = FUN_0040ec60();
    if (local_a8 == 0) {
      FUN_0051f420(0);
      FUN_0051f540("../crypto/evp/p_lib.c",0x1b6,"new_raw_key_int");
      FUN_0051f8f0(6,0xc0100,0);
    }
    else {
      iVar2 = FUN_0040ee60(local_a8,param_5,param_4,param_2,0xffffffff,0);
      if ((iVar2 != 0) && (lVar1 = *(long *)(local_a8 + 8), lVar1 != 0)) {
        if (param_8 == 0) {
          if (*(code **)(lVar1 + 0x100) == (code *)0x0) {
            FUN_0051f420();
            uVar4 = 0x1ce;
            goto LAB_0040f911;
          }
          iVar2 = (**(code **)(lVar1 + 0x100))(local_a8,param_6,param_7);
          if (iVar2 != 0) goto LAB_0040f76f;
          FUN_0051f420();
          uVar4 = 0x1d3;
        }
        else {
          if (*(code **)(lVar1 + 0xf8) == (code *)0x0) {
            FUN_0051f420();
            uVar4 = 0x1c4;
LAB_0040f911:
            FUN_0051f540("../crypto/evp/p_lib.c",uVar4,"new_raw_key_int");
            FUN_0051f8f0(6,0x96,0);
            goto LAB_0040f761;
          }
          iVar2 = (**(code **)(lVar1 + 0xf8))(local_a8,param_6,param_7);
          if (iVar2 != 0) goto LAB_0040f76f;
          FUN_0051f420();
          uVar4 = 0x1c9;
        }
LAB_0040f73d:
        FUN_0051f540("../crypto/evp/p_lib.c",uVar4,"new_raw_key_int");
        FUN_0051f8f0(6,0xb4,0);
      }
    }
  }
LAB_0040f761:
  FUN_0040f4f0(local_a8);
  local_a8 = 0;
LAB_0040f76f:
  FUN_00412f00(lVar3);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_a8;
}

