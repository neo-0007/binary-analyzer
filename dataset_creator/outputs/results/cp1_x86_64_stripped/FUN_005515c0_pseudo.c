
long FUN_005515c0(long param_1,ulong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  
  uVar11 = *(ulong *)(param_1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x58);
  if (param_2 <= uVar11) {
    return lVar8 + param_2 * 0x10;
  }
  uVar5 = *(ulong *)(param_1 + 0x30);
  if (uVar5 <= param_2) {
    lVar10 = ((param_2 + 4) - uVar5 & 0xfffffffffffffffc) + uVar5;
    *(long *)(param_1 + 0x30) = lVar10;
    lVar8 = FUN_0041ade0(lVar8,lVar10 * 0x10,"../crypto/modes/ocb128.c");
    if (lVar8 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x58) = lVar8;
  }
  uVar11 = uVar11 + 1;
  lVar10 = uVar11 * 0x10;
  while( true ) {
    pcVar2 = (char *)(lVar8 + -0x10 + lVar10);
    iVar9 = 0;
    lVar7 = 0xf;
    cVar3 = *pcVar2;
    do {
      bVar4 = pcVar2[lVar7];
      bVar6 = (byte)iVar9;
      iVar9 = (int)(uint)bVar4 >> 7;
      *(byte *)(lVar8 + lVar10 + lVar7) = bVar4 * '\x02' | bVar6;
      bVar12 = lVar7 != 0;
      lVar7 = lVar7 + -1;
    } while (bVar12);
    pbVar1 = (byte *)(lVar8 + lVar10 + 0xf);
    *pbVar1 = *pbVar1 ^ cVar3 >> 7 & 0x87U;
    lVar8 = *(long *)(param_1 + 0x58);
    lVar10 = lVar10 + 0x10;
    if (uVar11 == param_2) break;
    uVar11 = uVar11 + 1;
  }
  *(ulong *)(param_1 + 0x28) = uVar11;
  return lVar8 + uVar11 * 0x10;
}

