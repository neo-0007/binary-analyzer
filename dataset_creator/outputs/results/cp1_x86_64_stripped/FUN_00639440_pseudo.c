
long * FUN_00639440(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  lVar4 = *param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 != lVar4) {
    if (*(int *)(lVar4 + -8) < 0) {
      lVar4 = FUN_00638b30((undefined8 *)(lVar4 + -0x18),&local_21,0);
    }
    else if ((undefined8 *)(lVar4 + -0x18) != &DAT_009452a0) {
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(lVar4 + -8) = *(int *)(lVar4 + -8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(lVar4 + -8) = *(int *)(lVar4 + -8) + 1;
      }
    }
    lVar2 = *param_1;
    if ((undefined8 *)(lVar2 + -0x18) != &DAT_009452a0) {
      if (DAT_0093ea10 == '\0') {
        LOCK();
        piVar1 = (int *)(lVar2 + -8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(lVar2 + -8);
        *(int *)(lVar2 + -8) = iVar3 + -1;
      }
      if (iVar3 < 1) {
        thunk_FUN_007104f0((undefined8 *)(lVar2 + -0x18),&local_21);
      }
    }
    *param_1 = lVar4;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

