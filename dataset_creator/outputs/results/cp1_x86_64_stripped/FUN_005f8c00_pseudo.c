
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f8c00(undefined8 param_1,undefined8 *param_2,undefined1 (*param_3) [16])

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
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
  uint uVar23;
  undefined1 auVar22 [16];
  uint uVar24;
  uint uVar25;
  uint uVar29;
  uint uVar30;
  undefined1 auVar27 [16];
  uint uVar26;
  uint uVar31;
  undefined1 auVar28 [16];
  undefined1 auStack_278 [32];
  undefined1 auStack_258 [32];
  undefined1 auStack_238 [24];
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
  
  if ((DAT_0094b5a0 & 0x80100) != 0x80100) {
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
    auVar27 = local_88 | local_98;
    local_78 = *param_3;
    auVar17._4_4_ = auVar27._0_4_;
    auVar17._0_4_ = auVar27._4_4_;
    auVar17._8_4_ = auVar27._12_4_;
    auVar17._12_4_ = auVar27._8_4_;
    local_68 = param_3[1];
    local_58 = param_3[2];
    local_48 = param_3[3];
    uVar25 = SUB164(auVar27 | auVar17,0) | SUB164(auVar27 | auVar17,8);
    uVar23 = 0;
    auVar27 = local_48 | local_58 | local_68 | local_78;
    uStack_220 = 0x5f8cfe;
    FUN_005f7540(param_1,local_1f8,param_2 + 8,param_3,DAT_0094b5a0 & 0x80100,param_2[0xb]);
    uVar26 = -(uint)(uVar25 == uVar23);
    auVar22._4_4_ = auVar27._0_4_;
    auVar22._0_4_ = auVar27._4_4_;
    auVar22._8_4_ = auVar27._12_4_;
    auVar22._12_4_ = auVar27._8_4_;
    uVar21 = -(uint)(SUB164(auVar22 | auVar27,0) == 0 && SUB164(auVar22 | auVar27,8) == 0);
    uStack_220 = 0x5f8d43;
    uVar23 = uVar21;
    uVar25 = uVar21;
    uVar24 = uVar21;
    uVar29 = uVar26;
    uVar30 = uVar26;
    uVar31 = uVar26;
    FUN_005f7280(local_218,local_1f8);
    uStack_220 = 0x5f8d55;
    FUN_005f80a0(local_1d8);
    uStack_220 = 0x5f8d88;
    FUN_005f7280(local_1f8,local_1f8);
    uStack_220 = 0x5f8dbe;
    FUN_005f7280(&local_f8,local_1d8);
    uStack_220 = 0x5f8df1;
    FUN_005f7280(local_1f8,local_1f8);
    uStack_220 = 0x5f8e03;
    FUN_005f80a0(&local_1b8);
    uStack_220 = 0x5f8e29;
    FUN_005f7540(local_198,local_1d8);
    uStack_220 = 0x5f8e4f;
    FUN_005f7540(local_158,&local_1b8);
    uStack_220 = 0x5f8e85;
    FUN_005f7280(local_178,local_1d8);
    uStack_220 = 0x5f8ec6;
    FUN_005f7280(local_218,local_198);
    lVar3 = local_180 * 2;
    uVar11 = unaff_R13 * 2 + (ulong)CARRY8(local_180,local_180);
    uVar1 = (ulong)(CARRY8(unaff_R13,unaff_R13) ||
                   CARRY8(unaff_R13 * 2,(ulong)CARRY8(local_180,local_180)));
    uVar7 = local_1a0 * 2 + uVar1;
    uVar1 = (ulong)(CARRY8(local_1a0,local_1a0) || CARRY8(local_1a0 * 2,uVar1));
    uVar9 = local_198[0] * 2 + uVar1;
    uVar8 = (ulong)(uVar11 < local_1b0 || uVar11 - local_1b0 < (ulong)(lVar3 != -1));
    uVar2 = (ulong)(uVar7 < uVar8);
    uVar10 = (uVar9 - local_1a8) - uVar2;
    lVar4 = lVar3 + 1;
    uVar5 = (uVar11 - local_1b0) - (ulong)(lVar3 != -1);
    uVar8 = uVar7 - uVar8;
    if ((CARRY8(local_198[0],local_198[0]) || CARRY8(local_198[0] * 2,uVar1)) <
        (uVar9 < local_1a8 || uVar9 - local_1a8 < uVar2)) {
      uVar10 = uVar9;
      lVar4 = lVar3;
      uVar5 = uVar11;
      uVar8 = uVar7;
    }
    uStack_220 = 0x5f8f23;
    FUN_005f8100();
    uStack_220 = 0x5f8f38;
    FUN_005f80a0(&local_138);
    plVar6 = local_1d8;
    uStack_220 = 0x5f8f55;
    FUN_005f8100();
    *plVar6 = lVar4;
    plVar6[1] = uVar5;
    plVar6[2] = uVar8;
    plVar6[3] = uVar10;
    uStack_220 = 0x5f8fa6;
    FUN_005f7280(local_1f8,local_178);
    uStack_220 = 0x5f8fd3;
    FUN_005f7280(local_1d8,local_1d8);
    uStack_220 = 0x5f8fe5;
    puVar12 = (uint *)FUN_005f80a0(&local_118);
    uVar13 = uVar29 & _UNK_005f60a4;
    uVar14 = uVar30 & _UNK_005f60a8;
    uVar15 = uVar31 & _UNK_005f60ac;
    uVar16 = uVar26 & _DAT_005f60b0;
    uVar18 = uVar29 & _UNK_005f60b4;
    uVar19 = uVar30 & _UNK_005f60b8;
    uVar20 = uVar31 & _UNK_005f60bc;
    puVar12[0x10] =
         uVar21 & local_98._0_4_ | ~uVar21 & (uVar26 & _DAT_005f60a0 | ~uVar26 & local_f8);
    puVar12[0x11] = uVar23 & local_98._4_4_ | ~uVar23 & (uVar13 | ~uVar29 & uStack_f4);
    puVar12[0x12] = uVar25 & local_98._8_4_ | ~uVar25 & (uVar14 | ~uVar30 & uStack_f0);
    puVar12[0x13] = uVar24 & local_98._12_4_ | ~uVar24 & (uVar15 | ~uVar31 & uStack_ec);
    puVar12[0x14] = uVar21 & local_88._0_4_ | ~uVar21 & (uVar16 | ~uVar26 & local_e8);
    puVar12[0x15] = uVar23 & local_88._4_4_ | ~uVar23 & (uVar18 | ~uVar29 & uStack_e4);
    puVar12[0x16] = uVar25 & local_88._8_4_ | ~uVar25 & (uVar19 | ~uVar30 & uStack_e0);
    puVar12[0x17] = uVar24 & local_88._12_4_ | ~uVar24 & (uVar20 | ~uVar31 & uStack_dc);
    *puVar12 = uVar21 & (uint)local_d8 | ~uVar21 & (uVar26 & local_78._0_4_ | ~uVar26 & local_138);
    puVar12[1] = uVar23 & local_d8._4_4_ |
                 ~uVar23 & (uVar29 & local_78._4_4_ | ~uVar29 & uStack_134);
    puVar12[2] = uVar25 & (uint)uStack_d0 |
                 ~uVar25 & (uVar30 & local_78._8_4_ | ~uVar30 & uStack_130);
    puVar12[3] = uVar24 & uStack_d0._4_4_ |
                 ~uVar24 & (uVar31 & local_78._12_4_ | ~uVar31 & uStack_12c);
    puVar12[4] = uVar21 & (uint)local_c8 | ~uVar21 & (uVar26 & local_68._0_4_ | ~uVar26 & local_128)
    ;
    puVar12[5] = uVar23 & local_c8._4_4_ |
                 ~uVar23 & (uVar29 & local_68._4_4_ | ~uVar29 & uStack_124);
    puVar12[6] = uVar25 & (uint)uStack_c0 |
                 ~uVar25 & (uVar30 & local_68._8_4_ | ~uVar30 & uStack_120);
    puVar12[7] = uVar24 & uStack_c0._4_4_ |
                 ~uVar24 & (uVar31 & local_68._12_4_ | ~uVar31 & uStack_11c);
    puVar12[8] = uVar21 & (uint)local_b8 | ~uVar21 & (uVar26 & local_58._0_4_ | ~uVar26 & local_118)
    ;
    puVar12[9] = uVar23 & local_b8._4_4_ |
                 ~uVar23 & (uVar29 & local_58._4_4_ | ~uVar29 & uStack_114);
    puVar12[10] = uVar25 & (uint)uStack_b0 |
                  ~uVar25 & (uVar30 & local_58._8_4_ | ~uVar30 & uStack_110);
    puVar12[0xb] = uVar24 & uStack_b0._4_4_ |
                   ~uVar24 & (uVar31 & local_58._12_4_ | ~uVar31 & uStack_10c);
    puVar12[0xc] = uVar21 & (uint)local_a8 |
                   ~uVar21 & (uVar26 & local_48._0_4_ | ~uVar26 & local_108);
    puVar12[0xd] = uVar23 & local_a8._4_4_ |
                   ~uVar23 & (uVar29 & local_48._4_4_ | ~uVar29 & uStack_104);
    puVar12[0xe] = uVar25 & (uint)uStack_a0 |
                   ~uVar25 & (uVar30 & local_48._8_4_ | ~uVar30 & uStack_100);
    puVar12[0xf] = uVar24 & uStack_a0._4_4_ |
                   ~uVar24 & (uVar31 & local_48._12_4_ | ~uVar31 & uStack_fc);
    return;
  }
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
  auVar28 = local_88 | local_98;
  local_78 = *param_3;
  auVar27._4_4_ = auVar28._0_4_;
  auVar27._0_4_ = auVar28._4_4_;
  auVar27._8_4_ = auVar28._12_4_;
  auVar27._12_4_ = auVar28._8_4_;
  local_68 = param_3[1];
  local_58 = param_3[2];
  local_48 = param_3[3];
  uVar25 = SUB164(auVar28 | auVar27,0) | SUB164(auVar28 | auVar27,8);
  uVar23 = 0;
  auVar27 = local_48 | local_58 | local_68 | local_78;
  uStack_220 = 0x5f9e47;
  FUN_005f7960(param_1,local_1f8,param_2 + -8,param_2[8],0x80100,param_2[0xb]);
  uVar26 = -(uint)(uVar25 == uVar23);
  auVar28._4_4_ = auVar27._0_4_;
  auVar28._0_4_ = auVar27._4_4_;
  auVar28._8_4_ = auVar27._12_4_;
  auVar28._12_4_ = auVar27._8_4_;
  uVar21 = -(uint)(SUB164(auVar28 | auVar27,0) == 0 && SUB164(auVar28 | auVar27,8) == 0);
  uStack_220 = 0x5f9e8c;
  uVar23 = uVar21;
  uVar25 = uVar21;
  uVar24 = uVar21;
  uVar29 = uVar26;
  uVar30 = uVar26;
  uVar31 = uVar26;
  FUN_005f7700(local_218,auStack_278,*(undefined8 *)*param_3);
  uStack_220 = 0x5f9e9e;
  FUN_005f91e0(local_1d8);
  uStack_220 = 0x5f9ed1;
  FUN_005f7700(local_1f8,auStack_278,local_98._0_8_);
  uStack_220 = 0x5f9f07;
  FUN_005f7700(&local_f8,auStack_258,local_98._0_8_);
  uStack_220 = 0x5f9f3a;
  FUN_005f7700(local_1f8,auStack_278,local_58._0_8_);
  uStack_220 = 0x5f9f4c;
  FUN_005f91e0(&local_1b8);
  uStack_220 = 0x5f9f72;
  FUN_005f7960(local_198,auStack_258,local_1d8[0]);
  uStack_220 = 0x5f9f98;
  FUN_005f7960(local_158,auStack_238,local_1b8);
  uStack_220 = 0x5f9fce;
  FUN_005f7700(local_178,auStack_258,local_198[0]);
  uStack_220 = 0x5fa00b;
  FUN_005f7700(local_218,local_218,local_d8);
  lVar3 = local_180 * 2;
  uVar11 = unaff_R13 * 2 + (ulong)CARRY8(local_180,local_180);
  uVar1 = (ulong)(CARRY8(unaff_R13,unaff_R13) ||
                 CARRY8(unaff_R13 * 2,(ulong)CARRY8(local_180,local_180)));
  uVar7 = local_1a0 * 2 + uVar1;
  uVar1 = (ulong)(CARRY8(local_1a0,local_1a0) || CARRY8(local_1a0 * 2,uVar1));
  uVar9 = local_198[0] * 2 + uVar1;
  uVar8 = (ulong)(uVar11 < local_1b0 || uVar11 - local_1b0 < (ulong)(lVar3 != -1));
  uVar2 = (ulong)(uVar7 < uVar8);
  uVar10 = (uVar9 - local_1a8) - uVar2;
  uVar5 = (uVar11 - local_1b0) - (ulong)(lVar3 != -1);
  lVar4 = lVar3 + 1;
  uVar8 = uVar7 - uVar8;
  if ((CARRY8(local_198[0],local_198[0]) || CARRY8(local_198[0] * 2,uVar1)) <
      (uVar9 < local_1a8 || uVar9 - local_1a8 < uVar2)) {
    uVar10 = uVar9;
    uVar5 = uVar11;
    lVar4 = lVar3;
    uVar8 = uVar7;
  }
  uStack_220 = 0x5fa068;
  FUN_005f9240();
  uStack_220 = 0x5fa07d;
  FUN_005f91e0(&local_138);
  plVar6 = local_1d8;
  uStack_220 = 0x5fa09a;
  FUN_005f9240();
  *plVar6 = lVar4;
  plVar6[1] = uVar5;
  plVar6[2] = uVar8;
  plVar6[3] = uVar10;
  uStack_220 = 0x5fa0e8;
  FUN_005f7700(local_1f8,local_1f8,local_b8);
  uStack_220 = 0x5fa115;
  FUN_005f7700(local_1d8,auStack_258,local_1b8);
  uStack_220 = 0x5fa127;
  puVar12 = (uint *)FUN_005f91e0(&local_118);
  uVar13 = uVar29 & _UNK_005f60a4;
  uVar14 = uVar30 & _UNK_005f60a8;
  uVar15 = uVar31 & _UNK_005f60ac;
  uVar16 = uVar26 & _DAT_005f60b0;
  uVar18 = uVar29 & _UNK_005f60b4;
  uVar19 = uVar30 & _UNK_005f60b8;
  uVar20 = uVar31 & _UNK_005f60bc;
  puVar12[0x10] = uVar21 & local_98._0_4_ | ~uVar21 & (uVar26 & _DAT_005f60a0 | ~uVar26 & local_f8);
  puVar12[0x11] = uVar23 & local_98._4_4_ | ~uVar23 & (uVar13 | ~uVar29 & uStack_f4);
  puVar12[0x12] = uVar25 & local_98._8_4_ | ~uVar25 & (uVar14 | ~uVar30 & uStack_f0);
  puVar12[0x13] = uVar24 & local_98._12_4_ | ~uVar24 & (uVar15 | ~uVar31 & uStack_ec);
  puVar12[0x14] = uVar21 & local_88._0_4_ | ~uVar21 & (uVar16 | ~uVar26 & local_e8);
  puVar12[0x15] = uVar23 & local_88._4_4_ | ~uVar23 & (uVar18 | ~uVar29 & uStack_e4);
  puVar12[0x16] = uVar25 & local_88._8_4_ | ~uVar25 & (uVar19 | ~uVar30 & uStack_e0);
  puVar12[0x17] = uVar24 & local_88._12_4_ | ~uVar24 & (uVar20 | ~uVar31 & uStack_dc);
  *puVar12 = uVar21 & (uint)local_d8 | ~uVar21 & (uVar26 & local_78._0_4_ | ~uVar26 & local_138);
  puVar12[1] = uVar23 & local_d8._4_4_ | ~uVar23 & (uVar29 & local_78._4_4_ | ~uVar29 & uStack_134);
  puVar12[2] = uVar25 & (uint)uStack_d0 | ~uVar25 & (uVar30 & local_78._8_4_ | ~uVar30 & uStack_130)
  ;
  puVar12[3] = uVar24 & uStack_d0._4_4_ |
               ~uVar24 & (uVar31 & local_78._12_4_ | ~uVar31 & uStack_12c);
  puVar12[4] = uVar21 & (uint)local_c8 | ~uVar21 & (uVar26 & local_68._0_4_ | ~uVar26 & local_128);
  puVar12[5] = uVar23 & local_c8._4_4_ | ~uVar23 & (uVar29 & local_68._4_4_ | ~uVar29 & uStack_124);
  puVar12[6] = uVar25 & (uint)uStack_c0 | ~uVar25 & (uVar30 & local_68._8_4_ | ~uVar30 & uStack_120)
  ;
  puVar12[7] = uVar24 & uStack_c0._4_4_ |
               ~uVar24 & (uVar31 & local_68._12_4_ | ~uVar31 & uStack_11c);
  puVar12[8] = uVar21 & (uint)local_b8 | ~uVar21 & (uVar26 & local_58._0_4_ | ~uVar26 & local_118);
  puVar12[9] = uVar23 & local_b8._4_4_ | ~uVar23 & (uVar29 & local_58._4_4_ | ~uVar29 & uStack_114);
  puVar12[10] = uVar25 & (uint)uStack_b0 |
                ~uVar25 & (uVar30 & local_58._8_4_ | ~uVar30 & uStack_110);
  puVar12[0xb] = uVar24 & uStack_b0._4_4_ |
                 ~uVar24 & (uVar31 & local_58._12_4_ | ~uVar31 & uStack_10c);
  puVar12[0xc] = uVar21 & (uint)local_a8 | ~uVar21 & (uVar26 & local_48._0_4_ | ~uVar26 & local_108)
  ;
  puVar12[0xd] = uVar23 & local_a8._4_4_ |
                 ~uVar23 & (uVar29 & local_48._4_4_ | ~uVar29 & uStack_104);
  puVar12[0xe] = uVar25 & (uint)uStack_a0 |
                 ~uVar25 & (uVar30 & local_48._8_4_ | ~uVar30 & uStack_100);
  puVar12[0xf] = uVar24 & uStack_a0._4_4_ |
                 ~uVar24 & (uVar31 & local_48._12_4_ | ~uVar31 & uStack_fc);
  return;
}

