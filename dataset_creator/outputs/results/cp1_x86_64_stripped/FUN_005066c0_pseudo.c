
void FUN_005066c0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined1 auStack_b8 [152];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00506150(auStack_b8);
  FUN_00505300(param_1,auStack_b8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

