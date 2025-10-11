
void FUN_0044e3b0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined1 auStack_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0044fce0(auStack_68);
  FUN_0044fda0(param_1,auStack_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

