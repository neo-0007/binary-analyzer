
void FUN_0063c7f0(long *param_1,long *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *param_2;
  if (*(int *)(lVar1 + -8) < 0) {
    lVar1 = FUN_0063bfe0((undefined8 *)(lVar1 + -0x18),&local_11,0);
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
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

