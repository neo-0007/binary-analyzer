
void FUN_004cc720(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined1 auStack_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004cc5f0(auStack_48,param_1);
  FUN_004cc700(auStack_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

