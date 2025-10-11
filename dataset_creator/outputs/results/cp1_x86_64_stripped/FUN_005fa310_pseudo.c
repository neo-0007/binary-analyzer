
undefined8 FUN_005fa310(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0051a180();
  if ((int)uVar2 != 0) {
    if (DAT_009427d8 == 0) {
      DAT_009427d8 = FUN_00436410();
      if (DAT_009427d8 == 0) goto LAB_005fa354;
    }
    iVar1 = FUN_00435f80(DAT_009427d8,param_1);
    if (iVar1 == 0) {
LAB_005fa354:
      FUN_0051a270(param_1);
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

