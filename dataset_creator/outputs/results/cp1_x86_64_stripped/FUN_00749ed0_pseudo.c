
char * FUN_00749ed0(ulong param_1,char param_2)

{
  ushort uVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  char *pcVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  pcVar19 = (char *)(param_1 & 0xfffffffffffffff0);
  pcVar20 = pcVar19 + 0x10;
  auVar21[0] = -(*pcVar19 == param_2);
  auVar21[1] = -(pcVar19[1] == param_2);
  auVar21[2] = -(pcVar19[2] == param_2);
  auVar21[3] = -(pcVar19[3] == param_2);
  auVar21[4] = -(pcVar19[4] == param_2);
  auVar21[5] = -(pcVar19[5] == param_2);
  auVar21[6] = -(pcVar19[6] == param_2);
  auVar21[7] = -(pcVar19[7] == param_2);
  auVar21[8] = -(pcVar19[8] == param_2);
  auVar21[9] = -(pcVar19[9] == param_2);
  auVar21[10] = -(pcVar19[10] == param_2);
  auVar21[0xb] = -(pcVar19[0xb] == param_2);
  auVar21[0xc] = -(pcVar19[0xc] == param_2);
  auVar21[0xd] = -(pcVar19[0xd] == param_2);
  auVar21[0xe] = -(pcVar19[0xe] == param_2);
  auVar21[0xf] = -(pcVar19[0xf] == param_2);
  auVar23[0] = -(*pcVar19 == '\0');
  auVar23[1] = -(pcVar19[1] == '\0');
  auVar23[2] = -(pcVar19[2] == '\0');
  auVar23[3] = -(pcVar19[3] == '\0');
  auVar23[4] = -(pcVar19[4] == '\0');
  auVar23[5] = -(pcVar19[5] == '\0');
  auVar23[6] = -(pcVar19[6] == '\0');
  auVar23[7] = -(pcVar19[7] == '\0');
  auVar23[8] = -(pcVar19[8] == '\0');
  auVar23[9] = -(pcVar19[9] == '\0');
  auVar23[10] = -(pcVar19[10] == '\0');
  auVar23[0xb] = -(pcVar19[0xb] == '\0');
  auVar23[0xc] = -(pcVar19[0xc] == '\0');
  auVar23[0xd] = -(pcVar19[0xd] == '\0');
  auVar23[0xe] = -(pcVar19[0xe] == '\0');
  auVar23[0xf] = -(pcVar19[0xf] == '\0');
  uVar18 = -1 << ((char)param_1 - (char)pcVar19 & 0x1fU);
  uVar17 = (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar21[0xf] >> 7) << 0xf) & uVar18;
  uVar18 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar23[0xf] >> 7) << 0xf) & uVar18;
  if (uVar17 == 0) {
    if (uVar18 != 0) {
      return (char *)0x0;
    }
    do {
      cVar2 = *pcVar20;
      pcVar19 = pcVar20 + 1;
      pcVar3 = pcVar20 + 2;
      pcVar4 = pcVar20 + 3;
      pcVar5 = pcVar20 + 4;
      pcVar6 = pcVar20 + 5;
      pcVar7 = pcVar20 + 6;
      pcVar8 = pcVar20 + 7;
      pcVar9 = pcVar20 + 8;
      pcVar10 = pcVar20 + 9;
      pcVar11 = pcVar20 + 10;
      pcVar12 = pcVar20 + 0xb;
      pcVar13 = pcVar20 + 0xc;
      pcVar14 = pcVar20 + 0xd;
      pcVar15 = pcVar20 + 0xe;
      pcVar16 = pcVar20 + 0xf;
      pcVar20 = pcVar20 + 0x10;
      auVar22[0] = -(cVar2 == param_2);
      auVar22[1] = -(*pcVar19 == param_2);
      auVar22[2] = -(*pcVar3 == param_2);
      auVar22[3] = -(*pcVar4 == param_2);
      auVar22[4] = -(*pcVar5 == param_2);
      auVar22[5] = -(*pcVar6 == param_2);
      auVar22[6] = -(*pcVar7 == param_2);
      auVar22[7] = -(*pcVar8 == param_2);
      auVar22[8] = -(*pcVar9 == param_2);
      auVar22[9] = -(*pcVar10 == param_2);
      auVar22[10] = -(*pcVar11 == param_2);
      auVar22[0xb] = -(*pcVar12 == param_2);
      auVar22[0xc] = -(*pcVar13 == param_2);
      auVar22[0xd] = -(*pcVar14 == param_2);
      auVar22[0xe] = -(*pcVar15 == param_2);
      auVar22[0xf] = -(*pcVar16 == param_2);
      auVar24[0] = -(cVar2 == '\0');
      auVar24[1] = -(*pcVar19 == '\0');
      auVar24[2] = -(*pcVar3 == '\0');
      auVar24[3] = -(*pcVar4 == '\0');
      auVar24[4] = -(*pcVar5 == '\0');
      auVar24[5] = -(*pcVar6 == '\0');
      auVar24[6] = -(*pcVar7 == '\0');
      auVar24[7] = -(*pcVar8 == '\0');
      auVar24[8] = -(*pcVar9 == '\0');
      auVar24[9] = -(*pcVar10 == '\0');
      auVar24[10] = -(*pcVar11 == '\0');
      auVar24[0xb] = -(*pcVar12 == '\0');
      auVar24[0xc] = -(*pcVar13 == '\0');
      auVar24[0xd] = -(*pcVar14 == '\0');
      auVar24[0xe] = -(*pcVar15 == '\0');
      auVar24[0xf] = -(*pcVar16 == '\0');
      uVar1 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar17 = (uint)uVar1;
    } while (((((((((((((((((auVar24 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                           (auVar24 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                          (auVar24 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                         (auVar24 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                        (auVar24 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                       (auVar24 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                      (auVar24 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                     (auVar24 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                    (auVar24 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                   (auVar24 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                  (auVar24 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                 (auVar24 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                (auVar24 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (auVar24 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
              (auVar24 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
             -1 < (char)auVar24[0xf]) && uVar1 == 0);
    uVar18 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar24[0xf] >> 7) << 0xf);
    if (uVar1 == 0) {
      return (char *)0x0;
    }
  }
  if (uVar18 != 0) {
    if ((char)uVar17 == '\0') {
      if ((char)uVar18 == '\0') {
        if ((uVar17 & 0xf00) == 0) {
          if ((uVar18 & 0xf00) == 0) {
            if ((uVar17 & 0x1000) != 0) goto LAB_0074a1c0;
            if ((uVar18 & 0x1000) == 0) {
              if ((uVar17 & 0x2000) != 0) goto LAB_0074a1d0;
              if ((uVar18 & 0x2000) == 0) {
                if ((uVar17 & 0x4000) != 0) goto LAB_0074a1e0;
                if ((uVar18 & 0x4000) == 0) {
                  return pcVar20 + -1;
                }
              }
            }
          }
        }
        else {
          if ((uVar17 & 0x100) != 0) goto LAB_0074a180;
          if ((uVar18 & 0x100) == 0) {
            if ((uVar17 & 0x200) != 0) goto LAB_0074a190;
            if ((uVar18 & 0x200) == 0) {
              if ((uVar17 & 0x400) != 0) goto LAB_0074a1a0;
              if ((uVar18 & 0x400) == 0) {
                return pcVar20 + -5;
              }
            }
          }
        }
      }
    }
    else if ((uVar17 & 0xf) == 0) {
      if ((uVar18 & 0xf) == 0) {
        if ((uVar17 & 0x10) != 0) goto LAB_0074a150;
        if ((uVar18 & 0x10) == 0) {
          if ((uVar17 & 0x20) != 0) goto LAB_0074a160;
          if ((uVar18 & 0x20) == 0) {
            if ((uVar17 & 0x40) != 0) goto LAB_0074a170;
            if ((uVar18 & 0x40) == 0) {
              return pcVar20 + -9;
            }
          }
        }
      }
    }
    else {
      if ((uVar17 & 1) != 0) {
        return pcVar20 + -0x10;
      }
      if ((uVar18 & 1) == 0) {
        if ((uVar17 & 2) != 0) goto LAB_0074a120;
        if ((uVar18 & 2) == 0) {
          if ((uVar17 & 4) != 0) goto LAB_0074a130;
          if ((uVar18 & 4) == 0) {
            return pcVar20 + -0xd;
          }
        }
      }
    }
    return (char *)0x0;
  }
  if ((char)uVar17 == '\0') {
    if ((uVar17 & 0x100) == 0) {
      if ((uVar17 & 0x200) != 0) {
LAB_0074a190:
        return pcVar20 + -7;
      }
      if ((uVar17 & 0x400) != 0) {
LAB_0074a1a0:
        return pcVar20 + -6;
      }
      if ((uVar17 & 0x800) != 0) {
        return pcVar20 + -5;
      }
      if ((uVar17 & 0x1000) == 0) {
        if ((uVar17 & 0x2000) == 0) {
          if ((uVar17 & 0x4000) == 0) {
            return pcVar20 + -1;
          }
LAB_0074a1e0:
          return pcVar20 + -2;
        }
LAB_0074a1d0:
        return pcVar20 + -3;
      }
LAB_0074a1c0:
      return pcVar20 + -4;
    }
LAB_0074a180:
    return pcVar20 + -8;
  }
  if ((uVar17 & 1) != 0) {
    return pcVar20 + -0x10;
  }
  if ((uVar17 & 2) != 0) {
LAB_0074a120:
    return pcVar20 + -0xf;
  }
  if ((uVar17 & 4) != 0) {
LAB_0074a130:
    return pcVar20 + -0xe;
  }
  if ((uVar17 & 8) != 0) {
    return pcVar20 + -0xd;
  }
  if ((uVar17 & 0x10) == 0) {
    if ((uVar17 & 0x20) == 0) {
      if ((uVar17 & 0x40) == 0) {
        return pcVar20 + -9;
      }
LAB_0074a170:
      return pcVar20 + -10;
    }
LAB_0074a160:
    return pcVar20 + -0xb;
  }
LAB_0074a150:
  return pcVar20 + -0xc;
}

