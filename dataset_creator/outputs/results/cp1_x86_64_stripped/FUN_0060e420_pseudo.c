
undefined8 FUN_0060e420(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  if (*param_1 == 1) {
    uVar1 = *(undefined8 *)(param_1 + 2);
    FUN_005ad580(*(undefined8 *)(param_1 + 4));
    lVar4 = FUN_005ad800(param_2);
    *(long *)(param_1 + 4) = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
    for (iVar3 = 0; iVar2 = FUN_00436480(uVar1), iVar3 < iVar2; iVar3 = iVar3 + 1) {
      uVar5 = FUN_004364a0(uVar1,iVar3);
      iVar2 = FUN_005a9b90(*(undefined8 *)(param_1 + 4),uVar5,0xffffffff,iVar3 == 0);
      if (iVar2 == 0) goto LAB_0060e4c0;
    }
    iVar3 = FUN_005ad530(*(undefined8 *)(param_1 + 4),0);
    if (iVar3 < 0) {
LAB_0060e4c0:
      FUN_005ad580(*(undefined8 *)(param_1 + 4));
      param_1[4] = 0;
      param_1[5] = 0;
      return 0;
    }
  }
  return 1;
}

