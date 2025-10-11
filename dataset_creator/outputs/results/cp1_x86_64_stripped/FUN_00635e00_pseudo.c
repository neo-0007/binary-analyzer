
undefined8 FUN_00635e00(undefined8 param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 local_29;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_2 + 0x18))(&local_28);
                    /* try { // try from 00635e38 to 00635e3c has its CatchHandler @ 00635ea9 */
  FUN_00692ac0(param_1,local_28,*(undefined8 *)(local_28 + -0x18));
  if ((undefined8 *)(local_28 + -0x18) != &DAT_009452a0) {
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

