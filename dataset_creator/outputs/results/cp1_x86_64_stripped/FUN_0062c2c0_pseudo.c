
void FUN_0062c2c0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = &PTR_FUN_009341c8;
  lVar1 = *param_2;
  if (*(int *)(lVar1 + -8) < 0) {
                    /* try { // try from 0062c327 to 0062c32b has its CatchHandler @ 0062c357 */
    lVar1 = FUN_00638b30((undefined8 *)(lVar1 + -0x18),&local_21,0);
  }
  else if ((undefined8 *)(lVar1 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      *(int *)(lVar1 + -8) = *(int *)(lVar1 + -8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar1 + -8) = *(int *)(lVar1 + -8) + 1;
    }
  }
  param_1[1] = lVar1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

