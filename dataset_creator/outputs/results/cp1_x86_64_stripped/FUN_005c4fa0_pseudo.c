
undefined8 FUN_005c4fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_004b8260(param_2,param_1);
  if (lVar2 != 0) {
    iVar3 = 0;
    FUN_004b7e70(param_2,4);
    do {
      iVar3 = iVar3 + 1;
      FUN_005c3bd0(param_4,0,iVar3);
      iVar1 = FUN_005c4db0(param_2,param_3,param_4);
      if (0 < iVar1) {
        FUN_005c3bd0(param_4,2,iVar3);
        return 1;
      }
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = FUN_004bcc70(param_2);
    } while (iVar1 != 0);
  }
  return 0;
}

