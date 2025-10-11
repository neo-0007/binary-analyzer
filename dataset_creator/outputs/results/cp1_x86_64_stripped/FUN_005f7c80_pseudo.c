
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f7c80(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 (*pauVar15) [32];
  undefined1 (*pauVar16) [32];
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auVar31 [16];
  
  if ((DAT_0094b5a0 & 0x20) == 0) {
    auVar18 = (undefined1  [16])0x0;
    auVar20 = (undefined1  [16])0x0;
    auVar22 = (undefined1  [16])0x0;
    auVar24 = (undefined1  [16])0x0;
    auVar25 = (undefined1  [16])0x0;
    auVar26 = (undefined1  [16])0x0;
    lVar17 = 0x10;
    uVar27 = _DAT_005f6040;
    uVar28 = _UNK_005f6044;
    uVar29 = _UNK_005f6048;
    uVar30 = _UNK_005f604c;
    do {
      auVar31._0_4_ = -(uint)(uVar27 == param_3);
      auVar31._4_4_ = -(uint)(uVar28 == param_3);
      auVar31._8_4_ = -(uint)(uVar29 == param_3);
      auVar31._12_4_ = -(uint)(uVar30 == param_3);
      puVar13 = *param_2;
      puVar14 = *param_2;
      pauVar1 = param_2 + 1;
      pauVar15 = param_2 + 1;
      pauVar2 = param_2 + 2;
      pauVar16 = param_2 + 2;
      param_2 = param_2 + 3;
      auVar18 = auVar18 | *(undefined1 (*) [16])puVar13 & auVar31;
      auVar20 = auVar20 | *(undefined1 (*) [16])(puVar14 + 0x10) & auVar31;
      auVar22 = auVar22 | *(undefined1 (*) [16])*pauVar1 & auVar31;
      auVar24 = auVar24 | *(undefined1 (*) [16])(*pauVar15 + 0x10) & auVar31;
      auVar25 = auVar25 | *(undefined1 (*) [16])*pauVar2 & auVar31;
      auVar26 = auVar26 | *(undefined1 (*) [16])(*pauVar16 + 0x10) & auVar31;
      lVar17 = lVar17 + -1;
      uVar27 = uVar27 + _DAT_005f6040;
      uVar28 = uVar28 + _UNK_005f6044;
      uVar29 = uVar29 + _UNK_005f6048;
      uVar30 = uVar30 + _UNK_005f604c;
    } while (lVar17 != 0);
    *(undefined1 (*) [16])*param_1 = auVar18;
    *(undefined1 (*) [16])(*param_1 + 0x10) = auVar20;
    *(undefined1 (*) [16])param_1[1] = auVar22;
    *(undefined1 (*) [16])(param_1[1] + 0x10) = auVar24;
    *(undefined1 (*) [16])param_1[2] = auVar25;
    *(undefined1 (*) [16])(param_1[2] + 0x10) = auVar26;
    return;
  }
  auVar19 = ZEXT3264((undefined1  [32])0x0);
  auVar21 = ZEXT3264((undefined1  [32])0x0);
  auVar23 = ZEXT3264((undefined1  [32])0x0);
  auVar5._4_4_ = _UNK_005f6044;
  auVar5._0_4_ = _DAT_005f6040;
  auVar5._8_4_ = _UNK_005f6048;
  auVar5._12_4_ = _UNK_005f604c;
  auVar5._16_16_ = _UNK_005f6050;
  auVar12 = vpermd_avx2((undefined1  [32])0x0,ZEXT432(param_3));
  lVar17 = 8;
  auVar6 = _DAT_005f6060;
  do {
    auVar4 = *param_2;
    pauVar1 = param_2 + 1;
    pauVar2 = param_2 + 2;
    pauVar15 = param_2 + 3;
    pauVar16 = param_2 + 4;
    pauVar3 = param_2 + 5;
    auVar10 = vpcmpeqd_avx2(auVar5,auVar12);
    auVar11 = vpcmpeqd_avx2(auVar6,auVar12);
    auVar5 = vpaddd_avx2(auVar5,_DAT_005f6060);
    auVar6 = vpaddd_avx2(auVar6,_DAT_005f6060);
    param_2 = param_2 + 6;
    auVar4 = vpand_avx2(auVar4,auVar10);
    auVar7 = vpand_avx2(*pauVar1,auVar10);
    auVar10 = vpand_avx2(*pauVar2,auVar10);
    auVar8 = vpand_avx2(*pauVar15,auVar11);
    auVar9 = vpand_avx2(*pauVar16,auVar11);
    auVar11 = vpand_avx2(*pauVar3,auVar11);
    auVar8 = auVar19._0_32_ ^ auVar4 ^ auVar8;
    auVar19 = ZEXT3264(auVar8);
    auVar9 = auVar21._0_32_ ^ auVar7 ^ auVar9;
    auVar21 = ZEXT3264(auVar9);
    auVar11 = auVar23._0_32_ ^ auVar10 ^ auVar11;
    auVar23 = ZEXT3264(auVar11);
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  *param_1 = auVar8;
  param_1[1] = auVar9;
  param_1[2] = auVar11;
  return;
}

