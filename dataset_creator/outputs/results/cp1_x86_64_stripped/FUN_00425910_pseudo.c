
undefined8 FUN_00425910(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    iVar1 = FUN_004222c0(*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      local_38 = param_1;
      local_30 = param_2;
      FUN_0054a430(*(undefined8 *)(param_1 + 8),FUN_00425200,&local_38);
      FUN_004222e0(*(undefined8 *)(param_1 + 0x10));
      uVar2 = 1;
      goto LAB_00425944;
    }
  }
  uVar2 = 0;
LAB_00425944:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

