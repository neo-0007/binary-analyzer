
undefined4 FUN_00535770(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  char *pcVar4;
  
  pcVar4 = "B-163";
  ppuVar3 = &PTR_s_B_233_0090e6d0;
  lVar2 = 0;
  while( true ) {
    iVar1 = thunk_FUN_00712780(pcVar4,param_1);
    if (iVar1 == 0) {
      return (&DAT_0090e6c8)[lVar2 * 4];
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 0xf) break;
    pcVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 2;
  }
  return 0;
}

