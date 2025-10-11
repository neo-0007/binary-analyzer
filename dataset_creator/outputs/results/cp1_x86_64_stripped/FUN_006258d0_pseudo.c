
void FUN_006258d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = DAT_00943a38;
  piVar2 = (int *)*param_2;
  if (piVar2 != DAT_00943a38) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      piVar3 = DAT_00943a38;
    }
    else {
      *piVar2 = *piVar2 + 1;
    }
  }
  piVar2 = (int *)*param_1;
  if (piVar2 != piVar3) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    else {
      iVar1 = *piVar2;
      *piVar2 = iVar1 + -1;
    }
    if (iVar1 == 1) {
      FUN_006256e0(piVar2);
      thunk_FUN_007104f0(piVar2);
      *param_1 = *param_2;
      return;
    }
  }
  *param_1 = *param_2;
  return;
}

