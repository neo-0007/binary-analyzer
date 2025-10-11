
long FUN_004a1430(long *param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  
  while( true ) {
    lVar1 = FUN_004a1310(param_2);
    if ((lVar1 == 0) || ((*(byte *)(lVar1 + 8) & 1) == 0)) break;
    param_2 = *(undefined4 *)(lVar1 + 4);
  }
  if (param_1 != (long *)0x0) {
    lVar2 = FUN_0051c6a0(param_2);
    if (lVar2 != 0) {
      *param_1 = lVar2;
      lVar1 = FUN_0051c6d0(lVar2,param_2);
      return lVar1;
    }
    *param_1 = 0;
  }
  return lVar1;
}

