
undefined8 FUN_00528440(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_004098f0();
  if (param_3 == 0 && param_2 == 0) {
    return 1;
  }
  if (param_2 == 0) {
    if (*(int *)(lVar2 + 0xf8) == 0) {
      thunk_FUN_00713a50(*(undefined8 *)(lVar2 + 0x2b8),param_3);
    }
    else {
      FUN_0054e250(lVar2 + 0x100,param_3,(long)*(int *)(lVar2 + 0x2c0));
    }
    *(undefined4 *)(lVar2 + 0xfc) = 1;
    *(undefined4 *)(lVar2 + 0x2c8) = 0;
    return 1;
  }
  iVar1 = FUN_0040a180(param_1);
  FUN_00498c50(param_2,iVar1 * 8,lVar2);
  FUN_0054df90(lVar2 + 0x100,lVar2,FUN_00494ec0);
  *(code **)(lVar2 + 0x2e0) = FUN_00495dc0;
  if (param_3 == 0) {
    if (*(int *)(lVar2 + 0xfc) == 0) goto LAB_005284d6;
    param_3 = *(long *)(lVar2 + 0x2b8);
    if (param_3 == 0) {
      *(undefined4 *)(lVar2 + 0xf8) = 1;
      return 1;
    }
  }
  FUN_0054e250(lVar2 + 0x100,param_3,(long)*(int *)(lVar2 + 0x2c0));
  *(undefined4 *)(lVar2 + 0xfc) = 1;
LAB_005284d6:
  *(undefined4 *)(lVar2 + 0xf8) = 1;
  return 1;
}

