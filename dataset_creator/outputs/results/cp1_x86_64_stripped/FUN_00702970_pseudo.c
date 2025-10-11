
void FUN_00702970(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long in_FS_OFFSET;
  undefined1 local_178 [40];
  undefined1 *local_150;
  undefined1 *local_140;
  undefined8 local_f0;
  undefined *local_a0;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 0;
  if (param_2 == 0) {
    param_1 = local_88;
    param_2 = 0x3f;
  }
  else {
    param_2 = param_2 + -1;
  }
  FUN_00707490(local_178,0x8000,0xffffffff,0,0);
  local_a0 = &DAT_0093f3a0;
  *param_1 = 0;
  FUN_00708b50(local_178,param_1,param_2,param_1);
  FUN_007986e0(local_178,param_3,param_4,param_5);
  if (local_140 != local_88) {
    *local_150 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

