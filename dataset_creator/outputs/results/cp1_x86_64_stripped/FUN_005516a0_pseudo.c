
undefined8
FUN_005516a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
            undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  bool bVar13;
  
  *param_1 = 0;
  param_1[0x15] = 0;
  puVar12 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar10 = (ulong)(((int)param_1 -
                        (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0xb0U >> 3
                       ); uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  param_1[6] = 5;
  lVar4 = FUN_0041ad90(0x50,"../crypto/modes/ocb128.c",0x9e);
  param_1[0xb] = lVar4;
  if (lVar4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/modes/ocb128.c",0x9f,"CRYPTO_ocb128_init");
    FUN_0051f8f0(0xf,0xc0100,0);
    uVar8 = 0;
  }
  else {
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[3] = param_3;
    param_1[4] = param_6;
    param_1[2] = param_2;
    (*param_4)(param_1 + 7,param_1 + 7,param_2);
    cVar1 = *(char *)(param_1 + 7);
    iVar9 = 0;
    pbVar7 = (byte *)((long)param_1 + 0x47);
    do {
      pbVar5 = pbVar7 + -1;
      bVar2 = (byte)iVar9;
      iVar9 = (int)(uint)*pbVar7 >> 7;
      pbVar7[0x10] = *pbVar7 * '\x02' | bVar2;
      pbVar7 = pbVar5;
    } while ((byte *)((long)param_1 + 0x37) != pbVar5);
    *(byte *)((long)param_1 + 0x57) = *(byte *)((long)param_1 + 0x57) ^ cVar1 >> 7 & 0x87U;
    cVar1 = *(char *)(param_1 + 9);
    lVar6 = 0xf;
    iVar9 = 0;
    lVar4 = param_1[0xb];
    do {
      bVar2 = *(byte *)((long)param_1 + lVar6 + 0x48);
      bVar3 = (byte)iVar9;
      iVar9 = (int)(uint)bVar2 >> 7;
      *(byte *)(lVar4 + lVar6) = bVar2 * '\x02' | bVar3;
      bVar13 = lVar6 != 0;
      lVar6 = lVar6 + -1;
    } while (bVar13);
    pbVar7 = (byte *)(lVar4 + 0xf);
    *pbVar7 = *pbVar7 ^ cVar1 >> 7 & 0x87U;
    pbVar7 = (byte *)param_1[0xb];
    iVar9 = 0;
    bVar2 = *pbVar7;
    pbVar5 = pbVar7 + 0xf;
    do {
      bVar3 = (byte)iVar9;
      iVar9 = (int)(uint)*pbVar5 >> 7;
      pbVar5[0x10] = *pbVar5 * '\x02' | bVar3;
      bVar13 = pbVar7 != pbVar5;
      pbVar5 = pbVar5 + -1;
    } while (bVar13);
    pbVar7[0x1f] = pbVar7[0x1f] ^ (char)bVar2 >> 7 & 0x87U;
    lVar4 = param_1[0xb];
    iVar9 = 0;
    cVar1 = *(char *)(lVar4 + 0x10);
    pbVar7 = (byte *)(lVar4 + 0x1f);
    do {
      pbVar5 = pbVar7 + -1;
      bVar2 = (byte)iVar9;
      iVar9 = (int)(uint)*pbVar7 >> 7;
      pbVar7[0x10] = *pbVar7 * '\x02' | bVar2;
      pbVar7 = pbVar5;
    } while ((byte *)(lVar4 + 0xf) != pbVar5);
    *(byte *)(lVar4 + 0x2f) = *(byte *)(lVar4 + 0x2f) ^ cVar1 >> 7 & 0x87U;
    lVar4 = param_1[0xb];
    iVar9 = 0;
    cVar1 = *(char *)(lVar4 + 0x20);
    pbVar7 = (byte *)(lVar4 + 0x2f);
    do {
      pbVar5 = pbVar7 + -1;
      bVar2 = (byte)iVar9;
      iVar9 = (int)(uint)*pbVar7 >> 7;
      pbVar7[0x10] = *pbVar7 * '\x02' | bVar2;
      pbVar7 = pbVar5;
    } while ((byte *)(lVar4 + 0x1f) != pbVar5);
    *(byte *)(lVar4 + 0x3f) = *(byte *)(lVar4 + 0x3f) ^ cVar1 >> 7 & 0x87U;
    lVar4 = param_1[0xb];
    uVar11 = 0;
    cVar1 = *(char *)(lVar4 + 0x30);
    pbVar7 = (byte *)(lVar4 + 0x3f);
    do {
      iVar9 = (int)uVar11 >> 7;
      uVar11 = (uint)*pbVar7;
      pbVar5 = pbVar7 + -1;
      pbVar7[0x10] = *pbVar7 * '\x02' | (byte)iVar9;
      pbVar7 = pbVar5;
    } while ((byte *)(lVar4 + 0x2f) != pbVar5);
    *(byte *)(lVar4 + 0x4f) = *(byte *)(lVar4 + 0x4f) ^ cVar1 >> 7 & 0x87U;
    uVar8 = 1;
    param_1[5] = 4;
  }
  return uVar8;
}

