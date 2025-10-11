
undefined8 FUN_00415010(uint *param_1,long param_2,ulong param_3,uint param_4,undefined4 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  uint uVar4;
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
  uVar4 = 0;
  uVar2 = param_3;
  if (param_1 == (uint *)0x0) {
LAB_00415128:
    FUN_0051f420(param_2,uVar4,uVar2);
    FUN_0051f540("../crypto/evp/pmeth_lib.c",0x3b0,"evp_pkey_ctx_set_md");
    FUN_0051f8f0(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else {
    uVar4 = param_4 & *param_1;
    uVar2 = (ulong)param_4;
    if (uVar4 == 0) goto LAB_00415128;
    if ((int)param_3 != 0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar1 = FUN_00414800(param_1,0xffffffff,uVar2,param_5,0,param_2);
        return uVar1;
      }
      goto LAB_00415162;
    }
    puVar3 = &DAT_0083e5c2;
    if (param_2 != 0) {
      puVar3 = (undefined1 *)FUN_0040ab30(param_2,uVar4,&DAT_0083e5c2);
    }
    FUN_0041e290(&local_a8,"digest",puVar3,0);
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
LAB_00415162:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

