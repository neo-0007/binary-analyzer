
long FUN_004b1490(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_004b1390();
  if (lVar2 != 0) {
    iVar1 = FUN_004ab6a0(param_1);
    if (iVar1 != 0) {
      *(undefined8 *)(lVar2 + 0x10) = param_1;
      return lVar2;
    }
  }
  FUN_004b1410(lVar2);
  return 0;
}

