
void FUN_006c5580(long param_1)

{
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 8) = 6;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x1002;
  FUN_006274c0(auStack_28);
  FUN_006258d0(param_1 + 0xd0,auStack_28);
  FUN_00625980(auStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

