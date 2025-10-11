
void FUN_0060a1c0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*param_2;
  puVar4 = *(undefined8 **)(piVar1 + 2);
  if (*piVar1 == 0) {
    if (*piVar2 != 0) {
      FUN_0049f320(puVar4,**(undefined8 **)(piVar2 + 2));
      return;
    }
  }
  else {
    puVar4 = (undefined8 *)*puVar4;
    if ((*piVar1 == 1) && (*piVar2 == 1)) {
      iVar3 = FUN_0049f320(puVar4,**(undefined8 **)(piVar2 + 2));
      if (iVar3 != 0) {
        return;
      }
      FUN_0049f320(*(undefined8 *)(*(long *)(piVar1 + 2) + 8),
                   *(undefined8 *)(*(long *)(piVar2 + 2) + 8));
      return;
    }
  }
  FUN_0049f320(puVar4);
  return;
}

