
undefined1  [16] FUN_0074a1f0(char *param_1,char *param_2,ulong param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
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
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  
  if (param_3 < 0x30) {
    param_2 = param_2 + param_3;
    pcVar15 = param_1 + param_3;
    goto LAB_0074b4c0;
  }
  auVar37[0] = -(*param_1 == *param_2);
  auVar37[1] = -(param_1[1] == param_2[1]);
  auVar37[2] = -(param_1[2] == param_2[2]);
  auVar37[3] = -(param_1[3] == param_2[3]);
  auVar37[4] = -(param_1[4] == param_2[4]);
  auVar37[5] = -(param_1[5] == param_2[5]);
  auVar37[6] = -(param_1[6] == param_2[6]);
  auVar37[7] = -(param_1[7] == param_2[7]);
  auVar37[8] = -(param_1[8] == param_2[8]);
  auVar37[9] = -(param_1[9] == param_2[9]);
  auVar37[10] = -(param_1[10] == param_2[10]);
  auVar37[0xb] = -(param_1[0xb] == param_2[0xb]);
  auVar37[0xc] = -(param_1[0xc] == param_2[0xc]);
  auVar37[0xd] = -(param_1[0xd] == param_2[0xd]);
  auVar37[0xe] = -(param_1[0xe] == param_2[0xe]);
  auVar37[0xf] = -(param_1[0xf] == param_2[0xf]);
  pcVar15 = param_1 + 0x10;
  param_2 = param_2 + 0x10;
  uVar12 = (ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar37[0xf] >> 7) << 0xf) - 0xffff;
  param_1 = (char *)(ulong)uVar12;
  if (uVar12 == 0) {
    uVar11 = (ulong)((uint)pcVar15 & 0xf);
    pcVar15 = (char *)((ulong)pcVar15 ^ uVar11);
    param_2 = param_2 + -uVar11;
    uVar11 = param_3 + uVar11;
    uVar8 = (ulong)param_2 & 0xf;
    uVar12 = (uint)param_2 & 0xf;
    if (((ulong)param_2 & 0xf) == 0) {
LAB_0074a2e0:
      param_3 = uVar11 - 0x30;
      if (uVar11 < 0x50) {
        uVar8 = 0;
        auVar34[0] = -(*param_2 == *pcVar15);
        auVar34[1] = -(param_2[1] == pcVar15[1]);
        auVar34[2] = -(param_2[2] == pcVar15[2]);
        auVar34[3] = -(param_2[3] == pcVar15[3]);
        auVar34[4] = -(param_2[4] == pcVar15[4]);
        auVar34[5] = -(param_2[5] == pcVar15[5]);
        auVar34[6] = -(param_2[6] == pcVar15[6]);
        auVar34[7] = -(param_2[7] == pcVar15[7]);
        auVar34[8] = -(param_2[8] == pcVar15[8]);
        auVar34[9] = -(param_2[9] == pcVar15[9]);
        auVar34[10] = -(param_2[10] == pcVar15[10]);
        auVar34[0xb] = -(param_2[0xb] == pcVar15[0xb]);
        auVar34[0xc] = -(param_2[0xc] == pcVar15[0xc]);
        auVar34[0xd] = -(param_2[0xd] == pcVar15[0xd]);
        auVar34[0xe] = -(param_2[0xe] == pcVar15[0xe]);
        auVar34[0xf] = -(param_2[0xf] == pcVar15[0xf]);
        auVar35[0] = -(param_2[0x10] == pcVar15[0x10]);
        auVar35[1] = -(param_2[0x11] == pcVar15[0x11]);
        auVar35[2] = -(param_2[0x12] == pcVar15[0x12]);
        auVar35[3] = -(param_2[0x13] == pcVar15[0x13]);
        auVar35[4] = -(param_2[0x14] == pcVar15[0x14]);
        auVar35[5] = -(param_2[0x15] == pcVar15[0x15]);
        auVar35[6] = -(param_2[0x16] == pcVar15[0x16]);
        auVar35[7] = -(param_2[0x17] == pcVar15[0x17]);
        auVar35[8] = -(param_2[0x18] == pcVar15[0x18]);
        auVar35[9] = -(param_2[0x19] == pcVar15[0x19]);
        auVar35[10] = -(param_2[0x1a] == pcVar15[0x1a]);
        auVar35[0xb] = -(param_2[0x1b] == pcVar15[0x1b]);
        auVar35[0xc] = -(param_2[0x1c] == pcVar15[0x1c]);
        auVar35[0xd] = -(param_2[0x1d] == pcVar15[0x1d]);
        auVar35[0xe] = -(param_2[0x1e] == pcVar15[0x1e]);
        auVar35[0xf] = -(param_2[0x1f] == pcVar15[0x1f]);
        auVar35 = auVar35 & auVar34;
        pcVar15 = pcVar15 + 0x20;
        pcVar13 = param_2 + 0x20;
        uVar12 = (ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) - 0xffff;
        param_1 = (char *)(ulong)uVar12;
        if (uVar12 == 0) {
          param_2 = pcVar13 + param_3;
          pcVar15 = pcVar15 + param_3;
LAB_0074b4c0:
          uVar12 = (uint)param_3;
          if (uVar12 < 8) {
            if (uVar12 == 0) goto LAB_0074b72a;
            if (uVar12 == 1) {
LAB_0074b7ca:
              bVar17 = (byte)pcVar15[-1] < (byte)param_2[-1];
              if (pcVar15[-1] == param_2[-1]) {
                auVar4._8_8_ = 0;
                auVar4._0_8_ = param_1;
                return auVar4 << 0x40;
              }
              goto LAB_0074b945;
            }
            if (uVar12 == 2) {
LAB_0074b87a:
              uVar1 = *(ushort *)(pcVar15 + -2);
              uVar2 = *(ushort *)(param_2 + -2);
              bVar17 = (byte)uVar1 < (byte)uVar2;
              if (((byte)uVar1 == (byte)uVar2) && (bVar17 = uVar1 < uVar2, uVar1 == uVar2)) {
                auVar5._8_8_ = 0;
                auVar5._0_8_ = param_1;
                return auVar5 << 0x40;
              }
              goto LAB_0074b945;
            }
            if (uVar12 != 3) {
              if (uVar12 == 4) goto LAB_0074b71c;
              if (uVar12 == 5) goto LAB_0074b7bc;
              if (uVar12 == 6) goto LAB_0074b86c;
              goto LAB_0074b908;
            }
LAB_0074b912:
            uVar1 = *(ushort *)(pcVar15 + -3);
            uVar2 = *(ushort *)(param_2 + -3);
            bVar17 = (byte)uVar1 < (byte)uVar2;
            if ((((byte)uVar1 == (byte)uVar2) && (bVar17 = uVar1 < uVar2, uVar1 == uVar2)) &&
               (bVar17 = (byte)pcVar15[-1] < (byte)param_2[-1], pcVar15[-1] == param_2[-1])) {
              auVar6._8_8_ = 0;
              auVar6._0_8_ = param_1;
              return auVar6 << 0x40;
            }
          }
          else {
            if (uVar12 < 0x10) {
              if (uVar12 == 8) {
LAB_0074b70e:
                uVar12 = *(uint *)(pcVar15 + -8);
                uVar10 = *(uint *)(param_2 + -8);
                if (uVar12 == uVar10) {
LAB_0074b71c:
                  uVar12 = *(uint *)(pcVar15 + -4);
                  uVar10 = *(uint *)(param_2 + -4);
                  if (uVar12 == uVar10) {
LAB_0074b72a:
                    auVar3._8_8_ = 0;
                    auVar3._0_8_ = param_1;
                    return auVar3 << 0x40;
                  }
                }
              }
              else {
                if (uVar12 == 9) {
LAB_0074b7ae:
                  uVar12 = *(uint *)(pcVar15 + -9);
                  uVar10 = *(uint *)(param_2 + -9);
                  if (uVar12 == uVar10) {
LAB_0074b7bc:
                    uVar12 = *(uint *)(pcVar15 + -5);
                    uVar10 = *(uint *)(param_2 + -5);
                    if (uVar12 == uVar10) goto LAB_0074b7ca;
                  }
                  goto LAB_0074b930;
                }
                if (uVar12 == 10) {
LAB_0074b85e:
                  uVar12 = *(uint *)(pcVar15 + -10);
                  uVar10 = *(uint *)(param_2 + -10);
                  if (uVar12 == uVar10) {
LAB_0074b86c:
                    uVar12 = *(uint *)(pcVar15 + -6);
                    uVar10 = *(uint *)(param_2 + -6);
                    if (uVar12 == uVar10) goto LAB_0074b87a;
                  }
                  goto LAB_0074b930;
                }
                if (uVar12 != 0xb) {
                  if (uVar12 == 0xc) goto LAB_0074b700;
                  if (uVar12 == 0xd) goto LAB_0074b7a0;
                  if (uVar12 == 0xe) goto LAB_0074b850;
                  goto LAB_0074b8f4;
                }
LAB_0074b8fe:
                uVar12 = *(uint *)(pcVar15 + -0xb);
                uVar10 = *(uint *)(param_2 + -0xb);
                if (uVar12 == uVar10) {
LAB_0074b908:
                  uVar12 = *(uint *)(pcVar15 + -7);
                  uVar10 = *(uint *)(param_2 + -7);
                  if (uVar12 == uVar10) goto LAB_0074b912;
                }
              }
            }
            else if (uVar12 < 0x18) {
              if (uVar12 == 0x10) {
LAB_0074b6f2:
                uVar12 = *(uint *)(pcVar15 + -0x10);
                uVar10 = *(uint *)(param_2 + -0x10);
                if (uVar12 == uVar10) {
LAB_0074b700:
                  uVar12 = *(uint *)(pcVar15 + -0xc);
                  uVar10 = *(uint *)(param_2 + -0xc);
                  if (uVar12 == uVar10) goto LAB_0074b70e;
                }
              }
              else {
                if (uVar12 == 0x11) {
LAB_0074b792:
                  uVar12 = *(uint *)(pcVar15 + -0x11);
                  uVar10 = *(uint *)(param_2 + -0x11);
                  if (uVar12 == uVar10) {
LAB_0074b7a0:
                    uVar12 = *(uint *)(pcVar15 + -0xd);
                    uVar10 = *(uint *)(param_2 + -0xd);
                    if (uVar12 == uVar10) goto LAB_0074b7ae;
                  }
                  goto LAB_0074b930;
                }
                if (uVar12 == 0x12) {
LAB_0074b842:
                  uVar12 = *(uint *)(pcVar15 + -0x12);
                  uVar10 = *(uint *)(param_2 + -0x12);
                  if (uVar12 == uVar10) {
LAB_0074b850:
                    uVar12 = *(uint *)(pcVar15 + -0xe);
                    uVar10 = *(uint *)(param_2 + -0xe);
                    if (uVar12 == uVar10) goto LAB_0074b85e;
                  }
                  goto LAB_0074b930;
                }
                if (uVar12 != 0x13) {
                  if (uVar12 == 0x14) goto LAB_0074b6e4;
                  if (uVar12 == 0x15) goto LAB_0074b784;
                  if (uVar12 == 0x16) goto LAB_0074b834;
                  goto LAB_0074b8e0;
                }
LAB_0074b8ea:
                uVar12 = *(uint *)(pcVar15 + -0x13);
                uVar10 = *(uint *)(param_2 + -0x13);
                if (uVar12 == uVar10) {
LAB_0074b8f4:
                  uVar12 = *(uint *)(pcVar15 + -0xf);
                  uVar10 = *(uint *)(param_2 + -0xf);
                  if (uVar12 == uVar10) goto LAB_0074b8fe;
                }
              }
            }
            else if (uVar12 < 0x20) {
              if (uVar12 == 0x18) {
LAB_0074b6d6:
                uVar12 = *(uint *)(pcVar15 + -0x18);
                uVar10 = *(uint *)(param_2 + -0x18);
                if (uVar12 == uVar10) {
LAB_0074b6e4:
                  uVar12 = *(uint *)(pcVar15 + -0x14);
                  uVar10 = *(uint *)(param_2 + -0x14);
                  if (uVar12 == uVar10) goto LAB_0074b6f2;
                }
              }
              else {
                if (uVar12 == 0x19) {
LAB_0074b776:
                  uVar12 = *(uint *)(pcVar15 + -0x19);
                  uVar10 = *(uint *)(param_2 + -0x19);
                  if (uVar12 == uVar10) {
LAB_0074b784:
                    uVar12 = *(uint *)(pcVar15 + -0x15);
                    uVar10 = *(uint *)(param_2 + -0x15);
                    if (uVar12 == uVar10) goto LAB_0074b792;
                  }
                  goto LAB_0074b930;
                }
                if (uVar12 == 0x1a) {
LAB_0074b826:
                  uVar12 = *(uint *)(pcVar15 + -0x1a);
                  uVar10 = *(uint *)(param_2 + -0x1a);
                  if (uVar12 == uVar10) {
LAB_0074b834:
                    uVar12 = *(uint *)(pcVar15 + -0x16);
                    uVar10 = *(uint *)(param_2 + -0x16);
                    if (uVar12 == uVar10) goto LAB_0074b842;
                  }
                  goto LAB_0074b930;
                }
                if (uVar12 != 0x1b) {
                  if (uVar12 == 0x1c) goto LAB_0074b6c8;
                  if (uVar12 == 0x1d) goto LAB_0074b768;
                  if (uVar12 == 0x1e) goto LAB_0074b818;
LAB_0074b8cc:
                  uVar12 = *(uint *)(pcVar15 + -0x1f);
                  uVar10 = *(uint *)(param_2 + -0x1f);
                  if (uVar12 != uVar10) goto LAB_0074b930;
                }
                uVar12 = *(uint *)(pcVar15 + -0x1b);
                uVar10 = *(uint *)(param_2 + -0x1b);
                if (uVar12 == uVar10) {
LAB_0074b8e0:
                  uVar12 = *(uint *)(pcVar15 + -0x17);
                  uVar10 = *(uint *)(param_2 + -0x17);
                  if (uVar12 == uVar10) goto LAB_0074b8ea;
                }
              }
            }
            else if (uVar12 < 0x28) {
              if (uVar12 == 0x20) {
LAB_0074b6ba:
                uVar12 = *(uint *)(pcVar15 + -0x20);
                uVar10 = *(uint *)(param_2 + -0x20);
                if (uVar12 == uVar10) {
LAB_0074b6c8:
                  uVar12 = *(uint *)(pcVar15 + -0x1c);
                  uVar10 = *(uint *)(param_2 + -0x1c);
                  if (uVar12 == uVar10) goto LAB_0074b6d6;
                }
              }
              else if (uVar12 == 0x21) {
LAB_0074b75a:
                uVar12 = *(uint *)(pcVar15 + -0x21);
                uVar10 = *(uint *)(param_2 + -0x21);
                if (uVar12 == uVar10) {
LAB_0074b768:
                  uVar12 = *(uint *)(pcVar15 + -0x1d);
                  uVar10 = *(uint *)(param_2 + -0x1d);
                  if (uVar12 == uVar10) goto LAB_0074b776;
                }
              }
              else {
                if (uVar12 == 0x22) {
LAB_0074b80a:
                  uVar12 = *(uint *)(pcVar15 + -0x22);
                  uVar10 = *(uint *)(param_2 + -0x22);
                  if (uVar12 == uVar10) {
LAB_0074b818:
                    uVar12 = *(uint *)(pcVar15 + -0x1e);
                    uVar10 = *(uint *)(param_2 + -0x1e);
                    if (uVar12 == uVar10) goto LAB_0074b826;
                  }
                  goto LAB_0074b930;
                }
                if (uVar12 != 0x23) {
                  if (uVar12 == 0x24) goto LAB_0074b6ac;
                  if (uVar12 == 0x25) goto LAB_0074b74c;
                  if (uVar12 == 0x26) goto LAB_0074b7fc;
LAB_0074b8b8:
                  uVar12 = *(uint *)(pcVar15 + -0x27);
                  uVar10 = *(uint *)(param_2 + -0x27);
                  if (uVar12 != uVar10) goto LAB_0074b930;
                }
                uVar12 = *(uint *)(pcVar15 + -0x23);
                uVar10 = *(uint *)(param_2 + -0x23);
                if (uVar12 == uVar10) goto LAB_0074b8cc;
              }
            }
            else if (uVar12 == 0x28) {
LAB_0074b69e:
              uVar12 = *(uint *)(pcVar15 + -0x28);
              uVar10 = *(uint *)(param_2 + -0x28);
              if (uVar12 == uVar10) {
LAB_0074b6ac:
                uVar12 = *(uint *)(pcVar15 + -0x24);
                uVar10 = *(uint *)(param_2 + -0x24);
                if (uVar12 == uVar10) goto LAB_0074b6ba;
              }
            }
            else if (uVar12 == 0x29) {
LAB_0074b73e:
              uVar12 = *(uint *)(pcVar15 + -0x29);
              uVar10 = *(uint *)(param_2 + -0x29);
              if (uVar12 == uVar10) {
LAB_0074b74c:
                uVar12 = *(uint *)(pcVar15 + -0x25);
                uVar10 = *(uint *)(param_2 + -0x25);
                if (uVar12 == uVar10) goto LAB_0074b75a;
              }
            }
            else if (uVar12 == 0x2a) {
LAB_0074b7ee:
              uVar12 = *(uint *)(pcVar15 + -0x2a);
              uVar10 = *(uint *)(param_2 + -0x2a);
              if (uVar12 == uVar10) {
LAB_0074b7fc:
                uVar12 = *(uint *)(pcVar15 + -0x26);
                uVar10 = *(uint *)(param_2 + -0x26);
                if (uVar12 == uVar10) goto LAB_0074b80a;
              }
            }
            else if (uVar12 == 0x2b) {
LAB_0074b8ae:
              uVar12 = *(uint *)(pcVar15 + -0x2b);
              uVar10 = *(uint *)(param_2 + -0x2b);
              if (uVar12 == uVar10) goto LAB_0074b8b8;
            }
            else if (uVar12 == 0x2c) {
              uVar12 = *(uint *)(pcVar15 + -0x2c);
              uVar10 = *(uint *)(param_2 + -0x2c);
              if (uVar12 == uVar10) goto LAB_0074b69e;
            }
            else if (uVar12 == 0x2d) {
              uVar12 = *(uint *)(pcVar15 + -0x2d);
              uVar10 = *(uint *)(param_2 + -0x2d);
              if (uVar12 == uVar10) goto LAB_0074b73e;
            }
            else if (uVar12 == 0x2e) {
              uVar12 = *(uint *)(pcVar15 + -0x2e);
              uVar10 = *(uint *)(param_2 + -0x2e);
              if (uVar12 == uVar10) goto LAB_0074b7ee;
            }
            else {
              uVar12 = *(uint *)(pcVar15 + -0x2f);
              uVar10 = *(uint *)(param_2 + -0x2f);
              if (uVar12 == uVar10) goto LAB_0074b8ae;
            }
LAB_0074b930:
            bVar17 = (byte)uVar12 < (byte)uVar10;
            if (((byte)uVar12 == (byte)uVar10) &&
               (bVar17 = (ushort)uVar12 < (ushort)uVar10, (ushort)uVar12 == (ushort)uVar10)) {
              bVar7 = (byte)(uVar12 >> 0x10);
              bVar9 = (byte)(uVar10 >> 0x10);
              bVar17 = bVar7 < bVar9;
              if (bVar7 == bVar9) {
                bVar17 = uVar12 >> 0x10 < uVar10 >> 0x10;
              }
            }
          }
LAB_0074b945:
          auVar77._0_4_ = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          auVar77._4_4_ = 0;
          auVar77._8_8_ = param_1;
          return auVar77;
        }
      }
      else {
        uVar8 = 0;
        auVar18[0] = -(*param_2 == *pcVar15);
        auVar18[1] = -(param_2[1] == pcVar15[1]);
        auVar18[2] = -(param_2[2] == pcVar15[2]);
        auVar18[3] = -(param_2[3] == pcVar15[3]);
        auVar18[4] = -(param_2[4] == pcVar15[4]);
        auVar18[5] = -(param_2[5] == pcVar15[5]);
        auVar18[6] = -(param_2[6] == pcVar15[6]);
        auVar18[7] = -(param_2[7] == pcVar15[7]);
        auVar18[8] = -(param_2[8] == pcVar15[8]);
        auVar18[9] = -(param_2[9] == pcVar15[9]);
        auVar18[10] = -(param_2[10] == pcVar15[10]);
        auVar18[0xb] = -(param_2[0xb] == pcVar15[0xb]);
        auVar18[0xc] = -(param_2[0xc] == pcVar15[0xc]);
        auVar18[0xd] = -(param_2[0xd] == pcVar15[0xd]);
        auVar18[0xe] = -(param_2[0xe] == pcVar15[0xe]);
        auVar18[0xf] = -(param_2[0xf] == pcVar15[0xf]);
        auVar36[0] = -(param_2[0x10] == pcVar15[0x10]);
        auVar36[1] = -(param_2[0x11] == pcVar15[0x11]);
        auVar36[2] = -(param_2[0x12] == pcVar15[0x12]);
        auVar36[3] = -(param_2[0x13] == pcVar15[0x13]);
        auVar36[4] = -(param_2[0x14] == pcVar15[0x14]);
        auVar36[5] = -(param_2[0x15] == pcVar15[0x15]);
        auVar36[6] = -(param_2[0x16] == pcVar15[0x16]);
        auVar36[7] = -(param_2[0x17] == pcVar15[0x17]);
        auVar36[8] = -(param_2[0x18] == pcVar15[0x18]);
        auVar36[9] = -(param_2[0x19] == pcVar15[0x19]);
        auVar36[10] = -(param_2[0x1a] == pcVar15[0x1a]);
        auVar36[0xb] = -(param_2[0x1b] == pcVar15[0x1b]);
        auVar36[0xc] = -(param_2[0x1c] == pcVar15[0x1c]);
        auVar36[0xd] = -(param_2[0x1d] == pcVar15[0x1d]);
        auVar36[0xe] = -(param_2[0x1e] == pcVar15[0x1e]);
        auVar36[0xf] = -(param_2[0x1f] == pcVar15[0x1f]);
        param_3 = uVar11 - 0x50;
        do {
          auVar34 = auVar18;
          pcVar16 = pcVar15;
          pcVar14 = param_2;
          uVar11 = param_3;
          auVar36 = auVar36 & auVar34;
          param_3 = uVar11 - 0x20;
          uVar12 = ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) - 0xffff) -
                   (uint)(uVar11 < 0x20);
          auVar18[0] = -(pcVar14[0x20] == pcVar16[0x20]);
          auVar18[1] = -(pcVar14[0x21] == pcVar16[0x21]);
          auVar18[2] = -(pcVar14[0x22] == pcVar16[0x22]);
          auVar18[3] = -(pcVar14[0x23] == pcVar16[0x23]);
          auVar18[4] = -(pcVar14[0x24] == pcVar16[0x24]);
          auVar18[5] = -(pcVar14[0x25] == pcVar16[0x25]);
          auVar18[6] = -(pcVar14[0x26] == pcVar16[0x26]);
          auVar18[7] = -(pcVar14[0x27] == pcVar16[0x27]);
          auVar18[8] = -(pcVar14[0x28] == pcVar16[0x28]);
          auVar18[9] = -(pcVar14[0x29] == pcVar16[0x29]);
          auVar18[10] = -(pcVar14[0x2a] == pcVar16[0x2a]);
          auVar18[0xb] = -(pcVar14[0x2b] == pcVar16[0x2b]);
          auVar18[0xc] = -(pcVar14[0x2c] == pcVar16[0x2c]);
          auVar18[0xd] = -(pcVar14[0x2d] == pcVar16[0x2d]);
          auVar18[0xe] = -(pcVar14[0x2e] == pcVar16[0x2e]);
          auVar18[0xf] = -(pcVar14[0x2f] == pcVar16[0x2f]);
          auVar36[0] = -(pcVar14[0x30] == pcVar16[0x30]);
          auVar36[1] = -(pcVar14[0x31] == pcVar16[0x31]);
          auVar36[2] = -(pcVar14[0x32] == pcVar16[0x32]);
          auVar36[3] = -(pcVar14[0x33] == pcVar16[0x33]);
          auVar36[4] = -(pcVar14[0x34] == pcVar16[0x34]);
          auVar36[5] = -(pcVar14[0x35] == pcVar16[0x35]);
          auVar36[6] = -(pcVar14[0x36] == pcVar16[0x36]);
          auVar36[7] = -(pcVar14[0x37] == pcVar16[0x37]);
          auVar36[8] = -(pcVar14[0x38] == pcVar16[0x38]);
          auVar36[9] = -(pcVar14[0x39] == pcVar16[0x39]);
          auVar36[10] = -(pcVar14[0x3a] == pcVar16[0x3a]);
          auVar36[0xb] = -(pcVar14[0x3b] == pcVar16[0x3b]);
          auVar36[0xc] = -(pcVar14[0x3c] == pcVar16[0x3c]);
          auVar36[0xd] = -(pcVar14[0x3d] == pcVar16[0x3d]);
          auVar36[0xe] = -(pcVar14[0x3e] == pcVar16[0x3e]);
          auVar36[0xf] = -(pcVar14[0x3f] == pcVar16[0x3f]);
          pcVar15 = pcVar16 + 0x20;
          pcVar13 = pcVar14 + 0x20;
          param_2 = pcVar13;
        } while (uVar12 == 0);
        auVar36 = auVar36 & auVar18;
        if ((long)param_3 < 0) {
          uVar12 = uVar12 + 1;
          param_3 = uVar11;
        }
        param_1 = (char *)(ulong)uVar12;
        if (uVar12 == 0) {
          pcVar15 = pcVar16 + 0x40;
          pcVar13 = pcVar14 + 0x40;
          uVar12 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) - 0xffff;
          param_1 = (char *)(ulong)uVar12;
          auVar34 = auVar18;
          if (uVar12 == 0) {
            param_2 = pcVar13 + param_3;
            pcVar15 = pcVar15 + param_3;
            goto LAB_0074b4c0;
          }
        }
      }
    }
    else {
      param_2 = (char *)((ulong)param_2 ^ (ulong)uVar12);
      if (uVar12 < 8) {
        if (uVar8 == 0) goto LAB_0074a2e0;
        if (uVar12 == 1) {
          param_3 = uVar11 - 0x30;
          uVar8 = 1;
          if (uVar11 < 0x50) {
            auVar34[0] = -(param_2[1] == *pcVar15);
            auVar34[1] = -(param_2[2] == pcVar15[1]);
            auVar34[2] = -(param_2[3] == pcVar15[2]);
            auVar34[3] = -(param_2[4] == pcVar15[3]);
            auVar34[4] = -(param_2[5] == pcVar15[4]);
            auVar34[5] = -(param_2[6] == pcVar15[5]);
            auVar34[6] = -(param_2[7] == pcVar15[6]);
            auVar34[7] = -(param_2[8] == pcVar15[7]);
            auVar34[8] = -(param_2[9] == pcVar15[8]);
            auVar34[9] = -(param_2[10] == pcVar15[9]);
            auVar34[10] = -(param_2[0xb] == pcVar15[10]);
            auVar34[0xb] = -(param_2[0xc] == pcVar15[0xb]);
            auVar34[0xc] = -(param_2[0xd] == pcVar15[0xc]);
            auVar34[0xd] = -(param_2[0xe] == pcVar15[0xd]);
            auVar34[0xe] = -(param_2[0xf] == pcVar15[0xe]);
            auVar34[0xf] = -(param_2[0x10] == pcVar15[0xf]);
            auVar38[0] = -(param_2[0x11] == pcVar15[0x10]);
            auVar38[1] = -(param_2[0x12] == pcVar15[0x11]);
            auVar38[2] = -(param_2[0x13] == pcVar15[0x12]);
            auVar38[3] = -(param_2[0x14] == pcVar15[0x13]);
            auVar38[4] = -(param_2[0x15] == pcVar15[0x14]);
            auVar38[5] = -(param_2[0x16] == pcVar15[0x15]);
            auVar38[6] = -(param_2[0x17] == pcVar15[0x16]);
            auVar38[7] = -(param_2[0x18] == pcVar15[0x17]);
            auVar38[8] = -(param_2[0x19] == pcVar15[0x18]);
            auVar38[9] = -(param_2[0x1a] == pcVar15[0x19]);
            auVar38[10] = -(param_2[0x1b] == pcVar15[0x1a]);
            auVar38[0xb] = -(param_2[0x1c] == pcVar15[0x1b]);
            auVar38[0xc] = -(param_2[0x1d] == pcVar15[0x1c]);
            auVar38[0xd] = -(param_2[0x1e] == pcVar15[0x1d]);
            auVar38[0xe] = -(param_2[0x1f] == pcVar15[0x1e]);
            auVar38[0xf] = -(param_2[0x20] == pcVar15[0x1f]);
            auVar38 = auVar38 & auVar34;
            pcVar15 = pcVar15 + 0x20;
            pcVar13 = param_2 + 0x20;
            uVar12 = (ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) - 0xffff;
            param_1 = (char *)(ulong)uVar12;
            if (uVar12 == 0) {
              param_2 = param_2 + (uVar11 - 0xf);
              pcVar15 = pcVar15 + param_3;
              goto LAB_0074b4c0;
            }
          }
          else {
            auVar19[0] = -(param_2[1] == *pcVar15);
            auVar19[1] = -(param_2[2] == pcVar15[1]);
            auVar19[2] = -(param_2[3] == pcVar15[2]);
            auVar19[3] = -(param_2[4] == pcVar15[3]);
            auVar19[4] = -(param_2[5] == pcVar15[4]);
            auVar19[5] = -(param_2[6] == pcVar15[5]);
            auVar19[6] = -(param_2[7] == pcVar15[6]);
            auVar19[7] = -(param_2[8] == pcVar15[7]);
            auVar19[8] = -(param_2[9] == pcVar15[8]);
            auVar19[9] = -(param_2[10] == pcVar15[9]);
            auVar19[10] = -(param_2[0xb] == pcVar15[10]);
            auVar19[0xb] = -(param_2[0xc] == pcVar15[0xb]);
            auVar19[0xc] = -(param_2[0xd] == pcVar15[0xc]);
            auVar19[0xd] = -(param_2[0xe] == pcVar15[0xd]);
            auVar19[0xe] = -(param_2[0xf] == pcVar15[0xe]);
            auVar19[0xf] = -(param_2[0x10] == pcVar15[0xf]);
            auVar39[0] = -(param_2[0x11] == pcVar15[0x10]);
            auVar39[1] = -(param_2[0x12] == pcVar15[0x11]);
            auVar39[2] = -(param_2[0x13] == pcVar15[0x12]);
            auVar39[3] = -(param_2[0x14] == pcVar15[0x13]);
            auVar39[4] = -(param_2[0x15] == pcVar15[0x14]);
            auVar39[5] = -(param_2[0x16] == pcVar15[0x15]);
            auVar39[6] = -(param_2[0x17] == pcVar15[0x16]);
            auVar39[7] = -(param_2[0x18] == pcVar15[0x17]);
            auVar39[8] = -(param_2[0x19] == pcVar15[0x18]);
            auVar39[9] = -(param_2[0x1a] == pcVar15[0x19]);
            auVar39[10] = -(param_2[0x1b] == pcVar15[0x1a]);
            auVar39[0xb] = -(param_2[0x1c] == pcVar15[0x1b]);
            auVar39[0xc] = -(param_2[0x1d] == pcVar15[0x1c]);
            auVar39[0xd] = -(param_2[0x1e] == pcVar15[0x1d]);
            auVar39[0xe] = -(param_2[0x1f] == pcVar15[0x1e]);
            auVar39[0xf] = -(param_2[0x20] == pcVar15[0x1f]);
            param_3 = uVar11 - 0x50;
            do {
              auVar34 = auVar19;
              pcVar16 = pcVar15;
              pcVar14 = param_2;
              uVar11 = param_3;
              auVar39 = auVar39 & auVar34;
              param_3 = uVar11 - 0x20;
              uVar12 = ((ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar39[0xf] >> 7) << 0xf) - 0xffff) -
                       (uint)(uVar11 < 0x20);
              auVar19[0] = -(pcVar14[0x21] == pcVar16[0x20]);
              auVar19[1] = -(pcVar14[0x22] == pcVar16[0x21]);
              auVar19[2] = -(pcVar14[0x23] == pcVar16[0x22]);
              auVar19[3] = -(pcVar14[0x24] == pcVar16[0x23]);
              auVar19[4] = -(pcVar14[0x25] == pcVar16[0x24]);
              auVar19[5] = -(pcVar14[0x26] == pcVar16[0x25]);
              auVar19[6] = -(pcVar14[0x27] == pcVar16[0x26]);
              auVar19[7] = -(pcVar14[0x28] == pcVar16[0x27]);
              auVar19[8] = -(pcVar14[0x29] == pcVar16[0x28]);
              auVar19[9] = -(pcVar14[0x2a] == pcVar16[0x29]);
              auVar19[10] = -(pcVar14[0x2b] == pcVar16[0x2a]);
              auVar19[0xb] = -(pcVar14[0x2c] == pcVar16[0x2b]);
              auVar19[0xc] = -(pcVar14[0x2d] == pcVar16[0x2c]);
              auVar19[0xd] = -(pcVar14[0x2e] == pcVar16[0x2d]);
              auVar19[0xe] = -(pcVar14[0x2f] == pcVar16[0x2e]);
              auVar19[0xf] = -(pcVar14[0x30] == pcVar16[0x2f]);
              pcVar13 = pcVar14 + 0x20;
              auVar39[0] = -(pcVar14[0x31] == pcVar16[0x30]);
              auVar39[1] = -(pcVar14[0x32] == pcVar16[0x31]);
              auVar39[2] = -(pcVar14[0x33] == pcVar16[0x32]);
              auVar39[3] = -(pcVar14[0x34] == pcVar16[0x33]);
              auVar39[4] = -(pcVar14[0x35] == pcVar16[0x34]);
              auVar39[5] = -(pcVar14[0x36] == pcVar16[0x35]);
              auVar39[6] = -(pcVar14[0x37] == pcVar16[0x36]);
              auVar39[7] = -(pcVar14[0x38] == pcVar16[0x37]);
              auVar39[8] = -(pcVar14[0x39] == pcVar16[0x38]);
              auVar39[9] = -(pcVar14[0x3a] == pcVar16[0x39]);
              auVar39[10] = -(pcVar14[0x3b] == pcVar16[0x3a]);
              auVar39[0xb] = -(pcVar14[0x3c] == pcVar16[0x3b]);
              auVar39[0xc] = -(pcVar14[0x3d] == pcVar16[0x3c]);
              auVar39[0xd] = -(pcVar14[0x3e] == pcVar16[0x3d]);
              auVar39[0xe] = -(pcVar14[0x3f] == pcVar16[0x3e]);
              auVar39[0xf] = -(pcVar14[0x40] == pcVar16[0x3f]);
              pcVar15 = pcVar16 + 0x20;
              param_2 = pcVar13;
            } while (uVar12 == 0);
            auVar39 = auVar39 & auVar19;
            if ((long)param_3 < 0) {
              uVar12 = uVar12 + 1;
              param_3 = uVar11;
            }
            param_1 = (char *)(ulong)uVar12;
            if (uVar12 == 0) {
              pcVar15 = pcVar16 + 0x40;
              pcVar13 = pcVar14 + 0x40;
              uVar12 = (ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar39[0xf] >> 7) << 0xf) - 0xffff;
              param_1 = (char *)(ulong)uVar12;
              auVar34 = auVar19;
              if (uVar12 == 0) {
                param_2 = pcVar14 + param_3 + 0x41;
                pcVar15 = pcVar15 + param_3;
                goto LAB_0074b4c0;
              }
            }
          }
        }
        else if (uVar12 == 2) {
          param_3 = uVar11 - 0x30;
          uVar8 = 2;
          if (uVar11 < 0x50) {
            auVar34[0] = -(param_2[2] == *pcVar15);
            auVar34[1] = -(param_2[3] == pcVar15[1]);
            auVar34[2] = -(param_2[4] == pcVar15[2]);
            auVar34[3] = -(param_2[5] == pcVar15[3]);
            auVar34[4] = -(param_2[6] == pcVar15[4]);
            auVar34[5] = -(param_2[7] == pcVar15[5]);
            auVar34[6] = -(param_2[8] == pcVar15[6]);
            auVar34[7] = -(param_2[9] == pcVar15[7]);
            auVar34[8] = -(param_2[10] == pcVar15[8]);
            auVar34[9] = -(param_2[0xb] == pcVar15[9]);
            auVar34[10] = -(param_2[0xc] == pcVar15[10]);
            auVar34[0xb] = -(param_2[0xd] == pcVar15[0xb]);
            auVar34[0xc] = -(param_2[0xe] == pcVar15[0xc]);
            auVar34[0xd] = -(param_2[0xf] == pcVar15[0xd]);
            auVar34[0xe] = -(param_2[0x10] == pcVar15[0xe]);
            auVar34[0xf] = -(param_2[0x11] == pcVar15[0xf]);
            auVar40[0] = -(param_2[0x12] == pcVar15[0x10]);
            auVar40[1] = -(param_2[0x13] == pcVar15[0x11]);
            auVar40[2] = -(param_2[0x14] == pcVar15[0x12]);
            auVar40[3] = -(param_2[0x15] == pcVar15[0x13]);
            auVar40[4] = -(param_2[0x16] == pcVar15[0x14]);
            auVar40[5] = -(param_2[0x17] == pcVar15[0x15]);
            auVar40[6] = -(param_2[0x18] == pcVar15[0x16]);
            auVar40[7] = -(param_2[0x19] == pcVar15[0x17]);
            auVar40[8] = -(param_2[0x1a] == pcVar15[0x18]);
            auVar40[9] = -(param_2[0x1b] == pcVar15[0x19]);
            auVar40[10] = -(param_2[0x1c] == pcVar15[0x1a]);
            auVar40[0xb] = -(param_2[0x1d] == pcVar15[0x1b]);
            auVar40[0xc] = -(param_2[0x1e] == pcVar15[0x1c]);
            auVar40[0xd] = -(param_2[0x1f] == pcVar15[0x1d]);
            auVar40[0xe] = -(param_2[0x20] == pcVar15[0x1e]);
            auVar40[0xf] = -(param_2[0x21] == pcVar15[0x1f]);
            auVar40 = auVar40 & auVar34;
            pcVar15 = pcVar15 + 0x20;
            pcVar13 = param_2 + 0x20;
            uVar12 = (ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar40[0xf] >> 7) << 0xf) - 0xffff;
            param_1 = (char *)(ulong)uVar12;
            if (uVar12 == 0) {
              param_2 = param_2 + (uVar11 - 0xe);
              pcVar15 = pcVar15 + param_3;
              goto LAB_0074b4c0;
            }
          }
          else {
            auVar20[0] = -(param_2[2] == *pcVar15);
            auVar20[1] = -(param_2[3] == pcVar15[1]);
            auVar20[2] = -(param_2[4] == pcVar15[2]);
            auVar20[3] = -(param_2[5] == pcVar15[3]);
            auVar20[4] = -(param_2[6] == pcVar15[4]);
            auVar20[5] = -(param_2[7] == pcVar15[5]);
            auVar20[6] = -(param_2[8] == pcVar15[6]);
            auVar20[7] = -(param_2[9] == pcVar15[7]);
            auVar20[8] = -(param_2[10] == pcVar15[8]);
            auVar20[9] = -(param_2[0xb] == pcVar15[9]);
            auVar20[10] = -(param_2[0xc] == pcVar15[10]);
            auVar20[0xb] = -(param_2[0xd] == pcVar15[0xb]);
            auVar20[0xc] = -(param_2[0xe] == pcVar15[0xc]);
            auVar20[0xd] = -(param_2[0xf] == pcVar15[0xd]);
            auVar20[0xe] = -(param_2[0x10] == pcVar15[0xe]);
            auVar20[0xf] = -(param_2[0x11] == pcVar15[0xf]);
            auVar41[0] = -(param_2[0x12] == pcVar15[0x10]);
            auVar41[1] = -(param_2[0x13] == pcVar15[0x11]);
            auVar41[2] = -(param_2[0x14] == pcVar15[0x12]);
            auVar41[3] = -(param_2[0x15] == pcVar15[0x13]);
            auVar41[4] = -(param_2[0x16] == pcVar15[0x14]);
            auVar41[5] = -(param_2[0x17] == pcVar15[0x15]);
            auVar41[6] = -(param_2[0x18] == pcVar15[0x16]);
            auVar41[7] = -(param_2[0x19] == pcVar15[0x17]);
            auVar41[8] = -(param_2[0x1a] == pcVar15[0x18]);
            auVar41[9] = -(param_2[0x1b] == pcVar15[0x19]);
            auVar41[10] = -(param_2[0x1c] == pcVar15[0x1a]);
            auVar41[0xb] = -(param_2[0x1d] == pcVar15[0x1b]);
            auVar41[0xc] = -(param_2[0x1e] == pcVar15[0x1c]);
            auVar41[0xd] = -(param_2[0x1f] == pcVar15[0x1d]);
            auVar41[0xe] = -(param_2[0x20] == pcVar15[0x1e]);
            auVar41[0xf] = -(param_2[0x21] == pcVar15[0x1f]);
            param_3 = uVar11 - 0x50;
            do {
              auVar34 = auVar20;
              pcVar16 = pcVar15;
              pcVar14 = param_2;
              uVar11 = param_3;
              auVar41 = auVar41 & auVar34;
              param_3 = uVar11 - 0x20;
              uVar12 = ((ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar41[0xf] >> 7) << 0xf) - 0xffff) -
                       (uint)(uVar11 < 0x20);
              auVar20[0] = -(pcVar14[0x22] == pcVar16[0x20]);
              auVar20[1] = -(pcVar14[0x23] == pcVar16[0x21]);
              auVar20[2] = -(pcVar14[0x24] == pcVar16[0x22]);
              auVar20[3] = -(pcVar14[0x25] == pcVar16[0x23]);
              auVar20[4] = -(pcVar14[0x26] == pcVar16[0x24]);
              auVar20[5] = -(pcVar14[0x27] == pcVar16[0x25]);
              auVar20[6] = -(pcVar14[0x28] == pcVar16[0x26]);
              auVar20[7] = -(pcVar14[0x29] == pcVar16[0x27]);
              auVar20[8] = -(pcVar14[0x2a] == pcVar16[0x28]);
              auVar20[9] = -(pcVar14[0x2b] == pcVar16[0x29]);
              auVar20[10] = -(pcVar14[0x2c] == pcVar16[0x2a]);
              auVar20[0xb] = -(pcVar14[0x2d] == pcVar16[0x2b]);
              auVar20[0xc] = -(pcVar14[0x2e] == pcVar16[0x2c]);
              auVar20[0xd] = -(pcVar14[0x2f] == pcVar16[0x2d]);
              auVar20[0xe] = -(pcVar14[0x30] == pcVar16[0x2e]);
              auVar20[0xf] = -(pcVar14[0x31] == pcVar16[0x2f]);
              pcVar13 = pcVar14 + 0x20;
              auVar41[0] = -(pcVar14[0x32] == pcVar16[0x30]);
              auVar41[1] = -(pcVar14[0x33] == pcVar16[0x31]);
              auVar41[2] = -(pcVar14[0x34] == pcVar16[0x32]);
              auVar41[3] = -(pcVar14[0x35] == pcVar16[0x33]);
              auVar41[4] = -(pcVar14[0x36] == pcVar16[0x34]);
              auVar41[5] = -(pcVar14[0x37] == pcVar16[0x35]);
              auVar41[6] = -(pcVar14[0x38] == pcVar16[0x36]);
              auVar41[7] = -(pcVar14[0x39] == pcVar16[0x37]);
              auVar41[8] = -(pcVar14[0x3a] == pcVar16[0x38]);
              auVar41[9] = -(pcVar14[0x3b] == pcVar16[0x39]);
              auVar41[10] = -(pcVar14[0x3c] == pcVar16[0x3a]);
              auVar41[0xb] = -(pcVar14[0x3d] == pcVar16[0x3b]);
              auVar41[0xc] = -(pcVar14[0x3e] == pcVar16[0x3c]);
              auVar41[0xd] = -(pcVar14[0x3f] == pcVar16[0x3d]);
              auVar41[0xe] = -(pcVar14[0x40] == pcVar16[0x3e]);
              auVar41[0xf] = -(pcVar14[0x41] == pcVar16[0x3f]);
              pcVar15 = pcVar16 + 0x20;
              param_2 = pcVar13;
            } while (uVar12 == 0);
            auVar41 = auVar41 & auVar20;
            if ((long)param_3 < 0) {
              uVar12 = uVar12 + 1;
              param_3 = uVar11;
            }
            param_1 = (char *)(ulong)uVar12;
            if (uVar12 == 0) {
              pcVar15 = pcVar16 + 0x40;
              pcVar13 = pcVar14 + 0x40;
              uVar12 = (ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar41[0xf] >> 7) << 0xf) - 0xffff;
              param_1 = (char *)(ulong)uVar12;
              auVar34 = auVar20;
              if (uVar12 == 0) {
                param_2 = pcVar14 + param_3 + 0x42;
                pcVar15 = pcVar15 + param_3;
                goto LAB_0074b4c0;
              }
            }
          }
        }
        else if (uVar12 == 3) {
          param_3 = uVar11 - 0x30;
          uVar8 = 3;
          if (uVar11 < 0x50) {
            auVar34[0] = -(param_2[3] == *pcVar15);
            auVar34[1] = -(param_2[4] == pcVar15[1]);
            auVar34[2] = -(param_2[5] == pcVar15[2]);
            auVar34[3] = -(param_2[6] == pcVar15[3]);
            auVar34[4] = -(param_2[7] == pcVar15[4]);
            auVar34[5] = -(param_2[8] == pcVar15[5]);
            auVar34[6] = -(param_2[9] == pcVar15[6]);
            auVar34[7] = -(param_2[10] == pcVar15[7]);
            auVar34[8] = -(param_2[0xb] == pcVar15[8]);
            auVar34[9] = -(param_2[0xc] == pcVar15[9]);
            auVar34[10] = -(param_2[0xd] == pcVar15[10]);
            auVar34[0xb] = -(param_2[0xe] == pcVar15[0xb]);
            auVar34[0xc] = -(param_2[0xf] == pcVar15[0xc]);
            auVar34[0xd] = -(param_2[0x10] == pcVar15[0xd]);
            auVar34[0xe] = -(param_2[0x11] == pcVar15[0xe]);
            auVar34[0xf] = -(param_2[0x12] == pcVar15[0xf]);
            auVar42[0] = -(param_2[0x13] == pcVar15[0x10]);
            auVar42[1] = -(param_2[0x14] == pcVar15[0x11]);
            auVar42[2] = -(param_2[0x15] == pcVar15[0x12]);
            auVar42[3] = -(param_2[0x16] == pcVar15[0x13]);
            auVar42[4] = -(param_2[0x17] == pcVar15[0x14]);
            auVar42[5] = -(param_2[0x18] == pcVar15[0x15]);
            auVar42[6] = -(param_2[0x19] == pcVar15[0x16]);
            auVar42[7] = -(param_2[0x1a] == pcVar15[0x17]);
            auVar42[8] = -(param_2[0x1b] == pcVar15[0x18]);
            auVar42[9] = -(param_2[0x1c] == pcVar15[0x19]);
            auVar42[10] = -(param_2[0x1d] == pcVar15[0x1a]);
            auVar42[0xb] = -(param_2[0x1e] == pcVar15[0x1b]);
            auVar42[0xc] = -(param_2[0x1f] == pcVar15[0x1c]);
            auVar42[0xd] = -(param_2[0x20] == pcVar15[0x1d]);
            auVar42[0xe] = -(param_2[0x21] == pcVar15[0x1e]);
            auVar42[0xf] = -(param_2[0x22] == pcVar15[0x1f]);
            auVar42 = auVar42 & auVar34;
            pcVar15 = pcVar15 + 0x20;
            pcVar13 = param_2 + 0x20;
            uVar12 = (ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar42[0xf] >> 7) << 0xf) - 0xffff;
            param_1 = (char *)(ulong)uVar12;
            if (uVar12 == 0) {
              param_2 = param_2 + (uVar11 - 0xd);
              pcVar15 = pcVar15 + param_3;
              goto LAB_0074b4c0;
            }
          }
          else {
            auVar21[0] = -(param_2[3] == *pcVar15);
            auVar21[1] = -(param_2[4] == pcVar15[1]);
            auVar21[2] = -(param_2[5] == pcVar15[2]);
            auVar21[3] = -(param_2[6] == pcVar15[3]);
            auVar21[4] = -(param_2[7] == pcVar15[4]);
            auVar21[5] = -(param_2[8] == pcVar15[5]);
            auVar21[6] = -(param_2[9] == pcVar15[6]);
            auVar21[7] = -(param_2[10] == pcVar15[7]);
            auVar21[8] = -(param_2[0xb] == pcVar15[8]);
            auVar21[9] = -(param_2[0xc] == pcVar15[9]);
            auVar21[10] = -(param_2[0xd] == pcVar15[10]);
            auVar21[0xb] = -(param_2[0xe] == pcVar15[0xb]);
            auVar21[0xc] = -(param_2[0xf] == pcVar15[0xc]);
            auVar21[0xd] = -(param_2[0x10] == pcVar15[0xd]);
            auVar21[0xe] = -(param_2[0x11] == pcVar15[0xe]);
            auVar21[0xf] = -(param_2[0x12] == pcVar15[0xf]);
            auVar43[0] = -(param_2[0x13] == pcVar15[0x10]);
            auVar43[1] = -(param_2[0x14] == pcVar15[0x11]);
            auVar43[2] = -(param_2[0x15] == pcVar15[0x12]);
            auVar43[3] = -(param_2[0x16] == pcVar15[0x13]);
            auVar43[4] = -(param_2[0x17] == pcVar15[0x14]);
            auVar43[5] = -(param_2[0x18] == pcVar15[0x15]);
            auVar43[6] = -(param_2[0x19] == pcVar15[0x16]);
            auVar43[7] = -(param_2[0x1a] == pcVar15[0x17]);
            auVar43[8] = -(param_2[0x1b] == pcVar15[0x18]);
            auVar43[9] = -(param_2[0x1c] == pcVar15[0x19]);
            auVar43[10] = -(param_2[0x1d] == pcVar15[0x1a]);
            auVar43[0xb] = -(param_2[0x1e] == pcVar15[0x1b]);
            auVar43[0xc] = -(param_2[0x1f] == pcVar15[0x1c]);
            auVar43[0xd] = -(param_2[0x20] == pcVar15[0x1d]);
            auVar43[0xe] = -(param_2[0x21] == pcVar15[0x1e]);
            auVar43[0xf] = -(param_2[0x22] == pcVar15[0x1f]);
            param_3 = uVar11 - 0x50;
            do {
              auVar34 = auVar21;
              pcVar16 = pcVar15;
              pcVar14 = param_2;
              uVar11 = param_3;
              auVar43 = auVar43 & auVar34;
              param_3 = uVar11 - 0x20;
              uVar12 = ((ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) - 0xffff) -
                       (uint)(uVar11 < 0x20);
              auVar21[0] = -(pcVar14[0x23] == pcVar16[0x20]);
              auVar21[1] = -(pcVar14[0x24] == pcVar16[0x21]);
              auVar21[2] = -(pcVar14[0x25] == pcVar16[0x22]);
              auVar21[3] = -(pcVar14[0x26] == pcVar16[0x23]);
              auVar21[4] = -(pcVar14[0x27] == pcVar16[0x24]);
              auVar21[5] = -(pcVar14[0x28] == pcVar16[0x25]);
              auVar21[6] = -(pcVar14[0x29] == pcVar16[0x26]);
              auVar21[7] = -(pcVar14[0x2a] == pcVar16[0x27]);
              auVar21[8] = -(pcVar14[0x2b] == pcVar16[0x28]);
              auVar21[9] = -(pcVar14[0x2c] == pcVar16[0x29]);
              auVar21[10] = -(pcVar14[0x2d] == pcVar16[0x2a]);
              auVar21[0xb] = -(pcVar14[0x2e] == pcVar16[0x2b]);
              auVar21[0xc] = -(pcVar14[0x2f] == pcVar16[0x2c]);
              auVar21[0xd] = -(pcVar14[0x30] == pcVar16[0x2d]);
              auVar21[0xe] = -(pcVar14[0x31] == pcVar16[0x2e]);
              auVar21[0xf] = -(pcVar14[0x32] == pcVar16[0x2f]);
              pcVar13 = pcVar14 + 0x20;
              auVar43[0] = -(pcVar14[0x33] == pcVar16[0x30]);
              auVar43[1] = -(pcVar14[0x34] == pcVar16[0x31]);
              auVar43[2] = -(pcVar14[0x35] == pcVar16[0x32]);
              auVar43[3] = -(pcVar14[0x36] == pcVar16[0x33]);
              auVar43[4] = -(pcVar14[0x37] == pcVar16[0x34]);
              auVar43[5] = -(pcVar14[0x38] == pcVar16[0x35]);
              auVar43[6] = -(pcVar14[0x39] == pcVar16[0x36]);
              auVar43[7] = -(pcVar14[0x3a] == pcVar16[0x37]);
              auVar43[8] = -(pcVar14[0x3b] == pcVar16[0x38]);
              auVar43[9] = -(pcVar14[0x3c] == pcVar16[0x39]);
              auVar43[10] = -(pcVar14[0x3d] == pcVar16[0x3a]);
              auVar43[0xb] = -(pcVar14[0x3e] == pcVar16[0x3b]);
              auVar43[0xc] = -(pcVar14[0x3f] == pcVar16[0x3c]);
              auVar43[0xd] = -(pcVar14[0x40] == pcVar16[0x3d]);
              auVar43[0xe] = -(pcVar14[0x41] == pcVar16[0x3e]);
              auVar43[0xf] = -(pcVar14[0x42] == pcVar16[0x3f]);
              pcVar15 = pcVar16 + 0x20;
              param_2 = pcVar13;
            } while (uVar12 == 0);
            auVar43 = auVar43 & auVar21;
            if ((long)param_3 < 0) {
              uVar12 = uVar12 + 1;
              param_3 = uVar11;
            }
            param_1 = (char *)(ulong)uVar12;
            if (uVar12 == 0) {
              pcVar15 = pcVar16 + 0x40;
              pcVar13 = pcVar14 + 0x40;
              uVar12 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) - 0xffff;
              param_1 = (char *)(ulong)uVar12;
              auVar34 = auVar21;
              if (uVar12 == 0) {
                param_2 = pcVar14 + param_3 + 0x43;
                pcVar15 = pcVar15 + param_3;
                goto LAB_0074b4c0;
              }
            }
          }
        }
        else if (uVar12 == 4) {
          param_3 = uVar11 - 0x30;
          uVar8 = 4;
          if (uVar11 < 0x50) {
            auVar34[0] = -(param_2[4] == *pcVar15);
            auVar34[1] = -(param_2[5] == pcVar15[1]);
            auVar34[2] = -(param_2[6] == pcVar15[2]);
            auVar34[3] = -(param_2[7] == pcVar15[3]);
            auVar34[4] = -(param_2[8] == pcVar15[4]);
            auVar34[5] = -(param_2[9] == pcVar15[5]);
            auVar34[6] = -(param_2[10] == pcVar15[6]);
            auVar34[7] = -(param_2[0xb] == pcVar15[7]);
            auVar34[8] = -(param_2[0xc] == pcVar15[8]);
            auVar34[9] = -(param_2[0xd] == pcVar15[9]);
            auVar34[10] = -(param_2[0xe] == pcVar15[10]);
            auVar34[0xb] = -(param_2[0xf] == pcVar15[0xb]);
            auVar34[0xc] = -(param_2[0x10] == pcVar15[0xc]);
            auVar34[0xd] = -(param_2[0x11] == pcVar15[0xd]);
            auVar34[0xe] = -(param_2[0x12] == pcVar15[0xe]);
            auVar34[0xf] = -(param_2[0x13] == pcVar15[0xf]);
            auVar44[0] = -(param_2[0x14] == pcVar15[0x10]);
            auVar44[1] = -(param_2[0x15] == pcVar15[0x11]);
            auVar44[2] = -(param_2[0x16] == pcVar15[0x12]);
            auVar44[3] = -(param_2[0x17] == pcVar15[0x13]);
            auVar44[4] = -(param_2[0x18] == pcVar15[0x14]);
            auVar44[5] = -(param_2[0x19] == pcVar15[0x15]);
            auVar44[6] = -(param_2[0x1a] == pcVar15[0x16]);
            auVar44[7] = -(param_2[0x1b] == pcVar15[0x17]);
            auVar44[8] = -(param_2[0x1c] == pcVar15[0x18]);
            auVar44[9] = -(param_2[0x1d] == pcVar15[0x19]);
            auVar44[10] = -(param_2[0x1e] == pcVar15[0x1a]);
            auVar44[0xb] = -(param_2[0x1f] == pcVar15[0x1b]);
            auVar44[0xc] = -(param_2[0x20] == pcVar15[0x1c]);
            auVar44[0xd] = -(param_2[0x21] == pcVar15[0x1d]);
            auVar44[0xe] = -(param_2[0x22] == pcVar15[0x1e]);
            auVar44[0xf] = -(param_2[0x23] == pcVar15[0x1f]);
            auVar44 = auVar44 & auVar34;
            pcVar15 = pcVar15 + 0x20;
            pcVar13 = param_2 + 0x20;
            uVar12 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) - 0xffff;
            param_1 = (char *)(ulong)uVar12;
            if (uVar12 == 0) {
              param_2 = param_2 + (uVar11 - 0xc);
              pcVar15 = pcVar15 + param_3;
              goto LAB_0074b4c0;
            }
          }
          else {
            auVar22[0] = -(param_2[4] == *pcVar15);
            auVar22[1] = -(param_2[5] == pcVar15[1]);
            auVar22[2] = -(param_2[6] == pcVar15[2]);
            auVar22[3] = -(param_2[7] == pcVar15[3]);
            auVar22[4] = -(param_2[8] == pcVar15[4]);
            auVar22[5] = -(param_2[9] == pcVar15[5]);
            auVar22[6] = -(param_2[10] == pcVar15[6]);
            auVar22[7] = -(param_2[0xb] == pcVar15[7]);
            auVar22[8] = -(param_2[0xc] == pcVar15[8]);
            auVar22[9] = -(param_2[0xd] == pcVar15[9]);
            auVar22[10] = -(param_2[0xe] == pcVar15[10]);
            auVar22[0xb] = -(param_2[0xf] == pcVar15[0xb]);
            auVar22[0xc] = -(param_2[0x10] == pcVar15[0xc]);
            auVar22[0xd] = -(param_2[0x11] == pcVar15[0xd]);
            auVar22[0xe] = -(param_2[0x12] == pcVar15[0xe]);
            auVar22[0xf] = -(param_2[0x13] == pcVar15[0xf]);
            auVar45[0] = -(param_2[0x14] == pcVar15[0x10]);
            auVar45[1] = -(param_2[0x15] == pcVar15[0x11]);
            auVar45[2] = -(param_2[0x16] == pcVar15[0x12]);
            auVar45[3] = -(param_2[0x17] == pcVar15[0x13]);
            auVar45[4] = -(param_2[0x18] == pcVar15[0x14]);
            auVar45[5] = -(param_2[0x19] == pcVar15[0x15]);
            auVar45[6] = -(param_2[0x1a] == pcVar15[0x16]);
            auVar45[7] = -(param_2[0x1b] == pcVar15[0x17]);
            auVar45[8] = -(param_2[0x1c] == pcVar15[0x18]);
            auVar45[9] = -(param_2[0x1d] == pcVar15[0x19]);
            auVar45[10] = -(param_2[0x1e] == pcVar15[0x1a]);
            auVar45[0xb] = -(param_2[0x1f] == pcVar15[0x1b]);
            auVar45[0xc] = -(param_2[0x20] == pcVar15[0x1c]);
            auVar45[0xd] = -(param_2[0x21] == pcVar15[0x1d]);
            auVar45[0xe] = -(param_2[0x22] == pcVar15[0x1e]);
            auVar45[0xf] = -(param_2[0x23] == pcVar15[0x1f]);
            param_3 = uVar11 - 0x50;
            do {
              auVar34 = auVar22;
              pcVar16 = pcVar15;
              pcVar14 = param_2;
              uVar11 = param_3;
              auVar45 = auVar45 & auVar34;
              param_3 = uVar11 - 0x20;
              uVar12 = ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar45[0xf] >> 7) << 0xf) - 0xffff) -
                       (uint)(uVar11 < 0x20);
              auVar22[0] = -(pcVar14[0x24] == pcVar16[0x20]);
              auVar22[1] = -(pcVar14[0x25] == pcVar16[0x21]);
              auVar22[2] = -(pcVar14[0x26] == pcVar16[0x22]);
              auVar22[3] = -(pcVar14[0x27] == pcVar16[0x23]);
              auVar22[4] = -(pcVar14[0x28] == pcVar16[0x24]);
              auVar22[5] = -(pcVar14[0x29] == pcVar16[0x25]);
              auVar22[6] = -(pcVar14[0x2a] == pcVar16[0x26]);
              auVar22[7] = -(pcVar14[0x2b] == pcVar16[0x27]);
              auVar22[8] = -(pcVar14[0x2c] == pcVar16[0x28]);
              auVar22[9] = -(pcVar14[0x2d] == pcVar16[0x29]);
              auVar22[10] = -(pcVar14[0x2e] == pcVar16[0x2a]);
              auVar22[0xb] = -(pcVar14[0x2f] == pcVar16[0x2b]);
              auVar22[0xc] = -(pcVar14[0x30] == pcVar16[0x2c]);
              auVar22[0xd] = -(pcVar14[0x31] == pcVar16[0x2d]);
              auVar22[0xe] = -(pcVar14[0x32] == pcVar16[0x2e]);
              auVar22[0xf] = -(pcVar14[0x33] == pcVar16[0x2f]);
              pcVar13 = pcVar14 + 0x20;
              auVar45[0] = -(pcVar14[0x34] == pcVar16[0x30]);
              auVar45[1] = -(pcVar14[0x35] == pcVar16[0x31]);
              auVar45[2] = -(pcVar14[0x36] == pcVar16[0x32]);
              auVar45[3] = -(pcVar14[0x37] == pcVar16[0x33]);
              auVar45[4] = -(pcVar14[0x38] == pcVar16[0x34]);
              auVar45[5] = -(pcVar14[0x39] == pcVar16[0x35]);
              auVar45[6] = -(pcVar14[0x3a] == pcVar16[0x36]);
              auVar45[7] = -(pcVar14[0x3b] == pcVar16[0x37]);
              auVar45[8] = -(pcVar14[0x3c] == pcVar16[0x38]);
              auVar45[9] = -(pcVar14[0x3d] == pcVar16[0x39]);
              auVar45[10] = -(pcVar14[0x3e] == pcVar16[0x3a]);
              auVar45[0xb] = -(pcVar14[0x3f] == pcVar16[0x3b]);
              auVar45[0xc] = -(pcVar14[0x40] == pcVar16[0x3c]);
              auVar45[0xd] = -(pcVar14[0x41] == pcVar16[0x3d]);
              auVar45[0xe] = -(pcVar14[0x42] == pcVar16[0x3e]);
              auVar45[0xf] = -(pcVar14[0x43] == pcVar16[0x3f]);
              pcVar15 = pcVar16 + 0x20;
              param_2 = pcVar13;
            } while (uVar12 == 0);
            auVar45 = auVar45 & auVar22;
            if ((long)param_3 < 0) {
              uVar12 = uVar12 + 1;
              param_3 = uVar11;
            }
            param_1 = (char *)(ulong)uVar12;
            if (uVar12 == 0) {
              pcVar15 = pcVar16 + 0x40;
              pcVar13 = pcVar14 + 0x40;
              uVar12 = (ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar45[0xf] >> 7) << 0xf) - 0xffff;
              param_1 = (char *)(ulong)uVar12;
              auVar34 = auVar22;
              if (uVar12 == 0) {
                param_2 = pcVar14 + param_3 + 0x44;
                pcVar15 = pcVar15 + param_3;
                goto LAB_0074b4c0;
              }
            }
          }
        }
        else if (uVar12 == 5) {
          param_3 = uVar11 - 0x30;
          uVar8 = 5;
          if (uVar11 < 0x50) {
            auVar34[0] = -(param_2[5] == *pcVar15);
            auVar34[1] = -(param_2[6] == pcVar15[1]);
            auVar34[2] = -(param_2[7] == pcVar15[2]);
            auVar34[3] = -(param_2[8] == pcVar15[3]);
            auVar34[4] = -(param_2[9] == pcVar15[4]);
            auVar34[5] = -(param_2[10] == pcVar15[5]);
            auVar34[6] = -(param_2[0xb] == pcVar15[6]);
            auVar34[7] = -(param_2[0xc] == pcVar15[7]);
            auVar34[8] = -(param_2[0xd] == pcVar15[8]);
            auVar34[9] = -(param_2[0xe] == pcVar15[9]);
            auVar34[10] = -(param_2[0xf] == pcVar15[10]);
            auVar34[0xb] = -(param_2[0x10] == pcVar15[0xb]);
            auVar34[0xc] = -(param_2[0x11] == pcVar15[0xc]);
            auVar34[0xd] = -(param_2[0x12] == pcVar15[0xd]);
            auVar34[0xe] = -(param_2[0x13] == pcVar15[0xe]);
            auVar34[0xf] = -(param_2[0x14] == pcVar15[0xf]);
            auVar46[0] = -(param_2[0x15] == pcVar15[0x10]);
            auVar46[1] = -(param_2[0x16] == pcVar15[0x11]);
            auVar46[2] = -(param_2[0x17] == pcVar15[0x12]);
            auVar46[3] = -(param_2[0x18] == pcVar15[0x13]);
            auVar46[4] = -(param_2[0x19] == pcVar15[0x14]);
            auVar46[5] = -(param_2[0x1a] == pcVar15[0x15]);
            auVar46[6] = -(param_2[0x1b] == pcVar15[0x16]);
            auVar46[7] = -(param_2[0x1c] == pcVar15[0x17]);
            auVar46[8] = -(param_2[0x1d] == pcVar15[0x18]);
            auVar46[9] = -(param_2[0x1e] == pcVar15[0x19]);
            auVar46[10] = -(param_2[0x1f] == pcVar15[0x1a]);
            auVar46[0xb] = -(param_2[0x20] == pcVar15[0x1b]);
            auVar46[0xc] = -(param_2[0x21] == pcVar15[0x1c]);
            auVar46[0xd] = -(param_2[0x22] == pcVar15[0x1d]);
            auVar46[0xe] = -(param_2[0x23] == pcVar15[0x1e]);
            auVar46[0xf] = -(param_2[0x24] == pcVar15[0x1f]);
            auVar46 = auVar46 & auVar34;
            pcVar15 = pcVar15 + 0x20;
            pcVar13 = param_2 + 0x20;
            uVar12 = (ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar46[0xf] >> 7) << 0xf) - 0xffff;
            param_1 = (char *)(ulong)uVar12;
            if (uVar12 == 0) {
              param_2 = param_2 + (uVar11 - 0xb);
              pcVar15 = pcVar15 + param_3;
              goto LAB_0074b4c0;
            }
          }
          else {
            auVar23[0] = -(param_2[5] == *pcVar15);
            auVar23[1] = -(param_2[6] == pcVar15[1]);
            auVar23[2] = -(param_2[7] == pcVar15[2]);
            auVar23[3] = -(param_2[8] == pcVar15[3]);
            auVar23[4] = -(param_2[9] == pcVar15[4]);
            auVar23[5] = -(param_2[10] == pcVar15[5]);
            auVar23[6] = -(param_2[0xb] == pcVar15[6]);
            auVar23[7] = -(param_2[0xc] == pcVar15[7]);
            auVar23[8] = -(param_2[0xd] == pcVar15[8]);
            auVar23[9] = -(param_2[0xe] == pcVar15[9]);
            auVar23[10] = -(param_2[0xf] == pcVar15[10]);
            auVar23[0xb] = -(param_2[0x10] == pcVar15[0xb]);
            auVar23[0xc] = -(param_2[0x11] == pcVar15[0xc]);
            auVar23[0xd] = -(param_2[0x12] == pcVar15[0xd]);
            auVar23[0xe] = -(param_2[0x13] == pcVar15[0xe]);
            auVar23[0xf] = -(param_2[0x14] == pcVar15[0xf]);
            auVar47[0] = -(param_2[0x15] == pcVar15[0x10]);
            auVar47[1] = -(param_2[0x16] == pcVar15[0x11]);
            auVar47[2] = -(param_2[0x17] == pcVar15[0x12]);
            auVar47[3] = -(param_2[0x18] == pcVar15[0x13]);
            auVar47[4] = -(param_2[0x19] == pcVar15[0x14]);
            auVar47[5] = -(param_2[0x1a] == pcVar15[0x15]);
            auVar47[6] = -(param_2[0x1b] == pcVar15[0x16]);
            auVar47[7] = -(param_2[0x1c] == pcVar15[0x17]);
            auVar47[8] = -(param_2[0x1d] == pcVar15[0x18]);
            auVar47[9] = -(param_2[0x1e] == pcVar15[0x19]);
            auVar47[10] = -(param_2[0x1f] == pcVar15[0x1a]);
            auVar47[0xb] = -(param_2[0x20] == pcVar15[0x1b]);
            auVar47[0xc] = -(param_2[0x21] == pcVar15[0x1c]);
            auVar47[0xd] = -(param_2[0x22] == pcVar15[0x1d]);
            auVar47[0xe] = -(param_2[0x23] == pcVar15[0x1e]);
            auVar47[0xf] = -(param_2[0x24] == pcVar15[0x1f]);
            param_3 = uVar11 - 0x50;
            do {
              auVar34 = auVar23;
              pcVar16 = pcVar15;
              pcVar14 = param_2;
              uVar11 = param_3;
              auVar47 = auVar47 & auVar34;
              param_3 = uVar11 - 0x20;
              uVar12 = ((ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar47[0xf] >> 7) << 0xf) - 0xffff) -
                       (uint)(uVar11 < 0x20);
              auVar23[0] = -(pcVar14[0x25] == pcVar16[0x20]);
              auVar23[1] = -(pcVar14[0x26] == pcVar16[0x21]);
              auVar23[2] = -(pcVar14[0x27] == pcVar16[0x22]);
              auVar23[3] = -(pcVar14[0x28] == pcVar16[0x23]);
              auVar23[4] = -(pcVar14[0x29] == pcVar16[0x24]);
              auVar23[5] = -(pcVar14[0x2a] == pcVar16[0x25]);
              auVar23[6] = -(pcVar14[0x2b] == pcVar16[0x26]);
              auVar23[7] = -(pcVar14[0x2c] == pcVar16[0x27]);
              auVar23[8] = -(pcVar14[0x2d] == pcVar16[0x28]);
              auVar23[9] = -(pcVar14[0x2e] == pcVar16[0x29]);
              auVar23[10] = -(pcVar14[0x2f] == pcVar16[0x2a]);
              auVar23[0xb] = -(pcVar14[0x30] == pcVar16[0x2b]);
              auVar23[0xc] = -(pcVar14[0x31] == pcVar16[0x2c]);
              auVar23[0xd] = -(pcVar14[0x32] == pcVar16[0x2d]);
              auVar23[0xe] = -(pcVar14[0x33] == pcVar16[0x2e]);
              auVar23[0xf] = -(pcVar14[0x34] == pcVar16[0x2f]);
              pcVar13 = pcVar14 + 0x20;
              auVar47[0] = -(pcVar14[0x35] == pcVar16[0x30]);
              auVar47[1] = -(pcVar14[0x36] == pcVar16[0x31]);
              auVar47[2] = -(pcVar14[0x37] == pcVar16[0x32]);
              auVar47[3] = -(pcVar14[0x38] == pcVar16[0x33]);
              auVar47[4] = -(pcVar14[0x39] == pcVar16[0x34]);
              auVar47[5] = -(pcVar14[0x3a] == pcVar16[0x35]);
              auVar47[6] = -(pcVar14[0x3b] == pcVar16[0x36]);
              auVar47[7] = -(pcVar14[0x3c] == pcVar16[0x37]);
              auVar47[8] = -(pcVar14[0x3d] == pcVar16[0x38]);
              auVar47[9] = -(pcVar14[0x3e] == pcVar16[0x39]);
              auVar47[10] = -(pcVar14[0x3f] == pcVar16[0x3a]);
              auVar47[0xb] = -(pcVar14[0x40] == pcVar16[0x3b]);
              auVar47[0xc] = -(pcVar14[0x41] == pcVar16[0x3c]);
              auVar47[0xd] = -(pcVar14[0x42] == pcVar16[0x3d]);
              auVar47[0xe] = -(pcVar14[0x43] == pcVar16[0x3e]);
              auVar47[0xf] = -(pcVar14[0x44] == pcVar16[0x3f]);
              pcVar15 = pcVar16 + 0x20;
              param_2 = pcVar13;
            } while (uVar12 == 0);
            auVar47 = auVar47 & auVar23;
            if ((long)param_3 < 0) {
              uVar12 = uVar12 + 1;
              param_3 = uVar11;
            }
            param_1 = (char *)(ulong)uVar12;
            if (uVar12 == 0) {
              pcVar15 = pcVar16 + 0x40;
              pcVar13 = pcVar14 + 0x40;
              uVar12 = (ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar47[0xf] >> 7) << 0xf) - 0xffff;
              param_1 = (char *)(ulong)uVar12;
              auVar34 = auVar23;
              if (uVar12 == 0) {
                param_2 = pcVar14 + param_3 + 0x45;
                pcVar15 = pcVar15 + param_3;
                goto LAB_0074b4c0;
              }
            }
          }
        }
        else if (uVar12 == 6) {
          param_3 = uVar11 - 0x30;
          uVar8 = 6;
          if (uVar11 < 0x50) {
            auVar34[0] = -(param_2[6] == *pcVar15);
            auVar34[1] = -(param_2[7] == pcVar15[1]);
            auVar34[2] = -(param_2[8] == pcVar15[2]);
            auVar34[3] = -(param_2[9] == pcVar15[3]);
            auVar34[4] = -(param_2[10] == pcVar15[4]);
            auVar34[5] = -(param_2[0xb] == pcVar15[5]);
            auVar34[6] = -(param_2[0xc] == pcVar15[6]);
            auVar34[7] = -(param_2[0xd] == pcVar15[7]);
            auVar34[8] = -(param_2[0xe] == pcVar15[8]);
            auVar34[9] = -(param_2[0xf] == pcVar15[9]);
            auVar34[10] = -(param_2[0x10] == pcVar15[10]);
            auVar34[0xb] = -(param_2[0x11] == pcVar15[0xb]);
            auVar34[0xc] = -(param_2[0x12] == pcVar15[0xc]);
            auVar34[0xd] = -(param_2[0x13] == pcVar15[0xd]);
            auVar34[0xe] = -(param_2[0x14] == pcVar15[0xe]);
            auVar34[0xf] = -(param_2[0x15] == pcVar15[0xf]);
            auVar48[0] = -(param_2[0x16] == pcVar15[0x10]);
            auVar48[1] = -(param_2[0x17] == pcVar15[0x11]);
            auVar48[2] = -(param_2[0x18] == pcVar15[0x12]);
            auVar48[3] = -(param_2[0x19] == pcVar15[0x13]);
            auVar48[4] = -(param_2[0x1a] == pcVar15[0x14]);
            auVar48[5] = -(param_2[0x1b] == pcVar15[0x15]);
            auVar48[6] = -(param_2[0x1c] == pcVar15[0x16]);
            auVar48[7] = -(param_2[0x1d] == pcVar15[0x17]);
            auVar48[8] = -(param_2[0x1e] == pcVar15[0x18]);
            auVar48[9] = -(param_2[0x1f] == pcVar15[0x19]);
            auVar48[10] = -(param_2[0x20] == pcVar15[0x1a]);
            auVar48[0xb] = -(param_2[0x21] == pcVar15[0x1b]);
            auVar48[0xc] = -(param_2[0x22] == pcVar15[0x1c]);
            auVar48[0xd] = -(param_2[0x23] == pcVar15[0x1d]);
            auVar48[0xe] = -(param_2[0x24] == pcVar15[0x1e]);
            auVar48[0xf] = -(param_2[0x25] == pcVar15[0x1f]);
            auVar48 = auVar48 & auVar34;
            pcVar15 = pcVar15 + 0x20;
            pcVar13 = param_2 + 0x20;
            uVar12 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar48[0xf] >> 7) << 0xf) - 0xffff;
            param_1 = (char *)(ulong)uVar12;
            if (uVar12 == 0) {
              param_2 = param_2 + (uVar11 - 10);
              pcVar15 = pcVar15 + param_3;
              goto LAB_0074b4c0;
            }
          }
          else {
            auVar24[0] = -(param_2[6] == *pcVar15);
            auVar24[1] = -(param_2[7] == pcVar15[1]);
            auVar24[2] = -(param_2[8] == pcVar15[2]);
            auVar24[3] = -(param_2[9] == pcVar15[3]);
            auVar24[4] = -(param_2[10] == pcVar15[4]);
            auVar24[5] = -(param_2[0xb] == pcVar15[5]);
            auVar24[6] = -(param_2[0xc] == pcVar15[6]);
            auVar24[7] = -(param_2[0xd] == pcVar15[7]);
            auVar24[8] = -(param_2[0xe] == pcVar15[8]);
            auVar24[9] = -(param_2[0xf] == pcVar15[9]);
            auVar24[10] = -(param_2[0x10] == pcVar15[10]);
            auVar24[0xb] = -(param_2[0x11] == pcVar15[0xb]);
            auVar24[0xc] = -(param_2[0x12] == pcVar15[0xc]);
            auVar24[0xd] = -(param_2[0x13] == pcVar15[0xd]);
            auVar24[0xe] = -(param_2[0x14] == pcVar15[0xe]);
            auVar24[0xf] = -(param_2[0x15] == pcVar15[0xf]);
            auVar49[0] = -(param_2[0x16] == pcVar15[0x10]);
            auVar49[1] = -(param_2[0x17] == pcVar15[0x11]);
            auVar49[2] = -(param_2[0x18] == pcVar15[0x12]);
            auVar49[3] = -(param_2[0x19] == pcVar15[0x13]);
            auVar49[4] = -(param_2[0x1a] == pcVar15[0x14]);
            auVar49[5] = -(param_2[0x1b] == pcVar15[0x15]);
            auVar49[6] = -(param_2[0x1c] == pcVar15[0x16]);
            auVar49[7] = -(param_2[0x1d] == pcVar15[0x17]);
            auVar49[8] = -(param_2[0x1e] == pcVar15[0x18]);
            auVar49[9] = -(param_2[0x1f] == pcVar15[0x19]);
            auVar49[10] = -(param_2[0x20] == pcVar15[0x1a]);
            auVar49[0xb] = -(param_2[0x21] == pcVar15[0x1b]);
            auVar49[0xc] = -(param_2[0x22] == pcVar15[0x1c]);
            auVar49[0xd] = -(param_2[0x23] == pcVar15[0x1d]);
            auVar49[0xe] = -(param_2[0x24] == pcVar15[0x1e]);
            auVar49[0xf] = -(param_2[0x25] == pcVar15[0x1f]);
            param_3 = uVar11 - 0x50;
            do {
              auVar34 = auVar24;
              pcVar16 = pcVar15;
              pcVar14 = param_2;
              uVar11 = param_3;
              auVar49 = auVar49 & auVar34;
              param_3 = uVar11 - 0x20;
              uVar12 = ((ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar49[0xf] >> 7) << 0xf) - 0xffff) -
                       (uint)(uVar11 < 0x20);
              auVar24[0] = -(pcVar14[0x26] == pcVar16[0x20]);
              auVar24[1] = -(pcVar14[0x27] == pcVar16[0x21]);
              auVar24[2] = -(pcVar14[0x28] == pcVar16[0x22]);
              auVar24[3] = -(pcVar14[0x29] == pcVar16[0x23]);
              auVar24[4] = -(pcVar14[0x2a] == pcVar16[0x24]);
              auVar24[5] = -(pcVar14[0x2b] == pcVar16[0x25]);
              auVar24[6] = -(pcVar14[0x2c] == pcVar16[0x26]);
              auVar24[7] = -(pcVar14[0x2d] == pcVar16[0x27]);
              auVar24[8] = -(pcVar14[0x2e] == pcVar16[0x28]);
              auVar24[9] = -(pcVar14[0x2f] == pcVar16[0x29]);
              auVar24[10] = -(pcVar14[0x30] == pcVar16[0x2a]);
              auVar24[0xb] = -(pcVar14[0x31] == pcVar16[0x2b]);
              auVar24[0xc] = -(pcVar14[0x32] == pcVar16[0x2c]);
              auVar24[0xd] = -(pcVar14[0x33] == pcVar16[0x2d]);
              auVar24[0xe] = -(pcVar14[0x34] == pcVar16[0x2e]);
              auVar24[0xf] = -(pcVar14[0x35] == pcVar16[0x2f]);
              pcVar13 = pcVar14 + 0x20;
              auVar49[0] = -(pcVar14[0x36] == pcVar16[0x30]);
              auVar49[1] = -(pcVar14[0x37] == pcVar16[0x31]);
              auVar49[2] = -(pcVar14[0x38] == pcVar16[0x32]);
              auVar49[3] = -(pcVar14[0x39] == pcVar16[0x33]);
              auVar49[4] = -(pcVar14[0x3a] == pcVar16[0x34]);
              auVar49[5] = -(pcVar14[0x3b] == pcVar16[0x35]);
              auVar49[6] = -(pcVar14[0x3c] == pcVar16[0x36]);
              auVar49[7] = -(pcVar14[0x3d] == pcVar16[0x37]);
              auVar49[8] = -(pcVar14[0x3e] == pcVar16[0x38]);
              auVar49[9] = -(pcVar14[0x3f] == pcVar16[0x39]);
              auVar49[10] = -(pcVar14[0x40] == pcVar16[0x3a]);
              auVar49[0xb] = -(pcVar14[0x41] == pcVar16[0x3b]);
              auVar49[0xc] = -(pcVar14[0x42] == pcVar16[0x3c]);
              auVar49[0xd] = -(pcVar14[0x43] == pcVar16[0x3d]);
              auVar49[0xe] = -(pcVar14[0x44] == pcVar16[0x3e]);
              auVar49[0xf] = -(pcVar14[0x45] == pcVar16[0x3f]);
              pcVar15 = pcVar16 + 0x20;
              param_2 = pcVar13;
            } while (uVar12 == 0);
            auVar49 = auVar49 & auVar24;
            if ((long)param_3 < 0) {
              uVar12 = uVar12 + 1;
              param_3 = uVar11;
            }
            param_1 = (char *)(ulong)uVar12;
            if (uVar12 == 0) {
              pcVar15 = pcVar16 + 0x40;
              pcVar13 = pcVar14 + 0x40;
              uVar12 = (ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar49[0xf] >> 7) << 0xf) - 0xffff;
              param_1 = (char *)(ulong)uVar12;
              auVar34 = auVar24;
              if (uVar12 == 0) {
                param_2 = pcVar14 + param_3 + 0x46;
                pcVar15 = pcVar15 + param_3;
                goto LAB_0074b4c0;
              }
            }
          }
        }
        else {
          param_3 = uVar11 - 0x30;
          uVar8 = (ulong)uVar12;
          if (uVar11 < 0x50) {
            auVar34[0] = -(param_2[7] == *pcVar15);
            auVar34[1] = -(param_2[8] == pcVar15[1]);
            auVar34[2] = -(param_2[9] == pcVar15[2]);
            auVar34[3] = -(param_2[10] == pcVar15[3]);
            auVar34[4] = -(param_2[0xb] == pcVar15[4]);
            auVar34[5] = -(param_2[0xc] == pcVar15[5]);
            auVar34[6] = -(param_2[0xd] == pcVar15[6]);
            auVar34[7] = -(param_2[0xe] == pcVar15[7]);
            auVar34[8] = -(param_2[0xf] == pcVar15[8]);
            auVar34[9] = -(param_2[0x10] == pcVar15[9]);
            auVar34[10] = -(param_2[0x11] == pcVar15[10]);
            auVar34[0xb] = -(param_2[0x12] == pcVar15[0xb]);
            auVar34[0xc] = -(param_2[0x13] == pcVar15[0xc]);
            auVar34[0xd] = -(param_2[0x14] == pcVar15[0xd]);
            auVar34[0xe] = -(param_2[0x15] == pcVar15[0xe]);
            auVar34[0xf] = -(param_2[0x16] == pcVar15[0xf]);
            auVar50[0] = -(param_2[0x17] == pcVar15[0x10]);
            auVar50[1] = -(param_2[0x18] == pcVar15[0x11]);
            auVar50[2] = -(param_2[0x19] == pcVar15[0x12]);
            auVar50[3] = -(param_2[0x1a] == pcVar15[0x13]);
            auVar50[4] = -(param_2[0x1b] == pcVar15[0x14]);
            auVar50[5] = -(param_2[0x1c] == pcVar15[0x15]);
            auVar50[6] = -(param_2[0x1d] == pcVar15[0x16]);
            auVar50[7] = -(param_2[0x1e] == pcVar15[0x17]);
            auVar50[8] = -(param_2[0x1f] == pcVar15[0x18]);
            auVar50[9] = -(param_2[0x20] == pcVar15[0x19]);
            auVar50[10] = -(param_2[0x21] == pcVar15[0x1a]);
            auVar50[0xb] = -(param_2[0x22] == pcVar15[0x1b]);
            auVar50[0xc] = -(param_2[0x23] == pcVar15[0x1c]);
            auVar50[0xd] = -(param_2[0x24] == pcVar15[0x1d]);
            auVar50[0xe] = -(param_2[0x25] == pcVar15[0x1e]);
            auVar50[0xf] = -(param_2[0x26] == pcVar15[0x1f]);
            auVar50 = auVar50 & auVar34;
            pcVar15 = pcVar15 + 0x20;
            pcVar13 = param_2 + 0x20;
            uVar12 = (ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar50[0xf] >> 7) << 0xf) - 0xffff;
            param_1 = (char *)(ulong)uVar12;
            if (uVar12 == 0) {
              param_2 = param_2 + (uVar11 - 9);
              pcVar15 = pcVar15 + param_3;
              goto LAB_0074b4c0;
            }
          }
          else {
            auVar25[0] = -(param_2[7] == *pcVar15);
            auVar25[1] = -(param_2[8] == pcVar15[1]);
            auVar25[2] = -(param_2[9] == pcVar15[2]);
            auVar25[3] = -(param_2[10] == pcVar15[3]);
            auVar25[4] = -(param_2[0xb] == pcVar15[4]);
            auVar25[5] = -(param_2[0xc] == pcVar15[5]);
            auVar25[6] = -(param_2[0xd] == pcVar15[6]);
            auVar25[7] = -(param_2[0xe] == pcVar15[7]);
            auVar25[8] = -(param_2[0xf] == pcVar15[8]);
            auVar25[9] = -(param_2[0x10] == pcVar15[9]);
            auVar25[10] = -(param_2[0x11] == pcVar15[10]);
            auVar25[0xb] = -(param_2[0x12] == pcVar15[0xb]);
            auVar25[0xc] = -(param_2[0x13] == pcVar15[0xc]);
            auVar25[0xd] = -(param_2[0x14] == pcVar15[0xd]);
            auVar25[0xe] = -(param_2[0x15] == pcVar15[0xe]);
            auVar25[0xf] = -(param_2[0x16] == pcVar15[0xf]);
            auVar51[0] = -(param_2[0x17] == pcVar15[0x10]);
            auVar51[1] = -(param_2[0x18] == pcVar15[0x11]);
            auVar51[2] = -(param_2[0x19] == pcVar15[0x12]);
            auVar51[3] = -(param_2[0x1a] == pcVar15[0x13]);
            auVar51[4] = -(param_2[0x1b] == pcVar15[0x14]);
            auVar51[5] = -(param_2[0x1c] == pcVar15[0x15]);
            auVar51[6] = -(param_2[0x1d] == pcVar15[0x16]);
            auVar51[7] = -(param_2[0x1e] == pcVar15[0x17]);
            auVar51[8] = -(param_2[0x1f] == pcVar15[0x18]);
            auVar51[9] = -(param_2[0x20] == pcVar15[0x19]);
            auVar51[10] = -(param_2[0x21] == pcVar15[0x1a]);
            auVar51[0xb] = -(param_2[0x22] == pcVar15[0x1b]);
            auVar51[0xc] = -(param_2[0x23] == pcVar15[0x1c]);
            auVar51[0xd] = -(param_2[0x24] == pcVar15[0x1d]);
            auVar51[0xe] = -(param_2[0x25] == pcVar15[0x1e]);
            auVar51[0xf] = -(param_2[0x26] == pcVar15[0x1f]);
            param_3 = uVar11 - 0x50;
            do {
              auVar34 = auVar25;
              pcVar16 = pcVar15;
              pcVar14 = param_2;
              uVar11 = param_3;
              auVar51 = auVar51 & auVar34;
              param_3 = uVar11 - 0x20;
              uVar12 = ((ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar51[0xf] >> 7) << 0xf) - 0xffff) -
                       (uint)(uVar11 < 0x20);
              auVar25[0] = -(pcVar14[0x27] == pcVar16[0x20]);
              auVar25[1] = -(pcVar14[0x28] == pcVar16[0x21]);
              auVar25[2] = -(pcVar14[0x29] == pcVar16[0x22]);
              auVar25[3] = -(pcVar14[0x2a] == pcVar16[0x23]);
              auVar25[4] = -(pcVar14[0x2b] == pcVar16[0x24]);
              auVar25[5] = -(pcVar14[0x2c] == pcVar16[0x25]);
              auVar25[6] = -(pcVar14[0x2d] == pcVar16[0x26]);
              auVar25[7] = -(pcVar14[0x2e] == pcVar16[0x27]);
              auVar25[8] = -(pcVar14[0x2f] == pcVar16[0x28]);
              auVar25[9] = -(pcVar14[0x30] == pcVar16[0x29]);
              auVar25[10] = -(pcVar14[0x31] == pcVar16[0x2a]);
              auVar25[0xb] = -(pcVar14[0x32] == pcVar16[0x2b]);
              auVar25[0xc] = -(pcVar14[0x33] == pcVar16[0x2c]);
              auVar25[0xd] = -(pcVar14[0x34] == pcVar16[0x2d]);
              auVar25[0xe] = -(pcVar14[0x35] == pcVar16[0x2e]);
              auVar25[0xf] = -(pcVar14[0x36] == pcVar16[0x2f]);
              pcVar13 = pcVar14 + 0x20;
              auVar51[0] = -(pcVar14[0x37] == pcVar16[0x30]);
              auVar51[1] = -(pcVar14[0x38] == pcVar16[0x31]);
              auVar51[2] = -(pcVar14[0x39] == pcVar16[0x32]);
              auVar51[3] = -(pcVar14[0x3a] == pcVar16[0x33]);
              auVar51[4] = -(pcVar14[0x3b] == pcVar16[0x34]);
              auVar51[5] = -(pcVar14[0x3c] == pcVar16[0x35]);
              auVar51[6] = -(pcVar14[0x3d] == pcVar16[0x36]);
              auVar51[7] = -(pcVar14[0x3e] == pcVar16[0x37]);
              auVar51[8] = -(pcVar14[0x3f] == pcVar16[0x38]);
              auVar51[9] = -(pcVar14[0x40] == pcVar16[0x39]);
              auVar51[10] = -(pcVar14[0x41] == pcVar16[0x3a]);
              auVar51[0xb] = -(pcVar14[0x42] == pcVar16[0x3b]);
              auVar51[0xc] = -(pcVar14[0x43] == pcVar16[0x3c]);
              auVar51[0xd] = -(pcVar14[0x44] == pcVar16[0x3d]);
              auVar51[0xe] = -(pcVar14[0x45] == pcVar16[0x3e]);
              auVar51[0xf] = -(pcVar14[0x46] == pcVar16[0x3f]);
              pcVar15 = pcVar16 + 0x20;
              param_2 = pcVar13;
            } while (uVar12 == 0);
            auVar51 = auVar51 & auVar25;
            if ((long)param_3 < 0) {
              uVar12 = uVar12 + 1;
              param_3 = uVar11;
            }
            param_1 = (char *)(ulong)uVar12;
            if (uVar12 == 0) {
              pcVar15 = pcVar16 + 0x40;
              pcVar13 = pcVar14 + 0x40;
              uVar12 = (ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar51[0xf] >> 7) << 0xf) - 0xffff;
              param_1 = (char *)(ulong)uVar12;
              auVar34 = auVar25;
              if (uVar12 == 0) {
                param_2 = pcVar14 + param_3 + 0x47;
                pcVar15 = pcVar15 + param_3;
                goto LAB_0074b4c0;
              }
            }
          }
        }
      }
      else if (uVar12 == 8) {
        param_3 = uVar11 - 0x30;
        uVar8 = 8;
        if (uVar11 < 0x50) {
          auVar34[0] = -(param_2[8] == *pcVar15);
          auVar34[1] = -(param_2[9] == pcVar15[1]);
          auVar34[2] = -(param_2[10] == pcVar15[2]);
          auVar34[3] = -(param_2[0xb] == pcVar15[3]);
          auVar34[4] = -(param_2[0xc] == pcVar15[4]);
          auVar34[5] = -(param_2[0xd] == pcVar15[5]);
          auVar34[6] = -(param_2[0xe] == pcVar15[6]);
          auVar34[7] = -(param_2[0xf] == pcVar15[7]);
          auVar34[8] = -(param_2[0x10] == pcVar15[8]);
          auVar34[9] = -(param_2[0x11] == pcVar15[9]);
          auVar34[10] = -(param_2[0x12] == pcVar15[10]);
          auVar34[0xb] = -(param_2[0x13] == pcVar15[0xb]);
          auVar34[0xc] = -(param_2[0x14] == pcVar15[0xc]);
          auVar34[0xd] = -(param_2[0x15] == pcVar15[0xd]);
          auVar34[0xe] = -(param_2[0x16] == pcVar15[0xe]);
          auVar34[0xf] = -(param_2[0x17] == pcVar15[0xf]);
          auVar52[0] = -(param_2[0x18] == pcVar15[0x10]);
          auVar52[1] = -(param_2[0x19] == pcVar15[0x11]);
          auVar52[2] = -(param_2[0x1a] == pcVar15[0x12]);
          auVar52[3] = -(param_2[0x1b] == pcVar15[0x13]);
          auVar52[4] = -(param_2[0x1c] == pcVar15[0x14]);
          auVar52[5] = -(param_2[0x1d] == pcVar15[0x15]);
          auVar52[6] = -(param_2[0x1e] == pcVar15[0x16]);
          auVar52[7] = -(param_2[0x1f] == pcVar15[0x17]);
          auVar52[8] = -(param_2[0x20] == pcVar15[0x18]);
          auVar52[9] = -(param_2[0x21] == pcVar15[0x19]);
          auVar52[10] = -(param_2[0x22] == pcVar15[0x1a]);
          auVar52[0xb] = -(param_2[0x23] == pcVar15[0x1b]);
          auVar52[0xc] = -(param_2[0x24] == pcVar15[0x1c]);
          auVar52[0xd] = -(param_2[0x25] == pcVar15[0x1d]);
          auVar52[0xe] = -(param_2[0x26] == pcVar15[0x1e]);
          auVar52[0xf] = -(param_2[0x27] == pcVar15[0x1f]);
          auVar52 = auVar52 & auVar34;
          pcVar15 = pcVar15 + 0x20;
          pcVar13 = param_2 + 0x20;
          uVar12 = (ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar52[0xf] >> 7) << 0xf) - 0xffff;
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            param_2 = param_2 + (uVar11 - 8);
            pcVar15 = pcVar15 + param_3;
            goto LAB_0074b4c0;
          }
        }
        else {
          auVar26[0] = -(param_2[8] == *pcVar15);
          auVar26[1] = -(param_2[9] == pcVar15[1]);
          auVar26[2] = -(param_2[10] == pcVar15[2]);
          auVar26[3] = -(param_2[0xb] == pcVar15[3]);
          auVar26[4] = -(param_2[0xc] == pcVar15[4]);
          auVar26[5] = -(param_2[0xd] == pcVar15[5]);
          auVar26[6] = -(param_2[0xe] == pcVar15[6]);
          auVar26[7] = -(param_2[0xf] == pcVar15[7]);
          auVar26[8] = -(param_2[0x10] == pcVar15[8]);
          auVar26[9] = -(param_2[0x11] == pcVar15[9]);
          auVar26[10] = -(param_2[0x12] == pcVar15[10]);
          auVar26[0xb] = -(param_2[0x13] == pcVar15[0xb]);
          auVar26[0xc] = -(param_2[0x14] == pcVar15[0xc]);
          auVar26[0xd] = -(param_2[0x15] == pcVar15[0xd]);
          auVar26[0xe] = -(param_2[0x16] == pcVar15[0xe]);
          auVar26[0xf] = -(param_2[0x17] == pcVar15[0xf]);
          auVar53[0] = -(param_2[0x18] == pcVar15[0x10]);
          auVar53[1] = -(param_2[0x19] == pcVar15[0x11]);
          auVar53[2] = -(param_2[0x1a] == pcVar15[0x12]);
          auVar53[3] = -(param_2[0x1b] == pcVar15[0x13]);
          auVar53[4] = -(param_2[0x1c] == pcVar15[0x14]);
          auVar53[5] = -(param_2[0x1d] == pcVar15[0x15]);
          auVar53[6] = -(param_2[0x1e] == pcVar15[0x16]);
          auVar53[7] = -(param_2[0x1f] == pcVar15[0x17]);
          auVar53[8] = -(param_2[0x20] == pcVar15[0x18]);
          auVar53[9] = -(param_2[0x21] == pcVar15[0x19]);
          auVar53[10] = -(param_2[0x22] == pcVar15[0x1a]);
          auVar53[0xb] = -(param_2[0x23] == pcVar15[0x1b]);
          auVar53[0xc] = -(param_2[0x24] == pcVar15[0x1c]);
          auVar53[0xd] = -(param_2[0x25] == pcVar15[0x1d]);
          auVar53[0xe] = -(param_2[0x26] == pcVar15[0x1e]);
          auVar53[0xf] = -(param_2[0x27] == pcVar15[0x1f]);
          param_3 = uVar11 - 0x50;
          do {
            auVar34 = auVar26;
            pcVar16 = pcVar15;
            pcVar14 = param_2;
            uVar11 = param_3;
            auVar53 = auVar53 & auVar34;
            param_3 = uVar11 - 0x20;
            uVar12 = ((ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar53[0xf] >> 7) << 0xf) - 0xffff) -
                     (uint)(uVar11 < 0x20);
            auVar26[0] = -(pcVar14[0x28] == pcVar16[0x20]);
            auVar26[1] = -(pcVar14[0x29] == pcVar16[0x21]);
            auVar26[2] = -(pcVar14[0x2a] == pcVar16[0x22]);
            auVar26[3] = -(pcVar14[0x2b] == pcVar16[0x23]);
            auVar26[4] = -(pcVar14[0x2c] == pcVar16[0x24]);
            auVar26[5] = -(pcVar14[0x2d] == pcVar16[0x25]);
            auVar26[6] = -(pcVar14[0x2e] == pcVar16[0x26]);
            auVar26[7] = -(pcVar14[0x2f] == pcVar16[0x27]);
            auVar26[8] = -(pcVar14[0x30] == pcVar16[0x28]);
            auVar26[9] = -(pcVar14[0x31] == pcVar16[0x29]);
            auVar26[10] = -(pcVar14[0x32] == pcVar16[0x2a]);
            auVar26[0xb] = -(pcVar14[0x33] == pcVar16[0x2b]);
            auVar26[0xc] = -(pcVar14[0x34] == pcVar16[0x2c]);
            auVar26[0xd] = -(pcVar14[0x35] == pcVar16[0x2d]);
            auVar26[0xe] = -(pcVar14[0x36] == pcVar16[0x2e]);
            auVar26[0xf] = -(pcVar14[0x37] == pcVar16[0x2f]);
            pcVar13 = pcVar14 + 0x20;
            auVar53[0] = -(pcVar14[0x38] == pcVar16[0x30]);
            auVar53[1] = -(pcVar14[0x39] == pcVar16[0x31]);
            auVar53[2] = -(pcVar14[0x3a] == pcVar16[0x32]);
            auVar53[3] = -(pcVar14[0x3b] == pcVar16[0x33]);
            auVar53[4] = -(pcVar14[0x3c] == pcVar16[0x34]);
            auVar53[5] = -(pcVar14[0x3d] == pcVar16[0x35]);
            auVar53[6] = -(pcVar14[0x3e] == pcVar16[0x36]);
            auVar53[7] = -(pcVar14[0x3f] == pcVar16[0x37]);
            auVar53[8] = -(pcVar14[0x40] == pcVar16[0x38]);
            auVar53[9] = -(pcVar14[0x41] == pcVar16[0x39]);
            auVar53[10] = -(pcVar14[0x42] == pcVar16[0x3a]);
            auVar53[0xb] = -(pcVar14[0x43] == pcVar16[0x3b]);
            auVar53[0xc] = -(pcVar14[0x44] == pcVar16[0x3c]);
            auVar53[0xd] = -(pcVar14[0x45] == pcVar16[0x3d]);
            auVar53[0xe] = -(pcVar14[0x46] == pcVar16[0x3e]);
            auVar53[0xf] = -(pcVar14[0x47] == pcVar16[0x3f]);
            pcVar15 = pcVar16 + 0x20;
            param_2 = pcVar13;
          } while (uVar12 == 0);
          auVar53 = auVar53 & auVar26;
          if ((long)param_3 < 0) {
            uVar12 = uVar12 + 1;
            param_3 = uVar11;
          }
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            pcVar15 = pcVar16 + 0x40;
            pcVar13 = pcVar14 + 0x40;
            uVar12 = (ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar53[0xf] >> 7) << 0xf) - 0xffff;
            param_1 = (char *)(ulong)uVar12;
            auVar34 = auVar26;
            if (uVar12 == 0) {
              param_2 = pcVar14 + param_3 + 0x48;
              pcVar15 = pcVar15 + param_3;
              goto LAB_0074b4c0;
            }
          }
        }
      }
      else if (uVar12 == 9) {
        param_3 = uVar11 - 0x30;
        uVar8 = 9;
        if (uVar11 < 0x50) {
          auVar34[0] = -(param_2[9] == *pcVar15);
          auVar34[1] = -(param_2[10] == pcVar15[1]);
          auVar34[2] = -(param_2[0xb] == pcVar15[2]);
          auVar34[3] = -(param_2[0xc] == pcVar15[3]);
          auVar34[4] = -(param_2[0xd] == pcVar15[4]);
          auVar34[5] = -(param_2[0xe] == pcVar15[5]);
          auVar34[6] = -(param_2[0xf] == pcVar15[6]);
          auVar34[7] = -(param_2[0x10] == pcVar15[7]);
          auVar34[8] = -(param_2[0x11] == pcVar15[8]);
          auVar34[9] = -(param_2[0x12] == pcVar15[9]);
          auVar34[10] = -(param_2[0x13] == pcVar15[10]);
          auVar34[0xb] = -(param_2[0x14] == pcVar15[0xb]);
          auVar34[0xc] = -(param_2[0x15] == pcVar15[0xc]);
          auVar34[0xd] = -(param_2[0x16] == pcVar15[0xd]);
          auVar34[0xe] = -(param_2[0x17] == pcVar15[0xe]);
          auVar34[0xf] = -(param_2[0x18] == pcVar15[0xf]);
          auVar54[0] = -(param_2[0x19] == pcVar15[0x10]);
          auVar54[1] = -(param_2[0x1a] == pcVar15[0x11]);
          auVar54[2] = -(param_2[0x1b] == pcVar15[0x12]);
          auVar54[3] = -(param_2[0x1c] == pcVar15[0x13]);
          auVar54[4] = -(param_2[0x1d] == pcVar15[0x14]);
          auVar54[5] = -(param_2[0x1e] == pcVar15[0x15]);
          auVar54[6] = -(param_2[0x1f] == pcVar15[0x16]);
          auVar54[7] = -(param_2[0x20] == pcVar15[0x17]);
          auVar54[8] = -(param_2[0x21] == pcVar15[0x18]);
          auVar54[9] = -(param_2[0x22] == pcVar15[0x19]);
          auVar54[10] = -(param_2[0x23] == pcVar15[0x1a]);
          auVar54[0xb] = -(param_2[0x24] == pcVar15[0x1b]);
          auVar54[0xc] = -(param_2[0x25] == pcVar15[0x1c]);
          auVar54[0xd] = -(param_2[0x26] == pcVar15[0x1d]);
          auVar54[0xe] = -(param_2[0x27] == pcVar15[0x1e]);
          auVar54[0xf] = -(param_2[0x28] == pcVar15[0x1f]);
          auVar54 = auVar54 & auVar34;
          pcVar15 = pcVar15 + 0x20;
          pcVar13 = param_2 + 0x20;
          uVar12 = (ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar54[0xf] >> 7) << 0xf) - 0xffff;
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            param_2 = param_2 + (uVar11 - 7);
            pcVar15 = pcVar15 + param_3;
            goto LAB_0074b4c0;
          }
        }
        else {
          auVar27[0] = -(param_2[9] == *pcVar15);
          auVar27[1] = -(param_2[10] == pcVar15[1]);
          auVar27[2] = -(param_2[0xb] == pcVar15[2]);
          auVar27[3] = -(param_2[0xc] == pcVar15[3]);
          auVar27[4] = -(param_2[0xd] == pcVar15[4]);
          auVar27[5] = -(param_2[0xe] == pcVar15[5]);
          auVar27[6] = -(param_2[0xf] == pcVar15[6]);
          auVar27[7] = -(param_2[0x10] == pcVar15[7]);
          auVar27[8] = -(param_2[0x11] == pcVar15[8]);
          auVar27[9] = -(param_2[0x12] == pcVar15[9]);
          auVar27[10] = -(param_2[0x13] == pcVar15[10]);
          auVar27[0xb] = -(param_2[0x14] == pcVar15[0xb]);
          auVar27[0xc] = -(param_2[0x15] == pcVar15[0xc]);
          auVar27[0xd] = -(param_2[0x16] == pcVar15[0xd]);
          auVar27[0xe] = -(param_2[0x17] == pcVar15[0xe]);
          auVar27[0xf] = -(param_2[0x18] == pcVar15[0xf]);
          auVar55[0] = -(param_2[0x19] == pcVar15[0x10]);
          auVar55[1] = -(param_2[0x1a] == pcVar15[0x11]);
          auVar55[2] = -(param_2[0x1b] == pcVar15[0x12]);
          auVar55[3] = -(param_2[0x1c] == pcVar15[0x13]);
          auVar55[4] = -(param_2[0x1d] == pcVar15[0x14]);
          auVar55[5] = -(param_2[0x1e] == pcVar15[0x15]);
          auVar55[6] = -(param_2[0x1f] == pcVar15[0x16]);
          auVar55[7] = -(param_2[0x20] == pcVar15[0x17]);
          auVar55[8] = -(param_2[0x21] == pcVar15[0x18]);
          auVar55[9] = -(param_2[0x22] == pcVar15[0x19]);
          auVar55[10] = -(param_2[0x23] == pcVar15[0x1a]);
          auVar55[0xb] = -(param_2[0x24] == pcVar15[0x1b]);
          auVar55[0xc] = -(param_2[0x25] == pcVar15[0x1c]);
          auVar55[0xd] = -(param_2[0x26] == pcVar15[0x1d]);
          auVar55[0xe] = -(param_2[0x27] == pcVar15[0x1e]);
          auVar55[0xf] = -(param_2[0x28] == pcVar15[0x1f]);
          param_3 = uVar11 - 0x50;
          do {
            auVar34 = auVar27;
            pcVar16 = pcVar15;
            pcVar14 = param_2;
            uVar11 = param_3;
            auVar55 = auVar55 & auVar34;
            param_3 = uVar11 - 0x20;
            uVar12 = ((ushort)((ushort)(SUB161(auVar55 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar55[0xf] >> 7) << 0xf) - 0xffff) -
                     (uint)(uVar11 < 0x20);
            auVar27[0] = -(pcVar14[0x29] == pcVar16[0x20]);
            auVar27[1] = -(pcVar14[0x2a] == pcVar16[0x21]);
            auVar27[2] = -(pcVar14[0x2b] == pcVar16[0x22]);
            auVar27[3] = -(pcVar14[0x2c] == pcVar16[0x23]);
            auVar27[4] = -(pcVar14[0x2d] == pcVar16[0x24]);
            auVar27[5] = -(pcVar14[0x2e] == pcVar16[0x25]);
            auVar27[6] = -(pcVar14[0x2f] == pcVar16[0x26]);
            auVar27[7] = -(pcVar14[0x30] == pcVar16[0x27]);
            auVar27[8] = -(pcVar14[0x31] == pcVar16[0x28]);
            auVar27[9] = -(pcVar14[0x32] == pcVar16[0x29]);
            auVar27[10] = -(pcVar14[0x33] == pcVar16[0x2a]);
            auVar27[0xb] = -(pcVar14[0x34] == pcVar16[0x2b]);
            auVar27[0xc] = -(pcVar14[0x35] == pcVar16[0x2c]);
            auVar27[0xd] = -(pcVar14[0x36] == pcVar16[0x2d]);
            auVar27[0xe] = -(pcVar14[0x37] == pcVar16[0x2e]);
            auVar27[0xf] = -(pcVar14[0x38] == pcVar16[0x2f]);
            pcVar13 = pcVar14 + 0x20;
            auVar55[0] = -(pcVar14[0x39] == pcVar16[0x30]);
            auVar55[1] = -(pcVar14[0x3a] == pcVar16[0x31]);
            auVar55[2] = -(pcVar14[0x3b] == pcVar16[0x32]);
            auVar55[3] = -(pcVar14[0x3c] == pcVar16[0x33]);
            auVar55[4] = -(pcVar14[0x3d] == pcVar16[0x34]);
            auVar55[5] = -(pcVar14[0x3e] == pcVar16[0x35]);
            auVar55[6] = -(pcVar14[0x3f] == pcVar16[0x36]);
            auVar55[7] = -(pcVar14[0x40] == pcVar16[0x37]);
            auVar55[8] = -(pcVar14[0x41] == pcVar16[0x38]);
            auVar55[9] = -(pcVar14[0x42] == pcVar16[0x39]);
            auVar55[10] = -(pcVar14[0x43] == pcVar16[0x3a]);
            auVar55[0xb] = -(pcVar14[0x44] == pcVar16[0x3b]);
            auVar55[0xc] = -(pcVar14[0x45] == pcVar16[0x3c]);
            auVar55[0xd] = -(pcVar14[0x46] == pcVar16[0x3d]);
            auVar55[0xe] = -(pcVar14[0x47] == pcVar16[0x3e]);
            auVar55[0xf] = -(pcVar14[0x48] == pcVar16[0x3f]);
            pcVar15 = pcVar16 + 0x20;
            param_2 = pcVar13;
          } while (uVar12 == 0);
          auVar55 = auVar55 & auVar27;
          if ((long)param_3 < 0) {
            uVar12 = uVar12 + 1;
            param_3 = uVar11;
          }
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            pcVar15 = pcVar16 + 0x40;
            pcVar13 = pcVar14 + 0x40;
            uVar12 = (ushort)((ushort)(SUB161(auVar55 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar55[0xf] >> 7) << 0xf) - 0xffff;
            param_1 = (char *)(ulong)uVar12;
            auVar34 = auVar27;
            if (uVar12 == 0) {
              param_2 = pcVar14 + param_3 + 0x49;
              pcVar15 = pcVar15 + param_3;
              goto LAB_0074b4c0;
            }
          }
        }
      }
      else if (uVar12 == 10) {
        param_3 = uVar11 - 0x30;
        uVar8 = 10;
        if (uVar11 < 0x50) {
          auVar34[0] = -(param_2[10] == *pcVar15);
          auVar34[1] = -(param_2[0xb] == pcVar15[1]);
          auVar34[2] = -(param_2[0xc] == pcVar15[2]);
          auVar34[3] = -(param_2[0xd] == pcVar15[3]);
          auVar34[4] = -(param_2[0xe] == pcVar15[4]);
          auVar34[5] = -(param_2[0xf] == pcVar15[5]);
          auVar34[6] = -(param_2[0x10] == pcVar15[6]);
          auVar34[7] = -(param_2[0x11] == pcVar15[7]);
          auVar34[8] = -(param_2[0x12] == pcVar15[8]);
          auVar34[9] = -(param_2[0x13] == pcVar15[9]);
          auVar34[10] = -(param_2[0x14] == pcVar15[10]);
          auVar34[0xb] = -(param_2[0x15] == pcVar15[0xb]);
          auVar34[0xc] = -(param_2[0x16] == pcVar15[0xc]);
          auVar34[0xd] = -(param_2[0x17] == pcVar15[0xd]);
          auVar34[0xe] = -(param_2[0x18] == pcVar15[0xe]);
          auVar34[0xf] = -(param_2[0x19] == pcVar15[0xf]);
          auVar56[0] = -(param_2[0x1a] == pcVar15[0x10]);
          auVar56[1] = -(param_2[0x1b] == pcVar15[0x11]);
          auVar56[2] = -(param_2[0x1c] == pcVar15[0x12]);
          auVar56[3] = -(param_2[0x1d] == pcVar15[0x13]);
          auVar56[4] = -(param_2[0x1e] == pcVar15[0x14]);
          auVar56[5] = -(param_2[0x1f] == pcVar15[0x15]);
          auVar56[6] = -(param_2[0x20] == pcVar15[0x16]);
          auVar56[7] = -(param_2[0x21] == pcVar15[0x17]);
          auVar56[8] = -(param_2[0x22] == pcVar15[0x18]);
          auVar56[9] = -(param_2[0x23] == pcVar15[0x19]);
          auVar56[10] = -(param_2[0x24] == pcVar15[0x1a]);
          auVar56[0xb] = -(param_2[0x25] == pcVar15[0x1b]);
          auVar56[0xc] = -(param_2[0x26] == pcVar15[0x1c]);
          auVar56[0xd] = -(param_2[0x27] == pcVar15[0x1d]);
          auVar56[0xe] = -(param_2[0x28] == pcVar15[0x1e]);
          auVar56[0xf] = -(param_2[0x29] == pcVar15[0x1f]);
          auVar56 = auVar56 & auVar34;
          pcVar15 = pcVar15 + 0x20;
          pcVar13 = param_2 + 0x20;
          uVar12 = (ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar56[0xf] >> 7) << 0xf) - 0xffff;
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            param_2 = param_2 + (uVar11 - 6);
            pcVar15 = pcVar15 + param_3;
            goto LAB_0074b4c0;
          }
        }
        else {
          auVar28[0] = -(param_2[10] == *pcVar15);
          auVar28[1] = -(param_2[0xb] == pcVar15[1]);
          auVar28[2] = -(param_2[0xc] == pcVar15[2]);
          auVar28[3] = -(param_2[0xd] == pcVar15[3]);
          auVar28[4] = -(param_2[0xe] == pcVar15[4]);
          auVar28[5] = -(param_2[0xf] == pcVar15[5]);
          auVar28[6] = -(param_2[0x10] == pcVar15[6]);
          auVar28[7] = -(param_2[0x11] == pcVar15[7]);
          auVar28[8] = -(param_2[0x12] == pcVar15[8]);
          auVar28[9] = -(param_2[0x13] == pcVar15[9]);
          auVar28[10] = -(param_2[0x14] == pcVar15[10]);
          auVar28[0xb] = -(param_2[0x15] == pcVar15[0xb]);
          auVar28[0xc] = -(param_2[0x16] == pcVar15[0xc]);
          auVar28[0xd] = -(param_2[0x17] == pcVar15[0xd]);
          auVar28[0xe] = -(param_2[0x18] == pcVar15[0xe]);
          auVar28[0xf] = -(param_2[0x19] == pcVar15[0xf]);
          auVar57[0] = -(param_2[0x1a] == pcVar15[0x10]);
          auVar57[1] = -(param_2[0x1b] == pcVar15[0x11]);
          auVar57[2] = -(param_2[0x1c] == pcVar15[0x12]);
          auVar57[3] = -(param_2[0x1d] == pcVar15[0x13]);
          auVar57[4] = -(param_2[0x1e] == pcVar15[0x14]);
          auVar57[5] = -(param_2[0x1f] == pcVar15[0x15]);
          auVar57[6] = -(param_2[0x20] == pcVar15[0x16]);
          auVar57[7] = -(param_2[0x21] == pcVar15[0x17]);
          auVar57[8] = -(param_2[0x22] == pcVar15[0x18]);
          auVar57[9] = -(param_2[0x23] == pcVar15[0x19]);
          auVar57[10] = -(param_2[0x24] == pcVar15[0x1a]);
          auVar57[0xb] = -(param_2[0x25] == pcVar15[0x1b]);
          auVar57[0xc] = -(param_2[0x26] == pcVar15[0x1c]);
          auVar57[0xd] = -(param_2[0x27] == pcVar15[0x1d]);
          auVar57[0xe] = -(param_2[0x28] == pcVar15[0x1e]);
          auVar57[0xf] = -(param_2[0x29] == pcVar15[0x1f]);
          param_3 = uVar11 - 0x50;
          do {
            auVar34 = auVar28;
            pcVar16 = pcVar15;
            pcVar14 = param_2;
            uVar11 = param_3;
            auVar57 = auVar57 & auVar34;
            param_3 = uVar11 - 0x20;
            uVar12 = ((ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar57[0xf] >> 7) << 0xf) - 0xffff) -
                     (uint)(uVar11 < 0x20);
            auVar28[0] = -(pcVar14[0x2a] == pcVar16[0x20]);
            auVar28[1] = -(pcVar14[0x2b] == pcVar16[0x21]);
            auVar28[2] = -(pcVar14[0x2c] == pcVar16[0x22]);
            auVar28[3] = -(pcVar14[0x2d] == pcVar16[0x23]);
            auVar28[4] = -(pcVar14[0x2e] == pcVar16[0x24]);
            auVar28[5] = -(pcVar14[0x2f] == pcVar16[0x25]);
            auVar28[6] = -(pcVar14[0x30] == pcVar16[0x26]);
            auVar28[7] = -(pcVar14[0x31] == pcVar16[0x27]);
            auVar28[8] = -(pcVar14[0x32] == pcVar16[0x28]);
            auVar28[9] = -(pcVar14[0x33] == pcVar16[0x29]);
            auVar28[10] = -(pcVar14[0x34] == pcVar16[0x2a]);
            auVar28[0xb] = -(pcVar14[0x35] == pcVar16[0x2b]);
            auVar28[0xc] = -(pcVar14[0x36] == pcVar16[0x2c]);
            auVar28[0xd] = -(pcVar14[0x37] == pcVar16[0x2d]);
            auVar28[0xe] = -(pcVar14[0x38] == pcVar16[0x2e]);
            auVar28[0xf] = -(pcVar14[0x39] == pcVar16[0x2f]);
            pcVar13 = pcVar14 + 0x20;
            auVar57[0] = -(pcVar14[0x3a] == pcVar16[0x30]);
            auVar57[1] = -(pcVar14[0x3b] == pcVar16[0x31]);
            auVar57[2] = -(pcVar14[0x3c] == pcVar16[0x32]);
            auVar57[3] = -(pcVar14[0x3d] == pcVar16[0x33]);
            auVar57[4] = -(pcVar14[0x3e] == pcVar16[0x34]);
            auVar57[5] = -(pcVar14[0x3f] == pcVar16[0x35]);
            auVar57[6] = -(pcVar14[0x40] == pcVar16[0x36]);
            auVar57[7] = -(pcVar14[0x41] == pcVar16[0x37]);
            auVar57[8] = -(pcVar14[0x42] == pcVar16[0x38]);
            auVar57[9] = -(pcVar14[0x43] == pcVar16[0x39]);
            auVar57[10] = -(pcVar14[0x44] == pcVar16[0x3a]);
            auVar57[0xb] = -(pcVar14[0x45] == pcVar16[0x3b]);
            auVar57[0xc] = -(pcVar14[0x46] == pcVar16[0x3c]);
            auVar57[0xd] = -(pcVar14[0x47] == pcVar16[0x3d]);
            auVar57[0xe] = -(pcVar14[0x48] == pcVar16[0x3e]);
            auVar57[0xf] = -(pcVar14[0x49] == pcVar16[0x3f]);
            pcVar15 = pcVar16 + 0x20;
            param_2 = pcVar13;
          } while (uVar12 == 0);
          auVar57 = auVar57 & auVar28;
          if ((long)param_3 < 0) {
            uVar12 = uVar12 + 1;
            param_3 = uVar11;
          }
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            pcVar15 = pcVar16 + 0x40;
            pcVar13 = pcVar14 + 0x40;
            uVar12 = (ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar57[0xf] >> 7) << 0xf) - 0xffff;
            param_1 = (char *)(ulong)uVar12;
            auVar34 = auVar28;
            if (uVar12 == 0) {
              param_2 = pcVar14 + param_3 + 0x4a;
              pcVar15 = pcVar15 + param_3;
              goto LAB_0074b4c0;
            }
          }
        }
      }
      else if (uVar12 == 0xb) {
        param_3 = uVar11 - 0x30;
        uVar8 = 0xb;
        if (uVar11 < 0x50) {
          auVar34[0] = -(param_2[0xb] == *pcVar15);
          auVar34[1] = -(param_2[0xc] == pcVar15[1]);
          auVar34[2] = -(param_2[0xd] == pcVar15[2]);
          auVar34[3] = -(param_2[0xe] == pcVar15[3]);
          auVar34[4] = -(param_2[0xf] == pcVar15[4]);
          auVar34[5] = -(param_2[0x10] == pcVar15[5]);
          auVar34[6] = -(param_2[0x11] == pcVar15[6]);
          auVar34[7] = -(param_2[0x12] == pcVar15[7]);
          auVar34[8] = -(param_2[0x13] == pcVar15[8]);
          auVar34[9] = -(param_2[0x14] == pcVar15[9]);
          auVar34[10] = -(param_2[0x15] == pcVar15[10]);
          auVar34[0xb] = -(param_2[0x16] == pcVar15[0xb]);
          auVar34[0xc] = -(param_2[0x17] == pcVar15[0xc]);
          auVar34[0xd] = -(param_2[0x18] == pcVar15[0xd]);
          auVar34[0xe] = -(param_2[0x19] == pcVar15[0xe]);
          auVar34[0xf] = -(param_2[0x1a] == pcVar15[0xf]);
          auVar58[0] = -(param_2[0x1b] == pcVar15[0x10]);
          auVar58[1] = -(param_2[0x1c] == pcVar15[0x11]);
          auVar58[2] = -(param_2[0x1d] == pcVar15[0x12]);
          auVar58[3] = -(param_2[0x1e] == pcVar15[0x13]);
          auVar58[4] = -(param_2[0x1f] == pcVar15[0x14]);
          auVar58[5] = -(param_2[0x20] == pcVar15[0x15]);
          auVar58[6] = -(param_2[0x21] == pcVar15[0x16]);
          auVar58[7] = -(param_2[0x22] == pcVar15[0x17]);
          auVar58[8] = -(param_2[0x23] == pcVar15[0x18]);
          auVar58[9] = -(param_2[0x24] == pcVar15[0x19]);
          auVar58[10] = -(param_2[0x25] == pcVar15[0x1a]);
          auVar58[0xb] = -(param_2[0x26] == pcVar15[0x1b]);
          auVar58[0xc] = -(param_2[0x27] == pcVar15[0x1c]);
          auVar58[0xd] = -(param_2[0x28] == pcVar15[0x1d]);
          auVar58[0xe] = -(param_2[0x29] == pcVar15[0x1e]);
          auVar58[0xf] = -(param_2[0x2a] == pcVar15[0x1f]);
          auVar58 = auVar58 & auVar34;
          pcVar15 = pcVar15 + 0x20;
          pcVar13 = param_2 + 0x20;
          uVar12 = (ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar58[0xf] >> 7) << 0xf) - 0xffff;
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            param_2 = param_2 + (uVar11 - 5);
            pcVar15 = pcVar15 + param_3;
            goto LAB_0074b4c0;
          }
        }
        else {
          auVar29[0] = -(param_2[0xb] == *pcVar15);
          auVar29[1] = -(param_2[0xc] == pcVar15[1]);
          auVar29[2] = -(param_2[0xd] == pcVar15[2]);
          auVar29[3] = -(param_2[0xe] == pcVar15[3]);
          auVar29[4] = -(param_2[0xf] == pcVar15[4]);
          auVar29[5] = -(param_2[0x10] == pcVar15[5]);
          auVar29[6] = -(param_2[0x11] == pcVar15[6]);
          auVar29[7] = -(param_2[0x12] == pcVar15[7]);
          auVar29[8] = -(param_2[0x13] == pcVar15[8]);
          auVar29[9] = -(param_2[0x14] == pcVar15[9]);
          auVar29[10] = -(param_2[0x15] == pcVar15[10]);
          auVar29[0xb] = -(param_2[0x16] == pcVar15[0xb]);
          auVar29[0xc] = -(param_2[0x17] == pcVar15[0xc]);
          auVar29[0xd] = -(param_2[0x18] == pcVar15[0xd]);
          auVar29[0xe] = -(param_2[0x19] == pcVar15[0xe]);
          auVar29[0xf] = -(param_2[0x1a] == pcVar15[0xf]);
          auVar59[0] = -(param_2[0x1b] == pcVar15[0x10]);
          auVar59[1] = -(param_2[0x1c] == pcVar15[0x11]);
          auVar59[2] = -(param_2[0x1d] == pcVar15[0x12]);
          auVar59[3] = -(param_2[0x1e] == pcVar15[0x13]);
          auVar59[4] = -(param_2[0x1f] == pcVar15[0x14]);
          auVar59[5] = -(param_2[0x20] == pcVar15[0x15]);
          auVar59[6] = -(param_2[0x21] == pcVar15[0x16]);
          auVar59[7] = -(param_2[0x22] == pcVar15[0x17]);
          auVar59[8] = -(param_2[0x23] == pcVar15[0x18]);
          auVar59[9] = -(param_2[0x24] == pcVar15[0x19]);
          auVar59[10] = -(param_2[0x25] == pcVar15[0x1a]);
          auVar59[0xb] = -(param_2[0x26] == pcVar15[0x1b]);
          auVar59[0xc] = -(param_2[0x27] == pcVar15[0x1c]);
          auVar59[0xd] = -(param_2[0x28] == pcVar15[0x1d]);
          auVar59[0xe] = -(param_2[0x29] == pcVar15[0x1e]);
          auVar59[0xf] = -(param_2[0x2a] == pcVar15[0x1f]);
          param_3 = uVar11 - 0x50;
          do {
            auVar34 = auVar29;
            pcVar16 = pcVar15;
            pcVar14 = param_2;
            uVar11 = param_3;
            auVar59 = auVar59 & auVar34;
            param_3 = uVar11 - 0x20;
            uVar12 = ((ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar59[0xf] >> 7) << 0xf) - 0xffff) -
                     (uint)(uVar11 < 0x20);
            auVar29[0] = -(pcVar14[0x2b] == pcVar16[0x20]);
            auVar29[1] = -(pcVar14[0x2c] == pcVar16[0x21]);
            auVar29[2] = -(pcVar14[0x2d] == pcVar16[0x22]);
            auVar29[3] = -(pcVar14[0x2e] == pcVar16[0x23]);
            auVar29[4] = -(pcVar14[0x2f] == pcVar16[0x24]);
            auVar29[5] = -(pcVar14[0x30] == pcVar16[0x25]);
            auVar29[6] = -(pcVar14[0x31] == pcVar16[0x26]);
            auVar29[7] = -(pcVar14[0x32] == pcVar16[0x27]);
            auVar29[8] = -(pcVar14[0x33] == pcVar16[0x28]);
            auVar29[9] = -(pcVar14[0x34] == pcVar16[0x29]);
            auVar29[10] = -(pcVar14[0x35] == pcVar16[0x2a]);
            auVar29[0xb] = -(pcVar14[0x36] == pcVar16[0x2b]);
            auVar29[0xc] = -(pcVar14[0x37] == pcVar16[0x2c]);
            auVar29[0xd] = -(pcVar14[0x38] == pcVar16[0x2d]);
            auVar29[0xe] = -(pcVar14[0x39] == pcVar16[0x2e]);
            auVar29[0xf] = -(pcVar14[0x3a] == pcVar16[0x2f]);
            pcVar13 = pcVar14 + 0x20;
            auVar59[0] = -(pcVar14[0x3b] == pcVar16[0x30]);
            auVar59[1] = -(pcVar14[0x3c] == pcVar16[0x31]);
            auVar59[2] = -(pcVar14[0x3d] == pcVar16[0x32]);
            auVar59[3] = -(pcVar14[0x3e] == pcVar16[0x33]);
            auVar59[4] = -(pcVar14[0x3f] == pcVar16[0x34]);
            auVar59[5] = -(pcVar14[0x40] == pcVar16[0x35]);
            auVar59[6] = -(pcVar14[0x41] == pcVar16[0x36]);
            auVar59[7] = -(pcVar14[0x42] == pcVar16[0x37]);
            auVar59[8] = -(pcVar14[0x43] == pcVar16[0x38]);
            auVar59[9] = -(pcVar14[0x44] == pcVar16[0x39]);
            auVar59[10] = -(pcVar14[0x45] == pcVar16[0x3a]);
            auVar59[0xb] = -(pcVar14[0x46] == pcVar16[0x3b]);
            auVar59[0xc] = -(pcVar14[0x47] == pcVar16[0x3c]);
            auVar59[0xd] = -(pcVar14[0x48] == pcVar16[0x3d]);
            auVar59[0xe] = -(pcVar14[0x49] == pcVar16[0x3e]);
            auVar59[0xf] = -(pcVar14[0x4a] == pcVar16[0x3f]);
            pcVar15 = pcVar16 + 0x20;
            param_2 = pcVar13;
          } while (uVar12 == 0);
          auVar59 = auVar59 & auVar29;
          if ((long)param_3 < 0) {
            uVar12 = uVar12 + 1;
            param_3 = uVar11;
          }
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            pcVar15 = pcVar16 + 0x40;
            pcVar13 = pcVar14 + 0x40;
            uVar12 = (ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar59[0xf] >> 7) << 0xf) - 0xffff;
            param_1 = (char *)(ulong)uVar12;
            auVar34 = auVar29;
            if (uVar12 == 0) {
              param_2 = pcVar14 + param_3 + 0x4b;
              pcVar15 = pcVar15 + param_3;
              goto LAB_0074b4c0;
            }
          }
        }
      }
      else if (uVar12 == 0xc) {
        param_3 = uVar11 - 0x30;
        uVar8 = 0xc;
        if (uVar11 < 0x50) {
          auVar34[0] = -(param_2[0xc] == *pcVar15);
          auVar34[1] = -(param_2[0xd] == pcVar15[1]);
          auVar34[2] = -(param_2[0xe] == pcVar15[2]);
          auVar34[3] = -(param_2[0xf] == pcVar15[3]);
          auVar34[4] = -(param_2[0x10] == pcVar15[4]);
          auVar34[5] = -(param_2[0x11] == pcVar15[5]);
          auVar34[6] = -(param_2[0x12] == pcVar15[6]);
          auVar34[7] = -(param_2[0x13] == pcVar15[7]);
          auVar34[8] = -(param_2[0x14] == pcVar15[8]);
          auVar34[9] = -(param_2[0x15] == pcVar15[9]);
          auVar34[10] = -(param_2[0x16] == pcVar15[10]);
          auVar34[0xb] = -(param_2[0x17] == pcVar15[0xb]);
          auVar34[0xc] = -(param_2[0x18] == pcVar15[0xc]);
          auVar34[0xd] = -(param_2[0x19] == pcVar15[0xd]);
          auVar34[0xe] = -(param_2[0x1a] == pcVar15[0xe]);
          auVar34[0xf] = -(param_2[0x1b] == pcVar15[0xf]);
          auVar60[0] = -(param_2[0x1c] == pcVar15[0x10]);
          auVar60[1] = -(param_2[0x1d] == pcVar15[0x11]);
          auVar60[2] = -(param_2[0x1e] == pcVar15[0x12]);
          auVar60[3] = -(param_2[0x1f] == pcVar15[0x13]);
          auVar60[4] = -(param_2[0x20] == pcVar15[0x14]);
          auVar60[5] = -(param_2[0x21] == pcVar15[0x15]);
          auVar60[6] = -(param_2[0x22] == pcVar15[0x16]);
          auVar60[7] = -(param_2[0x23] == pcVar15[0x17]);
          auVar60[8] = -(param_2[0x24] == pcVar15[0x18]);
          auVar60[9] = -(param_2[0x25] == pcVar15[0x19]);
          auVar60[10] = -(param_2[0x26] == pcVar15[0x1a]);
          auVar60[0xb] = -(param_2[0x27] == pcVar15[0x1b]);
          auVar60[0xc] = -(param_2[0x28] == pcVar15[0x1c]);
          auVar60[0xd] = -(param_2[0x29] == pcVar15[0x1d]);
          auVar60[0xe] = -(param_2[0x2a] == pcVar15[0x1e]);
          auVar60[0xf] = -(param_2[0x2b] == pcVar15[0x1f]);
          auVar60 = auVar60 & auVar34;
          pcVar15 = pcVar15 + 0x20;
          pcVar13 = param_2 + 0x20;
          uVar12 = (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar60[0xf] >> 7) << 0xf) - 0xffff;
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            param_2 = param_2 + (uVar11 - 4);
            pcVar15 = pcVar15 + param_3;
            goto LAB_0074b4c0;
          }
        }
        else {
          auVar30[0] = -(param_2[0xc] == *pcVar15);
          auVar30[1] = -(param_2[0xd] == pcVar15[1]);
          auVar30[2] = -(param_2[0xe] == pcVar15[2]);
          auVar30[3] = -(param_2[0xf] == pcVar15[3]);
          auVar30[4] = -(param_2[0x10] == pcVar15[4]);
          auVar30[5] = -(param_2[0x11] == pcVar15[5]);
          auVar30[6] = -(param_2[0x12] == pcVar15[6]);
          auVar30[7] = -(param_2[0x13] == pcVar15[7]);
          auVar30[8] = -(param_2[0x14] == pcVar15[8]);
          auVar30[9] = -(param_2[0x15] == pcVar15[9]);
          auVar30[10] = -(param_2[0x16] == pcVar15[10]);
          auVar30[0xb] = -(param_2[0x17] == pcVar15[0xb]);
          auVar30[0xc] = -(param_2[0x18] == pcVar15[0xc]);
          auVar30[0xd] = -(param_2[0x19] == pcVar15[0xd]);
          auVar30[0xe] = -(param_2[0x1a] == pcVar15[0xe]);
          auVar30[0xf] = -(param_2[0x1b] == pcVar15[0xf]);
          auVar61[0] = -(param_2[0x1c] == pcVar15[0x10]);
          auVar61[1] = -(param_2[0x1d] == pcVar15[0x11]);
          auVar61[2] = -(param_2[0x1e] == pcVar15[0x12]);
          auVar61[3] = -(param_2[0x1f] == pcVar15[0x13]);
          auVar61[4] = -(param_2[0x20] == pcVar15[0x14]);
          auVar61[5] = -(param_2[0x21] == pcVar15[0x15]);
          auVar61[6] = -(param_2[0x22] == pcVar15[0x16]);
          auVar61[7] = -(param_2[0x23] == pcVar15[0x17]);
          auVar61[8] = -(param_2[0x24] == pcVar15[0x18]);
          auVar61[9] = -(param_2[0x25] == pcVar15[0x19]);
          auVar61[10] = -(param_2[0x26] == pcVar15[0x1a]);
          auVar61[0xb] = -(param_2[0x27] == pcVar15[0x1b]);
          auVar61[0xc] = -(param_2[0x28] == pcVar15[0x1c]);
          auVar61[0xd] = -(param_2[0x29] == pcVar15[0x1d]);
          auVar61[0xe] = -(param_2[0x2a] == pcVar15[0x1e]);
          auVar61[0xf] = -(param_2[0x2b] == pcVar15[0x1f]);
          param_3 = uVar11 - 0x50;
          do {
            auVar34 = auVar30;
            pcVar16 = pcVar15;
            pcVar14 = param_2;
            uVar11 = param_3;
            auVar61 = auVar61 & auVar34;
            param_3 = uVar11 - 0x20;
            uVar12 = ((ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar61[0xf] >> 7) << 0xf) - 0xffff) -
                     (uint)(uVar11 < 0x20);
            auVar30[0] = -(pcVar14[0x2c] == pcVar16[0x20]);
            auVar30[1] = -(pcVar14[0x2d] == pcVar16[0x21]);
            auVar30[2] = -(pcVar14[0x2e] == pcVar16[0x22]);
            auVar30[3] = -(pcVar14[0x2f] == pcVar16[0x23]);
            auVar30[4] = -(pcVar14[0x30] == pcVar16[0x24]);
            auVar30[5] = -(pcVar14[0x31] == pcVar16[0x25]);
            auVar30[6] = -(pcVar14[0x32] == pcVar16[0x26]);
            auVar30[7] = -(pcVar14[0x33] == pcVar16[0x27]);
            auVar30[8] = -(pcVar14[0x34] == pcVar16[0x28]);
            auVar30[9] = -(pcVar14[0x35] == pcVar16[0x29]);
            auVar30[10] = -(pcVar14[0x36] == pcVar16[0x2a]);
            auVar30[0xb] = -(pcVar14[0x37] == pcVar16[0x2b]);
            auVar30[0xc] = -(pcVar14[0x38] == pcVar16[0x2c]);
            auVar30[0xd] = -(pcVar14[0x39] == pcVar16[0x2d]);
            auVar30[0xe] = -(pcVar14[0x3a] == pcVar16[0x2e]);
            auVar30[0xf] = -(pcVar14[0x3b] == pcVar16[0x2f]);
            pcVar13 = pcVar14 + 0x20;
            auVar61[0] = -(pcVar14[0x3c] == pcVar16[0x30]);
            auVar61[1] = -(pcVar14[0x3d] == pcVar16[0x31]);
            auVar61[2] = -(pcVar14[0x3e] == pcVar16[0x32]);
            auVar61[3] = -(pcVar14[0x3f] == pcVar16[0x33]);
            auVar61[4] = -(pcVar14[0x40] == pcVar16[0x34]);
            auVar61[5] = -(pcVar14[0x41] == pcVar16[0x35]);
            auVar61[6] = -(pcVar14[0x42] == pcVar16[0x36]);
            auVar61[7] = -(pcVar14[0x43] == pcVar16[0x37]);
            auVar61[8] = -(pcVar14[0x44] == pcVar16[0x38]);
            auVar61[9] = -(pcVar14[0x45] == pcVar16[0x39]);
            auVar61[10] = -(pcVar14[0x46] == pcVar16[0x3a]);
            auVar61[0xb] = -(pcVar14[0x47] == pcVar16[0x3b]);
            auVar61[0xc] = -(pcVar14[0x48] == pcVar16[0x3c]);
            auVar61[0xd] = -(pcVar14[0x49] == pcVar16[0x3d]);
            auVar61[0xe] = -(pcVar14[0x4a] == pcVar16[0x3e]);
            auVar61[0xf] = -(pcVar14[0x4b] == pcVar16[0x3f]);
            pcVar15 = pcVar16 + 0x20;
            param_2 = pcVar13;
          } while (uVar12 == 0);
          auVar61 = auVar61 & auVar30;
          if ((long)param_3 < 0) {
            uVar12 = uVar12 + 1;
            param_3 = uVar11;
          }
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            pcVar15 = pcVar16 + 0x40;
            pcVar13 = pcVar14 + 0x40;
            uVar12 = (ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar61[0xf] >> 7) << 0xf) - 0xffff;
            param_1 = (char *)(ulong)uVar12;
            auVar34 = auVar30;
            if (uVar12 == 0) {
              param_2 = pcVar14 + param_3 + 0x4c;
              pcVar15 = pcVar15 + param_3;
              goto LAB_0074b4c0;
            }
          }
        }
      }
      else if (uVar12 == 0xd) {
        param_3 = uVar11 - 0x30;
        uVar8 = 0xd;
        if (uVar11 < 0x50) {
          auVar34[0] = -(param_2[0xd] == *pcVar15);
          auVar34[1] = -(param_2[0xe] == pcVar15[1]);
          auVar34[2] = -(param_2[0xf] == pcVar15[2]);
          auVar34[3] = -(param_2[0x10] == pcVar15[3]);
          auVar34[4] = -(param_2[0x11] == pcVar15[4]);
          auVar34[5] = -(param_2[0x12] == pcVar15[5]);
          auVar34[6] = -(param_2[0x13] == pcVar15[6]);
          auVar34[7] = -(param_2[0x14] == pcVar15[7]);
          auVar34[8] = -(param_2[0x15] == pcVar15[8]);
          auVar34[9] = -(param_2[0x16] == pcVar15[9]);
          auVar34[10] = -(param_2[0x17] == pcVar15[10]);
          auVar34[0xb] = -(param_2[0x18] == pcVar15[0xb]);
          auVar34[0xc] = -(param_2[0x19] == pcVar15[0xc]);
          auVar34[0xd] = -(param_2[0x1a] == pcVar15[0xd]);
          auVar34[0xe] = -(param_2[0x1b] == pcVar15[0xe]);
          auVar34[0xf] = -(param_2[0x1c] == pcVar15[0xf]);
          auVar62[0] = -(param_2[0x1d] == pcVar15[0x10]);
          auVar62[1] = -(param_2[0x1e] == pcVar15[0x11]);
          auVar62[2] = -(param_2[0x1f] == pcVar15[0x12]);
          auVar62[3] = -(param_2[0x20] == pcVar15[0x13]);
          auVar62[4] = -(param_2[0x21] == pcVar15[0x14]);
          auVar62[5] = -(param_2[0x22] == pcVar15[0x15]);
          auVar62[6] = -(param_2[0x23] == pcVar15[0x16]);
          auVar62[7] = -(param_2[0x24] == pcVar15[0x17]);
          auVar62[8] = -(param_2[0x25] == pcVar15[0x18]);
          auVar62[9] = -(param_2[0x26] == pcVar15[0x19]);
          auVar62[10] = -(param_2[0x27] == pcVar15[0x1a]);
          auVar62[0xb] = -(param_2[0x28] == pcVar15[0x1b]);
          auVar62[0xc] = -(param_2[0x29] == pcVar15[0x1c]);
          auVar62[0xd] = -(param_2[0x2a] == pcVar15[0x1d]);
          auVar62[0xe] = -(param_2[0x2b] == pcVar15[0x1e]);
          auVar62[0xf] = -(param_2[0x2c] == pcVar15[0x1f]);
          auVar62 = auVar62 & auVar34;
          pcVar15 = pcVar15 + 0x20;
          pcVar13 = param_2 + 0x20;
          uVar12 = (ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar62[0xf] >> 7) << 0xf) - 0xffff;
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            param_2 = param_2 + (uVar11 - 3);
            pcVar15 = pcVar15 + param_3;
            goto LAB_0074b4c0;
          }
        }
        else {
          auVar31[0] = -(param_2[0xd] == *pcVar15);
          auVar31[1] = -(param_2[0xe] == pcVar15[1]);
          auVar31[2] = -(param_2[0xf] == pcVar15[2]);
          auVar31[3] = -(param_2[0x10] == pcVar15[3]);
          auVar31[4] = -(param_2[0x11] == pcVar15[4]);
          auVar31[5] = -(param_2[0x12] == pcVar15[5]);
          auVar31[6] = -(param_2[0x13] == pcVar15[6]);
          auVar31[7] = -(param_2[0x14] == pcVar15[7]);
          auVar31[8] = -(param_2[0x15] == pcVar15[8]);
          auVar31[9] = -(param_2[0x16] == pcVar15[9]);
          auVar31[10] = -(param_2[0x17] == pcVar15[10]);
          auVar31[0xb] = -(param_2[0x18] == pcVar15[0xb]);
          auVar31[0xc] = -(param_2[0x19] == pcVar15[0xc]);
          auVar31[0xd] = -(param_2[0x1a] == pcVar15[0xd]);
          auVar31[0xe] = -(param_2[0x1b] == pcVar15[0xe]);
          auVar31[0xf] = -(param_2[0x1c] == pcVar15[0xf]);
          auVar63[0] = -(param_2[0x1d] == pcVar15[0x10]);
          auVar63[1] = -(param_2[0x1e] == pcVar15[0x11]);
          auVar63[2] = -(param_2[0x1f] == pcVar15[0x12]);
          auVar63[3] = -(param_2[0x20] == pcVar15[0x13]);
          auVar63[4] = -(param_2[0x21] == pcVar15[0x14]);
          auVar63[5] = -(param_2[0x22] == pcVar15[0x15]);
          auVar63[6] = -(param_2[0x23] == pcVar15[0x16]);
          auVar63[7] = -(param_2[0x24] == pcVar15[0x17]);
          auVar63[8] = -(param_2[0x25] == pcVar15[0x18]);
          auVar63[9] = -(param_2[0x26] == pcVar15[0x19]);
          auVar63[10] = -(param_2[0x27] == pcVar15[0x1a]);
          auVar63[0xb] = -(param_2[0x28] == pcVar15[0x1b]);
          auVar63[0xc] = -(param_2[0x29] == pcVar15[0x1c]);
          auVar63[0xd] = -(param_2[0x2a] == pcVar15[0x1d]);
          auVar63[0xe] = -(param_2[0x2b] == pcVar15[0x1e]);
          auVar63[0xf] = -(param_2[0x2c] == pcVar15[0x1f]);
          param_3 = uVar11 - 0x50;
          do {
            auVar34 = auVar31;
            pcVar16 = pcVar15;
            pcVar14 = param_2;
            uVar11 = param_3;
            auVar63 = auVar63 & auVar34;
            param_3 = uVar11 - 0x20;
            uVar12 = ((ushort)((ushort)(SUB161(auVar63 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar63[0xf] >> 7) << 0xf) - 0xffff) -
                     (uint)(uVar11 < 0x20);
            auVar31[0] = -(pcVar14[0x2d] == pcVar16[0x20]);
            auVar31[1] = -(pcVar14[0x2e] == pcVar16[0x21]);
            auVar31[2] = -(pcVar14[0x2f] == pcVar16[0x22]);
            auVar31[3] = -(pcVar14[0x30] == pcVar16[0x23]);
            auVar31[4] = -(pcVar14[0x31] == pcVar16[0x24]);
            auVar31[5] = -(pcVar14[0x32] == pcVar16[0x25]);
            auVar31[6] = -(pcVar14[0x33] == pcVar16[0x26]);
            auVar31[7] = -(pcVar14[0x34] == pcVar16[0x27]);
            auVar31[8] = -(pcVar14[0x35] == pcVar16[0x28]);
            auVar31[9] = -(pcVar14[0x36] == pcVar16[0x29]);
            auVar31[10] = -(pcVar14[0x37] == pcVar16[0x2a]);
            auVar31[0xb] = -(pcVar14[0x38] == pcVar16[0x2b]);
            auVar31[0xc] = -(pcVar14[0x39] == pcVar16[0x2c]);
            auVar31[0xd] = -(pcVar14[0x3a] == pcVar16[0x2d]);
            auVar31[0xe] = -(pcVar14[0x3b] == pcVar16[0x2e]);
            auVar31[0xf] = -(pcVar14[0x3c] == pcVar16[0x2f]);
            pcVar13 = pcVar14 + 0x20;
            auVar63[0] = -(pcVar14[0x3d] == pcVar16[0x30]);
            auVar63[1] = -(pcVar14[0x3e] == pcVar16[0x31]);
            auVar63[2] = -(pcVar14[0x3f] == pcVar16[0x32]);
            auVar63[3] = -(pcVar14[0x40] == pcVar16[0x33]);
            auVar63[4] = -(pcVar14[0x41] == pcVar16[0x34]);
            auVar63[5] = -(pcVar14[0x42] == pcVar16[0x35]);
            auVar63[6] = -(pcVar14[0x43] == pcVar16[0x36]);
            auVar63[7] = -(pcVar14[0x44] == pcVar16[0x37]);
            auVar63[8] = -(pcVar14[0x45] == pcVar16[0x38]);
            auVar63[9] = -(pcVar14[0x46] == pcVar16[0x39]);
            auVar63[10] = -(pcVar14[0x47] == pcVar16[0x3a]);
            auVar63[0xb] = -(pcVar14[0x48] == pcVar16[0x3b]);
            auVar63[0xc] = -(pcVar14[0x49] == pcVar16[0x3c]);
            auVar63[0xd] = -(pcVar14[0x4a] == pcVar16[0x3d]);
            auVar63[0xe] = -(pcVar14[0x4b] == pcVar16[0x3e]);
            auVar63[0xf] = -(pcVar14[0x4c] == pcVar16[0x3f]);
            pcVar15 = pcVar16 + 0x20;
            param_2 = pcVar13;
          } while (uVar12 == 0);
          auVar63 = auVar63 & auVar31;
          if ((long)param_3 < 0) {
            uVar12 = uVar12 + 1;
            param_3 = uVar11;
          }
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            pcVar15 = pcVar16 + 0x40;
            pcVar13 = pcVar14 + 0x40;
            uVar12 = (ushort)((ushort)(SUB161(auVar63 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar63[0xf] >> 7) << 0xf) - 0xffff;
            param_1 = (char *)(ulong)uVar12;
            auVar34 = auVar31;
            if (uVar12 == 0) {
              param_2 = pcVar14 + param_3 + 0x4d;
              pcVar15 = pcVar15 + param_3;
              goto LAB_0074b4c0;
            }
          }
        }
      }
      else if (uVar12 == 0xe) {
        param_3 = uVar11 - 0x30;
        uVar8 = 0xe;
        if (uVar11 < 0x50) {
          auVar34[0] = -(param_2[0xe] == *pcVar15);
          auVar34[1] = -(param_2[0xf] == pcVar15[1]);
          auVar34[2] = -(param_2[0x10] == pcVar15[2]);
          auVar34[3] = -(param_2[0x11] == pcVar15[3]);
          auVar34[4] = -(param_2[0x12] == pcVar15[4]);
          auVar34[5] = -(param_2[0x13] == pcVar15[5]);
          auVar34[6] = -(param_2[0x14] == pcVar15[6]);
          auVar34[7] = -(param_2[0x15] == pcVar15[7]);
          auVar34[8] = -(param_2[0x16] == pcVar15[8]);
          auVar34[9] = -(param_2[0x17] == pcVar15[9]);
          auVar34[10] = -(param_2[0x18] == pcVar15[10]);
          auVar34[0xb] = -(param_2[0x19] == pcVar15[0xb]);
          auVar34[0xc] = -(param_2[0x1a] == pcVar15[0xc]);
          auVar34[0xd] = -(param_2[0x1b] == pcVar15[0xd]);
          auVar34[0xe] = -(param_2[0x1c] == pcVar15[0xe]);
          auVar34[0xf] = -(param_2[0x1d] == pcVar15[0xf]);
          auVar64[0] = -(param_2[0x1e] == pcVar15[0x10]);
          auVar64[1] = -(param_2[0x1f] == pcVar15[0x11]);
          auVar64[2] = -(param_2[0x20] == pcVar15[0x12]);
          auVar64[3] = -(param_2[0x21] == pcVar15[0x13]);
          auVar64[4] = -(param_2[0x22] == pcVar15[0x14]);
          auVar64[5] = -(param_2[0x23] == pcVar15[0x15]);
          auVar64[6] = -(param_2[0x24] == pcVar15[0x16]);
          auVar64[7] = -(param_2[0x25] == pcVar15[0x17]);
          auVar64[8] = -(param_2[0x26] == pcVar15[0x18]);
          auVar64[9] = -(param_2[0x27] == pcVar15[0x19]);
          auVar64[10] = -(param_2[0x28] == pcVar15[0x1a]);
          auVar64[0xb] = -(param_2[0x29] == pcVar15[0x1b]);
          auVar64[0xc] = -(param_2[0x2a] == pcVar15[0x1c]);
          auVar64[0xd] = -(param_2[0x2b] == pcVar15[0x1d]);
          auVar64[0xe] = -(param_2[0x2c] == pcVar15[0x1e]);
          auVar64[0xf] = -(param_2[0x2d] == pcVar15[0x1f]);
          auVar64 = auVar64 & auVar34;
          pcVar15 = pcVar15 + 0x20;
          pcVar13 = param_2 + 0x20;
          uVar12 = (ushort)((ushort)(SUB161(auVar64 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar64[0xf] >> 7) << 0xf) - 0xffff;
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            param_2 = param_2 + (uVar11 - 2);
            pcVar15 = pcVar15 + param_3;
            goto LAB_0074b4c0;
          }
        }
        else {
          auVar32[0] = -(param_2[0xe] == *pcVar15);
          auVar32[1] = -(param_2[0xf] == pcVar15[1]);
          auVar32[2] = -(param_2[0x10] == pcVar15[2]);
          auVar32[3] = -(param_2[0x11] == pcVar15[3]);
          auVar32[4] = -(param_2[0x12] == pcVar15[4]);
          auVar32[5] = -(param_2[0x13] == pcVar15[5]);
          auVar32[6] = -(param_2[0x14] == pcVar15[6]);
          auVar32[7] = -(param_2[0x15] == pcVar15[7]);
          auVar32[8] = -(param_2[0x16] == pcVar15[8]);
          auVar32[9] = -(param_2[0x17] == pcVar15[9]);
          auVar32[10] = -(param_2[0x18] == pcVar15[10]);
          auVar32[0xb] = -(param_2[0x19] == pcVar15[0xb]);
          auVar32[0xc] = -(param_2[0x1a] == pcVar15[0xc]);
          auVar32[0xd] = -(param_2[0x1b] == pcVar15[0xd]);
          auVar32[0xe] = -(param_2[0x1c] == pcVar15[0xe]);
          auVar32[0xf] = -(param_2[0x1d] == pcVar15[0xf]);
          auVar65[0] = -(param_2[0x1e] == pcVar15[0x10]);
          auVar65[1] = -(param_2[0x1f] == pcVar15[0x11]);
          auVar65[2] = -(param_2[0x20] == pcVar15[0x12]);
          auVar65[3] = -(param_2[0x21] == pcVar15[0x13]);
          auVar65[4] = -(param_2[0x22] == pcVar15[0x14]);
          auVar65[5] = -(param_2[0x23] == pcVar15[0x15]);
          auVar65[6] = -(param_2[0x24] == pcVar15[0x16]);
          auVar65[7] = -(param_2[0x25] == pcVar15[0x17]);
          auVar65[8] = -(param_2[0x26] == pcVar15[0x18]);
          auVar65[9] = -(param_2[0x27] == pcVar15[0x19]);
          auVar65[10] = -(param_2[0x28] == pcVar15[0x1a]);
          auVar65[0xb] = -(param_2[0x29] == pcVar15[0x1b]);
          auVar65[0xc] = -(param_2[0x2a] == pcVar15[0x1c]);
          auVar65[0xd] = -(param_2[0x2b] == pcVar15[0x1d]);
          auVar65[0xe] = -(param_2[0x2c] == pcVar15[0x1e]);
          auVar65[0xf] = -(param_2[0x2d] == pcVar15[0x1f]);
          param_3 = uVar11 - 0x50;
          do {
            auVar34 = auVar32;
            pcVar16 = pcVar15;
            pcVar14 = param_2;
            uVar11 = param_3;
            auVar65 = auVar65 & auVar34;
            param_3 = uVar11 - 0x20;
            uVar12 = ((ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar65[0xf] >> 7) << 0xf) - 0xffff) -
                     (uint)(uVar11 < 0x20);
            auVar32[0] = -(pcVar14[0x2e] == pcVar16[0x20]);
            auVar32[1] = -(pcVar14[0x2f] == pcVar16[0x21]);
            auVar32[2] = -(pcVar14[0x30] == pcVar16[0x22]);
            auVar32[3] = -(pcVar14[0x31] == pcVar16[0x23]);
            auVar32[4] = -(pcVar14[0x32] == pcVar16[0x24]);
            auVar32[5] = -(pcVar14[0x33] == pcVar16[0x25]);
            auVar32[6] = -(pcVar14[0x34] == pcVar16[0x26]);
            auVar32[7] = -(pcVar14[0x35] == pcVar16[0x27]);
            auVar32[8] = -(pcVar14[0x36] == pcVar16[0x28]);
            auVar32[9] = -(pcVar14[0x37] == pcVar16[0x29]);
            auVar32[10] = -(pcVar14[0x38] == pcVar16[0x2a]);
            auVar32[0xb] = -(pcVar14[0x39] == pcVar16[0x2b]);
            auVar32[0xc] = -(pcVar14[0x3a] == pcVar16[0x2c]);
            auVar32[0xd] = -(pcVar14[0x3b] == pcVar16[0x2d]);
            auVar32[0xe] = -(pcVar14[0x3c] == pcVar16[0x2e]);
            auVar32[0xf] = -(pcVar14[0x3d] == pcVar16[0x2f]);
            pcVar13 = pcVar14 + 0x20;
            auVar65[0] = -(pcVar14[0x3e] == pcVar16[0x30]);
            auVar65[1] = -(pcVar14[0x3f] == pcVar16[0x31]);
            auVar65[2] = -(pcVar14[0x40] == pcVar16[0x32]);
            auVar65[3] = -(pcVar14[0x41] == pcVar16[0x33]);
            auVar65[4] = -(pcVar14[0x42] == pcVar16[0x34]);
            auVar65[5] = -(pcVar14[0x43] == pcVar16[0x35]);
            auVar65[6] = -(pcVar14[0x44] == pcVar16[0x36]);
            auVar65[7] = -(pcVar14[0x45] == pcVar16[0x37]);
            auVar65[8] = -(pcVar14[0x46] == pcVar16[0x38]);
            auVar65[9] = -(pcVar14[0x47] == pcVar16[0x39]);
            auVar65[10] = -(pcVar14[0x48] == pcVar16[0x3a]);
            auVar65[0xb] = -(pcVar14[0x49] == pcVar16[0x3b]);
            auVar65[0xc] = -(pcVar14[0x4a] == pcVar16[0x3c]);
            auVar65[0xd] = -(pcVar14[0x4b] == pcVar16[0x3d]);
            auVar65[0xe] = -(pcVar14[0x4c] == pcVar16[0x3e]);
            auVar65[0xf] = -(pcVar14[0x4d] == pcVar16[0x3f]);
            pcVar15 = pcVar16 + 0x20;
            param_2 = pcVar13;
          } while (uVar12 == 0);
          auVar65 = auVar65 & auVar32;
          if ((long)param_3 < 0) {
            uVar12 = uVar12 + 1;
            param_3 = uVar11;
          }
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            pcVar15 = pcVar16 + 0x40;
            pcVar13 = pcVar14 + 0x40;
            uVar12 = (ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar65[0xf] >> 7) << 0xf) - 0xffff;
            param_1 = (char *)(ulong)uVar12;
            auVar34 = auVar32;
            if (uVar12 == 0) {
              param_2 = pcVar14 + param_3 + 0x4e;
              pcVar15 = pcVar15 + param_3;
              goto LAB_0074b4c0;
            }
          }
        }
      }
      else {
        param_3 = uVar11 - 0x30;
        uVar8 = (ulong)uVar12;
        if (uVar11 < 0x50) {
          auVar34[0] = -(param_2[0xf] == *pcVar15);
          auVar34[1] = -(param_2[0x10] == pcVar15[1]);
          auVar34[2] = -(param_2[0x11] == pcVar15[2]);
          auVar34[3] = -(param_2[0x12] == pcVar15[3]);
          auVar34[4] = -(param_2[0x13] == pcVar15[4]);
          auVar34[5] = -(param_2[0x14] == pcVar15[5]);
          auVar34[6] = -(param_2[0x15] == pcVar15[6]);
          auVar34[7] = -(param_2[0x16] == pcVar15[7]);
          auVar34[8] = -(param_2[0x17] == pcVar15[8]);
          auVar34[9] = -(param_2[0x18] == pcVar15[9]);
          auVar34[10] = -(param_2[0x19] == pcVar15[10]);
          auVar34[0xb] = -(param_2[0x1a] == pcVar15[0xb]);
          auVar34[0xc] = -(param_2[0x1b] == pcVar15[0xc]);
          auVar34[0xd] = -(param_2[0x1c] == pcVar15[0xd]);
          auVar34[0xe] = -(param_2[0x1d] == pcVar15[0xe]);
          auVar34[0xf] = -(param_2[0x1e] == pcVar15[0xf]);
          auVar66[0] = -(param_2[0x1f] == pcVar15[0x10]);
          auVar66[1] = -(param_2[0x20] == pcVar15[0x11]);
          auVar66[2] = -(param_2[0x21] == pcVar15[0x12]);
          auVar66[3] = -(param_2[0x22] == pcVar15[0x13]);
          auVar66[4] = -(param_2[0x23] == pcVar15[0x14]);
          auVar66[5] = -(param_2[0x24] == pcVar15[0x15]);
          auVar66[6] = -(param_2[0x25] == pcVar15[0x16]);
          auVar66[7] = -(param_2[0x26] == pcVar15[0x17]);
          auVar66[8] = -(param_2[0x27] == pcVar15[0x18]);
          auVar66[9] = -(param_2[0x28] == pcVar15[0x19]);
          auVar66[10] = -(param_2[0x29] == pcVar15[0x1a]);
          auVar66[0xb] = -(param_2[0x2a] == pcVar15[0x1b]);
          auVar66[0xc] = -(param_2[0x2b] == pcVar15[0x1c]);
          auVar66[0xd] = -(param_2[0x2c] == pcVar15[0x1d]);
          auVar66[0xe] = -(param_2[0x2d] == pcVar15[0x1e]);
          auVar66[0xf] = -(param_2[0x2e] == pcVar15[0x1f]);
          auVar66 = auVar66 & auVar34;
          pcVar15 = pcVar15 + 0x20;
          pcVar13 = param_2 + 0x20;
          uVar12 = (ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) - 0xffff;
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            param_2 = param_2 + (uVar11 - 1);
            pcVar15 = pcVar15 + param_3;
            goto LAB_0074b4c0;
          }
        }
        else {
          auVar33[0] = -(param_2[0xf] == *pcVar15);
          auVar33[1] = -(param_2[0x10] == pcVar15[1]);
          auVar33[2] = -(param_2[0x11] == pcVar15[2]);
          auVar33[3] = -(param_2[0x12] == pcVar15[3]);
          auVar33[4] = -(param_2[0x13] == pcVar15[4]);
          auVar33[5] = -(param_2[0x14] == pcVar15[5]);
          auVar33[6] = -(param_2[0x15] == pcVar15[6]);
          auVar33[7] = -(param_2[0x16] == pcVar15[7]);
          auVar33[8] = -(param_2[0x17] == pcVar15[8]);
          auVar33[9] = -(param_2[0x18] == pcVar15[9]);
          auVar33[10] = -(param_2[0x19] == pcVar15[10]);
          auVar33[0xb] = -(param_2[0x1a] == pcVar15[0xb]);
          auVar33[0xc] = -(param_2[0x1b] == pcVar15[0xc]);
          auVar33[0xd] = -(param_2[0x1c] == pcVar15[0xd]);
          auVar33[0xe] = -(param_2[0x1d] == pcVar15[0xe]);
          auVar33[0xf] = -(param_2[0x1e] == pcVar15[0xf]);
          auVar67[0] = -(param_2[0x1f] == pcVar15[0x10]);
          auVar67[1] = -(param_2[0x20] == pcVar15[0x11]);
          auVar67[2] = -(param_2[0x21] == pcVar15[0x12]);
          auVar67[3] = -(param_2[0x22] == pcVar15[0x13]);
          auVar67[4] = -(param_2[0x23] == pcVar15[0x14]);
          auVar67[5] = -(param_2[0x24] == pcVar15[0x15]);
          auVar67[6] = -(param_2[0x25] == pcVar15[0x16]);
          auVar67[7] = -(param_2[0x26] == pcVar15[0x17]);
          auVar67[8] = -(param_2[0x27] == pcVar15[0x18]);
          auVar67[9] = -(param_2[0x28] == pcVar15[0x19]);
          auVar67[10] = -(param_2[0x29] == pcVar15[0x1a]);
          auVar67[0xb] = -(param_2[0x2a] == pcVar15[0x1b]);
          auVar67[0xc] = -(param_2[0x2b] == pcVar15[0x1c]);
          auVar67[0xd] = -(param_2[0x2c] == pcVar15[0x1d]);
          auVar67[0xe] = -(param_2[0x2d] == pcVar15[0x1e]);
          auVar67[0xf] = -(param_2[0x2e] == pcVar15[0x1f]);
          param_3 = uVar11 - 0x50;
          do {
            auVar34 = auVar33;
            pcVar16 = pcVar15;
            pcVar14 = param_2;
            uVar11 = param_3;
            auVar67 = auVar67 & auVar34;
            param_3 = uVar11 - 0x20;
            uVar12 = ((ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar67[0xf] >> 7) << 0xf) - 0xffff) -
                     (uint)(uVar11 < 0x20);
            auVar33[0] = -(pcVar14[0x2f] == pcVar16[0x20]);
            auVar33[1] = -(pcVar14[0x30] == pcVar16[0x21]);
            auVar33[2] = -(pcVar14[0x31] == pcVar16[0x22]);
            auVar33[3] = -(pcVar14[0x32] == pcVar16[0x23]);
            auVar33[4] = -(pcVar14[0x33] == pcVar16[0x24]);
            auVar33[5] = -(pcVar14[0x34] == pcVar16[0x25]);
            auVar33[6] = -(pcVar14[0x35] == pcVar16[0x26]);
            auVar33[7] = -(pcVar14[0x36] == pcVar16[0x27]);
            auVar33[8] = -(pcVar14[0x37] == pcVar16[0x28]);
            auVar33[9] = -(pcVar14[0x38] == pcVar16[0x29]);
            auVar33[10] = -(pcVar14[0x39] == pcVar16[0x2a]);
            auVar33[0xb] = -(pcVar14[0x3a] == pcVar16[0x2b]);
            auVar33[0xc] = -(pcVar14[0x3b] == pcVar16[0x2c]);
            auVar33[0xd] = -(pcVar14[0x3c] == pcVar16[0x2d]);
            auVar33[0xe] = -(pcVar14[0x3d] == pcVar16[0x2e]);
            auVar33[0xf] = -(pcVar14[0x3e] == pcVar16[0x2f]);
            pcVar13 = pcVar14 + 0x20;
            auVar67[0] = -(pcVar14[0x3f] == pcVar16[0x30]);
            auVar67[1] = -(pcVar14[0x40] == pcVar16[0x31]);
            auVar67[2] = -(pcVar14[0x41] == pcVar16[0x32]);
            auVar67[3] = -(pcVar14[0x42] == pcVar16[0x33]);
            auVar67[4] = -(pcVar14[0x43] == pcVar16[0x34]);
            auVar67[5] = -(pcVar14[0x44] == pcVar16[0x35]);
            auVar67[6] = -(pcVar14[0x45] == pcVar16[0x36]);
            auVar67[7] = -(pcVar14[0x46] == pcVar16[0x37]);
            auVar67[8] = -(pcVar14[0x47] == pcVar16[0x38]);
            auVar67[9] = -(pcVar14[0x48] == pcVar16[0x39]);
            auVar67[10] = -(pcVar14[0x49] == pcVar16[0x3a]);
            auVar67[0xb] = -(pcVar14[0x4a] == pcVar16[0x3b]);
            auVar67[0xc] = -(pcVar14[0x4b] == pcVar16[0x3c]);
            auVar67[0xd] = -(pcVar14[0x4c] == pcVar16[0x3d]);
            auVar67[0xe] = -(pcVar14[0x4d] == pcVar16[0x3e]);
            auVar67[0xf] = -(pcVar14[0x4e] == pcVar16[0x3f]);
            pcVar15 = pcVar16 + 0x20;
            param_2 = pcVar13;
          } while (uVar12 == 0);
          auVar67 = auVar67 & auVar33;
          if ((long)param_3 < 0) {
            uVar12 = uVar12 + 1;
            param_3 = uVar11;
          }
          param_1 = (char *)(ulong)uVar12;
          if (uVar12 == 0) {
            pcVar15 = pcVar16 + 0x40;
            pcVar13 = pcVar14 + 0x40;
            uVar12 = (ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar67[0xf] >> 7) << 0xf) - 0xffff;
            param_1 = (char *)(ulong)uVar12;
            auVar34 = auVar33;
            if (uVar12 == 0) {
              param_2 = pcVar14 + param_3 + 0x4f;
              pcVar15 = pcVar15 + param_3;
              goto LAB_0074b4c0;
            }
          }
        }
      }
    }
    uVar12 = (ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) - 0xffff;
    if (uVar12 != 0) {
      pcVar13 = pcVar13 + -0x10;
      pcVar15 = pcVar15 + -0x10;
      param_1 = (char *)(ulong)uVar12;
    }
    param_2 = pcVar13 + uVar8;
  }
  if ((char)param_1 == '\0') {
    pcVar13 = pcVar15 + 8;
    pcVar14 = param_2 + 8;
    if (((ulong)param_1 & 0x100) != 0) goto LAB_0074b410;
    if (((ulong)param_1 & 0x200) != 0) goto LAB_0074b420;
    if (((ulong)param_1 & 0x400) != 0) goto LAB_0074b430;
    if (((ulong)param_1 & 0x800) != 0) goto LAB_0074b440;
    if (((ulong)param_1 & 0x1000) != 0) goto LAB_0074b450;
    if (((ulong)param_1 & 0x2000) != 0) goto LAB_0074b460;
    if (((ulong)param_1 & 0x4000) == 0) {
      auVar76._0_4_ = (uint)(byte)pcVar15[-1] - (uint)(byte)param_2[-1];
      auVar76._4_4_ = 0;
      auVar76[8] = param_2[-1];
      auVar76._9_7_ = 0;
      return auVar76;
    }
  }
  else {
    pcVar14 = param_2;
    pcVar13 = pcVar15;
    if (((ulong)param_1 & 1) != 0) {
LAB_0074b410:
      auVar69._0_4_ = (uint)(byte)pcVar13[-0x10] - (uint)(byte)pcVar14[-0x10];
      auVar69._4_4_ = 0;
      auVar69[8] = pcVar14[-0x10];
      auVar69._9_7_ = 0;
      return auVar69;
    }
    if (((ulong)param_1 & 2) != 0) {
LAB_0074b420:
      auVar70._0_4_ = (uint)(byte)pcVar13[-0xf] - (uint)(byte)pcVar14[-0xf];
      auVar70._4_4_ = 0;
      auVar70[8] = pcVar14[-0xf];
      auVar70._9_7_ = 0;
      return auVar70;
    }
    if (((ulong)param_1 & 4) != 0) {
LAB_0074b430:
      auVar71._0_4_ = (uint)(byte)pcVar13[-0xe] - (uint)(byte)pcVar14[-0xe];
      auVar71._4_4_ = 0;
      auVar71[8] = pcVar14[-0xe];
      auVar71._9_7_ = 0;
      return auVar71;
    }
    if (((ulong)param_1 & 8) != 0) {
LAB_0074b440:
      auVar72._0_4_ = (uint)(byte)pcVar13[-0xd] - (uint)(byte)pcVar14[-0xd];
      auVar72._4_4_ = 0;
      auVar72[8] = pcVar14[-0xd];
      auVar72._9_7_ = 0;
      return auVar72;
    }
    if (((ulong)param_1 & 0x10) != 0) {
LAB_0074b450:
      auVar73._0_4_ = (uint)(byte)pcVar13[-0xc] - (uint)(byte)pcVar14[-0xc];
      auVar73._4_4_ = 0;
      auVar73[8] = pcVar14[-0xc];
      auVar73._9_7_ = 0;
      return auVar73;
    }
    if (((ulong)param_1 & 0x20) != 0) {
LAB_0074b460:
      auVar74._0_4_ = (uint)(byte)pcVar13[-0xb] - (uint)(byte)pcVar14[-0xb];
      auVar74._4_4_ = 0;
      auVar74[8] = pcVar14[-0xb];
      auVar74._9_7_ = 0;
      return auVar74;
    }
    if (((ulong)param_1 & 0x40) == 0) {
      auVar68._0_4_ = (uint)(byte)pcVar15[-9] - (uint)(byte)param_2[-9];
      auVar68._4_4_ = 0;
      auVar68[8] = param_2[-9];
      auVar68._9_7_ = 0;
      return auVar68;
    }
  }
  auVar75._0_4_ = (uint)(byte)pcVar13[-10] - (uint)(byte)pcVar14[-10];
  auVar75._4_4_ = 0;
  auVar75[8] = pcVar14[-10];
  auVar75._9_7_ = 0;
  return auVar75;
}

