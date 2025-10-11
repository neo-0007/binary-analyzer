
void FUN_00635570(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(param_1 + 2);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = *(int *)(param_1 + 2);
      *(int *)(param_1 + 2) = iVar2 + -1;
    }
    if (iVar2 < 1) {
      thunk_FUN_007104f0(param_1,&local_11);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

