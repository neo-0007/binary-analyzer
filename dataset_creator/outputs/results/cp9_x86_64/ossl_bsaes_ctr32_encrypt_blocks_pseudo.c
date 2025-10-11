
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_bsaes_ctr32_encrypt_blocks
               (undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3,AES_KEY *param_4
               ,undefined1 (*param_5) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulong *puVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulong extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  ulong extraout_XMM1_Qb;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong in_XMM6_Qa;
  ulong in_XMM6_Qb;
  undefined1 auVar24 [16];
  ulong in_XMM7_Qa;
  ulong in_XMM7_Qb;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uStack_80;
  undefined1 local_78 [32];
  undefined1 local_58 [16];
  ulong local_48;
  ulong uStack_40;
  
  local_58 = *param_5;
  if (param_3 < 8) {
    do {
      uStack_80 = 0x4989b0;
      AES_encrypt(local_58,(uchar *)&local_48,param_4);
      puVar9 = *param_1;
      uVar13 = *(ulong *)(*param_1 + 8);
      param_1 = param_1 + 1;
      uVar10 = ((uint)local_58._12_4_ >> 0x18 | (local_58._12_4_ & 0xff0000) >> 8 |
                (local_58._12_4_ & 0xff00) << 8 | local_58._12_4_ << 0x18) + 1;
      *(ulong *)*param_2 = *(ulong *)puVar9 ^ local_48;
      *(ulong *)(*param_2 + 8) = uVar13 ^ uStack_40;
      param_2 = param_2 + 1;
      local_58._12_4_ =
           uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000;
      param_3 = param_3 - 1;
      pauVar12 = (undefined1 (*) [16])local_78;
    } while (param_3 != 0);
  }
  else {
    lVar4 = -((ulong)(uint)param_4->rounds * 0x80 + -0x60);
    pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4);
    *(undefined8 *)(local_78 + lVar4 + -8) = 0x49872a;
    puVar11 = (ulong *)_bsaes_key_convert();
    *puVar11 = in_XMM7_Qa ^ in_XMM6_Qa;
    puVar11[1] = in_XMM7_Qb ^ in_XMM6_Qb;
    auVar25 = pshufb(*(undefined1 (*) [16])((long)local_78 + lVar4),_DAT_00499ad0);
    auVar26 = pshufb(local_58,_DAT_00499ad0);
    *(undefined1 (*) [16])((long)local_78 + lVar4) = auVar25;
    do {
      local_58 = auVar26;
      iVar14 = auVar26._0_4_;
      auVar18._0_4_ = iVar14 + _DAT_00499af0;
      iVar15 = auVar26._4_4_;
      auVar18._4_4_ = iVar15 + _UNK_00499af4;
      iVar16 = auVar26._8_4_;
      iVar17 = auVar26._12_4_;
      auVar18._8_4_ = iVar16 + _UNK_00499af8;
      auVar18._12_4_ = iVar17 + _UNK_00499afc;
      auVar19._0_4_ = iVar14 + _DAT_00499b00;
      auVar19._4_4_ = iVar15 + _UNK_00499b04;
      auVar19._8_4_ = iVar16 + _UNK_00499b08;
      auVar19._12_4_ = iVar17 + _UNK_00499b0c;
      auVar20._0_4_ = iVar14 + _DAT_00499b10;
      auVar20._4_4_ = iVar15 + _UNK_00499b14;
      auVar20._8_4_ = iVar16 + _UNK_00499b18;
      auVar20._12_4_ = iVar17 + _UNK_00499b1c;
      auVar21._0_4_ = iVar14 + _DAT_00499b20;
      auVar21._4_4_ = iVar15 + _UNK_00499b24;
      auVar21._8_4_ = iVar16 + _UNK_00499b28;
      auVar21._12_4_ = iVar17 + _UNK_00499b2c;
      auVar23._0_4_ = iVar14 + _DAT_00499b30;
      auVar23._4_4_ = iVar15 + _UNK_00499b34;
      auVar23._8_4_ = iVar16 + _UNK_00499b38;
      auVar23._12_4_ = iVar17 + _UNK_00499b3c;
      auVar22._0_4_ = iVar14 + _DAT_00499b40;
      auVar22._4_4_ = iVar15 + _UNK_00499b44;
      auVar22._8_4_ = iVar16 + _UNK_00499b48;
      auVar22._12_4_ = iVar17 + _UNK_00499b4c;
      auVar24._0_4_ = iVar14 + _DAT_00499b50;
      auVar24._4_4_ = iVar15 + _UNK_00499b54;
      auVar24._8_4_ = iVar16 + _UNK_00499b58;
      auVar24._12_4_ = iVar17 + _UNK_00499b5c;
      auVar25 = *(undefined1 (*) [16])((long)local_78 + lVar4);
      auVar27 = pshufb(auVar26 ^ auVar25,_DAT_00499ae0);
      auVar26 = pshufb(auVar18 ^ auVar25,_DAT_00499ae0);
      auVar18 = pshufb(auVar19 ^ auVar25,_DAT_00499ae0);
      auVar19 = pshufb(auVar20 ^ auVar25,_DAT_00499ae0);
      auVar20 = pshufb(auVar21 ^ auVar25,_DAT_00499ae0);
      auVar21 = pshufb(auVar23 ^ auVar25,_DAT_00499ae0);
      auVar23 = pshufb(auVar22 ^ auVar25,_DAT_00499ae0);
      auVar25 = pshufb(auVar24 ^ auVar25,_DAT_00499ae0);
      *(undefined8 *)(local_78 + lVar4 + -8) = 0x498823;
      auVar26 = _bsaes_encrypt8_bitslice(auVar26._0_8_,auVar18._0_8_);
      uVar13 = param_3 - 8;
      if (param_3 < 8) {
        *param_2 = auVar27 ^ *param_1;
        pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4);
        if (1 < param_3) {
          uVar13 = *(ulong *)(param_1[1] + 8);
          *(ulong *)param_2[1] = auVar26._0_8_ ^ *(ulong *)param_1[1];
          *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb ^ uVar13;
          pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4);
          if (param_3 != 2) {
            param_2[2] = auVar20 ^ param_1[2];
            pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4);
            if ((3 < param_3) &&
               (param_2[3] = auVar23 ^ param_1[3],
               pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4), param_3 != 4)) {
              param_2[4] = auVar19 ^ param_1[4];
              pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4);
              if ((5 < param_3) &&
                 (param_2[5] = auVar25 ^ param_1[5],
                 pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4), param_3 != 6)) {
                uVar13 = *(ulong *)(param_1[6] + 8);
                *(ulong *)param_2[6] = auVar26._8_8_ ^ *(ulong *)param_1[6];
                *(ulong *)(param_2[6] + 8) = extraout_XMM1_Qb ^ uVar13;
                pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4);
              }
            }
          }
        }
        break;
      }
      auVar18 = *param_1;
      uVar5 = *(ulong *)param_1[1];
      uVar6 = *(ulong *)(param_1[1] + 8);
      auVar22 = param_1[2];
      auVar24 = param_1[3];
      auVar1 = param_1[4];
      auVar2 = param_1[5];
      uVar7 = *(ulong *)param_1[6];
      uVar8 = *(ulong *)(param_1[6] + 8);
      auVar3 = param_1[7];
      param_1 = param_1 + 8;
      *param_2 = auVar18 ^ auVar27;
      *(ulong *)param_2[1] = auVar26._0_8_ ^ uVar5;
      *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb ^ uVar6;
      param_2[2] = auVar20 ^ auVar22;
      param_2[3] = auVar23 ^ auVar24;
      param_2[4] = auVar19 ^ auVar1;
      param_2[5] = auVar25 ^ auVar2;
      *(ulong *)param_2[6] = auVar26._8_8_ ^ uVar7;
      *(ulong *)(param_2[6] + 8) = extraout_XMM1_Qb ^ uVar8;
      param_2[7] = auVar21 ^ auVar3;
      param_2 = param_2 + 8;
      auVar26._0_4_ = local_58._0_4_ + _DAT_00499b60;
      auVar26._4_4_ = local_58._4_4_ + _UNK_00499b64;
      auVar26._8_4_ = local_58._8_4_ + _UNK_00499b68;
      auVar26._12_4_ = local_58._12_4_ + _UNK_00499b6c;
      param_3 = uVar13;
    } while (uVar13 != 0);
  }
  do {
    *pauVar12 = (undefined1  [16])0x0;
    pauVar12[1] = (undefined1  [16])0x0;
    pauVar12 = pauVar12 + 2;
  } while (pauVar12 < (undefined1 (*) [16])local_78);
  return;
}

