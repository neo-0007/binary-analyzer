
undefined8 FUN_005b0cd0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = FUN_00424a40(param_2);
  if (lVar2 == 0) {
    return 0;
  }
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 0x150);
    if (lVar4 == 0) {
      lVar4 = FUN_005b0940();
      *(long *)(param_1 + 0x150) = lVar4;
      if (lVar4 == 0) goto LAB_005b0d32;
    }
    lVar3 = *(long *)(lVar4 + 8);
    if (lVar3 == 0) {
      lVar3 = FUN_00436410();
      *(long *)(lVar4 + 8) = lVar3;
      if (lVar3 == 0) goto LAB_005b0d32;
    }
    iVar1 = FUN_00435f80(lVar3,lVar2);
    if (0 < iVar1) {
      return 1;
    }
  }
LAB_005b0d32:
  FUN_004a06b0(lVar2);
  return 0;
}

