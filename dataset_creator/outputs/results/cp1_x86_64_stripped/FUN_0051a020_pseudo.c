
undefined8 FUN_0051a020(void)

{
  long lVar1;
  
  lVar1 = FUN_0051ab70();
  do {
    if (lVar1 == 0) {
      return 1;
    }
    while ((*(byte *)(lVar1 + 0x98) & 8) != 0) {
      lVar1 = FUN_0051acf0(lVar1);
      if (lVar1 == 0) {
        return 1;
      }
    }
    FUN_00519fc0(lVar1);
    lVar1 = FUN_0051acf0(lVar1);
  } while( true );
}

