
undefined8
FUN_004e3ff0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
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
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  ulong uVar53;
  ulong uVar54;
  long lVar55;
  long lVar56;
  ulong uVar57;
  long lVar58;
  ulong uVar59;
  long lVar60;
  undefined8 uVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long in_FS_OFFSET;
  undefined1 local_1ac [4];
  undefined1 local_1a8 [160];
  byte local_108;
  byte local_107;
  undefined4 local_106;
  byte local_102;
  byte local_101;
  undefined2 uStack_100;
  undefined1 uStack_fe;
  undefined2 uStack_fd;
  byte bStack_fb;
  byte local_fa;
  undefined4 local_f9;
  byte local_f5;
  byte local_f4;
  byte local_f3;
  byte local_f2;
  undefined4 local_f1;
  byte local_ed;
  uint local_ec;
  undefined1 local_e8 [32];
  byte local_c8;
  byte local_c7;
  undefined4 local_c6;
  byte local_c2;
  byte local_c1;
  undefined2 uStack_c0;
  undefined1 uStack_be;
  undefined2 uStack_bd;
  byte local_bb;
  byte local_ba;
  undefined4 local_b9;
  byte local_b5;
  byte local_b4;
  byte local_b3;
  byte local_b2;
  undefined4 local_b1;
  byte local_ad;
  uint local_ac;
  byte local_88;
  byte local_87;
  undefined4 local_86;
  byte local_82;
  byte local_81;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  undefined2 uStack_7d;
  byte local_7b;
  byte local_7a;
  undefined4 local_79;
  byte local_75;
  byte local_74;
  byte local_73;
  byte local_72;
  undefined4 local_71;
  byte local_6d;
  uint local_6c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_004069d0(param_6,"SHA512",param_7);
  lVar3 = FUN_00405f40();
  if ((((lVar2 != 0) && (lVar3 != 0)) && (iVar1 = FUN_00407430(lVar3,lVar2,0), iVar1 != 0)) &&
     (iVar1 = FUN_00405f60(lVar3,param_5,0x20), iVar1 != 0)) {
    iVar1 = FUN_00406090(lVar3,&local_108,local_1ac);
    if (iVar1 != 0) {
      local_108 = local_108 & 0xf8;
      local_ec = local_ec & 0x3fffffff | 0x40000000;
      iVar1 = FUN_00407430(lVar3,lVar2,0);
      if (((iVar1 != 0) && (iVar1 = FUN_00405f60(lVar3,local_e8,0x20), iVar1 != 0)) &&
         ((iVar1 = FUN_00405f60(lVar3,param_2,param_3), iVar1 != 0 &&
          (iVar1 = FUN_00406090(lVar3,&local_c8,local_1ac), iVar1 != 0)))) {
        FUN_004e13e0(&local_c8);
        FUN_004e3c50(local_1a8,&local_c8);
        FUN_004e1200(param_1,local_1a8);
        iVar1 = FUN_00407430(lVar3,lVar2,0);
        if (((iVar1 != 0) && (iVar1 = FUN_00405f60(lVar3,param_1,0x20), iVar1 != 0)) &&
           ((iVar1 = FUN_00405f60(lVar3,param_4,0x20), iVar1 != 0 &&
            (iVar1 = FUN_00405f60(lVar3,param_2,param_3), iVar1 != 0)))) {
          iVar1 = FUN_00406090(lVar3,&local_88,local_1ac);
          if (iVar1 != 0) {
            FUN_004e13e0(&local_88);
            uVar57 = (ulong)(CONCAT13(uStack_7e,CONCAT21(uStack_80,local_81)) >> 7 & 0x1fffff);
            uVar23 = (ulong)((uint)local_87 << 8 | (local_86 & 0x1f) << 0x10 | (uint)local_88);
            uVar4 = (ulong)(local_86 >> 5 & 0x1fffff);
            uVar25 = (ulong)((uint)(((ulong)local_82 << 8 | (ulong)local_81 << 0x10 |
                                    (ulong)local_86._3_1_) >> 2) & 0x1fffff);
            uVar5 = (ulong)(CONCAT13(local_7b,CONCAT21(uStack_7d,uStack_7e)) >> 4 & 0x1fffff);
            uVar6 = (ulong)((uint)(((ulong)local_7a << 8 | (ulong)(byte)local_79 << 0x10 |
                                   (ulong)local_7b) >> 1) & 0x1fffff);
            uVar37 = (ulong)(local_79 >> 6 & 0x1fffff);
            uVar40 = ((ulong)local_75 << 8 | (ulong)local_74 << 0x10 | (ulong)local_79._3_1_) >> 3;
            uVar41 = (ulong)((uint)local_72 << 8 | (local_71 & 0x1f) << 0x10 | (uint)local_73);
            uVar53 = (ulong)(local_71 >> 5 & 0x1fffff);
            uVar54 = (ulong)((uint)(((ulong)(byte)local_6c << 0x10 | (ulong)local_6d << 8 |
                                    (ulong)local_71._3_1_) >> 2) & 0x1fffff);
            uVar45 = (ulong)(local_6c >> 7);
            uVar62 = (ulong)(CONCAT13(bStack_fb,CONCAT21(uStack_fd,uStack_fe)) >> 4 & 0x1fffff);
            uVar38 = (ulong)((local_106 & 0x1f) << 0x10 | (uint)local_107 << 8 | (uint)local_108);
            uVar59 = (ulong)(local_106 >> 5 & 0x1fffff);
            uVar7 = (ulong)((uint)(((ulong)local_101 << 0x10 | (ulong)local_102 << 8 |
                                   (ulong)local_106._3_1_) >> 2) & 0x1fffff);
            uVar42 = (ulong)(CONCAT13(uStack_fe,CONCAT21(uStack_100,local_101)) >> 7 & 0x1fffff);
            uVar46 = (ulong)((uint)(((ulong)(byte)local_f9 << 0x10 | (ulong)local_fa << 8 |
                                    (ulong)bStack_fb) >> 1) & 0x1fffff);
            uVar63 = (ulong)(local_f9 >> 6 & 0x1fffff);
            uVar47 = ((ulong)local_f4 << 0x10 | (ulong)local_f5 << 8 | (ulong)local_f9._3_1_) >> 3;
            uVar64 = (ulong)((uint)local_f2 << 8 | (local_f1 & 0x1f) << 0x10 | (uint)local_f3);
            uVar48 = (ulong)(local_f1 >> 5 & 0x1fffff);
            uVar49 = (ulong)((uint)(((ulong)(byte)local_ec << 0x10 | (ulong)local_ed << 8 |
                                    (ulong)local_f1._3_1_) >> 2) & 0x1fffff);
            uVar65 = (ulong)(local_ec >> 7);
            lVar66 = (ulong)((uint)local_c7 << 8 | (local_c6 & 0x1f) << 0x10 | (uint)local_c8) +
                     uVar23 * uVar38;
            lVar67 = (ulong)((uint)(((ulong)local_c1 << 0x10 | (ulong)local_c2 << 8 |
                                    (ulong)local_c6._3_1_) >> 2) & 0x1fffff) + uVar23 * uVar7 +
                     uVar4 * uVar59 + uVar25 * uVar38;
            lVar68 = (ulong)(CONCAT13(local_bb,CONCAT21(uStack_bd,uStack_be)) >> 4 & 0x1fffff) +
                     uVar62 * uVar23 + uVar4 * uVar42 + uVar25 * uVar7 + uVar57 * uVar59 +
                     uVar5 * uVar38;
            lVar69 = (ulong)(local_b9 >> 6 & 0x1fffff) + uVar63 * uVar23 + uVar46 * uVar4 +
                     uVar62 * uVar25 + uVar57 * uVar42 + uVar5 * uVar7 + uVar6 * uVar59 +
                     uVar37 * uVar38;
            lVar70 = (ulong)((uint)local_b2 << 8 | (local_b1 & 0x1f) << 0x10 | (uint)local_b3) +
                     uVar64 * uVar23 + uVar47 * uVar4 + uVar63 * uVar25 + uVar46 * uVar57 +
                     uVar5 * uVar62 + uVar6 * uVar42 + uVar37 * uVar7 + uVar40 * uVar59 +
                     uVar41 * uVar38;
            lVar71 = (ulong)((uint)(((ulong)(byte)local_ac << 0x10 | (ulong)local_ad << 8 |
                                    (ulong)local_b1._3_1_) >> 2) & 0x1fffff) + uVar23 * uVar49 +
                     uVar48 * uVar4 + uVar64 * uVar25 + uVar47 * uVar57 + uVar5 * uVar63 +
                     uVar6 * uVar46 + uVar37 * uVar62 + uVar40 * uVar42 + uVar41 * uVar7 +
                     uVar53 * uVar59 + uVar54 * uVar38;
            lVar24 = uVar54 * uVar7 +
                     uVar53 * uVar42 +
                     uVar41 * uVar62 +
                     uVar40 * uVar46 +
                     uVar37 * uVar63 +
                     uVar47 * uVar6 +
                     uVar64 * uVar5 + uVar48 * uVar57 + uVar25 * uVar49 + uVar4 * uVar65 +
                     uVar59 * uVar45;
            lVar44 = uVar62 * uVar54 +
                     uVar53 * uVar46 +
                     uVar41 * uVar63 +
                     uVar40 * uVar47 +
                     uVar64 * uVar37 + uVar6 * uVar48 + uVar5 * uVar49 + uVar57 * uVar65 +
                     uVar42 * uVar45;
            lVar20 = uVar63 * uVar54 +
                     uVar53 * uVar47 +
                     uVar64 * uVar41 + uVar48 * uVar40 + uVar65 * uVar6 + uVar37 * uVar49 +
                     uVar46 * uVar45;
            lVar35 = uVar64 * uVar54 + uVar48 * uVar53 + uVar65 * uVar40 + uVar41 * uVar49 +
                     uVar47 * uVar45;
            lVar36 = uVar54 * uVar49 + uVar65 * uVar53 + uVar48 * uVar45;
            lVar8 = lVar66 + 0x100000 >> 0x15;
            lVar50 = (ulong)(local_c6 >> 5 & 0x1fffff) + uVar23 * uVar59 + uVar4 * uVar38 + lVar8;
            lVar9 = lVar67 + 0x100000 >> 0x15;
            lVar72 = (ulong)(CONCAT13(uStack_be,CONCAT21(uStack_c0,local_c1)) >> 7 & 0x1fffff) +
                     uVar23 * uVar42 + uVar4 * uVar7 + uVar25 * uVar59 + uVar57 * uVar38 + lVar9;
            lVar10 = lVar68 + 0x100000 >> 0x15;
            lVar55 = (ulong)((uint)(((ulong)(byte)local_b9 << 0x10 | (ulong)local_ba << 8 |
                                    (ulong)local_bb) >> 1) & 0x1fffff) + uVar46 * uVar23 +
                     uVar62 * uVar4 + uVar25 * uVar42 + uVar57 * uVar7 + uVar5 * uVar59 +
                     uVar6 * uVar38 + lVar10;
            lVar11 = lVar69 + 0x100000 >> 0x15;
            lVar51 = (((ulong)local_b4 << 0x10 | (ulong)local_b5 << 8 | (ulong)local_b9._3_1_) >> 3)
                     + uVar47 * uVar23 + uVar63 * uVar4 + uVar46 * uVar25 + uVar62 * uVar57 +
                     uVar5 * uVar42 + uVar6 * uVar7 + uVar37 * uVar59 + uVar40 * uVar38 + lVar11;
            lVar12 = lVar70 + 0x100000 >> 0x15;
            lVar56 = (ulong)(local_b1 >> 5 & 0x1fffff) + uVar48 * uVar23 + uVar64 * uVar4 +
                     uVar47 * uVar25 + uVar63 * uVar57 + uVar5 * uVar46 + uVar6 * uVar62 +
                     uVar37 * uVar42 + uVar40 * uVar7 + uVar41 * uVar59 + uVar53 * uVar38 + lVar12;
            lVar13 = lVar71 + 0x100000 >> 0x15;
            lVar52 = uVar38 * uVar45 +
                     uVar54 * uVar59 +
                     uVar53 * uVar7 +
                     uVar41 * uVar42 +
                     uVar40 * uVar62 +
                     uVar37 * uVar46 +
                     uVar6 * uVar63 +
                     uVar5 * uVar47 +
                     uVar64 * uVar57 +
                     uVar48 * uVar25 + uVar4 * uVar49 + uVar23 * uVar65 + (ulong)(local_ac >> 7) +
                     lVar13;
            lVar14 = lVar24 + 0x100000 >> 0x15;
            lVar21 = uVar7 * uVar45 +
                     uVar54 * uVar42 +
                     uVar53 * uVar62 +
                     uVar41 * uVar46 +
                     uVar40 * uVar63 +
                     uVar47 * uVar37 +
                     uVar64 * uVar6 + uVar48 * uVar5 + uVar57 * uVar49 + uVar25 * uVar65 + lVar14;
            lVar15 = lVar44 + 0x100000 >> 0x15;
            lVar39 = uVar46 * uVar54 +
                     uVar53 * uVar63 +
                     uVar41 * uVar47 +
                     uVar64 * uVar40 + uVar37 * uVar48 + uVar6 * uVar49 + uVar5 * uVar65 +
                     uVar62 * uVar45 + lVar15;
            lVar16 = lVar20 + 0x100000 >> 0x15;
            lVar22 = uVar47 * uVar54 +
                     uVar64 * uVar53 + uVar48 * uVar41 + uVar40 * uVar49 + uVar65 * uVar37 +
                     uVar63 * uVar45 + lVar16;
            lVar17 = lVar35 + 0x100000 >> 0x15;
            lVar43 = uVar64 * uVar45 + uVar48 * uVar54 + uVar53 * uVar49 + uVar65 * uVar41 + lVar17;
            lVar18 = lVar36 + 0x100000 >> 0x15;
            lVar58 = uVar49 * uVar45 + uVar54 * uVar65 + lVar18;
            lVar19 = (long)(uVar45 * uVar65 + 0x100000) >> 0x15;
            lVar26 = lVar50 + 0x100000 >> 0x15;
            lVar27 = lVar72 + 0x100000 >> 0x15;
            lVar28 = lVar55 + 0x100000 >> 0x15;
            lVar29 = lVar51 + 0x100000 >> 0x15;
            lVar30 = lVar56 + 0x100000 >> 0x15;
            lVar31 = lVar52 + 0x100000 >> 0x15;
            lVar32 = lVar21 + 0x100000 >> 0x15;
            lVar33 = lVar39 + 0x100000 >> 0x15;
            lVar34 = lVar22 + 0x100000 >> 0x15;
            lVar17 = lVar35 + lVar17 * -0x200000 + lVar34;
            lVar35 = lVar43 + 0x100000 >> 0x15;
            lVar60 = lVar36 + lVar18 * -0x200000 + lVar35;
            lVar43 = lVar43 + lVar35 * -0x200000;
            lVar36 = lVar58 + 0x100000 >> 0x15;
            lVar35 = uVar45 * uVar65 + lVar19 * -0x200000 + lVar36;
            lVar58 = lVar58 + lVar36 * -0x200000;
            lVar20 = lVar19 * -0xa6f7d + lVar20 + lVar16 * -0x200000 + lVar33;
            lVar15 = lVar58 * -0xa6f7d +
                     lVar35 * 0x215d1 + lVar19 * -0xf39ad + lVar44 + lVar15 * -0x200000 + lVar32;
            lVar16 = lVar17 * 0xa2c13 + lVar69 + lVar11 * -0x200000 + lVar28;
            lVar24 = lVar43 * -0xa6f7d +
                     lVar35 * 0x9fb67 + lVar19 * 0x72d18 + lVar24 + lVar14 * -0x200000 + lVar31 +
                     lVar58 * -0xf39ad + lVar60 * 0x215d1;
            lVar70 = lVar17 * 0x9fb67 +
                     lVar43 * 0x72d18 + lVar60 * 0xa2c13 + lVar70 + lVar12 * -0x200000 + lVar29;
            lVar71 = lVar17 * 0x215d1 +
                     lVar71 + lVar13 * -0x200000 + lVar30 + lVar35 * 0xa2c13 + lVar58 * 0x72d18 +
                     lVar60 * 0x9fb67 + lVar43 * -0xf39ad;
            lVar69 = lVar16 + 0x100000 >> 0x15;
            lVar51 = lVar17 * 0x72d18 + lVar51 + lVar29 * -0x200000 + lVar43 * 0xa2c13 + lVar69;
            lVar18 = lVar70 + 0x100000 >> 0x15;
            lVar56 = lVar60 * 0x72d18 + lVar58 * 0xa2c13 + lVar56 + lVar30 * -0x200000 +
                     lVar43 * 0x9fb67 + lVar17 * -0xf39ad + lVar18;
            lVar29 = lVar71 + 0x100000 >> 0x15;
            lVar14 = lVar17 * -0xa6f7d +
                     lVar43 * 0x215d1 +
                     lVar60 * -0xf39ad +
                     lVar52 + lVar31 * -0x200000 + lVar19 * 0xa2c13 + lVar35 * 0x72d18 +
                     lVar58 * 0x9fb67 + lVar29;
            lVar44 = lVar24 + 0x100000 >> 0x15;
            lVar30 = lVar60 * -0xa6f7d +
                     lVar21 + lVar32 * -0x200000 + lVar19 * 0x9fb67 + lVar35 * -0xf39ad +
                     lVar58 * 0x215d1 + lVar44;
            lVar11 = lVar15 + 0x100000 >> 0x15;
            lVar17 = lVar35 * -0xa6f7d + lVar39 + lVar33 * -0x200000 + lVar19 * 0x215d1 + lVar11;
            lVar13 = lVar20 + 0x100000 >> 0x15;
            lVar12 = lVar22 + lVar34 * -0x200000 + lVar13;
            lVar35 = lVar51 + 0x100000 >> 0x15;
            lVar36 = lVar56 + 0x100000 >> 0x15;
            lVar21 = lVar14 + 0x100000 >> 0x15;
            lVar24 = lVar24 + lVar44 * -0x200000 + lVar21;
            lVar44 = lVar30 + 0x100000 >> 0x15;
            lVar11 = lVar15 + lVar11 * -0x200000 + lVar44;
            lVar30 = lVar30 + lVar44 * -0x200000;
            lVar44 = lVar17 + 0x100000 >> 0x15;
            lVar31 = lVar20 + lVar13 * -0x200000 + lVar44;
            lVar17 = lVar17 + lVar44 * -0x200000;
            lVar22 = lVar12 * -0xa6f7d + lVar71 + lVar29 * -0x200000 + lVar36;
            lVar44 = lVar17 * -0xa6f7d +
                     lVar70 + lVar18 * -0x200000 + lVar35 + lVar12 * -0xf39ad + lVar31 * 0x215d1;
            lVar20 = lVar30 * -0xa6f7d +
                     lVar11 * 0x215d1 +
                     lVar17 * -0xf39ad +
                     lVar31 * 0x9fb67 + lVar12 * 0x72d18 + lVar16 + lVar69 * -0x200000;
            lVar13 = lVar24 * 0xa2c13 + lVar66 + lVar8 * -0x200000;
            lVar32 = lVar24 * 0x9fb67 +
                     lVar67 + lVar9 * -0x200000 + lVar26 + lVar11 * 0xa2c13 + lVar30 * 0x72d18;
            lVar34 = lVar24 * 0x215d1 +
                     lVar31 * 0xa2c13 + lVar68 + lVar10 * -0x200000 + lVar27 + lVar17 * 0x72d18 +
                     lVar11 * 0x9fb67 + lVar30 * -0xf39ad;
            lVar16 = lVar13 + 0x100000 >> 0x15;
            lVar18 = lVar50 + lVar26 * -0x200000 + lVar30 * 0xa2c13 + lVar24 * 0x72d18 + lVar16;
            lVar15 = lVar32 + 0x100000 >> 0x15;
            lVar19 = lVar24 * -0xf39ad +
                     lVar17 * 0xa2c13 + lVar72 + lVar27 * -0x200000 + lVar11 * 0x72d18 +
                     lVar30 * 0x9fb67 + lVar15;
            lVar26 = lVar34 + 0x100000 >> 0x15;
            lVar10 = lVar24 * -0xa6f7d +
                     lVar30 * 0x215d1 +
                     lVar11 * -0xf39ad +
                     lVar17 * 0x9fb67 +
                     lVar31 * 0x72d18 + lVar12 * 0xa2c13 + lVar55 + lVar28 * -0x200000 + lVar26;
            lVar27 = lVar20 + 0x100000 >> 0x15;
            lVar33 = lVar11 * -0xa6f7d +
                     lVar51 + lVar35 * -0x200000 + lVar12 * 0x9fb67 + lVar31 * -0xf39ad +
                     lVar17 * 0x215d1 + lVar27;
            lVar11 = lVar44 + 0x100000 >> 0x15;
            lVar30 = lVar31 * -0xa6f7d + lVar56 + lVar36 * -0x200000 + lVar12 * 0x215d1 + lVar11;
            lVar12 = lVar22 + 0x100000 >> 0x15;
            lVar28 = lVar14 + lVar21 * -0x200000 + lVar12;
            lVar24 = lVar18 + 0x100000 >> 0x15;
            lVar35 = lVar19 + 0x100000 >> 0x15;
            lVar36 = lVar10 + 0x100000 >> 0x15;
            lVar21 = lVar33 + 0x100000 >> 0x15;
            lVar8 = lVar30 + 0x100000 >> 0x15;
            uVar4 = lVar28 + 0x100000;
            lVar9 = (long)uVar4 >> 0x15;
            lVar29 = lVar9 * 0xa2c13 + lVar13 + lVar16 * -0x200000;
            lVar16 = lVar29 >> 0x15;
            lVar31 = lVar9 * 0x72d18 + lVar18 + lVar24 * -0x200000 + lVar16;
            lVar17 = lVar31 >> 0x15;
            lVar39 = lVar32 + lVar15 * -0x200000 + lVar24 + lVar9 * 0x9fb67 + lVar17;
            lVar18 = lVar39 >> 0x15;
            lVar32 = lVar19 + lVar35 * -0x200000 + lVar9 * -0xf39ad + lVar18;
            lVar19 = lVar32 >> 0x15;
            lVar13 = lVar9 * 0x215d1 + lVar34 + lVar26 * -0x200000 + lVar35 + lVar19;
            lVar26 = lVar13 >> 0x15;
            lVar9 = lVar9 * -0xa6f7d + lVar10 + lVar36 * -0x200000 + lVar26;
            lVar14 = lVar9 >> 0x15;
            lVar15 = lVar20 + lVar27 * -0x200000 + lVar36 + lVar14;
            lVar36 = lVar15 >> 0x15;
            lVar24 = lVar33 + lVar21 * -0x200000 + lVar36;
            lVar10 = lVar24 >> 0x15;
            lVar44 = lVar44 + lVar11 * -0x200000 + lVar21 + lVar10;
            lVar21 = lVar44 >> 0x15;
            lVar27 = lVar30 + lVar8 * -0x200000 + lVar21;
            lVar11 = lVar27 >> 0x15;
            lVar20 = lVar22 + lVar12 * -0x200000 + lVar8 + lVar11;
            lVar22 = lVar20 >> 0x15;
            lVar35 = (lVar28 - (uVar4 & 0xffffffffffe00000)) + lVar22;
            lVar8 = lVar35 >> 0x15;
            lVar28 = lVar8 * 0xa2c13 + lVar29 + lVar16 * -0x200000;
            lVar12 = lVar28 >> 0x15;
            lVar16 = lVar8 * 0x72d18 + lVar31 + lVar17 * -0x200000 + lVar12;
            lVar28 = lVar28 + lVar12 * -0x200000;
            lVar12 = lVar16 >> 0x15;
            lVar17 = lVar8 * 0x9fb67 + lVar39 + lVar18 * -0x200000 + lVar12;
            lVar18 = lVar17 >> 0x15;
            lVar16 = lVar16 + lVar12 * -0x200000;
            lVar12 = lVar8 * -0xf39ad + lVar32 + lVar19 * -0x200000 + lVar18;
            lVar19 = lVar12 >> 0x15;
            lVar17 = lVar17 + lVar18 * -0x200000;
            lVar13 = lVar8 * 0x215d1 + lVar13 + lVar26 * -0x200000 + lVar19;
            lVar18 = lVar13 >> 0x15;
            lVar12 = lVar12 + lVar19 * -0x200000;
            lVar8 = lVar8 * -0xa6f7d + lVar9 + lVar14 * -0x200000 + lVar18;
            lVar9 = lVar8 >> 0x15;
            lVar13 = lVar13 + lVar18 * -0x200000;
            lVar36 = lVar15 + lVar36 * -0x200000 + lVar9;
            lVar8 = lVar8 + lVar9 * -0x200000;
            lVar14 = lVar36 >> 0x15;
            lVar9 = lVar24 + lVar10 * -0x200000 + lVar14;
            lVar36 = lVar36 + lVar14 * -0x200000;
            lVar10 = lVar9 >> 0x15;
            lVar24 = lVar44 + lVar21 * -0x200000 + lVar10;
            lVar9 = lVar9 + lVar10 * -0x200000;
            lVar44 = lVar24 >> 0x15;
            lVar10 = lVar27 + lVar11 * -0x200000 + lVar44;
            lVar24 = lVar24 + lVar44 * -0x200000;
            lVar44 = lVar10 >> 0x15;
            lVar21 = lVar20 + lVar22 * -0x200000 + lVar44;
            lVar10 = lVar10 + lVar44 * -0x200000;
            lVar44 = lVar21 >> 0x15;
            lVar20 = (ulong)((uint)lVar35 & 0x1fffff) + lVar44;
            lVar21 = lVar21 + lVar44 * -0x200000;
            *(short *)(param_1 + 0x20) = (short)lVar28;
            *(byte *)(param_1 + 0x22) = (byte)((ulong)lVar28 >> 0x10) | (char)lVar16 * ' ';
            *(char *)(param_1 + 0x23) = (char)(lVar16 >> 3);
            *(char *)(param_1 + 0x24) = (char)(lVar16 >> 0xb);
            *(byte *)(param_1 + 0x25) = (byte)(lVar16 >> 0x13) | (char)lVar17 * '\x04';
            *(char *)(param_1 + 0x26) = (char)(lVar17 >> 6);
            *(byte *)(param_1 + 0x27) = (byte)(lVar17 >> 0xe) | (char)lVar12 * -0x80;
            *(char *)(param_1 + 0x28) = (char)(lVar12 >> 1);
            *(char *)(param_1 + 0x29) = (char)(lVar12 >> 9);
            *(byte *)(param_1 + 0x2a) = (byte)(lVar12 >> 0x11) | (char)lVar13 * '\x10';
            *(char *)(param_1 + 0x2b) = (char)(lVar13 >> 4);
            *(char *)(param_1 + 0x2c) = (char)(lVar13 >> 0xc);
            *(byte *)(param_1 + 0x2d) = (byte)(lVar13 >> 0x14) | (char)lVar8 * '\x02';
            *(char *)(param_1 + 0x30) = (char)(lVar36 >> 2);
            *(char *)(param_1 + 0x2e) = (char)(lVar8 >> 7);
            *(char *)(param_1 + 0x31) = (char)(lVar36 >> 10);
            *(byte *)(param_1 + 0x2f) = (byte)(lVar8 >> 0xf) | (char)lVar36 * '@';
            uVar61 = 1;
            *(byte *)(param_1 + 0x32) = (byte)(lVar36 >> 0x12) | (char)lVar9 * '\b';
            *(char *)(param_1 + 0x33) = (char)(lVar9 >> 5);
            *(short *)(param_1 + 0x35) = (short)lVar24;
            *(char *)(param_1 + 0x34) = (char)(lVar9 >> 0xd);
            *(byte *)(param_1 + 0x37) = (byte)((ulong)lVar24 >> 0x10) | (char)lVar10 * ' ';
            *(char *)(param_1 + 0x38) = (char)(lVar10 >> 3);
            *(char *)(param_1 + 0x39) = (char)(lVar10 >> 0xb);
            *(byte *)(param_1 + 0x3a) = (byte)(lVar10 >> 0x13) | (char)lVar21 * '\x04';
            *(char *)(param_1 + 0x3b) = (char)(lVar21 >> 6);
            *(byte *)(param_1 + 0x3c) = (byte)(lVar21 >> 0xe) | (char)lVar20 * -0x80;
            *(char *)(param_1 + 0x3d) = (char)(lVar20 >> 1);
            *(char *)(param_1 + 0x3e) = (char)(lVar20 >> 9);
            *(char *)(param_1 + 0x3f) = (char)(lVar20 >> 0x11);
            goto LAB_004e4093;
          }
        }
      }
    }
  }
  uVar61 = 0;
LAB_004e4093:
  FUN_004227b0(&local_c8,0x40);
  FUN_004227b0(&local_108,0x40);
  FUN_00406a50(lVar2);
  FUN_00406b90(lVar3);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar61;
}

