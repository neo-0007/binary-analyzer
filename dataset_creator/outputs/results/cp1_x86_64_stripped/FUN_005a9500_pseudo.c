
bool FUN_005a9500(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (DAT_00942788 == 0) {
    DAT_00942788 = FUN_00436420(FUN_005a8aa0);
    if (DAT_00942788 == 0) {
      return false;
    }
  }
  else {
    iVar1 = FUN_00435f40(DAT_00942788,param_1);
    if (-1 < iVar1) {
      uVar2 = FUN_00435ec0(DAT_00942788,iVar1);
      FUN_005a8ad0(uVar2);
      iVar1 = FUN_00435f80(DAT_00942788,param_1);
      goto LAB_005a9539;
    }
  }
  iVar1 = FUN_00435f80(DAT_00942788,param_1);
LAB_005a9539:
  return iVar1 != 0;
}

