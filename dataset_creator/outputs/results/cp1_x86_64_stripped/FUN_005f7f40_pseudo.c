
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f7f40(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

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
  long lVar11;
  undefined1 (*pauVar12) [32];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  
  auVar13 = ZEXT3264((undefined1  [32])0x0);
  auVar14 = ZEXT3264((undefined1  [32])0x0);
  auVar10 = vpermd_avx2((undefined1  [32])0x0,ZEXT432(param_3));
  lVar11 = 0x15;
  auVar2 = _DAT_005f6060;
  auVar3 = _DAT_005f6080;
  auVar1 = _DAT_005f6040;
  do {
    pauVar12 = param_2;
    auVar7 = vpcmpeqd_avx2(auVar1,auVar10);
    auVar8 = vpcmpeqd_avx2(auVar2,auVar10);
    auVar9 = vpcmpeqd_avx2(auVar3,auVar10);
    auVar1 = vpaddd_avx2(auVar1,_DAT_005f6080);
    auVar2 = vpaddd_avx2(auVar2,_DAT_005f6080);
    auVar3 = vpaddd_avx2(auVar3,_DAT_005f6080);
    auVar4 = vpand_avx2(*pauVar12,auVar7);
    auVar7 = vpand_avx2(pauVar12[1],auVar7);
    auVar5 = vpand_avx2(pauVar12[2],auVar8);
    auVar8 = vpand_avx2(pauVar12[3],auVar8);
    auVar6 = vpand_avx2(pauVar12[4],auVar9);
    auVar9 = vpand_avx2(pauVar12[5],auVar9);
    auVar6 = auVar13._0_32_ ^ auVar4 ^ auVar5 ^ auVar6;
    auVar13 = ZEXT3264(auVar6);
    auVar9 = auVar14._0_32_ ^ auVar7 ^ auVar8 ^ auVar9;
    auVar14 = ZEXT3264(auVar9);
    lVar11 = lVar11 + -1;
    param_2 = pauVar12 + 6;
  } while (lVar11 != 0);
  auVar2 = vpcmpeqd_avx2(auVar1,auVar10);
  auVar1 = vpand_avx2(pauVar12[6],auVar2);
  auVar2 = vpand_avx2(pauVar12[7],auVar2);
  *param_1 = auVar6 ^ auVar1;
  param_1[1] = auVar9 ^ auVar2;
  return;
}

