
undefined8 FUN_004aa030(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_00419fe0(0x100,0);
  if (iVar1 != 0) {
    lVar2 = FUN_004a9550();
    if (lVar2 != 0) {
      return *(undefined8 *)(lVar2 + 0x3c8);
    }
  }
  return 0;
}

