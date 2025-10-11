
undefined8 FUN_0059aef0(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (((*param_2 != 0) && (*(long *)(param_1 + 0xf8) != 0)) &&
     (iVar2 = thunk_FUN_004a2350(), iVar2 != 0)) {
    return 0x1e;
  }
  lVar1 = param_2[2];
  if (lVar1 != 0) {
    uVar4 = FUN_0059e6f0(param_1);
    iVar2 = FUN_0049f320(uVar4,lVar1);
    if (iVar2 != 0) {
      return 0x1f;
    }
  }
  lVar1 = param_2[1];
  iVar2 = 0;
  if (lVar1 != 0) {
    for (; iVar3 = FUN_00436480(lVar1), iVar2 < iVar3; iVar2 = iVar2 + 1) {
      piVar5 = (int *)FUN_004364a0(lVar1,iVar2);
      if (*piVar5 == 4) {
        lVar1 = *(long *)(piVar5 + 2);
        if (lVar1 == 0) {
          return 0;
        }
        uVar4 = FUN_0059e6c0(param_1);
        iVar2 = FUN_0059eab0(lVar1,uVar4);
        if (iVar2 == 0) {
          return 0;
        }
        return 0x1f;
      }
    }
  }
  return 0;
}

