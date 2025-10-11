
long FUN_00417660(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_004172d0();
  lVar3 = lVar2;
  if (lVar2 != 0) {
    iVar1 = FUN_004b0410(lVar2,param_2);
    if (iVar1 == 0) {
      lVar3 = 0;
      FUN_00417600(lVar2);
    }
  }
  return lVar3;
}

