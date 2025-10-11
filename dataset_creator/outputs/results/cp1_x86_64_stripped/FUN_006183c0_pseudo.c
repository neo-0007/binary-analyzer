
undefined8 FUN_006183c0(long param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    return 1;
  }
  piVar1 = *(int **)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != -1) {
    if (*piVar1 == 5) {
      FUN_007711d0(iVar2,2);
      iVar2 = *(int *)(param_1 + 0x38);
    }
    FUN_004b0060(iVar2);
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  }
  FUN_00618350(piVar1);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 1;
}

