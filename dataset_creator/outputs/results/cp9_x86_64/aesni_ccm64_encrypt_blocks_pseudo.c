
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
aesni_ccm64_encrypt_blocks
          (uint *param_1,uint *param_2,long param_3,uint *param_4,undefined1 (*param_5) [16],
          undefined1 (*param_6) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  lVar7 = _UNK_00496e68;
  lVar6 = _DAT_00496e60;
  auVar5 = _DAT_00496e40;
  auVar11 = *param_5;
  uVar8 = (ulong)(param_4[0x3c] << 4);
  auVar13 = *param_6;
  auVar14 = pshufb(auVar11,_DAT_00496e40);
  do {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    auVar10._0_4_ = auVar11._0_4_ ^ *param_4;
    auVar10._4_4_ = auVar11._4_4_ ^ param_4[1];
    auVar10._8_4_ = auVar11._8_4_ ^ param_4[2];
    auVar10._12_4_ = auVar11._12_4_ ^ param_4[3];
    auVar11 = *(undefined1 (*) [16])(param_4 + 4);
    auVar12._0_4_ = auVar13._0_4_ ^ *param_4 ^ uVar1;
    auVar12._4_4_ = auVar13._4_4_ ^ param_4[1] ^ uVar2;
    auVar12._8_4_ = auVar13._8_4_ ^ param_4[2] ^ uVar3;
    auVar12._12_4_ = auVar13._12_4_ ^ param_4[3] ^ uVar4;
    auVar13 = *(undefined1 (*) [16])(param_4 + 8);
    lVar9 = 0x10 - uVar8;
    do {
      auVar10 = aesenc(auVar10,auVar11);
      auVar12 = aesenc(auVar12,auVar11);
      auVar11 = *(undefined1 (*) [16])((long)param_4 + lVar9 + uVar8 + 0x20);
      lVar9 = lVar9 + 0x20;
      auVar10 = aesenc(auVar10,auVar13);
      auVar12 = aesenc(auVar12,auVar13);
      auVar13 = *(undefined1 (*) [16])((long)param_4 + lVar9 + uVar8 + 0x10);
    } while (lVar9 != 0);
    auVar10 = aesenc(auVar10,auVar11);
    auVar12 = aesenc(auVar12,auVar11);
    lVar9 = auVar14._8_8_;
    auVar14._0_8_ = auVar14._0_8_ + lVar6;
    auVar14._8_8_ = lVar9 + lVar7;
    param_3 = param_3 + -1;
    auVar11 = aesenclast(auVar10,auVar13);
    auVar13 = aesenclast(auVar12,auVar13);
    param_1 = param_1 + 4;
    *param_2 = uVar1 ^ auVar11._0_4_;
    param_2[1] = uVar2 ^ auVar11._4_4_;
    param_2[2] = uVar3 ^ auVar11._8_4_;
    param_2[3] = uVar4 ^ auVar11._12_4_;
    auVar11 = pshufb(auVar14,auVar5);
    param_2 = param_2 + 4;
  } while (param_3 != 0);
  *param_6 = auVar13;
  return ZEXT816(0);
}

