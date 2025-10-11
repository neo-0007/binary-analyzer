
int FUN_00616a20(long param_1,long param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    return 0;
  }
  iVar5 = 0;
  FUN_004ab6c0(param_1,0xf);
  iVar2 = piVar1[4];
  while( true ) {
    if (iVar2 != 0) {
      iVar3 = iVar2;
      if (param_3 <= iVar2) {
        iVar3 = param_3;
      }
      thunk_FUN_00713a50(param_2,(long)piVar1[5] + *(long *)(piVar1 + 2));
      piVar1[5] = piVar1[5] + iVar3;
      piVar1[4] = piVar1[4] - iVar3;
      iVar5 = iVar5 + iVar3;
      if (param_3 <= iVar2) {
        return iVar5;
      }
      param_3 = param_3 - iVar3;
      param_2 = param_2 + iVar3;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    if (*piVar1 < param_3) break;
    iVar2 = FUN_004ab770(uVar4,*(undefined8 *)(piVar1 + 2));
    if (iVar2 < 1) {
      FUN_004ac5f0(param_1);
      if ((iVar5 < 1) && (iVar2 != 0)) {
        return iVar2;
      }
      return iVar5;
    }
    piVar1[5] = 0;
    piVar1[4] = iVar2;
  }
  while (iVar2 = FUN_004ab770(uVar4,param_2,param_3), 0 < iVar2) {
    iVar5 = iVar5 + iVar2;
    if (param_3 == iVar2) {
      return iVar5;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    param_3 = param_3 - iVar2;
    param_2 = param_2 + iVar2;
  }
  FUN_004ac5f0(param_1);
  if (iVar2 == 0) {
    return iVar5;
  }
  if (0 < iVar5) {
    return iVar5;
  }
  return iVar2;
}

