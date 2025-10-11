
undefined * FUN_00535730(int param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_0090e6d8;
  iVar2 = 0x2d3;
  lVar1 = 0;
  while( true ) {
    if (iVar2 == param_1) {
      return (&PTR_s_B_163_0090e6c0)[lVar1 * 2];
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 0xf) break;
    iVar2 = *piVar3;
    piVar3 = piVar3 + 4;
  }
  return (undefined *)0x0;
}

