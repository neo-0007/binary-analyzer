
bool FUN_0060b0b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return true;
  }
  piVar1 = (int *)*param_1;
  if (((piVar1 == (int *)0x0) || (*piVar1 == 0)) ||
     ((*piVar1 == 1 &&
      ((iVar2 = FUN_00436480(*(undefined8 *)(piVar1 + 2)), iVar2 != 0 &&
       (iVar2 = FUN_0060a590(piVar1), iVar2 != 0)))))) {
    piVar1 = (int *)param_1[1];
    if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
      return true;
    }
    if ((*piVar1 == 1) && (iVar2 = FUN_00436480(*(undefined8 *)(piVar1 + 2)), iVar2 != 0)) {
      iVar2 = FUN_0060a590(piVar1);
      return iVar2 != 0;
    }
  }
  return false;
}

