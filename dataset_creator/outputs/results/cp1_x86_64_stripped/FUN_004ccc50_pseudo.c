
void FUN_004ccc50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  undefined1 auStack_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      FUN_004ccb80(0);
      return;
    }
  }
  else {
    FUN_004cc5f0(auStack_58,param_1);
    FUN_004ccb80(auStack_58,param_2,param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

