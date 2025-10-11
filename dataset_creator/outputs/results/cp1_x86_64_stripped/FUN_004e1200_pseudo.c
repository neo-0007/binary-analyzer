
void FUN_004e1200(long param_1,long param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_e8 [48];
  undefined1 local_b8 [48];
  undefined1 local_88 [48];
  char local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004e0fb0(auStack_e8,param_2 + 0x50);
  FUN_004e02c0(local_b8,param_2,auStack_e8);
  FUN_004e02c0(local_88,param_2 + 0x28,auStack_e8);
  FUN_004e0030(param_1,local_88);
  FUN_004e0030(local_58,local_b8);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_58[0] << 7;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

