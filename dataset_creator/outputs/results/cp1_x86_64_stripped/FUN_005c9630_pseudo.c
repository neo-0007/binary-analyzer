
undefined8 FUN_005c9630(long param_1,long param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  long local_28 [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0) && (param_2 != 0)) {
    local_28[1] = 0;
    local_28[0] = param_2;
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar1 = FUN_00545b60(*(long *)(param_1 + 0x10),local_28);
      goto LAB_005c9670;
    }
  }
  uVar1 = 0;
LAB_005c9670:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

