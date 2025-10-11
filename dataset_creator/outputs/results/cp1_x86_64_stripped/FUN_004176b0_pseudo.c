
long FUN_004176b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_00417660();
  lVar3 = lVar2;
  if (lVar2 != 0) {
    iVar1 = FUN_0041ef80(lVar2,param_1,param_2);
    if (iVar1 == 0) {
      lVar3 = 0;
      FUN_00417600(lVar2);
    }
    else {
      *(byte *)(lVar2 + 0x1c0) = *(byte *)(lVar2 + 0x1c0) | 1;
    }
  }
  return lVar3;
}

