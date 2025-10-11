
void CRYPTO_gcm128_setiv(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined4 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  
  pcVar6 = (code *)param_1[0x2c];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x2e] = 0;
  if (param_3 == 0xc) {
    uVar10 = 2;
    *param_1 = *param_2;
    uVar5 = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((long)param_1 + 0xc) = 0x1000000;
    *(undefined4 *)(param_1 + 1) = uVar5;
  }
  else {
    param_1[8] = 0;
    puVar1 = param_1 + 0xc;
    puVar2 = param_1 + 8;
    param_1[9] = 0;
    uVar11 = param_3;
    if (0xf < param_3) {
      bVar9 = 0;
      puVar3 = (undefined8 *)((long)param_2 + (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10);
      while( true ) {
        lVar7 = 0;
        while( true ) {
          *(byte *)((long)param_1 + lVar7 + 0x40) = bVar9 ^ *(byte *)((long)param_2 + lVar7);
          if (lVar7 + 1 == 0x10) break;
          bVar9 = *(byte *)((long)param_1 + lVar7 + 0x41);
          lVar7 = lVar7 + 1;
        }
        param_2 = param_2 + 2;
        (*pcVar6)(puVar2,puVar1);
        if (puVar3 == param_2) break;
        bVar9 = *(byte *)(param_1 + 8);
      }
      uVar11 = (ulong)((uint)param_3 & 0xf);
      param_2 = puVar3;
    }
    if (uVar11 != 0) {
      uVar8 = 0;
      do {
        pbVar4 = (byte *)((long)param_1 + uVar8 + 0x40);
        *pbVar4 = *pbVar4 ^ *(byte *)((long)param_2 + uVar8);
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar11);
      (*pcVar6)(puVar2,puVar1);
    }
    uVar11 = param_3 << 3;
    param_1[9] = param_1[9] ^
                 (uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                  (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                  (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                  (uVar11 & 0xff00) << 0x28 | param_3 << 0x3b);
    (*pcVar6)(puVar2,puVar1);
    uVar10 = *(uint *)((long)param_1 + 0x4c);
    *param_1 = param_1[8];
    uVar10 = (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18) +
             1;
    param_1[1] = param_1[9];
  }
  param_1[8] = 0;
  param_1[9] = 0;
  (*(code *)param_1[0x2f])(param_1,param_1 + 4,param_1[0x30]);
  *(uint *)((long)param_1 + 0xc) =
       uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
  return;
}

