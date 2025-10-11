
undefined8 FUN_00433790(int param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_008ea9d0;
  iVar2 = 0x40;
  lVar1 = 0;
  while( true ) {
    if (param_1 == iVar2) {
      return *(undefined8 *)(&UNK_008ea9c8 + lVar1 * 0x10);
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 7) break;
    iVar2 = *piVar3;
    piVar3 = piVar3 + 4;
  }
  return 0;
}

