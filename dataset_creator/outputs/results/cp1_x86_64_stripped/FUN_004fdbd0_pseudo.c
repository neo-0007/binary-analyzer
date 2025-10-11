
void FUN_004fdbd0(ulong *param_1,long *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                 ulong *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  undefined1 local_308 [32];
  undefined1 local_2e8 [32];
  ulong local_2c8;
  long lStack_2c0;
  ulong local_2b8;
  long lStack_2b0;
  ulong local_2a8;
  long lStack_2a0;
  ulong local_298;
  long lStack_290;
  ulong local_288;
  long lStack_280;
  ulong local_278;
  long lStack_270;
  ulong local_268;
  long lStack_260;
  ulong local_258;
  long lStack_250;
  ulong local_248;
  long lStack_240;
  ulong local_238;
  long lStack_230;
  ulong local_228;
  long lStack_220;
  ulong local_218;
  long lStack_210;
  long local_208;
  long local_200;
  ulong local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  undefined8 local_188;
  long local_180;
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  long local_160;
  undefined8 local_158;
  long local_150;
  ulong local_148;
  long local_140;
  ulong local_138;
  long local_130;
  ulong local_128;
  long local_120;
  ulong local_118;
  long local_110;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
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
  long local_40;
  
  uVar25 = param_4[2];
  uVar30 = param_4[3];
  uVar31 = *param_4;
  uVar5 = param_4[1];
  uVar6 = param_4[4];
  uVar7 = param_4[5];
  uVar8 = param_4[6];
  uVar9 = param_4[7];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004fcc90(&local_c8,param_6);
  FUN_004fcde0(&local_148,&local_c8);
  local_2c8 = local_148 - 0x1000000010;
  lStack_2c0 = local_140 + 0xfffffffff + (ulong)(0x100000000f < local_148);
  lStack_2b0 = local_130 + 0x1000000000;
  local_2b8 = local_138;
  local_2a8 = local_128 - 0xffffffff0;
  lStack_2a0 = local_120 + 0xfffffffff + (ulong)(0xfffffffef < local_128);
  local_298 = local_118 - 0xffffffff0;
  lStack_290 = local_110 + 0xfffffffff + (ulong)(0xfffffffef < local_118);
  FUN_004fd280(&local_2c8,&local_148);
  FUN_004fcc90(&local_c8,param_5);
  FUN_004fcde0(&local_148,&local_c8);
  local_288 = local_148 - 0x1000000010;
  lStack_280 = local_140 + 0xfffffffff + (ulong)(0x100000000f < local_148);
  local_278 = local_138;
  lStack_270 = local_130 + 0x1000000000;
  local_268 = local_128 - 0xffffffff0;
  lStack_260 = local_120 + 0xfffffffff + (ulong)(0xfffffffef < local_128);
  local_258 = local_118 - 0xffffffff0;
  lStack_250 = local_110 + 0xfffffffff + (ulong)(0xfffffffef < local_118);
  FUN_004fd280(&local_288,&local_148);
  FUN_004fcc90(local_308,&local_288);
  FUN_004fcc90(&local_c8,param_4);
  FUN_004fcfa0(&local_148,local_308,&local_c8);
  local_248 = local_148 - 0x1000000010;
  lStack_240 = local_140 + 0xfffffffff + (ulong)(0x100000000f < local_148);
  local_238 = local_138;
  lStack_230 = local_130 + 0x1000000000;
  local_228 = local_128 - 0xffffffff0;
  lStack_220 = local_120 + 0xfffffffff + (ulong)(0xfffffffef < local_128);
  local_218 = local_118 - 0xffffffff0;
  lStack_210 = local_110 + 0xfffffffff + (ulong)(0xfffffffef < local_118);
  FUN_004fd280(&local_248,&local_148);
  lVar15 = lStack_290;
  uVar14 = local_298;
  lVar13 = lStack_2a0;
  uVar12 = local_2a8;
  lVar11 = lStack_2b0;
  uVar10 = local_2b8;
  lVar28 = lStack_2c0;
  uVar29 = local_2c8;
  local_1c8 = (-local_2c8 - 0x20000000200) + uVar31;
  local_1c0 = ((0x1ffffffffff - lStack_2c0) - (ulong)(0xfffffdfffffffe00 < local_2c8)) + uVar5 +
              (ulong)CARRY8(-local_2c8 - 0x20000000200,uVar31);
  local_1b8 = -local_2b8 + uVar25;
  local_1b0 = ((0x20000000000 - lStack_2b0) - (ulong)(local_2b8 != 0)) + uVar30 +
              (ulong)CARRY8(-local_2b8,uVar25);
  local_1a8 = (-local_2a8 - 0x1fffffffe00) + uVar6;
  local_1a0 = ((0x1ffffffffff - lStack_2a0) - (ulong)(0xfffffe0000000200 < local_2a8)) + uVar7 +
              (ulong)CARRY8(-local_2a8 - 0x1fffffffe00,uVar6);
  local_198 = (-local_298 - 0x1fffffffe00) + uVar8;
  local_190 = ((0x1ffffffffff - lStack_290) - (ulong)(0xfffffe0000000200 < local_298)) + uVar9 +
              (ulong)CARRY8(-local_298 - 0x1fffffffe00,uVar8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar31 + local_2c8;
  local_188 = SUB168(auVar1 * ZEXT816(3),0);
  local_180 = SUB168(auVar1 * ZEXT816(3),8) +
              (uVar5 + lStack_2c0 + (ulong)CARRY8(uVar31,local_2c8)) * 3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar25 + local_2b8;
  local_178 = SUB168(auVar2 * ZEXT816(3),0);
  local_170 = SUB168(auVar2 * ZEXT816(3),8) +
              (uVar30 + lStack_2b0 + (ulong)CARRY8(uVar25,local_2b8)) * 3;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6 + local_2a8;
  local_168 = SUB168(auVar3 * ZEXT816(3),0);
  local_160 = SUB168(auVar3 * ZEXT816(3),8) +
              (uVar7 + lStack_2a0 + (ulong)CARRY8(uVar6,local_2a8)) * 3;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar8 + local_298;
  local_158 = SUB168(auVar4 * ZEXT816(3),0);
  local_150 = SUB168(auVar4 * ZEXT816(3),8) +
              (uVar9 + lStack_290 + (ulong)CARRY8(uVar8,local_298)) * 3;
  FUN_004fcc90(&local_208,&local_1c8);
  FUN_004fcc90(&local_c8,&local_188);
  FUN_004fcfa0(&local_148,&local_208,&local_c8);
  local_208 = local_148 - 0x1000000010;
  local_200 = local_140 + 0xfffffffff + (ulong)(0x100000000f < local_148);
  local_1f0 = local_130 + 0x1000000000;
  local_1f8 = local_138;
  local_1e8 = local_128 - 0xffffffff0;
  local_1e0 = local_120 + 0xfffffffff + (ulong)(0xfffffffef < local_128);
  local_1d8 = local_118 - 0xffffffff0;
  local_1d0 = local_110 + 0xfffffffff + (ulong)(0xfffffffef < local_118);
  FUN_004fd280(&local_208,&local_148);
  FUN_004fcc90(local_2e8,&local_208);
  FUN_004fcde0(&local_148,local_2e8);
  *param_1 = local_148 - 0x1000000010;
  param_1[1] = local_140 + 0xfffffffff + (ulong)(0x100000000f < local_148);
  param_1[2] = local_138;
  param_1[3] = local_130 + 0x1000000000;
  param_1[4] = local_128 - 0xffffffff0;
  param_1[5] = local_120 + 0xfffffffff + (ulong)(0xfffffffef < local_128);
  param_1[6] = local_118 - 0xffffffff0;
  param_1[7] = local_110 + 0xfffffffff + (ulong)(0xfffffffef < local_118);
  FUN_004fd280(param_1,&local_148);
  lVar24 = lStack_210;
  uVar23 = local_218;
  lVar22 = lStack_220;
  uVar9 = local_228;
  lVar21 = lStack_230;
  uVar8 = local_238;
  lVar20 = lStack_240;
  uVar7 = local_248;
  lVar19 = lStack_250;
  uVar6 = local_258;
  lVar18 = lStack_260;
  uVar5 = local_268;
  lVar17 = lStack_270;
  uVar31 = local_278;
  lVar16 = lStack_280;
  uVar30 = local_288;
  uVar26 = local_248 * -8 - 0x20000000200;
  uVar25 = *param_1;
  *param_1 = *param_1 + uVar26;
  param_1[1] = param_1[1] +
               ((0x1ffffffffff - (lStack_240 << 3 | local_248 >> 0x3d)) -
               (ulong)(0xfffffdfffffffe00 < local_248 * 8)) + (ulong)CARRY8(uVar25,uVar26);
  uVar25 = param_1[2];
  param_1[2] = local_238 * -8 + param_1[2];
  param_1[3] = ((0x20000000000 - (lStack_230 << 3 | local_238 >> 0x3d)) -
               (ulong)((local_238 & 0x1fffffffffffffff) != 0)) + param_1[3] +
               (ulong)CARRY8(local_238 * -8,uVar25);
  uVar26 = local_228 * -8 - 0x1fffffffe00;
  uVar25 = param_1[4];
  param_1[4] = uVar26 + param_1[4];
  param_1[5] = ((0x1ffffffffff - (lStack_220 << 3 | local_228 >> 0x3d)) -
               (ulong)(0xfffffe0000000200 < local_228 * 8)) + param_1[5] +
               (ulong)CARRY8(uVar26,uVar25);
  uVar26 = local_218 * -8 - 0x1fffffffe00;
  uVar25 = param_1[6];
  param_1[6] = uVar26 + param_1[6];
  param_1[7] = ((0x1ffffffffff - (lStack_210 << 3 | local_218 >> 0x3d)) -
               (ulong)(0xfffffe0000000200 < local_218 * 8)) + param_1[7] +
               (ulong)CARRY8(uVar26,uVar25);
  local_1c8 = *param_5 + *param_6;
  local_1c0 = param_5[1] + param_6[1] + (ulong)CARRY8(*param_5,*param_6);
  local_1b8 = param_5[2] + param_6[2];
  local_1b0 = param_5[3] + param_6[3] + (ulong)CARRY8(param_5[2],param_6[2]);
  local_1a8 = param_5[4] + param_6[4];
  local_1a0 = param_5[5] + param_6[5] + (ulong)CARRY8(param_5[4],param_6[4]);
  local_198 = param_5[6] + param_6[6];
  local_190 = param_5[7] + param_6[7] + (ulong)CARRY8(param_5[6],param_6[6]);
  FUN_004fcc90(&local_c8,&local_1c8);
  FUN_004fcde0(&local_148,&local_c8);
  *param_3 = local_148 - 0x1000000010;
  param_3[1] = local_140 + 0xfffffffff + (ulong)(0x100000000f < local_148);
  param_3[2] = local_138;
  param_3[3] = local_130 + 0x1000000000;
  param_3[4] = local_128 - 0xffffffff0;
  param_3[5] = local_120 + 0xfffffffff + (ulong)(0xfffffffef < local_128);
  param_3[6] = local_118 - 0xffffffff0;
  param_3[7] = local_110 + 0xfffffffff + (ulong)(0xfffffffef < local_118);
  FUN_004fd280(param_3,&local_148);
  uVar26 = uVar30 + uVar29;
  uVar27 = -uVar26 - 0x20000000200;
  uVar25 = *param_3;
  *param_3 = *param_3 + uVar27;
  param_3[1] = param_3[1] +
               ((0x1ffffffffff - (lVar16 + lVar28 + (ulong)CARRY8(uVar30,uVar29))) -
               (ulong)(0xfffffdfffffffe00 < uVar26)) + (ulong)CARRY8(uVar25,uVar27);
  lVar28 = uVar31 + uVar10;
  uVar30 = -lVar28;
  uVar25 = param_3[2];
  uVar29 = uVar5 + uVar12;
  param_3[2] = uVar30 + param_3[2];
  uVar26 = -uVar29 - 0x1fffffffe00;
  param_3[3] = ((0x20000000000 - (lVar17 + lVar11 + (ulong)CARRY8(uVar31,uVar10))) -
               (ulong)(lVar28 != 0)) + param_3[3] + (ulong)CARRY8(uVar30,uVar25);
  uVar25 = param_3[4];
  param_3[4] = uVar26 + param_3[4];
  param_3[5] = ((0x1ffffffffff - (lVar18 + lVar13 + (ulong)CARRY8(uVar5,uVar12))) -
               (ulong)(0xfffffe0000000200 < uVar29)) + param_3[5] + (ulong)CARRY8(uVar26,uVar25);
  uVar30 = uVar6 + uVar14;
  uVar31 = -uVar30 - 0x1fffffffe00;
  uVar25 = param_3[6];
  param_3[6] = uVar31 + param_3[6];
  param_3[7] = ((0x1ffffffffff - (lVar19 + lVar15 + (ulong)CARRY8(uVar6,uVar14))) -
               (ulong)(0xfffffe0000000200 < uVar30)) + param_3[7] + (ulong)CARRY8(uVar31,uVar25);
  uVar25 = uVar7 * 4;
  uVar30 = uVar25 - 0x80000000800;
  local_248 = uVar30 - *param_1;
  lStack_240 = (((lVar20 << 2 | uVar7 >> 0x3e) + 0x7ffffffffff + (ulong)(0x800000007ff < uVar25)) -
               param_1[1]) - (ulong)(uVar30 < *param_1);
  uVar25 = uVar8 * 4;
  local_238 = uVar25 - param_1[2];
  lStack_230 = (((lVar21 << 2 | uVar8 >> 0x3e) + 0x80000000000) - param_1[3]) -
               (ulong)(uVar25 < param_1[2]);
  uVar25 = uVar9 * 4;
  uVar30 = uVar25 - 0x7fffffff800;
  local_228 = uVar30 - param_1[4];
  lStack_220 = (((lVar22 << 2 | uVar9 >> 0x3e) + 0x7ffffffffff + (ulong)(0x7fffffff7ff < uVar25)) -
               param_1[5]) - (ulong)(uVar30 < param_1[4]);
  uVar25 = uVar23 * 4;
  uVar30 = uVar25 - 0x7fffffff800;
  local_218 = uVar30 - param_1[6];
  lStack_210 = (((lVar24 << 2 | uVar23 >> 0x3e) + 0x7ffffffffff + (ulong)(0x7fffffff7ff < uVar25)) -
               param_1[7]) - (ulong)(uVar30 < param_1[6]);
  FUN_004fcc90(&local_c8,&local_248);
  FUN_004fcfa0(&local_148,local_2e8,&local_c8);
  FUN_004fcde0(&local_c8,local_308);
  local_c0 = local_c0 << 3 | local_c8 >> 0x3d;
  local_c8 = local_c8 << 3;
  local_b0 = local_b0 << 3 | local_b8 >> 0x3d;
  local_b8 = local_b8 << 3;
  local_a0 = local_a0 << 3 | local_a8 >> 0x3d;
  local_a8 = local_a8 << 3;
  local_90 = local_90 << 3 | local_98 >> 0x3d;
  local_98 = local_98 << 3;
  local_80 = local_80 << 3 | local_88 >> 0x3d;
  local_88 = local_88 << 3;
  local_70 = local_70 << 3 | local_78 >> 0x3d;
  local_78 = local_78 << 3;
  local_60 = local_60 << 3 | local_68 >> 0x3d;
  local_68 = local_68 << 3;
  local_50 = local_50 << 3 | local_58 >> 0x3d;
  local_58 = local_58 << 3;
  FUN_004fcaf0(&local_148,&local_c8);
  *param_2 = local_148 - 0x20000000200;
  param_2[1] = local_140 + 0x1ffffffffff + (ulong)(0x200000001ff < local_148);
  param_2[2] = local_138;
  param_2[3] = local_130 + 0x20000000000;
  param_2[4] = local_128 - 0x1fffffffe00;
  param_2[5] = local_120 + 0x1ffffffffff + (ulong)(0x1fffffffdff < local_128);
  param_2[6] = local_118 - 0x1fffffffe00;
  param_2[7] = local_110 + 0x1ffffffffff + (ulong)(0x1fffffffdff < local_118);
  FUN_004fd280(param_2,&local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

