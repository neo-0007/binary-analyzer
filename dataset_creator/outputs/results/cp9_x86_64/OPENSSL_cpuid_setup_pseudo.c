
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OPENSSL_cpuid_setup(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (trigger_0 != 0) {
    return;
  }
  trigger_0 = 1;
  pcVar3 = getenv("OPENSSL_ia32cap");
  if (pcVar3 == (char *)0x0) {
    uVar6 = OPENSSL_ia32_cpuid(&OPENSSL_ia32cap_P);
    uVar5 = _DAT_0093e5a0;
  }
  else {
    cVar1 = *pcVar3;
    uVar4 = ossl_strtouint64(pcVar3 + (cVar1 == '~'));
    if (cVar1 == '~') {
      uVar6 = OPENSSL_ia32_cpuid(&OPENSSL_ia32cap_P);
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
        uVar6 = OPENSSL_ia32_cpuid(&OPENSSL_ia32cap_P);
        cVar1 = *pcVar3;
      }
    }
    while (cVar1 != '\0') {
      cVar2 = pcVar3[1];
      if (cVar1 == ':') {
        uVar5 = ossl_strtouint64(pcVar3 + (ulong)(cVar2 == '~') + 1);
        if (cVar2 == '~') {
          _DAT_0093e5a0 =
               CONCAT44(_DAT_0093e5a4 & ~(uint)((ulong)uVar5 >> 0x20),_DAT_0093e5a0 & ~(uint)uVar5);
          uVar5 = _DAT_0093e5a0;
        }
        goto LAB_00538a44;
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar2;
    }
    _DAT_0093e5a0 = 0;
    uVar5 = _DAT_0093e5a0;
  }
LAB_00538a44:
  _DAT_0093e5a0 = uVar5;
  OPENSSL_ia32cap_P = (uint)uVar6 | 0x400;
  DAT_0093e59c = (int)(uVar6 >> 0x20);
  return;
}

