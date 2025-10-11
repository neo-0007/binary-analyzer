
void FUN_00625160(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  *param_1 = piVar1;
  if (piVar1 != DAT_00943a38) {
    if (DAT_0093ea10 != '\0') {
      *piVar1 = *piVar1 + 1;
      return;
    }
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

