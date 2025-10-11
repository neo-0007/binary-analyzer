
bool FUN_00619d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  FUN_004b2c00(param_5);
  lVar2 = FUN_004b2df0(param_5);
  if (lVar2 != 0) {
    iVar1 = FUN_00619770(lVar2,param_3,param_4,param_5);
    if (iVar1 != 0) {
      iVar1 = FUN_00619650(param_1,param_2,lVar2,param_4,param_5);
      bVar3 = iVar1 != 0;
      goto LAB_00619d81;
    }
  }
  bVar3 = false;
LAB_00619d81:
  FUN_004b2d50(param_5);
  return bVar3;
}

