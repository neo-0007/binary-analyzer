
void FUN_004ccff0(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004cc5f0(auStack_58,param_1);
  FUN_004ccfa0(auStack_58,param_2);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

