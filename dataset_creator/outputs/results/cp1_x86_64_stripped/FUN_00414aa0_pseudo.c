
undefined8
FUN_00414aa0(uint *param_1,int param_2,undefined8 param_3,uint param_4,undefined4 param_5,
            undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  uint uVar2;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0;
  if ((param_1 == (uint *)0x0) || (uVar2 = param_4 & *param_1, uVar2 == 0)) {
    FUN_0051f420(param_1,param_3,uVar2,param_5);
    FUN_0051f540("../crypto/evp/pmeth_lib.c",0x3df,"evp_pkey_ctx_set1_octet_string");
    FUN_0051f8f0(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else {
    if (param_2 != 0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar1 = FUN_00414800(param_1,0xffffffff,param_4);
        return uVar1;
      }
      goto LAB_00414c22;
    }
    if (param_7 < 0) {
      FUN_0051f420(param_1,param_3,uVar2,param_5);
      FUN_0051f540("../crypto/evp/pmeth_lib.c",0x3ea,"evp_pkey_ctx_set1_octet_string");
      FUN_0051f8f0(6,0xdd,0);
      uVar1 = 0;
    }
    else {
      FUN_0041e2e0(&local_a8,param_3,param_6,(long)param_7);
      local_58 = local_88;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      local_68 = local_98;
      uStack_60 = uStack_90;
      FUN_0041e470(&local_a8);
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      local_30 = local_88;
      local_40 = local_98;
      uStack_38 = uStack_90;
      uVar1 = FUN_00413ce0(param_1,&local_78);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
LAB_00414c22:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

