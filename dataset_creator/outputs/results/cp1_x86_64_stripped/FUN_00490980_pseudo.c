
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00490980(undefined1 (*param_1) [16],long param_2,long param_3,undefined1 (*param_4) [16],
                 undefined1 (*param_5) [16],uint *param_6,undefined1 (*param_7) [16])

{
  uint *puVar1;
  undefined1 (*pauVar2) [16];
  code *pcVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [60];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 (*pauVar14) [32];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [32];
  undefined1 (*pauVar21) [32];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [32];
  uint uVar24;
  long lVar25;
  int iVar26;
  undefined1 (*pauVar27) [16];
  uint uVar28;
  undefined1 (*pauVar29) [16];
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar70 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [64];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [64];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [64];
  undefined1 auStack_270 [432];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  auVar86 = _DAT_00490c00;
  if (param_1 == (undefined1 (*) [16])0x0) {
    return 1;
  }
  if ((_DAT_0094b59c >> 0x3d & 1) != 0) {
    auVar85._16_48_ = in_ZMM1._16_48_;
    auVar100._16_48_ = in_ZMM2._16_48_;
    uVar15 = *(uint *)param_4[0xf];
    param_2 = param_2 - (long)param_1;
    uVar18 = *(uint *)*param_4;
    uVar16 = *(uint *)(*param_4 + 4);
    uVar17 = *(uint *)(*param_4 + 8);
    uVar34 = *(uint *)(*param_4 + 0xc);
    auVar90._16_48_ = in_ZMM6._16_48_;
    auVar90._0_16_ = *param_5;
    auVar56 = param_4[1];
    pauVar29 = param_4 + 7;
    auVar100._12_4_ = param_6[2];
    auVar100._8_4_ = param_6[3];
    auVar4._20_4_ = *param_6;
    auVar4._16_4_ = param_6[1];
    auVar4._24_4_ = param_6[3];
    auVar4._28_4_ = param_6[2];
    auVar100._0_8_ = CONCAT44(param_6[6],param_6[7]);
    auVar4._8_4_ = param_6[5];
    auVar4._0_8_ = auVar100._0_8_;
    auVar4._12_4_ = param_6[4];
    auVar85._0_16_ = auVar4._8_16_;
    do {
      auVar62 = pshufb(*param_7,auVar86);
      pauVar22 = param_7 + 3;
      auVar70._0_4_ = _DAT_00490a00 + auVar62._0_4_;
      auVar70._4_4_ = _UNK_00490a04 + auVar62._4_4_;
      auVar70._8_4_ = _UNK_00490a08 + auVar62._8_4_;
      auVar70._12_4_ = _UNK_00490a0c + auVar62._12_4_;
      auVar92 = pshufb(param_7[1],auVar86);
      auVar61._0_4_ = auVar90._0_4_ ^ *(uint *)*param_1 ^ uVar18;
      auVar61._4_4_ = auVar90._4_4_ ^ *(uint *)(*param_1 + 4) ^ uVar16;
      auVar61._8_4_ = auVar90._8_4_ ^ *(uint *)(*param_1 + 8) ^ uVar17;
      auVar61._12_4_ = auVar90._12_4_ ^ *(uint *)(*param_1 + 0xc) ^ uVar34;
      auVar87 = aesenc(auVar61,auVar56);
      auVar59._16_48_ = auVar100._16_48_;
      auVar82 = sha256rnds2_sha(auVar100._0_16_,auVar85._0_16_,auVar70);
      auVar56._4_4_ = auVar70._12_4_;
      auVar56._0_4_ = auVar70._8_4_;
      auVar56._8_4_ = auVar70._0_4_;
      auVar56._12_4_ = auVar70._0_4_;
      auVar70 = aesenc(auVar87,param_4[2]);
      auVar57._16_48_ = auVar85._16_48_;
      auVar56 = sha256rnds2_sha(auVar85._0_16_,auVar82,auVar56);
      auVar87._0_4_ = _DAT_00490a20 + auVar92._0_4_;
      auVar87._4_4_ = _UNK_00490a24 + auVar92._4_4_;
      auVar87._8_4_ = _UNK_00490a28 + auVar92._8_4_;
      auVar87._12_4_ = _UNK_00490a2c + auVar92._12_4_;
      auVar60 = pshufb(param_7[2],auVar86);
      param_7 = param_7 + 4;
      auVar69 = aesenc(auVar70,param_4[3]);
      auVar70 = sha256rnds2_sha(auVar82,auVar56,auVar87);
      auVar82._4_4_ = auVar87._12_4_;
      auVar82._0_4_ = auVar87._8_4_;
      auVar82._8_4_ = auVar87._0_4_;
      auVar82._12_4_ = auVar87._0_4_;
      auVar87 = aesenc(auVar69,param_4[4]);
      auVar56 = sha256rnds2_sha(auVar56,auVar70,auVar82);
      auVar69._0_4_ = _DAT_00490a40 + auVar60._0_4_;
      auVar69._4_4_ = _UNK_00490a44 + auVar60._4_4_;
      auVar69._8_4_ = _UNK_00490a48 + auVar60._8_4_;
      auVar69._12_4_ = _UNK_00490a4c + auVar60._12_4_;
      auVar61 = pshufb(*pauVar22,auVar86);
      auVar82 = sha256msg1_sha(auVar62,auVar92);
      auVar87 = aesenc(auVar87,param_4[5]);
      auVar70 = sha256rnds2_sha(auVar70,auVar56,auVar69);
      auVar62._4_4_ = auVar69._12_4_;
      auVar62._0_4_ = auVar69._8_4_;
      auVar62._8_4_ = auVar69._0_4_;
      auVar62._12_4_ = auVar69._0_4_;
      auVar66._0_4_ = auVar82._0_4_ + auVar60._4_4_;
      auVar66._4_4_ = auVar82._4_4_ + auVar60._8_4_;
      auVar66._8_4_ = auVar82._8_4_ + auVar60._12_4_;
      auVar66._12_4_ = auVar82._12_4_ + auVar61._0_4_;
      auVar87 = aesenc(auVar87,param_4[6]);
      auVar56 = sha256rnds2_sha(auVar56,auVar70,auVar62);
      auVar63._0_4_ = _DAT_00490a60 + auVar61._0_4_;
      auVar63._4_4_ = _UNK_00490a64 + auVar61._4_4_;
      auVar63._8_4_ = _UNK_00490a68 + auVar61._8_4_;
      auVar63._12_4_ = _UNK_00490a6c + auVar61._12_4_;
      auVar69 = sha256msg2_sha(auVar66,auVar61);
      auVar62 = sha256msg1_sha(auVar92,auVar60);
      auVar82 = aesenc(auVar87,*pauVar29);
      auVar87 = sha256rnds2_sha(auVar70,auVar56,auVar63);
      auVar92._4_4_ = auVar63._12_4_;
      auVar92._0_4_ = auVar63._8_4_;
      auVar92._8_4_ = auVar63._0_4_;
      auVar92._12_4_ = auVar63._0_4_;
      auVar82 = aesenc(auVar82,param_4[8]);
      auVar67._0_4_ = auVar62._0_4_ + auVar61._4_4_;
      auVar67._4_4_ = auVar62._4_4_ + auVar61._8_4_;
      auVar67._8_4_ = auVar62._8_4_ + auVar61._12_4_;
      auVar67._12_4_ = auVar62._12_4_ + auVar69._0_4_;
      auVar70 = sha256rnds2_sha(auVar56,auVar87,auVar92);
      auVar81._0_4_ = _DAT_00490a80 + auVar69._0_4_;
      auVar81._4_4_ = _UNK_00490a84 + auVar69._4_4_;
      auVar81._8_4_ = _UNK_00490a88 + auVar69._8_4_;
      auVar81._12_4_ = _UNK_00490a8c + auVar69._12_4_;
      auVar62 = sha256msg2_sha(auVar67,auVar69);
      auVar63 = sha256msg1_sha(auVar60,auVar61);
      auVar56 = param_4[10];
      auVar82 = aesenc(auVar82,param_4[9]);
      auVar87 = sha256rnds2_sha(auVar87,auVar70,auVar81);
      auVar60._4_4_ = auVar81._12_4_;
      auVar60._0_4_ = auVar81._8_4_;
      auVar60._8_4_ = auVar81._0_4_;
      auVar60._12_4_ = auVar81._0_4_;
      auVar68._0_4_ = auVar63._0_4_ + auVar69._4_4_;
      auVar68._4_4_ = auVar63._4_4_ + auVar69._8_4_;
      auVar68._8_4_ = auVar63._8_4_ + auVar69._12_4_;
      auVar68._12_4_ = auVar63._12_4_ + auVar62._0_4_;
      if (10 < uVar15) {
        auVar82 = aesenc(auVar82,auVar56);
        auVar56 = param_4[0xc];
        auVar82 = aesenc(auVar82,param_4[0xb]);
        if (uVar15 != 0xb) {
          auVar82 = aesenc(auVar82,auVar56);
          auVar56 = param_4[0xe];
          auVar82 = aesenc(auVar82,param_4[0xd]);
        }
      }
      auVar82 = aesenclast(auVar82,auVar56);
      auVar56 = param_4[1];
      auVar70 = sha256rnds2_sha(auVar70,auVar87,auVar60);
      uVar33 = *(uint *)param_1[1];
      uVar32 = *(uint *)(param_1[1] + 4);
      uVar31 = *(uint *)(param_1[1] + 8);
      uVar24 = *(uint *)(param_1[1] + 0xc);
      *(undefined1 (*) [16])(param_2 + (long)param_1) = auVar82;
      auVar71._0_4_ = auVar82._0_4_ ^ uVar33 ^ uVar18;
      auVar71._4_4_ = auVar82._4_4_ ^ uVar32 ^ uVar16;
      auVar71._8_4_ = auVar82._8_4_ ^ uVar31 ^ uVar17;
      auVar71._12_4_ = auVar82._12_4_ ^ uVar24 ^ uVar34;
      auVar56 = aesenc(auVar71,auVar56);
      auVar80._0_4_ = _DAT_00490aa0 + auVar62._0_4_;
      auVar80._4_4_ = _UNK_00490aa4 + auVar62._4_4_;
      auVar80._8_4_ = _UNK_00490aa8 + auVar62._8_4_;
      auVar80._12_4_ = _UNK_00490aac + auVar62._12_4_;
      auVar63 = sha256msg2_sha(auVar68,auVar62);
      auVar82 = sha256msg1_sha(auVar61,auVar69);
      auVar56 = aesenc(auVar56,param_4[2]);
      auVar87 = sha256rnds2_sha(auVar87,auVar70,auVar80);
      auVar91._4_4_ = auVar80._12_4_;
      auVar91._0_4_ = auVar80._8_4_;
      auVar91._8_4_ = auVar80._0_4_;
      auVar91._12_4_ = auVar80._0_4_;
      auVar97._0_4_ = auVar82._0_4_ + auVar62._4_4_;
      auVar97._4_4_ = auVar82._4_4_ + auVar62._8_4_;
      auVar97._8_4_ = auVar82._8_4_ + auVar62._12_4_;
      auVar97._12_4_ = auVar82._12_4_ + auVar63._0_4_;
      auVar82 = aesenc(auVar56,param_4[3]);
      auVar56 = sha256rnds2_sha(auVar70,auVar87,auVar91);
      auVar36._0_4_ = _DAT_00490ac0 + auVar63._0_4_;
      auVar36._4_4_ = _UNK_00490ac4 + auVar63._4_4_;
      auVar36._8_4_ = _UNK_00490ac8 + auVar63._8_4_;
      auVar36._12_4_ = _UNK_00490acc + auVar63._12_4_;
      auVar92 = sha256msg2_sha(auVar97,auVar63);
      auVar69 = sha256msg1_sha(auVar69,auVar62);
      auVar82 = aesenc(auVar82,param_4[4]);
      auVar70 = sha256rnds2_sha(auVar87,auVar56,auVar36);
      auVar37._4_4_ = auVar36._12_4_;
      auVar37._0_4_ = auVar36._8_4_;
      auVar37._8_4_ = auVar36._0_4_;
      auVar37._12_4_ = auVar36._0_4_;
      auVar88._0_4_ = auVar69._0_4_ + auVar63._4_4_;
      auVar88._4_4_ = auVar69._4_4_ + auVar63._8_4_;
      auVar88._8_4_ = auVar69._8_4_ + auVar63._12_4_;
      auVar88._12_4_ = auVar69._12_4_ + auVar92._0_4_;
      auVar87 = aesenc(auVar82,param_4[5]);
      auVar56 = sha256rnds2_sha(auVar56,auVar70,auVar37);
      auVar38._0_4_ = _DAT_00490ae0 + auVar92._0_4_;
      auVar38._4_4_ = _UNK_00490ae4 + auVar92._4_4_;
      auVar38._8_4_ = _UNK_00490ae8 + auVar92._8_4_;
      auVar38._12_4_ = _UNK_00490aec + auVar92._12_4_;
      auVar69 = sha256msg2_sha(auVar88,auVar92);
      auVar62 = sha256msg1_sha(auVar62,auVar63);
      auVar82 = aesenc(auVar87,param_4[6]);
      auVar87 = sha256rnds2_sha(auVar70,auVar56,auVar38);
      auVar39._4_4_ = auVar38._12_4_;
      auVar39._0_4_ = auVar38._8_4_;
      auVar39._8_4_ = auVar38._0_4_;
      auVar39._12_4_ = auVar38._0_4_;
      auVar93._0_4_ = auVar62._0_4_ + auVar92._4_4_;
      auVar93._4_4_ = auVar62._4_4_ + auVar92._8_4_;
      auVar93._8_4_ = auVar62._8_4_ + auVar92._12_4_;
      auVar93._12_4_ = auVar62._12_4_ + auVar69._0_4_;
      auVar82 = aesenc(auVar82,*pauVar29);
      auVar70 = sha256rnds2_sha(auVar56,auVar87,auVar39);
      auVar40._0_4_ = _DAT_00490b00 + auVar69._0_4_;
      auVar40._4_4_ = _UNK_00490b04 + auVar69._4_4_;
      auVar40._8_4_ = _UNK_00490b08 + auVar69._8_4_;
      auVar40._12_4_ = _UNK_00490b0c + auVar69._12_4_;
      auVar62 = sha256msg2_sha(auVar93,auVar69);
      auVar56 = sha256msg1_sha(auVar63,auVar92);
      auVar82 = aesenc(auVar82,param_4[8]);
      auVar87 = sha256rnds2_sha(auVar87,auVar70,auVar40);
      auVar41._4_4_ = auVar40._12_4_;
      auVar41._0_4_ = auVar40._8_4_;
      auVar41._8_4_ = auVar40._0_4_;
      auVar41._12_4_ = auVar40._0_4_;
      auVar95._0_4_ = auVar56._0_4_ + auVar69._4_4_;
      auVar95._4_4_ = auVar56._4_4_ + auVar69._8_4_;
      auVar95._8_4_ = auVar56._8_4_ + auVar69._12_4_;
      auVar95._12_4_ = auVar56._12_4_ + auVar62._0_4_;
      auVar56 = param_4[10];
      auVar82 = aesenc(auVar82,param_4[9]);
      if (10 < uVar15) {
        auVar82 = aesenc(auVar82,auVar56);
        auVar56 = param_4[0xc];
        auVar82 = aesenc(auVar82,param_4[0xb]);
        if (uVar15 != 0xb) {
          auVar82 = aesenc(auVar82,auVar56);
          auVar56 = param_4[0xe];
          auVar82 = aesenc(auVar82,param_4[0xd]);
        }
      }
      auVar82 = aesenclast(auVar82,auVar56);
      auVar56 = param_4[1];
      auVar70 = sha256rnds2_sha(auVar70,auVar87,auVar41);
      uVar33 = *(uint *)param_1[2];
      uVar32 = *(uint *)(param_1[2] + 4);
      uVar31 = *(uint *)(param_1[2] + 8);
      uVar24 = *(uint *)(param_1[2] + 0xc);
      *(undefined1 (*) [16])(param_2 + 0x10 + (long)param_1) = auVar82;
      auVar72._0_4_ = auVar82._0_4_ ^ uVar33 ^ uVar18;
      auVar72._4_4_ = auVar82._4_4_ ^ uVar32 ^ uVar16;
      auVar72._8_4_ = auVar82._8_4_ ^ uVar31 ^ uVar17;
      auVar72._12_4_ = auVar82._12_4_ ^ uVar24 ^ uVar34;
      auVar56 = aesenc(auVar72,auVar56);
      auVar42._0_4_ = _DAT_00490b20 + auVar62._0_4_;
      auVar42._4_4_ = _UNK_00490b24 + auVar62._4_4_;
      auVar42._8_4_ = _UNK_00490b28 + auVar62._8_4_;
      auVar42._12_4_ = _UNK_00490b2c + auVar62._12_4_;
      auVar63 = sha256msg2_sha(auVar95,auVar62);
      auVar82 = sha256msg1_sha(auVar92,auVar69);
      auVar56 = aesenc(auVar56,param_4[2]);
      auVar87 = sha256rnds2_sha(auVar87,auVar70,auVar42);
      auVar43._4_4_ = auVar42._12_4_;
      auVar43._0_4_ = auVar42._8_4_;
      auVar43._8_4_ = auVar42._0_4_;
      auVar43._12_4_ = auVar42._0_4_;
      auVar98._0_4_ = auVar82._0_4_ + auVar62._4_4_;
      auVar98._4_4_ = auVar82._4_4_ + auVar62._8_4_;
      auVar98._8_4_ = auVar82._8_4_ + auVar62._12_4_;
      auVar98._12_4_ = auVar82._12_4_ + auVar63._0_4_;
      auVar82 = aesenc(auVar56,param_4[3]);
      auVar56 = sha256rnds2_sha(auVar70,auVar87,auVar43);
      auVar44._0_4_ = _DAT_00490b40 + auVar63._0_4_;
      auVar44._4_4_ = _UNK_00490b44 + auVar63._4_4_;
      auVar44._8_4_ = _UNK_00490b48 + auVar63._8_4_;
      auVar44._12_4_ = _UNK_00490b4c + auVar63._12_4_;
      auVar92 = sha256msg2_sha(auVar98,auVar63);
      auVar69 = sha256msg1_sha(auVar69,auVar62);
      auVar82 = aesenc(auVar82,param_4[4]);
      auVar70 = sha256rnds2_sha(auVar87,auVar56,auVar44);
      auVar45._4_4_ = auVar44._12_4_;
      auVar45._0_4_ = auVar44._8_4_;
      auVar45._8_4_ = auVar44._0_4_;
      auVar45._12_4_ = auVar44._0_4_;
      auVar89._0_4_ = auVar69._0_4_ + auVar63._4_4_;
      auVar89._4_4_ = auVar69._4_4_ + auVar63._8_4_;
      auVar89._8_4_ = auVar69._8_4_ + auVar63._12_4_;
      auVar89._12_4_ = auVar69._12_4_ + auVar92._0_4_;
      auVar87 = aesenc(auVar82,param_4[5]);
      auVar56 = sha256rnds2_sha(auVar56,auVar70,auVar45);
      auVar46._0_4_ = _DAT_00490b60 + auVar92._0_4_;
      auVar46._4_4_ = _UNK_00490b64 + auVar92._4_4_;
      auVar46._8_4_ = _UNK_00490b68 + auVar92._8_4_;
      auVar46._12_4_ = _UNK_00490b6c + auVar92._12_4_;
      auVar69 = sha256msg2_sha(auVar89,auVar92);
      auVar62 = sha256msg1_sha(auVar62,auVar63);
      auVar82 = aesenc(auVar87,param_4[6]);
      auVar87 = sha256rnds2_sha(auVar70,auVar56,auVar46);
      auVar47._4_4_ = auVar46._12_4_;
      auVar47._0_4_ = auVar46._8_4_;
      auVar47._8_4_ = auVar46._0_4_;
      auVar47._12_4_ = auVar46._0_4_;
      auVar94._0_4_ = auVar62._0_4_ + auVar92._4_4_;
      auVar94._4_4_ = auVar62._4_4_ + auVar92._8_4_;
      auVar94._8_4_ = auVar62._8_4_ + auVar92._12_4_;
      auVar94._12_4_ = auVar62._12_4_ + auVar69._0_4_;
      auVar82 = aesenc(auVar82,*pauVar29);
      auVar70 = sha256rnds2_sha(auVar56,auVar87,auVar47);
      auVar48._0_4_ = _DAT_00490b80 + auVar69._0_4_;
      auVar48._4_4_ = _UNK_00490b84 + auVar69._4_4_;
      auVar48._8_4_ = _UNK_00490b88 + auVar69._8_4_;
      auVar48._12_4_ = _UNK_00490b8c + auVar69._12_4_;
      auVar62 = sha256msg2_sha(auVar94,auVar69);
      auVar56 = sha256msg1_sha(auVar63,auVar92);
      auVar82 = aesenc(auVar82,param_4[8]);
      auVar87 = sha256rnds2_sha(auVar87,auVar70,auVar48);
      auVar49._4_4_ = auVar48._12_4_;
      auVar49._0_4_ = auVar48._8_4_;
      auVar49._8_4_ = auVar48._0_4_;
      auVar49._12_4_ = auVar48._0_4_;
      auVar96._0_4_ = auVar56._0_4_ + auVar69._4_4_;
      auVar96._4_4_ = auVar56._4_4_ + auVar69._8_4_;
      auVar96._8_4_ = auVar56._8_4_ + auVar69._12_4_;
      auVar96._12_4_ = auVar56._12_4_ + auVar62._0_4_;
      auVar56 = param_4[10];
      auVar82 = aesenc(auVar82,param_4[9]);
      auVar70 = sha256rnds2_sha(auVar70,auVar87,auVar49);
      auVar50._0_4_ = _DAT_00490ba0 + auVar62._0_4_;
      auVar50._4_4_ = _UNK_00490ba4 + auVar62._4_4_;
      auVar50._8_4_ = _UNK_00490ba8 + auVar62._8_4_;
      auVar50._12_4_ = _UNK_00490bac + auVar62._12_4_;
      auVar63 = sha256msg2_sha(auVar96,auVar62);
      auVar69 = sha256msg1_sha(auVar92,auVar69);
      if (10 < uVar15) {
        auVar82 = aesenc(auVar82,auVar56);
        auVar56 = param_4[0xc];
        auVar82 = aesenc(auVar82,param_4[0xb]);
        if (uVar15 != 0xb) {
          auVar82 = aesenc(auVar82,auVar56);
          auVar56 = param_4[0xe];
          auVar82 = aesenc(auVar82,param_4[0xd]);
        }
      }
      auVar82 = aesenclast(auVar82,auVar56);
      auVar56 = param_4[1];
      auVar87 = sha256rnds2_sha(auVar87,auVar70,auVar50);
      auVar51._4_4_ = auVar50._12_4_;
      auVar51._0_4_ = auVar50._8_4_;
      auVar51._8_4_ = auVar50._0_4_;
      auVar51._12_4_ = auVar50._0_4_;
      auVar99._0_4_ = auVar69._0_4_ + auVar62._4_4_;
      auVar99._4_4_ = auVar69._4_4_ + auVar62._8_4_;
      auVar99._8_4_ = auVar69._8_4_ + auVar62._12_4_;
      auVar99._12_4_ = auVar69._12_4_ + auVar63._0_4_;
      uVar33 = *(uint *)param_1[3];
      uVar32 = *(uint *)(param_1[3] + 4);
      uVar31 = *(uint *)(param_1[3] + 8);
      uVar24 = *(uint *)(param_1[3] + 0xc);
      *(undefined1 (*) [16])(param_2 + 0x20 + (long)param_1) = auVar82;
      auVar73._0_4_ = auVar82._0_4_ ^ uVar33 ^ uVar18;
      auVar73._4_4_ = auVar82._4_4_ ^ uVar32 ^ uVar16;
      auVar73._8_4_ = auVar82._8_4_ ^ uVar31 ^ uVar17;
      auVar73._12_4_ = auVar82._12_4_ ^ uVar24 ^ uVar34;
      auVar56 = aesenc(auVar73,auVar56);
      auVar82 = aesenc(auVar56,param_4[2]);
      auVar56 = sha256rnds2_sha(auVar70,auVar87,auVar51);
      auVar52._0_4_ = _DAT_00490bc0 + auVar63._0_4_;
      auVar52._4_4_ = _UNK_00490bc4 + auVar63._4_4_;
      auVar52._8_4_ = _UNK_00490bc8 + auVar63._8_4_;
      auVar52._12_4_ = _UNK_00490bcc + auVar63._12_4_;
      auVar69 = sha256msg2_sha(auVar99,auVar63);
      auVar82 = aesenc(auVar82,param_4[3]);
      auVar70 = sha256rnds2_sha(auVar87,auVar56,auVar52);
      auVar53._4_4_ = auVar52._12_4_;
      auVar53._0_4_ = auVar52._8_4_;
      auVar53._8_4_ = auVar52._0_4_;
      auVar53._12_4_ = auVar52._0_4_;
      auVar87 = aesenc(auVar82,param_4[4]);
      auVar56 = sha256rnds2_sha(auVar56,auVar70,auVar53);
      auVar54._0_4_ = _DAT_00490be0 + auVar69._0_4_;
      auVar54._4_4_ = _UNK_00490be4 + auVar69._4_4_;
      auVar54._8_4_ = _UNK_00490be8 + auVar69._8_4_;
      auVar54._12_4_ = _UNK_00490bec + auVar69._12_4_;
      auVar87 = aesenc(auVar87,param_4[5]);
      auVar82 = aesenc(auVar87,param_4[6]);
      auVar87 = sha256rnds2_sha(auVar70,auVar56,auVar54);
      auVar55._4_4_ = auVar54._12_4_;
      auVar55._0_4_ = auVar54._8_4_;
      auVar55._8_4_ = auVar54._0_4_;
      auVar55._12_4_ = auVar54._0_4_;
      auVar82 = aesenc(auVar82,*pauVar29);
      auVar70 = sha256rnds2_sha(auVar56,auVar87,auVar55);
      auVar56 = aesenc(auVar82,param_4[8]);
      in_ZMM5._0_16_ = param_4[10];
      auVar56 = aesenc(auVar56,param_4[9]);
      if (10 < uVar15) {
        auVar56 = aesenc(auVar56,param_4[10]);
        in_ZMM5._0_16_ = param_4[0xc];
        auVar56 = aesenc(auVar56,param_4[0xb]);
        if (uVar15 != 0xb) {
          auVar56 = aesenc(auVar56,param_4[0xc]);
          in_ZMM5._0_16_ = param_4[0xe];
          auVar56 = aesenc(auVar56,param_4[0xd]);
        }
      }
      auVar90._0_16_ = aesenclast(auVar56,in_ZMM5._0_16_);
      auVar56 = param_4[1];
      auVar59._0_4_ = auVar87._0_4_ + auVar100._0_4_;
      auVar59._4_4_ = auVar87._4_4_ + auVar100._4_4_;
      auVar59._8_4_ = auVar87._8_4_ + auVar100._8_4_;
      auVar59._12_4_ = auVar87._12_4_ + auVar100._12_4_;
      auVar57._0_4_ = auVar70._0_4_ + auVar85._0_4_;
      auVar57._4_4_ = auVar70._4_4_ + auVar85._4_4_;
      auVar57._8_4_ = auVar70._8_4_ + auVar85._8_4_;
      auVar57._12_4_ = auVar70._12_4_ + auVar85._12_4_;
      param_3 = param_3 + -1;
      *(undefined1 (*) [16])(param_2 + 0x30 + (long)param_1) = auVar90._0_16_;
      param_1 = param_1 + 4;
      auVar85 = auVar57;
      auVar100 = auVar59;
    } while (param_3 != 0);
    auVar58._4_4_ = auVar59._0_4_;
    auVar58._0_4_ = auVar59._4_4_;
    auVar58._8_4_ = auVar59._12_4_;
    auVar58._12_4_ = auVar59._8_4_;
    auVar84._4_4_ = auVar57._8_4_;
    auVar84._0_4_ = auVar57._12_4_;
    auVar84._8_4_ = auVar57._4_4_;
    auVar84._12_4_ = auVar57._0_4_;
    auVar5._4_56_ = auVar57._8_56_;
    auVar5._0_4_ = auVar57._0_4_;
    auVar86._0_8_ = auVar5._0_8_ << 0x20;
    auVar86._8_4_ = auVar57._12_4_;
    auVar86._12_4_ = auVar57._8_4_;
    auVar84._16_16_ = auVar58;
    *param_5 = auVar90._0_16_;
    *(long *)param_6 = auVar86._8_8_;
    *(long *)(param_6 + 2) = auVar58._8_8_;
    *(undefined1 (*) [16])(param_6 + 4) = auVar84._8_16_;
    return 0x490a80;
  }
  if ((_DAT_0094b59c & 0x800) != 0) {
    lVar25 = (long)param_7 - (long)param_1;
    auVar86 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + (long)param_1),_DAT_00490c00);
    auVar56 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + 0x10 + (long)param_1),_DAT_00490c00);
    auVar70 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + 0x20 + (long)param_1),_DAT_00490c00);
    auVar6._4_4_ = _UNK_00490a04;
    auVar6._0_4_ = _DAT_00490a00;
    auVar6._8_4_ = _UNK_00490a08;
    auVar6._12_4_ = _UNK_00490a0c;
    vpaddd_avx(auVar86,auVar6);
    auVar87 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + 0x30 + (long)param_1),_DAT_00490c00);
    auVar8._4_4_ = _UNK_00490a24;
    auVar8._0_4_ = _DAT_00490a20;
    auVar8._8_4_ = _UNK_00490a28;
    auVar8._12_4_ = _UNK_00490a2c;
    vpaddd_avx(auVar56,auVar8);
    auVar10._4_4_ = _UNK_00490a44;
    auVar10._0_4_ = _DAT_00490a40;
    auVar10._8_4_ = _UNK_00490a48;
    auVar10._12_4_ = _UNK_00490a4c;
    vpaddd_avx(auVar70,auVar10);
    auVar12._4_4_ = _UNK_00490a64;
    auVar12._0_4_ = _DAT_00490a60;
    auVar12._8_4_ = _UNK_00490a68;
    auVar12._12_4_ = _UNK_00490a6c;
    vpaddd_avx(auVar87,auVar12);
    vpalignr_avx(auVar56,auVar86,4);
    vpalignr_avx(auVar87,auVar70,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((uint)(_DAT_0094b59c >> 0x20) & 0x128) != 0x128) {
    if ((_DAT_0094b59c & 0x10000000) != 0) {
      param_2 = param_2 - (long)param_1;
      lVar25 = (long)param_7 - (long)param_1;
      pauVar29 = param_1 + param_3 * 4;
      auVar86 = *param_5;
      lVar35 = (ulong)*(uint *)param_4[0xf] - 9;
      uVar15 = *param_6;
      uVar18 = param_6[1];
      uVar16 = param_6[2];
      uVar17 = param_6[3];
      uVar34 = param_6[4];
      uVar33 = param_6[5];
      uVar32 = param_6[6];
      uVar31 = param_6[7];
      auVar56 = *(undefined1 (*) [16])(&DAT_00490c20 + lVar35 * 8);
      auVar70 = *(undefined1 (*) [16])(&DAT_00490c30 + lVar35 * 8);
      auVar87 = *(undefined1 (*) [16])(&DAT_00490c40 + lVar35 * 8);
      auVar82 = *param_4;
      do {
        auVar69 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + (long)param_1),_DAT_00490c00);
        auVar62 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + 0x10 + (long)param_1),_DAT_00490c00);
        auVar63 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + 0x20 + (long)param_1),_DAT_00490c00);
        auVar7._4_4_ = _UNK_00490a04;
        auVar7._0_4_ = _DAT_00490a00;
        auVar7._8_4_ = _UNK_00490a08;
        auVar7._12_4_ = _UNK_00490a0c;
        auStack_c0 = vpaddd_avx(auVar69,auVar7);
        auVar92 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + 0x30 + (long)param_1),_DAT_00490c00);
        auVar9._4_4_ = _UNK_00490a24;
        auVar9._0_4_ = _DAT_00490a20;
        auVar9._8_4_ = _UNK_00490a28;
        auVar9._12_4_ = _UNK_00490a2c;
        auStack_b0 = vpaddd_avx(auVar62,auVar9);
        auVar11._4_4_ = _UNK_00490a44;
        auVar11._0_4_ = _DAT_00490a40;
        auVar11._8_4_ = _UNK_00490a48;
        auVar11._12_4_ = _UNK_00490a4c;
        auStack_a0 = vpaddd_avx(auVar63,auVar11);
        auVar13._4_4_ = _UNK_00490a64;
        auVar13._0_4_ = _DAT_00490a60;
        auVar13._8_4_ = _UNK_00490a68;
        auVar13._12_4_ = _UNK_00490a6c;
        auStack_90 = vpaddd_avx(auVar92,auVar13);
        uVar24 = uVar18 ^ uVar16;
        pauVar22 = (undefined1 (*) [16])&DAT_00490a00;
        do {
          pauVar27 = param_1;
          auVar81 = vpalignr_avx(auVar62,auVar69,4);
          auVar60 = vpalignr_avx(auVar92,auVar63,4);
          uVar28 = (uVar34 >> 0xe | uVar34 << 0x12) ^ uVar34;
          auVar66 = vpsrld_avx(auVar81,7);
          uVar30 = (uVar15 >> 9 | uVar15 << 0x17) ^ uVar15;
          auVar69 = vpaddd_avx(auVar69,auVar60);
          uVar28 = (uVar28 >> 5 | uVar28 << 0x1b) ^ uVar34;
          auVar80 = vpsrld_avx(auVar81,3);
          auVar60 = vpslld_avx(auVar81,0xe);
          uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar15;
          iVar26 = uVar31 + auStack_c0._0_4_ + ((uVar33 ^ uVar32) & uVar34 ^ uVar32) +
                   (uVar28 >> 6 | uVar28 << 0x1a);
          auVar81 = vpshufd_avx(auVar92,0xfa);
          uVar17 = uVar17 + iVar26;
          auVar67 = vpsrld_avx(auVar66,0xb);
          uVar31 = (uVar30 >> 2 | uVar30 << 0x1e) + iVar26 + (uVar24 & (uVar15 ^ uVar18) ^ uVar18);
          uVar24 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
          auVar61 = vpslld_avx(auVar60,0xb);
          uVar28 = (uVar31 >> 9 | uVar31 * 0x800000) ^ uVar31;
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar17;
          auVar68 = vpsrld_avx(auVar81,10);
          auVar81 = vpsrlq_avx(auVar81,0x11);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar31;
          auVar69 = vpaddd_avx(auVar69,auVar80 ^ auVar66 ^ auVar60 ^ auVar67 ^ auVar61);
          iVar26 = uVar32 + auStack_c0._4_4_ + ((uVar34 ^ uVar33) & uVar17 ^ uVar33) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          uVar16 = uVar16 + iVar26;
          auVar60 = vpsrlq_avx(auVar81,2);
          uVar32 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar15 ^ uVar18) & (uVar31 ^ uVar15) ^ uVar15);
          uVar24 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
          auVar81 = vpshufd_avx(auVar68 ^ auVar81 ^ auVar60,0x84);
          uVar28 = (uVar32 >> 9 | uVar32 * 0x800000) ^ uVar32;
          auVar81 = vpsrldq_avx(auVar81,8);
          auVar60 = aesenc(*pauVar27 ^ auVar82 ^ auVar86,param_4[1]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar16;
          auVar86 = vpaddd_avx(auVar69,auVar81);
          auVar82 = vpshufd_avx(auVar86,0x50);
          auVar69 = vpsrld_avx(auVar82,10);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar32;
          iVar26 = uVar33 + auStack_c0._8_4_ + ((uVar17 ^ uVar34) & uVar16 ^ uVar34) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          auVar82 = vpsrlq_avx(auVar82,0x11);
          uVar18 = uVar18 + iVar26;
          uVar33 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar31 ^ uVar15) & (uVar32 ^ uVar31) ^ uVar31);
          auVar81 = vpsrlq_avx(auVar82,2);
          uVar24 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
          auVar82 = vpshufd_avx(auVar69 ^ auVar82 ^ auVar81,0xe8);
          uVar28 = (uVar33 >> 9 | uVar33 * 0x800000) ^ uVar33;
          auVar82 = vpslldq_avx(auVar82,8);
          auVar81 = aesenc(auVar60,param_4[2]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar18;
          iVar26 = uVar34 + auStack_c0._12_4_;
          auVar69 = vpaddd_avx(auVar86,auVar82);
          auStack_c0 = vpaddd_avx(auVar69,pauVar22[8]);
          uVar34 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar33;
          iVar26 = iVar26 + ((uVar16 ^ uVar17) & uVar18 ^ uVar17) + (uVar24 >> 6 | uVar24 << 0x1a);
          uVar15 = uVar15 + iVar26;
          uVar34 = (uVar34 >> 2 | uVar34 << 0x1e) +
                   iVar26 + ((uVar32 ^ uVar31) & (uVar33 ^ uVar32) ^ uVar32);
          auVar82 = vpalignr_avx(auVar63,auVar62,4);
          auVar86 = vpalignr_avx(auVar69,auVar92,4);
          uVar24 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
          auVar60 = vpsrld_avx(auVar82,7);
          uVar28 = (uVar34 >> 9 | uVar34 * 0x800000) ^ uVar34;
          auVar86 = vpaddd_avx(auVar62,auVar86);
          auVar66 = aesenc(auVar81,param_4[3]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar15;
          auVar67 = vpsrld_avx(auVar82,3);
          auVar62 = vpslld_avx(auVar82,0xe);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar34;
          iVar26 = uVar17 + auStack_b0._0_4_ + ((uVar18 ^ uVar16) & uVar15 ^ uVar16) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          auVar82 = vpshufd_avx(auVar69,0xfa);
          uVar31 = uVar31 + iVar26;
          auVar61 = vpsrld_avx(auVar60,0xb);
          uVar17 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar33 ^ uVar32) & (uVar34 ^ uVar33) ^ uVar33);
          uVar24 = (uVar31 >> 0xe | uVar31 * 0x40000) ^ uVar31;
          auVar81 = vpslld_avx(auVar62,0xb);
          uVar28 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
          auVar68 = aesenc(auVar66,param_4[4]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar31;
          auVar66 = vpsrld_avx(auVar82,10);
          auVar82 = vpsrlq_avx(auVar82,0x11);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar17;
          auVar86 = vpaddd_avx(auVar86,auVar67 ^ auVar60 ^ auVar62 ^ auVar61 ^ auVar81);
          iVar26 = uVar16 + auStack_b0._4_4_ + ((uVar15 ^ uVar18) & uVar31 ^ uVar18) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          uVar32 = uVar32 + iVar26;
          auVar62 = vpsrlq_avx(auVar82,2);
          uVar16 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar34 ^ uVar33) & (uVar17 ^ uVar34) ^ uVar34);
          uVar24 = (uVar32 >> 0xe | uVar32 * 0x40000) ^ uVar32;
          auVar82 = vpshufd_avx(auVar66 ^ auVar82 ^ auVar62,0x84);
          uVar28 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
          auVar82 = vpsrldq_avx(auVar82,8);
          auVar60 = aesenc(auVar68,param_4[5]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar32;
          auVar86 = vpaddd_avx(auVar86,auVar82);
          auVar82 = vpshufd_avx(auVar86,0x50);
          auVar62 = vpsrld_avx(auVar82,10);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar16;
          iVar26 = uVar18 + auStack_b0._8_4_ + ((uVar31 ^ uVar15) & uVar32 ^ uVar15) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          auVar82 = vpsrlq_avx(auVar82,0x11);
          uVar33 = uVar33 + iVar26;
          uVar18 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar17 ^ uVar34) & (uVar16 ^ uVar17) ^ uVar17);
          auVar81 = vpsrlq_avx(auVar82,2);
          uVar24 = (uVar33 >> 0xe | uVar33 * 0x40000) ^ uVar33;
          auVar82 = vpshufd_avx(auVar62 ^ auVar82 ^ auVar81,0xe8);
          uVar28 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
          auVar82 = vpslldq_avx(auVar82,8);
          auVar81 = aesenc(auVar60,param_4[6]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar33;
          iVar26 = uVar15 + auStack_b0._12_4_;
          auVar62 = vpaddd_avx(auVar86,auVar82);
          auStack_b0 = vpaddd_avx(auVar62,pauVar22[10]);
          uVar15 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar18;
          iVar26 = iVar26 + ((uVar32 ^ uVar31) & uVar33 ^ uVar31) + (uVar24 >> 6 | uVar24 << 0x1a);
          uVar34 = uVar34 + iVar26;
          uVar15 = (uVar15 >> 2 | uVar15 << 0x1e) +
                   iVar26 + ((uVar16 ^ uVar17) & (uVar18 ^ uVar16) ^ uVar16);
          auVar82 = vpalignr_avx(auVar92,auVar63,4);
          auVar86 = vpalignr_avx(auVar62,auVar69,4);
          uVar24 = (uVar34 >> 0xe | uVar34 * 0x40000) ^ uVar34;
          auVar60 = vpsrld_avx(auVar82,7);
          uVar28 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
          auVar86 = vpaddd_avx(auVar63,auVar86);
          auVar66 = aesenc(auVar81,param_4[7]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar34;
          auVar67 = vpsrld_avx(auVar82,3);
          auVar63 = vpslld_avx(auVar82,0xe);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar15;
          iVar26 = uVar31 + auStack_a0._0_4_ + ((uVar33 ^ uVar32) & uVar34 ^ uVar32) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          auVar82 = vpshufd_avx(auVar62,0xfa);
          uVar17 = uVar17 + iVar26;
          auVar61 = vpsrld_avx(auVar60,0xb);
          uVar31 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar18 ^ uVar16) & (uVar15 ^ uVar18) ^ uVar18);
          uVar24 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
          auVar81 = vpslld_avx(auVar63,0xb);
          uVar28 = (uVar31 >> 9 | uVar31 * 0x800000) ^ uVar31;
          auVar68 = aesenc(auVar66,param_4[8]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar17;
          auVar66 = vpsrld_avx(auVar82,10);
          auVar82 = vpsrlq_avx(auVar82,0x11);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar31;
          auVar86 = vpaddd_avx(auVar86,auVar67 ^ auVar60 ^ auVar63 ^ auVar61 ^ auVar81);
          iVar26 = uVar32 + auStack_a0._4_4_ + ((uVar34 ^ uVar33) & uVar17 ^ uVar33) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          uVar16 = uVar16 + iVar26;
          auVar63 = vpsrlq_avx(auVar82,2);
          uVar32 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar15 ^ uVar18) & (uVar31 ^ uVar15) ^ uVar15);
          uVar24 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
          auVar82 = vpshufd_avx(auVar66 ^ auVar82 ^ auVar63,0x84);
          uVar28 = (uVar32 >> 9 | uVar32 * 0x800000) ^ uVar32;
          auVar82 = vpsrldq_avx(auVar82,8);
          auVar60 = aesenc(auVar68,param_4[9]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar16;
          auVar86 = vpaddd_avx(auVar86,auVar82);
          auVar82 = vpshufd_avx(auVar86,0x50);
          auVar63 = vpsrld_avx(auVar82,10);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar32;
          iVar26 = uVar33 + auStack_a0._8_4_ + ((uVar17 ^ uVar34) & uVar16 ^ uVar34) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          auVar82 = vpsrlq_avx(auVar82,0x11);
          uVar18 = uVar18 + iVar26;
          uVar33 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar31 ^ uVar15) & (uVar32 ^ uVar31) ^ uVar31);
          auVar81 = vpsrlq_avx(auVar82,2);
          uVar24 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
          auVar82 = vpshufd_avx(auVar63 ^ auVar82 ^ auVar81,0xe8);
          uVar28 = (uVar33 >> 9 | uVar33 * 0x800000) ^ uVar33;
          auVar82 = vpslldq_avx(auVar82,8);
          auVar66 = aesenclast(auVar60,param_4[10]);
          auVar81 = aesenc(auVar60,param_4[10]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar18;
          iVar26 = uVar34 + auStack_a0._12_4_;
          auVar63 = vpaddd_avx(auVar86,auVar82);
          auStack_a0 = vpaddd_avx(auVar63,pauVar22[0xc]);
          uVar34 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar33;
          iVar26 = iVar26 + ((uVar16 ^ uVar17) & uVar18 ^ uVar17) + (uVar24 >> 6 | uVar24 << 0x1a);
          uVar15 = uVar15 + iVar26;
          uVar34 = (uVar34 >> 2 | uVar34 << 0x1e) +
                   iVar26 + ((uVar32 ^ uVar31) & (uVar33 ^ uVar32) ^ uVar32);
          auVar82 = vpalignr_avx(auVar69,auVar92,4);
          auVar86 = vpalignr_avx(auVar63,auVar62,4);
          uVar24 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
          auVar61 = vpsrld_avx(auVar82,7);
          uVar28 = (uVar34 >> 9 | uVar34 * 0x800000) ^ uVar34;
          auVar86 = vpaddd_avx(auVar92,auVar86);
          auVar92 = vpand_avx(auVar66,auVar87);
          auVar67 = aesenc(auVar81,param_4[0xb]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar15;
          auVar68 = vpsrld_avx(auVar82,3);
          auVar81 = vpslld_avx(auVar82,0xe);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar34;
          iVar26 = uVar17 + auStack_90._0_4_ + ((uVar18 ^ uVar16) & uVar15 ^ uVar16) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          auVar82 = vpshufd_avx(auVar63,0xfa);
          uVar31 = uVar31 + iVar26;
          auVar66 = vpsrld_avx(auVar61,0xb);
          uVar17 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar33 ^ uVar32) & (uVar34 ^ uVar33) ^ uVar33);
          uVar24 = (uVar31 >> 0xe | uVar31 * 0x40000) ^ uVar31;
          auVar60 = vpslld_avx(auVar81,0xb);
          uVar28 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
          auVar91 = aesenclast(auVar67,param_4[0xc]);
          auVar80 = aesenc(auVar67,param_4[0xc]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar31;
          auVar67 = vpsrld_avx(auVar82,10);
          auVar82 = vpsrlq_avx(auVar82,0x11);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar17;
          auVar86 = vpaddd_avx(auVar86,auVar68 ^ auVar61 ^ auVar81 ^ auVar66 ^ auVar60);
          iVar26 = uVar16 + auStack_90._4_4_ + ((uVar15 ^ uVar18) & uVar31 ^ uVar18) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          uVar32 = uVar32 + iVar26;
          auVar81 = vpsrlq_avx(auVar82,2);
          uVar16 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar34 ^ uVar33) & (uVar17 ^ uVar34) ^ uVar34);
          uVar24 = (uVar32 >> 0xe | uVar32 * 0x40000) ^ uVar32;
          auVar82 = vpshufd_avx(auVar67 ^ auVar82 ^ auVar81,0x84);
          uVar28 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
          auVar81 = vpsrldq_avx(auVar82,8);
          auVar82 = vpand_avx(auVar91,auVar70);
          auVar66 = aesenc(auVar80,param_4[0xd]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar32;
          auVar86 = vpaddd_avx(auVar86,auVar81);
          auVar81 = vpshufd_avx(auVar86,0x50);
          auVar60 = vpsrld_avx(auVar81,10);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar16;
          iVar26 = uVar18 + auStack_90._8_4_ + ((uVar31 ^ uVar15) & uVar32 ^ uVar15) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          auVar81 = vpsrlq_avx(auVar81,0x11);
          uVar33 = uVar33 + iVar26;
          uVar18 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar17 ^ uVar34) & (uVar16 ^ uVar17) ^ uVar17);
          auVar61 = vpsrlq_avx(auVar81,2);
          uVar24 = (uVar33 >> 0xe | uVar33 * 0x40000) ^ uVar33;
          auVar81 = vpshufd_avx(auVar60 ^ auVar81 ^ auVar61,0xe8);
          uVar30 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
          auVar60 = vpslldq_avx(auVar81,8);
          auVar81 = vpor_avx(auVar92,auVar82);
          auVar61 = aesenclast(auVar66,param_4[0xe]);
          auVar82 = *param_4;
          uVar28 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar33;
          iVar26 = uVar15 + auStack_90._12_4_;
          auVar92 = vpaddd_avx(auVar86,auVar60);
          uVar24 = uVar18 ^ uVar16;
          auStack_90 = vpaddd_avx(auVar92,pauVar22[0xe]);
          uVar15 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar18;
          iVar26 = iVar26 + ((uVar32 ^ uVar31) & uVar33 ^ uVar31) + (uVar28 >> 6 | uVar28 << 0x1a);
          uVar34 = uVar34 + iVar26;
          uVar15 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar26 + ((uVar16 ^ uVar17) & uVar24 ^ uVar16);
          auVar86 = vpand_avx(auVar61,auVar56);
          auVar86 = vpor_avx(auVar81,auVar86);
          *(undefined1 (*) [16])(param_2 + (long)pauVar27) = auVar86;
          param_1 = pauVar27 + 1;
          pauVar2 = pauVar22 + 0x10;
          pauVar22 = pauVar22 + 8;
        } while ((*pauVar2)[3] != '\0');
        uVar28 = (uVar34 >> 0xe | uVar34 * 0x40000) ^ uVar34;
        uVar30 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
        uVar28 = (uVar28 >> 5 | uVar28 << 0x1b) ^ uVar34;
        uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar15;
        iVar26 = uVar31 + auStack_c0._0_4_ + ((uVar33 ^ uVar32) & uVar34 ^ uVar32) +
                 (uVar28 >> 6 | uVar28 << 0x1a);
        uVar17 = uVar17 + iVar26;
        uVar31 = (uVar30 >> 2 | uVar30 << 0x1e) + iVar26 + (uVar24 & (uVar15 ^ uVar18) ^ uVar18);
        uVar24 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
        uVar28 = (uVar31 >> 9 | uVar31 * 0x800000) ^ uVar31;
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar17;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar31;
        iVar26 = uVar32 + auStack_c0._4_4_ + ((uVar34 ^ uVar33) & uVar17 ^ uVar33) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar16 = uVar16 + iVar26;
        uVar32 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar15 ^ uVar18) & (uVar31 ^ uVar15) ^ uVar15);
        uVar24 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
        uVar28 = (uVar32 >> 9 | uVar32 * 0x800000) ^ uVar32;
        auVar86 = aesenc(*param_1 ^ auVar82 ^ auVar86,param_4[1]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar16;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar32;
        iVar26 = uVar33 + auStack_c0._8_4_ + ((uVar17 ^ uVar34) & uVar16 ^ uVar34) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar18 = uVar18 + iVar26;
        uVar33 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar31 ^ uVar15) & (uVar32 ^ uVar31) ^ uVar31);
        uVar24 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
        uVar28 = (uVar33 >> 9 | uVar33 * 0x800000) ^ uVar33;
        auVar86 = aesenc(auVar86,param_4[2]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar18;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar33;
        iVar26 = uVar34 + auStack_c0._12_4_ + ((uVar16 ^ uVar17) & uVar18 ^ uVar17) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar15 = uVar15 + iVar26;
        uVar34 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar32 ^ uVar31) & (uVar33 ^ uVar32) ^ uVar32);
        uVar24 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
        uVar28 = (uVar34 >> 9 | uVar34 * 0x800000) ^ uVar34;
        auVar86 = aesenc(auVar86,param_4[3]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar15;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar34;
        iVar26 = uVar17 + auStack_b0._0_4_ + ((uVar18 ^ uVar16) & uVar15 ^ uVar16) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar31 = uVar31 + iVar26;
        uVar17 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar33 ^ uVar32) & (uVar34 ^ uVar33) ^ uVar33);
        uVar24 = (uVar31 >> 0xe | uVar31 * 0x40000) ^ uVar31;
        uVar28 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
        auVar86 = aesenc(auVar86,param_4[4]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar31;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar17;
        iVar26 = uVar16 + auStack_b0._4_4_ + ((uVar15 ^ uVar18) & uVar31 ^ uVar18) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar32 = uVar32 + iVar26;
        uVar16 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar34 ^ uVar33) & (uVar17 ^ uVar34) ^ uVar34);
        uVar24 = (uVar32 >> 0xe | uVar32 * 0x40000) ^ uVar32;
        uVar28 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
        auVar86 = aesenc(auVar86,param_4[5]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar32;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar16;
        iVar26 = uVar18 + auStack_b0._8_4_ + ((uVar31 ^ uVar15) & uVar32 ^ uVar15) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar33 = uVar33 + iVar26;
        uVar18 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar17 ^ uVar34) & (uVar16 ^ uVar17) ^ uVar17);
        uVar24 = (uVar33 >> 0xe | uVar33 * 0x40000) ^ uVar33;
        uVar28 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
        auVar86 = aesenc(auVar86,param_4[6]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar33;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar18;
        iVar26 = uVar15 + auStack_b0._12_4_ + ((uVar32 ^ uVar31) & uVar33 ^ uVar31) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar34 = uVar34 + iVar26;
        uVar15 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar16 ^ uVar17) & (uVar18 ^ uVar16) ^ uVar16);
        uVar24 = (uVar34 >> 0xe | uVar34 * 0x40000) ^ uVar34;
        uVar28 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
        auVar86 = aesenc(auVar86,param_4[7]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar34;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar15;
        iVar26 = uVar31 + auStack_a0._0_4_ + ((uVar33 ^ uVar32) & uVar34 ^ uVar32) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar17 = uVar17 + iVar26;
        uVar31 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar18 ^ uVar16) & (uVar15 ^ uVar18) ^ uVar18);
        uVar24 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
        uVar28 = (uVar31 >> 9 | uVar31 * 0x800000) ^ uVar31;
        auVar86 = aesenc(auVar86,param_4[8]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar17;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar31;
        iVar26 = uVar32 + auStack_a0._4_4_ + ((uVar34 ^ uVar33) & uVar17 ^ uVar33) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar16 = uVar16 + iVar26;
        uVar32 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar15 ^ uVar18) & (uVar31 ^ uVar15) ^ uVar15);
        uVar24 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
        uVar28 = (uVar32 >> 9 | uVar32 * 0x800000) ^ uVar32;
        auVar86 = aesenc(auVar86,param_4[9]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar16;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar32;
        iVar26 = uVar33 + auStack_a0._8_4_ + ((uVar17 ^ uVar34) & uVar16 ^ uVar34) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar18 = uVar18 + iVar26;
        uVar33 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar31 ^ uVar15) & (uVar32 ^ uVar31) ^ uVar31);
        uVar24 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
        uVar28 = (uVar33 >> 9 | uVar33 * 0x800000) ^ uVar33;
        auVar69 = aesenclast(auVar86,param_4[10]);
        auVar82 = aesenc(auVar86,param_4[10]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar18;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar33;
        iVar26 = uVar34 + auStack_a0._12_4_ + ((uVar16 ^ uVar17) & uVar18 ^ uVar17) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar15 = uVar15 + iVar26;
        uVar24 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar32 ^ uVar31) & (uVar33 ^ uVar32) ^ uVar32);
        uVar34 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
        uVar28 = (uVar24 >> 9 | uVar24 * 0x800000) ^ uVar24;
        auVar86 = vpand_avx(auVar69,auVar87);
        auVar82 = aesenc(auVar82,param_4[0xb]);
        uVar34 = (uVar34 >> 5 | uVar34 << 0x1b) ^ uVar15;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar24;
        iVar26 = uVar17 + auStack_90._0_4_ + ((uVar18 ^ uVar16) & uVar15 ^ uVar16) +
                 (uVar34 >> 6 | uVar34 << 0x1a);
        uVar31 = uVar31 + iVar26;
        uVar17 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar33 ^ uVar32) & (uVar24 ^ uVar33) ^ uVar33);
        uVar34 = (uVar31 >> 0xe | uVar31 * 0x40000) ^ uVar31;
        uVar28 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
        auVar62 = aesenclast(auVar82,param_4[0xc]);
        auVar69 = aesenc(auVar82,param_4[0xc]);
        uVar34 = (uVar34 >> 5 | uVar34 << 0x1b) ^ uVar31;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar17;
        iVar26 = uVar16 + auStack_90._4_4_ + ((uVar15 ^ uVar18) & uVar31 ^ uVar18) +
                 (uVar34 >> 6 | uVar34 << 0x1a);
        uVar32 = uVar32 + iVar26;
        uVar16 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar24 ^ uVar33) & (uVar17 ^ uVar24) ^ uVar24);
        uVar34 = (uVar32 >> 0xe | uVar32 * 0x40000) ^ uVar32;
        uVar28 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
        auVar82 = vpand_avx(auVar62,auVar70);
        auVar62 = aesenc(auVar69,param_4[0xd]);
        uVar34 = (uVar34 >> 5 | uVar34 << 0x1b) ^ uVar32;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar16;
        iVar26 = uVar18 + auStack_90._8_4_ + ((uVar31 ^ uVar15) & uVar32 ^ uVar15) +
                 (uVar34 >> 6 | uVar34 << 0x1a);
        uVar33 = uVar33 + iVar26;
        uVar18 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar17 ^ uVar24) & (uVar16 ^ uVar17) ^ uVar17);
        uVar34 = (uVar33 >> 0xe | uVar33 * 0x40000) ^ uVar33;
        uVar28 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
        auVar69 = vpor_avx(auVar86,auVar82);
        auVar86 = aesenclast(auVar62,param_4[0xe]);
        auVar82 = *param_4;
        uVar34 = (uVar34 >> 5 | uVar34 << 0x1b) ^ uVar33;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar18;
        iVar26 = uVar15 + auStack_90._12_4_ + ((uVar32 ^ uVar31) & uVar33 ^ uVar31) +
                 (uVar34 >> 6 | uVar34 << 0x1a);
        auVar86 = vpand_avx(auVar86,auVar56);
        auVar86 = vpor_avx(auVar69,auVar86);
        *(undefined1 (*) [16])((long)param_1 + param_2) = auVar86;
        param_1 = pauVar27 + 2;
        uVar15 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar16 ^ uVar17) & (uVar18 ^ uVar16) ^ uVar16) + *param_6;
        uVar18 = uVar18 + param_6[1];
        uVar16 = uVar16 + param_6[2];
        uVar17 = uVar17 + param_6[3];
        uVar34 = uVar24 + iVar26 + param_6[4];
        uVar33 = uVar33 + param_6[5];
        uVar32 = uVar32 + param_6[6];
        uVar31 = uVar31 + param_6[7];
        *param_6 = uVar15;
        param_6[1] = uVar18;
        param_6[2] = uVar16;
        param_6[3] = uVar17;
        param_6[4] = uVar34;
        param_6[5] = uVar33;
        param_6[6] = uVar32;
        param_6[7] = uVar31;
      } while (param_1 < pauVar29);
      *param_5 = auVar86;
      return uVar15;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar19 = (ulong)auStack_270 & 0xfffffffffffffc00;
  pauVar20 = (undefined1 (*) [32])(uVar19 + 0x1c0);
  lVar35 = (long)param_7 - (long)param_1;
  *(undefined1 (**) [16])(uVar19 + 0x210) = param_1 + param_3 * 4;
  *(undefined1 (**) [16])(uVar19 + 0x220) = param_5;
  *(uint **)(uVar19 + 0x228) = param_6;
  *(long *)(uVar19 + 0x230) = lVar35;
  *(BADSPACEBASE **)(uVar19 + 0x238) = register0x00000020;
  auVar86 = vpinsrq_avx(ZEXT816(0),param_2 - (long)param_1,1);
  auVar100 = ZEXT1664(auVar86);
  pauVar22 = param_4 + 8;
  auVar85 = ZEXT1664(*param_5);
  lVar25 = (ulong)*(uint *)param_4[0xf] - 9;
  auVar86 = *(undefined1 (*) [16])(&DAT_00490c20 + lVar25 * 8);
  auVar56 = *(undefined1 (*) [16])(&DAT_00490c30 + lVar25 * 8);
  auVar70 = *(undefined1 (*) [16])(&DAT_00490c40 + lVar25 * 8);
  pauVar29 = param_1 + 4;
  uVar16 = *param_6;
  uVar18 = param_6[1];
  uVar15 = param_6[2];
  pauVar23 = (undefined1 (*) [32])(lVar35 + (long)pauVar29);
  if (pauVar29 == param_1 + param_3 * 4) {
    pauVar23 = (undefined1 (*) [32])(uVar19 + 0x1c0);
  }
  uVar31 = param_6[3];
  uVar32 = param_6[4];
  uVar33 = param_6[5];
  uVar34 = param_6[6];
  uVar17 = param_6[7];
  auVar90 = ZEXT1664(*param_4);
  do {
    auVar79._16_16_ = _UNK_00490c10;
    auVar79._0_16_ = _DAT_00490c00;
    auVar75._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])*pauVar23 +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar29[-4] + lVar35);
    auVar75._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])*pauVar23;
    auVar77._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(*pauVar23 + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar29[-3] + lVar35);
    auVar77._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(*pauVar23 + 0x10);
    auVar75 = vpshufb_avx2(auVar75,auVar79);
    auVar78._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])pauVar23[1] +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar29[-2] + lVar35);
    auVar78._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar23[1];
    auVar77 = vpshufb_avx2(auVar77,auVar79);
    auVar83._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(pauVar23[1] + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar29[-1] + lVar35);
    auVar83._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar23[1] + 0x10);
    auVar78 = vpshufb_avx2(auVar78,auVar79);
    pauVar29 = pauVar29 + -4;
    auVar64._4_4_ = _UNK_00490a04;
    auVar64._0_4_ = _DAT_00490a00;
    auVar64._8_4_ = _UNK_00490a08;
    auVar64._12_4_ = _UNK_00490a0c;
    auVar64._16_16_ = _UNK_00490a10;
    auVar4 = vpaddd_avx2(auVar75,auVar64);
    auVar79 = vpshufb_avx2(auVar83,auVar79);
    auVar65._4_4_ = _UNK_00490a24;
    auVar65._0_4_ = _DAT_00490a20;
    auVar65._8_4_ = _UNK_00490a28;
    auVar65._12_4_ = _UNK_00490a2c;
    auVar65._16_16_ = _UNK_00490a30;
    auVar84 = vpaddd_avx2(auVar77,auVar65);
    auVar74._4_4_ = _UNK_00490a44;
    auVar74._0_4_ = _DAT_00490a40;
    auVar74._8_4_ = _UNK_00490a48;
    auVar74._12_4_ = _UNK_00490a4c;
    auVar74._16_16_ = _UNK_00490a50;
    auVar64 = vpaddd_avx2(auVar78,auVar74);
    auVar76._4_4_ = _UNK_00490a64;
    auVar76._0_4_ = _DAT_00490a60;
    auVar76._8_4_ = _UNK_00490a68;
    auVar76._12_4_ = _UNK_00490a6c;
    auVar76._16_16_ = _UNK_00490a70;
    auVar65 = vpaddd_avx2(auVar79,auVar76);
    *pauVar20 = auVar4;
    uVar28 = 0;
    pauVar20[1] = auVar84;
    *(undefined8 *)(pauVar20[-3] + 0x18) = *(undefined8 *)(pauVar20[3] + 0x18);
    pauVar20[-2] = auVar64;
    uVar24 = uVar18 ^ uVar15;
    pauVar20[-1] = auVar65;
    pauVar20 = pauVar20 + -2;
    pauVar23 = (undefined1 (*) [32])&DAT_00490a80;
    do {
      pauVar21 = pauVar20;
      auVar87 = *pauVar29;
      auVar69 = vpinsrq_avx(auVar100._0_16_,pauVar29,0);
      auVar100 = ZEXT1664(auVar69);
      *(undefined8 *)(pauVar21[-3] + 0x18) = *(undefined8 *)(pauVar21[-1] + 0x18);
      auVar84 = vpalignr_avx2(auVar77,auVar75,4);
      auVar4 = vpalignr_avx2(auVar79,auVar78,4);
      uVar16 = uVar16 + uVar28;
      auVar74 = vpsrld_avx2(auVar84,7);
      auVar4 = vpaddd_avx2(auVar75,auVar4);
      auVar83 = vpsrld_avx2(auVar84,3);
      iVar26 = uVar17 + *(int *)pauVar21[2] + (uVar33 & uVar32) + (~uVar32 & uVar34) +
               ((uVar32 >> 0x19 | uVar32 << 7) ^ (uVar32 >> 0xb | uVar32 << 0x15) ^
               (uVar32 >> 6 | uVar32 << 0x1a));
      auVar64 = vpslld_avx2(auVar84,0xe);
      uVar31 = uVar31 + iVar26;
      auVar84 = vpshufd_avx2(auVar79,0xfa);
      auVar75 = vpsrld_avx2(auVar74,0xb);
      uVar17 = iVar26 + (uVar24 & (uVar16 ^ uVar18) ^ uVar18) +
               ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
               (uVar16 >> 2 | uVar16 * 0x40000000));
      auVar65 = vpslld_avx2(auVar64,0xb);
      auVar76 = vpsrld_avx2(auVar84,10);
      iVar26 = uVar34 + *(int *)(pauVar21[2] + 4) + (uVar32 & uVar31) + (~uVar31 & uVar33) +
               ((uVar31 >> 0x19 | uVar31 * 0x80) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
               (uVar31 >> 6 | uVar31 * 0x4000000));
      uVar15 = uVar15 + iVar26;
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      auVar4 = vpaddd_avx2(auVar4,auVar83 ^ auVar74 ^ auVar64 ^ auVar75 ^ auVar65);
      auVar64 = vpsrlq_avx2(auVar84,2);
      uVar34 = iVar26 + ((uVar16 ^ uVar18) & (uVar17 ^ uVar16) ^ uVar16) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
               (uVar17 >> 2 | uVar17 * 0x40000000));
      auVar84 = vpshufd_avx2(auVar76 ^ auVar84 ^ auVar64,0x84);
      auVar84 = vpsrldq_avx2(auVar84,8);
      iVar26 = uVar33 + *(int *)(pauVar21[2] + 8) + (uVar31 & uVar15) + (~uVar15 & uVar32) +
               ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
               (uVar15 >> 6 | uVar15 * 0x4000000));
      auVar4 = vpaddd_avx2(auVar4,auVar84);
      uVar18 = uVar18 + iVar26;
      auVar84 = vpshufd_avx2(auVar4,0x50);
      auVar87 = aesenc(auVar87 ^ auVar90._0_16_ ^ auVar85._0_16_,param_4[1]);
      auVar64 = vpsrld_avx2(auVar84,10);
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      uVar33 = iVar26 + ((uVar17 ^ uVar16) & (uVar34 ^ uVar17) ^ uVar17) +
               ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 0x16 | uVar34 * 0x400) ^
               (uVar34 >> 2 | uVar34 * 0x40000000));
      auVar65 = vpsrlq_avx2(auVar84,2);
      auVar84 = vpshufd_avx2(auVar64 ^ auVar84 ^ auVar65,0xe8);
      iVar26 = uVar32 + *(int *)(pauVar21[2] + 0xc) + (uVar15 & uVar18) + (~uVar18 & uVar31) +
               ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
               (uVar18 >> 6 | uVar18 * 0x4000000));
      auVar84 = vpslldq_avx2(auVar84,8);
      uVar16 = uVar16 + iVar26;
      auVar75 = vpaddd_avx2(auVar4,auVar84);
      auVar82 = aesenc(auVar87,param_4[2]);
      auVar87 = param_4[3];
      auVar4 = vpaddd_avx2(auVar75,*pauVar23);
      pauVar21[-2] = auVar4;
      auVar84 = vpalignr_avx2(auVar78,auVar77,4);
      auVar4 = vpalignr_avx2(auVar75,auVar79,4);
      uVar32 = iVar26 + ((uVar34 ^ uVar17) & (uVar33 ^ uVar34) ^ uVar34) +
               ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 >> 0x16 | uVar33 * 0x400) ^
               (uVar33 >> 2 | uVar33 * 0x40000000));
      auVar74 = vpsrld_avx2(auVar84,7);
      auVar4 = vpaddd_avx2(auVar77,auVar4);
      auVar83 = vpsrld_avx2(auVar84,3);
      iVar26 = uVar31 + *(int *)pauVar21[3] + (uVar18 & uVar16) + (~uVar16 & uVar15) +
               ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
               (uVar16 >> 6 | uVar16 * 0x4000000));
      auVar64 = vpslld_avx2(auVar84,0xe);
      uVar17 = uVar17 + iVar26;
      auVar87 = aesenc(auVar82,auVar87);
      auVar84 = vpshufd_avx2(auVar75,0xfa);
      auVar77 = vpsrld_avx2(auVar74,0xb);
      uVar31 = iVar26 + ((uVar33 ^ uVar34) & (uVar32 ^ uVar33) ^ uVar33) +
               ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 >> 0x16 | uVar32 * 0x400) ^
               (uVar32 >> 2 | uVar32 * 0x40000000));
      auVar65 = vpslld_avx2(auVar64,0xb);
      auVar76 = vpsrld_avx2(auVar84,10);
      iVar26 = uVar15 + *(int *)(pauVar21[3] + 4) + (uVar16 & uVar17) + (~uVar17 & uVar18) +
               ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
               (uVar17 >> 6 | uVar17 * 0x4000000));
      uVar34 = uVar34 + iVar26;
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      auVar87 = aesenc(auVar87,param_4[4]);
      auVar4 = vpaddd_avx2(auVar4,auVar83 ^ auVar74 ^ auVar64 ^ auVar77 ^ auVar65);
      auVar64 = vpsrlq_avx2(auVar84,2);
      uVar15 = iVar26 + ((uVar32 ^ uVar33) & (uVar31 ^ uVar32) ^ uVar32) +
               ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
               (uVar31 >> 2 | uVar31 * 0x40000000));
      auVar84 = vpshufd_avx2(auVar76 ^ auVar84 ^ auVar64,0x84);
      auVar84 = vpsrldq_avx2(auVar84,8);
      iVar26 = uVar18 + *(int *)(pauVar21[3] + 8) + (uVar17 & uVar34) + (~uVar34 & uVar16) +
               ((uVar34 >> 0x19 | uVar34 * 0x80) ^ (uVar34 >> 0xb | uVar34 * 0x200000) ^
               (uVar34 >> 6 | uVar34 * 0x4000000));
      auVar4 = vpaddd_avx2(auVar4,auVar84);
      uVar33 = uVar33 + iVar26;
      auVar84 = vpshufd_avx2(auVar4,0x50);
      auVar87 = aesenc(auVar87,param_4[5]);
      auVar64 = vpsrld_avx2(auVar84,10);
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      uVar18 = iVar26 + ((uVar31 ^ uVar32) & (uVar15 ^ uVar31) ^ uVar31) +
               ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 0x16 | uVar15 * 0x400) ^
               (uVar15 >> 2 | uVar15 * 0x40000000));
      auVar65 = vpsrlq_avx2(auVar84,2);
      auVar84 = vpshufd_avx2(auVar64 ^ auVar84 ^ auVar65,0xe8);
      iVar26 = uVar16 + *(int *)(pauVar21[3] + 0xc) + (uVar34 & uVar33) + (~uVar33 & uVar17) +
               ((uVar33 >> 0x19 | uVar33 * 0x80) ^ (uVar33 >> 0xb | uVar33 * 0x200000) ^
               (uVar33 >> 6 | uVar33 * 0x4000000));
      auVar84 = vpslldq_avx2(auVar84,8);
      uVar32 = uVar32 + iVar26;
      auVar77 = vpaddd_avx2(auVar4,auVar84);
      auVar82 = aesenc(auVar87,param_4[6]);
      auVar87 = param_4[7];
      auVar4 = vpaddd_avx2(auVar77,pauVar23[1]);
      pauVar21[-1] = auVar4;
      pauVar20 = pauVar21 + -4;
      *(undefined8 *)(pauVar21[-5] + 0x18) = *(undefined8 *)(pauVar21[-3] + 0x18);
      auVar84 = vpalignr_avx2(auVar79,auVar78,4);
      auVar4 = vpalignr_avx2(auVar77,auVar75,4);
      uVar16 = iVar26 + ((uVar15 ^ uVar31) & (uVar18 ^ uVar15) ^ uVar15) +
               ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
               (uVar18 >> 2 | uVar18 * 0x40000000));
      auVar74 = vpsrld_avx2(auVar84,7);
      auVar4 = vpaddd_avx2(auVar78,auVar4);
      auVar83 = vpsrld_avx2(auVar84,3);
      iVar26 = uVar17 + *(int *)*pauVar21 + (uVar33 & uVar32) + (~uVar32 & uVar34) +
               ((uVar32 >> 0x19 | uVar32 * 0x80) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
               (uVar32 >> 6 | uVar32 * 0x4000000));
      auVar64 = vpslld_avx2(auVar84,0xe);
      uVar31 = uVar31 + iVar26;
      auVar87 = aesenc(auVar82,auVar87);
      auVar84 = vpshufd_avx2(auVar77,0xfa);
      auVar78 = vpsrld_avx2(auVar74,0xb);
      uVar17 = iVar26 + ((uVar18 ^ uVar15) & (uVar16 ^ uVar18) ^ uVar18) +
               ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
               (uVar16 >> 2 | uVar16 * 0x40000000));
      auVar65 = vpslld_avx2(auVar64,0xb);
      auVar76 = vpsrld_avx2(auVar84,10);
      iVar26 = uVar34 + *(int *)(*pauVar21 + 4) + (uVar32 & uVar31) + (~uVar31 & uVar33) +
               ((uVar31 >> 0x19 | uVar31 * 0x80) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
               (uVar31 >> 6 | uVar31 * 0x4000000));
      uVar15 = uVar15 + iVar26;
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      auVar87 = aesenc(auVar87,*pauVar22);
      auVar4 = vpaddd_avx2(auVar4,auVar83 ^ auVar74 ^ auVar64 ^ auVar78 ^ auVar65);
      auVar64 = vpsrlq_avx2(auVar84,2);
      uVar34 = iVar26 + ((uVar16 ^ uVar18) & (uVar17 ^ uVar16) ^ uVar16) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
               (uVar17 >> 2 | uVar17 * 0x40000000));
      auVar84 = vpshufd_avx2(auVar76 ^ auVar84 ^ auVar64,0x84);
      auVar84 = vpsrldq_avx2(auVar84,8);
      iVar26 = uVar33 + *(int *)(*pauVar21 + 8) + (uVar31 & uVar15) + (~uVar15 & uVar32) +
               ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
               (uVar15 >> 6 | uVar15 * 0x4000000));
      auVar4 = vpaddd_avx2(auVar4,auVar84);
      uVar18 = uVar18 + iVar26;
      auVar84 = vpshufd_avx2(auVar4,0x50);
      auVar87 = aesenc(auVar87,param_4[9]);
      auVar64 = vpsrld_avx2(auVar84,10);
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      uVar33 = iVar26 + ((uVar17 ^ uVar16) & (uVar34 ^ uVar17) ^ uVar17) +
               ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 0x16 | uVar34 * 0x400) ^
               (uVar34 >> 2 | uVar34 * 0x40000000));
      auVar65 = vpsrlq_avx2(auVar84,2);
      auVar84 = vpshufd_avx2(auVar64 ^ auVar84 ^ auVar65,0xe8);
      iVar26 = uVar32 + *(int *)(*pauVar21 + 0xc) + (uVar15 & uVar18) + (~uVar18 & uVar31) +
               ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
               (uVar18 >> 6 | uVar18 * 0x4000000));
      auVar84 = vpslldq_avx2(auVar84,8);
      uVar16 = uVar16 + iVar26;
      auVar78 = vpaddd_avx2(auVar4,auVar84);
      auVar82 = aesenclast(auVar87,param_4[10]);
      auVar62 = aesenc(auVar87,param_4[10]);
      auVar87 = param_4[0xb];
      auVar4 = vpaddd_avx2(auVar78,pauVar23[2]);
      *pauVar20 = auVar4;
      auVar84 = vpalignr_avx2(auVar75,auVar79,4);
      auVar4 = vpalignr_avx2(auVar78,auVar77,4);
      uVar32 = iVar26 + ((uVar34 ^ uVar17) & (uVar33 ^ uVar34) ^ uVar34) +
               ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 >> 0x16 | uVar33 * 0x400) ^
               (uVar33 >> 2 | uVar33 * 0x40000000));
      auVar74 = vpsrld_avx2(auVar84,7);
      auVar4 = vpaddd_avx2(auVar79,auVar4);
      auVar83 = vpsrld_avx2(auVar84,3);
      iVar26 = uVar31 + *(int *)pauVar21[1] + (uVar18 & uVar16) + (~uVar16 & uVar15) +
               ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
               (uVar16 >> 6 | uVar16 * 0x4000000));
      auVar64 = vpslld_avx2(auVar84,0xe);
      uVar17 = uVar17 + iVar26;
      auVar82 = vpand_avx(auVar82,auVar70);
      auVar87 = aesenc(auVar62,auVar87);
      auVar84 = vpshufd_avx2(auVar78,0xfa);
      auVar79 = vpsrld_avx2(auVar74,0xb);
      uVar31 = iVar26 + ((uVar33 ^ uVar34) & (uVar32 ^ uVar33) ^ uVar33) +
               ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 >> 0x16 | uVar32 * 0x400) ^
               (uVar32 >> 2 | uVar32 * 0x40000000));
      auVar65 = vpslld_avx2(auVar64,0xb);
      auVar76 = vpsrld_avx2(auVar84,10);
      iVar26 = uVar15 + *(int *)(pauVar21[1] + 4) + (uVar16 & uVar17) + (~uVar17 & uVar18) +
               ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
               (uVar17 >> 6 | uVar17 * 0x4000000));
      uVar34 = uVar34 + iVar26;
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      auVar63 = aesenclast(auVar87,param_4[0xc]);
      auVar62 = aesenc(auVar87,param_4[0xc]);
      auVar4 = vpaddd_avx2(auVar4,auVar83 ^ auVar74 ^ auVar64 ^ auVar79 ^ auVar65);
      auVar64 = vpsrlq_avx2(auVar84,2);
      uVar15 = iVar26 + ((uVar32 ^ uVar33) & (uVar31 ^ uVar32) ^ uVar32) +
               ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
               (uVar31 >> 2 | uVar31 * 0x40000000));
      auVar84 = vpshufd_avx2(auVar76 ^ auVar84 ^ auVar64,0x84);
      auVar84 = vpsrldq_avx2(auVar84,8);
      iVar26 = uVar18 + *(int *)(pauVar21[1] + 8) + (uVar17 & uVar34) + (~uVar34 & uVar16) +
               ((uVar34 >> 0x19 | uVar34 * 0x80) ^ (uVar34 >> 0xb | uVar34 * 0x200000) ^
               (uVar34 >> 6 | uVar34 * 0x4000000));
      auVar4 = vpaddd_avx2(auVar4,auVar84);
      uVar33 = uVar33 + iVar26;
      auVar84 = vpshufd_avx2(auVar4,0x50);
      auVar87 = vpand_avx(auVar63,auVar56);
      auVar63 = aesenc(auVar62,param_4[0xd]);
      auVar64 = vpsrld_avx2(auVar84,10);
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      uVar18 = iVar26 + ((uVar31 ^ uVar32) & (uVar15 ^ uVar31) ^ uVar31) +
               ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 0x16 | uVar15 * 0x400) ^
               (uVar15 >> 2 | uVar15 * 0x40000000));
      auVar65 = vpsrlq_avx2(auVar84,2);
      auVar84 = vpshufd_avx2(auVar64 ^ auVar84 ^ auVar65,0xe8);
      iVar26 = uVar16 + *(int *)(pauVar21[1] + 0xc) + (uVar34 & uVar33) + (~uVar33 & uVar17) +
               ((uVar33 >> 0x19 | uVar33 * 0x80) ^ (uVar33 >> 0xb | uVar33 * 0x200000) ^
               (uVar33 >> 6 | uVar33 * 0x4000000));
      uVar24 = uVar18 ^ uVar15;
      auVar84 = vpslldq_avx2(auVar84,8);
      uVar32 = uVar32 + iVar26;
      auVar79 = vpaddd_avx2(auVar4,auVar84);
      auVar62 = vpor_avx(auVar82,auVar87);
      auVar82 = aesenclast(auVar63,param_4[0xe]);
      auVar87 = *param_4;
      auVar90 = ZEXT1664(auVar87);
      auVar4 = vpaddd_avx2(auVar79,pauVar23[3]);
      uVar28 = (uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
               (uVar18 >> 2 | uVar18 * 0x40000000);
      uVar16 = iVar26 + ((uVar15 ^ uVar31) & uVar24 ^ uVar15);
      pauVar21[-3] = auVar4;
      lVar25 = vpextrq_avx(auVar69,1);
      auVar82 = vpand_avx(auVar82,auVar86);
      auVar82 = vpor_avx(auVar62,auVar82);
      auVar85 = ZEXT1664(auVar82);
      *(undefined1 (*) [16])(lVar25 + auVar69._0_8_) = auVar82;
      pauVar29 = (undefined1 (*) [16])(auVar69._0_8_ + 0x10);
      pauVar14 = pauVar23 + 4;
      pauVar23 = pauVar23 + 4;
    } while ((*pauVar14)[3] != '\0');
    auVar69 = vpinsrq_avx(auVar69,pauVar29,0);
    auVar100 = ZEXT1664(auVar69);
    uVar16 = uVar16 + uVar28;
    iVar26 = uVar17 + *(int *)pauVar21[-2] + (uVar33 & uVar32) + (~uVar32 & uVar34) +
             ((uVar32 >> 0x19 | uVar32 * 0x80) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
             (uVar32 >> 6 | uVar32 * 0x4000000));
    uVar31 = uVar31 + iVar26;
    uVar17 = iVar26 + (uVar24 & (uVar16 ^ uVar18) ^ uVar18) +
             ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
             (uVar16 >> 2 | uVar16 * 0x40000000));
    iVar26 = uVar34 + *(int *)(pauVar21[-2] + 4) + (uVar32 & uVar31) + (~uVar31 & uVar33) +
             ((uVar31 >> 0x19 | uVar31 * 0x80) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
             (uVar31 >> 6 | uVar31 * 0x4000000));
    uVar15 = uVar15 + iVar26;
    uVar34 = iVar26 + ((uVar16 ^ uVar18) & (uVar17 ^ uVar16) ^ uVar16) +
             ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
             (uVar17 >> 2 | uVar17 * 0x40000000));
    iVar26 = uVar33 + *(int *)(pauVar21[-2] + 8) + (uVar31 & uVar15) + (~uVar15 & uVar32) +
             ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
             (uVar15 >> 6 | uVar15 * 0x4000000));
    uVar18 = uVar18 + iVar26;
    auVar87 = aesenc(*pauVar29 ^ auVar87 ^ auVar82,param_4[1]);
    uVar33 = iVar26 + ((uVar17 ^ uVar16) & (uVar34 ^ uVar17) ^ uVar17) +
             ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 0x16 | uVar34 * 0x400) ^
             (uVar34 >> 2 | uVar34 * 0x40000000));
    iVar26 = uVar32 + *(int *)(pauVar21[-2] + 0xc) + (uVar15 & uVar18) + (~uVar18 & uVar31) +
             ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
             (uVar18 >> 6 | uVar18 * 0x4000000));
    uVar16 = uVar16 + iVar26;
    auVar87 = aesenc(auVar87,param_4[2]);
    uVar32 = iVar26 + ((uVar34 ^ uVar17) & (uVar33 ^ uVar34) ^ uVar34) +
             ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 >> 0x16 | uVar33 * 0x400) ^
             (uVar33 >> 2 | uVar33 * 0x40000000));
    iVar26 = uVar31 + *(int *)pauVar21[-1] + (uVar18 & uVar16) + (~uVar16 & uVar15) +
             ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
             (uVar16 >> 6 | uVar16 * 0x4000000));
    uVar17 = uVar17 + iVar26;
    auVar87 = aesenc(auVar87,param_4[3]);
    uVar31 = iVar26 + ((uVar33 ^ uVar34) & (uVar32 ^ uVar33) ^ uVar33) +
             ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 >> 0x16 | uVar32 * 0x400) ^
             (uVar32 >> 2 | uVar32 * 0x40000000));
    iVar26 = uVar15 + *(int *)(pauVar21[-1] + 4) + (uVar16 & uVar17) + (~uVar17 & uVar18) +
             ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
             (uVar17 >> 6 | uVar17 * 0x4000000));
    uVar34 = uVar34 + iVar26;
    auVar87 = aesenc(auVar87,param_4[4]);
    uVar15 = iVar26 + ((uVar32 ^ uVar33) & (uVar31 ^ uVar32) ^ uVar32) +
             ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
             (uVar31 >> 2 | uVar31 * 0x40000000));
    iVar26 = uVar18 + *(int *)(pauVar21[-1] + 8) + (uVar17 & uVar34) + (~uVar34 & uVar16) +
             ((uVar34 >> 0x19 | uVar34 * 0x80) ^ (uVar34 >> 0xb | uVar34 * 0x200000) ^
             (uVar34 >> 6 | uVar34 * 0x4000000));
    uVar33 = uVar33 + iVar26;
    auVar87 = aesenc(auVar87,param_4[5]);
    uVar18 = iVar26 + ((uVar31 ^ uVar32) & (uVar15 ^ uVar31) ^ uVar31) +
             ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 0x16 | uVar15 * 0x400) ^
             (uVar15 >> 2 | uVar15 * 0x40000000));
    iVar26 = uVar16 + *(int *)(pauVar21[-1] + 0xc) + (uVar34 & uVar33) + (~uVar33 & uVar17) +
             ((uVar33 >> 0x19 | uVar33 * 0x80) ^ (uVar33 >> 0xb | uVar33 * 0x200000) ^
             (uVar33 >> 6 | uVar33 * 0x4000000));
    uVar32 = uVar32 + iVar26;
    auVar87 = aesenc(auVar87,param_4[6]);
    uVar16 = iVar26 + ((uVar15 ^ uVar31) & (uVar18 ^ uVar15) ^ uVar15) +
             ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
             (uVar18 >> 2 | uVar18 * 0x40000000));
    iVar26 = uVar17 + *(int *)*pauVar20 + (uVar33 & uVar32) + (~uVar32 & uVar34) +
             ((uVar32 >> 0x19 | uVar32 * 0x80) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
             (uVar32 >> 6 | uVar32 * 0x4000000));
    uVar31 = uVar31 + iVar26;
    auVar87 = aesenc(auVar87,param_4[7]);
    uVar17 = iVar26 + ((uVar18 ^ uVar15) & (uVar16 ^ uVar18) ^ uVar18) +
             ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
             (uVar16 >> 2 | uVar16 * 0x40000000));
    iVar26 = uVar34 + *(int *)(pauVar21[-4] + 4) + (uVar32 & uVar31) + (~uVar31 & uVar33) +
             ((uVar31 >> 0x19 | uVar31 * 0x80) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
             (uVar31 >> 6 | uVar31 * 0x4000000));
    uVar15 = uVar15 + iVar26;
    auVar87 = aesenc(auVar87,*pauVar22);
    uVar34 = iVar26 + ((uVar16 ^ uVar18) & (uVar17 ^ uVar16) ^ uVar16) +
             ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
             (uVar17 >> 2 | uVar17 * 0x40000000));
    iVar26 = uVar33 + *(int *)(pauVar21[-4] + 8) + (uVar31 & uVar15) + (~uVar15 & uVar32) +
             ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
             (uVar15 >> 6 | uVar15 * 0x4000000));
    uVar18 = uVar18 + iVar26;
    auVar87 = aesenc(auVar87,param_4[9]);
    uVar33 = iVar26 + ((uVar17 ^ uVar16) & (uVar34 ^ uVar17) ^ uVar17) +
             ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 0x16 | uVar34 * 0x400) ^
             (uVar34 >> 2 | uVar34 * 0x40000000));
    iVar26 = uVar32 + *(int *)(pauVar21[-4] + 0xc) + (uVar15 & uVar18) + (~uVar18 & uVar31) +
             ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
             (uVar18 >> 6 | uVar18 * 0x4000000));
    uVar16 = uVar16 + iVar26;
    auVar62 = aesenclast(auVar87,param_4[10]);
    auVar82 = aesenc(auVar87,param_4[10]);
    uVar32 = iVar26 + ((uVar34 ^ uVar17) & (uVar33 ^ uVar34) ^ uVar34) +
             ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 >> 0x16 | uVar33 * 0x400) ^
             (uVar33 >> 2 | uVar33 * 0x40000000));
    iVar26 = uVar31 + *(int *)pauVar21[-3] + (uVar18 & uVar16) + (~uVar16 & uVar15) +
             ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
             (uVar16 >> 6 | uVar16 * 0x4000000));
    uVar17 = uVar17 + iVar26;
    auVar87 = vpand_avx(auVar62,auVar70);
    auVar82 = aesenc(auVar82,param_4[0xb]);
    uVar31 = iVar26 + ((uVar33 ^ uVar34) & (uVar32 ^ uVar33) ^ uVar33) +
             ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 >> 0x16 | uVar32 * 0x400) ^
             (uVar32 >> 2 | uVar32 * 0x40000000));
    iVar26 = uVar15 + *(int *)(pauVar21[-3] + 4) + (uVar16 & uVar17) + (~uVar17 & uVar18) +
             ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
             (uVar17 >> 6 | uVar17 * 0x4000000));
    uVar34 = uVar34 + iVar26;
    auVar63 = aesenclast(auVar82,param_4[0xc]);
    auVar62 = aesenc(auVar82,param_4[0xc]);
    uVar15 = iVar26 + ((uVar32 ^ uVar33) & (uVar31 ^ uVar32) ^ uVar32) +
             ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
             (uVar31 >> 2 | uVar31 * 0x40000000));
    iVar26 = uVar18 + *(int *)(pauVar21[-3] + 8) + (uVar17 & uVar34) + (~uVar34 & uVar16) +
             ((uVar34 >> 0x19 | uVar34 * 0x80) ^ (uVar34 >> 0xb | uVar34 * 0x200000) ^
             (uVar34 >> 6 | uVar34 * 0x4000000));
    uVar33 = uVar33 + iVar26;
    auVar82 = vpand_avx(auVar63,auVar56);
    auVar62 = aesenc(auVar62,param_4[0xd]);
    uVar18 = iVar26 + ((uVar31 ^ uVar32) & (uVar15 ^ uVar31) ^ uVar31) +
             ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 0x16 | uVar15 * 0x400) ^
             (uVar15 >> 2 | uVar15 * 0x40000000));
    iVar26 = uVar16 + *(int *)(pauVar21[-3] + 0xc) + (uVar34 & uVar33) + (~uVar33 & uVar17) +
             ((uVar33 >> 0x19 | uVar33 * 0x80) ^ (uVar33 >> 0xb | uVar33 * 0x200000) ^
             (uVar33 >> 6 | uVar33 * 0x4000000));
    auVar82 = vpor_avx(auVar87,auVar82);
    auVar87 = aesenclast(auVar62,param_4[0xe]);
    auVar90 = ZEXT1664(*param_4);
    lVar25 = vpextrq_avx(auVar69,1);
    puVar1 = *(uint **)(pauVar21[0xd] + 8);
    pauVar23 = pauVar21 + 10;
    auVar87 = vpand_avx(auVar87,auVar86);
    auVar87 = vpor_avx(auVar82,auVar87);
    auVar85 = ZEXT1664(auVar87);
    *(undefined1 (*) [16])(lVar25 + auVar69._0_8_) = auVar87;
    pauVar29 = (undefined1 (*) [16])(auVar69._0_8_ + 0x10);
    uVar16 = iVar26 + ((uVar15 ^ uVar31) & (uVar18 ^ uVar15) ^ uVar15) +
             ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
             (uVar18 >> 2 | uVar18 * 0x40000000)) + *puVar1;
    uVar18 = uVar18 + puVar1[1];
    uVar15 = uVar15 + puVar1[2];
    uVar31 = uVar31 + puVar1[3];
    uVar32 = uVar32 + iVar26 + puVar1[4];
    uVar33 = uVar33 + puVar1[5];
    uVar34 = uVar34 + puVar1[6];
    uVar17 = uVar17 + puVar1[7];
    *puVar1 = uVar16;
    puVar1[1] = uVar18;
    puVar1[2] = uVar15;
    puVar1[3] = uVar31;
    puVar1[4] = uVar32;
    puVar1[5] = uVar33;
    puVar1[6] = uVar34;
    puVar1[7] = uVar17;
    if (pauVar29 == *(undefined1 (**) [16])(pauVar21[0xc] + 0x10)) break;
    uVar28 = 0;
    uVar24 = uVar18 ^ uVar15;
    do {
      auVar69 = vpinsrq_avx(auVar100._0_16_,pauVar29,0);
      auVar100 = ZEXT1664(auVar69);
      uVar16 = uVar16 + uVar28;
      iVar26 = uVar17 + *(int *)(*pauVar23 + 0x10) + (uVar33 & uVar32) + (~uVar32 & uVar34) +
               ((uVar32 >> 0x19 | uVar32 << 7) ^ (uVar32 >> 0xb | uVar32 << 0x15) ^
               (uVar32 >> 6 | uVar32 << 0x1a));
      uVar31 = uVar31 + iVar26;
      uVar17 = iVar26 + (uVar24 & (uVar16 ^ uVar18) ^ uVar18) +
               ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
               (uVar16 >> 2 | uVar16 * 0x40000000));
      iVar26 = uVar34 + *(int *)(*pauVar23 + 0x14) + (uVar32 & uVar31) + (~uVar31 & uVar33) +
               ((uVar31 >> 0x19 | uVar31 * 0x80) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
               (uVar31 >> 6 | uVar31 * 0x4000000));
      uVar15 = uVar15 + iVar26;
      uVar34 = iVar26 + ((uVar16 ^ uVar18) & (uVar17 ^ uVar16) ^ uVar16) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
               (uVar17 >> 2 | uVar17 * 0x40000000));
      iVar26 = uVar33 + *(int *)(*pauVar23 + 0x18) + (uVar31 & uVar15) + (~uVar15 & uVar32) +
               ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
               (uVar15 >> 6 | uVar15 * 0x4000000));
      uVar18 = uVar18 + iVar26;
      auVar87 = aesenc(*pauVar29 ^ auVar90._0_16_ ^ auVar85._0_16_,param_4[1]);
      uVar33 = iVar26 + ((uVar17 ^ uVar16) & (uVar34 ^ uVar17) ^ uVar17) +
               ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 0x16 | uVar34 * 0x400) ^
               (uVar34 >> 2 | uVar34 * 0x40000000));
      iVar26 = uVar32 + *(int *)(*pauVar23 + 0x1c) + (uVar15 & uVar18) + (~uVar18 & uVar31) +
               ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
               (uVar18 >> 6 | uVar18 * 0x4000000));
      uVar16 = uVar16 + iVar26;
      auVar87 = aesenc(auVar87,param_4[2]);
      uVar32 = iVar26 + ((uVar34 ^ uVar17) & (uVar33 ^ uVar34) ^ uVar34) +
               ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 >> 0x16 | uVar33 * 0x400) ^
               (uVar33 >> 2 | uVar33 * 0x40000000));
      iVar26 = uVar31 + *(int *)(pauVar23[1] + 0x10) + (uVar18 & uVar16) + (~uVar16 & uVar15) +
               ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
               (uVar16 >> 6 | uVar16 * 0x4000000));
      uVar17 = uVar17 + iVar26;
      auVar87 = aesenc(auVar87,param_4[3]);
      uVar31 = iVar26 + ((uVar33 ^ uVar34) & (uVar32 ^ uVar33) ^ uVar33) +
               ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 >> 0x16 | uVar32 * 0x400) ^
               (uVar32 >> 2 | uVar32 * 0x40000000));
      iVar26 = uVar15 + *(int *)(pauVar23[1] + 0x14) + (uVar16 & uVar17) + (~uVar17 & uVar18) +
               ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
               (uVar17 >> 6 | uVar17 * 0x4000000));
      uVar34 = uVar34 + iVar26;
      auVar87 = aesenc(auVar87,param_4[4]);
      uVar15 = iVar26 + ((uVar32 ^ uVar33) & (uVar31 ^ uVar32) ^ uVar32) +
               ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
               (uVar31 >> 2 | uVar31 * 0x40000000));
      iVar26 = uVar18 + *(int *)(pauVar23[1] + 0x18) + (uVar17 & uVar34) + (~uVar34 & uVar16) +
               ((uVar34 >> 0x19 | uVar34 * 0x80) ^ (uVar34 >> 0xb | uVar34 * 0x200000) ^
               (uVar34 >> 6 | uVar34 * 0x4000000));
      uVar33 = uVar33 + iVar26;
      auVar87 = aesenc(auVar87,param_4[5]);
      uVar18 = iVar26 + ((uVar31 ^ uVar32) & (uVar15 ^ uVar31) ^ uVar31) +
               ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 0x16 | uVar15 * 0x400) ^
               (uVar15 >> 2 | uVar15 * 0x40000000));
      iVar26 = uVar16 + *(int *)(pauVar23[1] + 0x1c) + (uVar34 & uVar33) + (~uVar33 & uVar17) +
               ((uVar33 >> 0x19 | uVar33 * 0x80) ^ (uVar33 >> 0xb | uVar33 * 0x200000) ^
               (uVar33 >> 6 | uVar33 * 0x4000000));
      uVar32 = uVar32 + iVar26;
      auVar87 = aesenc(auVar87,param_4[6]);
      uVar16 = iVar26 + ((uVar15 ^ uVar31) & (uVar18 ^ uVar15) ^ uVar15) +
               ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
               (uVar18 >> 2 | uVar18 * 0x40000000));
      iVar26 = uVar17 + *(int *)(pauVar23[-2] + 0x10) + (uVar33 & uVar32) + (~uVar32 & uVar34) +
               ((uVar32 >> 0x19 | uVar32 * 0x80) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
               (uVar32 >> 6 | uVar32 * 0x4000000));
      uVar31 = uVar31 + iVar26;
      auVar87 = aesenc(auVar87,param_4[7]);
      uVar17 = iVar26 + ((uVar18 ^ uVar15) & (uVar16 ^ uVar18) ^ uVar18) +
               ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
               (uVar16 >> 2 | uVar16 * 0x40000000));
      iVar26 = uVar34 + *(int *)(pauVar23[-2] + 0x14) + (uVar32 & uVar31) + (~uVar31 & uVar33) +
               ((uVar31 >> 0x19 | uVar31 * 0x80) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
               (uVar31 >> 6 | uVar31 * 0x4000000));
      uVar15 = uVar15 + iVar26;
      auVar87 = aesenc(auVar87,*pauVar22);
      uVar34 = iVar26 + ((uVar16 ^ uVar18) & (uVar17 ^ uVar16) ^ uVar16) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
               (uVar17 >> 2 | uVar17 * 0x40000000));
      iVar26 = uVar33 + *(int *)(pauVar23[-2] + 0x18) + (uVar31 & uVar15) + (~uVar15 & uVar32) +
               ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
               (uVar15 >> 6 | uVar15 * 0x4000000));
      uVar18 = uVar18 + iVar26;
      auVar87 = aesenc(auVar87,param_4[9]);
      uVar33 = iVar26 + ((uVar17 ^ uVar16) & (uVar34 ^ uVar17) ^ uVar17) +
               ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 0x16 | uVar34 * 0x400) ^
               (uVar34 >> 2 | uVar34 * 0x40000000));
      iVar26 = uVar32 + *(int *)(pauVar23[-2] + 0x1c) + (uVar15 & uVar18) + (~uVar18 & uVar31) +
               ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
               (uVar18 >> 6 | uVar18 * 0x4000000));
      uVar16 = uVar16 + iVar26;
      auVar62 = aesenclast(auVar87,param_4[10]);
      auVar82 = aesenc(auVar87,param_4[10]);
      uVar32 = iVar26 + ((uVar34 ^ uVar17) & (uVar33 ^ uVar34) ^ uVar34) +
               ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 >> 0x16 | uVar33 * 0x400) ^
               (uVar33 >> 2 | uVar33 * 0x40000000));
      iVar26 = uVar31 + *(int *)(pauVar23[-1] + 0x10) + (uVar18 & uVar16) + (~uVar16 & uVar15) +
               ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
               (uVar16 >> 6 | uVar16 * 0x4000000));
      uVar17 = uVar17 + iVar26;
      auVar87 = vpand_avx(auVar62,auVar70);
      auVar82 = aesenc(auVar82,param_4[0xb]);
      uVar31 = iVar26 + ((uVar33 ^ uVar34) & (uVar32 ^ uVar33) ^ uVar33) +
               ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 >> 0x16 | uVar32 * 0x400) ^
               (uVar32 >> 2 | uVar32 * 0x40000000));
      iVar26 = uVar15 + *(int *)(pauVar23[-1] + 0x14) + (uVar16 & uVar17) + (~uVar17 & uVar18) +
               ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
               (uVar17 >> 6 | uVar17 * 0x4000000));
      uVar34 = uVar34 + iVar26;
      auVar63 = aesenclast(auVar82,param_4[0xc]);
      auVar62 = aesenc(auVar82,param_4[0xc]);
      uVar15 = iVar26 + ((uVar32 ^ uVar33) & (uVar31 ^ uVar32) ^ uVar32) +
               ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
               (uVar31 >> 2 | uVar31 * 0x40000000));
      iVar26 = uVar18 + *(int *)(pauVar23[-1] + 0x18) + (uVar17 & uVar34) + (~uVar34 & uVar16) +
               ((uVar34 >> 0x19 | uVar34 * 0x80) ^ (uVar34 >> 0xb | uVar34 * 0x200000) ^
               (uVar34 >> 6 | uVar34 * 0x4000000));
      uVar33 = uVar33 + iVar26;
      auVar82 = vpand_avx(auVar63,auVar56);
      auVar62 = aesenc(auVar62,param_4[0xd]);
      uVar18 = iVar26 + ((uVar31 ^ uVar32) & (uVar15 ^ uVar31) ^ uVar31) +
               ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 0x16 | uVar15 * 0x400) ^
               (uVar15 >> 2 | uVar15 * 0x40000000));
      iVar26 = uVar16 + *(int *)(pauVar23[-1] + 0x1c) + (uVar34 & uVar33) + (~uVar33 & uVar17) +
               ((uVar33 >> 0x19 | uVar33 * 0x80) ^ (uVar33 >> 0xb | uVar33 * 0x200000) ^
               (uVar33 >> 6 | uVar33 * 0x4000000));
      uVar24 = uVar18 ^ uVar15;
      uVar32 = uVar32 + iVar26;
      auVar82 = vpor_avx(auVar87,auVar82);
      auVar87 = aesenclast(auVar62,param_4[0xe]);
      auVar90 = ZEXT1664(*param_4);
      uVar28 = (uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
               (uVar18 >> 2 | uVar18 * 0x40000000);
      uVar16 = iVar26 + ((uVar15 ^ uVar31) & uVar24 ^ uVar15);
      lVar35 = auVar69._0_8_;
      lVar25 = vpextrq_avx(auVar69,1);
      auVar87 = vpand_avx(auVar87,auVar86);
      auVar87 = vpor_avx(auVar82,auVar87);
      auVar85 = ZEXT1664(auVar87);
      pauVar23 = pauVar23 + -4;
      *(undefined1 (*) [16])(lVar25 + lVar35) = auVar87;
      pauVar29 = (undefined1 (*) [16])(lVar35 + 0x10);
    } while (pauVar20 <= pauVar23);
    puVar1 = *(uint **)(pauVar21[0xd] + 8);
    pauVar29 = (undefined1 (*) [16])(lVar35 + 0x50);
    lVar35 = *(long *)(pauVar21[0xd] + 0x10);
    pauVar20 = pauVar21 + 10;
    uVar16 = uVar16 + uVar28 + *puVar1;
    uVar18 = uVar18 + puVar1[1];
    uVar15 = uVar15 + puVar1[2];
    uVar31 = uVar31 + puVar1[3];
    uVar32 = uVar32 + puVar1[4];
    uVar33 = uVar33 + puVar1[5];
    uVar34 = uVar34 + puVar1[6];
    uVar17 = uVar17 + puVar1[7];
    pauVar2 = *(undefined1 (**) [16])(pauVar21[0xc] + 0x10);
    *puVar1 = uVar16;
    pauVar23 = (undefined1 (*) [32])(*pauVar29 + lVar35);
    if (pauVar29 == pauVar2) {
      pauVar23 = pauVar20;
    }
    puVar1[1] = uVar18;
    puVar1[2] = uVar15;
    puVar1[3] = uVar31;
    puVar1[4] = uVar32;
    puVar1[5] = uVar33;
    puVar1[6] = uVar34;
    puVar1[7] = uVar17;
  } while (pauVar29 <= pauVar2);
  **(undefined1 (**) [16])pauVar21[0xd] = auVar87;
  return uVar16;
}

