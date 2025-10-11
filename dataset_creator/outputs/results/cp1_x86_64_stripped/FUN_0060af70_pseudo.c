
undefined8 FUN_0060af70(long *param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    piVar2 = (int *)*param_1;
    if (piVar2 == (int *)0x0) goto LAB_0060b04f;
LAB_0060afaf:
    if (*piVar2 == 0) {
      return 0;
    }
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    piVar2 = (int *)param_1[1];
    param_1 = param_1 + 1;
    if (piVar2 != (int *)0x0) goto LAB_0060afaf;
LAB_0060b04f:
    lVar5 = FUN_0060adf0();
    *param_1 = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
    uVar6 = FUN_00436420(FUN_0060a1c0);
    *(undefined8 *)(lVar5 + 8) = uVar6;
    if (*(long *)((undefined4 *)*param_1 + 2) == 0) {
      return 0;
    }
    *(undefined4 *)*param_1 = 1;
  }
  puVar3 = (undefined4 *)FUN_0060a8d0();
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_4 == 0) {
    *puVar3 = 0;
    *(undefined8 *)(puVar3 + 2) = param_3;
  }
  else {
    *puVar3 = 1;
    puVar4 = (undefined8 *)FUN_0060a830();
    *(undefined8 **)(puVar3 + 2) = puVar4;
    if (puVar4 == (undefined8 *)0x0) goto LAB_0060b028;
    thunk_FUN_004a2270(*puVar4);
    puVar4 = *(undefined8 **)(puVar3 + 2);
    *puVar4 = param_3;
    thunk_FUN_004a2270(puVar4[1]);
    *(long *)(*(long *)(puVar3 + 2) + 8) = param_4;
  }
  iVar1 = FUN_00435f80(*(undefined8 *)(*param_1 + 8),puVar3);
  if (iVar1 != 0) {
    return 1;
  }
LAB_0060b028:
  FUN_0060a8f0(puVar3);
  return 0;
}

