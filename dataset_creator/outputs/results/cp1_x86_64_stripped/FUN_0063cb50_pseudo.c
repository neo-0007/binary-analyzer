
long * FUN_0063cb50(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *param_2;
  if (*(int *)(lVar1 + -8) < 0) {
    lVar1 = FUN_0063bfe0((undefined8 *)(lVar1 + -0x18),&local_21,0);
  }
  else if ((undefined8 *)(lVar1 + -0x18) != &DAT_009452c0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      *(int *)(lVar1 + -8) = *(int *)(lVar1 + -8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar1 + -8) = *(int *)(lVar1 + -8) + 1;
    }
  }
  *param_1 = lVar1;
                    /* try { // try from 0063cb90 to 0063cb94 has its CatchHandler @ 0063cbe7 */
  FUN_0063c140(param_1,param_3);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

