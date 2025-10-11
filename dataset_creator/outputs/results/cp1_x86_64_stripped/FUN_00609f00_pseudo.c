
undefined8 FUN_00609f00(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_1 != param_2) {
    if (((param_2 == 0) || (iVar1 = FUN_00609e90(), iVar1 != 0)) ||
       (iVar1 = FUN_00609e90(param_2), iVar1 != 0)) {
      return 0;
    }
    FUN_00435d20(param_2,FUN_00607580);
    for (iVar1 = 0; iVar2 = FUN_00436480(param_1), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      lVar4 = FUN_004364a0(param_1,iVar1);
      uVar3 = FUN_00435f40(param_2,lVar4);
      lVar5 = FUN_004364a0(param_2,uVar3);
      if (lVar5 == 0) {
        return 0;
      }
      FUN_00608560(lVar5);
      lVar4 = *(long *)(*(long *)(lVar4 + 8) + 8);
      lVar5 = *(long *)(*(long *)(lVar5 + 8) + 8);
      if ((lVar4 != 0) && (lVar4 != lVar5)) {
        if (lVar5 == 0) {
          return 0;
        }
        iVar2 = FUN_00607c10();
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

