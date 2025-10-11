
void FUN_007a1fb0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 )

{
  long in_FS_OFFSET;
  undefined1 auStack_138 [40];
  undefined1 *local_110;
  undefined8 local_b0;
  undefined *local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0;
  FUN_00707490(auStack_138,0x8000,0xffffffff,0,0);
  local_60 = &DAT_0093f6a0;
  if ((param_5 & 4) != 0) {
    local_60 = &DAT_0093f8e0;
  }
  FUN_00708b50(auStack_138,param_1,param_2 - (ulong)(param_2 != -1),param_1);
  FUN_007986e0(auStack_138,param_3,param_4,param_5);
  *local_110 = 0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

