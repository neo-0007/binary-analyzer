
undefined8 FUN_004ccb20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_004cc5f0(auStack_58,param_1);
    uVar1 = FUN_004cca80(auStack_58,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

