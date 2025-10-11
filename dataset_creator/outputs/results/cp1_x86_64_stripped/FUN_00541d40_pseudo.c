
undefined4 FUN_00541d40(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = FUN_00541c30();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1[1] != 0) {
    lVar3 = FUN_004b2a70(0);
    if (lVar3 != 0) {
      FUN_004b2c00(lVar3);
      lVar4 = FUN_004b2df0(lVar3);
      if ((lVar4 == 0) ||
         (iVar1 = FUN_004b5a10(lVar4,param_2,param_1[1],*param_1,lVar3), iVar1 == 0)) {
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_004b7cc0(lVar4);
        if (iVar1 == 0) {
          *param_3 = *param_3 | 4;
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
      FUN_004b2d50(lVar3);
      FUN_004b2b50(lVar3);
      return uVar2;
    }
    return 0;
  }
  return 1;
}

