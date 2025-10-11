
undefined4
FUN_004bbe70(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  FUN_004b2c00(param_5);
  lVar3 = FUN_004b2df0(param_5);
  if (lVar3 == 0) {
LAB_004bbf18:
    uVar2 = 0;
  }
  else {
    if (param_3 != 0) {
      if (param_3 == param_2) {
        iVar1 = FUN_004bc940(lVar3,param_3,param_5);
      }
      else {
        iVar1 = FUN_004bacf0(lVar3,param_2,param_3,param_5);
      }
      param_2 = lVar3;
      if (iVar1 == 0) goto LAB_004bbf18;
    }
    uVar2 = FUN_004bbc00(0,param_1,param_2,param_4,param_5);
  }
  FUN_004b2d50(param_5);
  return uVar2;
}

