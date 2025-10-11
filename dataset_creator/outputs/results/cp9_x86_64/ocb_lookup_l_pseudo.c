
void * ocb_lookup_l(long param_1,ulong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  void *addr;
  int iVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  
  uVar10 = *(ulong *)(param_1 + 0x28);
  addr = *(void **)(param_1 + 0x58);
  if (param_2 <= uVar10) {
    return (void *)((long)addr + param_2 * 0x10);
  }
  uVar5 = *(ulong *)(param_1 + 0x30);
  if (uVar5 <= param_2) {
    lVar9 = ((param_2 + 4) - uVar5 & 0xfffffffffffffffc) + uVar5;
    *(long *)(param_1 + 0x30) = lVar9;
    addr = CRYPTO_realloc(addr,(int)lVar9 * 0x10,"../crypto/modes/ocb128.c",0x71);
    if (addr == (void *)0x0) {
      return (void *)0x0;
    }
    *(void **)(param_1 + 0x58) = addr;
  }
  uVar10 = uVar10 + 1;
  lVar9 = uVar10 * 0x10;
  while( true ) {
    pcVar2 = (char *)((long)addr + lVar9 + -0x10);
    iVar8 = 0;
    lVar7 = 0xf;
    cVar3 = *pcVar2;
    do {
      bVar4 = pcVar2[lVar7];
      bVar6 = (byte)iVar8;
      iVar8 = (int)(uint)bVar4 >> 7;
      *(byte *)((long)addr + lVar7 + lVar9) = bVar4 * '\x02' | bVar6;
      bVar11 = lVar7 != 0;
      lVar7 = lVar7 + -1;
    } while (bVar11);
    pbVar1 = (byte *)((long)addr + lVar9 + 0xf);
    *pbVar1 = *pbVar1 ^ cVar3 >> 7 & 0x87U;
    addr = *(void **)(param_1 + 0x58);
    lVar9 = lVar9 + 0x10;
    if (uVar10 == param_2) break;
    uVar10 = uVar10 + 1;
  }
  *(ulong *)(param_1 + 0x28) = uVar10;
  return (void *)((long)addr + uVar10 * 0x10);
}

