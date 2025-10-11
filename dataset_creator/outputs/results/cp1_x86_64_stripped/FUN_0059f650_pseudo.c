
ulong FUN_0059f650(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  
  piVar2 = (int *)*param_1;
  piVar3 = (int *)*param_2;
  iVar1 = *piVar2;
  if (iVar1 - *piVar3 == 0) {
    if (iVar1 == 1) {
      uVar4 = FUN_0059ec30(*(undefined8 *)(piVar2 + 2),*(undefined8 *)(piVar3 + 2));
      return uVar4;
    }
    if (iVar1 == 2) {
      uVar4 = FUN_0059ec50(*(undefined8 *)(piVar2 + 2),*(undefined8 *)(piVar3 + 2));
      return uVar4;
    }
  }
  return (ulong)(uint)(iVar1 - *piVar3);
}

