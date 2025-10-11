
undefined8 FUN_004ebfc0(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(int *)(param_1 + 8) == 4) {
    local_18 = *(long *)(param_1 + 0x10);
    if (local_18 != 0) {
      iVar1 = FUN_004eb230();
      goto joined_r0x004ec02c;
    }
  }
  else if ((*(int *)(param_1 + 8) == 6) && (iVar1 = FUN_0041e310(param_1,&local_18), iVar1 != 0)) {
    iVar1 = FUN_004eb230(local_18);
joined_r0x004ec02c:
    if (-1 < iVar1) {
      *param_2 = iVar1;
      uVar2 = 1;
      goto LAB_004ebfff;
    }
  }
  uVar2 = 0;
LAB_004ebfff:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

