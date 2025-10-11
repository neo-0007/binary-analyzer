
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_00495c50(uint *param_1,uint *param_2,long param_3,uint *param_4,undefined1 (*param_5) [16],
            undefined1 (*param_6) [16])

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  lVar2 = _UNK_004991e8;
  lVar1 = _DAT_004991e0;
  auVar12 = _DAT_004991c0;
  auVar10 = *param_5;
  auVar11 = *param_6;
  auVar13 = pshufb(auVar10,_DAT_004991c0);
  auVar8 = *(undefined1 (*) [16])(param_4 + 4);
  pauVar6 = (undefined1 (*) [16])(param_4 + 8);
  auVar9._0_4_ = auVar10._0_4_ ^ *param_4;
  auVar9._4_4_ = auVar10._4_4_ ^ param_4[1];
  auVar9._8_4_ = auVar10._8_4_ ^ param_4[2];
  auVar9._12_4_ = auVar10._12_4_ ^ param_4[3];
  uVar3 = param_4[0x3c];
  do {
    auVar9 = aesenc(auVar9,auVar8);
    uVar3 = uVar3 - 1;
    auVar8 = *pauVar6;
    pauVar6 = pauVar6 + 1;
  } while (uVar3 != 0);
  auVar10 = aesenclast(auVar9,auVar8);
  uVar7 = (ulong)(param_4[0x3c] << 4);
  uVar3 = *param_1;
  uVar14 = param_1[1];
  uVar15 = param_1[2];
  uVar16 = param_1[3];
  auVar8._0_8_ = auVar13._0_8_ + _DAT_004991e0;
  auVar8._8_8_ = auVar13._8_8_ + _UNK_004991e8;
  param_1 = param_1 + 4;
  while( true ) {
    uVar3 = uVar3 ^ auVar10._0_4_;
    uVar14 = uVar14 ^ auVar10._4_4_;
    uVar15 = uVar15 ^ auVar10._8_4_;
    uVar16 = uVar16 ^ auVar10._12_4_;
    *param_2 = uVar3;
    param_2[1] = uVar14;
    param_2[2] = uVar15;
    param_2[3] = uVar16;
    param_2 = param_2 + 4;
    auVar10 = pshufb(auVar8,auVar12);
    param_3 = param_3 + -1;
    if (param_3 == 0) break;
    auVar9 = *(undefined1 (*) [16])(param_4 + 4);
    auVar13._0_4_ = auVar10._0_4_ ^ *param_4;
    auVar13._4_4_ = auVar10._4_4_ ^ param_4[1];
    auVar13._8_4_ = auVar10._8_4_ ^ param_4[2];
    auVar13._12_4_ = auVar10._12_4_ ^ param_4[3];
    auVar10._0_4_ = auVar11._0_4_ ^ uVar3 ^ *param_4;
    auVar10._4_4_ = auVar11._4_4_ ^ uVar14 ^ param_4[1];
    auVar10._8_4_ = auVar11._8_4_ ^ uVar15 ^ param_4[2];
    auVar10._12_4_ = auVar11._12_4_ ^ uVar16 ^ param_4[3];
    auVar11 = *(undefined1 (*) [16])(param_4 + 8);
    lVar5 = 0x10 - uVar7;
    do {
      auVar13 = aesenc(auVar13,auVar9);
      auVar10 = aesenc(auVar10,auVar9);
      auVar9 = *(undefined1 (*) [16])((long)param_4 + lVar5 + uVar7 + 0x20);
      lVar5 = lVar5 + 0x20;
      auVar13 = aesenc(auVar13,auVar11);
      auVar10 = aesenc(auVar10,auVar11);
      auVar11 = *(undefined1 (*) [16])((long)param_4 + lVar5 + uVar7 + 0x10);
    } while (lVar5 != 0);
    uVar3 = *param_1;
    uVar14 = param_1[1];
    uVar15 = param_1[2];
    uVar16 = param_1[3];
    lVar5 = auVar8._8_8_;
    auVar8._0_8_ = auVar8._0_8_ + lVar1;
    auVar8._8_8_ = lVar5 + lVar2;
    auVar13 = aesenc(auVar13,auVar9);
    auVar9 = aesenc(auVar10,auVar9);
    auVar10 = aesenclast(auVar13,auVar11);
    auVar11 = aesenclast(auVar9,auVar11);
    param_1 = param_1 + 4;
  }
  uVar4 = param_4[0x3c];
  auVar10 = *(undefined1 (*) [16])(param_4 + 4);
  pauVar6 = (undefined1 (*) [16])(param_4 + 8);
  auVar12._0_4_ = auVar11._0_4_ ^ uVar3 ^ *param_4;
  auVar12._4_4_ = auVar11._4_4_ ^ uVar14 ^ param_4[1];
  auVar12._8_4_ = auVar11._8_4_ ^ uVar15 ^ param_4[2];
  auVar12._12_4_ = auVar11._12_4_ ^ uVar16 ^ param_4[3];
  do {
    auVar12 = aesenc(auVar12,auVar10);
    uVar4 = uVar4 - 1;
    auVar10 = *pauVar6;
    pauVar6 = pauVar6 + 1;
  } while (uVar4 != 0);
  auVar10 = aesenclast(auVar12,auVar10);
  *param_6 = auVar10;
  return ZEXT816(0);
}

