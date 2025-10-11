
undefined8 FUN_005282e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_004098f0();
  if (param_3 == 0 && param_2 == 0) {
    return 1;
  }
  if (param_2 != 0) {
    lVar1 = lVar2 + 0x100;
    iVar3 = *(int *)(param_1 + 0x68) << 3;
    if ((DAT_0094b59c._1_1_ & 2) == 0) {
      FUN_0048a5f0(param_2,iVar3,lVar2);
      FUN_0054df90(lVar1,lVar2,FUN_00489fa0);
      *(undefined8 *)(lVar2 + 0x2e0) = 0;
    }
    else {
      FUN_0048a5f0(param_2,iVar3,lVar2);
      FUN_0054df90(lVar1,lVar2,FUN_00489fa0);
      *(code **)(lVar2 + 0x2e0) = FUN_0049aa50;
    }
    if ((param_3 != 0) ||
       ((*(int *)(lVar2 + 0xfc) != 0 && (param_3 = *(long *)(lVar2 + 0x2b8), param_3 != 0)))) {
      FUN_0054e250(lVar1,param_3,(long)*(int *)(lVar2 + 0x2c0));
      *(undefined4 *)(lVar2 + 0xfc) = 1;
    }
    *(undefined4 *)(lVar2 + 0xf8) = 1;
    return 1;
  }
  if (*(int *)(lVar2 + 0xf8) == 0) {
    thunk_FUN_00713a50(*(undefined8 *)(lVar2 + 0x2b8),param_3,(long)*(int *)(lVar2 + 0x2c0));
  }
  else {
    FUN_0054e250(lVar2 + 0x100,param_3);
  }
  *(undefined4 *)(lVar2 + 0xfc) = 1;
  *(undefined4 *)(lVar2 + 0x2c8) = 0;
  return 1;
}

