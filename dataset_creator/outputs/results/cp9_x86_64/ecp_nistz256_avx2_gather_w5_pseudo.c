
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_avx2_gather_w5(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  long lVar15;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  
  auVar16 = ZEXT3264((undefined1  [32])0x0);
  auVar17 = ZEXT3264((undefined1  [32])0x0);
  auVar18 = ZEXT3264((undefined1  [32])0x0);
  auVar14 = vpermd_avx2((undefined1  [32])0x0,ZEXT432(param_3));
  lVar15 = 8;
  auVar7 = _DAT_005eb040;
  auVar8 = _DAT_005eb060;
  do {
    auVar6 = *param_2;
    pauVar1 = param_2 + 1;
    pauVar2 = param_2 + 2;
    pauVar3 = param_2 + 3;
    pauVar4 = param_2 + 4;
    pauVar5 = param_2 + 5;
    auVar12 = vpcmpeqd_avx2(auVar7,auVar14);
    auVar13 = vpcmpeqd_avx2(auVar8,auVar14);
    auVar7 = vpaddd_avx2(auVar7,_DAT_005eb060);
    auVar8 = vpaddd_avx2(auVar8,_DAT_005eb060);
    param_2 = param_2 + 6;
    auVar6 = vpand_avx2(auVar6,auVar12);
    auVar9 = vpand_avx2(*pauVar1,auVar12);
    auVar12 = vpand_avx2(*pauVar2,auVar12);
    auVar10 = vpand_avx2(*pauVar3,auVar13);
    auVar11 = vpand_avx2(*pauVar4,auVar13);
    auVar13 = vpand_avx2(*pauVar5,auVar13);
    auVar10 = auVar16._0_32_ ^ auVar6 ^ auVar10;
    auVar16 = ZEXT3264(auVar10);
    auVar11 = auVar17._0_32_ ^ auVar9 ^ auVar11;
    auVar17 = ZEXT3264(auVar11);
    auVar13 = auVar18._0_32_ ^ auVar12 ^ auVar13;
    auVar18 = ZEXT3264(auVar13);
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  *param_1 = auVar10;
  param_1[1] = auVar11;
  param_1[2] = auVar13;
  return;
}

