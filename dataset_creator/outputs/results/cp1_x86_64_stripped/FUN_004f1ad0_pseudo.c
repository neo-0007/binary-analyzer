
undefined8 FUN_004f1ad0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_004ef890();
  lVar3 = 0;
  uVar2 = 0;
  if (iVar1 == 0x197) {
    while (*(int *)(param_1 + 0x48 + lVar3 * 4) != 0) {
      lVar3 = lVar3 + 1;
      if (lVar3 == 6) {
        return 0;
      }
    }
    if ((int)lVar3 == 4) {
      return 0x2ab;
    }
    uVar2 = 0;
    if ((int)lVar3 == 2) {
      uVar2 = 0x2aa;
    }
  }
  return uVar2;
}

