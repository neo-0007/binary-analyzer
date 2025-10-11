
/* WARNING: Removing unreachable block (ram,0x00586e48) */
/* WARNING: Removing unreachable block (ram,0x0058704e) */
/* WARNING: Removing unreachable block (ram,0x00586c3a) */
/* WARNING: Removing unreachable block (ram,0x00586a35) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00584f80(uint *param_1,undefined1 (*param_2) [16],long param_3)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  undefined1 (*pauVar4) [16];
  uint *puVar5;
  undefined1 (*pauVar6) [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [60];
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 (*pauVar24) [16];
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined1 (*pauVar33) [32];
  undefined1 (*pauVar34) [32];
  int *piVar35;
  undefined1 (*pauVar36) [16];
  undefined1 (*pauVar37) [32];
  undefined1 (*pauVar38) [32];
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 in_ZMM0 [64];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar68 [64];
  undefined1 auVar69 [64];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar73 [64];
  undefined1 auVar74 [64];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 in_ZMM3 [64];
  uint uVar85;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  uint uVar86;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  uint uVar118;
  uint uVar150;
  uint uVar151;
  uint uVar152;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 auStack_250 [400];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  
  auVar71 = _DAT_005863c0;
  auVar66 = _DAT_005863a0;
  if ((DAT_0094b5a0 & 0x20000000) != 0) {
    auVar68._16_48_ = in_ZMM1._16_48_;
    auVar73._16_48_ = in_ZMM2._16_48_;
    auVar73._12_4_ = param_1[2];
    auVar73._8_4_ = param_1[3];
    auVar7._20_4_ = *param_1;
    auVar7._16_4_ = param_1[1];
    auVar7._24_4_ = param_1[3];
    auVar7._28_4_ = param_1[2];
    auVar73._0_8_ = CONCAT44(param_1[6],param_1[7]);
    auVar7._8_4_ = param_1[5];
    auVar7._0_8_ = auVar73._0_8_;
    auVar7._12_4_ = param_1[4];
    auVar68._0_16_ = auVar7._8_16_;
    do {
      auVar75 = pshufb(*param_2,_DAT_00586380);
      pauVar4 = param_2 + 3;
      auVar66._0_4_ = DAT_00586180 + auVar75._0_4_;
      auVar66._4_4_ = DAT_00586184 + auVar75._4_4_;
      auVar66._8_4_ = DAT_00586188 + auVar75._8_4_;
      auVar66._12_4_ = DAT_0058618c + auVar75._12_4_;
      auVar144 = pshufb(param_2[1],_DAT_00586380);
      auVar74._16_48_ = auVar73._16_48_;
      auVar70 = sha256rnds2_sha(auVar73._0_16_,auVar68._0_16_,auVar66);
      auVar71._4_4_ = auVar66._12_4_;
      auVar71._0_4_ = auVar66._8_4_;
      auVar71._8_4_ = auVar66._0_4_;
      auVar71._12_4_ = auVar66._0_4_;
      auVar69._16_48_ = auVar68._16_48_;
      auVar66 = sha256rnds2_sha(auVar68._0_16_,auVar70,auVar71);
      auVar76._0_4_ = DAT_005861a0 + auVar144._0_4_;
      auVar76._4_4_ = DAT_005861a4 + auVar144._4_4_;
      auVar76._8_4_ = DAT_005861a8 + auVar144._8_4_;
      auVar76._12_4_ = DAT_005861ac + auVar144._12_4_;
      auVar92 = pshufb(param_2[2],_DAT_00586380);
      auVar71 = sha256rnds2_sha(auVar70,auVar66,auVar76);
      auVar70._4_4_ = auVar76._12_4_;
      auVar70._0_4_ = auVar76._8_4_;
      auVar70._8_4_ = auVar76._0_4_;
      auVar70._12_4_ = auVar76._0_4_;
      param_2 = param_2 + 4;
      auVar76 = sha256msg1_sha(auVar75,auVar144);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar70);
      auVar75._0_4_ = DAT_005861c0 + auVar92._0_4_;
      auVar75._4_4_ = DAT_005861c4 + auVar92._4_4_;
      auVar75._8_4_ = DAT_005861c8 + auVar92._8_4_;
      auVar75._12_4_ = DAT_005861cc + auVar92._12_4_;
      auVar110 = pshufb(*pauVar4,_DAT_00586380);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar75);
      auVar95._4_4_ = auVar75._12_4_;
      auVar95._0_4_ = auVar75._8_4_;
      auVar95._8_4_ = auVar75._0_4_;
      auVar95._12_4_ = auVar75._0_4_;
      auVar77._0_4_ = auVar76._0_4_ + auVar92._4_4_;
      auVar77._4_4_ = auVar76._4_4_ + auVar92._8_4_;
      auVar77._8_4_ = auVar76._8_4_ + auVar92._12_4_;
      auVar77._12_4_ = auVar76._12_4_ + auVar110._0_4_;
      auVar70 = sha256msg1_sha(auVar144,auVar92);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar95);
      auVar144._0_4_ = DAT_005861e0 + auVar110._0_4_;
      auVar144._4_4_ = DAT_005861e4 + auVar110._4_4_;
      auVar144._8_4_ = DAT_005861e8 + auVar110._8_4_;
      auVar144._12_4_ = DAT_005861ec + auVar110._12_4_;
      auVar76 = sha256msg2_sha(auVar77,auVar110);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar144);
      auVar91._4_4_ = auVar144._12_4_;
      auVar91._0_4_ = auVar144._8_4_;
      auVar91._8_4_ = auVar144._0_4_;
      auVar91._12_4_ = auVar144._0_4_;
      auVar80._0_4_ = auVar70._0_4_ + auVar110._4_4_;
      auVar80._4_4_ = auVar70._4_4_ + auVar110._8_4_;
      auVar80._8_4_ = auVar70._8_4_ + auVar110._12_4_;
      auVar80._12_4_ = auVar70._12_4_ + auVar76._0_4_;
      auVar75 = sha256msg1_sha(auVar92,auVar110);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar91);
      auVar92._0_4_ = DAT_00586200 + auVar76._0_4_;
      auVar92._4_4_ = DAT_00586204 + auVar76._4_4_;
      auVar92._8_4_ = DAT_00586208 + auVar76._8_4_;
      auVar92._12_4_ = DAT_0058620c + auVar76._12_4_;
      auVar70 = sha256msg2_sha(auVar80,auVar76);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar92);
      auVar109._4_4_ = auVar92._12_4_;
      auVar109._0_4_ = auVar92._8_4_;
      auVar109._8_4_ = auVar92._0_4_;
      auVar109._12_4_ = auVar92._0_4_;
      auVar87._0_4_ = auVar75._0_4_ + auVar76._4_4_;
      auVar87._4_4_ = auVar75._4_4_ + auVar76._8_4_;
      auVar87._8_4_ = auVar75._8_4_ + auVar76._12_4_;
      auVar87._12_4_ = auVar75._12_4_ + auVar70._0_4_;
      auVar95 = sha256msg1_sha(auVar110,auVar76);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar109);
      auVar110._0_4_ = DAT_00586220 + auVar70._0_4_;
      auVar110._4_4_ = DAT_00586224 + auVar70._4_4_;
      auVar110._8_4_ = DAT_00586228 + auVar70._8_4_;
      auVar110._12_4_ = DAT_0058622c + auVar70._12_4_;
      auVar75 = sha256msg2_sha(auVar87,auVar70);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar110);
      auVar111._4_4_ = auVar110._12_4_;
      auVar111._0_4_ = auVar110._8_4_;
      auVar111._8_4_ = auVar110._0_4_;
      auVar111._12_4_ = auVar110._0_4_;
      auVar96._0_4_ = auVar95._0_4_ + auVar70._4_4_;
      auVar96._4_4_ = auVar95._4_4_ + auVar70._8_4_;
      auVar96._8_4_ = auVar95._8_4_ + auVar70._12_4_;
      auVar96._12_4_ = auVar95._12_4_ + auVar75._0_4_;
      auVar76 = sha256msg1_sha(auVar76,auVar70);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar111);
      auVar143._0_4_ = DAT_00586240 + auVar75._0_4_;
      auVar143._4_4_ = DAT_00586244 + auVar75._4_4_;
      auVar143._8_4_ = DAT_00586248 + auVar75._8_4_;
      auVar143._12_4_ = DAT_0058624c + auVar75._12_4_;
      auVar95 = sha256msg2_sha(auVar96,auVar75);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar143);
      auVar145._4_4_ = auVar143._12_4_;
      auVar145._0_4_ = auVar143._8_4_;
      auVar145._8_4_ = auVar143._0_4_;
      auVar145._12_4_ = auVar143._0_4_;
      auVar78._0_4_ = auVar76._0_4_ + auVar75._4_4_;
      auVar78._4_4_ = auVar76._4_4_ + auVar75._8_4_;
      auVar78._8_4_ = auVar76._8_4_ + auVar75._12_4_;
      auVar78._12_4_ = auVar76._12_4_ + auVar95._0_4_;
      auVar70 = sha256msg1_sha(auVar70,auVar75);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar145);
      auVar146._0_4_ = DAT_00586260 + auVar95._0_4_;
      auVar146._4_4_ = DAT_00586264 + auVar95._4_4_;
      auVar146._8_4_ = DAT_00586268 + auVar95._8_4_;
      auVar146._12_4_ = DAT_0058626c + auVar95._12_4_;
      auVar76 = sha256msg2_sha(auVar78,auVar95);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar146);
      auVar147._4_4_ = auVar146._12_4_;
      auVar147._0_4_ = auVar146._8_4_;
      auVar147._8_4_ = auVar146._0_4_;
      auVar147._12_4_ = auVar146._0_4_;
      auVar81._0_4_ = auVar70._0_4_ + auVar95._4_4_;
      auVar81._4_4_ = auVar70._4_4_ + auVar95._8_4_;
      auVar81._8_4_ = auVar70._8_4_ + auVar95._12_4_;
      auVar81._12_4_ = auVar70._12_4_ + auVar76._0_4_;
      auVar75 = sha256msg1_sha(auVar75,auVar95);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar147);
      auVar50._0_4_ = _DAT_00586280 + auVar76._0_4_;
      auVar50._4_4_ = _UNK_00586284 + auVar76._4_4_;
      auVar50._8_4_ = _UNK_00586288 + auVar76._8_4_;
      auVar50._12_4_ = _UNK_0058628c + auVar76._12_4_;
      auVar70 = sha256msg2_sha(auVar81,auVar76);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar50);
      auVar51._4_4_ = auVar50._12_4_;
      auVar51._0_4_ = auVar50._8_4_;
      auVar51._8_4_ = auVar50._0_4_;
      auVar51._12_4_ = auVar50._0_4_;
      auVar88._0_4_ = auVar75._0_4_ + auVar76._4_4_;
      auVar88._4_4_ = auVar75._4_4_ + auVar76._8_4_;
      auVar88._8_4_ = auVar75._8_4_ + auVar76._12_4_;
      auVar88._12_4_ = auVar75._12_4_ + auVar70._0_4_;
      auVar95 = sha256msg1_sha(auVar95,auVar76);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar51);
      auVar52._0_4_ = _DAT_005862a0 + auVar70._0_4_;
      auVar52._4_4_ = _UNK_005862a4 + auVar70._4_4_;
      auVar52._8_4_ = _UNK_005862a8 + auVar70._8_4_;
      auVar52._12_4_ = _UNK_005862ac + auVar70._12_4_;
      auVar75 = sha256msg2_sha(auVar88,auVar70);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar52);
      auVar53._4_4_ = auVar52._12_4_;
      auVar53._0_4_ = auVar52._8_4_;
      auVar53._8_4_ = auVar52._0_4_;
      auVar53._12_4_ = auVar52._0_4_;
      auVar97._0_4_ = auVar95._0_4_ + auVar70._4_4_;
      auVar97._4_4_ = auVar95._4_4_ + auVar70._8_4_;
      auVar97._8_4_ = auVar95._8_4_ + auVar70._12_4_;
      auVar97._12_4_ = auVar95._12_4_ + auVar75._0_4_;
      auVar76 = sha256msg1_sha(auVar76,auVar70);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar53);
      auVar54._0_4_ = _DAT_005862c0 + auVar75._0_4_;
      auVar54._4_4_ = _UNK_005862c4 + auVar75._4_4_;
      auVar54._8_4_ = _UNK_005862c8 + auVar75._8_4_;
      auVar54._12_4_ = _UNK_005862cc + auVar75._12_4_;
      auVar95 = sha256msg2_sha(auVar97,auVar75);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar54);
      auVar55._4_4_ = auVar54._12_4_;
      auVar55._0_4_ = auVar54._8_4_;
      auVar55._8_4_ = auVar54._0_4_;
      auVar55._12_4_ = auVar54._0_4_;
      auVar79._0_4_ = auVar76._0_4_ + auVar75._4_4_;
      auVar79._4_4_ = auVar76._4_4_ + auVar75._8_4_;
      auVar79._8_4_ = auVar76._8_4_ + auVar75._12_4_;
      auVar79._12_4_ = auVar76._12_4_ + auVar95._0_4_;
      auVar70 = sha256msg1_sha(auVar70,auVar75);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar55);
      auVar56._0_4_ = _DAT_005862e0 + auVar95._0_4_;
      auVar56._4_4_ = _UNK_005862e4 + auVar95._4_4_;
      auVar56._8_4_ = _UNK_005862e8 + auVar95._8_4_;
      auVar56._12_4_ = _UNK_005862ec + auVar95._12_4_;
      auVar76 = sha256msg2_sha(auVar79,auVar95);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar56);
      auVar57._4_4_ = auVar56._12_4_;
      auVar57._0_4_ = auVar56._8_4_;
      auVar57._8_4_ = auVar56._0_4_;
      auVar57._12_4_ = auVar56._0_4_;
      auVar82._0_4_ = auVar70._0_4_ + auVar95._4_4_;
      auVar82._4_4_ = auVar70._4_4_ + auVar95._8_4_;
      auVar82._8_4_ = auVar70._8_4_ + auVar95._12_4_;
      auVar82._12_4_ = auVar70._12_4_ + auVar76._0_4_;
      auVar75 = sha256msg1_sha(auVar75,auVar95);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar57);
      auVar58._0_4_ = _DAT_00586300 + auVar76._0_4_;
      auVar58._4_4_ = _UNK_00586304 + auVar76._4_4_;
      auVar58._8_4_ = _UNK_00586308 + auVar76._8_4_;
      auVar58._12_4_ = _UNK_0058630c + auVar76._12_4_;
      auVar70 = sha256msg2_sha(auVar82,auVar76);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar58);
      auVar59._4_4_ = auVar58._12_4_;
      auVar59._0_4_ = auVar58._8_4_;
      auVar59._8_4_ = auVar58._0_4_;
      auVar59._12_4_ = auVar58._0_4_;
      auVar89._0_4_ = auVar75._0_4_ + auVar76._4_4_;
      auVar89._4_4_ = auVar75._4_4_ + auVar76._8_4_;
      auVar89._8_4_ = auVar75._8_4_ + auVar76._12_4_;
      auVar89._12_4_ = auVar75._12_4_ + auVar70._0_4_;
      auVar75 = sha256msg1_sha(auVar95,auVar76);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar59);
      auVar60._0_4_ = _DAT_00586320 + auVar70._0_4_;
      auVar60._4_4_ = _UNK_00586324 + auVar70._4_4_;
      auVar60._8_4_ = _UNK_00586328 + auVar70._8_4_;
      auVar60._12_4_ = _UNK_0058632c + auVar70._12_4_;
      auVar76 = sha256msg2_sha(auVar89,auVar70);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar60);
      auVar61._4_4_ = auVar60._12_4_;
      auVar61._0_4_ = auVar60._8_4_;
      auVar61._8_4_ = auVar60._0_4_;
      auVar61._12_4_ = auVar60._0_4_;
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar61);
      auVar98._0_4_ = auVar75._0_4_ + auVar70._4_4_;
      auVar98._4_4_ = auVar75._4_4_ + auVar70._8_4_;
      auVar98._8_4_ = auVar75._8_4_ + auVar70._12_4_;
      auVar98._12_4_ = auVar75._12_4_ + auVar76._0_4_;
      auVar62._0_4_ = _DAT_00586340 + auVar76._0_4_;
      auVar62._4_4_ = _UNK_00586344 + auVar76._4_4_;
      auVar62._8_4_ = _UNK_00586348 + auVar76._8_4_;
      auVar62._12_4_ = _UNK_0058634c + auVar76._12_4_;
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar62);
      auVar63._4_4_ = auVar62._12_4_;
      auVar63._0_4_ = auVar62._8_4_;
      auVar63._8_4_ = auVar62._0_4_;
      auVar63._12_4_ = auVar62._0_4_;
      auVar76 = sha256msg2_sha(auVar98,auVar76);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar63);
      auVar64._0_4_ = _DAT_00586360 + auVar76._0_4_;
      auVar64._4_4_ = _UNK_00586364 + auVar76._4_4_;
      auVar64._8_4_ = _UNK_00586368 + auVar76._8_4_;
      auVar64._12_4_ = _UNK_0058636c + auVar76._12_4_;
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar64);
      auVar65._4_4_ = auVar64._12_4_;
      auVar65._0_4_ = auVar64._8_4_;
      auVar65._8_4_ = auVar64._0_4_;
      auVar65._12_4_ = auVar64._0_4_;
      param_3 = param_3 + -1;
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar65);
      auVar74._0_4_ = auVar71._0_4_ + auVar73._0_4_;
      auVar74._4_4_ = auVar71._4_4_ + auVar73._4_4_;
      auVar74._8_4_ = auVar71._8_4_ + auVar73._8_4_;
      auVar74._12_4_ = auVar71._12_4_ + auVar73._12_4_;
      auVar69._0_4_ = auVar66._0_4_ + auVar68._0_4_;
      auVar69._4_4_ = auVar66._4_4_ + auVar68._4_4_;
      auVar69._8_4_ = auVar66._8_4_ + auVar68._8_4_;
      auVar69._12_4_ = auVar66._12_4_ + auVar68._12_4_;
      auVar68 = auVar69;
      auVar73 = auVar74;
    } while (param_3 != 0);
    auVar72._4_4_ = auVar74._0_4_;
    auVar72._0_4_ = auVar74._4_4_;
    auVar72._8_4_ = auVar74._12_4_;
    auVar72._12_4_ = auVar74._8_4_;
    auVar149._4_4_ = auVar69._8_4_;
    auVar149._0_4_ = auVar69._12_4_;
    auVar149._8_4_ = auVar69._4_4_;
    auVar149._12_4_ = auVar69._0_4_;
    auVar8._4_56_ = auVar69._8_56_;
    auVar8._0_4_ = auVar69._0_4_;
    auVar67._0_8_ = auVar8._0_8_ << 0x20;
    auVar67._8_4_ = auVar69._12_4_;
    auVar67._12_4_ = auVar69._8_4_;
    auVar149._16_16_ = auVar72;
    *(long *)param_1 = auVar67._8_8_;
    *(long *)(param_1 + 2) = auVar72._8_8_;
    *(undefined1 (*) [16])(param_1 + 4) = auVar149._8_16_;
    return;
  }
  if ((DAT_0094b5a0 & 0x128) == 0x128) {
    uVar32 = (ulong)auStack_250 & 0xfffffffffffffc00;
    pauVar33 = (undefined1 (*) [32])(uVar32 + 0x1c0);
    *(uint **)(uVar32 + 0x200) = param_1;
    *(undefined1 (**) [16])(uVar32 + 0x208) = param_2;
    *(undefined1 (**) [32])(uVar32 + 0x210) = (undefined1 (*) [32])(param_2 + param_3 * 4);
    *(BADSPACEBASE **)(uVar32 + 0x218) = register0x00000020;
    pauVar38 = (undefined1 (*) [32])(param_2 + 4);
    uVar25 = *param_1;
    uVar27 = param_1[1];
    uVar30 = param_1[2];
    pauVar37 = pauVar38;
    if (pauVar38 == (undefined1 (*) [32])(param_2 + param_3 * 4)) {
      pauVar37 = (undefined1 (*) [32])(uVar32 + 0x1c0);
    }
    uVar45 = param_1[3];
    uVar46 = param_1[4];
    uVar47 = param_1[5];
    uVar48 = param_1[6];
    uVar28 = param_1[7];
    auVar22._16_16_ = _UNK_005863b0;
    auVar22._0_16_ = _DAT_005863a0;
    auVar23._16_16_ = _UNK_005863d0;
    auVar23._0_16_ = _DAT_005863c0;
    do {
      auVar117._16_16_ = _UNK_00586390;
      auVar117._0_16_ = _DAT_00586380;
      auVar113._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])*pauVar37 +
           ZEXT116(1) * *(undefined1 (*) [16])pauVar38[-2];
      auVar113._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])*pauVar37;
      auVar115._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])(*pauVar37 + 0x10) +
           ZEXT116(1) * *(undefined1 (*) [16])(pauVar38[-2] + 0x10);
      auVar115._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])(*pauVar37 + 0x10);
      auVar113 = vpshufb_avx2(auVar113,auVar117);
      auVar116._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])pauVar37[1] +
           ZEXT116(1) * *(undefined1 (*) [16])pauVar38[-1];
      auVar116._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])pauVar37[1];
      auVar115 = vpshufb_avx2(auVar115,auVar117);
      auVar148._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])(pauVar37[1] + 0x10) +
           ZEXT116(1) * *(undefined1 (*) [16])(pauVar38[-1] + 0x10);
      auVar148._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])(pauVar37[1] + 0x10);
      auVar116 = vpshufb_avx2(auVar116,auVar117);
      auVar93._4_4_ = DAT_00586184;
      auVar93._0_4_ = DAT_00586180;
      auVar93._8_4_ = DAT_00586188;
      auVar93._12_4_ = DAT_0058618c;
      auVar93._16_16_ = _UNK_00586190;
      auVar7 = vpaddd_avx2(auVar113,auVar93);
      auVar117 = vpshufb_avx2(auVar148,auVar117);
      auVar94._4_4_ = DAT_005861a4;
      auVar94._0_4_ = DAT_005861a0;
      auVar94._8_4_ = DAT_005861a8;
      auVar94._12_4_ = DAT_005861ac;
      auVar94._16_16_ = _UNK_005861b0;
      auVar149 = vpaddd_avx2(auVar115,auVar94);
      auVar112._4_4_ = DAT_005861c4;
      auVar112._0_4_ = DAT_005861c0;
      auVar112._8_4_ = DAT_005861c8;
      auVar112._12_4_ = DAT_005861cc;
      auVar112._16_16_ = _UNK_005861d0;
      auVar93 = vpaddd_avx2(auVar116,auVar112);
      auVar114._4_4_ = DAT_005861e4;
      auVar114._0_4_ = DAT_005861e0;
      auVar114._8_4_ = DAT_005861e8;
      auVar114._12_4_ = DAT_005861ec;
      auVar114._16_16_ = _UNK_005861f0;
      auVar94 = vpaddd_avx2(auVar117,auVar114);
      *pauVar33 = auVar7;
      uVar49 = 0;
      pauVar33[1] = auVar149;
      *(undefined8 *)(pauVar33[-3] + 0x18) = *(undefined8 *)(pauVar33[2] + 0x18);
      pauVar33[-2] = auVar93;
      uVar44 = uVar27 ^ uVar30;
      pauVar33[-1] = auVar94;
      pauVar33 = pauVar33 + -2;
      pauVar37 = (undefined1 (*) [32])&DAT_00586200;
      do {
        pauVar34 = pauVar33;
        *(undefined8 *)(pauVar34[-3] + 0x18) = *(undefined8 *)(pauVar34[-1] + 0x18);
        auVar149 = vpalignr_avx2(auVar115,auVar113,4);
        auVar7 = vpalignr_avx2(auVar117,auVar116,4);
        uVar25 = uVar25 + uVar49;
        auVar112 = vpsrld_avx2(auVar149,7);
        auVar7 = vpaddd_avx2(auVar113,auVar7);
        auVar148 = vpsrld_avx2(auVar149,3);
        iVar43 = uVar28 + *(int *)pauVar34[2] + (uVar47 & uVar46) + (~uVar46 & uVar48) +
                 ((uVar46 >> 0x19 | uVar46 << 7) ^ (uVar46 >> 0xb | uVar46 << 0x15) ^
                 (uVar46 >> 6 | uVar46 << 0x1a));
        auVar93 = vpslld_avx2(auVar149,0xe);
        uVar45 = uVar45 + iVar43;
        auVar149 = vpshufd_avx2(auVar117,0xfa);
        auVar113 = vpsrld_avx2(auVar112,0xb);
        uVar28 = iVar43 + (uVar44 & (uVar25 ^ uVar27) ^ uVar27) +
                 ((uVar25 >> 0xd | uVar25 * 0x80000) ^ (uVar25 >> 0x16 | uVar25 * 0x400) ^
                 (uVar25 >> 2 | uVar25 * 0x40000000));
        auVar94 = vpslld_avx2(auVar93,0xb);
        auVar114 = vpsrld_avx2(auVar149,10);
        iVar43 = uVar48 + *(int *)(pauVar34[2] + 4) + (uVar46 & uVar45) + (~uVar45 & uVar47) +
                 ((uVar45 >> 0x19 | uVar45 * 0x80) ^ (uVar45 >> 0xb | uVar45 * 0x200000) ^
                 (uVar45 >> 6 | uVar45 * 0x4000000));
        uVar30 = uVar30 + iVar43;
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar7 = vpaddd_avx2(auVar7,auVar148 ^ auVar112 ^ auVar93 ^ auVar113 ^ auVar94);
        auVar93 = vpsrlq_avx2(auVar149,2);
        uVar48 = iVar43 + ((uVar25 ^ uVar27) & (uVar28 ^ uVar25) ^ uVar25) +
                 ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 >> 0x16 | uVar28 * 0x400) ^
                 (uVar28 >> 2 | uVar28 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar114 ^ auVar149 ^ auVar93,auVar22);
        auVar7 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar47 + *(int *)(pauVar34[2] + 8) + (uVar45 & uVar30) + (~uVar30 & uVar46) +
                 ((uVar30 >> 0x19 | uVar30 * 0x80) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
                 (uVar30 >> 6 | uVar30 * 0x4000000));
        auVar149 = vpshufd_avx2(auVar7,0x50);
        uVar27 = uVar27 + iVar43;
        auVar93 = vpsrld_avx2(auVar149,10);
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar94 = vpsrlq_avx2(auVar149,2);
        uVar47 = iVar43 + ((uVar28 ^ uVar25) & (uVar48 ^ uVar28) ^ uVar28) +
                 ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
                 (uVar48 >> 2 | uVar48 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar93 ^ auVar149 ^ auVar94,auVar23);
        auVar113 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar46 + *(int *)(pauVar34[2] + 0xc) + (uVar30 & uVar27) + (~uVar27 & uVar45) +
                 ((uVar27 >> 0x19 | uVar27 * 0x80) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
                 (uVar27 >> 6 | uVar27 * 0x4000000));
        auVar7 = vpaddd_avx2(auVar113,*pauVar37);
        uVar25 = uVar25 + iVar43;
        pauVar34[-2] = auVar7;
        auVar149 = vpalignr_avx2(auVar116,auVar115,4);
        auVar7 = vpalignr_avx2(auVar113,auVar117,4);
        uVar46 = iVar43 + ((uVar48 ^ uVar28) & (uVar47 ^ uVar48) ^ uVar48) +
                 ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
                 (uVar47 >> 2 | uVar47 * 0x40000000));
        auVar112 = vpsrld_avx2(auVar149,7);
        auVar7 = vpaddd_avx2(auVar115,auVar7);
        auVar148 = vpsrld_avx2(auVar149,3);
        iVar43 = uVar45 + *(int *)pauVar34[3] + (uVar27 & uVar25) + (~uVar25 & uVar30) +
                 ((uVar25 >> 0x19 | uVar25 * 0x80) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
                 (uVar25 >> 6 | uVar25 * 0x4000000));
        auVar93 = vpslld_avx2(auVar149,0xe);
        uVar28 = uVar28 + iVar43;
        auVar149 = vpshufd_avx2(auVar113,0xfa);
        auVar115 = vpsrld_avx2(auVar112,0xb);
        uVar45 = iVar43 + ((uVar47 ^ uVar48) & (uVar46 ^ uVar47) ^ uVar47) +
                 ((uVar46 >> 0xd | uVar46 * 0x80000) ^ (uVar46 >> 0x16 | uVar46 * 0x400) ^
                 (uVar46 >> 2 | uVar46 * 0x40000000));
        auVar94 = vpslld_avx2(auVar93,0xb);
        auVar114 = vpsrld_avx2(auVar149,10);
        iVar43 = uVar30 + *(int *)(pauVar34[3] + 4) + (uVar25 & uVar28) + (~uVar28 & uVar27) +
                 ((uVar28 >> 0x19 | uVar28 * 0x80) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
                 (uVar28 >> 6 | uVar28 * 0x4000000));
        uVar48 = uVar48 + iVar43;
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar7 = vpaddd_avx2(auVar7,auVar148 ^ auVar112 ^ auVar93 ^ auVar115 ^ auVar94);
        auVar93 = vpsrlq_avx2(auVar149,2);
        uVar30 = iVar43 + ((uVar46 ^ uVar47) & (uVar45 ^ uVar46) ^ uVar46) +
                 ((uVar45 >> 0xd | uVar45 * 0x80000) ^ (uVar45 >> 0x16 | uVar45 * 0x400) ^
                 (uVar45 >> 2 | uVar45 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar114 ^ auVar149 ^ auVar93,auVar22);
        auVar7 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar27 + *(int *)(pauVar34[3] + 8) + (uVar28 & uVar48) + (~uVar48 & uVar25) +
                 ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
                 (uVar48 >> 6 | uVar48 * 0x4000000));
        auVar149 = vpshufd_avx2(auVar7,0x50);
        uVar47 = uVar47 + iVar43;
        auVar93 = vpsrld_avx2(auVar149,10);
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar94 = vpsrlq_avx2(auVar149,2);
        uVar27 = iVar43 + ((uVar45 ^ uVar46) & (uVar30 ^ uVar45) ^ uVar45) +
                 ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 0x16 | uVar30 * 0x400) ^
                 (uVar30 >> 2 | uVar30 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar93 ^ auVar149 ^ auVar94,auVar23);
        auVar115 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar25 + *(int *)(pauVar34[3] + 0xc) + (uVar48 & uVar47) + (~uVar47 & uVar28) +
                 ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
                 (uVar47 >> 6 | uVar47 * 0x4000000));
        auVar7 = vpaddd_avx2(auVar115,pauVar37[1]);
        uVar46 = uVar46 + iVar43;
        pauVar34[-1] = auVar7;
        pauVar33 = pauVar34 + -4;
        *(undefined8 *)(pauVar34[-5] + 0x18) = *(undefined8 *)(pauVar34[-3] + 0x18);
        auVar149 = vpalignr_avx2(auVar117,auVar116,4);
        auVar7 = vpalignr_avx2(auVar115,auVar113,4);
        uVar25 = iVar43 + ((uVar30 ^ uVar45) & (uVar27 ^ uVar30) ^ uVar30) +
                 ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 0x16 | uVar27 * 0x400) ^
                 (uVar27 >> 2 | uVar27 * 0x40000000));
        auVar112 = vpsrld_avx2(auVar149,7);
        auVar7 = vpaddd_avx2(auVar116,auVar7);
        auVar148 = vpsrld_avx2(auVar149,3);
        iVar43 = uVar28 + *(int *)*pauVar34 + (uVar47 & uVar46) + (~uVar46 & uVar48) +
                 ((uVar46 >> 0x19 | uVar46 * 0x80) ^ (uVar46 >> 0xb | uVar46 * 0x200000) ^
                 (uVar46 >> 6 | uVar46 * 0x4000000));
        auVar93 = vpslld_avx2(auVar149,0xe);
        uVar45 = uVar45 + iVar43;
        auVar149 = vpshufd_avx2(auVar115,0xfa);
        auVar116 = vpsrld_avx2(auVar112,0xb);
        uVar28 = iVar43 + ((uVar27 ^ uVar30) & (uVar25 ^ uVar27) ^ uVar27) +
                 ((uVar25 >> 0xd | uVar25 * 0x80000) ^ (uVar25 >> 0x16 | uVar25 * 0x400) ^
                 (uVar25 >> 2 | uVar25 * 0x40000000));
        auVar94 = vpslld_avx2(auVar93,0xb);
        auVar114 = vpsrld_avx2(auVar149,10);
        iVar43 = uVar48 + *(int *)(*pauVar34 + 4) + (uVar46 & uVar45) + (~uVar45 & uVar47) +
                 ((uVar45 >> 0x19 | uVar45 * 0x80) ^ (uVar45 >> 0xb | uVar45 * 0x200000) ^
                 (uVar45 >> 6 | uVar45 * 0x4000000));
        uVar30 = uVar30 + iVar43;
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar7 = vpaddd_avx2(auVar7,auVar148 ^ auVar112 ^ auVar93 ^ auVar116 ^ auVar94);
        auVar93 = vpsrlq_avx2(auVar149,2);
        uVar48 = iVar43 + ((uVar25 ^ uVar27) & (uVar28 ^ uVar25) ^ uVar25) +
                 ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 >> 0x16 | uVar28 * 0x400) ^
                 (uVar28 >> 2 | uVar28 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar114 ^ auVar149 ^ auVar93,auVar22);
        auVar7 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar47 + *(int *)(*pauVar34 + 8) + (uVar45 & uVar30) + (~uVar30 & uVar46) +
                 ((uVar30 >> 0x19 | uVar30 * 0x80) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
                 (uVar30 >> 6 | uVar30 * 0x4000000));
        auVar149 = vpshufd_avx2(auVar7,0x50);
        uVar27 = uVar27 + iVar43;
        auVar93 = vpsrld_avx2(auVar149,10);
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar94 = vpsrlq_avx2(auVar149,2);
        uVar47 = iVar43 + ((uVar28 ^ uVar25) & (uVar48 ^ uVar28) ^ uVar28) +
                 ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
                 (uVar48 >> 2 | uVar48 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar93 ^ auVar149 ^ auVar94,auVar23);
        auVar116 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar46 + *(int *)(*pauVar34 + 0xc) + (uVar30 & uVar27) + (~uVar27 & uVar45) +
                 ((uVar27 >> 0x19 | uVar27 * 0x80) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
                 (uVar27 >> 6 | uVar27 * 0x4000000));
        auVar7 = vpaddd_avx2(auVar116,pauVar37[2]);
        uVar25 = uVar25 + iVar43;
        *pauVar33 = auVar7;
        auVar149 = vpalignr_avx2(auVar113,auVar117,4);
        auVar7 = vpalignr_avx2(auVar116,auVar115,4);
        uVar46 = iVar43 + ((uVar48 ^ uVar28) & (uVar47 ^ uVar48) ^ uVar48) +
                 ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
                 (uVar47 >> 2 | uVar47 * 0x40000000));
        auVar112 = vpsrld_avx2(auVar149,7);
        auVar7 = vpaddd_avx2(auVar117,auVar7);
        auVar148 = vpsrld_avx2(auVar149,3);
        iVar43 = uVar45 + *(int *)pauVar34[1] + (uVar27 & uVar25) + (~uVar25 & uVar30) +
                 ((uVar25 >> 0x19 | uVar25 * 0x80) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
                 (uVar25 >> 6 | uVar25 * 0x4000000));
        auVar93 = vpslld_avx2(auVar149,0xe);
        uVar28 = uVar28 + iVar43;
        auVar149 = vpshufd_avx2(auVar116,0xfa);
        auVar117 = vpsrld_avx2(auVar112,0xb);
        uVar45 = iVar43 + ((uVar47 ^ uVar48) & (uVar46 ^ uVar47) ^ uVar47) +
                 ((uVar46 >> 0xd | uVar46 * 0x80000) ^ (uVar46 >> 0x16 | uVar46 * 0x400) ^
                 (uVar46 >> 2 | uVar46 * 0x40000000));
        auVar94 = vpslld_avx2(auVar93,0xb);
        auVar114 = vpsrld_avx2(auVar149,10);
        iVar43 = uVar30 + *(int *)(pauVar34[1] + 4) + (uVar25 & uVar28) + (~uVar28 & uVar27) +
                 ((uVar28 >> 0x19 | uVar28 * 0x80) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
                 (uVar28 >> 6 | uVar28 * 0x4000000));
        uVar48 = uVar48 + iVar43;
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar7 = vpaddd_avx2(auVar7,auVar148 ^ auVar112 ^ auVar93 ^ auVar117 ^ auVar94);
        auVar93 = vpsrlq_avx2(auVar149,2);
        uVar30 = iVar43 + ((uVar46 ^ uVar47) & (uVar45 ^ uVar46) ^ uVar46) +
                 ((uVar45 >> 0xd | uVar45 * 0x80000) ^ (uVar45 >> 0x16 | uVar45 * 0x400) ^
                 (uVar45 >> 2 | uVar45 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar114 ^ auVar149 ^ auVar93,auVar22);
        auVar7 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar27 + *(int *)(pauVar34[1] + 8) + (uVar28 & uVar48) + (~uVar48 & uVar25) +
                 ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
                 (uVar48 >> 6 | uVar48 * 0x4000000));
        auVar149 = vpshufd_avx2(auVar7,0x50);
        uVar47 = uVar47 + iVar43;
        auVar93 = vpsrld_avx2(auVar149,10);
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar94 = vpsrlq_avx2(auVar149,2);
        uVar27 = iVar43 + ((uVar45 ^ uVar46) & (uVar30 ^ uVar45) ^ uVar45) +
                 ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 0x16 | uVar30 * 0x400) ^
                 (uVar30 >> 2 | uVar30 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar93 ^ auVar149 ^ auVar94,auVar23);
        auVar117 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar25 + *(int *)(pauVar34[1] + 0xc) + (uVar48 & uVar47) + (~uVar47 & uVar28) +
                 ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
                 (uVar47 >> 6 | uVar47 * 0x4000000));
        uVar44 = uVar27 ^ uVar30;
        auVar7 = vpaddd_avx2(auVar117,pauVar37[3]);
        uVar46 = uVar46 + iVar43;
        uVar49 = (uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 0x16 | uVar27 * 0x400) ^
                 (uVar27 >> 2 | uVar27 * 0x40000000);
        uVar25 = iVar43 + ((uVar30 ^ uVar45) & uVar44 ^ uVar30);
        pauVar34[-3] = auVar7;
        pauVar6 = pauVar37 + 4;
        pauVar37 = pauVar37 + 4;
      } while (*(char *)((long)*pauVar6 + 3) != '\0');
      uVar25 = uVar25 + uVar49;
      iVar43 = uVar28 + *(int *)pauVar34[-2] + (uVar47 & uVar46) + (~uVar46 & uVar48) +
               ((uVar46 >> 0x19 | uVar46 * 0x80) ^ (uVar46 >> 0xb | uVar46 * 0x200000) ^
               (uVar46 >> 6 | uVar46 * 0x4000000));
      uVar45 = uVar45 + iVar43;
      uVar28 = iVar43 + (uVar44 & (uVar25 ^ uVar27) ^ uVar27) +
               ((uVar25 >> 0xd | uVar25 * 0x80000) ^ (uVar25 >> 0x16 | uVar25 * 0x400) ^
               (uVar25 >> 2 | uVar25 * 0x40000000));
      iVar43 = uVar48 + *(int *)(pauVar34[-2] + 4) + (uVar46 & uVar45) + (~uVar45 & uVar47) +
               ((uVar45 >> 0x19 | uVar45 * 0x80) ^ (uVar45 >> 0xb | uVar45 * 0x200000) ^
               (uVar45 >> 6 | uVar45 * 0x4000000));
      uVar30 = uVar30 + iVar43;
      uVar48 = iVar43 + ((uVar25 ^ uVar27) & (uVar28 ^ uVar25) ^ uVar25) +
               ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 >> 0x16 | uVar28 * 0x400) ^
               (uVar28 >> 2 | uVar28 * 0x40000000));
      iVar43 = uVar47 + *(int *)(pauVar34[-2] + 8) + (uVar45 & uVar30) + (~uVar30 & uVar46) +
               ((uVar30 >> 0x19 | uVar30 * 0x80) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
               (uVar30 >> 6 | uVar30 * 0x4000000));
      uVar27 = uVar27 + iVar43;
      uVar47 = iVar43 + ((uVar28 ^ uVar25) & (uVar48 ^ uVar28) ^ uVar28) +
               ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
               (uVar48 >> 2 | uVar48 * 0x40000000));
      iVar43 = uVar46 + *(int *)(pauVar34[-2] + 0xc) + (uVar30 & uVar27) + (~uVar27 & uVar45) +
               ((uVar27 >> 0x19 | uVar27 * 0x80) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
               (uVar27 >> 6 | uVar27 * 0x4000000));
      uVar25 = uVar25 + iVar43;
      uVar46 = iVar43 + ((uVar48 ^ uVar28) & (uVar47 ^ uVar48) ^ uVar48) +
               ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
               (uVar47 >> 2 | uVar47 * 0x40000000));
      iVar43 = uVar45 + *(int *)pauVar34[-1] + (uVar27 & uVar25) + (~uVar25 & uVar30) +
               ((uVar25 >> 0x19 | uVar25 * 0x80) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
               (uVar25 >> 6 | uVar25 * 0x4000000));
      uVar28 = uVar28 + iVar43;
      uVar45 = iVar43 + ((uVar47 ^ uVar48) & (uVar46 ^ uVar47) ^ uVar47) +
               ((uVar46 >> 0xd | uVar46 * 0x80000) ^ (uVar46 >> 0x16 | uVar46 * 0x400) ^
               (uVar46 >> 2 | uVar46 * 0x40000000));
      iVar43 = uVar30 + *(int *)(pauVar34[-1] + 4) + (uVar25 & uVar28) + (~uVar28 & uVar27) +
               ((uVar28 >> 0x19 | uVar28 * 0x80) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
               (uVar28 >> 6 | uVar28 * 0x4000000));
      uVar48 = uVar48 + iVar43;
      uVar30 = iVar43 + ((uVar46 ^ uVar47) & (uVar45 ^ uVar46) ^ uVar46) +
               ((uVar45 >> 0xd | uVar45 * 0x80000) ^ (uVar45 >> 0x16 | uVar45 * 0x400) ^
               (uVar45 >> 2 | uVar45 * 0x40000000));
      iVar43 = uVar27 + *(int *)(pauVar34[-1] + 8) + (uVar28 & uVar48) + (~uVar48 & uVar25) +
               ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
               (uVar48 >> 6 | uVar48 * 0x4000000));
      uVar47 = uVar47 + iVar43;
      uVar27 = iVar43 + ((uVar45 ^ uVar46) & (uVar30 ^ uVar45) ^ uVar45) +
               ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 0x16 | uVar30 * 0x400) ^
               (uVar30 >> 2 | uVar30 * 0x40000000));
      iVar43 = uVar25 + *(int *)(pauVar34[-1] + 0xc) + (uVar48 & uVar47) + (~uVar47 & uVar28) +
               ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
               (uVar47 >> 6 | uVar47 * 0x4000000));
      uVar46 = uVar46 + iVar43;
      uVar25 = iVar43 + ((uVar30 ^ uVar45) & (uVar27 ^ uVar30) ^ uVar30) +
               ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 0x16 | uVar27 * 0x400) ^
               (uVar27 >> 2 | uVar27 * 0x40000000));
      iVar43 = uVar28 + *(int *)*pauVar33 + (uVar47 & uVar46) + (~uVar46 & uVar48) +
               ((uVar46 >> 0x19 | uVar46 * 0x80) ^ (uVar46 >> 0xb | uVar46 * 0x200000) ^
               (uVar46 >> 6 | uVar46 * 0x4000000));
      uVar45 = uVar45 + iVar43;
      uVar28 = iVar43 + ((uVar27 ^ uVar30) & (uVar25 ^ uVar27) ^ uVar27) +
               ((uVar25 >> 0xd | uVar25 * 0x80000) ^ (uVar25 >> 0x16 | uVar25 * 0x400) ^
               (uVar25 >> 2 | uVar25 * 0x40000000));
      iVar43 = uVar48 + *(int *)(pauVar34[-4] + 4) + (uVar46 & uVar45) + (~uVar45 & uVar47) +
               ((uVar45 >> 0x19 | uVar45 * 0x80) ^ (uVar45 >> 0xb | uVar45 * 0x200000) ^
               (uVar45 >> 6 | uVar45 * 0x4000000));
      uVar30 = uVar30 + iVar43;
      uVar48 = iVar43 + ((uVar25 ^ uVar27) & (uVar28 ^ uVar25) ^ uVar25) +
               ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 >> 0x16 | uVar28 * 0x400) ^
               (uVar28 >> 2 | uVar28 * 0x40000000));
      iVar43 = uVar47 + *(int *)(pauVar34[-4] + 8) + (uVar45 & uVar30) + (~uVar30 & uVar46) +
               ((uVar30 >> 0x19 | uVar30 * 0x80) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
               (uVar30 >> 6 | uVar30 * 0x4000000));
      uVar27 = uVar27 + iVar43;
      uVar47 = iVar43 + ((uVar28 ^ uVar25) & (uVar48 ^ uVar28) ^ uVar28) +
               ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
               (uVar48 >> 2 | uVar48 * 0x40000000));
      iVar43 = uVar46 + *(int *)(pauVar34[-4] + 0xc) + (uVar30 & uVar27) + (~uVar27 & uVar45) +
               ((uVar27 >> 0x19 | uVar27 * 0x80) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
               (uVar27 >> 6 | uVar27 * 0x4000000));
      uVar25 = uVar25 + iVar43;
      uVar46 = iVar43 + ((uVar48 ^ uVar28) & (uVar47 ^ uVar48) ^ uVar48) +
               ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
               (uVar47 >> 2 | uVar47 * 0x40000000));
      iVar43 = uVar45 + *(int *)pauVar34[-3] + (uVar27 & uVar25) + (~uVar25 & uVar30) +
               ((uVar25 >> 0x19 | uVar25 * 0x80) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
               (uVar25 >> 6 | uVar25 * 0x4000000));
      uVar28 = uVar28 + iVar43;
      uVar45 = iVar43 + ((uVar47 ^ uVar48) & (uVar46 ^ uVar47) ^ uVar47) +
               ((uVar46 >> 0xd | uVar46 * 0x80000) ^ (uVar46 >> 0x16 | uVar46 * 0x400) ^
               (uVar46 >> 2 | uVar46 * 0x40000000));
      iVar43 = uVar30 + *(int *)(pauVar34[-3] + 4) + (uVar25 & uVar28) + (~uVar28 & uVar27) +
               ((uVar28 >> 0x19 | uVar28 * 0x80) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
               (uVar28 >> 6 | uVar28 * 0x4000000));
      uVar48 = uVar48 + iVar43;
      uVar30 = iVar43 + ((uVar46 ^ uVar47) & (uVar45 ^ uVar46) ^ uVar46) +
               ((uVar45 >> 0xd | uVar45 * 0x80000) ^ (uVar45 >> 0x16 | uVar45 * 0x400) ^
               (uVar45 >> 2 | uVar45 * 0x40000000));
      iVar43 = uVar27 + *(int *)(pauVar34[-3] + 8) + (uVar28 & uVar48) + (~uVar48 & uVar25) +
               ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
               (uVar48 >> 6 | uVar48 * 0x4000000));
      uVar47 = uVar47 + iVar43;
      uVar27 = iVar43 + ((uVar45 ^ uVar46) & (uVar30 ^ uVar45) ^ uVar45) +
               ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 0x16 | uVar30 * 0x400) ^
               (uVar30 >> 2 | uVar30 * 0x40000000));
      iVar43 = uVar25 + *(int *)(pauVar34[-3] + 0xc) + (uVar48 & uVar47) + (~uVar47 & uVar28) +
               ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
               (uVar47 >> 6 | uVar47 * 0x4000000));
      piVar35 = *(int **)pauVar34[0xc];
      pauVar37 = pauVar34 + 10;
      iVar26 = iVar43 + ((uVar30 ^ uVar45) & (uVar27 ^ uVar30) ^ uVar30) +
               ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 0x16 | uVar27 * 0x400) ^
               (uVar27 >> 2 | uVar27 * 0x40000000)) + *piVar35;
      uVar27 = uVar27 + piVar35[1];
      uVar30 = uVar30 + piVar35[2];
      uVar45 = uVar45 + piVar35[3];
      uVar46 = uVar46 + iVar43 + piVar35[4];
      uVar47 = uVar47 + piVar35[5];
      uVar48 = uVar48 + piVar35[6];
      uVar28 = uVar28 + piVar35[7];
      *piVar35 = iVar26;
      piVar35[1] = uVar27;
      piVar35[2] = uVar30;
      piVar35[3] = uVar45;
      piVar35[4] = uVar46;
      piVar35[5] = uVar47;
      piVar35[6] = uVar48;
      piVar35[7] = uVar28;
      if (pauVar38 == *(undefined1 (**) [32])(pauVar34[0xc] + 0x10)) {
        return;
      }
      uVar25 = 0;
      uVar44 = uVar27 ^ uVar30;
      do {
        uVar25 = iVar26 + uVar25;
        iVar43 = uVar28 + *(int *)(*pauVar37 + 0x10) + (uVar47 & uVar46) + (~uVar46 & uVar48) +
                 ((uVar46 >> 0x19 | uVar46 << 7) ^ (uVar46 >> 0xb | uVar46 << 0x15) ^
                 (uVar46 >> 6 | uVar46 << 0x1a));
        uVar45 = uVar45 + iVar43;
        uVar28 = iVar43 + (uVar44 & (uVar25 ^ uVar27) ^ uVar27) +
                 ((uVar25 >> 0xd | uVar25 * 0x80000) ^ (uVar25 >> 0x16 | uVar25 * 0x400) ^
                 (uVar25 >> 2 | uVar25 * 0x40000000));
        iVar43 = uVar48 + *(int *)(*pauVar37 + 0x14) + (uVar46 & uVar45) + (~uVar45 & uVar47) +
                 ((uVar45 >> 0x19 | uVar45 * 0x80) ^ (uVar45 >> 0xb | uVar45 * 0x200000) ^
                 (uVar45 >> 6 | uVar45 * 0x4000000));
        uVar30 = uVar30 + iVar43;
        uVar48 = iVar43 + ((uVar25 ^ uVar27) & (uVar28 ^ uVar25) ^ uVar25) +
                 ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 >> 0x16 | uVar28 * 0x400) ^
                 (uVar28 >> 2 | uVar28 * 0x40000000));
        iVar43 = uVar47 + *(int *)(*pauVar37 + 0x18) + (uVar45 & uVar30) + (~uVar30 & uVar46) +
                 ((uVar30 >> 0x19 | uVar30 * 0x80) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
                 (uVar30 >> 6 | uVar30 * 0x4000000));
        uVar27 = uVar27 + iVar43;
        uVar47 = iVar43 + ((uVar28 ^ uVar25) & (uVar48 ^ uVar28) ^ uVar28) +
                 ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
                 (uVar48 >> 2 | uVar48 * 0x40000000));
        iVar43 = uVar46 + *(int *)(*pauVar37 + 0x1c) + (uVar30 & uVar27) + (~uVar27 & uVar45) +
                 ((uVar27 >> 0x19 | uVar27 * 0x80) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
                 (uVar27 >> 6 | uVar27 * 0x4000000));
        uVar25 = uVar25 + iVar43;
        uVar46 = iVar43 + ((uVar48 ^ uVar28) & (uVar47 ^ uVar48) ^ uVar48) +
                 ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
                 (uVar47 >> 2 | uVar47 * 0x40000000));
        iVar43 = uVar45 + *(int *)(pauVar37[1] + 0x10) + (uVar27 & uVar25) + (~uVar25 & uVar30) +
                 ((uVar25 >> 0x19 | uVar25 * 0x80) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
                 (uVar25 >> 6 | uVar25 * 0x4000000));
        uVar28 = uVar28 + iVar43;
        uVar45 = iVar43 + ((uVar47 ^ uVar48) & (uVar46 ^ uVar47) ^ uVar47) +
                 ((uVar46 >> 0xd | uVar46 * 0x80000) ^ (uVar46 >> 0x16 | uVar46 * 0x400) ^
                 (uVar46 >> 2 | uVar46 * 0x40000000));
        iVar43 = uVar30 + *(int *)(pauVar37[1] + 0x14) + (uVar25 & uVar28) + (~uVar28 & uVar27) +
                 ((uVar28 >> 0x19 | uVar28 * 0x80) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
                 (uVar28 >> 6 | uVar28 * 0x4000000));
        uVar48 = uVar48 + iVar43;
        uVar30 = iVar43 + ((uVar46 ^ uVar47) & (uVar45 ^ uVar46) ^ uVar46) +
                 ((uVar45 >> 0xd | uVar45 * 0x80000) ^ (uVar45 >> 0x16 | uVar45 * 0x400) ^
                 (uVar45 >> 2 | uVar45 * 0x40000000));
        iVar43 = uVar27 + *(int *)(pauVar37[1] + 0x18) + (uVar28 & uVar48) + (~uVar48 & uVar25) +
                 ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
                 (uVar48 >> 6 | uVar48 * 0x4000000));
        uVar47 = uVar47 + iVar43;
        uVar27 = iVar43 + ((uVar45 ^ uVar46) & (uVar30 ^ uVar45) ^ uVar45) +
                 ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 0x16 | uVar30 * 0x400) ^
                 (uVar30 >> 2 | uVar30 * 0x40000000));
        iVar26 = uVar25 + *(int *)(pauVar37[1] + 0x1c) + (uVar48 & uVar47) + (~uVar47 & uVar28) +
                 ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
                 (uVar47 >> 6 | uVar47 * 0x4000000));
        uVar44 = uVar27 ^ uVar30;
        uVar46 = uVar46 + iVar26;
        uVar25 = (uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 0x16 | uVar27 * 0x400) ^
                 (uVar27 >> 2 | uVar27 * 0x40000000);
        iVar26 = iVar26 + ((uVar30 ^ uVar45) & uVar44 ^ uVar30);
        pauVar37 = pauVar37 + -2;
      } while (pauVar33 <= pauVar37);
      puVar5 = *(uint **)pauVar34[0xc];
      pauVar33 = pauVar34 + 10;
      uVar25 = iVar26 + uVar25 + *puVar5;
      uVar27 = uVar27 + puVar5[1];
      uVar30 = uVar30 + puVar5[2];
      uVar45 = uVar45 + puVar5[3];
      uVar46 = uVar46 + puVar5[4];
      uVar47 = uVar47 + puVar5[5];
      pauVar38 = pauVar38 + 4;
      uVar48 = uVar48 + puVar5[6];
      uVar28 = uVar28 + puVar5[7];
      pauVar6 = *(undefined1 (**) [32])(pauVar34[0xc] + 0x10);
      *puVar5 = uVar25;
      pauVar37 = pauVar38;
      if (pauVar38 == pauVar6) {
        pauVar37 = pauVar33;
      }
      puVar5[1] = uVar27;
      puVar5[2] = uVar30;
      puVar5[3] = uVar45;
      puVar5[4] = uVar46;
      puVar5[5] = uVar47;
      puVar5[6] = uVar48;
      puVar5[7] = uVar28;
    } while (pauVar38 <= pauVar6);
    return;
  }
  if ((DAT_0094b59c & 0x10000200 | DAT_0094b598 & 0x40000000) == 0x50000200) {
    pauVar4 = param_2 + param_3 * 4;
    uVar25 = *param_1;
    uVar30 = param_1[1];
    uVar27 = param_1[2];
    uVar28 = param_1[3];
    uVar48 = param_1[4];
    uVar47 = param_1[5];
    uVar46 = param_1[6];
    uVar45 = param_1[7];
    do {
      auVar76 = vpshufb_avx(*param_2,_DAT_00586380);
      auVar70 = vpshufb_avx(param_2[1],_DAT_00586380);
      auVar75 = vpshufb_avx(param_2[2],_DAT_00586380);
      auVar18._4_4_ = DAT_00586184;
      auVar18._0_4_ = DAT_00586180;
      auVar18._8_4_ = DAT_00586188;
      auVar18._12_4_ = DAT_0058618c;
      local_c0 = vpaddd_avx(auVar76,auVar18);
      auVar95 = vpshufb_avx(param_2[3],_DAT_00586380);
      auVar19._4_4_ = DAT_005861a4;
      auVar19._0_4_ = DAT_005861a0;
      auVar19._8_4_ = DAT_005861a8;
      auVar19._12_4_ = DAT_005861ac;
      local_b0 = vpaddd_avx(auVar70,auVar19);
      auVar20._4_4_ = DAT_005861c4;
      auVar20._0_4_ = DAT_005861c0;
      auVar20._8_4_ = DAT_005861c8;
      auVar20._12_4_ = DAT_005861cc;
      local_a0 = vpaddd_avx(auVar75,auVar20);
      auVar21._4_4_ = DAT_005861e4;
      auVar21._0_4_ = DAT_005861e0;
      auVar21._8_4_ = DAT_005861e8;
      auVar21._12_4_ = DAT_005861ec;
      local_90 = vpaddd_avx(auVar95,auVar21);
      uVar44 = uVar30 ^ uVar27;
      pauVar36 = (undefined1 (*) [16])&DAT_00586180;
      do {
        auVar144 = vpalignr_avx(auVar70,auVar76,4);
        auVar91 = vpalignr_avx(auVar95,auVar75,4);
        uVar49 = (uVar48 >> 0xe | uVar48 << 0x12) ^ uVar48;
        auVar109 = vpsrld_avx(auVar144,7);
        uVar29 = (uVar25 >> 9 | uVar25 << 0x17) ^ uVar25;
        auVar76 = vpaddd_avx(auVar76,auVar91);
        uVar49 = (uVar49 >> 5 | uVar49 << 0x1b) ^ uVar48;
        auVar143 = vpsrld_avx(auVar144,3);
        auVar91 = vpslld_avx(auVar144,0xe);
        uVar29 = (uVar29 >> 0xb | uVar29 << 0x15) ^ uVar25;
        iVar43 = uVar45 + local_c0._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
                 (uVar49 >> 6 | uVar49 << 0x1a);
        auVar144 = vpshufd_avx(auVar95,0xfa);
        uVar28 = uVar28 + iVar43;
        auVar110 = vpsrld_avx(auVar109,0xb);
        uVar45 = (uVar29 >> 2 | uVar29 << 0x1e) + iVar43 + (uVar44 & (uVar25 ^ uVar30) ^ uVar30);
        auVar92 = vpslld_avx(auVar91,0xb);
        uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
        uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
        auVar111 = vpsrld_avx(auVar144,10);
        auVar144 = vpsrlq_avx(auVar144,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
        auVar76 = vpaddd_avx(auVar76,auVar143 ^ auVar109 ^ auVar91 ^ auVar110 ^ auVar92);
        iVar43 = uVar46 + local_c0._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar27 = uVar27 + iVar43;
        auVar91 = vpsrlq_avx(auVar144,2);
        uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
        uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
        auVar144 = vpshufb_avx(auVar111 ^ auVar144 ^ auVar91,auVar66);
        uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
        auVar76 = vpaddd_avx(auVar76,auVar144);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
        auVar144 = vpshufd_avx(auVar76,0x50);
        auVar91 = vpsrld_avx(auVar144,10);
        auVar144 = vpsrlq_avx(auVar144,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
        iVar43 = uVar47 + local_c0._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar30 = uVar30 + iVar43;
        auVar92 = vpsrlq_avx(auVar144,2);
        uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
        auVar144 = vpshufb_avx(auVar91 ^ auVar144 ^ auVar92,auVar71);
        uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
        auVar76 = vpaddd_avx(auVar76,auVar144);
        uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
        auVar144 = vpaddd_avx(auVar76,pauVar36[8]);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
        iVar43 = uVar48 + local_c0._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar25 = uVar25 + iVar43;
        uVar48 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
        auVar91 = vpalignr_avx(auVar75,auVar70,4);
        auVar92 = vpalignr_avx(auVar76,auVar95,4);
        uVar44 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
        auVar110 = vpsrld_avx(auVar91,7);
        uVar49 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
        auVar70 = vpaddd_avx(auVar70,auVar92);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar25;
        auVar145 = vpsrld_avx(auVar91,3);
        auVar92 = vpslld_avx(auVar91,0xe);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar48;
        iVar43 = uVar28 + local_b0._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        auVar91 = vpshufd_avx(auVar76,0xfa);
        uVar45 = uVar45 + iVar43;
        auVar111 = vpsrld_avx(auVar110,0xb);
        uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar47 ^ uVar46) & (uVar48 ^ uVar47) ^ uVar47);
        auVar109 = vpslld_avx(auVar92,0xb);
        uVar44 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
        uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar45;
        auVar143 = vpsrld_avx(auVar91,10);
        auVar91 = vpsrlq_avx(auVar91,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
        auVar70 = vpaddd_avx(auVar70,auVar145 ^ auVar110 ^ auVar92 ^ auVar111 ^ auVar109);
        iVar43 = uVar27 + local_b0._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar46 = uVar46 + iVar43;
        auVar92 = vpsrlq_avx(auVar91,2);
        uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar48 ^ uVar47) & (uVar28 ^ uVar48) ^ uVar48);
        uVar44 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
        auVar91 = vpshufb_avx(auVar143 ^ auVar91 ^ auVar92,auVar66);
        uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
        auVar70 = vpaddd_avx(auVar70,auVar91);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar46;
        auVar91 = vpshufd_avx(auVar70,0x50);
        auVar92 = vpsrld_avx(auVar91,10);
        auVar91 = vpsrlq_avx(auVar91,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
        iVar43 = uVar30 + local_b0._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar47 = uVar47 + iVar43;
        auVar109 = vpsrlq_avx(auVar91,2);
        uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar28 ^ uVar48) & (uVar27 ^ uVar28) ^ uVar28);
        auVar91 = vpshufb_avx(auVar92 ^ auVar91 ^ auVar109,auVar71);
        uVar44 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
        auVar70 = vpaddd_avx(auVar70,auVar91);
        uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
        auVar91 = vpaddd_avx(auVar70,pauVar36[10]);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar47;
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
        iVar43 = uVar25 + local_b0._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar48 = uVar48 + iVar43;
        uVar25 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar27 ^ uVar28) & (uVar30 ^ uVar27) ^ uVar27);
        auVar92 = vpalignr_avx(auVar95,auVar75,4);
        auVar109 = vpalignr_avx(auVar70,auVar76,4);
        uVar44 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
        auVar111 = vpsrld_avx(auVar92,7);
        uVar49 = (uVar25 >> 9 | uVar25 * 0x800000) ^ uVar25;
        auVar75 = vpaddd_avx(auVar75,auVar109);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar48;
        auVar146 = vpsrld_avx(auVar92,3);
        auVar109 = vpslld_avx(auVar92,0xe);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar25;
        iVar43 = uVar45 + local_a0._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        auVar92 = vpshufd_avx(auVar70,0xfa);
        uVar28 = uVar28 + iVar43;
        auVar143 = vpsrld_avx(auVar111,0xb);
        uVar45 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar30 ^ uVar27) & (uVar25 ^ uVar30) ^ uVar30);
        auVar110 = vpslld_avx(auVar109,0xb);
        uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
        uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
        auVar145 = vpsrld_avx(auVar92,10);
        auVar92 = vpsrlq_avx(auVar92,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
        auVar75 = vpaddd_avx(auVar75,auVar146 ^ auVar111 ^ auVar109 ^ auVar143 ^ auVar110);
        iVar43 = uVar46 + local_a0._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar27 = uVar27 + iVar43;
        auVar109 = vpsrlq_avx(auVar92,2);
        uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
        uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
        auVar92 = vpshufb_avx(auVar145 ^ auVar92 ^ auVar109,auVar66);
        uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
        auVar75 = vpaddd_avx(auVar75,auVar92);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
        auVar92 = vpshufd_avx(auVar75,0x50);
        auVar109 = vpsrld_avx(auVar92,10);
        auVar92 = vpsrlq_avx(auVar92,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
        iVar43 = uVar47 + local_a0._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar30 = uVar30 + iVar43;
        auVar110 = vpsrlq_avx(auVar92,2);
        uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
        auVar92 = vpshufb_avx(auVar109 ^ auVar92 ^ auVar110,auVar71);
        uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
        auVar75 = vpaddd_avx(auVar75,auVar92);
        uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
        auVar92 = vpaddd_avx(auVar75,pauVar36[0xc]);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
        iVar43 = uVar48 + local_a0._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar25 = uVar25 + iVar43;
        uVar48 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
        auVar109 = vpalignr_avx(auVar76,auVar95,4);
        auVar110 = vpalignr_avx(auVar75,auVar70,4);
        uVar44 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
        auVar143 = vpsrld_avx(auVar109,7);
        uVar49 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
        auVar95 = vpaddd_avx(auVar95,auVar110);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar25;
        auVar147 = vpsrld_avx(auVar109,3);
        auVar110 = vpslld_avx(auVar109,0xe);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar48;
        iVar43 = uVar28 + local_90._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        auVar109 = vpshufd_avx(auVar75,0xfa);
        uVar45 = uVar45 + iVar43;
        auVar145 = vpsrld_avx(auVar143,0xb);
        uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar47 ^ uVar46) & (uVar48 ^ uVar47) ^ uVar47);
        auVar111 = vpslld_avx(auVar110,0xb);
        uVar44 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
        uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar45;
        auVar146 = vpsrld_avx(auVar109,10);
        auVar109 = vpsrlq_avx(auVar109,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
        auVar95 = vpaddd_avx(auVar95,auVar147 ^ auVar143 ^ auVar110 ^ auVar145 ^ auVar111);
        iVar43 = uVar27 + local_90._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar46 = uVar46 + iVar43;
        auVar110 = vpsrlq_avx(auVar109,2);
        uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar48 ^ uVar47) & (uVar28 ^ uVar48) ^ uVar48);
        uVar44 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
        auVar109 = vpshufb_avx(auVar146 ^ auVar109 ^ auVar110,auVar66);
        uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
        auVar95 = vpaddd_avx(auVar95,auVar109);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar46;
        auVar109 = vpshufd_avx(auVar95,0x50);
        auVar110 = vpsrld_avx(auVar109,10);
        auVar109 = vpsrlq_avx(auVar109,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
        iVar43 = uVar30 + local_90._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar47 = uVar47 + iVar43;
        auVar111 = vpsrlq_avx(auVar109,2);
        uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar28 ^ uVar48) & (uVar27 ^ uVar28) ^ uVar28);
        auVar109 = vpshufb_avx(auVar110 ^ auVar109 ^ auVar111,auVar71);
        uVar44 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
        auVar95 = vpaddd_avx(auVar95,auVar109);
        uVar29 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
        auVar109 = vpaddd_avx(auVar95,pauVar36[0xe]);
        uVar49 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar47;
        uVar44 = uVar30 ^ uVar27;
        uVar29 = (uVar29 >> 0xb | uVar29 << 0x15) ^ uVar30;
        iVar43 = uVar25 + local_90._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
                 (uVar49 >> 6 | uVar49 << 0x1a);
        uVar48 = uVar48 + iVar43;
        uVar25 = (uVar29 >> 2 | uVar29 << 0x1e) + iVar43 + ((uVar27 ^ uVar28) & uVar44 ^ uVar27);
        pauVar24 = pauVar36 + 0x10;
        pauVar36 = pauVar36 + 8;
        local_c0 = auVar144;
        local_b0 = auVar91;
        local_a0 = auVar92;
        local_90 = auVar109;
      } while (*(char *)((long)*pauVar24 + 3) != '\0');
      uVar49 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
      uVar29 = (uVar25 >> 9 | uVar25 * 0x800000) ^ uVar25;
      uVar49 = (uVar49 >> 5 | uVar49 << 0x1b) ^ uVar48;
      local_c0._0_4_ = auVar144._0_4_;
      uVar29 = (uVar29 >> 0xb | uVar29 << 0x15) ^ uVar25;
      iVar43 = uVar45 + local_c0._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
               (uVar49 >> 6 | uVar49 << 0x1a);
      uVar28 = uVar28 + iVar43;
      uVar45 = (uVar29 >> 2 | uVar29 << 0x1e) + iVar43 + (uVar44 & (uVar25 ^ uVar30) ^ uVar30);
      uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
      uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
      local_c0._4_4_ = auVar144._4_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
      iVar43 = uVar46 + local_c0._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar27 = uVar27 + iVar43;
      uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
      uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
      uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
      local_c0._8_4_ = auVar144._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
      iVar43 = uVar47 + local_c0._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar30 = uVar30 + iVar43;
      uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
      uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
      uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
      local_c0._12_4_ = auVar144._12_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
      iVar43 = uVar48 + local_c0._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar25 = uVar25 + iVar43;
      uVar48 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
      uVar44 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
      uVar49 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar25;
      local_b0._0_4_ = auVar91._0_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar48;
      iVar43 = uVar28 + local_b0._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar45 = uVar45 + iVar43;
      uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar47 ^ uVar46) & (uVar48 ^ uVar47) ^ uVar47);
      uVar44 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
      uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar45;
      local_b0._4_4_ = auVar91._4_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
      iVar43 = uVar27 + local_b0._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar46 = uVar46 + iVar43;
      uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar48 ^ uVar47) & (uVar28 ^ uVar48) ^ uVar48);
      uVar44 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
      uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar46;
      local_b0._8_4_ = auVar91._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
      iVar43 = uVar30 + local_b0._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar47 = uVar47 + iVar43;
      uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar28 ^ uVar48) & (uVar27 ^ uVar28) ^ uVar28);
      uVar44 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
      uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar47;
      local_b0._12_4_ = auVar91._12_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
      iVar43 = uVar25 + local_b0._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar48 = uVar48 + iVar43;
      uVar25 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar27 ^ uVar28) & (uVar30 ^ uVar27) ^ uVar27);
      uVar44 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
      uVar49 = (uVar25 >> 9 | uVar25 * 0x800000) ^ uVar25;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar48;
      local_a0._0_4_ = auVar92._0_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar25;
      iVar43 = uVar45 + local_a0._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar28 = uVar28 + iVar43;
      uVar45 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar30 ^ uVar27) & (uVar25 ^ uVar30) ^ uVar30);
      uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
      uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
      local_a0._4_4_ = auVar92._4_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
      iVar43 = uVar46 + local_a0._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar27 = uVar27 + iVar43;
      uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
      uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
      uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
      local_a0._8_4_ = auVar92._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
      iVar43 = uVar47 + local_a0._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar30 = uVar30 + iVar43;
      uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
      uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
      uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
      local_a0._12_4_ = auVar92._12_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
      iVar43 = uVar48 + local_a0._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar25 = uVar25 + iVar43;
      uVar44 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
      uVar48 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
      uVar49 = (uVar44 >> 9 | uVar44 * 0x800000) ^ uVar44;
      uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar25;
      local_90._0_4_ = auVar109._0_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar44;
      iVar43 = uVar28 + local_90._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
               (uVar48 >> 6 | uVar48 << 0x1a);
      uVar45 = uVar45 + iVar43;
      uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar47 ^ uVar46) & (uVar44 ^ uVar47) ^ uVar47);
      uVar48 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
      uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
      uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar45;
      local_90._4_4_ = auVar109._4_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
      iVar43 = uVar27 + local_90._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
               (uVar48 >> 6 | uVar48 << 0x1a);
      uVar46 = uVar46 + iVar43;
      uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar44 ^ uVar47) & (uVar28 ^ uVar44) ^ uVar44);
      uVar48 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
      uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
      uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar46;
      local_90._8_4_ = auVar109._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
      iVar43 = uVar30 + local_90._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
               (uVar48 >> 6 | uVar48 << 0x1a);
      uVar47 = uVar47 + iVar43;
      uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar28 ^ uVar44) & (uVar27 ^ uVar28) ^ uVar28);
      uVar48 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
      uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
      uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar47;
      local_90._12_4_ = auVar109._12_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
      iVar43 = uVar25 + local_90._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
               (uVar48 >> 6 | uVar48 << 0x1a);
      uVar25 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar27 ^ uVar28) & (uVar30 ^ uVar27) ^ uVar27) + *param_1;
      param_2 = param_2 + 4;
      uVar30 = uVar30 + param_1[1];
      uVar27 = uVar27 + param_1[2];
      uVar28 = uVar28 + param_1[3];
      uVar48 = uVar44 + iVar43 + param_1[4];
      uVar47 = uVar47 + param_1[5];
      uVar46 = uVar46 + param_1[6];
      uVar45 = uVar45 + param_1[7];
      *param_1 = uVar25;
      param_1[1] = uVar30;
      param_1[2] = uVar27;
      param_1[3] = uVar28;
      param_1[4] = uVar48;
      param_1[5] = uVar47;
      param_1[6] = uVar46;
      param_1[7] = uVar45;
    } while (param_2 < pauVar4);
    return;
  }
  if ((DAT_0094b59c & 0x200) == 0) {
    pauVar4 = param_2 + param_3 * 4;
    uVar25 = *param_1;
    uVar30 = param_1[1];
    uVar27 = param_1[2];
    uVar28 = param_1[3];
    uVar48 = param_1[4];
    uVar47 = param_1[5];
    uVar46 = param_1[6];
    uVar45 = param_1[7];
    do {
      uVar44 = *(uint *)*param_2;
      local_c0._0_4_ =
           uVar44 >> 0x18 | (uVar44 & 0xff0000) >> 8 | (uVar44 & 0xff00) << 8 | uVar44 << 0x18;
      uVar44 = (uVar48 >> 0xe | uVar48 << 0x12) ^ uVar48;
      uVar49 = (uVar25 >> 9 | uVar25 << 0x17) ^ uVar25;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar48;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar25;
      iVar43 = local_c0._0_4_ + uVar45 + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) + DAT_00586180 +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar28 = uVar28 + iVar43;
      uVar42 = (uVar30 ^ (uVar30 ^ uVar27) & (uVar25 ^ uVar30)) + iVar43 +
               (uVar49 >> 2 | uVar49 << 0x1e);
      uVar45 = *(uint *)(*param_2 + 4);
      local_c0._4_4_ =
           uVar45 >> 0x18 | (uVar45 & 0xff0000) >> 8 | (uVar45 & 0xff00) << 8 | uVar45 << 0x18;
      uVar45 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
      uVar44 = (uVar42 >> 9 | uVar42 * 0x800000) ^ uVar42;
      uVar45 = (uVar45 >> 5 | uVar45 << 0x1b) ^ uVar28;
      uVar44 = (uVar44 >> 0xb | uVar44 << 0x15) ^ uVar42;
      iVar43 = local_c0._4_4_ + uVar46 + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) + DAT_00586184 +
               (uVar45 >> 6 | uVar45 << 0x1a);
      uVar27 = uVar27 + iVar43;
      uVar41 = (uVar25 ^ (uVar25 ^ uVar30) & (uVar42 ^ uVar25)) + iVar43 +
               (uVar44 >> 2 | uVar44 << 0x1e);
      uVar46 = *(uint *)(*param_2 + 8);
      local_c0._8_4_ =
           uVar46 >> 0x18 | (uVar46 & 0xff0000) >> 8 | (uVar46 & 0xff00) << 8 | uVar46 << 0x18;
      uVar46 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
      uVar45 = (uVar41 >> 9 | uVar41 * 0x800000) ^ uVar41;
      uVar46 = (uVar46 >> 5 | uVar46 << 0x1b) ^ uVar27;
      uVar45 = (uVar45 >> 0xb | uVar45 << 0x15) ^ uVar41;
      iVar43 = local_c0._8_4_ + uVar47 + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) + DAT_00586188 +
               (uVar46 >> 6 | uVar46 << 0x1a);
      uVar30 = uVar30 + iVar43;
      uVar40 = (uVar42 ^ (uVar42 ^ uVar25) & (uVar41 ^ uVar42)) + iVar43 +
               (uVar45 >> 2 | uVar45 << 0x1e);
      uVar47 = *(uint *)(*param_2 + 0xc);
      local_c0._12_4_ =
           uVar47 >> 0x18 | (uVar47 & 0xff0000) >> 8 | (uVar47 & 0xff00) << 8 | uVar47 << 0x18;
      uVar47 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
      uVar46 = (uVar40 >> 9 | uVar40 * 0x800000) ^ uVar40;
      uVar47 = (uVar47 >> 5 | uVar47 << 0x1b) ^ uVar30;
      uVar46 = (uVar46 >> 0xb | uVar46 << 0x15) ^ uVar40;
      iVar43 = local_c0._12_4_ + uVar48 + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) + DAT_0058618c +
               (uVar47 >> 6 | uVar47 << 0x1a);
      uVar25 = uVar25 + iVar43;
      uVar39 = (uVar41 ^ (uVar41 ^ uVar42) & (uVar40 ^ uVar41)) + iVar43 +
               (uVar46 >> 2 | uVar46 << 0x1e);
      uVar48 = *(uint *)param_2[1];
      local_b0._0_4_ =
           uVar48 >> 0x18 | (uVar48 & 0xff0000) >> 8 | (uVar48 & 0xff00) << 8 | uVar48 << 0x18;
      uVar48 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
      uVar47 = (uVar39 >> 9 | uVar39 * 0x800000) ^ uVar39;
      uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar25;
      uVar47 = (uVar47 >> 0xb | uVar47 << 0x15) ^ uVar39;
      iVar43 = local_b0._0_4_ + uVar28 + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) + DAT_005861a0 +
               (uVar48 >> 6 | uVar48 << 0x1a);
      uVar42 = uVar42 + iVar43;
      uVar29 = (uVar40 ^ (uVar40 ^ uVar41) & (uVar39 ^ uVar40)) + iVar43 +
               (uVar47 >> 2 | uVar47 << 0x1e);
      uVar28 = *(uint *)(param_2[1] + 4);
      local_b0._4_4_ =
           uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
      uVar28 = (uVar42 >> 0xe | uVar42 * 0x40000) ^ uVar42;
      uVar48 = (uVar29 >> 9 | uVar29 * 0x800000) ^ uVar29;
      uVar28 = (uVar28 >> 5 | uVar28 << 0x1b) ^ uVar42;
      uVar48 = (uVar48 >> 0xb | uVar48 << 0x15) ^ uVar29;
      iVar43 = local_b0._4_4_ + uVar27 + ((uVar25 ^ uVar30) & uVar42 ^ uVar30) + DAT_005861a4 +
               (uVar28 >> 6 | uVar28 << 0x1a);
      uVar41 = uVar41 + iVar43;
      uVar49 = (uVar39 ^ (uVar39 ^ uVar40) & (uVar29 ^ uVar39)) + iVar43 +
               (uVar48 >> 2 | uVar48 << 0x1e);
      uVar27 = *(uint *)(param_2[1] + 8);
      local_b0._8_4_ =
           uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 | uVar27 << 0x18;
      uVar27 = (uVar41 >> 0xe | uVar41 * 0x40000) ^ uVar41;
      uVar28 = (uVar49 >> 9 | uVar49 * 0x800000) ^ uVar49;
      uVar27 = (uVar27 >> 5 | uVar27 << 0x1b) ^ uVar41;
      uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar49;
      iVar43 = local_b0._8_4_ + uVar30 + ((uVar42 ^ uVar25) & uVar41 ^ uVar25) + DAT_005861a8 +
               (uVar27 >> 6 | uVar27 << 0x1a);
      uVar40 = uVar40 + iVar43;
      uVar31 = (uVar29 ^ (uVar29 ^ uVar39) & (uVar49 ^ uVar29)) + iVar43 +
               (uVar28 >> 2 | uVar28 << 0x1e);
      uVar30 = *(uint *)(param_2[1] + 0xc);
      local_b0._12_4_ =
           uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
      uVar30 = (uVar40 >> 0xe | uVar40 * 0x40000) ^ uVar40;
      uVar27 = (uVar31 >> 9 | uVar31 * 0x800000) ^ uVar31;
      uVar30 = (uVar30 >> 5 | uVar30 << 0x1b) ^ uVar40;
      uVar27 = (uVar27 >> 0xb | uVar27 << 0x15) ^ uVar31;
      iVar43 = local_b0._12_4_ + uVar25 + ((uVar41 ^ uVar42) & uVar40 ^ uVar42) + DAT_005861ac +
               (uVar30 >> 6 | uVar30 << 0x1a);
      uVar39 = uVar39 + iVar43;
      uVar44 = (uVar49 ^ (uVar49 ^ uVar29) & (uVar31 ^ uVar49)) + iVar43 +
               (uVar27 >> 2 | uVar27 << 0x1e);
      uVar25 = *(uint *)param_2[2];
      local_a0._0_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar39 >> 0xe | uVar39 * 0x40000) ^ uVar39;
      uVar30 = (uVar44 >> 9 | uVar44 * 0x800000) ^ uVar44;
      uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar39;
      uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar44;
      iVar43 = local_a0._0_4_ + uVar42 + ((uVar40 ^ uVar41) & uVar39 ^ uVar41) + DAT_005861c0 +
               (uVar25 >> 6 | uVar25 << 0x1a);
      uVar29 = uVar29 + iVar43;
      uVar45 = (uVar31 ^ (uVar31 ^ uVar49) & (uVar44 ^ uVar31)) + iVar43 +
               (uVar30 >> 2 | uVar30 << 0x1e);
      uVar25 = *(uint *)(param_2[2] + 4);
      local_a0._4_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar29 >> 0xe | uVar29 * 0x40000) ^ uVar29;
      uVar30 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
      uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar29;
      uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar45;
      iVar43 = local_a0._4_4_ + uVar41 + ((uVar39 ^ uVar40) & uVar29 ^ uVar40) + DAT_005861c4 +
               (uVar25 >> 6 | uVar25 << 0x1a);
      uVar49 = uVar49 + iVar43;
      uVar46 = (uVar44 ^ (uVar44 ^ uVar31) & (uVar45 ^ uVar44)) + iVar43 +
               (uVar30 >> 2 | uVar30 << 0x1e);
      uVar25 = *(uint *)(param_2[2] + 8);
      local_a0._8_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar49 >> 0xe | uVar49 * 0x40000) ^ uVar49;
      uVar30 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
      uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar49;
      uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar46;
      iVar43 = local_a0._8_4_ + uVar40 + ((uVar29 ^ uVar39) & uVar49 ^ uVar39) + DAT_005861c8 +
               (uVar25 >> 6 | uVar25 << 0x1a);
      uVar31 = uVar31 + iVar43;
      uVar47 = (uVar45 ^ (uVar45 ^ uVar44) & (uVar46 ^ uVar45)) + iVar43 +
               (uVar30 >> 2 | uVar30 << 0x1e);
      uVar25 = *(uint *)(param_2[2] + 0xc);
      local_a0._12_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar31 >> 0xe | uVar31 * 0x40000) ^ uVar31;
      uVar30 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
      uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar31;
      uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar47;
      iVar43 = local_a0._12_4_ + uVar39 + ((uVar49 ^ uVar29) & uVar31 ^ uVar29) + DAT_005861cc +
               (uVar25 >> 6 | uVar25 << 0x1a);
      uVar44 = uVar44 + iVar43;
      uVar48 = (uVar46 ^ (uVar46 ^ uVar45) & (uVar47 ^ uVar46)) + iVar43 +
               (uVar30 >> 2 | uVar30 << 0x1e);
      uVar25 = *(uint *)param_2[3];
      local_90._0_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar44 >> 0xe | uVar44 * 0x40000) ^ uVar44;
      uVar30 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
      uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar44;
      uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar48;
      iVar43 = local_90._0_4_ + uVar29 + ((uVar31 ^ uVar49) & uVar44 ^ uVar49) + DAT_005861e0 +
               (uVar25 >> 6 | uVar25 << 0x1a);
      uVar45 = uVar45 + iVar43;
      uVar28 = (uVar47 ^ (uVar47 ^ uVar46) & (uVar48 ^ uVar47)) + iVar43 +
               (uVar30 >> 2 | uVar30 << 0x1e);
      uVar25 = *(uint *)(param_2[3] + 4);
      local_90._4_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
      uVar30 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
      uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar45;
      uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar28;
      iVar43 = local_90._4_4_ + uVar49 + ((uVar44 ^ uVar31) & uVar45 ^ uVar31) + DAT_005861e4 +
               (uVar25 >> 6 | uVar25 << 0x1a);
      uVar46 = uVar46 + iVar43;
      uVar27 = (uVar48 ^ (uVar48 ^ uVar47) & (uVar28 ^ uVar48)) + iVar43 +
               (uVar30 >> 2 | uVar30 << 0x1e);
      uVar25 = *(uint *)(param_2[3] + 8);
      local_90._8_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
      uVar30 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
      uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar46;
      uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar27;
      iVar43 = local_90._8_4_ + uVar31 + ((uVar45 ^ uVar44) & uVar46 ^ uVar44) + DAT_005861e8 +
               (uVar25 >> 6 | uVar25 << 0x1a);
      uVar47 = uVar47 + iVar43;
      uVar30 = (uVar28 ^ (uVar28 ^ uVar48) & (uVar27 ^ uVar28)) + iVar43 +
               (uVar30 >> 2 | uVar30 << 0x1e);
      uVar25 = *(uint *)(param_2[3] + 0xc);
      local_90._12_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
      uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
      uVar29 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar47;
      uVar25 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
      uVar49 = uVar30 ^ uVar27;
      uVar25 = uVar25 >> 2 | uVar25 << 0x1e;
      iVar43 = local_90._12_4_ + uVar44 + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) + DAT_005861ec +
               (uVar29 >> 6 | uVar29 << 0x1a);
      uVar48 = uVar48 + iVar43;
      iVar43 = (uVar27 ^ (uVar27 ^ uVar28) & uVar49) + iVar43;
      piVar35 = &DAT_00586200;
      do {
        auVar71 = local_b0;
        auVar66 = local_c0;
        uVar25 = iVar43 + uVar25;
        uVar44 = ((uint)local_c0._4_4_ >> 0xb | local_c0._4_4_ << 0x15) ^ local_c0._4_4_;
        uVar29 = ((uint)local_90._8_4_ >> 2 | local_90._8_4_ << 0x1e) ^ local_90._8_4_;
        uVar39 = ((uint)local_c0._4_4_ >> 3 ^ (uVar44 >> 7 | uVar44 << 0x19)) + local_a0._4_4_ +
                 local_c0._0_4_ + ((uVar29 >> 0x11 | uVar29 << 0xf) ^ (uint)local_90._8_4_ >> 10);
        uVar44 = (uVar48 >> 0xe | uVar48 << 0x12) ^ uVar48;
        uVar29 = (uVar25 >> 9 | uVar25 * 0x800000) ^ uVar25;
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar48;
        uVar29 = (uVar29 >> 0xb | uVar29 << 0x15) ^ uVar25;
        iVar43 = uVar39 + uVar45 + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) + *piVar35 +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar28 = uVar28 + iVar43;
        uVar31 = (uVar30 ^ uVar49 & (uVar25 ^ uVar30)) + iVar43 + (uVar29 >> 2 | uVar29 << 0x1e);
        uVar44 = ((uint)local_c0._8_4_ >> 0xb | local_c0._8_4_ << 0x15) ^ local_c0._8_4_;
        uVar45 = ((uint)local_90._12_4_ >> 2 | local_90._12_4_ << 0x1e) ^ local_90._12_4_;
        local_c0._4_4_ =
             ((uint)local_c0._8_4_ >> 3 ^ (uVar44 >> 7 | uVar44 << 0x19)) + local_a0._8_4_ +
             local_c0._4_4_ + ((uVar45 >> 0x11 | uVar45 << 0xf) ^ (uint)local_90._12_4_ >> 10);
        uVar45 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
        local_c0._0_4_ = uVar39;
        uVar44 = (uVar31 >> 9 | uVar31 * 0x800000) ^ uVar31;
        uVar45 = (uVar45 >> 5 | uVar45 << 0x1b) ^ uVar28;
        uVar44 = (uVar44 >> 0xb | uVar44 << 0x15) ^ uVar31;
        iVar43 = local_c0._4_4_ + uVar46 + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) + piVar35[1] +
                 (uVar45 >> 6 | uVar45 << 0x1a);
        uVar27 = uVar27 + iVar43;
        local_c0._12_4_ = auVar66._12_4_;
        uVar46 = (uVar25 ^ (uVar25 ^ uVar30) & (uVar31 ^ uVar25)) + iVar43 +
                 (uVar44 >> 2 | uVar44 << 0x1e);
        uVar45 = ((uint)local_c0._12_4_ >> 0xb | local_c0._12_4_ << 0x15) ^ local_c0._12_4_;
        uVar44 = (uVar39 >> 2 | uVar39 * 0x40000000) ^ uVar39;
        local_c0._8_4_ =
             ((uint)local_c0._12_4_ >> 3 ^ (uVar45 >> 7 | uVar45 << 0x19)) + local_a0._12_4_ +
             local_c0._8_4_ + ((uVar44 >> 0x11 | uVar44 << 0xf) ^ uVar39 >> 10);
        uVar45 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
        uVar44 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
        uVar45 = (uVar45 >> 5 | uVar45 << 0x1b) ^ uVar27;
        uVar44 = (uVar44 >> 0xb | uVar44 << 0x15) ^ uVar46;
        iVar43 = local_c0._8_4_ + uVar47 + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) + piVar35[2] +
                 (uVar45 >> 6 | uVar45 << 0x1a);
        uVar30 = uVar30 + iVar43;
        uVar29 = (uVar31 ^ (uVar31 ^ uVar25) & (uVar46 ^ uVar31)) + iVar43 +
                 (uVar44 >> 2 | uVar44 << 0x1e);
        uVar45 = ((uint)local_b0._0_4_ >> 0xb | local_b0._0_4_ << 0x15) ^ local_b0._0_4_;
        uVar47 = ((uint)local_c0._4_4_ >> 2 | local_c0._4_4_ * 0x40000000) ^ local_c0._4_4_;
        local_c0._12_4_ =
             ((uint)local_b0._0_4_ >> 3 ^ (uVar45 >> 7 | uVar45 << 0x19)) + local_90._0_4_ +
             local_c0._12_4_ + ((uVar47 >> 0x11 | uVar47 << 0xf) ^ (uint)local_c0._4_4_ >> 10);
        uVar47 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
        uVar45 = (uVar29 >> 9 | uVar29 * 0x800000) ^ uVar29;
        uVar47 = (uVar47 >> 5 | uVar47 << 0x1b) ^ uVar30;
        uVar45 = (uVar45 >> 0xb | uVar45 << 0x15) ^ uVar29;
        iVar43 = local_c0._12_4_ + uVar48 + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) + piVar35[3] +
                 (uVar47 >> 6 | uVar47 << 0x1a);
        uVar25 = uVar25 + iVar43;
        uVar49 = (uVar46 ^ (uVar46 ^ uVar31) & (uVar29 ^ uVar46)) + iVar43 +
                 (uVar45 >> 2 | uVar45 << 0x1e);
        uVar48 = ((uint)local_b0._4_4_ >> 0xb | local_b0._4_4_ << 0x15) ^ local_b0._4_4_;
        uVar47 = ((uint)local_c0._8_4_ >> 2 | local_c0._8_4_ * 0x40000000) ^ local_c0._8_4_;
        uVar40 = ((uint)local_b0._4_4_ >> 3 ^ (uVar48 >> 7 | uVar48 << 0x19)) + local_90._4_4_ +
                 local_b0._0_4_ + ((uVar47 >> 0x11 | uVar47 << 0xf) ^ (uint)local_c0._8_4_ >> 10);
        uVar48 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
        uVar47 = (uVar49 >> 9 | uVar49 * 0x800000) ^ uVar49;
        uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar25;
        uVar47 = (uVar47 >> 0xb | uVar47 << 0x15) ^ uVar49;
        iVar43 = uVar40 + uVar28 + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) + piVar35[8] +
                 (uVar48 >> 6 | uVar48 << 0x1a);
        uVar31 = uVar31 + iVar43;
        uVar28 = (uVar29 ^ (uVar29 ^ uVar46) & (uVar49 ^ uVar29)) + iVar43 +
                 (uVar47 >> 2 | uVar47 << 0x1e);
        uVar47 = ((uint)local_b0._8_4_ >> 0xb | local_b0._8_4_ << 0x15) ^ local_b0._8_4_;
        uVar48 = ((uint)local_c0._12_4_ >> 2 | local_c0._12_4_ * 0x40000000) ^ local_c0._12_4_;
        local_b0._4_4_ =
             ((uint)local_b0._8_4_ >> 3 ^ (uVar47 >> 7 | uVar47 << 0x19)) + local_90._8_4_ +
             local_b0._4_4_ + ((uVar48 >> 0x11 | uVar48 << 0xf) ^ (uint)local_c0._12_4_ >> 10);
        uVar48 = (uVar31 >> 0xe | uVar31 * 0x40000) ^ uVar31;
        local_b0._0_4_ = uVar40;
        uVar47 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
        uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar31;
        uVar47 = (uVar47 >> 0xb | uVar47 << 0x15) ^ uVar28;
        iVar43 = local_b0._4_4_ + uVar27 + ((uVar25 ^ uVar30) & uVar31 ^ uVar30) + piVar35[9] +
                 (uVar48 >> 6 | uVar48 << 0x1a);
        uVar46 = uVar46 + iVar43;
        local_b0._12_4_ = auVar71._12_4_;
        uVar27 = (uVar49 ^ (uVar49 ^ uVar29) & (uVar28 ^ uVar49)) + iVar43 +
                 (uVar47 >> 2 | uVar47 << 0x1e);
        uVar48 = ((uint)local_b0._12_4_ >> 0xb | local_b0._12_4_ << 0x15) ^ local_b0._12_4_;
        uVar47 = (uVar40 >> 2 | uVar40 * 0x40000000) ^ uVar40;
        local_b0._8_4_ =
             ((uint)local_b0._12_4_ >> 3 ^ (uVar48 >> 7 | uVar48 << 0x19)) + local_90._12_4_ +
             local_b0._8_4_ + ((uVar47 >> 0x11 | uVar47 << 0xf) ^ uVar40 >> 10);
        uVar48 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
        uVar47 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
        uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar46;
        uVar47 = (uVar47 >> 0xb | uVar47 << 0x15) ^ uVar27;
        iVar43 = local_b0._8_4_ + uVar30 + ((uVar31 ^ uVar25) & uVar46 ^ uVar25) + piVar35[10] +
                 (uVar48 >> 6 | uVar48 << 0x1a);
        uVar29 = uVar29 + iVar43;
        uVar30 = (uVar28 ^ (uVar28 ^ uVar49) & (uVar27 ^ uVar28)) + iVar43 +
                 (uVar47 >> 2 | uVar47 << 0x1e);
        uVar47 = ((uint)local_a0._0_4_ >> 0xb | local_a0._0_4_ << 0x15) ^ local_a0._0_4_;
        uVar48 = ((uint)local_b0._4_4_ >> 2 | local_b0._4_4_ * 0x40000000) ^ local_b0._4_4_;
        local_b0._12_4_ =
             ((uint)local_a0._0_4_ >> 3 ^ (uVar47 >> 7 | uVar47 << 0x19)) + uVar39 + local_b0._12_4_
             + ((uVar48 >> 0x11 | uVar48 << 0xf) ^ (uint)local_b0._4_4_ >> 10);
        uVar48 = (uVar29 >> 0xe | uVar29 * 0x40000) ^ uVar29;
        uVar47 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
        uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar29;
        uVar47 = (uVar47 >> 0xb | uVar47 << 0x15) ^ uVar30;
        iVar43 = local_b0._12_4_ + uVar25 + ((uVar46 ^ uVar31) & uVar29 ^ uVar31) + piVar35[0xb] +
                 (uVar48 >> 6 | uVar48 << 0x1a);
        uVar49 = uVar49 + iVar43;
        uVar44 = (uVar27 ^ (uVar27 ^ uVar28) & (uVar30 ^ uVar27)) + iVar43 +
                 (uVar47 >> 2 | uVar47 << 0x1e);
        uVar25 = ((uint)local_a0._4_4_ >> 0xb | local_a0._4_4_ << 0x15) ^ local_a0._4_4_;
        uVar48 = ((uint)local_b0._8_4_ >> 2 | local_b0._8_4_ * 0x40000000) ^ local_b0._8_4_;
        local_a0._0_4_ =
             ((uint)local_a0._4_4_ >> 3 ^ (uVar25 >> 7 | uVar25 << 0x19)) + local_c0._4_4_ +
             local_a0._0_4_ + ((uVar48 >> 0x11 | uVar48 << 0xf) ^ (uint)local_b0._8_4_ >> 10);
        uVar25 = (uVar49 >> 0xe | uVar49 * 0x40000) ^ uVar49;
        uVar48 = (uVar44 >> 9 | uVar44 * 0x800000) ^ uVar44;
        uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar49;
        uVar48 = (uVar48 >> 0xb | uVar48 << 0x15) ^ uVar44;
        iVar43 = local_a0._0_4_ + uVar31 + ((uVar29 ^ uVar46) & uVar49 ^ uVar46) + piVar35[0x10] +
                 (uVar25 >> 6 | uVar25 << 0x1a);
        uVar28 = uVar28 + iVar43;
        uVar45 = (uVar30 ^ (uVar30 ^ uVar27) & (uVar44 ^ uVar30)) + iVar43 +
                 (uVar48 >> 2 | uVar48 << 0x1e);
        uVar48 = ((uint)local_a0._8_4_ >> 0xb | local_a0._8_4_ << 0x15) ^ local_a0._8_4_;
        uVar25 = ((uint)local_b0._12_4_ >> 2 | local_b0._12_4_ * 0x40000000) ^ local_b0._12_4_;
        local_a0._4_4_ =
             ((uint)local_a0._8_4_ >> 3 ^ (uVar48 >> 7 | uVar48 << 0x19)) + local_c0._8_4_ +
             local_a0._4_4_ + ((uVar25 >> 0x11 | uVar25 << 0xf) ^ (uint)local_b0._12_4_ >> 10);
        uVar25 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
        uVar48 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
        uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar28;
        uVar48 = (uVar48 >> 0xb | uVar48 << 0x15) ^ uVar45;
        iVar43 = local_a0._4_4_ + uVar46 + ((uVar49 ^ uVar29) & uVar28 ^ uVar29) + piVar35[0x11] +
                 (uVar25 >> 6 | uVar25 << 0x1a);
        uVar27 = uVar27 + iVar43;
        uVar46 = (uVar44 ^ (uVar44 ^ uVar30) & (uVar45 ^ uVar44)) + iVar43 +
                 (uVar48 >> 2 | uVar48 << 0x1e);
        uVar25 = ((uint)local_a0._12_4_ >> 0xb | local_a0._12_4_ << 0x15) ^ local_a0._12_4_;
        uVar48 = ((uint)local_a0._0_4_ >> 2 | local_a0._0_4_ * 0x40000000) ^ local_a0._0_4_;
        local_a0._8_4_ =
             ((uint)local_a0._12_4_ >> 3 ^ (uVar25 >> 7 | uVar25 << 0x19)) + local_c0._12_4_ +
             local_a0._8_4_ + ((uVar48 >> 0x11 | uVar48 << 0xf) ^ (uint)local_a0._0_4_ >> 10);
        uVar25 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
        uVar48 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
        uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar27;
        uVar48 = (uVar48 >> 0xb | uVar48 << 0x15) ^ uVar46;
        iVar43 = local_a0._8_4_ + uVar29 + ((uVar28 ^ uVar49) & uVar27 ^ uVar49) + piVar35[0x12] +
                 (uVar25 >> 6 | uVar25 << 0x1a);
        uVar30 = uVar30 + iVar43;
        uVar47 = (uVar45 ^ (uVar45 ^ uVar44) & (uVar46 ^ uVar45)) + iVar43 +
                 (uVar48 >> 2 | uVar48 << 0x1e);
        uVar48 = ((uint)local_90._0_4_ >> 0xb | local_90._0_4_ << 0x15) ^ local_90._0_4_;
        uVar25 = ((uint)local_a0._4_4_ >> 2 | local_a0._4_4_ * 0x40000000) ^ local_a0._4_4_;
        local_a0._12_4_ =
             ((uint)local_90._0_4_ >> 3 ^ (uVar48 >> 7 | uVar48 << 0x19)) + uVar40 + local_a0._12_4_
             + ((uVar25 >> 0x11 | uVar25 << 0xf) ^ (uint)local_a0._4_4_ >> 10);
        uVar25 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
        uVar48 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
        uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar30;
        uVar48 = (uVar48 >> 0xb | uVar48 << 0x15) ^ uVar47;
        iVar43 = local_a0._12_4_ + uVar49 + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) + piVar35[0x13] +
                 (uVar25 >> 6 | uVar25 << 0x1a);
        uVar44 = uVar44 + iVar43;
        uVar48 = (uVar46 ^ (uVar46 ^ uVar45) & (uVar47 ^ uVar46)) + iVar43 +
                 (uVar48 >> 2 | uVar48 << 0x1e);
        uVar25 = ((uint)local_90._4_4_ >> 0xb | local_90._4_4_ << 0x15) ^ local_90._4_4_;
        uVar49 = ((uint)local_a0._8_4_ >> 2 | local_a0._8_4_ * 0x40000000) ^ local_a0._8_4_;
        local_90._0_4_ =
             ((uint)local_90._4_4_ >> 3 ^ (uVar25 >> 7 | uVar25 << 0x19)) + local_b0._4_4_ +
             local_90._0_4_ + ((uVar49 >> 0x11 | uVar49 << 0xf) ^ (uint)local_a0._8_4_ >> 10);
        uVar25 = (uVar44 >> 0xe | uVar44 * 0x40000) ^ uVar44;
        uVar49 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
        uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar44;
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar48;
        iVar43 = local_90._0_4_ + uVar28 + ((uVar30 ^ uVar27) & uVar44 ^ uVar27) + piVar35[0x18] +
                 (uVar25 >> 6 | uVar25 << 0x1a);
        uVar45 = uVar45 + iVar43;
        uVar28 = (uVar47 ^ (uVar47 ^ uVar46) & (uVar48 ^ uVar47)) + iVar43 +
                 (uVar49 >> 2 | uVar49 << 0x1e);
        uVar49 = ((uint)local_90._8_4_ >> 0xb | local_90._8_4_ << 0x15) ^ local_90._8_4_;
        uVar25 = ((uint)local_a0._12_4_ >> 2 | local_a0._12_4_ * 0x40000000) ^ local_a0._12_4_;
        local_90._4_4_ =
             ((uint)local_90._8_4_ >> 3 ^ (uVar49 >> 7 | uVar49 << 0x19)) + local_b0._8_4_ +
             local_90._4_4_ + ((uVar25 >> 0x11 | uVar25 << 0xf) ^ (uint)local_a0._12_4_ >> 10);
        uVar25 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
        uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
        uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar45;
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
        iVar43 = local_90._4_4_ + uVar27 + ((uVar44 ^ uVar30) & uVar45 ^ uVar30) + piVar35[0x19] +
                 (uVar25 >> 6 | uVar25 << 0x1a);
        uVar46 = uVar46 + iVar43;
        uVar27 = (uVar48 ^ (uVar48 ^ uVar47) & (uVar28 ^ uVar48)) + iVar43 +
                 (uVar49 >> 2 | uVar49 << 0x1e);
        uVar25 = ((uint)local_90._12_4_ >> 0xb | local_90._12_4_ << 0x15) ^ local_90._12_4_;
        uVar49 = ((uint)local_90._0_4_ >> 2 | local_90._0_4_ * 0x40000000) ^ local_90._0_4_;
        local_90._8_4_ =
             ((uint)local_90._12_4_ >> 3 ^ (uVar25 >> 7 | uVar25 << 0x19)) + local_b0._12_4_ +
             local_90._8_4_ + ((uVar49 >> 0x11 | uVar49 << 0xf) ^ (uint)local_90._0_4_ >> 10);
        uVar25 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
        uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
        uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar46;
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
        iVar43 = local_90._8_4_ + uVar30 + ((uVar45 ^ uVar44) & uVar46 ^ uVar44) + piVar35[0x1a] +
                 (uVar25 >> 6 | uVar25 << 0x1a);
        uVar47 = uVar47 + iVar43;
        uVar30 = (uVar28 ^ (uVar28 ^ uVar48) & (uVar27 ^ uVar28)) + iVar43 +
                 (uVar49 >> 2 | uVar49 << 0x1e);
        uVar49 = (uVar39 >> 0xb | uVar39 * 0x200000) ^ uVar39;
        uVar25 = ((uint)local_90._4_4_ >> 2 | local_90._4_4_ * 0x40000000) ^ local_90._4_4_;
        local_90._12_4_ =
             (uVar39 >> 3 ^ (uVar49 >> 7 | uVar49 << 0x19)) + local_a0._0_4_ + local_90._12_4_ +
             ((uVar25 >> 0x11 | uVar25 << 0xf) ^ (uint)local_90._4_4_ >> 10);
        uVar25 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
        uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
        uVar29 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar47;
        uVar25 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
        uVar49 = uVar30 ^ uVar27;
        uVar25 = uVar25 >> 2 | uVar25 << 0x1e;
        iVar43 = local_90._12_4_ + uVar44 + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) + piVar35[0x1b] +
                 (uVar29 >> 6 | uVar29 << 0x1a);
        uVar48 = uVar48 + iVar43;
        iVar43 = (uVar27 ^ (uVar27 ^ uVar28) & uVar49) + iVar43;
        pcVar1 = (char *)((long)piVar35 + 0x83);
        piVar35 = piVar35 + 0x20;
      } while (*pcVar1 != '\0');
      param_2 = param_2 + 4;
      uVar25 = iVar43 + uVar25 + *param_1;
      uVar30 = uVar30 + param_1[1];
      uVar27 = uVar27 + param_1[2];
      uVar28 = uVar28 + param_1[3];
      uVar48 = uVar48 + param_1[4];
      uVar47 = uVar47 + param_1[5];
      uVar46 = uVar46 + param_1[6];
      uVar45 = uVar45 + param_1[7];
      *param_1 = uVar25;
      param_1[1] = uVar30;
      param_1[2] = uVar27;
      param_1[3] = uVar28;
      param_1[4] = uVar48;
      param_1[5] = uVar47;
      param_1[6] = uVar46;
      param_1[7] = uVar45;
    } while (param_2 < pauVar4);
    return;
  }
  pauVar4 = param_2 + param_3 * 4;
  uVar25 = *param_1;
  uVar30 = param_1[1];
  uVar27 = param_1[2];
  uVar28 = param_1[3];
  uVar48 = param_1[4];
  uVar47 = param_1[5];
  uVar46 = param_1[6];
  uVar45 = param_1[7];
  do {
    in_ZMM0._0_16_ = pshufb(*param_2,_DAT_00586380);
    in_ZMM1._0_16_ = pshufb(param_2[1],_DAT_00586380);
    in_ZMM2._0_16_ = pshufb(param_2[2],_DAT_00586380);
    local_c0._0_4_ = DAT_00586180 + in_ZMM0._0_4_;
    local_c0._4_4_ = DAT_00586184 + in_ZMM0._4_4_;
    local_c0._8_4_ = DAT_00586188 + in_ZMM0._8_4_;
    local_c0._12_4_ = DAT_0058618c + in_ZMM0._12_4_;
    in_ZMM3._0_16_ = pshufb(param_2[3],_DAT_00586380);
    local_b0._0_4_ = DAT_005861a0 + in_ZMM1._0_4_;
    local_b0._4_4_ = DAT_005861a4 + in_ZMM1._4_4_;
    local_b0._8_4_ = DAT_005861a8 + in_ZMM1._8_4_;
    local_b0._12_4_ = DAT_005861ac + in_ZMM1._12_4_;
    local_a0._0_4_ = DAT_005861c0 + in_ZMM2._0_4_;
    local_a0._4_4_ = DAT_005861c4 + in_ZMM2._4_4_;
    local_a0._8_4_ = DAT_005861c8 + in_ZMM2._8_4_;
    local_a0._12_4_ = DAT_005861cc + in_ZMM2._12_4_;
    local_90._0_4_ = DAT_005861e0 + in_ZMM3._0_4_;
    local_90._4_4_ = DAT_005861e4 + in_ZMM3._4_4_;
    local_90._8_4_ = DAT_005861e8 + in_ZMM3._8_4_;
    local_90._12_4_ = DAT_005861ec + in_ZMM3._12_4_;
    uVar44 = uVar30 ^ uVar27;
    piVar35 = &DAT_00586180;
    do {
      uVar49 = (uVar48 >> 0xe | uVar48 << 0x12) ^ uVar48;
      uVar29 = (uVar25 >> 9 | uVar25 << 0x17) ^ uVar25;
      uVar49 = (uVar49 >> 5 | uVar49 << 0x1b) ^ uVar48;
      uVar41 = in_ZMM0._4_4_;
      uVar42 = in_ZMM0._8_4_;
      uVar85 = in_ZMM0._12_4_;
      uVar86 = in_ZMM1._0_4_;
      uVar29 = (uVar29 >> 0xb | uVar29 << 0x15) ^ uVar25;
      iVar43 = uVar45 + local_c0._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
               (uVar49 >> 6 | uVar49 << 0x1a);
      uVar118 = in_ZMM2._4_4_;
      uVar150 = in_ZMM2._8_4_;
      uVar151 = in_ZMM2._12_4_;
      uVar152 = in_ZMM3._0_4_;
      uVar28 = uVar28 + iVar43;
      uVar31 = in_ZMM3._4_4_;
      uVar39 = in_ZMM3._8_4_;
      uVar40 = in_ZMM3._12_4_;
      auVar119._0_8_ = CONCAT44(uVar39,uVar39);
      auVar119._8_4_ = uVar40;
      auVar119._12_4_ = uVar40;
      uVar45 = (uVar29 >> 2 | uVar29 << 0x1e) + iVar43 + (uVar44 & (uVar25 ^ uVar30) ^ uVar30);
      uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
      uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
      auVar120._0_4_ = uVar39 >> 10;
      auVar120._4_4_ = 0;
      auVar120._8_4_ = uVar40 >> 10;
      auVar120._12_4_ = uVar40 >> 10;
      iVar43 = uVar46 + local_c0._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar27 = uVar27 + iVar43;
      auVar99._0_8_ = auVar119._0_8_ >> 0x11;
      auVar99._8_8_ = auVar119._8_8_ >> 0x11;
      uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
      auVar121._0_8_ = auVar119._0_8_ >> 0x13;
      auVar121._8_8_ = auVar119._8_8_ >> 0x13;
      uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
      auVar121 = auVar120 ^ auVar99 ^ auVar121;
      uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
      in_ZMM0._0_4_ =
           in_ZMM0._0_4_ + uVar118 +
           (uVar41 >> 3 ^ uVar41 >> 7 ^ uVar41 << 0xe ^ uVar41 >> 0x12 ^ uVar41 << 0x19) +
           auVar121._0_4_;
      in_ZMM0._4_4_ =
           uVar41 + uVar150 +
           (uVar42 >> 3 ^ uVar42 >> 7 ^ uVar42 << 0xe ^ uVar42 >> 0x12 ^ uVar42 << 0x19) +
           auVar121._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
      iVar43 = uVar47 + local_c0._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      auVar122._0_8_ = CONCAT44(in_ZMM0._0_4_,in_ZMM0._0_4_);
      auVar122._8_4_ = in_ZMM0._4_4_;
      auVar122._12_4_ = in_ZMM0._4_4_;
      uVar30 = uVar30 + iVar43;
      auVar123._0_4_ = in_ZMM0._0_4_ >> 10;
      auVar123._4_4_ = 0;
      auVar123._8_4_ = in_ZMM0._4_4_ >> 10;
      auVar123._12_4_ = in_ZMM0._4_4_ >> 10;
      uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
      auVar100._0_8_ = auVar122._0_8_ >> 0x11;
      auVar100._8_8_ = auVar122._8_8_ >> 0x11;
      uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
      uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
      auVar124._0_8_ = auVar122._0_8_ >> 0x13;
      auVar124._8_8_ = auVar122._8_8_ >> 0x13;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
      auVar124 = auVar123 ^ auVar100 ^ auVar124;
      piVar9 = piVar35 + 0x21;
      piVar10 = piVar35 + 0x22;
      piVar11 = piVar35 + 0x23;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
      iVar43 = uVar48 + local_c0._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      in_ZMM0._8_4_ =
           uVar42 + uVar151 +
           (uVar85 >> 3 ^ uVar85 >> 7 ^ uVar85 << 0xe ^ uVar85 >> 0x12 ^ uVar85 << 0x19) +
           auVar124._0_4_;
      in_ZMM0._12_4_ =
           uVar85 + uVar152 +
           (uVar86 >> 3 ^ uVar86 >> 7 ^ uVar86 << 0xe ^ uVar86 >> 0x12 ^ uVar86 << 0x19) +
           auVar124._8_4_;
      uVar25 = uVar25 + iVar43;
      local_c0._0_4_ = piVar35[0x20] + in_ZMM0._0_4_;
      uVar48 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
      local_c0._4_4_ = *piVar9 + in_ZMM0._4_4_;
      local_c0._8_4_ = *piVar10 + in_ZMM0._8_4_;
      local_c0._12_4_ = *piVar11 + in_ZMM0._12_4_;
      uVar44 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
      uVar49 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar25;
      uVar29 = in_ZMM1._4_4_;
      uVar41 = in_ZMM1._8_4_;
      uVar42 = in_ZMM1._12_4_;
      uVar85 = in_ZMM2._0_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar48;
      iVar43 = uVar28 + local_b0._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar45 = uVar45 + iVar43;
      auVar125._0_8_ = CONCAT44(in_ZMM0._8_4_,in_ZMM0._8_4_);
      auVar125._8_4_ = in_ZMM0._12_4_;
      auVar125._12_4_ = in_ZMM0._12_4_;
      uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar47 ^ uVar46) & (uVar48 ^ uVar47) ^ uVar47);
      uVar44 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
      uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar45;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
      auVar126._0_4_ = in_ZMM0._8_4_ >> 10;
      auVar126._4_4_ = 0;
      auVar126._8_4_ = in_ZMM0._12_4_ >> 10;
      auVar126._12_4_ = in_ZMM0._12_4_ >> 10;
      iVar43 = uVar27 + local_b0._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar46 = uVar46 + iVar43;
      auVar101._0_8_ = auVar125._0_8_ >> 0x11;
      auVar101._8_8_ = auVar125._8_8_ >> 0x11;
      uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar48 ^ uVar47) & (uVar28 ^ uVar48) ^ uVar48);
      auVar127._0_8_ = auVar125._0_8_ >> 0x13;
      auVar127._8_8_ = auVar125._8_8_ >> 0x13;
      uVar44 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
      auVar127 = auVar126 ^ auVar101 ^ auVar127;
      uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar46;
      in_ZMM1._0_4_ =
           uVar86 + uVar31 +
           (uVar29 >> 3 ^ uVar29 >> 7 ^ uVar29 << 0xe ^ uVar29 >> 0x12 ^ uVar29 << 0x19) +
           auVar127._0_4_;
      in_ZMM1._4_4_ =
           uVar29 + uVar39 +
           (uVar41 >> 3 ^ uVar41 >> 7 ^ uVar41 << 0xe ^ uVar41 >> 0x12 ^ uVar41 << 0x19) +
           auVar127._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
      iVar43 = uVar30 + local_b0._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      auVar128._0_8_ = CONCAT44(in_ZMM1._0_4_,in_ZMM1._0_4_);
      auVar128._8_4_ = in_ZMM1._4_4_;
      auVar128._12_4_ = in_ZMM1._4_4_;
      uVar47 = uVar47 + iVar43;
      auVar129._0_4_ = in_ZMM1._0_4_ >> 10;
      auVar129._4_4_ = 0;
      auVar129._8_4_ = in_ZMM1._4_4_ >> 10;
      auVar129._12_4_ = in_ZMM1._4_4_ >> 10;
      uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar28 ^ uVar48) & (uVar27 ^ uVar28) ^ uVar28);
      auVar102._0_8_ = auVar128._0_8_ >> 0x11;
      auVar102._8_8_ = auVar128._8_8_ >> 0x11;
      uVar44 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
      uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
      auVar130._0_8_ = auVar128._0_8_ >> 0x13;
      auVar130._8_8_ = auVar128._8_8_ >> 0x13;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar47;
      auVar130 = auVar129 ^ auVar102 ^ auVar130;
      piVar2 = piVar35 + 0x28;
      piVar12 = piVar35 + 0x29;
      piVar13 = piVar35 + 0x2a;
      piVar14 = piVar35 + 0x2b;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
      iVar43 = uVar25 + local_b0._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      in_ZMM1._8_4_ =
           uVar41 + uVar40 +
           (uVar42 >> 3 ^ uVar42 >> 7 ^ uVar42 << 0xe ^ uVar42 >> 0x12 ^ uVar42 << 0x19) +
           auVar130._0_4_;
      in_ZMM1._12_4_ =
           uVar42 + in_ZMM0._0_4_ +
           (uVar85 >> 3 ^ uVar85 >> 7 ^ uVar85 << 0xe ^ uVar85 >> 0x12 ^ uVar85 << 0x19) +
           auVar130._8_4_;
      uVar48 = uVar48 + iVar43;
      uVar25 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar27 ^ uVar28) & (uVar30 ^ uVar27) ^ uVar27);
      local_b0._4_4_ = *piVar12 + in_ZMM1._4_4_;
      local_b0._0_4_ = *piVar2 + in_ZMM1._0_4_;
      local_b0._8_4_ = *piVar13 + in_ZMM1._8_4_;
      local_b0._12_4_ = *piVar14 + in_ZMM1._12_4_;
      uVar44 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
      uVar49 = (uVar25 >> 9 | uVar25 * 0x800000) ^ uVar25;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar48;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar25;
      iVar43 = uVar45 + local_a0._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar28 = uVar28 + iVar43;
      auVar131._0_8_ = CONCAT44(in_ZMM1._8_4_,in_ZMM1._8_4_);
      auVar131._8_4_ = in_ZMM1._12_4_;
      auVar131._12_4_ = in_ZMM1._12_4_;
      uVar45 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar30 ^ uVar27) & (uVar25 ^ uVar30) ^ uVar30);
      uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
      uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
      auVar132._0_4_ = in_ZMM1._8_4_ >> 10;
      auVar132._4_4_ = 0;
      auVar132._8_4_ = in_ZMM1._12_4_ >> 10;
      auVar132._12_4_ = in_ZMM1._12_4_ >> 10;
      iVar43 = uVar46 + local_a0._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar27 = uVar27 + iVar43;
      auVar103._0_8_ = auVar131._0_8_ >> 0x11;
      auVar103._8_8_ = auVar131._8_8_ >> 0x11;
      uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
      auVar133._0_8_ = auVar131._0_8_ >> 0x13;
      auVar133._8_8_ = auVar131._8_8_ >> 0x13;
      uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
      auVar133 = auVar132 ^ auVar103 ^ auVar133;
      uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
      in_ZMM2._0_4_ =
           uVar85 + in_ZMM0._4_4_ +
           (uVar118 >> 3 ^ uVar118 >> 7 ^ uVar118 << 0xe ^ uVar118 >> 0x12 ^ uVar118 << 0x19) +
           auVar133._0_4_;
      in_ZMM2._4_4_ =
           uVar118 + in_ZMM0._8_4_ +
           (uVar150 >> 3 ^ uVar150 >> 7 ^ uVar150 << 0xe ^ uVar150 >> 0x12 ^ uVar150 << 0x19) +
           auVar133._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
      iVar43 = uVar47 + local_a0._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      auVar134._0_8_ = CONCAT44(in_ZMM2._0_4_,in_ZMM2._0_4_);
      auVar134._8_4_ = in_ZMM2._4_4_;
      auVar134._12_4_ = in_ZMM2._4_4_;
      uVar30 = uVar30 + iVar43;
      auVar135._0_4_ = in_ZMM2._0_4_ >> 10;
      auVar135._4_4_ = 0;
      auVar135._8_4_ = in_ZMM2._4_4_ >> 10;
      auVar135._12_4_ = in_ZMM2._4_4_ >> 10;
      uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
      auVar104._0_8_ = auVar134._0_8_ >> 0x11;
      auVar104._8_8_ = auVar134._8_8_ >> 0x11;
      uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
      uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
      auVar136._0_8_ = auVar134._0_8_ >> 0x13;
      auVar136._8_8_ = auVar134._8_8_ >> 0x13;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
      auVar136 = auVar135 ^ auVar104 ^ auVar136;
      piVar3 = piVar35 + 0x30;
      piVar15 = piVar35 + 0x31;
      piVar16 = piVar35 + 0x32;
      piVar17 = piVar35 + 0x33;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
      iVar43 = uVar48 + local_a0._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      in_ZMM2._8_4_ =
           uVar150 + in_ZMM0._12_4_ +
           (uVar151 >> 3 ^ uVar151 >> 7 ^ uVar151 << 0xe ^ uVar151 >> 0x12 ^ uVar151 << 0x19) +
           auVar136._0_4_;
      in_ZMM2._12_4_ =
           uVar151 + in_ZMM1._0_4_ +
           (uVar152 >> 3 ^ uVar152 >> 7 ^ uVar152 << 0xe ^ uVar152 >> 0x12 ^ uVar152 << 0x19) +
           auVar136._8_4_;
      uVar25 = uVar25 + iVar43;
      uVar48 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
      local_a0._4_4_ = *piVar15 + in_ZMM2._4_4_;
      local_a0._0_4_ = *piVar3 + in_ZMM2._0_4_;
      local_a0._8_4_ = *piVar16 + in_ZMM2._8_4_;
      local_a0._12_4_ = *piVar17 + in_ZMM2._12_4_;
      uVar44 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
      uVar49 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar25;
      auVar83._0_4_ = uVar31 >> 3;
      auVar83._4_4_ = uVar39 >> 3;
      auVar83._8_4_ = uVar40 >> 3;
      auVar83._12_4_ = in_ZMM0._0_4_ >> 3;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar48;
      iVar43 = uVar28 + local_90._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar45 = uVar45 + iVar43;
      auVar105._0_4_ = uVar31 >> 7;
      auVar105._4_4_ = uVar39 >> 7;
      auVar105._8_4_ = uVar40 >> 7;
      auVar105._12_4_ = in_ZMM0._0_4_ >> 7;
      auVar137._0_8_ = CONCAT44(in_ZMM2._8_4_,in_ZMM2._8_4_);
      auVar137._8_4_ = in_ZMM2._12_4_;
      auVar137._12_4_ = in_ZMM2._12_4_;
      uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar47 ^ uVar46) & (uVar48 ^ uVar47) ^ uVar47);
      auVar90._0_4_ = uVar31 << 0xe;
      auVar90._4_4_ = uVar39 << 0xe;
      auVar90._8_4_ = uVar40 << 0xe;
      auVar90._12_4_ = in_ZMM0._0_4_ * 0x4000;
      uVar44 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
      auVar106._0_4_ = uVar31 >> 0x12;
      auVar106._4_4_ = uVar39 >> 0x12;
      auVar106._8_4_ = uVar40 >> 0x12;
      auVar106._12_4_ = in_ZMM0._0_4_ >> 0x12;
      uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar45;
      auVar84._0_4_ = uVar31 << 0x19;
      auVar84._4_4_ = uVar39 << 0x19;
      auVar84._8_4_ = uVar40 << 0x19;
      auVar84._12_4_ = in_ZMM0._0_4_ * 0x2000000;
      auVar84 = auVar83 ^ auVar105 ^ auVar90 ^ auVar106 ^ auVar84;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
      auVar138._0_4_ = in_ZMM2._8_4_ >> 10;
      auVar138._4_4_ = 0;
      auVar138._8_4_ = in_ZMM2._12_4_ >> 10;
      auVar138._12_4_ = in_ZMM2._12_4_ >> 10;
      iVar43 = uVar27 + local_90._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar46 = uVar46 + iVar43;
      auVar107._0_8_ = auVar137._0_8_ >> 0x11;
      auVar107._8_8_ = auVar137._8_8_ >> 0x11;
      uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar48 ^ uVar47) & (uVar28 ^ uVar48) ^ uVar48);
      auVar139._0_8_ = auVar137._0_8_ >> 0x13;
      auVar139._8_8_ = auVar137._8_8_ >> 0x13;
      uVar44 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
      auVar139 = auVar138 ^ auVar107 ^ auVar139;
      uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar46;
      in_ZMM3._0_4_ = uVar152 + in_ZMM1._4_4_ + auVar84._0_4_ + auVar139._0_4_;
      in_ZMM3._4_4_ = uVar31 + in_ZMM1._8_4_ + auVar84._4_4_ + auVar139._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
      iVar43 = uVar30 + local_90._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      auVar140._0_8_ = CONCAT44(in_ZMM3._0_4_,in_ZMM3._0_4_);
      auVar140._8_4_ = in_ZMM3._4_4_;
      auVar140._12_4_ = in_ZMM3._4_4_;
      uVar47 = uVar47 + iVar43;
      auVar141._0_4_ = in_ZMM3._0_4_ >> 10;
      auVar141._4_4_ = 0;
      auVar141._8_4_ = in_ZMM3._4_4_ >> 10;
      auVar141._12_4_ = in_ZMM3._4_4_ >> 10;
      uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar28 ^ uVar48) & (uVar27 ^ uVar28) ^ uVar28);
      auVar108._0_8_ = auVar140._0_8_ >> 0x11;
      auVar108._8_8_ = auVar140._8_8_ >> 0x11;
      uVar44 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
      uVar29 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
      auVar142._0_8_ = auVar140._0_8_ >> 0x13;
      auVar142._8_8_ = auVar140._8_8_ >> 0x13;
      uVar49 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar47;
      auVar142 = auVar141 ^ auVar108 ^ auVar142;
      uVar44 = uVar30 ^ uVar27;
      uVar29 = (uVar29 >> 0xb | uVar29 << 0x15) ^ uVar30;
      iVar43 = uVar25 + local_90._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
               (uVar49 >> 6 | uVar49 << 0x1a);
      in_ZMM3._8_4_ = uVar39 + in_ZMM1._12_4_ + auVar84._8_4_ + auVar142._0_4_;
      in_ZMM3._12_4_ = uVar40 + in_ZMM2._0_4_ + auVar84._12_4_ + auVar142._8_4_;
      uVar48 = uVar48 + iVar43;
      local_90._0_4_ = piVar35[0x38] + in_ZMM3._0_4_;
      local_90._4_4_ = piVar35[0x39] + in_ZMM3._4_4_;
      local_90._8_4_ = piVar35[0x3a] + in_ZMM3._8_4_;
      local_90._12_4_ = piVar35[0x3b] + in_ZMM3._12_4_;
      uVar25 = (uVar29 >> 2 | uVar29 << 0x1e) + iVar43 + ((uVar27 ^ uVar28) & uVar44 ^ uVar27);
      pcVar1 = (char *)((long)piVar35 + 0x103);
      piVar35 = piVar35 + 0x20;
    } while (*pcVar1 != '\0');
    uVar49 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
    uVar29 = (uVar25 >> 9 | uVar25 * 0x800000) ^ uVar25;
    uVar49 = (uVar49 >> 5 | uVar49 << 0x1b) ^ uVar48;
    uVar29 = (uVar29 >> 0xb | uVar29 << 0x15) ^ uVar25;
    iVar43 = uVar45 + local_c0._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
             (uVar49 >> 6 | uVar49 << 0x1a);
    uVar28 = uVar28 + iVar43;
    uVar45 = (uVar29 >> 2 | uVar29 << 0x1e) + iVar43 + (uVar44 & (uVar25 ^ uVar30) ^ uVar30);
    uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
    uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
    iVar43 = uVar46 + *piVar9 + in_ZMM0._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar27 = uVar27 + iVar43;
    uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
    uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
    uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
    iVar43 = uVar47 + *piVar10 + in_ZMM0._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar30 = uVar30 + iVar43;
    uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
    uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
    uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
    iVar43 = uVar48 + *piVar11 + in_ZMM0._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar25 = uVar25 + iVar43;
    uVar48 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
    uVar44 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
    uVar49 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar25;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar48;
    iVar43 = uVar28 + *piVar2 + in_ZMM1._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar45 = uVar45 + iVar43;
    uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar47 ^ uVar46) & (uVar48 ^ uVar47) ^ uVar47);
    uVar44 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
    uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar45;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
    iVar43 = uVar27 + *piVar12 + in_ZMM1._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar46 = uVar46 + iVar43;
    uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar48 ^ uVar47) & (uVar28 ^ uVar48) ^ uVar48);
    uVar44 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
    uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar46;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
    iVar43 = uVar30 + *piVar13 + in_ZMM1._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar47 = uVar47 + iVar43;
    uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar28 ^ uVar48) & (uVar27 ^ uVar28) ^ uVar28);
    uVar44 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
    uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar47;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
    iVar43 = uVar25 + *piVar14 + in_ZMM1._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar48 = uVar48 + iVar43;
    uVar25 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar27 ^ uVar28) & (uVar30 ^ uVar27) ^ uVar27);
    uVar44 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
    uVar49 = (uVar25 >> 9 | uVar25 * 0x800000) ^ uVar25;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar48;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar25;
    iVar43 = uVar45 + *piVar3 + in_ZMM2._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar28 = uVar28 + iVar43;
    uVar45 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar30 ^ uVar27) & (uVar25 ^ uVar30) ^ uVar30);
    uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
    uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
    iVar43 = uVar46 + *piVar15 + in_ZMM2._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar27 = uVar27 + iVar43;
    uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
    uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
    uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
    iVar43 = uVar47 + *piVar16 + in_ZMM2._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar30 = uVar30 + iVar43;
    uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
    uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
    uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
    iVar43 = uVar48 + *piVar17 + in_ZMM2._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar25 = uVar25 + iVar43;
    uVar44 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
    uVar48 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
    uVar49 = (uVar44 >> 9 | uVar44 * 0x800000) ^ uVar44;
    uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar25;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar44;
    iVar43 = uVar28 + local_90._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
             (uVar48 >> 6 | uVar48 << 0x1a);
    uVar45 = uVar45 + iVar43;
    uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar47 ^ uVar46) & (uVar44 ^ uVar47) ^ uVar47);
    uVar48 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
    uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
    uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar45;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
    iVar43 = uVar27 + local_90._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
             (uVar48 >> 6 | uVar48 << 0x1a);
    uVar46 = uVar46 + iVar43;
    uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar44 ^ uVar47) & (uVar28 ^ uVar44) ^ uVar44);
    uVar48 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
    uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
    uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar46;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
    iVar43 = uVar30 + local_90._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
             (uVar48 >> 6 | uVar48 << 0x1a);
    uVar47 = uVar47 + iVar43;
    uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar28 ^ uVar44) & (uVar27 ^ uVar28) ^ uVar28);
    uVar48 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
    uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
    uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar47;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
    iVar43 = uVar25 + local_90._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
             (uVar48 >> 6 | uVar48 << 0x1a);
    uVar25 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar27 ^ uVar28) & (uVar30 ^ uVar27) ^ uVar27) + *param_1;
    param_2 = param_2 + 4;
    uVar30 = uVar30 + param_1[1];
    uVar27 = uVar27 + param_1[2];
    uVar28 = uVar28 + param_1[3];
    uVar48 = uVar44 + iVar43 + param_1[4];
    uVar47 = uVar47 + param_1[5];
    uVar46 = uVar46 + param_1[6];
    uVar45 = uVar45 + param_1[7];
    *param_1 = uVar25;
    param_1[1] = uVar30;
    param_1[2] = uVar27;
    param_1[3] = uVar28;
    param_1[4] = uVar48;
    param_1[5] = uVar47;
    param_1[6] = uVar46;
    param_1[7] = uVar45;
  } while (param_2 < pauVar4);
  return;
}

