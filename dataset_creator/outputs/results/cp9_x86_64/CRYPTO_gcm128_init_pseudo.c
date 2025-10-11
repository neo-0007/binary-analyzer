
void CRYPTO_gcm128_init(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar1 = param_1 + 10;
  *param_1 = 0;
  param_1[0x36] = 0;
  puVar9 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar4 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x1b8U >> 3
                      ); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  param_1[0x2f] = param_3;
  param_1[0x30] = param_2;
  (*param_3)(puVar1,puVar1,param_2);
  uVar4 = param_1[10];
  uVar2 = param_1[0xb];
  uVar5 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
          (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
          (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
  uVar7 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
          (uVar2 & 0xff00000000) >> 8;
  uVar2 = uVar7 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28
          | uVar2 << 0x38;
  param_1[10] = uVar5;
  param_1[0xb] = uVar2;
  if ((DAT_0093e59c & 2) == 0) {
    param_1[0x1c] = uVar5;
    param_1[0x1d] = uVar2;
    uVar11 = (uVar4 >> 0x38) << 0x3f | uVar2 >> 1;
    param_1[0xc] = 0;
    param_1[0x15] = uVar11;
    param_1[0xd] = 0;
    uVar4 = -(ulong)((uint)uVar7 & 1) & 0xe100000000000000 ^ uVar5 >> 1;
    param_1[0x14] = uVar4;
    uVar12 = (uVar5 >> 1) << 0x3f | uVar11 >> 1;
    param_1[0x11] = uVar12;
    param_1[0x19] = uVar11 ^ uVar12;
    uVar8 = -(ulong)((uint)(uVar2 >> 1) & 1) & 0xe100000000000000 ^ uVar4 >> 1;
    param_1[0x10] = uVar8;
    uVar13 = (uVar4 >> 1) << 0x3f | uVar12 >> 1;
    param_1[0x18] = uVar4 ^ uVar8;
    param_1[0xf] = uVar13;
    param_1[0x17] = uVar11 ^ uVar13;
    uVar10 = -(ulong)((uint)(uVar11 >> 1) & 1) & 0xe100000000000000 ^ uVar8 >> 1;
    uVar7 = uVar8 ^ uVar10;
    uVar14 = uVar12 ^ uVar13;
    param_1[0xe] = uVar10;
    param_1[0x12] = uVar7;
    param_1[0x1a] = uVar4 ^ uVar7;
    param_1[0x13] = uVar14;
    param_1[0x24] = uVar4 ^ uVar5;
    param_1[0x16] = uVar4 ^ uVar10;
    param_1[0x1b] = uVar11 ^ uVar14;
    param_1[0x1e] = uVar10 ^ uVar5;
    param_1[0x1f] = uVar13 ^ uVar2;
    param_1[0x20] = uVar8 ^ uVar5;
    param_1[0x21] = uVar12 ^ uVar2;
    param_1[0x22] = uVar7 ^ uVar5;
    param_1[0x23] = uVar14 ^ uVar2;
    param_1[0x25] = uVar11 ^ uVar2;
    param_1[0x26] = uVar4 ^ uVar10 ^ uVar5;
    param_1[0x27] = uVar11 ^ uVar13 ^ uVar2;
    param_1[0x28] = uVar4 ^ uVar8 ^ uVar5;
    param_1[0x29] = uVar11 ^ uVar12 ^ uVar2;
    param_1[0x2a] = uVar5 ^ uVar4 ^ uVar7;
    pcVar6 = gcm_gmult_4bit;
    param_1[0x2b] = uVar2 ^ uVar11 ^ uVar14;
    pcVar3 = gcm_ghash_4bit;
  }
  else if ((DAT_0093e59c >> 0x16 & 0x41) == 0x41) {
    gcm_init_avx(param_1 + 0xc,puVar1);
    pcVar6 = gcm_gmult_avx;
    pcVar3 = gcm_ghash_avx;
  }
  else {
    gcm_init_clmul();
    pcVar6 = gcm_gmult_clmul;
    pcVar3 = gcm_ghash_clmul;
  }
  param_1[0x2c] = pcVar6;
  param_1[0x2d] = pcVar3;
  return;
}

