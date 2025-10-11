
ulong FUN_0040e5a0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  char *pcVar6;
  
  pcVar6 = "RSA";
  ppuVar5 = &PTR_s_RSA_PSS_008ddff8;
  lVar4 = 0;
  while( true ) {
    iVar1 = FUN_0041c9c0(param_1,pcVar6);
    if (iVar1 == 0) {
      return (ulong)(uint)(&DAT_008ddfe0)[lVar4 * 4];
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == 0xc) break;
    pcVar6 = *ppuVar5;
    ppuVar5 = ppuVar5 + 2;
  }
  uVar2 = FUN_00424460(param_1);
  uVar3 = FUN_0040e520(uVar2);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar2 = FUN_00424390(param_1);
  uVar3 = FUN_0040e520(uVar2);
  return uVar3;
}

