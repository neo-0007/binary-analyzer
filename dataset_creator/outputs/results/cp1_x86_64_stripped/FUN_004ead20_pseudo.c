
long * FUN_004ead20(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 < 0) {
    return (long *)0x0;
  }
  if ((param_1 == (long *)0x0) || (plVar2 = (long *)*param_1, plVar2 == (long *)0x0)) {
    plVar2 = (long *)FUN_004eac60();
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    lVar1 = *plVar2;
  }
  else {
    lVar1 = *plVar2;
  }
  if (lVar1 == 0) {
    lVar3 = FUN_004b7690();
    lVar1 = plVar2[1];
    *plVar2 = lVar3;
    lVar4 = lVar3;
    if (lVar1 == 0) goto LAB_004eada0;
joined_r0x004eae11:
    if (lVar4 == 0) goto LAB_004eadbb;
  }
  else {
    lVar1 = plVar2[1];
    if (lVar1 == 0) {
LAB_004eada0:
      lVar1 = FUN_004b7690();
      lVar3 = *plVar2;
      plVar2[1] = lVar1;
      lVar4 = lVar1;
      if (lVar3 == 0) goto LAB_004eadbb;
      goto joined_r0x004eae11;
    }
    lVar3 = *plVar2;
  }
  lVar1 = FUN_00546240(lVar3,lVar1,param_2,param_3);
  if (lVar1 != 0) {
    if ((param_1 != (long *)0x0) && (*param_1 == 0)) {
      *param_1 = (long)plVar2;
      return plVar2;
    }
    return plVar2;
  }
LAB_004eadbb:
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    FUN_004eace0(plVar2);
  }
  return (long *)0x0;
}

