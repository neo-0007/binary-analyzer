
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f7da0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 (*pauVar13) [32];
  long lVar14;
  undefined1 (*pauVar15) [32];
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  
  if ((DAT_0094b5a0 & 0x20) == 0) {
    auVar16 = (undefined1  [16])0x0;
    auVar18 = (undefined1  [16])0x0;
    auVar20 = (undefined1  [16])0x0;
    auVar21 = (undefined1  [16])0x0;
    lVar14 = 0x40;
    uVar22 = _DAT_005f6040;
    uVar23 = _UNK_005f6044;
    uVar24 = _UNK_005f6048;
    uVar25 = _UNK_005f604c;
    do {
      puVar11 = *param_2;
      puVar12 = *param_2;
      auVar26._0_4_ = -(uint)(uVar22 == param_3);
      auVar26._4_4_ = -(uint)(uVar23 == param_3);
      auVar26._8_4_ = -(uint)(uVar24 == param_3);
      auVar26._12_4_ = -(uint)(uVar25 == param_3);
      pauVar15 = param_2 + 1;
      pauVar13 = param_2 + 1;
      param_2 = param_2 + 2;
      auVar16 = auVar16 | *(undefined1 (*) [16])puVar11 & auVar26;
      auVar18 = auVar18 | *(undefined1 (*) [16])(puVar12 + 0x10) & auVar26;
      auVar20 = auVar20 | *(undefined1 (*) [16])*pauVar15 & auVar26;
      auVar21 = auVar21 | *(undefined1 (*) [16])(*pauVar13 + 0x10) & auVar26;
      lVar14 = lVar14 + -1;
      uVar22 = uVar22 + _DAT_005f6040;
      uVar23 = uVar23 + _UNK_005f6044;
      uVar24 = uVar24 + _UNK_005f6048;
      uVar25 = uVar25 + _UNK_005f604c;
    } while (lVar14 != 0);
    *(undefined1 (*) [16])*param_1 = auVar16;
    *(undefined1 (*) [16])(*param_1 + 0x10) = auVar18;
    *(undefined1 (*) [16])param_1[1] = auVar20;
    *(undefined1 (*) [16])(param_1[1] + 0x10) = auVar21;
    return;
  }
  auVar17 = ZEXT3264((undefined1  [32])0x0);
  auVar19 = ZEXT3264((undefined1  [32])0x0);
  auVar1._4_4_ = _UNK_005f6044;
  auVar1._0_4_ = _DAT_005f6040;
  auVar1._8_4_ = _UNK_005f6048;
  auVar1._12_4_ = _UNK_005f604c;
  auVar1._16_16_ = _UNK_005f6050;
  auVar10 = vpermd_avx2((undefined1  [32])0x0,ZEXT432(param_3));
  lVar14 = 0x15;
  auVar2 = _DAT_005f6060;
  auVar3 = _DAT_005f6080;
  do {
    pauVar15 = param_2;
    auVar7 = vpcmpeqd_avx2(auVar1,auVar10);
    auVar8 = vpcmpeqd_avx2(auVar2,auVar10);
    auVar9 = vpcmpeqd_avx2(auVar3,auVar10);
    auVar1 = vpaddd_avx2(auVar1,_DAT_005f6080);
    auVar2 = vpaddd_avx2(auVar2,_DAT_005f6080);
    auVar3 = vpaddd_avx2(auVar3,_DAT_005f6080);
    auVar4 = vpand_avx2(*pauVar15,auVar7);
    auVar7 = vpand_avx2(pauVar15[1],auVar7);
    auVar5 = vpand_avx2(pauVar15[2],auVar8);
    auVar8 = vpand_avx2(pauVar15[3],auVar8);
    auVar6 = vpand_avx2(pauVar15[4],auVar9);
    auVar9 = vpand_avx2(pauVar15[5],auVar9);
    auVar6 = auVar17._0_32_ ^ auVar4 ^ auVar5 ^ auVar6;
    auVar17 = ZEXT3264(auVar6);
    auVar9 = auVar19._0_32_ ^ auVar7 ^ auVar8 ^ auVar9;
    auVar19 = ZEXT3264(auVar9);
    lVar14 = lVar14 + -1;
    param_2 = pauVar15 + 6;
  } while (lVar14 != 0);
  auVar2 = vpcmpeqd_avx2(auVar1,auVar10);
  auVar1 = vpand_avx2(pauVar15[6],auVar2);
  auVar2 = vpand_avx2(pauVar15[7],auVar2);
  *param_1 = auVar6 ^ auVar1;
  param_1[1] = auVar9 ^ auVar2;
  return;
}

