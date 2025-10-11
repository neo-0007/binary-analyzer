
undefined ** FUN_00541930(int param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_0092e298;
  iVar2 = 0x466;
  lVar1 = 0;
  while( true ) {
    if (param_1 == iVar2) {
      return &PTR_s_ffdhe2048_0092e260 + lVar1 * 6;
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 0xe) break;
    iVar2 = *piVar3;
    piVar3 = piVar3 + 0xc;
  }
  return (undefined **)0x0;
}

