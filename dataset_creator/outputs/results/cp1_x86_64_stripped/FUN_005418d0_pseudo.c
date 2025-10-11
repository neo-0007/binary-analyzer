
undefined ** FUN_005418d0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  char *pcVar4;
  
  pcVar4 = "ffdhe2048";
  ppuVar3 = &PTR_s_ffdhe3072_0092e290;
  lVar2 = 0;
  while( true ) {
    iVar1 = FUN_0041c9c0(pcVar4,param_1);
    if (iVar1 == 0) {
      return &PTR_s_ffdhe2048_0092e260 + lVar2 * 6;
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 0xe) break;
    pcVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 6;
  }
  return (undefined **)0x0;
}

