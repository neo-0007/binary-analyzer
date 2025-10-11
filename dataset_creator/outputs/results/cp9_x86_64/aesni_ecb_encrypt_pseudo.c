
undefined8
aesni_ecb_encrypt(uint *param_1,undefined1 (*param_2) [16],ulong param_3,uint *param_4,int param_5)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar10;
  undefined8 uVar11;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar9;
  uint uVar12;
  undefined1 auVar8 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  param_3 = param_3 & 0xfffffffffffffff0;
  if (param_3 != 0) {
    uVar1 = param_4[0x3c];
    uVar4 = *param_4;
    uVar3 = (ulong)uVar1;
    if (param_5 == 0) {
      if (0x7f < param_3) {
        uVar5 = *(undefined8 *)param_1;
        uVar11 = *(undefined8 *)(param_1 + 2);
        uVar13 = *(undefined8 *)(param_1 + 4);
        uVar14 = *(undefined8 *)(param_1 + 6);
        uVar15 = *(undefined8 *)(param_1 + 8);
        uVar16 = *(undefined8 *)(param_1 + 10);
        uVar17 = *(undefined8 *)(param_1 + 0xc);
        uVar18 = *(undefined8 *)(param_1 + 0xe);
        uVar19 = *(undefined8 *)(param_1 + 0x10);
        uVar20 = *(undefined8 *)(param_1 + 0x12);
        uVar21 = *(undefined8 *)(param_1 + 0x14);
        uVar22 = *(undefined8 *)(param_1 + 0x16);
        uVar23 = *(undefined8 *)(param_1 + 0x18);
        uVar24 = *(undefined8 *)(param_1 + 0x1a);
        uVar25 = *(undefined8 *)(param_1 + 0x1c);
        uVar26 = *(undefined8 *)(param_1 + 0x1e);
        param_1 = param_1 + 0x20;
        while( true ) {
          _aesni_decrypt8(uVar4,param_1,param_2,param_3 - 0x80,param_4);
          uVar4 = *param_4;
          param_3 = extraout_RDX_00;
          if (extraout_RDX_00 < 0x80) break;
          *(undefined8 *)*param_2 = uVar5;
          *(undefined8 *)(*param_2 + 8) = uVar11;
          uVar5 = *(undefined8 *)param_1;
          uVar11 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)param_2[1] = uVar13;
          *(undefined8 *)(param_2[1] + 8) = uVar14;
          uVar13 = *(undefined8 *)(param_1 + 4);
          uVar14 = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)param_2[2] = uVar15;
          *(undefined8 *)(param_2[2] + 8) = uVar16;
          uVar15 = *(undefined8 *)(param_1 + 8);
          uVar16 = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)param_2[3] = uVar17;
          *(undefined8 *)(param_2[3] + 8) = uVar18;
          uVar17 = *(undefined8 *)(param_1 + 0xc);
          uVar18 = *(undefined8 *)(param_1 + 0xe);
          *(undefined8 *)param_2[4] = uVar19;
          *(undefined8 *)(param_2[4] + 8) = uVar20;
          uVar19 = *(undefined8 *)(param_1 + 0x10);
          uVar20 = *(undefined8 *)(param_1 + 0x12);
          *(undefined8 *)param_2[5] = uVar21;
          *(undefined8 *)(param_2[5] + 8) = uVar22;
          uVar21 = *(undefined8 *)(param_1 + 0x14);
          uVar22 = *(undefined8 *)(param_1 + 0x16);
          *(undefined8 *)param_2[6] = uVar23;
          *(undefined8 *)(param_2[6] + 8) = uVar24;
          uVar23 = *(undefined8 *)(param_1 + 0x18);
          uVar24 = *(undefined8 *)(param_1 + 0x1a);
          *(undefined8 *)param_2[7] = uVar25;
          *(undefined8 *)(param_2[7] + 8) = uVar26;
          param_2 = param_2 + 8;
          uVar25 = *(undefined8 *)(param_1 + 0x1c);
          uVar26 = *(undefined8 *)(param_1 + 0x1e);
          param_1 = param_1 + 0x20;
        }
        *(undefined8 *)*param_2 = uVar5;
        *(undefined8 *)(*param_2 + 8) = uVar11;
        *(undefined8 *)param_2[1] = uVar13;
        *(undefined8 *)(param_2[1] + 8) = uVar14;
        uVar1 = (uint)uVar3;
        *(undefined8 *)param_2[2] = uVar15;
        *(undefined8 *)(param_2[2] + 8) = uVar16;
        *(undefined8 *)param_2[3] = uVar17;
        *(undefined8 *)(param_2[3] + 8) = uVar18;
        *(undefined8 *)param_2[4] = uVar19;
        *(undefined8 *)(param_2[4] + 8) = uVar20;
        *(undefined8 *)param_2[5] = uVar21;
        *(undefined8 *)(param_2[5] + 8) = uVar22;
        *(undefined8 *)param_2[6] = uVar23;
        *(undefined8 *)(param_2[6] + 8) = uVar24;
        *(undefined8 *)param_2[7] = uVar25;
        *(undefined8 *)(param_2[7] + 8) = uVar26;
        param_2 = param_2 + 8;
        if (extraout_RDX_00 == 0) {
          return 0;
        }
      }
      uVar4 = *param_1;
      uVar9 = param_1[1];
      uVar10 = param_1[2];
      uVar12 = param_1[3];
      if (param_3 < 0x20) {
        auVar7 = *(undefined1 (*) [16])(param_4 + 4);
        pauVar2 = (undefined1 (*) [16])(param_4 + 8);
        auVar8._0_4_ = uVar4 ^ *param_4;
        auVar8._4_4_ = uVar9 ^ param_4[1];
        auVar8._8_4_ = uVar10 ^ param_4[2];
        auVar8._12_4_ = uVar12 ^ param_4[3];
        do {
          auVar8 = aesdec(auVar8,auVar7);
          uVar1 = uVar1 - 1;
          auVar7 = *pauVar2;
          pauVar2 = pauVar2 + 1;
        } while (uVar1 != 0);
        auVar7 = aesdeclast(auVar8,auVar7);
        *param_2 = auVar7;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 4);
        uVar11 = *(undefined8 *)(param_1 + 6);
        if (param_3 == 0x20) {
          _aesni_decrypt2();
          *(uint *)*param_2 = uVar4;
          *(uint *)(*param_2 + 4) = uVar9;
          *(uint *)(*param_2 + 8) = uVar10;
          *(uint *)(*param_2 + 0xc) = uVar12;
          *(undefined8 *)param_2[1] = uVar5;
          *(undefined8 *)(param_2[1] + 8) = uVar11;
        }
        else {
          uVar13 = *(undefined8 *)(param_1 + 8);
          uVar14 = *(undefined8 *)(param_1 + 10);
          if (param_3 < 0x40) {
            _aesni_decrypt3();
            *(uint *)*param_2 = uVar4;
            *(uint *)(*param_2 + 4) = uVar9;
            *(uint *)(*param_2 + 8) = uVar10;
            *(uint *)(*param_2 + 0xc) = uVar12;
            *(undefined8 *)param_2[1] = uVar5;
            *(undefined8 *)(param_2[1] + 8) = uVar11;
            *(undefined8 *)param_2[2] = uVar13;
            *(undefined8 *)(param_2[2] + 8) = uVar14;
          }
          else {
            uVar15 = *(undefined8 *)(param_1 + 0xc);
            uVar16 = *(undefined8 *)(param_1 + 0xe);
            if (param_3 == 0x40) {
              _aesni_decrypt4();
              *(uint *)*param_2 = uVar4;
              *(uint *)(*param_2 + 4) = uVar9;
              *(uint *)(*param_2 + 8) = uVar10;
              *(uint *)(*param_2 + 0xc) = uVar12;
              *(undefined8 *)param_2[1] = uVar5;
              *(undefined8 *)(param_2[1] + 8) = uVar11;
              *(undefined8 *)param_2[2] = uVar13;
              *(undefined8 *)(param_2[2] + 8) = uVar14;
              *(undefined8 *)param_2[3] = uVar15;
              *(undefined8 *)(param_2[3] + 8) = uVar16;
            }
            else {
              uVar17 = *(undefined8 *)(param_1 + 0x10);
              uVar18 = *(undefined8 *)(param_1 + 0x12);
              if (param_3 < 0x60) {
                _aesni_decrypt6();
                *(uint *)*param_2 = uVar4;
                *(uint *)(*param_2 + 4) = uVar9;
                *(uint *)(*param_2 + 8) = uVar10;
                *(uint *)(*param_2 + 0xc) = uVar12;
                *(undefined8 *)param_2[1] = uVar5;
                *(undefined8 *)(param_2[1] + 8) = uVar11;
                *(undefined8 *)param_2[2] = uVar13;
                *(undefined8 *)(param_2[2] + 8) = uVar14;
                *(undefined8 *)param_2[3] = uVar15;
                *(undefined8 *)(param_2[3] + 8) = uVar16;
                *(undefined8 *)param_2[4] = uVar17;
                *(undefined8 *)(param_2[4] + 8) = uVar18;
              }
              else {
                uVar19 = *(undefined8 *)(param_1 + 0x14);
                uVar20 = *(undefined8 *)(param_1 + 0x16);
                if (param_3 == 0x60) {
                  _aesni_decrypt6();
                  *(uint *)*param_2 = uVar4;
                  *(uint *)(*param_2 + 4) = uVar9;
                  *(uint *)(*param_2 + 8) = uVar10;
                  *(uint *)(*param_2 + 0xc) = uVar12;
                  *(undefined8 *)param_2[1] = uVar5;
                  *(undefined8 *)(param_2[1] + 8) = uVar11;
                  *(undefined8 *)param_2[2] = uVar13;
                  *(undefined8 *)(param_2[2] + 8) = uVar14;
                  *(undefined8 *)param_2[3] = uVar15;
                  *(undefined8 *)(param_2[3] + 8) = uVar16;
                  *(undefined8 *)param_2[4] = uVar17;
                  *(undefined8 *)(param_2[4] + 8) = uVar18;
                  *(undefined8 *)param_2[5] = uVar19;
                  *(undefined8 *)(param_2[5] + 8) = uVar20;
                }
                else {
                  uVar21 = *(undefined8 *)(param_1 + 0x18);
                  uVar22 = *(undefined8 *)(param_1 + 0x1a);
                  _aesni_decrypt8(*param_4);
                  *(uint *)*param_2 = uVar4;
                  *(uint *)(*param_2 + 4) = uVar9;
                  *(uint *)(*param_2 + 8) = uVar10;
                  *(uint *)(*param_2 + 0xc) = uVar12;
                  *(undefined8 *)param_2[1] = uVar5;
                  *(undefined8 *)(param_2[1] + 8) = uVar11;
                  *(undefined8 *)param_2[2] = uVar13;
                  *(undefined8 *)(param_2[2] + 8) = uVar14;
                  *(undefined8 *)param_2[3] = uVar15;
                  *(undefined8 *)(param_2[3] + 8) = uVar16;
                  *(undefined8 *)param_2[4] = uVar17;
                  *(undefined8 *)(param_2[4] + 8) = uVar18;
                  *(undefined8 *)param_2[5] = uVar19;
                  *(undefined8 *)(param_2[5] + 8) = uVar20;
                  *(undefined8 *)param_2[6] = uVar21;
                  *(undefined8 *)(param_2[6] + 8) = uVar22;
                }
              }
            }
          }
        }
      }
    }
    else {
      if (0x7f < param_3) {
        uVar5 = *(undefined8 *)param_1;
        uVar11 = *(undefined8 *)(param_1 + 2);
        uVar13 = *(undefined8 *)(param_1 + 4);
        uVar14 = *(undefined8 *)(param_1 + 6);
        uVar15 = *(undefined8 *)(param_1 + 8);
        uVar16 = *(undefined8 *)(param_1 + 10);
        uVar17 = *(undefined8 *)(param_1 + 0xc);
        uVar18 = *(undefined8 *)(param_1 + 0xe);
        uVar19 = *(undefined8 *)(param_1 + 0x10);
        uVar20 = *(undefined8 *)(param_1 + 0x12);
        uVar21 = *(undefined8 *)(param_1 + 0x14);
        uVar22 = *(undefined8 *)(param_1 + 0x16);
        uVar23 = *(undefined8 *)(param_1 + 0x18);
        uVar24 = *(undefined8 *)(param_1 + 0x1a);
        uVar25 = *(undefined8 *)(param_1 + 0x1c);
        uVar26 = *(undefined8 *)(param_1 + 0x1e);
        param_1 = param_1 + 0x20;
        while (_aesni_encrypt8(param_1,param_2,param_3 - 0x80,param_4), param_3 = extraout_RDX,
              0x7f < extraout_RDX) {
          *(undefined8 *)*param_2 = uVar5;
          *(undefined8 *)(*param_2 + 8) = uVar11;
          uVar5 = *(undefined8 *)param_1;
          uVar11 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)param_2[1] = uVar13;
          *(undefined8 *)(param_2[1] + 8) = uVar14;
          uVar13 = *(undefined8 *)(param_1 + 4);
          uVar14 = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)param_2[2] = uVar15;
          *(undefined8 *)(param_2[2] + 8) = uVar16;
          uVar15 = *(undefined8 *)(param_1 + 8);
          uVar16 = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)param_2[3] = uVar17;
          *(undefined8 *)(param_2[3] + 8) = uVar18;
          uVar17 = *(undefined8 *)(param_1 + 0xc);
          uVar18 = *(undefined8 *)(param_1 + 0xe);
          *(undefined8 *)param_2[4] = uVar19;
          *(undefined8 *)(param_2[4] + 8) = uVar20;
          uVar19 = *(undefined8 *)(param_1 + 0x10);
          uVar20 = *(undefined8 *)(param_1 + 0x12);
          *(undefined8 *)param_2[5] = uVar21;
          *(undefined8 *)(param_2[5] + 8) = uVar22;
          uVar21 = *(undefined8 *)(param_1 + 0x14);
          uVar22 = *(undefined8 *)(param_1 + 0x16);
          *(undefined8 *)param_2[6] = uVar23;
          *(undefined8 *)(param_2[6] + 8) = uVar24;
          uVar23 = *(undefined8 *)(param_1 + 0x18);
          uVar24 = *(undefined8 *)(param_1 + 0x1a);
          *(undefined8 *)param_2[7] = uVar25;
          *(undefined8 *)(param_2[7] + 8) = uVar26;
          param_2 = param_2 + 8;
          uVar25 = *(undefined8 *)(param_1 + 0x1c);
          uVar26 = *(undefined8 *)(param_1 + 0x1e);
          param_1 = param_1 + 0x20;
        }
        *(undefined8 *)*param_2 = uVar5;
        *(undefined8 *)(*param_2 + 8) = uVar11;
        *(undefined8 *)param_2[1] = uVar13;
        *(undefined8 *)(param_2[1] + 8) = uVar14;
        uVar1 = (uint)uVar3;
        *(undefined8 *)param_2[2] = uVar15;
        *(undefined8 *)(param_2[2] + 8) = uVar16;
        *(undefined8 *)param_2[3] = uVar17;
        *(undefined8 *)(param_2[3] + 8) = uVar18;
        *(undefined8 *)param_2[4] = uVar19;
        *(undefined8 *)(param_2[4] + 8) = uVar20;
        *(undefined8 *)param_2[5] = uVar21;
        *(undefined8 *)(param_2[5] + 8) = uVar22;
        *(undefined8 *)param_2[6] = uVar23;
        *(undefined8 *)(param_2[6] + 8) = uVar24;
        *(undefined8 *)param_2[7] = uVar25;
        *(undefined8 *)(param_2[7] + 8) = uVar26;
        param_2 = param_2 + 8;
        if (extraout_RDX == 0) {
          return 0;
        }
      }
      uVar4 = *param_1;
      uVar9 = param_1[1];
      uVar10 = param_1[2];
      uVar12 = param_1[3];
      if (param_3 < 0x20) {
        auVar7 = *(undefined1 (*) [16])(param_4 + 4);
        pauVar2 = (undefined1 (*) [16])(param_4 + 8);
        auVar6._0_4_ = uVar4 ^ *param_4;
        auVar6._4_4_ = uVar9 ^ param_4[1];
        auVar6._8_4_ = uVar10 ^ param_4[2];
        auVar6._12_4_ = uVar12 ^ param_4[3];
        do {
          auVar6 = aesenc(auVar6,auVar7);
          uVar1 = uVar1 - 1;
          auVar7 = *pauVar2;
          pauVar2 = pauVar2 + 1;
        } while (uVar1 != 0);
        auVar7 = aesenclast(auVar6,auVar7);
        *param_2 = auVar7;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 4);
        uVar11 = *(undefined8 *)(param_1 + 6);
        if (param_3 == 0x20) {
          _aesni_encrypt2();
          *(uint *)*param_2 = uVar4;
          *(uint *)(*param_2 + 4) = uVar9;
          *(uint *)(*param_2 + 8) = uVar10;
          *(uint *)(*param_2 + 0xc) = uVar12;
          *(undefined8 *)param_2[1] = uVar5;
          *(undefined8 *)(param_2[1] + 8) = uVar11;
        }
        else {
          uVar13 = *(undefined8 *)(param_1 + 8);
          uVar14 = *(undefined8 *)(param_1 + 10);
          if (param_3 < 0x40) {
            _aesni_encrypt3();
            *(uint *)*param_2 = uVar4;
            *(uint *)(*param_2 + 4) = uVar9;
            *(uint *)(*param_2 + 8) = uVar10;
            *(uint *)(*param_2 + 0xc) = uVar12;
            *(undefined8 *)param_2[1] = uVar5;
            *(undefined8 *)(param_2[1] + 8) = uVar11;
            *(undefined8 *)param_2[2] = uVar13;
            *(undefined8 *)(param_2[2] + 8) = uVar14;
          }
          else {
            uVar15 = *(undefined8 *)(param_1 + 0xc);
            uVar16 = *(undefined8 *)(param_1 + 0xe);
            if (param_3 == 0x40) {
              _aesni_encrypt4();
              *(uint *)*param_2 = uVar4;
              *(uint *)(*param_2 + 4) = uVar9;
              *(uint *)(*param_2 + 8) = uVar10;
              *(uint *)(*param_2 + 0xc) = uVar12;
              *(undefined8 *)param_2[1] = uVar5;
              *(undefined8 *)(param_2[1] + 8) = uVar11;
              *(undefined8 *)param_2[2] = uVar13;
              *(undefined8 *)(param_2[2] + 8) = uVar14;
              *(undefined8 *)param_2[3] = uVar15;
              *(undefined8 *)(param_2[3] + 8) = uVar16;
            }
            else {
              uVar17 = *(undefined8 *)(param_1 + 0x10);
              uVar18 = *(undefined8 *)(param_1 + 0x12);
              if (param_3 < 0x60) {
                _aesni_encrypt6();
                *(uint *)*param_2 = uVar4;
                *(uint *)(*param_2 + 4) = uVar9;
                *(uint *)(*param_2 + 8) = uVar10;
                *(uint *)(*param_2 + 0xc) = uVar12;
                *(undefined8 *)param_2[1] = uVar5;
                *(undefined8 *)(param_2[1] + 8) = uVar11;
                *(undefined8 *)param_2[2] = uVar13;
                *(undefined8 *)(param_2[2] + 8) = uVar14;
                *(undefined8 *)param_2[3] = uVar15;
                *(undefined8 *)(param_2[3] + 8) = uVar16;
                *(undefined8 *)param_2[4] = uVar17;
                *(undefined8 *)(param_2[4] + 8) = uVar18;
              }
              else {
                uVar19 = *(undefined8 *)(param_1 + 0x14);
                uVar20 = *(undefined8 *)(param_1 + 0x16);
                if (param_3 == 0x60) {
                  _aesni_encrypt6();
                  *(uint *)*param_2 = uVar4;
                  *(uint *)(*param_2 + 4) = uVar9;
                  *(uint *)(*param_2 + 8) = uVar10;
                  *(uint *)(*param_2 + 0xc) = uVar12;
                  *(undefined8 *)param_2[1] = uVar5;
                  *(undefined8 *)(param_2[1] + 8) = uVar11;
                  *(undefined8 *)param_2[2] = uVar13;
                  *(undefined8 *)(param_2[2] + 8) = uVar14;
                  *(undefined8 *)param_2[3] = uVar15;
                  *(undefined8 *)(param_2[3] + 8) = uVar16;
                  *(undefined8 *)param_2[4] = uVar17;
                  *(undefined8 *)(param_2[4] + 8) = uVar18;
                  *(undefined8 *)param_2[5] = uVar19;
                  *(undefined8 *)(param_2[5] + 8) = uVar20;
                }
                else {
                  uVar21 = *(undefined8 *)(param_1 + 0x18);
                  uVar22 = *(undefined8 *)(param_1 + 0x1a);
                  _aesni_encrypt8();
                  *(uint *)*param_2 = uVar4;
                  *(uint *)(*param_2 + 4) = uVar9;
                  *(uint *)(*param_2 + 8) = uVar10;
                  *(uint *)(*param_2 + 0xc) = uVar12;
                  *(undefined8 *)param_2[1] = uVar5;
                  *(undefined8 *)(param_2[1] + 8) = uVar11;
                  *(undefined8 *)param_2[2] = uVar13;
                  *(undefined8 *)(param_2[2] + 8) = uVar14;
                  *(undefined8 *)param_2[3] = uVar15;
                  *(undefined8 *)(param_2[3] + 8) = uVar16;
                  *(undefined8 *)param_2[4] = uVar17;
                  *(undefined8 *)(param_2[4] + 8) = uVar18;
                  *(undefined8 *)param_2[5] = uVar19;
                  *(undefined8 *)(param_2[5] + 8) = uVar20;
                  *(undefined8 *)param_2[6] = uVar21;
                  *(undefined8 *)(param_2[6] + 8) = uVar22;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

