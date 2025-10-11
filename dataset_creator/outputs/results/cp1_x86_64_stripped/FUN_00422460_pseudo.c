
undefined * FUN_00422460(int param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_008de1d8;
  iVar2 = 0;
  lVar1 = 0;
  while( true ) {
    if (iVar2 == param_1) {
      return (&PTR_s_ALL_008de1c0)[lVar1 * 2];
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 0x12) break;
    iVar2 = *piVar3;
    piVar3 = piVar3 + 4;
  }
  return (undefined *)0x0;
}

