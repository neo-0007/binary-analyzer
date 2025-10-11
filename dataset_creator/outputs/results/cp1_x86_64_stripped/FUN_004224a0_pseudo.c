
undefined4 FUN_004224a0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  char *pcVar4;
  
  pcVar4 = "ALL";
  ppuVar3 = &PTR_s_TRACE_008de1d0;
  lVar2 = 0;
  while( true ) {
    iVar1 = FUN_0041c9c0(param_1,pcVar4);
    if (iVar1 == 0) {
      return (&DAT_008de1c8)[lVar2 * 4];
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 0x12) break;
    pcVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 2;
  }
  return 0xffffffff;
}

