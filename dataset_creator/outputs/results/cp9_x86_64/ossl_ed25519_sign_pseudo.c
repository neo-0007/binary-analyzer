
undefined8
ossl_ed25519_sign(void *param_1,void *param_2,size_t param_3,void *param_4,void *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
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
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  ulong uVar52;
  long lVar53;
  long lVar54;
  ulong uVar55;
  long lVar56;
  ulong uVar57;
  long lVar58;
  undefined8 uVar59;
  ulong uVar60;
  ulong uVar61;
  ulong uVar62;
  ulong uVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long in_FS_OFFSET;
  uint local_1ac;
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
  type = (EVP_MD *)EVP_MD_fetch(param_6,"SHA512",param_7);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if ((((type != (EVP_MD *)0x0) && (ctx != (EVP_MD_CTX *)0x0)) &&
      (iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0), iVar1 != 0)) &&
     (iVar1 = EVP_DigestUpdate(ctx,param_5,0x20), iVar1 != 0)) {
    iVar1 = EVP_DigestFinal_ex(ctx,&local_108,&local_1ac);
    if (iVar1 != 0) {
      local_108 = local_108 & 0xf8;
      local_ec = local_ec & 0x3fffffff | 0x40000000;
      iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
      if (((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(ctx,local_e8,0x20), iVar1 != 0)) &&
         ((iVar1 = EVP_DigestUpdate(ctx,param_2,param_3), iVar1 != 0 &&
          (iVar1 = EVP_DigestFinal_ex(ctx,&local_c8,&local_1ac), iVar1 != 0)))) {
        x25519_sc_reduce(&local_c8);
        ge_scalarmult_base(local_1a8,&local_c8);
        ge_p3_tobytes(param_1,local_1a8);
        iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
        if (((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(ctx,param_1,0x20), iVar1 != 0)) &&
           ((iVar1 = EVP_DigestUpdate(ctx,param_4,0x20), iVar1 != 0 &&
            (iVar1 = EVP_DigestUpdate(ctx,param_2,param_3), iVar1 != 0)))) {
          iVar1 = EVP_DigestFinal_ex(ctx,&local_88,&local_1ac);
          if (iVar1 != 0) {
            x25519_sc_reduce(&local_88);
            uVar55 = (ulong)(CONCAT13(uStack_7e,CONCAT21(uStack_80,local_81)) >> 7 & 0x1fffff);
            uVar21 = (ulong)((uint)local_87 << 8 | (local_86 & 0x1f) << 0x10 | (uint)local_88);
            uVar2 = (ulong)(local_86 >> 5 & 0x1fffff);
            uVar23 = (ulong)((uint)(((ulong)local_82 << 8 | (ulong)local_81 << 0x10 |
                                    (ulong)local_86._3_1_) >> 2) & 0x1fffff);
            uVar3 = (ulong)(CONCAT13(local_7b,CONCAT21(uStack_7d,uStack_7e)) >> 4 & 0x1fffff);
            uVar4 = (ulong)((uint)(((ulong)local_7a << 8 | (ulong)(byte)local_79 << 0x10 |
                                   (ulong)local_7b) >> 1) & 0x1fffff);
            uVar35 = (ulong)(local_79 >> 6 & 0x1fffff);
            uVar38 = ((ulong)local_75 << 8 | (ulong)local_74 << 0x10 | (ulong)local_79._3_1_) >> 3;
            uVar39 = (ulong)((uint)local_72 << 8 | (local_71 & 0x1f) << 0x10 | (uint)local_73);
            uVar51 = (ulong)(local_71 >> 5 & 0x1fffff);
            uVar52 = (ulong)((uint)(((ulong)(byte)local_6c << 0x10 | (ulong)local_6d << 8 |
                                    (ulong)local_71._3_1_) >> 2) & 0x1fffff);
            uVar43 = (ulong)(local_6c >> 7);
            uVar60 = (ulong)(CONCAT13(bStack_fb,CONCAT21(uStack_fd,uStack_fe)) >> 4 & 0x1fffff);
            uVar36 = (ulong)((local_106 & 0x1f) << 0x10 | (uint)local_107 << 8 | (uint)local_108);
            uVar57 = (ulong)(local_106 >> 5 & 0x1fffff);
            uVar5 = (ulong)((uint)(((ulong)local_101 << 0x10 | (ulong)local_102 << 8 |
                                   (ulong)local_106._3_1_) >> 2) & 0x1fffff);
            uVar40 = (ulong)(CONCAT13(uStack_fe,CONCAT21(uStack_100,local_101)) >> 7 & 0x1fffff);
            uVar44 = (ulong)((uint)(((ulong)(byte)local_f9 << 0x10 | (ulong)local_fa << 8 |
                                    (ulong)bStack_fb) >> 1) & 0x1fffff);
            uVar61 = (ulong)(local_f9 >> 6 & 0x1fffff);
            uVar45 = ((ulong)local_f4 << 0x10 | (ulong)local_f5 << 8 | (ulong)local_f9._3_1_) >> 3;
            uVar62 = (ulong)((uint)local_f2 << 8 | (local_f1 & 0x1f) << 0x10 | (uint)local_f3);
            uVar46 = (ulong)(local_f1 >> 5 & 0x1fffff);
            uVar47 = (ulong)((uint)(((ulong)(byte)local_ec << 0x10 | (ulong)local_ed << 8 |
                                    (ulong)local_f1._3_1_) >> 2) & 0x1fffff);
            uVar63 = (ulong)(local_ec >> 7);
            lVar64 = (ulong)((uint)local_c7 << 8 | (local_c6 & 0x1f) << 0x10 | (uint)local_c8) +
                     uVar21 * uVar36;
            lVar65 = (ulong)((uint)(((ulong)local_c1 << 0x10 | (ulong)local_c2 << 8 |
                                    (ulong)local_c6._3_1_) >> 2) & 0x1fffff) + uVar21 * uVar5 +
                     uVar2 * uVar57 + uVar23 * uVar36;
            lVar66 = (ulong)(CONCAT13(local_bb,CONCAT21(uStack_bd,uStack_be)) >> 4 & 0x1fffff) +
                     uVar60 * uVar21 + uVar2 * uVar40 + uVar23 * uVar5 + uVar55 * uVar57 +
                     uVar3 * uVar36;
            lVar67 = (ulong)(local_b9 >> 6 & 0x1fffff) + uVar61 * uVar21 + uVar44 * uVar2 +
                     uVar60 * uVar23 + uVar55 * uVar40 + uVar3 * uVar5 + uVar4 * uVar57 +
                     uVar35 * uVar36;
            lVar68 = (ulong)((uint)local_b2 << 8 | (local_b1 & 0x1f) << 0x10 | (uint)local_b3) +
                     uVar62 * uVar21 + uVar45 * uVar2 + uVar61 * uVar23 + uVar44 * uVar55 +
                     uVar3 * uVar60 + uVar4 * uVar40 + uVar35 * uVar5 + uVar38 * uVar57 +
                     uVar39 * uVar36;
            lVar69 = (ulong)((uint)(((ulong)(byte)local_ac << 0x10 | (ulong)local_ad << 8 |
                                    (ulong)local_b1._3_1_) >> 2) & 0x1fffff) + uVar21 * uVar47 +
                     uVar46 * uVar2 + uVar62 * uVar23 + uVar45 * uVar55 + uVar3 * uVar61 +
                     uVar4 * uVar44 + uVar35 * uVar60 + uVar38 * uVar40 + uVar39 * uVar5 +
                     uVar51 * uVar57 + uVar52 * uVar36;
            lVar22 = uVar52 * uVar5 +
                     uVar51 * uVar40 +
                     uVar39 * uVar60 +
                     uVar38 * uVar44 +
                     uVar35 * uVar61 +
                     uVar45 * uVar4 +
                     uVar62 * uVar3 + uVar46 * uVar55 + uVar23 * uVar47 + uVar2 * uVar63 +
                     uVar57 * uVar43;
            lVar42 = uVar60 * uVar52 +
                     uVar51 * uVar44 +
                     uVar39 * uVar61 +
                     uVar38 * uVar45 +
                     uVar62 * uVar35 + uVar4 * uVar46 + uVar3 * uVar47 + uVar55 * uVar63 +
                     uVar40 * uVar43;
            lVar18 = uVar61 * uVar52 +
                     uVar51 * uVar45 +
                     uVar62 * uVar39 + uVar46 * uVar38 + uVar63 * uVar4 + uVar35 * uVar47 +
                     uVar44 * uVar43;
            lVar33 = uVar62 * uVar52 + uVar46 * uVar51 + uVar63 * uVar38 + uVar39 * uVar47 +
                     uVar45 * uVar43;
            lVar34 = uVar52 * uVar47 + uVar63 * uVar51 + uVar46 * uVar43;
            lVar6 = lVar64 + 0x100000 >> 0x15;
            lVar48 = (ulong)(local_c6 >> 5 & 0x1fffff) + uVar21 * uVar57 + uVar2 * uVar36 + lVar6;
            lVar7 = lVar65 + 0x100000 >> 0x15;
            lVar70 = (ulong)(CONCAT13(uStack_be,CONCAT21(uStack_c0,local_c1)) >> 7 & 0x1fffff) +
                     uVar21 * uVar40 + uVar2 * uVar5 + uVar23 * uVar57 + uVar55 * uVar36 + lVar7;
            lVar8 = lVar66 + 0x100000 >> 0x15;
            lVar53 = (ulong)((uint)(((ulong)(byte)local_b9 << 0x10 | (ulong)local_ba << 8 |
                                    (ulong)local_bb) >> 1) & 0x1fffff) + uVar44 * uVar21 +
                     uVar60 * uVar2 + uVar23 * uVar40 + uVar55 * uVar5 + uVar3 * uVar57 +
                     uVar4 * uVar36 + lVar8;
            lVar9 = lVar67 + 0x100000 >> 0x15;
            lVar49 = (((ulong)local_b4 << 0x10 | (ulong)local_b5 << 8 | (ulong)local_b9._3_1_) >> 3)
                     + uVar45 * uVar21 + uVar61 * uVar2 + uVar44 * uVar23 + uVar60 * uVar55 +
                     uVar3 * uVar40 + uVar4 * uVar5 + uVar35 * uVar57 + uVar38 * uVar36 + lVar9;
            lVar10 = lVar68 + 0x100000 >> 0x15;
            lVar54 = (ulong)(local_b1 >> 5 & 0x1fffff) + uVar46 * uVar21 + uVar62 * uVar2 +
                     uVar45 * uVar23 + uVar61 * uVar55 + uVar3 * uVar44 + uVar4 * uVar60 +
                     uVar35 * uVar40 + uVar38 * uVar5 + uVar39 * uVar57 + uVar51 * uVar36 + lVar10;
            lVar11 = lVar69 + 0x100000 >> 0x15;
            lVar50 = uVar36 * uVar43 +
                     uVar52 * uVar57 +
                     uVar51 * uVar5 +
                     uVar39 * uVar40 +
                     uVar38 * uVar60 +
                     uVar35 * uVar44 +
                     uVar4 * uVar61 +
                     uVar3 * uVar45 +
                     uVar62 * uVar55 +
                     uVar46 * uVar23 + uVar2 * uVar47 + uVar21 * uVar63 + (ulong)(local_ac >> 7) +
                     lVar11;
            lVar12 = lVar22 + 0x100000 >> 0x15;
            lVar19 = uVar5 * uVar43 +
                     uVar52 * uVar40 +
                     uVar51 * uVar60 +
                     uVar39 * uVar44 +
                     uVar38 * uVar61 +
                     uVar45 * uVar35 +
                     uVar62 * uVar4 + uVar46 * uVar3 + uVar55 * uVar47 + uVar23 * uVar63 + lVar12;
            lVar13 = lVar42 + 0x100000 >> 0x15;
            lVar37 = uVar44 * uVar52 +
                     uVar51 * uVar61 +
                     uVar39 * uVar45 +
                     uVar62 * uVar38 + uVar35 * uVar46 + uVar4 * uVar47 + uVar3 * uVar63 +
                     uVar60 * uVar43 + lVar13;
            lVar14 = lVar18 + 0x100000 >> 0x15;
            lVar20 = uVar45 * uVar52 +
                     uVar62 * uVar51 + uVar46 * uVar39 + uVar38 * uVar47 + uVar63 * uVar35 +
                     uVar61 * uVar43 + lVar14;
            lVar15 = lVar33 + 0x100000 >> 0x15;
            lVar41 = uVar62 * uVar43 + uVar46 * uVar52 + uVar51 * uVar47 + uVar63 * uVar39 + lVar15;
            lVar16 = lVar34 + 0x100000 >> 0x15;
            lVar56 = uVar47 * uVar43 + uVar52 * uVar63 + lVar16;
            lVar17 = (long)(uVar43 * uVar63 + 0x100000) >> 0x15;
            lVar24 = lVar48 + 0x100000 >> 0x15;
            lVar25 = lVar70 + 0x100000 >> 0x15;
            lVar26 = lVar53 + 0x100000 >> 0x15;
            lVar27 = lVar49 + 0x100000 >> 0x15;
            lVar28 = lVar54 + 0x100000 >> 0x15;
            lVar29 = lVar50 + 0x100000 >> 0x15;
            lVar30 = lVar19 + 0x100000 >> 0x15;
            lVar31 = lVar37 + 0x100000 >> 0x15;
            lVar32 = lVar20 + 0x100000 >> 0x15;
            lVar15 = lVar33 + lVar15 * -0x200000 + lVar32;
            lVar33 = lVar41 + 0x100000 >> 0x15;
            lVar58 = lVar34 + lVar16 * -0x200000 + lVar33;
            lVar41 = lVar41 + lVar33 * -0x200000;
            lVar34 = lVar56 + 0x100000 >> 0x15;
            lVar33 = uVar43 * uVar63 + lVar17 * -0x200000 + lVar34;
            lVar56 = lVar56 + lVar34 * -0x200000;
            lVar18 = lVar17 * -0xa6f7d + lVar18 + lVar14 * -0x200000 + lVar31;
            lVar13 = lVar56 * -0xa6f7d +
                     lVar33 * 0x215d1 + lVar17 * -0xf39ad + lVar42 + lVar13 * -0x200000 + lVar30;
            lVar14 = lVar15 * 0xa2c13 + lVar67 + lVar9 * -0x200000 + lVar26;
            lVar22 = lVar41 * -0xa6f7d +
                     lVar33 * 0x9fb67 + lVar17 * 0x72d18 + lVar22 + lVar12 * -0x200000 + lVar29 +
                     lVar56 * -0xf39ad + lVar58 * 0x215d1;
            lVar68 = lVar15 * 0x9fb67 +
                     lVar41 * 0x72d18 + lVar58 * 0xa2c13 + lVar68 + lVar10 * -0x200000 + lVar27;
            lVar69 = lVar15 * 0x215d1 +
                     lVar69 + lVar11 * -0x200000 + lVar28 + lVar33 * 0xa2c13 + lVar56 * 0x72d18 +
                     lVar58 * 0x9fb67 + lVar41 * -0xf39ad;
            lVar67 = lVar14 + 0x100000 >> 0x15;
            lVar49 = lVar15 * 0x72d18 + lVar49 + lVar27 * -0x200000 + lVar41 * 0xa2c13 + lVar67;
            lVar16 = lVar68 + 0x100000 >> 0x15;
            lVar54 = lVar58 * 0x72d18 + lVar56 * 0xa2c13 + lVar54 + lVar28 * -0x200000 +
                     lVar41 * 0x9fb67 + lVar15 * -0xf39ad + lVar16;
            lVar27 = lVar69 + 0x100000 >> 0x15;
            lVar12 = lVar15 * -0xa6f7d +
                     lVar41 * 0x215d1 +
                     lVar58 * -0xf39ad +
                     lVar50 + lVar29 * -0x200000 + lVar17 * 0xa2c13 + lVar33 * 0x72d18 +
                     lVar56 * 0x9fb67 + lVar27;
            lVar42 = lVar22 + 0x100000 >> 0x15;
            lVar28 = lVar58 * -0xa6f7d +
                     lVar19 + lVar30 * -0x200000 + lVar17 * 0x9fb67 + lVar33 * -0xf39ad +
                     lVar56 * 0x215d1 + lVar42;
            lVar9 = lVar13 + 0x100000 >> 0x15;
            lVar15 = lVar33 * -0xa6f7d + lVar37 + lVar31 * -0x200000 + lVar17 * 0x215d1 + lVar9;
            lVar11 = lVar18 + 0x100000 >> 0x15;
            lVar10 = lVar20 + lVar32 * -0x200000 + lVar11;
            lVar33 = lVar49 + 0x100000 >> 0x15;
            lVar34 = lVar54 + 0x100000 >> 0x15;
            lVar19 = lVar12 + 0x100000 >> 0x15;
            lVar22 = lVar22 + lVar42 * -0x200000 + lVar19;
            lVar42 = lVar28 + 0x100000 >> 0x15;
            lVar9 = lVar13 + lVar9 * -0x200000 + lVar42;
            lVar28 = lVar28 + lVar42 * -0x200000;
            lVar42 = lVar15 + 0x100000 >> 0x15;
            lVar29 = lVar18 + lVar11 * -0x200000 + lVar42;
            lVar15 = lVar15 + lVar42 * -0x200000;
            lVar20 = lVar10 * -0xa6f7d + lVar69 + lVar27 * -0x200000 + lVar34;
            lVar42 = lVar15 * -0xa6f7d +
                     lVar68 + lVar16 * -0x200000 + lVar33 + lVar10 * -0xf39ad + lVar29 * 0x215d1;
            lVar18 = lVar28 * -0xa6f7d +
                     lVar9 * 0x215d1 +
                     lVar15 * -0xf39ad +
                     lVar29 * 0x9fb67 + lVar10 * 0x72d18 + lVar14 + lVar67 * -0x200000;
            lVar11 = lVar22 * 0xa2c13 + lVar64 + lVar6 * -0x200000;
            lVar30 = lVar22 * 0x9fb67 +
                     lVar65 + lVar7 * -0x200000 + lVar24 + lVar9 * 0xa2c13 + lVar28 * 0x72d18;
            lVar32 = lVar22 * 0x215d1 +
                     lVar29 * 0xa2c13 + lVar66 + lVar8 * -0x200000 + lVar25 + lVar15 * 0x72d18 +
                     lVar9 * 0x9fb67 + lVar28 * -0xf39ad;
            lVar14 = lVar11 + 0x100000 >> 0x15;
            lVar16 = lVar48 + lVar24 * -0x200000 + lVar28 * 0xa2c13 + lVar22 * 0x72d18 + lVar14;
            lVar13 = lVar30 + 0x100000 >> 0x15;
            lVar17 = lVar22 * -0xf39ad +
                     lVar15 * 0xa2c13 + lVar70 + lVar25 * -0x200000 + lVar9 * 0x72d18 +
                     lVar28 * 0x9fb67 + lVar13;
            lVar24 = lVar32 + 0x100000 >> 0x15;
            lVar8 = lVar22 * -0xa6f7d +
                    lVar28 * 0x215d1 +
                    lVar9 * -0xf39ad +
                    lVar15 * 0x9fb67 +
                    lVar29 * 0x72d18 + lVar10 * 0xa2c13 + lVar53 + lVar26 * -0x200000 + lVar24;
            lVar25 = lVar18 + 0x100000 >> 0x15;
            lVar31 = lVar9 * -0xa6f7d +
                     lVar49 + lVar33 * -0x200000 + lVar10 * 0x9fb67 + lVar29 * -0xf39ad +
                     lVar15 * 0x215d1 + lVar25;
            lVar9 = lVar42 + 0x100000 >> 0x15;
            lVar28 = lVar29 * -0xa6f7d + lVar54 + lVar34 * -0x200000 + lVar10 * 0x215d1 + lVar9;
            lVar10 = lVar20 + 0x100000 >> 0x15;
            lVar26 = lVar12 + lVar19 * -0x200000 + lVar10;
            lVar22 = lVar16 + 0x100000 >> 0x15;
            lVar33 = lVar17 + 0x100000 >> 0x15;
            lVar34 = lVar8 + 0x100000 >> 0x15;
            lVar19 = lVar31 + 0x100000 >> 0x15;
            lVar6 = lVar28 + 0x100000 >> 0x15;
            uVar2 = lVar26 + 0x100000;
            lVar7 = (long)uVar2 >> 0x15;
            lVar27 = lVar7 * 0xa2c13 + lVar11 + lVar14 * -0x200000;
            lVar14 = lVar27 >> 0x15;
            lVar29 = lVar7 * 0x72d18 + lVar16 + lVar22 * -0x200000 + lVar14;
            lVar15 = lVar29 >> 0x15;
            lVar37 = lVar30 + lVar13 * -0x200000 + lVar22 + lVar7 * 0x9fb67 + lVar15;
            lVar16 = lVar37 >> 0x15;
            lVar30 = lVar17 + lVar33 * -0x200000 + lVar7 * -0xf39ad + lVar16;
            lVar17 = lVar30 >> 0x15;
            lVar11 = lVar7 * 0x215d1 + lVar32 + lVar24 * -0x200000 + lVar33 + lVar17;
            lVar24 = lVar11 >> 0x15;
            lVar7 = lVar7 * -0xa6f7d + lVar8 + lVar34 * -0x200000 + lVar24;
            lVar12 = lVar7 >> 0x15;
            lVar13 = lVar18 + lVar25 * -0x200000 + lVar34 + lVar12;
            lVar34 = lVar13 >> 0x15;
            lVar22 = lVar31 + lVar19 * -0x200000 + lVar34;
            lVar8 = lVar22 >> 0x15;
            lVar42 = lVar42 + lVar9 * -0x200000 + lVar19 + lVar8;
            lVar19 = lVar42 >> 0x15;
            lVar25 = lVar28 + lVar6 * -0x200000 + lVar19;
            lVar9 = lVar25 >> 0x15;
            lVar18 = lVar20 + lVar10 * -0x200000 + lVar6 + lVar9;
            lVar20 = lVar18 >> 0x15;
            lVar33 = (lVar26 - (uVar2 & 0xffffffffffe00000)) + lVar20;
            lVar6 = lVar33 >> 0x15;
            lVar26 = lVar6 * 0xa2c13 + lVar27 + lVar14 * -0x200000;
            lVar10 = lVar26 >> 0x15;
            lVar14 = lVar6 * 0x72d18 + lVar29 + lVar15 * -0x200000 + lVar10;
            lVar26 = lVar26 + lVar10 * -0x200000;
            lVar10 = lVar14 >> 0x15;
            lVar15 = lVar6 * 0x9fb67 + lVar37 + lVar16 * -0x200000 + lVar10;
            lVar16 = lVar15 >> 0x15;
            lVar14 = lVar14 + lVar10 * -0x200000;
            lVar10 = lVar6 * -0xf39ad + lVar30 + lVar17 * -0x200000 + lVar16;
            lVar17 = lVar10 >> 0x15;
            lVar15 = lVar15 + lVar16 * -0x200000;
            lVar11 = lVar6 * 0x215d1 + lVar11 + lVar24 * -0x200000 + lVar17;
            lVar16 = lVar11 >> 0x15;
            lVar10 = lVar10 + lVar17 * -0x200000;
            lVar6 = lVar6 * -0xa6f7d + lVar7 + lVar12 * -0x200000 + lVar16;
            lVar7 = lVar6 >> 0x15;
            lVar11 = lVar11 + lVar16 * -0x200000;
            lVar34 = lVar13 + lVar34 * -0x200000 + lVar7;
            lVar6 = lVar6 + lVar7 * -0x200000;
            lVar12 = lVar34 >> 0x15;
            lVar7 = lVar22 + lVar8 * -0x200000 + lVar12;
            lVar34 = lVar34 + lVar12 * -0x200000;
            lVar8 = lVar7 >> 0x15;
            lVar22 = lVar42 + lVar19 * -0x200000 + lVar8;
            lVar7 = lVar7 + lVar8 * -0x200000;
            lVar42 = lVar22 >> 0x15;
            lVar8 = lVar25 + lVar9 * -0x200000 + lVar42;
            lVar22 = lVar22 + lVar42 * -0x200000;
            lVar42 = lVar8 >> 0x15;
            lVar19 = lVar18 + lVar20 * -0x200000 + lVar42;
            lVar8 = lVar8 + lVar42 * -0x200000;
            lVar42 = lVar19 >> 0x15;
            lVar18 = (ulong)((uint)lVar33 & 0x1fffff) + lVar42;
            lVar19 = lVar19 + lVar42 * -0x200000;
            *(short *)((long)param_1 + 0x20) = (short)lVar26;
            *(byte *)((long)param_1 + 0x22) = (byte)((ulong)lVar26 >> 0x10) | (char)lVar14 * ' ';
            *(char *)((long)param_1 + 0x23) = (char)(lVar14 >> 3);
            *(char *)((long)param_1 + 0x24) = (char)(lVar14 >> 0xb);
            *(byte *)((long)param_1 + 0x25) = (byte)(lVar14 >> 0x13) | (char)lVar15 * '\x04';
            *(char *)((long)param_1 + 0x26) = (char)(lVar15 >> 6);
            *(byte *)((long)param_1 + 0x27) = (byte)(lVar15 >> 0xe) | (char)lVar10 * -0x80;
            *(char *)((long)param_1 + 0x28) = (char)(lVar10 >> 1);
            *(char *)((long)param_1 + 0x29) = (char)(lVar10 >> 9);
            *(byte *)((long)param_1 + 0x2a) = (byte)(lVar10 >> 0x11) | (char)lVar11 * '\x10';
            *(char *)((long)param_1 + 0x2b) = (char)(lVar11 >> 4);
            *(char *)((long)param_1 + 0x2c) = (char)(lVar11 >> 0xc);
            *(byte *)((long)param_1 + 0x2d) = (byte)(lVar11 >> 0x14) | (char)lVar6 * '\x02';
            *(char *)((long)param_1 + 0x30) = (char)(lVar34 >> 2);
            *(char *)((long)param_1 + 0x2e) = (char)(lVar6 >> 7);
            *(char *)((long)param_1 + 0x31) = (char)(lVar34 >> 10);
            *(byte *)((long)param_1 + 0x2f) = (byte)(lVar6 >> 0xf) | (char)lVar34 * '@';
            uVar59 = 1;
            *(byte *)((long)param_1 + 0x32) = (byte)(lVar34 >> 0x12) | (char)lVar7 * '\b';
            *(char *)((long)param_1 + 0x33) = (char)(lVar7 >> 5);
            *(short *)((long)param_1 + 0x35) = (short)lVar22;
            *(char *)((long)param_1 + 0x34) = (char)(lVar7 >> 0xd);
            *(byte *)((long)param_1 + 0x37) = (byte)((ulong)lVar22 >> 0x10) | (char)lVar8 * ' ';
            *(char *)((long)param_1 + 0x38) = (char)(lVar8 >> 3);
            *(char *)((long)param_1 + 0x39) = (char)(lVar8 >> 0xb);
            *(byte *)((long)param_1 + 0x3a) = (byte)(lVar8 >> 0x13) | (char)lVar19 * '\x04';
            *(char *)((long)param_1 + 0x3b) = (char)(lVar19 >> 6);
            *(byte *)((long)param_1 + 0x3c) = (byte)(lVar19 >> 0xe) | (char)lVar18 * -0x80;
            *(char *)((long)param_1 + 0x3d) = (char)(lVar18 >> 1);
            *(char *)((long)param_1 + 0x3e) = (char)(lVar18 >> 9);
            *(char *)((long)param_1 + 0x3f) = (char)(lVar18 >> 0x11);
            goto LAB_004d7853;
          }
        }
      }
    }
  }
  uVar59 = 0;
LAB_004d7853:
  OPENSSL_cleanse(&local_c8,0x40);
  OPENSSL_cleanse(&local_108,0x40);
  EVP_MD_free(type);
  EVP_MD_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar59;
}

