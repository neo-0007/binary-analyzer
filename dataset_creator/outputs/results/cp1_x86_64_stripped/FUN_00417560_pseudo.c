
byte FUN_00417560(void)

{
  long lVar1;
  
  lVar1 = FUN_004174a0();
  if (lVar1 != 0) {
    return *(byte *)(lVar1 + 0x1c0) & 1;
  }
  return 0;
}

