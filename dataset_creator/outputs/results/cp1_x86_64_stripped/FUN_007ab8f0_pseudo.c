
bool FUN_007ab8f0(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_58 [72];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0076e9c0(param_1,auStack_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

