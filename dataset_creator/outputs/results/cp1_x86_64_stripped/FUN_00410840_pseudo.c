
long FUN_00410840(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if ((param_1 != 0) &&
     ((lVar3 = *(long *)(param_1 + 0x20), lVar3 != 0 || (*(long *)(param_1 + 0x68) != 0)))) {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_0041089f;
    iVar1 = FUN_004222a0(*(undefined8 *)(param_1 + 0x38));
    if (iVar1 != 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      iVar1 = FUN_004222e0(*(undefined8 *)(param_1 + 0x38));
      if (iVar1 != 0) {
        if (lVar3 != 0) goto LAB_0041089f;
        iVar1 = FUN_00410260(&local_28,param_1);
        if (iVar1 != 0) {
          iVar1 = FUN_004222c0(*(undefined8 *)(param_1 + 0x38));
          if (iVar1 != 0) {
            lVar2 = *(long *)(param_1 + 0x28);
            if (lVar2 == 0) {
              lVar2 = *(long *)(local_28 + 0x20);
              *(long *)(param_1 + 0x28) = lVar2;
              *(undefined8 *)(local_28 + 0x20) = 0;
            }
            iVar1 = FUN_004222e0(*(undefined8 *)(param_1 + 0x38));
            if (iVar1 != 0) {
              lVar3 = lVar2;
            }
          }
          FUN_0040f4f0(local_28);
          goto LAB_0041089f;
        }
      }
    }
  }
  lVar3 = 0;
LAB_0041089f:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar3;
}

