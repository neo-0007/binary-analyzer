
undefined8 FUN_004a96e0(void)

{
  long lVar1;
  long lVar2;
  
  lVar2 = FUN_004a9550();
  if (((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + 0x3c8), lVar1 != 0)) &&
     (*(int *)(lVar2 + 0x3d0) == 0)) {
    *(undefined4 *)(lVar1 + 0x3dc) = 1;
    FUN_006f2c00(lVar1,lVar2);
    FUN_004aa4c0(*(undefined8 *)(lVar1 + 0x3e0));
    return 1;
  }
  return 1;
}

