
undefined4 FUN_0044bc80(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0041c9c0(param_1,&DAT_007e1d64);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = FUN_0041c9c0(param_1,&DAT_007e1d68);
    if (iVar1 == 0) {
      lVar2 = 1;
    }
    else {
      iVar1 = FUN_0041c9c0(param_1,&DAT_007e1d60);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      lVar2 = 2;
    }
  }
  return (&DAT_008f0fc0)[lVar2 * 4];
}

