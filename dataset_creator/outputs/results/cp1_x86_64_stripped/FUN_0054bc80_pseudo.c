
void FUN_0054bc80(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 param_3,
                 long param_4)

{
  undefined1 auVar1 [16];
  uint unaff_EBX;
  int unaff_EBP;
  long in_R11;
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined1 in_XMM0 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  
  auVar5 = *(undefined1 (*) [16])(param_4 + -0x80);
  auVar4 = *(undefined1 (*) [16])(in_R11 + 0x20);
  iVar3 = unaff_EBP + -1;
  auVar17 = ZEXT1664(*(undefined1 (*) [16])(param_4 + -0x70));
  pauVar2 = (undefined1 (*) [16])(param_4 + -0x60);
  auVar7 = in_ZMM1._0_16_;
  auVar6 = ZEXT1664(auVar7 ^ auVar5);
  if (unaff_EBX < 0xfa000000) {
    auVar7 = vpaddb_avx(auVar7,auVar4);
    auVar9 = vpaddb_avx(auVar7,auVar4);
    auVar8 = ZEXT1664(auVar7 ^ auVar5);
    auVar7 = vpaddb_avx(auVar9,auVar4);
    auVar10 = ZEXT1664(auVar9 ^ auVar5);
    auVar9 = vpaddb_avx(auVar7,auVar4);
    auVar12 = ZEXT1664(auVar7 ^ auVar5);
    auVar7 = vpaddb_avx(auVar9,auVar4);
    auVar14 = ZEXT1664(auVar9 ^ auVar5);
    vpaddb_avx(auVar7,auVar4);
    auVar16 = ZEXT1664(auVar7 ^ auVar5);
  }
  else {
    auVar9 = vpshufb_avx(auVar7,in_XMM0);
    auVar4 = *(undefined1 (*) [16])(in_R11 + 0x30);
    auVar7 = vpaddd_avx(auVar9,*(undefined1 (*) [16])(in_R11 + 0x40));
    auVar9 = vpaddd_avx(auVar9,auVar4);
    auVar11 = vpaddd_avx(auVar7,auVar4);
    auVar13 = vpshufb_avx(auVar7,in_XMM0);
    auVar7 = vpaddd_avx(auVar9,auVar4);
    auVar15 = vpshufb_avx(auVar9,in_XMM0);
    auVar8 = ZEXT1664(auVar13 ^ auVar5);
    auVar9 = vpaddd_avx(auVar11,auVar4);
    auVar11 = vpshufb_avx(auVar11,in_XMM0);
    auVar10 = ZEXT1664(auVar15 ^ auVar5);
    auVar4 = vpaddd_avx(auVar7,auVar4);
    auVar7 = vpshufb_avx(auVar7,in_XMM0);
    auVar12 = ZEXT1664(auVar11 ^ auVar5);
    auVar9 = vpshufb_avx(auVar9,in_XMM0);
    auVar14 = ZEXT1664(auVar7 ^ auVar5);
    vpshufb_avx(auVar4,in_XMM0);
    auVar16 = ZEXT1664(auVar9 ^ auVar5);
  }
  do {
    auVar5 = auVar17._0_16_;
    auVar4 = aesenc(auVar6._0_16_,auVar5);
    auVar6._0_32_ = ZEXT1632(auVar4);
    auVar7 = aesenc(auVar8._0_16_,auVar5);
    auVar8._0_32_ = ZEXT1632(auVar7);
    auVar9 = aesenc(auVar10._0_16_,auVar5);
    auVar10._0_32_ = ZEXT1632(auVar9);
    auVar11 = aesenc(auVar12._0_16_,auVar5);
    auVar12._0_32_ = ZEXT1632(auVar11);
    auVar13 = aesenc(auVar14._0_16_,auVar5);
    auVar14._0_32_ = ZEXT1632(auVar13);
    auVar15 = aesenc(auVar16._0_16_,auVar5);
    auVar16._0_32_ = ZEXT1632(auVar15);
    auVar5 = *pauVar2;
    auVar17 = ZEXT1664(auVar5);
    pauVar2 = pauVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  auVar1 = *pauVar2;
  auVar4 = aesenc(auVar4,auVar5);
  auVar7 = aesenc(auVar7,auVar5);
  auVar9 = aesenc(auVar9,auVar5);
  auVar11 = aesenc(auVar11,auVar5);
  auVar13 = aesenc(auVar13,auVar5);
  auVar15 = aesenc(auVar15,auVar5);
  auVar5 = aesenclast(auVar4,auVar1 ^ *param_1);
  auVar4 = aesenclast(auVar7,auVar1 ^ param_1[1]);
  auVar7 = aesenclast(auVar9,auVar1 ^ param_1[2]);
  auVar9 = aesenclast(auVar11,auVar1 ^ param_1[3]);
  auVar11 = aesenclast(auVar13,auVar1 ^ param_1[4]);
  auVar13 = aesenclast(auVar15,auVar1 ^ param_1[5]);
  *param_2 = auVar5;
  param_2[1] = auVar4;
  param_2[2] = auVar7;
  param_2[3] = auVar9;
  param_2[4] = auVar11;
  param_2[5] = auVar13;
  return;
}

