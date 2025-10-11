
long FUN_00546e80(long *param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined4 *)FUN_006d2700();
  if (param_1 == (long *)0x0 || param_2 == 0) {
    *puVar3 = 0x16;
    return 0;
  }
  *puVar3 = 0;
  if ((long *)*param_1 == (long *)0x0) {
    puVar5 = (undefined8 *)FUN_00711600(0x1010,1);
    *param_1 = (long)puVar5;
    if (puVar5 == (undefined8 *)0x0) {
      *puVar3 = 0xc;
      return 0;
    }
    uVar6 = FUN_00768890(param_2);
    plVar2 = (long *)*param_1;
    *puVar5 = uVar6;
    lVar4 = *plVar2;
    if (lVar4 == 0) {
      uVar1 = *puVar3;
      FUN_007104f0();
      *param_1 = 0;
      *puVar3 = uVar1;
      return 0;
    }
  }
  else {
    lVar4 = *(long *)*param_1;
  }
  lVar4 = FUN_00768af0(lVar4);
  if (lVar4 != 0) {
    FUN_0041c470(*param_1 + 8,lVar4 + 0x13,0x1001);
    lVar4 = *param_1 + 8;
  }
  return lVar4;
}

