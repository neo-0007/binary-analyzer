
void FUN_0063b160(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != &DAT_009452c0) {
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
      thunk_FUN_007104f0();
      return;
    }
  }
  return;
}

