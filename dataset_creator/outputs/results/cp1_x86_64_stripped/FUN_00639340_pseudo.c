
void FUN_00639340(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (-1 < *(int *)(lVar1 + -8)) {
    if ((undefined8 *)(lVar1 + -0x18) != &DAT_009452a0) {
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
    return;
  }
  lVar1 = FUN_00638b30((undefined8 *)(lVar1 + -0x18),param_3,0);
  *param_1 = lVar1;
  return;
}

