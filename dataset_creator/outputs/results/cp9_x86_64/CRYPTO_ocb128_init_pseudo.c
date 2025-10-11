
undefined8
CRYPTO_ocb128_init(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  void *pvVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  *param_1 = 0;
  param_1[0x15] = 0;
  puVar13 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar11 = (ulong)(((int)param_1 -
                        (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0xb0U >> 3
                       ); uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  param_1[6] = 5;
  pvVar5 = CRYPTO_malloc(0x50,"../crypto/modes/ocb128.c",0x9e);
  param_1[0xb] = pvVar5;
  if (pvVar5 == (void *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/modes/ocb128.c",0x9f,"CRYPTO_ocb128_init");
    ERR_set_error(0xf,0xc0100,0);
    uVar9 = 0;
  }
  else {
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[3] = param_3;
    param_1[4] = param_6;
    param_1[2] = param_2;
    (*param_4)(param_1 + 7,param_1 + 7,param_2);
    cVar1 = *(char *)(param_1 + 7);
    iVar10 = 0;
    pbVar8 = (byte *)((long)param_1 + 0x47);
    do {
      pbVar6 = pbVar8 + -1;
      bVar2 = (byte)iVar10;
      iVar10 = (int)(uint)*pbVar8 >> 7;
      pbVar8[0x10] = *pbVar8 * '\x02' | bVar2;
      pbVar8 = pbVar6;
    } while ((byte *)((long)param_1 + 0x37) != pbVar6);
    *(byte *)((long)param_1 + 0x57) = *(byte *)((long)param_1 + 0x57) ^ cVar1 >> 7 & 0x87U;
    cVar1 = *(char *)(param_1 + 9);
    lVar7 = 0xf;
    iVar10 = 0;
    lVar3 = param_1[0xb];
    do {
      bVar2 = *(byte *)((long)param_1 + lVar7 + 0x48);
      bVar4 = (byte)iVar10;
      iVar10 = (int)(uint)bVar2 >> 7;
      *(byte *)(lVar3 + lVar7) = bVar2 * '\x02' | bVar4;
      bVar14 = lVar7 != 0;
      lVar7 = lVar7 + -1;
    } while (bVar14);
    pbVar8 = (byte *)(lVar3 + 0xf);
    *pbVar8 = *pbVar8 ^ cVar1 >> 7 & 0x87U;
    pbVar8 = (byte *)param_1[0xb];
    iVar10 = 0;
    bVar2 = *pbVar8;
    pbVar6 = pbVar8 + 0xf;
    do {
      bVar4 = (byte)iVar10;
      iVar10 = (int)(uint)*pbVar6 >> 7;
      pbVar6[0x10] = *pbVar6 * '\x02' | bVar4;
      bVar14 = pbVar8 != pbVar6;
      pbVar6 = pbVar6 + -1;
    } while (bVar14);
    pbVar8[0x1f] = pbVar8[0x1f] ^ (char)bVar2 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    iVar10 = 0;
    cVar1 = *(char *)(lVar3 + 0x10);
    pbVar8 = (byte *)(lVar3 + 0x1f);
    do {
      pbVar6 = pbVar8 + -1;
      bVar2 = (byte)iVar10;
      iVar10 = (int)(uint)*pbVar8 >> 7;
      pbVar8[0x10] = *pbVar8 * '\x02' | bVar2;
      pbVar8 = pbVar6;
    } while ((byte *)(lVar3 + 0xf) != pbVar6);
    *(byte *)(lVar3 + 0x2f) = *(byte *)(lVar3 + 0x2f) ^ cVar1 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    iVar10 = 0;
    cVar1 = *(char *)(lVar3 + 0x20);
    pbVar8 = (byte *)(lVar3 + 0x2f);
    do {
      pbVar6 = pbVar8 + -1;
      bVar2 = (byte)iVar10;
      iVar10 = (int)(uint)*pbVar8 >> 7;
      pbVar8[0x10] = *pbVar8 * '\x02' | bVar2;
      pbVar8 = pbVar6;
    } while ((byte *)(lVar3 + 0x1f) != pbVar6);
    *(byte *)(lVar3 + 0x3f) = *(byte *)(lVar3 + 0x3f) ^ cVar1 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    uVar12 = 0;
    cVar1 = *(char *)(lVar3 + 0x30);
    pbVar8 = (byte *)(lVar3 + 0x3f);
    do {
      iVar10 = (int)uVar12 >> 7;
      uVar12 = (uint)*pbVar8;
      pbVar6 = pbVar8 + -1;
      pbVar8[0x10] = *pbVar8 * '\x02' | (byte)iVar10;
      pbVar8 = pbVar6;
    } while ((byte *)(lVar3 + 0x2f) != pbVar6);
    *(byte *)(lVar3 + 0x4f) = *(byte *)(lVar3 + 0x4f) ^ cVar1 >> 7 & 0x87U;
    uVar9 = 1;
    param_1[5] = 4;
  }
  return uVar9;
}

