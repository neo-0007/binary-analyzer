
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_point_add_affinex
               (undefined8 param_1,undefined8 *param_2,undefined1 (*param_3) [16],undefined8 param_4
               )

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_R13;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar18;
  uint uVar19;
  undefined1 auVar17 [16];
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar27;
  uint uVar28;
  undefined1 auVar26 [16];
  uint uVar29;
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  undefined1 local_238 [24];
  undefined8 uStack_220;
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  long local_1d8 [4];
  undefined8 local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_198 [3];
  ulong local_180;
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_d8 = *param_2;
  uStack_d0 = param_2[1];
  local_c8 = param_2[2];
  uStack_c0 = param_2[3];
  local_b8 = param_2[4];
  uStack_b0 = param_2[5];
  local_a8 = param_2[6];
  uStack_a0 = param_2[7];
  local_98 = *(undefined1 (*) [16])(param_2 + 8);
  local_88 = *(undefined1 (*) [16])(param_2 + 10);
  auVar26 = local_88 | local_98;
  local_78 = *param_3;
  auVar17._4_4_ = auVar26._0_4_;
  auVar17._0_4_ = auVar26._4_4_;
  auVar17._8_4_ = auVar26._12_4_;
  auVar17._12_4_ = auVar26._8_4_;
  local_68 = param_3[1];
  local_58 = param_3[2];
  local_48 = param_3[3];
  uVar24 = SUB164(auVar26 | auVar17,0) | SUB164(auVar26 | auVar17,8);
  uVar22 = 0;
  auVar17 = local_48 | local_58 | local_68 | local_78;
  uStack_220 = 0x5eee47;
  __ecp_nistz256_sqr_montx(param_1,local_1f8,param_2 + -8,param_2[8],param_4,param_2[0xb]);
  uVar25 = -(uint)(uVar24 == uVar22);
  auVar26._4_4_ = auVar17._0_4_;
  auVar26._0_4_ = auVar17._4_4_;
  auVar26._8_4_ = auVar17._12_4_;
  auVar26._12_4_ = auVar17._8_4_;
  uVar21 = -(uint)(SUB164(auVar26 | auVar17,0) == 0 && SUB164(auVar26 | auVar17,8) == 0);
  uStack_220 = 0x5eee8c;
  uVar22 = uVar21;
  uVar24 = uVar21;
  uVar23 = uVar21;
  uVar27 = uVar25;
  uVar28 = uVar25;
  uVar29 = uVar25;
  __ecp_nistz256_mul_montx(local_218,local_278,*(undefined8 *)*param_3);
  uStack_220 = 0x5eee9e;
  __ecp_nistz256_sub_fromx(local_1d8);
  uStack_220 = 0x5eeed1;
  __ecp_nistz256_mul_montx(local_1f8,local_278,local_98._0_8_);
  uStack_220 = 0x5eef07;
  __ecp_nistz256_mul_montx(&local_f8,local_258,local_98._0_8_);
  uStack_220 = 0x5eef3a;
  __ecp_nistz256_mul_montx(local_1f8,local_278,local_58._0_8_);
  uStack_220 = 0x5eef4c;
  __ecp_nistz256_sub_fromx(&local_1b8);
  uStack_220 = 0x5eef72;
  __ecp_nistz256_sqr_montx(local_198,local_258,local_1d8[0]);
  uStack_220 = 0x5eef98;
  uVar7 = local_1a0;
  __ecp_nistz256_sqr_montx(local_158,local_238,local_1b8);
  uStack_220 = 0x5eefce;
  __ecp_nistz256_mul_montx(local_178,local_258,local_198[0]);
  uStack_220 = 0x5ef00b;
  __ecp_nistz256_mul_montx(local_218,local_218,local_d8);
  lVar3 = local_180 * 2;
  uVar11 = unaff_R13 * 2 + (ulong)CARRY8(local_180,local_180);
  uVar1 = (ulong)(CARRY8(unaff_R13,unaff_R13) ||
                 CARRY8(unaff_R13 * 2,(ulong)CARRY8(local_180,local_180)));
  uVar8 = uVar7 * 2 + uVar1;
  uVar1 = (ulong)(CARRY8(uVar7,uVar7) || CARRY8(uVar7 * 2,uVar1));
  uVar9 = local_198[0] * 2 + uVar1;
  uVar7 = (ulong)(uVar11 < local_1b0 || uVar11 - local_1b0 < (ulong)(lVar3 != -1));
  uVar2 = (ulong)(uVar8 < uVar7);
  uVar10 = (uVar9 - local_1a8) - uVar2;
  uVar4 = (uVar11 - local_1b0) - (ulong)(lVar3 != -1);
  lVar5 = lVar3 + 1;
  uVar7 = uVar8 - uVar7;
  if ((CARRY8(local_198[0],local_198[0]) || CARRY8(local_198[0] * 2,uVar1)) <
      (uVar9 < local_1a8 || uVar9 - local_1a8 < uVar2)) {
    uVar10 = uVar9;
    uVar4 = uVar11;
    lVar5 = lVar3;
    uVar7 = uVar8;
  }
  uStack_220 = 0x5ef068;
  __ecp_nistz256_subx();
  uStack_220 = 0x5ef07d;
  __ecp_nistz256_sub_fromx(&local_138);
  plVar6 = local_1d8;
  uStack_220 = 0x5ef09a;
  __ecp_nistz256_subx();
  *plVar6 = lVar5;
  plVar6[1] = uVar4;
  plVar6[2] = uVar7;
  plVar6[3] = uVar10;
  uStack_220 = 0x5ef0e8;
  __ecp_nistz256_mul_montx(local_1f8,local_1f8,local_b8);
  uStack_220 = 0x5ef115;
  __ecp_nistz256_mul_montx(local_1d8,local_258,local_1b8);
  uStack_220 = 0x5ef127;
  puVar12 = (uint *)__ecp_nistz256_sub_fromx(&local_118);
  uVar13 = uVar27 & _UNK_005eb0a4;
  uVar14 = uVar28 & _UNK_005eb0a8;
  uVar15 = uVar29 & _UNK_005eb0ac;
  uVar16 = uVar25 & _DAT_005eb0b0;
  uVar18 = uVar27 & _UNK_005eb0b4;
  uVar19 = uVar28 & _UNK_005eb0b8;
  uVar20 = uVar29 & _UNK_005eb0bc;
  puVar12[0x10] = uVar21 & local_98._0_4_ | ~uVar21 & (uVar25 & _DAT_005eb0a0 | ~uVar25 & local_f8);
  puVar12[0x11] = uVar22 & local_98._4_4_ | ~uVar22 & (uVar13 | ~uVar27 & uStack_f4);
  puVar12[0x12] = uVar24 & local_98._8_4_ | ~uVar24 & (uVar14 | ~uVar28 & uStack_f0);
  puVar12[0x13] = uVar23 & local_98._12_4_ | ~uVar23 & (uVar15 | ~uVar29 & uStack_ec);
  puVar12[0x14] = uVar21 & local_88._0_4_ | ~uVar21 & (uVar16 | ~uVar25 & local_e8);
  puVar12[0x15] = uVar22 & local_88._4_4_ | ~uVar22 & (uVar18 | ~uVar27 & uStack_e4);
  puVar12[0x16] = uVar24 & local_88._8_4_ | ~uVar24 & (uVar19 | ~uVar28 & uStack_e0);
  puVar12[0x17] = uVar23 & local_88._12_4_ | ~uVar23 & (uVar20 | ~uVar29 & uStack_dc);
  *puVar12 = uVar21 & (uint)local_d8 | ~uVar21 & (uVar25 & local_78._0_4_ | ~uVar25 & local_138);
  puVar12[1] = uVar22 & local_d8._4_4_ | ~uVar22 & (uVar27 & local_78._4_4_ | ~uVar27 & uStack_134);
  puVar12[2] = uVar24 & (uint)uStack_d0 | ~uVar24 & (uVar28 & local_78._8_4_ | ~uVar28 & uStack_130)
  ;
  puVar12[3] = uVar23 & uStack_d0._4_4_ |
               ~uVar23 & (uVar29 & local_78._12_4_ | ~uVar29 & uStack_12c);
  puVar12[4] = uVar21 & (uint)local_c8 | ~uVar21 & (uVar25 & local_68._0_4_ | ~uVar25 & local_128);
  puVar12[5] = uVar22 & local_c8._4_4_ | ~uVar22 & (uVar27 & local_68._4_4_ | ~uVar27 & uStack_124);
  puVar12[6] = uVar24 & (uint)uStack_c0 | ~uVar24 & (uVar28 & local_68._8_4_ | ~uVar28 & uStack_120)
  ;
  puVar12[7] = uVar23 & uStack_c0._4_4_ |
               ~uVar23 & (uVar29 & local_68._12_4_ | ~uVar29 & uStack_11c);
  puVar12[8] = uVar21 & (uint)local_b8 | ~uVar21 & (uVar25 & local_58._0_4_ | ~uVar25 & local_118);
  puVar12[9] = uVar22 & local_b8._4_4_ | ~uVar22 & (uVar27 & local_58._4_4_ | ~uVar27 & uStack_114);
  puVar12[10] = uVar24 & (uint)uStack_b0 |
                ~uVar24 & (uVar28 & local_58._8_4_ | ~uVar28 & uStack_110);
  puVar12[0xb] = uVar23 & uStack_b0._4_4_ |
                 ~uVar23 & (uVar29 & local_58._12_4_ | ~uVar29 & uStack_10c);
  puVar12[0xc] = uVar21 & (uint)local_a8 | ~uVar21 & (uVar25 & local_48._0_4_ | ~uVar25 & local_108)
  ;
  puVar12[0xd] = uVar22 & local_a8._4_4_ |
                 ~uVar22 & (uVar27 & local_48._4_4_ | ~uVar27 & uStack_104);
  puVar12[0xe] = uVar24 & (uint)uStack_a0 |
                 ~uVar24 & (uVar28 & local_48._8_4_ | ~uVar28 & uStack_100);
  puVar12[0xf] = uVar23 & uStack_a0._4_4_ |
                 ~uVar23 & (uVar29 & local_48._12_4_ | ~uVar29 & uStack_fc);
  return;
}

