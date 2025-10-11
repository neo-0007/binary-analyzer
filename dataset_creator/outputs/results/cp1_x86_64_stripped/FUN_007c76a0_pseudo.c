
undefined8 * FUN_007c76a0(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  LOCK();
  bVar7 = DAT_0094b588 == 0;
  if (bVar7) {
    DAT_0094b588 = 1;
  }
  UNLOCK();
  puVar4 = DAT_0094b590;
  if (!bVar7) {
    FUN_00709590(&DAT_0094b588);
    puVar4 = DAT_0094b590;
  }
  for (; puVar2 = DAT_0094b590, puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
    if (param_2 == puVar4[1]) {
      puVar6 = puVar4 + 2;
      if (param_2 == 0) goto LAB_007c7724;
      lVar3 = 0;
      lVar5 = 0;
      while ((*(long *)((long)puVar4 + lVar3 + 0x10) == *(long *)(param_1 + lVar3) &&
             (*(int *)((long)puVar4 + lVar3 + 0x18) == *(int *)(param_1 + 8 + lVar3)))) {
        lVar5 = lVar5 + 1;
        lVar3 = lVar3 + 0x10;
        if (param_2 == lVar5) goto LAB_007c7724;
      }
    }
  }
  lVar3 = (param_2 + 1) * 0x10;
  puVar4 = (undefined8 *)FUN_007101b0(lVar3);
  if (puVar4 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = puVar4 + 2;
    *puVar4 = puVar2;
    puVar4[1] = param_2;
    thunk_FUN_00713a50(puVar6,param_1,lVar3 + -0x10);
    DAT_0094b590 = puVar4;
  }
LAB_007c7724:
  iVar1 = DAT_0094b588;
  LOCK();
  DAT_0094b588 = 0;
  UNLOCK();
  if (1 < iVar1) {
    FUN_00709660(&DAT_0094b588);
  }
  return puVar6;
}

