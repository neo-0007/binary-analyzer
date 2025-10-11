
long FUN_0061a900(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar2 = FUN_0061fbf0();
  if (lVar2 != 0) {
    for (; iVar1 = FUN_00436480(lVar2), iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = FUN_004364a0(lVar2,iVar4);
      iVar1 = FUN_00620970(uVar3,3);
      if (iVar1 != 1) {
        FUN_00620320(lVar2);
        *param_1 = 0;
        return 0;
      }
    }
  }
  return lVar2;
}

