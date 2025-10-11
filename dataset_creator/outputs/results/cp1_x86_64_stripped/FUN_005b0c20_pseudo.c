
undefined8 FUN_005b0c20(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((param_2 != 0) && (param_2 = FUN_00424a40(param_2), param_2 == 0)) {
    return 0;
  }
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 0x150);
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)FUN_005b0940();
      *(long **)(param_1 + 0x150) = plVar2;
      if (plVar2 == (long *)0x0) goto LAB_005b0c70;
      lVar3 = *plVar2;
    }
    else {
      lVar3 = *plVar2;
    }
    if (lVar3 == 0) {
      lVar3 = FUN_00436410();
      *plVar2 = lVar3;
      if (lVar3 == 0) goto LAB_005b0c70;
    }
    if ((param_2 == 0) || (iVar1 = FUN_00435f80(*plVar2,param_2), iVar1 != 0)) {
      return 1;
    }
  }
LAB_005b0c70:
  FUN_004a06b0(param_2);
  return 0;
}

