
uint FUN_00790580(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char acStack_1e8 [64];
  undefined1 local_1a8 [130];
  char local_126 [270];
  
  iVar2 = FUN_00768bf0(local_1a8);
  pcVar7 = local_126;
  if (iVar2 == 0) {
LAB_007905a9:
    iVar2 = 0;
    uVar3 = 0;
    do {
      if (9 < (byte)(*pcVar7 - 0x30U)) {
LAB_00790616:
        return uVar3 << (('\x03' - (char)iVar2) * '\b' & 0x1fU);
      }
      pcVar6 = pcVar7 + 1;
      uVar5 = (uint)(char)(*pcVar7 - 0x30U);
      cVar1 = pcVar7[1];
      while ((byte)(cVar1 - 0x30U) < 10) {
        pcVar6 = pcVar6 + 1;
        uVar5 = (int)(char)(cVar1 + -0x30) + uVar5 * 10;
        cVar1 = *pcVar6;
      }
      iVar2 = iVar2 + 1;
      pcVar7 = pcVar6 + 1;
      uVar3 = uVar3 << 8 | uVar5;
      if (cVar1 != '.') {
        if (iVar2 == 3) {
          return uVar3;
        }
        goto LAB_00790616;
      }
    } while (iVar2 != 3);
  }
  else {
    iVar2 = FUN_0076e620("/proc/sys/kernel/osrelease",0);
    if (-1 < iVar2) {
      lVar4 = FUN_0076e770(iVar2,acStack_1e8,0x40);
      FUN_0076e4b0(iVar2);
      if (0 < lVar4) {
        if (0x3f < lVar4) {
          lVar4 = 0x3f;
        }
        acStack_1e8[lVar4] = '\0';
        pcVar7 = acStack_1e8;
        goto LAB_007905a9;
      }
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

