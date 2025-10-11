
undefined8 FUN_006143c0(int param_1,long param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar1 = *(long **)(param_2 + 0x150);
  if (plVar1 != (long *)0x0) {
    lVar5 = plVar1[1];
    iVar2 = 0;
    if (lVar5 != 0) {
      for (; iVar3 = FUN_00436480(lVar5), iVar2 < iVar3; iVar2 = iVar2 + 1) {
        uVar4 = FUN_004364a0(plVar1[1],iVar2);
        iVar3 = FUN_00423da0(uVar4);
        if (iVar3 == param_1) {
          return 2;
        }
        if ((iVar3 == 0x38e) && ((param_3 & 0x10) != 0)) {
          return 2;
        }
        lVar5 = plVar1[1];
      }
    }
    lVar5 = *plVar1;
    iVar2 = 0;
    if (lVar5 != 0) {
      while( true ) {
        iVar3 = FUN_00436480(lVar5);
        if (iVar3 <= iVar2) {
          return 2;
        }
        uVar4 = FUN_004364a0(*plVar1,iVar2);
        iVar3 = FUN_00423da0(uVar4);
        if (param_1 == iVar3) break;
        if ((iVar3 == 0x38e) && ((param_3 & 0x10) != 0)) {
          return 1;
        }
        lVar5 = *plVar1;
        iVar2 = iVar2 + 1;
      }
      return 1;
    }
  }
  if (((((param_3 & 8) != 0) && (iVar2 = FUN_0059b9e0(param_2,0xffffffff,0), iVar2 == 1)) &&
      ((param_3 & 4) == 0)) && ((*(byte *)(param_2 + 0xe9) & 0x20) != 0)) {
    return 1;
  }
  return 3;
}

