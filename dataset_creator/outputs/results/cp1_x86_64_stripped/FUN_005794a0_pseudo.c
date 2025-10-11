
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005794a0(int *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar1._4_4_ = param_1[2];
  auVar1._0_4_ = param_1[3];
  auVar1._8_4_ = param_1[1];
  auVar1._12_4_ = *param_1;
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = param_1[4];
  auVar4 = pshufb(*param_2,_DAT_0057cce0);
  auVar6 = pshufb(param_2[1],_DAT_0057cce0);
  auVar8 = pshufb(param_2[2],_DAT_0057cce0);
  auVar9 = pshufb(param_2[3],_DAT_0057cce0);
  do {
    param_3 = param_3 + -1;
    auVar3._0_4_ = auVar2._0_4_ + auVar4._0_4_;
    auVar3._4_4_ = auVar2._4_4_ + auVar4._4_4_;
    auVar3._8_4_ = auVar2._8_4_ + auVar4._8_4_;
    auVar3._12_4_ = auVar2._12_4_ + auVar4._12_4_;
    if (param_3 != 0) {
      param_2 = param_2 + 4;
    }
    auVar5 = sha1msg1_sha(auVar4,auVar6);
    auVar4 = sha1rnds4_sha(auVar1,auVar3,0);
    auVar3 = sha1nexte_sha(auVar1,auVar6);
    auVar7 = sha1msg1_sha(auVar6,auVar8);
    auVar5 = sha1msg2_sha(auVar5 ^ auVar8,auVar9);
    auVar6 = sha1rnds4_sha(auVar4,auVar3,0);
    auVar4 = sha1nexte_sha(auVar4,auVar8);
    auVar3 = sha1msg2_sha(auVar7 ^ auVar9,auVar5);
    auVar8 = sha1msg1_sha(auVar8,auVar9);
    auVar4 = sha1rnds4_sha(auVar6,auVar4,0);
    auVar6 = sha1nexte_sha(auVar6,auVar9);
    auVar9 = sha1msg1_sha(auVar9,auVar5);
    auVar7 = sha1msg2_sha(auVar8 ^ auVar5,auVar3);
    auVar6 = sha1rnds4_sha(auVar4,auVar6,0);
    auVar4 = sha1nexte_sha(auVar4,auVar5);
    auVar10 = sha1msg2_sha(auVar9 ^ auVar3,auVar7);
    auVar8 = sha1msg1_sha(auVar5,auVar3);
    auVar4 = sha1rnds4_sha(auVar6,auVar4,0);
    auVar6 = sha1nexte_sha(auVar6,auVar3);
    auVar9 = sha1msg1_sha(auVar3,auVar7);
    auVar8 = sha1msg2_sha(auVar8 ^ auVar7,auVar10);
    auVar6 = sha1rnds4_sha(auVar4,auVar6,1);
    auVar4 = sha1nexte_sha(auVar4,auVar7);
    auVar9 = sha1msg2_sha(auVar9 ^ auVar10,auVar8);
    auVar3 = sha1msg1_sha(auVar7,auVar10);
    auVar4 = sha1rnds4_sha(auVar6,auVar4,1);
    auVar6 = sha1nexte_sha(auVar6,auVar10);
    auVar5 = sha1msg1_sha(auVar10,auVar8);
    auVar3 = sha1msg2_sha(auVar3 ^ auVar8,auVar9);
    auVar6 = sha1rnds4_sha(auVar4,auVar6,1);
    auVar4 = sha1nexte_sha(auVar4,auVar8);
    auVar5 = sha1msg2_sha(auVar5 ^ auVar9,auVar3);
    auVar8 = sha1msg1_sha(auVar8,auVar9);
    auVar4 = sha1rnds4_sha(auVar6,auVar4,1);
    auVar6 = sha1nexte_sha(auVar6,auVar9);
    auVar9 = sha1msg1_sha(auVar9,auVar3);
    auVar8 = sha1msg2_sha(auVar8 ^ auVar3,auVar5);
    auVar6 = sha1rnds4_sha(auVar4,auVar6,1);
    auVar4 = sha1nexte_sha(auVar4,auVar3);
    auVar9 = sha1msg2_sha(auVar9 ^ auVar5,auVar8);
    auVar3 = sha1msg1_sha(auVar3,auVar5);
    auVar4 = sha1rnds4_sha(auVar6,auVar4,2);
    auVar6 = sha1nexte_sha(auVar6,auVar5);
    auVar5 = sha1msg1_sha(auVar5,auVar8);
    auVar3 = sha1msg2_sha(auVar3 ^ auVar8,auVar9);
    auVar6 = sha1rnds4_sha(auVar4,auVar6,2);
    auVar4 = sha1nexte_sha(auVar4,auVar8);
    auVar5 = sha1msg2_sha(auVar5 ^ auVar9,auVar3);
    auVar8 = sha1msg1_sha(auVar8,auVar9);
    auVar4 = sha1rnds4_sha(auVar6,auVar4,2);
    auVar6 = sha1nexte_sha(auVar6,auVar9);
    auVar9 = sha1msg1_sha(auVar9,auVar3);
    auVar8 = sha1msg2_sha(auVar8 ^ auVar3,auVar5);
    auVar6 = sha1rnds4_sha(auVar4,auVar6,2);
    auVar4 = sha1nexte_sha(auVar4,auVar3);
    auVar9 = sha1msg2_sha(auVar9 ^ auVar5,auVar8);
    auVar3 = sha1msg1_sha(auVar3,auVar5);
    auVar4 = sha1rnds4_sha(auVar6,auVar4,2);
    auVar6 = sha1nexte_sha(auVar6,auVar5);
    auVar5 = sha1msg1_sha(auVar5,auVar8);
    auVar3 = sha1msg2_sha(auVar3 ^ auVar8,auVar9);
    auVar6 = sha1rnds4_sha(auVar4,auVar6,3);
    auVar4 = sha1nexte_sha(auVar4,auVar8);
    auVar5 = sha1msg2_sha(auVar5 ^ auVar9,auVar3);
    auVar8 = sha1rnds4_sha(auVar6,auVar4,3);
    auVar6 = sha1nexte_sha(auVar6,auVar9);
    auVar4 = pshufb(*param_2,_DAT_0057cce0);
    auVar9 = sha1rnds4_sha(auVar8,auVar6,3);
    auVar8 = sha1nexte_sha(auVar8,auVar3);
    auVar6 = pshufb(param_2[1],_DAT_0057cce0);
    auVar3 = sha1rnds4_sha(auVar9,auVar8,3);
    auVar9 = sha1nexte_sha(auVar9,auVar5);
    auVar8 = pshufb(param_2[2],_DAT_0057cce0);
    auVar5 = sha1rnds4_sha(auVar3,auVar9,3);
    auVar2 = sha1nexte_sha(auVar3,auVar2);
    auVar9 = pshufb(param_2[3],_DAT_0057cce0);
    auVar7._0_4_ = auVar5._0_4_ + auVar1._0_4_;
    auVar7._4_4_ = auVar5._4_4_ + auVar1._4_4_;
    auVar7._8_4_ = auVar5._8_4_ + auVar1._8_4_;
    auVar7._12_4_ = auVar5._12_4_ + auVar1._12_4_;
    auVar1 = auVar7;
  } while (param_3 != 0);
  *param_1 = auVar7._12_4_;
  param_1[1] = auVar7._8_4_;
  param_1[2] = auVar7._4_4_;
  param_1[3] = auVar7._0_4_;
  param_1[4] = auVar2._12_4_;
  return;
}

