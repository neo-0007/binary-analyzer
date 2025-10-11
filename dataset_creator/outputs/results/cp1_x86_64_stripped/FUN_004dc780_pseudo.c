
void FUN_004dc780(long param_1,long param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_b8 [64];
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_005cd6f0(auStack_b8,param_1 + 0x40,param_2);
  FUN_005cd6f0(local_78,param_2 + 0x40,param_1);
  FUN_004df560(auStack_b8,local_78);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

