
void FUN_006f4d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 local_1c8 [136];
  undefined8 local_140;
  undefined *local_f0;
  long local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  if (in_AL != '\0') {
    local_98 = param_1;
    local_88 = param_2;
    local_78 = param_3;
    local_68 = param_4;
    local_58 = param_5;
    local_48 = param_6;
    local_38 = param_7;
    local_28 = param_8;
  }
  local_d0 = *(long *)(in_FS_OFFSET + 0x28);
  local_140 = 0;
  local_b8 = param_11;
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
  FUN_00707490(local_1c8,0x8000,0xffffffff,0,0);
  local_f0 = &DAT_0093f6a0;
  FUN_00708b50(local_1c8,param_9,0,0);
  local_1d8 = &stack0x00000008;
  local_1e0 = 0x10;
  local_1d0 = local_c8;
  local_1dc = 0x30;
  FUN_006f4eb0(local_1c8,param_10,&local_1e0,2);
  if (local_d0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

