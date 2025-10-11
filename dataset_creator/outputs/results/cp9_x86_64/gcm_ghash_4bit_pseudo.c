
void gcm_ghash_4bit(ulong *param_1,ulong *param_2,ulong *param_3,long param_4)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  byte local_148 [4];
  char local_144;
  char local_143;
  char local_142;
  char local_141;
  char local_140;
  char local_13f;
  char local_13e;
  char local_13d;
  char local_13c;
  char local_13b;
  char local_13a;
  char local_139;
  ulong local_138 [4];
  ulong local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8 [4];
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  
  local_148[0] = (char)param_2[1] << 4;
  local_b8[0] = *param_2 >> 4;
  local_138[0] = param_2[1] >> 4 | *param_2 << 0x3c;
  local_148[1] = (char)param_2[3] << 4;
  local_b8[1] = param_2[2] >> 4;
  local_138[1] = param_2[3] >> 4 | param_2[2] << 0x3c;
  local_148[2] = (char)param_2[5] << 4;
  local_b8[2] = param_2[4] >> 4;
  local_138[2] = param_2[5] >> 4 | param_2[4] << 0x3c;
  local_148[3] = (char)param_2[7] << 4;
  local_b8[3] = param_2[6] >> 4;
  local_138[3] = param_2[7] >> 4 | param_2[6] << 0x3c;
  local_144 = (char)param_2[9] << 4;
  local_98 = param_2[8] >> 4;
  local_118 = param_2[9] >> 4 | param_2[8] << 0x3c;
  local_143 = (char)param_2[0xb] << 4;
  local_90 = param_2[10] >> 4;
  local_110 = param_2[0xb] >> 4 | param_2[10] << 0x3c;
  local_142 = (char)param_2[0xd] << 4;
  local_88 = param_2[0xc] >> 4;
  local_108 = param_2[0xd] >> 4 | param_2[0xc] << 0x3c;
  local_141 = (char)param_2[0xf] << 4;
  local_80 = param_2[0xe] >> 4;
  local_100 = param_2[0xf] >> 4 | param_2[0xe] << 0x3c;
  local_140 = (char)param_2[0x11] << 4;
  local_78 = param_2[0x10] >> 4;
  local_f8 = param_2[0x11] >> 4 | param_2[0x10] << 0x3c;
  local_13f = (char)param_2[0x13] << 4;
  local_70 = param_2[0x12] >> 4;
  local_f0 = param_2[0x13] >> 4 | param_2[0x12] << 0x3c;
  local_13e = (char)param_2[0x15] << 4;
  local_68 = param_2[0x14] >> 4;
  local_e8 = param_2[0x15] >> 4 | param_2[0x14] << 0x3c;
  local_13d = (char)param_2[0x17] << 4;
  local_60 = param_2[0x16] >> 4;
  local_e0 = param_2[0x17] >> 4 | param_2[0x16] << 0x3c;
  local_13c = (char)param_2[0x19] << 4;
  local_58 = param_2[0x18] >> 4;
  local_d8 = param_2[0x19] >> 4 | param_2[0x18] << 0x3c;
  local_13b = (char)param_2[0x1b] << 4;
  local_50 = param_2[0x1a] >> 4;
  local_d0 = param_2[0x1b] >> 4 | param_2[0x1a] << 0x3c;
  local_13a = (char)param_2[0x1d] << 4;
  local_48 = param_2[0x1c] >> 4;
  local_c8 = param_2[0x1d] >> 4 | param_2[0x1c] << 0x3c;
  local_139 = (char)param_2[0x1f] << 4;
  local_40 = param_2[0x1e] >> 4;
  local_c0 = param_2[0x1f] >> 4 | param_2[0x1e] << 0x3c;
  uVar4 = param_1[1];
  uVar9 = *param_1;
  puVar13 = (ulong *)(param_4 + (long)param_3);
  do {
    uVar10 = *param_3;
    puVar1 = param_3 + 1;
    param_3 = param_3 + 2;
    uVar4 = *puVar1 ^ uVar4;
    *param_1 = uVar9 ^ uVar10;
    param_1[1] = uVar4;
    uVar3 = (uint)(uVar4 >> 0x20);
    uVar10 = (ulong)(byte)((char)(uVar4 >> 0x38) << 4);
    uVar5 = uVar3 >> 0x1c;
    uVar9 = *(ulong *)((long)param_2 + uVar10 + 8);
    uVar10 = *(ulong *)((long)param_2 + uVar10);
    uVar8 = (ulong)(byte)((char)(uVar4 >> 0x30) << 4);
    uVar2 = (uVar3 << 8) >> 0x1c;
    uVar11 = uVar10 >> 8 ^ local_b8[uVar5] ^ *(ulong *)((long)param_2 + uVar8);
    uVar8 = uVar9 >> 8 ^ local_138[uVar5] ^ *(ulong *)((long)param_2 + uVar8 + 8) ^ uVar10 << 0x38;
    uVar10 = (ulong)(byte)((char)(uVar4 >> 0x28) << 4);
    uVar6 = (uVar3 << 0x10) >> 0x1c;
    uVar12 = (uVar11 ^ (ulong)*(ushort *)(&LAB_00427280 + ((local_148[uVar5] ^ uVar9) & 0xff) * 2)
                       << 0x30) >> 8 ^ local_b8[uVar2] ^ *(ulong *)((long)param_2 + uVar10);
    uVar9 = uVar8 >> 8 ^ local_138[uVar2] ^ *(ulong *)((long)param_2 + uVar10 + 8) ^ uVar11 << 0x38;
    uVar4 = (ulong)(byte)((char)(uVar4 >> 0x20) << 4);
    uVar5 = (uVar3 << 0x18) >> 0x1c;
    uVar3 = (uint)param_1[1];
    uVar8 = (uVar12 ^ (ulong)*(ushort *)(&LAB_00427280 + ((local_148[uVar2] ^ uVar8) & 0xff) * 2) <<
                      0x30) >> 8 ^ local_b8[uVar6] ^ *(ulong *)((long)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ local_138[uVar6] ^ *(ulong *)((long)param_2 + uVar4 + 8) ^ uVar12 << 0x38;
    uVar4 = (ulong)(byte)((char)(uVar3 >> 0x18) << 4);
    uVar7 = uVar3 >> 0x1c;
    uVar11 = (uVar8 ^ (ulong)*(ushort *)(&LAB_00427280 + ((local_148[uVar6] ^ uVar9) & 0xff) * 2) <<
                      0x30) >> 8 ^ local_b8[uVar5] ^ *(ulong *)((long)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ local_138[uVar5] ^ *(ulong *)((long)param_2 + uVar4 + 8) ^ uVar8 << 0x38;
    uVar4 = (ulong)(byte)((char)(uVar3 >> 0x10) << 4);
    uVar2 = (uVar3 << 8) >> 0x1c;
    uVar8 = (uVar11 ^ (ulong)*(ushort *)(&LAB_00427280 + ((local_148[uVar5] ^ uVar10) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar7] ^ *(ulong *)((long)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ local_138[uVar7] ^ *(ulong *)((long)param_2 + uVar4 + 8) ^ uVar11 << 0x38;
    uVar4 = (ulong)(byte)((char)(uVar3 >> 8) << 4);
    uVar6 = (uVar3 << 0x10) >> 0x1c;
    uVar11 = (uVar8 ^ (ulong)*(ushort *)(&LAB_00427280 + ((local_148[uVar7] ^ uVar9) & 0xff) * 2) <<
                      0x30) >> 8 ^ local_b8[uVar2] ^ *(ulong *)((long)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ local_138[uVar2] ^ *(ulong *)((long)param_2 + uVar4 + 8) ^ uVar8 << 0x38;
    uVar4 = (ulong)(byte)((char)uVar3 << 4);
    uVar5 = (uVar3 << 0x18) >> 0x1c;
    uVar3 = *(uint *)((long)param_1 + 4);
    uVar8 = (uVar11 ^ (ulong)*(ushort *)(&LAB_00427280 + ((local_148[uVar2] ^ uVar10) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar6] ^ *(ulong *)((long)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ local_138[uVar6] ^ *(ulong *)((long)param_2 + uVar4 + 8) ^ uVar11 << 0x38;
    uVar4 = (ulong)(byte)((char)(uVar3 >> 0x18) << 4);
    uVar7 = uVar3 >> 0x1c;
    uVar11 = (uVar8 ^ (ulong)*(ushort *)(&LAB_00427280 + ((local_148[uVar6] ^ uVar9) & 0xff) * 2) <<
                      0x30) >> 8 ^ local_b8[uVar5] ^ *(ulong *)((long)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ local_138[uVar5] ^ *(ulong *)((long)param_2 + uVar4 + 8) ^ uVar8 << 0x38;
    uVar4 = (ulong)(byte)((char)(uVar3 >> 0x10) << 4);
    uVar2 = (uVar3 << 8) >> 0x1c;
    uVar8 = (uVar11 ^ (ulong)*(ushort *)(&LAB_00427280 + ((local_148[uVar5] ^ uVar10) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar7] ^ *(ulong *)((long)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ local_138[uVar7] ^ *(ulong *)((long)param_2 + uVar4 + 8) ^ uVar11 << 0x38;
    uVar4 = (ulong)(byte)((char)(uVar3 >> 8) << 4);
    uVar6 = (uVar3 << 0x10) >> 0x1c;
    uVar11 = (uVar8 ^ (ulong)*(ushort *)(&LAB_00427280 + ((local_148[uVar7] ^ uVar9) & 0xff) * 2) <<
                      0x30) >> 8 ^ local_b8[uVar2] ^ *(ulong *)((long)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ local_138[uVar2] ^ *(ulong *)((long)param_2 + uVar4 + 8) ^ uVar8 << 0x38;
    uVar4 = (ulong)(byte)((char)uVar3 << 4);
    uVar5 = (uVar3 << 0x18) >> 0x1c;
    uVar3 = (uint)*param_1;
    uVar8 = (uVar11 ^ (ulong)*(ushort *)(&LAB_00427280 + ((local_148[uVar2] ^ uVar10) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar6] ^ *(ulong *)((long)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ local_138[uVar6] ^ *(ulong *)((long)param_2 + uVar4 + 8) ^ uVar11 << 0x38;
    uVar4 = (ulong)(byte)((char)(uVar3 >> 0x18) << 4);
    uVar7 = uVar3 >> 0x1c;
    uVar11 = (uVar8 ^ (ulong)*(ushort *)(&LAB_00427280 + ((local_148[uVar6] ^ uVar9) & 0xff) * 2) <<
                      0x30) >> 8 ^ local_b8[uVar5] ^ *(ulong *)((long)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ local_138[uVar5] ^ *(ulong *)((long)param_2 + uVar4 + 8) ^ uVar8 << 0x38;
    uVar4 = (ulong)(byte)((char)(uVar3 >> 0x10) << 4);
    uVar2 = (uVar3 << 8) >> 0x1c;
    uVar8 = (uVar11 ^ (ulong)*(ushort *)(&LAB_00427280 + ((local_148[uVar5] ^ uVar10) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar7] ^ *(ulong *)((long)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ local_138[uVar7] ^ *(ulong *)((long)param_2 + uVar4 + 8) ^ uVar11 << 0x38;
    uVar4 = (ulong)(byte)((char)(uVar3 >> 8) << 4);
    uVar5 = (uVar3 << 0x10) >> 0x1c;
    uVar11 = (uVar8 ^ (ulong)*(ushort *)(&LAB_00427280 + ((local_148[uVar7] ^ uVar9) & 0xff) * 2) <<
                      0x30) >> 8 ^ local_b8[uVar2] ^ *(ulong *)((long)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ local_138[uVar2] ^ *(ulong *)((long)param_2 + uVar4 + 8) ^ uVar8 << 0x38;
    uVar4 = (ulong)(byte)((char)uVar3 << 4);
    uVar8 = uVar9 >> 8 ^ local_138[uVar5] ^ *(ulong *)((long)param_2 + uVar4 + 8);
    uVar10 = (uVar11 ^ (ulong)*(ushort *)(&LAB_00427280 + ((local_148[uVar2] ^ uVar10) & 0xff) * 2)
                       << 0x30) >> 8 ^ local_b8[uVar5] ^ *(ulong *)((long)param_2 + uVar4);
    uVar4 = (uVar8 ^ uVar11 << 0x38) >> 4 ^ *(ulong *)((long)param_2 + (ulong)(uVar3 & 0xf0) + 8);
    uVar11 = (uVar10 ^ (ulong)*(ushort *)(&LAB_00427280 + ((local_148[uVar5] ^ uVar9) & 0xff) * 2)
                       << 0x30) >> 4 ^ *(ulong *)((long)param_2 + (ulong)(uVar3 & 0xf0));
    uVar9 = uVar4 ^ uVar10 << 0x3c;
    uVar4 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
            (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
            (uVar9 & 0xff00) << 0x28 | uVar4 << 0x38;
    uVar9 = uVar11 ^ (ulong)*(ushort *)(&LAB_00427280 + (ulong)(byte)((char)uVar8 << 4) * 2) << 0x30
    ;
    uVar9 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
            (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
            (uVar9 & 0xff00) << 0x28 | uVar11 << 0x38;
  } while (param_3 < puVar13);
  param_1[1] = uVar4;
  *param_1 = uVar9;
  return;
}

