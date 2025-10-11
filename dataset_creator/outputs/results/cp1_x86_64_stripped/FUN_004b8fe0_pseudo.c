
bool FUN_004b8fe0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  FUN_004b2c00(param_5);
  lVar2 = FUN_004b2df0(param_5);
  if (lVar2 != 0) {
    if (param_2 == param_3) {
      iVar1 = FUN_004bc940(lVar2,param_2,param_5);
    }
    else {
      iVar1 = FUN_004bacf0(lVar2,param_2,param_3,param_5);
    }
    if (iVar1 != 0) {
      iVar1 = FUN_004b8a20(param_1,lVar2,param_4,param_5);
      bVar3 = iVar1 != 0;
      goto LAB_004b904d;
    }
  }
  bVar3 = false;
LAB_004b904d:
  FUN_004b2d50(param_5);
  return bVar3;
}

