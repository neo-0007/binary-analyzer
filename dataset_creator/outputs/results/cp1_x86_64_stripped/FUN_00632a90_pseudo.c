
void FUN_00632a90(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 local_29;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_1 + 0x18))(&local_28,param_1);
  if ((code *)param_2[4] != (code *)0x0) {
                    /* try { // try from 00632acc to 00632b3b has its CatchHandler @ 00632ba9 */
    (*(code *)param_2[4])(param_2);
  }
  if (*(int *)(local_28 + -8) < 0) {
    lVar3 = FUN_0063bfe0((undefined8 *)(local_28 + -0x18),&local_29,0);
  }
  else {
    lVar3 = local_28;
    if ((undefined8 *)(local_28 + -0x18) != &DAT_009452c0) {
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(local_28 + -8) = *(int *)(local_28 + -8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_28 + -8) = *(int *)(local_28 + -8) + 1;
      }
    }
  }
  *param_2 = lVar3;
  lVar3 = *(long *)(local_28 + -0x18);
  param_2[4] = (long)FUN_00630e70;
  param_2[1] = lVar3;
  if ((undefined8 *)(local_28 + -0x18) != &DAT_009452c0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(local_28 + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = *(int *)(local_28 + -8);
      *(int *)(local_28 + -8) = iVar2 + -1;
    }
    if (iVar2 < 1) {
      thunk_FUN_007104f0((undefined8 *)(local_28 + -0x18),&local_29);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

