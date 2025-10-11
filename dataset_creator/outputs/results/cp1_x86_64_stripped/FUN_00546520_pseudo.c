
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00546520(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (DAT_00941260 != 0) {
    return;
  }
  DAT_00941260 = 1;
  pcVar3 = (char *)FUN_006e8e30("OPENSSL_ia32cap");
  if (pcVar3 == (char *)0x0) {
    uVar6 = FUN_004225c0(&DAT_0094b598);
    uVar5 = _DAT_0094b5a0;
  }
  else {
    cVar1 = *pcVar3;
    uVar4 = FUN_00546470(pcVar3 + (cVar1 == '~'));
    if (cVar1 == '~') {
      uVar6 = FUN_004225c0(&DAT_0094b598);
      uVar6 = uVar6 & ~uVar4;
      if ((uVar4 & 0x1000000) == 0) {
        cVar1 = *pcVar3;
      }
      else {
        cVar1 = *pcVar3;
        uVar6 = uVar6 & 0xedfff7fdffffffff;
      }
    }
    else {
      cVar1 = *pcVar3;
      uVar6 = uVar4;
      if (cVar1 == ':') {
        uVar6 = FUN_004225c0(&DAT_0094b598);
        cVar1 = *pcVar3;
      }
    }
    while (cVar1 != '\0') {
      cVar2 = pcVar3[1];
      if (cVar1 == ':') {
        uVar5 = FUN_00546470(pcVar3 + (ulong)(cVar2 == '~') + 1);
        if (cVar2 == '~') {
          _DAT_0094b5a0 =
               CONCAT44(_DAT_0094b5a4 & ~(uint)((ulong)uVar5 >> 0x20),DAT_0094b5a0 & ~(uint)uVar5);
          uVar5 = _DAT_0094b5a0;
        }
        goto LAB_005465d4;
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar2;
    }
    _DAT_0094b5a0 = 0;
    uVar5 = _DAT_0094b5a0;
  }
LAB_005465d4:
  _DAT_0094b5a0 = uVar5;
  DAT_0094b598 = (uint)uVar6 | 0x400;
  DAT_0094b59c = (int)(uVar6 >> 0x20);
  return;
}

