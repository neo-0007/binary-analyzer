
undefined8 FUN_0040e630(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = &DAT_008ddff0;
  iVar3 = 6;
  lVar1 = 0;
  while( true ) {
    if (iVar3 == param_1) {
      return *(undefined8 *)(&UNK_008ddfe8 + lVar1 * 0x10);
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 0xc) break;
    iVar3 = *piVar4;
    piVar4 = piVar4 + 4;
  }
  uVar2 = FUN_00423b00();
  return uVar2;
}

