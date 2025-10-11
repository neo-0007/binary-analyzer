
void ossl_bsaes_cbc_encrypt
               (ulong *param_1,ulong *param_2,ulong param_3,AES_KEY *param_4,ulong *param_5,
               int param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined1 (*pauVar19) [16];
  int iVar20;
  uint uVar21;
  long lVar22;
  undefined4 extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  undefined4 extraout_EDX_02;
  uint extraout_EDX_03;
  uint uVar23;
  undefined1 *puVar24;
  int *piVar25;
  uint *puVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong *puVar31;
  AES_KEY *pAVar32;
  byte bVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong extraout_XMM0_Qb;
  ulong extraout_XMM0_Qb_00;
  ulong extraout_XMM0_Qb_01;
  ulong extraout_XMM0_Qb_02;
  ulong extraout_XMM0_Qb_03;
  ulong extraout_XMM0_Qb_04;
  ulong extraout_XMM0_Qb_05;
  ulong extraout_XMM1_Qb;
  ulong extraout_XMM1_Qb_00;
  ulong extraout_XMM1_Qb_01;
  ulong extraout_XMM1_Qb_02;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM6_Qb;
  ulong uVar45;
  ulong in_XMM7_Qa;
  ulong in_XMM7_Qb;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  undefined1 auVar50 [16];
  long alStack_1c8 [3];
  undefined1 auStack_1b0 [8];
  long alStack_1a8 [5];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [244];
  uint uStack_7c;
  undefined8 local_78;
  ulong auStack_70 [4];
  ulong uStack_50;
  
  if ((param_6 == 0) && (0x7f < param_3)) {
    uVar23 = param_4->rounds;
    param_3 = param_3 >> 4;
    lVar30 = -((ulong)uVar23 * 0x80 + -0x60);
    pauVar19 = (undefined1 (*) [16])((long)&local_78 + lVar30);
    *(undefined8 *)(auStack_170 + lVar30 + 0xf0) = 0x498284;
    puVar18 = (undefined8 *)_bsaes_key_convert(param_1,param_2,uVar23,param_4);
    uVar29 = *(ulong *)((long)&local_78 + lVar30);
    uVar28 = *(ulong *)((long)auStack_70 + lVar30);
    *puVar18 = in_XMM6_Qa;
    puVar18[1] = in_XMM6_Qb;
    *(ulong *)((long)&local_78 + lVar30) = in_XMM7_Qa ^ uVar29;
    *(ulong *)((long)auStack_70 + lVar30) = in_XMM7_Qb ^ uVar28;
    uVar29 = *param_5;
    uVar28 = param_5[1];
    do {
      puVar31 = param_2;
      puVar27 = param_1;
      param_3 = param_3 - 8;
      uVar46 = *puVar27;
      uVar48 = puVar27[1];
      uVar47 = puVar27[2];
      uVar49 = puVar27[4];
      uVar37 = puVar27[6];
      uVar38 = puVar27[7];
      uVar36 = puVar27[8];
      uVar39 = puVar27[9];
      uVar35 = puVar27[10];
      uVar40 = puVar27[0xb];
      uVar41 = puVar27[0xc];
      uVar43 = puVar27[0xd];
      uVar34 = puVar27[0xe];
      uVar45 = puVar27[0xf];
      auStack_70[3] = uVar29;
      uStack_50 = uVar28;
      *(undefined8 *)(auStack_170 + lVar30 + 0xf0) = 0x4982e3;
      auVar50 = _bsaes_decrypt8(uVar47,uVar49);
      uVar42 = *puVar27;
      uVar44 = puVar27[1];
      uVar41 = uVar41 ^ puVar27[2];
      uVar43 = uVar43 ^ puVar27[3];
      uVar10 = puVar27[6];
      uVar11 = puVar27[7];
      uVar36 = uVar36 ^ puVar27[4];
      uVar39 = uVar39 ^ puVar27[5];
      uVar47 = puVar27[10];
      uVar49 = puVar27[0xb];
      uVar34 = uVar34 ^ puVar27[8];
      uVar45 = uVar45 ^ puVar27[9];
      uVar8 = puVar27[0xc];
      uVar9 = puVar27[0xd];
      uVar29 = puVar27[0xe];
      uVar28 = puVar27[0xf];
      *puVar31 = uVar46 ^ auStack_70[3];
      puVar31[1] = uVar48 ^ uStack_50;
      param_1 = puVar27 + 0x10;
      puVar31[2] = auVar50._0_8_ ^ uVar42;
      puVar31[3] = extraout_XMM0_Qb ^ uVar44;
      puVar31[4] = uVar41;
      puVar31[5] = uVar43;
      puVar31[6] = uVar36;
      puVar31[7] = uVar39;
      puVar31[8] = auVar50._8_8_ ^ uVar10;
      puVar31[9] = extraout_XMM1_Qb ^ uVar11;
      puVar31[10] = uVar34;
      puVar31[0xb] = uVar45;
      puVar31[0xc] = uVar37 ^ uVar47;
      puVar31[0xd] = uVar38 ^ uVar49;
      puVar31[0xe] = uVar35 ^ uVar8;
      puVar31[0xf] = uVar40 ^ uVar9;
      param_2 = puVar31 + 0x10;
    } while (7 < param_3);
    if (param_3 != 0) {
      uVar47 = *param_1;
      uVar49 = puVar27[0x11];
      if (param_3 < 2) {
        *(undefined8 *)(auStack_170 + lVar30 + 0xf0) = 0x498670;
        uVar37 = uVar29;
        uVar38 = uVar28;
        AES_decrypt((uchar *)param_1,(uchar *)(auStack_70 + 3),param_4);
        uVar28 = uVar49;
        uVar29 = uVar47;
        *param_2 = uVar37 ^ auStack_70[3];
        puVar31[0x11] = uVar38 ^ uStack_50;
      }
      else {
        uVar37 = puVar27[0x12];
        auStack_70[3] = uVar29;
        uStack_50 = uVar28;
        if (param_3 == 2) {
          *(undefined8 *)(auStack_170 + lVar30 + 0xf0) = 0x49863b;
          uVar36 = _bsaes_decrypt8(uVar37);
          uVar37 = *param_1;
          uVar38 = puVar27[0x11];
          uVar29 = puVar27[0x12];
          uVar28 = puVar27[0x13];
          *param_2 = uVar47 ^ auStack_70[3];
          puVar31[0x11] = uVar49 ^ uStack_50;
          puVar31[0x12] = uVar36 ^ uVar37;
          puVar31[0x13] = extraout_XMM0_Qb_05 ^ uVar38;
        }
        else {
          uVar29 = puVar27[0x14];
          if (param_3 < 4) {
            *(undefined8 *)(auStack_170 + lVar30 + 0xf0) = 0x4985eb;
            uVar35 = _bsaes_decrypt8(uVar37,uVar29);
            uVar36 = *param_1;
            uVar39 = puVar27[0x11];
            uVar37 = puVar27[0x12];
            uVar38 = puVar27[0x13];
            uVar29 = puVar27[0x14];
            uVar28 = puVar27[0x15];
            *param_2 = uVar47 ^ auStack_70[3];
            puVar31[0x11] = uVar49 ^ uStack_50;
            puVar31[0x12] = uVar35 ^ uVar36;
            puVar31[0x13] = extraout_XMM0_Qb_04 ^ uVar39;
            puVar31[0x14] = uVar41 ^ uVar37;
            puVar31[0x15] = uVar43 ^ uVar38;
          }
          else {
            uVar38 = puVar27[0x16];
            uVar35 = puVar27[0x17];
            if (param_3 == 4) {
              *(undefined8 *)(auStack_170 + lVar30 + 0xf0) = 0x49858b;
              uVar34 = _bsaes_decrypt8(uVar37,uVar29);
              uVar8 = *param_1;
              uVar9 = puVar27[0x11];
              uVar35 = puVar27[0x12];
              uVar40 = puVar27[0x13];
              uVar37 = puVar27[0x14];
              uVar38 = puVar27[0x15];
              uVar29 = puVar27[0x16];
              uVar28 = puVar27[0x17];
              *param_2 = uVar47 ^ auStack_70[3];
              puVar31[0x11] = uVar49 ^ uStack_50;
              puVar31[0x12] = uVar34 ^ uVar8;
              puVar31[0x13] = extraout_XMM0_Qb_03 ^ uVar9;
              puVar31[0x14] = uVar41 ^ uVar35;
              puVar31[0x15] = uVar43 ^ uVar40;
              puVar31[0x16] = uVar36 ^ uVar37;
              puVar31[0x17] = uVar39 ^ uVar38;
            }
            else {
              uVar36 = puVar27[0x18];
              uVar39 = puVar27[0x19];
              if (param_3 < 6) {
                *(undefined8 *)(auStack_170 + lVar30 + 0xf0) = 0x49851b;
                auVar50 = _bsaes_decrypt8(uVar37,uVar29);
                uVar8 = *param_1;
                uVar9 = puVar27[0x11];
                uVar37 = puVar27[0x12];
                uVar38 = puVar27[0x13];
                uVar35 = puVar27[0x14];
                uVar40 = puVar27[0x15];
                uVar34 = puVar27[0x16];
                uVar45 = puVar27[0x17];
                uVar29 = puVar27[0x18];
                uVar28 = puVar27[0x19];
                *param_2 = uVar47 ^ auStack_70[3];
                puVar31[0x11] = uVar49 ^ uStack_50;
                puVar31[0x12] = auVar50._0_8_ ^ uVar8;
                puVar31[0x13] = extraout_XMM0_Qb_02 ^ uVar9;
                puVar31[0x14] = uVar41 ^ uVar37;
                puVar31[0x15] = uVar43 ^ uVar38;
                puVar31[0x16] = uVar36 ^ uVar35;
                puVar31[0x17] = uVar39 ^ uVar40;
                puVar31[0x18] = auVar50._8_8_ ^ uVar34;
                puVar31[0x19] = extraout_XMM1_Qb_02 ^ uVar45;
              }
              else {
                uVar28 = puVar27[0x1a];
                if (param_3 == 6) {
                  *(undefined8 *)(auStack_170 + lVar30 + 0xf0) = 0x49849b;
                  auVar50 = _bsaes_decrypt8(uVar37,uVar29,uVar38,uVar36,uVar28);
                  uVar42 = *param_1;
                  uVar44 = puVar27[0x11];
                  uVar37 = puVar27[0x12];
                  uVar38 = puVar27[0x13];
                  uVar8 = puVar27[0x14];
                  uVar9 = puVar27[0x15];
                  uVar10 = puVar27[0x16];
                  uVar11 = puVar27[0x17];
                  uVar35 = puVar27[0x18];
                  uVar40 = puVar27[0x19];
                  uVar29 = puVar27[0x1a];
                  uVar28 = puVar27[0x1b];
                  *param_2 = uVar47 ^ auStack_70[3];
                  puVar31[0x11] = uVar49 ^ uStack_50;
                  puVar31[0x12] = auVar50._0_8_ ^ uVar42;
                  puVar31[0x13] = extraout_XMM0_Qb_01 ^ uVar44;
                  puVar31[0x14] = uVar41 ^ uVar37;
                  puVar31[0x15] = uVar43 ^ uVar38;
                  puVar31[0x16] = uVar36 ^ uVar8;
                  puVar31[0x17] = uVar39 ^ uVar9;
                  puVar31[0x18] = auVar50._8_8_ ^ uVar10;
                  puVar31[0x19] = extraout_XMM1_Qb_01 ^ uVar11;
                  puVar31[0x1a] = uVar34 ^ uVar35;
                  puVar31[0x1b] = uVar45 ^ uVar40;
                }
                else {
                  uVar42 = puVar27[0x1c];
                  uVar44 = puVar27[0x1d];
                  *(undefined8 *)(auStack_170 + lVar30 + 0xf0) = 0x498406;
                  auVar50 = _bsaes_decrypt8(uVar37,uVar29,uVar38,uVar36,uVar28);
                  uVar46 = *param_1;
                  uVar48 = puVar27[0x11];
                  uVar10 = puVar27[0x12];
                  uVar11 = puVar27[0x13];
                  uVar41 = puVar27[0x14];
                  uVar43 = puVar27[0x15];
                  uVar12 = puVar27[0x16];
                  uVar13 = puVar27[0x17];
                  uVar37 = puVar27[0x18];
                  uVar40 = puVar27[0x19];
                  uVar8 = puVar27[0x1a];
                  uVar9 = puVar27[0x1b];
                  uVar29 = puVar27[0x1c];
                  uVar28 = puVar27[0x1d];
                  *param_2 = uVar47 ^ auStack_70[3];
                  puVar31[0x11] = uVar49 ^ uStack_50;
                  puVar31[0x12] = auVar50._0_8_ ^ uVar46;
                  puVar31[0x13] = extraout_XMM0_Qb_00 ^ uVar48;
                  puVar31[0x14] = uVar42 ^ uVar10;
                  puVar31[0x15] = uVar44 ^ uVar11;
                  puVar31[0x16] = uVar36 ^ uVar41;
                  puVar31[0x17] = uVar39 ^ uVar43;
                  puVar31[0x18] = auVar50._8_8_ ^ uVar12;
                  puVar31[0x19] = extraout_XMM1_Qb_00 ^ uVar13;
                  puVar31[0x1a] = uVar34 ^ uVar37;
                  puVar31[0x1b] = uVar45 ^ uVar40;
                  puVar31[0x1c] = uVar38 ^ uVar8;
                  puVar31[0x1d] = uVar35 ^ uVar9;
                }
              }
            }
          }
        }
      }
    }
    *param_5 = uVar29;
    param_5[1] = uVar28;
    do {
      *pauVar19 = (undefined1  [16])0x0;
      pauVar19[1] = (undefined1  [16])0x0;
      pauVar19 = pauVar19 + 2;
    } while (pauVar19 < (undefined1 (*) [16])&local_78);
    return;
  }
  if (param_3 != 0) {
    bVar33 = 0;
    puVar18 = (undefined8 *)&DAT_00488d00;
    if (param_6 == 0) {
      puVar18 = &DAT_00489940;
    }
    if (((param_3 < 0x200) || ((param_3 & 0xf) != 0)) || ((OPENSSL_ia32cap_P >> 0x1c & 1) != 0)) {
      lVar30 = -(-((long)param_4 + (-0x97 - (long)(auStack_170 + 0xb0))) & 0x3c0U);
      *(undefined1 **)(auStack_170 + lVar30 + 0xc0) = &stack0xffffffffffffffc8;
      *(ulong **)(auStack_170 + lVar30 + 0xe8) = param_5;
      iVar20 = param_4->rounds;
      *(AES_KEY **)(auStack_170 + 0xb0 + lVar30) = param_4;
      *(ulong *)(auStack_170 + lVar30 + 0xb8) = (long)param_4->rd_key + (ulong)(uint)(iVar20 << 4);
      if (param_6 == 0) {
        uVar29 = param_5[1];
        *(ulong *)(auStack_170 + lVar30 + 0xf0) = *param_5;
        *(ulong *)((long)&local_78 + lVar30) = uVar29;
        while( true ) {
          uVar23 = *(uint *)((long)param_1 + 4);
          uVar21 = (uint)param_1[1];
          *(ulong **)(auStack_170 + lVar30 + 200) = param_1;
          *(ulong **)(auStack_170 + lVar30 + 0xd0) = param_2;
          *(ulong *)(auStack_170 + lVar30 + 0xd8) = param_3;
          *(undefined8 *)(auStack_170 + lVar30 + 0xa8) = 0x488c23;
          uVar17 = _x86_64_AES_decrypt_compact();
          puVar18 = *(undefined8 **)(auStack_170 + lVar30 + 200);
          puVar26 = *(uint **)(auStack_170 + lVar30 + 0xd0);
          uVar29 = *(ulong *)(auStack_170 + lVar30 + 0xd8);
          uVar17 = uVar17 ^ *(uint *)(auStack_170 + lVar30 + 0xf0);
          uVar23 = uVar23 ^ *(uint *)((long)&uStack_7c + lVar30);
          uVar21 = uVar21 ^ *(uint *)((long)&local_78 + lVar30);
          uVar16 = extraout_EDX_03 ^ *(uint *)((long)auStack_70 + lVar30 + -4);
          uVar6 = *puVar18;
          uVar7 = puVar18[1];
          param_3 = uVar29 - 0x10;
          if (uVar29 < 0x10) break;
          if (param_3 == 0) {
            puVar18 = *(undefined8 **)(auStack_170 + lVar30 + 0xe8);
            *puVar18 = uVar6;
            puVar18[1] = uVar7;
            *puVar26 = uVar17;
            puVar26[1] = uVar23;
            puVar26[2] = uVar21;
            puVar26[3] = uVar16;
            return;
          }
          *(undefined8 *)(auStack_170 + lVar30 + 0xf0) = uVar6;
          *(undefined8 *)((long)&local_78 + lVar30) = uVar7;
          *puVar26 = uVar17;
          puVar26[1] = uVar23;
          puVar26[2] = uVar21;
          puVar26[3] = uVar16;
          param_1 = puVar18 + 2;
          param_2 = (ulong *)(puVar26 + 4);
        }
        puVar18 = *(undefined8 **)(auStack_170 + lVar30 + 0xe8);
        *puVar18 = uVar6;
        puVar18[1] = uVar7;
        *(uint *)(auStack_170 + lVar30 + 0xf0) = uVar17;
        *(uint *)((long)&uStack_7c + lVar30) = uVar23;
        *(uint *)((long)&local_78 + lVar30) = uVar21;
        *(uint *)((long)auStack_70 + lVar30 + -4) = uVar16;
        puVar24 = auStack_170 + lVar30 + 0xf0;
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          *(undefined1 *)puVar26 = *puVar24;
          puVar24 = puVar24 + (ulong)bVar33 * -2 + 1;
          puVar26 = (uint *)((long)puVar26 + (ulong)bVar33 * -2 + 1);
        }
      }
      else {
        uVar23 = *(uint *)((long)param_5 + 4);
        uVar28 = (ulong)(uint)param_5[1];
        puVar27 = param_1;
        uVar29 = param_3;
        puVar31 = param_2;
        if ((param_3 & 0xfffffffffffffff0) == 0) goto code_r0x00488baf;
        while( true ) {
          do {
            uVar23 = uVar23 ^ *(uint *)((long)puVar27 + 4);
            uVar28 = (ulong)((uint)uVar28 ^ (uint)puVar27[1]);
            *(ulong **)(auStack_170 + lVar30 + 200) = puVar27;
            *(ulong **)(auStack_170 + lVar30 + 0xd0) = param_2;
            *(ulong *)(auStack_170 + lVar30 + 0xd8) = param_3;
            *(undefined8 *)(auStack_170 + lVar30 + 0xa8) = 0x488b4b;
            uVar14 = _x86_64_AES_encrypt_compact();
            lVar22 = *(long *)(auStack_170 + lVar30 + 200);
            puVar4 = *(undefined4 **)(auStack_170 + lVar30 + 0xd0);
            lVar3 = *(long *)(auStack_170 + lVar30 + 0xd8);
            *puVar4 = uVar14;
            puVar4[1] = uVar23;
            puVar4[2] = (int)uVar28;
            puVar4[3] = extraout_EDX_02;
            param_1 = (ulong *)(lVar22 + 0x10);
            param_2 = (ulong *)(puVar4 + 4);
            param_3 = lVar3 - 0x10;
            puVar27 = param_1;
          } while ((param_3 & 0xfffffffffffffff0) != 0);
          uVar29 = param_3;
          puVar31 = param_2;
          if ((param_3 & 0xf) == 0) break;
code_r0x00488baf:
          for (; puVar27 = puVar31, param_3 != 0; param_3 = param_3 - 1) {
            *(uchar *)param_2 = (uchar)*param_1;
            param_1 = (ulong *)((long)param_1 + (ulong)bVar33 * -2 + 1);
            param_2 = (ulong *)((long)param_2 + (ulong)bVar33 * -2 + 1);
            puVar31 = puVar27;
          }
          for (lVar22 = 0x10 - uVar29; lVar22 != 0; lVar22 = lVar22 + -1) {
            *(uchar *)param_2 = '\0';
            param_2 = (ulong *)((long)param_2 + (ulong)bVar33 * -2 + 1);
          }
          param_3 = 0x10;
          param_2 = puVar27;
        }
        puVar4 = *(undefined4 **)(auStack_170 + lVar30 + 0xe8);
        *puVar4 = uVar14;
        puVar4[1] = uVar23;
        puVar4[2] = (int)uVar28;
        puVar4[3] = extraout_EDX_02;
      }
    }
    else {
      uVar29 = (ulong)(alStack_1a8 + 4) & 0xfc0;
      if (uVar29 < ((ulong)(puVar18 + 0x120) & 0xfff)) {
        lVar30 = (uVar29 - ((ulong)puVar18 & 0xfff) & 0xfff) + 0x140;
      }
      else {
        lVar30 = uVar29 - ((ulong)(puVar18 + 0x120) & 0xfff);
      }
      lVar30 = -lVar30;
      *(undefined1 **)(auStack_1b0 + lVar30) = &stack0xffffffffffffffc8;
      *(ulong **)((long)alStack_1a8 + lVar30) = param_1;
      *(ulong **)((long)alStack_1a8 + lVar30 + 8) = param_2;
      *(ulong *)((long)alStack_1a8 + lVar30 + 0x10) = param_3;
      *(AES_KEY **)((long)alStack_1a8 + lVar30 + 0x18) = param_4;
      *(ulong **)((long)alStack_1a8 + lVar30 + 0x20) = param_5;
      *(undefined4 *)(auStack_170 + lVar30 + 0xf0) = 0;
      iVar20 = param_4->rounds;
      uVar29 = (long)param_4 - (long)puVar18 & 0xfff;
      if ((uVar29 < 0x900) || (pAVar32 = param_4, 0xf07 < uVar29)) {
        pAVar32 = (AES_KEY *)(auStack_170 + lVar30);
        piVar25 = (int *)(auStack_170 + lVar30);
        for (lVar22 = 0x1e; lVar22 != 0; lVar22 = lVar22 + -1) {
          *(undefined8 *)piVar25 = *(undefined8 *)param_4->rd_key;
          param_4 = (AES_KEY *)(param_4->rd_key + 2);
          piVar25 = piVar25 + 2;
        }
        *piVar25 = iVar20;
      }
      *(AES_KEY **)((long)alStack_1c8 + lVar30 + 8) = pAVar32;
      iVar20 = 0x12;
      do {
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
      if (param_6 == 0) {
        if (param_2 == param_1) {
          uVar29 = param_5[1];
          *(ulong *)((long)&uStack_180 + lVar30) = *param_5;
          *(ulong *)((long)&uStack_178 + lVar30) = uVar29;
          while( true ) {
            uVar23 = *(uint *)((long)param_1 + 4);
            uVar21 = (uint)param_1[1];
            *(ulong **)((long)alStack_1a8 + lVar30) = param_1;
            *(undefined8 *)((long)alStack_1c8 + lVar30) = 0x488a01;
            uVar16 = _x86_64_AES_decrypt();
            puVar18 = *(undefined8 **)((long)alStack_1a8 + lVar30);
            uVar16 = uVar16 ^ *(uint *)((long)&uStack_180 + lVar30);
            uVar23 = uVar23 ^ *(uint *)((long)&uStack_180 + lVar30 + 4);
            uVar21 = uVar21 ^ *(uint *)((long)&uStack_178 + lVar30);
            uVar17 = *(uint *)(auStack_170 + lVar30 + -4);
            uVar6 = puVar18[1];
            lVar22 = *(long *)((long)alStack_1a8 + lVar30 + 0x10) + -0x10;
            if (lVar22 == 0) break;
            *(undefined8 *)((long)&uStack_180 + lVar30) = *puVar18;
            *(undefined8 *)((long)&uStack_178 + lVar30) = uVar6;
            *(uint *)param_2 = uVar16;
            *(uint *)((long)param_2 + 4) = uVar23;
            *(uint *)(param_2 + 1) = uVar21;
            *(uint *)((long)param_2 + 0xc) = extraout_EDX_01 ^ uVar17;
            param_1 = puVar18 + 2;
            param_2 = param_2 + 2;
            *(long *)((long)alStack_1a8 + lVar30 + 0x10) = lVar22;
          }
          puVar5 = *(undefined8 **)((long)alStack_1a8 + lVar30 + 0x20);
          *puVar5 = *puVar18;
          puVar5[1] = uVar6;
          *(uint *)param_2 = uVar16;
          *(uint *)((long)param_2 + 4) = uVar23;
          *(uint *)(param_2 + 1) = uVar21;
          *(uint *)((long)param_2 + 0xc) = extraout_EDX_01 ^ uVar17;
        }
        else {
          *(ulong **)((long)&uStack_180 + lVar30) = param_5;
          do {
            uVar23 = *(uint *)((long)param_1 + 4);
            uVar21 = (uint)param_1[1];
            *(ulong **)((long)alStack_1a8 + lVar30) = param_1;
            *(undefined8 *)((long)alStack_1c8 + lVar30) = 0x48896d;
            uVar15 = _x86_64_AES_decrypt();
            puVar26 = *(uint **)((long)&uStack_180 + lVar30);
            puVar18 = *(undefined8 **)((long)alStack_1a8 + lVar30);
            uVar17 = *puVar26;
            uVar16 = puVar26[1];
            uVar1 = puVar26[2];
            uVar2 = puVar26[3];
            lVar22 = *(long *)((long)alStack_1a8 + lVar30 + 0x10) + -0x10;
            *(long *)((long)alStack_1a8 + lVar30 + 0x10) = lVar22;
            *(undefined8 **)((long)&uStack_180 + lVar30) = puVar18;
            *(uint *)param_2 = uVar15 ^ uVar17;
            *(uint *)((long)param_2 + 4) = uVar23 ^ uVar16;
            *(uint *)(param_2 + 1) = uVar21 ^ uVar1;
            *(uint *)((long)param_2 + 0xc) = extraout_EDX_00 ^ uVar2;
            param_1 = puVar18 + 2;
            param_2 = param_2 + 2;
          } while (lVar22 != 0);
          puVar5 = *(undefined8 **)((long)alStack_1a8 + lVar30 + 0x20);
          uVar6 = puVar18[1];
          *puVar5 = *puVar18;
          puVar5[1] = uVar6;
        }
      }
      else {
        uVar23 = *(uint *)((long)param_5 + 4);
        uVar29 = (ulong)(uint)param_5[1];
        do {
          uVar23 = uVar23 ^ *(uint *)((long)param_1 + 4);
          uVar29 = (ulong)((uint)uVar29 ^ (uint)param_1[1]);
          *(ulong **)((long)alStack_1a8 + lVar30) = param_1;
          *(undefined8 *)((long)alStack_1c8 + lVar30) = 0x4888ed;
          uVar14 = _x86_64_AES_encrypt();
          lVar22 = *(long *)((long)alStack_1a8 + lVar30);
          lVar3 = *(long *)((long)alStack_1a8 + lVar30 + 0x10);
          *(undefined4 *)param_2 = uVar14;
          *(uint *)((long)param_2 + 4) = uVar23;
          *(int *)(param_2 + 1) = (int)uVar29;
          *(undefined4 *)((long)param_2 + 0xc) = extraout_EDX;
          param_1 = (ulong *)(lVar22 + 0x10);
          param_2 = param_2 + 2;
          uVar28 = lVar3 - 0x10;
          *(ulong *)((long)alStack_1a8 + lVar30 + 0x10) = uVar28;
        } while ((uVar28 & 0xfffffffffffffff0) != 0);
        puVar4 = *(undefined4 **)((long)alStack_1a8 + lVar30 + 0x20);
        *puVar4 = uVar14;
        puVar4[1] = uVar23;
        puVar4[2] = (int)uVar29;
        puVar4[3] = extraout_EDX;
      }
      if (*(int *)(auStack_170 + lVar30 + 0xf0) != 0) {
        puVar18 = (undefined8 *)(auStack_170 + lVar30);
        for (lVar22 = 0x1e; lVar22 != 0; lVar22 = lVar22 + -1) {
          *puVar18 = 0;
          puVar18 = puVar18 + (ulong)bVar33 * -2 + 1;
        }
      }
    }
  }
  return;
}

