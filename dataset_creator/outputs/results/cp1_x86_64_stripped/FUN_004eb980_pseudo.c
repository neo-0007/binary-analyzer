
undefined4 FUN_004eb980(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_004ee2d0();
  if ((1 < param_2) || (lVar3 = FUN_004ef840(uVar2), lVar3 == 0)) {
    return 0;
  }
  iVar1 = FUN_004b7cc0(lVar3);
  if (iVar1 != 0) {
    return 1;
  }
  if (param_2 == 1) {
    FUN_004ee8a0(param_1,0x1000);
    return 1;
  }
  FUN_004ee930();
  return 1;
}

