
undefined4
FUN_0063f610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 *param_9,undefined8 param_10,int param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined4 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 *local_f0;
  undefined1 *local_e8;
  long local_e0;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  
  if (in_AL != '\0') {
    local_a8 = param_1;
    local_98 = param_2;
    local_88 = param_3;
    local_78 = param_4;
    local_68 = param_5;
    local_58 = param_6;
    local_48 = param_7;
    local_38 = param_8;
  }
  local_e0 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = param_13;
  local_b0 = param_14;
  uVar2 = FUN_006e1eb0(*param_9);
  local_f0 = &stack0x00000008;
  local_f8 = 0x20;
  local_e8 = local_d8;
  local_f4 = 0x30;
  uVar1 = FUN_00702a80(param_10,(long)param_11,param_12,&local_f8);
  FUN_006e1eb0(uVar2);
  if (local_e0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

