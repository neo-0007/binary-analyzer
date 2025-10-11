
bool FUN_0056d040(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  iVar1 = FUN_005c4db0(param_1,param_4,0);
  if (iVar1 != 1) {
    return false;
  }
  iVar1 = FUN_0056cf60(param_1,param_3,param_4);
  if (iVar1 != 1) {
    return false;
  }
  FUN_004b2c00(param_4);
  uVar2 = FUN_004b2df0(param_4);
  lVar3 = FUN_004b2df0(param_4);
  if (lVar3 != 0) {
    FUN_004b7e70(uVar2,4);
    FUN_004b7e70(lVar3,4);
    lVar4 = FUN_004b8260(uVar2,param_1);
    if (((lVar4 != 0) && (iVar1 = FUN_004bcb60(uVar2,1), iVar1 != 0)) &&
       (iVar1 = FUN_004b6d50(lVar3,uVar2,param_2,param_4), iVar1 != 0)) {
      iVar1 = FUN_004b7cc0(lVar3);
      bVar5 = iVar1 != 0;
      goto LAB_0056d122;
    }
  }
  bVar5 = false;
LAB_0056d122:
  FUN_004b7780(uVar2);
  FUN_004b2d50(param_4);
  return bVar5;
}

