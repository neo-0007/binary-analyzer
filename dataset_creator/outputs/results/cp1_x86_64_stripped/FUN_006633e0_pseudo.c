
long FUN_006633e0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      iVar1 = FUN_006fec50(*(undefined4 *)(param_2 + lVar2 * 4),*(undefined8 *)(param_1 + 0x40));
      if (iVar1 == -1) {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
    } while (param_3 != lVar2);
  }
  return lVar2;
}

