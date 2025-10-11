
long FUN_004b1550(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_005c0c20();
  if (lVar1 != 0) {
    lVar2 = FUN_004b1390();
    if (lVar2 == 0) {
      FUN_004ab560(lVar1);
    }
    else {
      *(long *)(lVar2 + 0x10) = lVar1;
    }
    return lVar2;
  }
  return 0;
}

