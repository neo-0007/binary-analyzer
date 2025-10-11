
undefined4 FUN_00483640(undefined4 param_1,undefined8 *param_2,code *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  uVar1 = 1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = param_1;
  if (param_2 != (undefined8 *)0x0) {
    FUN_0041cea0(&local_e8,"type",&local_ac);
    local_a8 = local_e8;
    uStack_a0 = uStack_e0;
    local_98 = local_d8;
    uStack_90 = uStack_d0;
    local_88 = local_c8;
    FUN_0041e2e0(&local_e8,"data",param_2[1],*param_2);
    local_60 = local_c8;
    local_80 = local_e8;
    uStack_78 = uStack_e0;
    local_70 = local_d8;
    uStack_68 = uStack_d0;
    FUN_0041e470(&local_e8);
    local_58 = local_e8;
    uStack_50 = uStack_e0;
    local_38 = local_c8;
    local_48 = local_d8;
    uStack_40 = uStack_d0;
    uVar1 = (*param_3)(&local_a8,param_4);
    FUN_004c4ff0(param_2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

