
ulong __addtf3(ulong param_1,ulong param_2)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  bool bVar29;
  ulong in_XMM0_Qb;
  ulong in_XMM1_Qb;
  
  uVar6 = in_XMM0_Qb & 0xffffffffffff;
  uVar14 = uVar6 * 8;
  uVar2 = (ushort)(in_XMM0_Qb >> 0x30);
  uVar18 = param_1 * 8;
  uVar7 = param_1 >> 0x3d;
  uVar21 = in_XMM1_Qb & 0xffffffffffff;
  uVar28 = -((long)in_XMM0_Qb >> 0x3f);
  uVar8 = uVar7 | uVar14;
  uVar3 = (ushort)(in_XMM1_Qb >> 0x30);
  uVar26 = in_XMM1_Qb >> 0x3f;
  uVar25 = uVar21 * 8;
  uVar17 = (ulong)(uVar2 & 0x7fff);
  uVar22 = param_2 >> 0x3d;
  bVar9 = (byte)(in_XMM0_Qb >> 0x38);
  uVar27 = uVar28 & 0xff;
  uVar13 = (ulong)(uVar3 & 0x7fff);
  uVar10 = (uint)(uVar2 & 0x7fff) - (uint)(uVar3 & 0x7fff);
  uVar23 = uVar22 | uVar25;
  uVar15 = param_2 * 8;
  uVar20 = (uint)(uVar14 >> 0x20);
  uVar11 = (uint)(uVar25 >> 0x20);
  uVar16 = uVar6;
  uVar24 = uVar13;
  if (uVar28 == uVar26) {
    if ((int)uVar10 < 1) {
      if (uVar10 != 0) {
        if (uVar17 == 0) {
          if (uVar8 == 0 && uVar18 == 0) {
            if (uVar13 != 0x7fff) {
              uVar10 = 0;
              goto LAB_007c064b;
            }
            if (uVar23 == 0 && uVar15 == 0) goto LAB_007c0d80;
            uVar10 = uVar11 >> 0x12 ^ 1;
            goto LAB_007c0611;
          }
          uVar20 = uVar10 ^ 0xffffffff;
          if (uVar20 == 0) {
            bVar29 = CARRY8(uVar15,uVar18);
            uVar15 = uVar15 + uVar18;
            uVar23 = uVar23 + uVar8 + (ulong)bVar29;
            uVar10 = 2;
            goto LAB_007c09eb;
          }
          uVar10 = 2;
          if (uVar13 != 0x7fff) goto LAB_007c072d;
          uVar20 = 2;
          if (uVar15 == 0 && uVar23 == 0) goto LAB_007c08a3;
          uVar10 = ((uVar25 & 0x4000000000000) == 0) + 2;
          uVar16 = uVar21;
          uVar14 = param_2 & 0x1fffffffffffffff | uVar22 << 0x3d;
        }
        else {
          if (uVar13 != 0x7fff) {
            uVar20 = -uVar10;
            uVar8 = uVar8 | 0x8000000000000;
            uVar10 = 0;
LAB_007c072d:
            if ((int)uVar20 < 0x75) {
              bVar4 = (byte)uVar20;
              if ((int)uVar20 < 0x40) {
                uVar14 = uVar8 << (0x40 - bVar4 & 0x3f) | uVar18 >> (bVar4 & 0x3f) |
                         (ulong)(uVar18 << (0x40 - bVar4 & 0x3f) != 0);
                uVar24 = uVar8 >> (bVar4 & 0x3f);
              }
              else {
                if (uVar20 != 0x40) {
                  uVar18 = uVar18 | uVar8 << (0x80 - bVar4 & 0x3f);
                }
                uVar24 = 0;
                uVar14 = (ulong)(uVar18 != 0) | uVar8 >> (bVar4 - 0x40 & 0x3f);
              }
            }
            else {
              uVar14 = (ulong)(uVar8 != 0 || uVar18 != 0);
              uVar24 = 0;
            }
            bVar29 = CARRY8(uVar15,uVar14);
            uVar15 = uVar15 + uVar14;
            uVar23 = uVar23 + uVar24 + (ulong)bVar29;
            goto LAB_007c09eb;
          }
          if (uVar15 == 0 && uVar23 == 0) {
            return 0;
          }
          uVar10 = uVar11 >> 0x12 ^ 1;
          uVar16 = uVar21;
          uVar14 = uVar22 << 0x3d | param_2 & 0x1fffffffffffffff;
        }
        goto LAB_007c0440;
      }
      uVar24 = uVar17 + 1;
      uVar11 = 0;
      if ((uVar24 & 0x7ffe) == 0) {
        if (uVar17 == 0) {
          uVar28 = uVar23 | uVar15;
          if (uVar8 == 0 && uVar18 == 0) {
            uVar14 = 0;
            uVar10 = 0;
            if (uVar28 == 0) goto LAB_007c035c;
            uVar28 = 0;
            uVar8 = uVar23;
            uVar18 = uVar15;
          }
          else if (uVar28 != 0) {
            bVar29 = CARRY8(uVar18,uVar15);
            uVar15 = uVar18 + uVar15;
            uVar23 = uVar8 + uVar23 + (ulong)bVar29;
            if ((uVar23 >> 0x33 & 1) == 0) {
              uVar10 = 2;
              uVar14 = uVar23 | uVar15;
              goto LAB_007c0278;
            }
            uVar23 = uVar23 & 0xfff7ffffffffffff;
            uVar24 = 1;
            uVar10 = 2;
            uVar28 = 0;
            goto LAB_007c02db;
          }
          goto LAB_007c0ca0;
        }
        if (uVar17 == 0x7fff) {
          if (uVar8 == 0 && uVar18 == 0) {
            if ((uVar13 != 0x7fff) || (uVar15 == 0 && uVar23 == 0)) goto LAB_007c10c4;
          }
          else {
            uVar10 = uVar20 >> 0x12 ^ 1;
            if (uVar13 != 0x7fff) goto LAB_007c0e63;
            if (uVar15 == 0 && uVar23 == 0) goto LAB_007c12c1;
          }
LAB_007c10a6:
          if ((uVar25 & 0x4000000000000) == 0) {
            uVar10 = 1;
          }
          if (uVar8 != 0 || uVar18 != 0) {
LAB_007c0e6c:
            uVar14 = param_1 & 0x1fffffffffffffff | uVar7 << 0x3d;
            if ((uVar6 <= uVar21) &&
               ((uVar24 = param_2 & 0x1fffffffffffffff | uVar22 << 0x3d, uVar6 != uVar21 ||
                (uVar16 = uVar21, uVar14 < uVar24)))) {
              uVar16 = uVar21;
              uVar14 = uVar24;
            }
            goto LAB_007c0440;
          }
        }
        else if (uVar13 == 0x7fff) {
          if (uVar15 != 0 || uVar23 != 0) goto LAB_007c10a6;
          if (uVar8 != 0 || uVar18 != 0) goto LAB_007c12c1;
        }
        else if (uVar8 != 0 || uVar18 != 0) {
LAB_007c0e63:
          if (uVar15 == 0 && uVar23 == 0) {
LAB_007c12c1:
            uVar14 = param_1 & 0x1fffffffffffffff | uVar7 << 0x3d;
            goto LAB_007c0440;
          }
          goto LAB_007c0e6c;
        }
LAB_007c10c4:
        uVar16 = uVar21;
        uVar14 = param_2 & 0x1fffffffffffffff | uVar22 << 0x3d;
        goto LAB_007c0440;
      }
      uVar14 = uVar8 + uVar23 + (ulong)CARRY8(uVar18,uVar15);
      if (uVar24 != 0x7fff) {
        uVar10 = 0;
        uVar18 = uVar18 + uVar15 >> 1;
        uVar23 = uVar14 >> 1;
        uVar15 = uVar14 << 0x3f | uVar18;
        uVar28 = (ulong)((uint)uVar18 & 7);
        goto LAB_007c02db;
      }
      uVar20 = MXCSR & 0x6000;
      if ((uVar20 != 0) && (((bVar9 >> 7 ^ 1) & uVar20 == 0x4000) == 0)) {
        uVar10 = 0x28;
        uVar11 = 0x28;
        if (uVar20 == 0x2000) {
          uVar20 = uVar10;
          if (uVar27 == 0) goto LAB_007c0695;
          goto LAB_007c08a3;
        }
LAB_007c07ce:
        uVar10 = uVar11;
        if ((MXCSR & 0x6000) == 0x4000) {
          uVar23 = 0xffffffffffffffff;
          uVar15 = 0xffffffffffffffff;
          uVar24 = 0x7ffe;
          uVar11 = 0;
          goto LAB_007c07f0;
        }
        goto LAB_007c0695;
      }
      uVar20 = 0x28;
LAB_007c08a3:
      uVar10 = uVar20;
      uVar14 = 0;
      goto LAB_007c08c6;
    }
    if (uVar13 == 0) {
      if (uVar23 == 0 && uVar15 == 0) goto LAB_007c0868;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        uVar10 = 2;
        bVar29 = CARRY8(uVar18,uVar15);
        uVar15 = uVar18 + uVar15;
        uVar23 = uVar8 + uVar23 + (ulong)bVar29;
        uVar13 = uVar17;
        goto LAB_007c09eb;
      }
      uVar20 = 2;
      if (uVar17 != 0x7fff) goto LAB_007c0495;
      uVar20 = 2;
      if (uVar8 == 0 && uVar18 == 0) goto LAB_007c08a3;
      uVar10 = ((uVar14 & 0x4000000000000) == 0) + 2;
      uVar23 = uVar8;
      uVar15 = uVar18;
    }
    else {
      uVar23 = uVar23 | 0x8000000000000;
      uVar20 = 0;
      if (uVar17 != 0x7fff) {
LAB_007c0495:
        if ((int)uVar10 < 0x75) {
          bVar4 = (byte)uVar10;
          if ((int)uVar10 < 0x40) {
            uVar14 = uVar23 << (0x40 - bVar4 & 0x3f) | uVar15 >> (bVar4 & 0x3f) |
                     (ulong)(uVar15 << (0x40 - bVar4 & 0x3f) != 0);
            uVar24 = uVar23 >> (bVar4 & 0x3f);
          }
          else {
            if (uVar10 != 0x40) {
              uVar15 = uVar15 | uVar23 << (0x80 - bVar4 & 0x3f);
            }
            uVar24 = 0;
            uVar14 = (ulong)(uVar15 != 0) | uVar23 >> (bVar4 - 0x40 & 0x3f);
          }
        }
        else {
          uVar14 = (ulong)(uVar23 != 0 || uVar15 != 0);
          uVar24 = 0;
        }
        uVar15 = uVar18 + uVar14;
        uVar23 = uVar8 + uVar24 + (ulong)CARRY8(uVar18,uVar14);
        uVar13 = uVar17;
        uVar10 = uVar20;
LAB_007c09eb:
        uVar24 = uVar13;
        if ((uVar23 >> 0x33 & 1) == 0) goto LAB_007c064b;
        uVar24 = uVar13 + 1;
        if (uVar24 != 0x7fff) {
          uVar14 = uVar15 >> 1 | (ulong)((uint)uVar15 & 1);
          uVar15 = uVar23 << 0x3f | uVar14;
          uVar28 = (ulong)((uint)uVar14 & 7);
          uVar11 = 0;
          uVar23 = (uVar23 & 0xfff7ffffffffffff) >> 1;
          goto LAB_007c02db;
        }
        uVar10 = uVar10 | 0x28;
        uVar5 = MXCSR & 0x6000;
        uVar20 = uVar10;
        if ((uVar5 == 0) ||
           (((uVar28 == 0 && (uVar5 == 0x4000)) || ((uVar5 == 0x2000 & bVar9 >> 7) != 0))))
        goto LAB_007c08a3;
        uVar11 = uVar10;
        if (uVar5 != 0x2000) goto LAB_007c07ce;
        uVar23 = 0xffffffffffffffff;
        uVar15 = 0xffffffffffffffff;
        uVar24 = 0x7ffe;
        uVar11 = 0;
LAB_007c0820:
        if (uVar27 != 0) {
LAB_007c07f9:
          bVar29 = 0xfffffffffffffff7 < uVar15;
          uVar15 = uVar15 + 8;
          uVar23 = uVar23 + bVar29;
        }
LAB_007c0311:
        uVar14 = uVar23 & 0x8000000000000;
        if (uVar11 != 0) {
LAB_007c0322:
          uVar10 = uVar10 | 0x10;
        }
        goto LAB_007c0325;
      }
      if (uVar8 == 0 && uVar18 == 0) {
        return 0;
      }
      uVar23 = uVar8;
      uVar15 = uVar18;
      uVar10 = uVar20;
      if (uVar14 >> 0x32 == 0) {
        uVar10 = 1;
        uVar14 = uVar7 << 0x3d | param_1 & 0x1fffffffffffffff;
        goto LAB_007c0440;
      }
    }
LAB_007c0611:
    uVar24 = 0x7fff;
LAB_007c0616:
    uVar14 = uVar23 << 0x3d | uVar15 >> 3;
    uVar16 = uVar23 >> 3;
    if (uVar24 != 0x7fff) goto LAB_007c035c;
LAB_007c0440:
    if (uVar16 == 0 && uVar14 == 0) {
      uVar14 = 0;
    }
  }
  else {
    if (0 < (int)uVar10) {
      if (uVar13 == 0) {
        if (uVar23 == 0 && uVar15 == 0) {
LAB_007c0868:
          uVar10 = 0;
          uVar23 = uVar8;
          uVar15 = uVar18;
          uVar24 = uVar17;
          if (uVar17 != 0x7fff) goto LAB_007c064b;
          if (uVar8 != 0 || uVar18 != 0) {
            uVar10 = uVar20 >> 0x12 ^ 1;
            goto LAB_007c0611;
          }
LAB_007c0d80:
          uVar10 = 0;
          uVar16 = 0;
          uVar14 = 0;
        }
        else {
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar10 = 2;
            uVar14 = uVar18 + param_2 * -8;
            uVar23 = (uVar8 - uVar23) - (ulong)(uVar18 < uVar15);
            uVar13 = uVar17;
            uVar26 = uVar27;
            goto LAB_007c01d0;
          }
          uVar11 = 2;
          if (uVar17 != 0x7fff) goto LAB_007c0185;
          uVar20 = 2;
          if (uVar18 == 0 && uVar8 == 0) goto LAB_007c08a3;
          uVar10 = ((uVar14 & 0x4000000000000) == 0) + 2;
          uVar14 = param_1 & 0x1fffffffffffffff | uVar7 << 0x3d;
        }
      }
      else {
        uVar23 = uVar23 | 0x8000000000000;
        uVar11 = 0;
        if (uVar17 != 0x7fff) {
LAB_007c0185:
          if ((int)uVar10 < 0x75) {
            bVar9 = (byte)uVar10;
            if ((int)uVar10 < 0x40) {
              uVar25 = uVar23 << (0x40 - bVar9 & 0x3f) | uVar15 >> (bVar9 & 0x3f) |
                       (ulong)(uVar15 << (0x40 - bVar9 & 0x3f) != 0);
              uVar24 = uVar23 >> (bVar9 & 0x3f);
            }
            else {
              if (uVar10 != 0x40) {
                uVar15 = uVar15 | uVar23 << (0x80 - bVar9 & 0x3f);
              }
              uVar24 = 0;
              uVar25 = (ulong)(uVar15 != 0) | uVar23 >> (bVar9 - 0x40 & 0x3f);
            }
          }
          else {
            uVar25 = (ulong)(uVar23 != 0 || uVar15 != 0);
            uVar24 = 0;
          }
          uVar14 = uVar18 - uVar25;
          uVar23 = (uVar8 - uVar24) - (ulong)(uVar18 < uVar25);
          uVar13 = uVar17;
          uVar26 = uVar27;
          uVar10 = uVar11;
LAB_007c01d0:
          uVar15 = uVar14;
          uVar24 = uVar13;
          uVar27 = uVar26;
          if ((uVar23 >> 0x33 & 1) != 0) {
            uVar24 = uVar23 & 0x7ffffffffffff;
            uVar17 = uVar13;
            goto LAB_007c01e8;
          }
LAB_007c064b:
          uVar14 = uVar15 | uVar23;
          if (uVar24 == 0) goto LAB_007c0278;
          uVar11 = 0;
          uVar28 = (ulong)((uint)uVar15 & 7);
          goto LAB_007c02db;
        }
        if (uVar18 == 0 && uVar8 == 0) {
          return 0;
        }
        uVar10 = uVar20 >> 0x12 ^ 1;
        uVar14 = param_1 & 0x1fffffffffffffff | uVar7 << 0x3d;
      }
      goto LAB_007c0440;
    }
    if (uVar10 != 0) {
      if (uVar17 == 0) {
        if (uVar8 == 0 && uVar18 == 0) {
          if (uVar13 == 0x7fff) {
            if (uVar23 != 0 || uVar15 != 0) {
              uVar10 = uVar11 >> 0x12 ^ 1;
              goto LAB_007c0611;
            }
            goto LAB_007c0d80;
          }
          uVar10 = 0;
          uVar27 = uVar26;
          goto LAB_007c064b;
        }
        uVar20 = uVar10 ^ 0xffffffff;
        if (uVar20 == 0) {
          uVar14 = uVar15 + param_1 * -8;
          uVar23 = (uVar23 - uVar8) - (ulong)(uVar15 < uVar18);
          uVar10 = 2;
          goto LAB_007c01d0;
        }
        uVar10 = 2;
        if (uVar13 != 0x7fff) goto LAB_007c0986;
        uVar20 = 2;
        if (uVar15 == 0 && uVar23 == 0) goto LAB_007c08a3;
        uVar10 = 3 - ((uVar25 & 0x4000000000000) != 0);
        uVar16 = uVar21;
        uVar14 = uVar22 << 0x3d | param_2 & 0x1fffffffffffffff;
      }
      else {
        if (uVar13 != 0x7fff) {
          uVar20 = -uVar10;
          uVar8 = uVar8 | 0x8000000000000;
          uVar10 = 0;
LAB_007c0986:
          if ((int)uVar20 < 0x75) {
            bVar9 = (byte)uVar20;
            if ((int)uVar20 < 0x40) {
              uVar18 = uVar8 << (0x40 - bVar9 & 0x3f) | uVar18 >> (bVar9 & 0x3f) |
                       (ulong)(uVar18 << (0x40 - bVar9 & 0x3f) != 0);
              uVar24 = uVar8 >> (bVar9 & 0x3f);
            }
            else {
              if (uVar20 != 0x40) {
                uVar18 = uVar18 | uVar8 << (0x80 - bVar9 & 0x3f);
              }
              uVar24 = 0;
              uVar18 = (ulong)(uVar18 != 0) | uVar8 >> (bVar9 - 0x40 & 0x3f);
            }
          }
          else {
            uVar18 = (ulong)(uVar8 != 0 || uVar18 != 0);
            uVar24 = 0;
          }
          uVar14 = uVar15 - uVar18;
          uVar23 = (uVar23 - uVar24) - (ulong)(uVar15 < uVar18);
          goto LAB_007c01d0;
        }
        if (uVar15 == 0 && uVar23 == 0) {
          return 0;
        }
        uVar10 = uVar11 >> 0x12 ^ 1;
        uVar16 = uVar21;
        uVar14 = uVar22 << 0x3d | param_2 & 0x1fffffffffffffff;
      }
      goto LAB_007c0440;
    }
    if ((uVar17 + 1 & 0x7ffe) == 0) {
      uVar28 = uVar23 | uVar15;
      if (uVar17 != 0) {
        if (uVar17 == 0x7fff) {
          if (uVar8 == 0 && uVar18 == 0) {
            if (uVar13 != 0x7fff) goto LAB_007c0c2b;
          }
          else {
            uVar10 = uVar20 >> 0x12 ^ 1;
            if (uVar13 != 0x7fff) goto LAB_007c0fad;
          }
LAB_007c10f6:
          if (uVar28 == 0) {
            if (uVar8 == 0 && uVar18 == 0) {
              uVar10 = 1;
              uVar14 = 0;
              goto LAB_007c035c;
            }
            goto LAB_007c0fad;
          }
          if ((uVar25 & 0x4000000000000) == 0) {
            uVar10 = 1;
          }
          if (uVar8 == 0 && uVar18 == 0) goto LAB_007c120f;
        }
        else {
          if (uVar13 == 0x7fff) goto LAB_007c10f6;
          if (uVar8 == 0 && uVar18 == 0) {
LAB_007c0c2b:
            if (uVar28 == 0) {
              uVar14 = 0;
              uVar10 = 1;
              goto LAB_007c035c;
            }
LAB_007c120f:
            uVar16 = uVar21;
            uVar14 = param_2 & 0x1fffffffffffffff | uVar22 << 0x3d;
            goto LAB_007c0440;
          }
LAB_007c0fad:
          if (uVar28 == 0) {
            uVar14 = param_1 & 0x1fffffffffffffff | uVar7 << 0x3d;
            goto LAB_007c0440;
          }
        }
        uVar14 = param_1 & 0x1fffffffffffffff | uVar7 << 0x3d;
        if ((uVar6 <= uVar21) &&
           ((uVar24 = param_2 & 0x1fffffffffffffff | uVar22 << 0x3d, uVar14 < uVar24 ||
            (uVar16 = uVar21, uVar21 != uVar6)))) {
          uVar16 = uVar21;
          uVar14 = uVar24;
        }
        goto LAB_007c0440;
      }
      if (uVar8 != 0 || uVar18 != 0) {
        if (uVar28 == 0) goto LAB_007c0ca0;
        uVar14 = uVar18 + param_2 * -8;
        uVar24 = (uVar8 - uVar23) - (ulong)(uVar18 < uVar15);
        if ((uVar24 >> 0x33 & 1) == 0) {
          if (uVar24 == 0 && uVar14 == 0) {
            uVar10 = 2;
            uVar14 = 0;
            goto LAB_007c035c;
          }
          uVar28 = 0;
          uVar8 = uVar24;
          uVar18 = uVar14;
          goto LAB_007c0ca0;
        }
        bVar29 = uVar15 < uVar18;
        uVar15 = uVar15 + param_1 * -8;
        uVar23 = (uVar23 - uVar8) - (ulong)bVar29;
        uVar14 = uVar23 | uVar15;
        uVar10 = 2;
        uVar27 = uVar26;
        goto LAB_007c0278;
      }
      if (uVar28 == 0) goto LAB_007c0d40;
      uVar28 = 0;
      uVar8 = uVar23;
      uVar18 = uVar15;
      uVar27 = uVar26;
LAB_007c0ca0:
      uVar10 = 2;
      uVar23 = uVar8;
      uVar15 = uVar18;
LAB_007c0287:
      uVar24 = uVar15 * 2;
      lVar12 = uVar23 * 2 - ((long)uVar15 >> 0x3f);
      if ((uVar24 & 6) != 0) {
        uVar10 = uVar10 | 0x20;
        uVar20 = MXCSR & 0x6000;
        if (uVar20 == 0x2000) {
          if (uVar27 != 0) {
LAB_007c0d19:
            lVar12 = lVar12 + (ulong)(0xfffffffffffffff7 < uVar24);
          }
        }
        else if (uVar20 == 0x4000) {
          if (uVar27 == 0) goto LAB_007c0d19;
        }
        else if ((uVar20 == 0) && (((uint)uVar24 & 0xf) != 4)) {
          lVar12 = lVar12 + (ulong)(0xfffffffffffffffb < uVar24);
        }
      }
      uVar24 = 0;
      uVar11 = ((uint)((ulong)lVar12 >> 0x34) ^ 1) & 1;
LAB_007c02db:
      if (uVar28 != 0) {
        uVar10 = uVar10 | 0x20;
        uVar20 = MXCSR & 0x6000;
        if (uVar20 == 0x2000) goto LAB_007c0820;
        if (uVar20 == 0x4000) {
LAB_007c07f0:
          if (uVar27 == 0) goto LAB_007c07f9;
        }
        else if ((uVar20 == 0) && (((uint)uVar15 & 0xf) != 4)) {
          bVar29 = 0xfffffffffffffffb < uVar15;
          uVar15 = uVar15 + 4;
          uVar23 = uVar23 + bVar29;
        }
        goto LAB_007c0311;
      }
      uVar14 = uVar23 & 0x8000000000000;
      if ((uVar11 != 0) && (((uVar10 & 0x20) != 0 || ((MXCSR & 0x800) == 0)))) goto LAB_007c0322;
LAB_007c0325:
      if (uVar14 == 0) goto LAB_007c0616;
      if (uVar24 == 0x7ffe) {
LAB_007c0695:
        if ((MXCSR & 0x6000) == 0) {
LAB_007c08a0:
          uVar20 = uVar10 | 0x28;
          goto LAB_007c08a3;
        }
        if ((MXCSR & 0x6000) == 0x4000) {
          if (uVar27 == 0) goto LAB_007c08a0;
        }
        else if (((MXCSR & 0x6000) == 0x2000) && (uVar20 = uVar10 | 0x28, uVar27 != 0))
        goto LAB_007c08a3;
        uVar10 = uVar10 | 0x28;
        uVar14 = 0xffffffffffffffff;
      }
      else {
        uVar14 = uVar23 << 0x3d | uVar15 >> 3;
      }
    }
    else {
      uVar14 = uVar18 + param_2 * -8;
      uVar24 = (uVar8 - uVar23) - (ulong)(uVar18 < uVar15);
      if ((uVar24 >> 0x33 & 1) == 0) {
        if (uVar24 != 0 || uVar14 != 0) {
          uVar10 = 0;
          uVar26 = uVar27;
          goto LAB_007c01e8;
        }
LAB_007c0d40:
        uVar10 = 0;
        uVar14 = 0;
      }
      else {
        uVar10 = 0;
        uVar14 = uVar15 + param_1 * -8;
        uVar24 = (uVar23 - uVar8) - (ulong)(uVar15 < uVar18);
LAB_007c01e8:
        if (uVar24 == 0) {
          uVar18 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> uVar18 == 0; uVar18 = uVar18 - 1) {
            }
          }
          iVar19 = (int)(uVar18 ^ 0x3f) + 0x34;
          if (iVar19 < 0x40) goto LAB_007c01fd;
          uVar14 = uVar14 << ((char)(uVar18 ^ 0x3f) - 0xcU & 0x3f);
          uVar15 = 0;
        }
        else {
          lVar12 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar19 = ((uint)lVar12 ^ 0x3f) - 0xc;
LAB_007c01fd:
          bVar9 = (byte)iVar19;
          uVar15 = uVar14 << (bVar9 & 0x3f);
          uVar14 = uVar14 >> (0x40 - bVar9 & 0x3f) | uVar24 << (bVar9 & 0x3f);
        }
        uVar27 = uVar26;
        if ((long)iVar19 < (long)uVar17) {
          uVar23 = uVar14 & 0xfff7ffffffffffff;
          uVar24 = uVar17 - (long)iVar19;
          goto LAB_007c064b;
        }
        iVar19 = iVar19 - (int)uVar17;
        iVar1 = iVar19 + 1;
        bVar9 = (byte)iVar1;
        if (iVar1 < 0x40) {
          uVar23 = uVar14 >> (bVar9 & 0x3f);
          uVar15 = uVar14 << (0x40 - bVar9 & 0x3f) | uVar15 >> (bVar9 & 0x3f) |
                   (ulong)(uVar15 << (0x40 - bVar9 & 0x3f) != 0);
          uVar14 = uVar15 | uVar23;
        }
        else {
          if (iVar1 != 0x40) {
            uVar15 = uVar15 | uVar14 << (0x80 - bVar9 & 0x3f);
          }
          uVar23 = 0;
          uVar14 = (ulong)(uVar15 != 0) | uVar14 >> ((char)iVar19 - 0x3fU & 0x3f);
          uVar15 = uVar14;
        }
LAB_007c0278:
        if (uVar14 != 0) {
          uVar28 = (ulong)((uint)uVar15 & 7);
          goto LAB_007c0287;
        }
        uVar14 = 0;
      }
    }
  }
LAB_007c035c:
  if (uVar10 == 0) {
    return uVar14;
  }
LAB_007c08c6:
  __sfp_handle_exceptions(uVar10);
  return uVar14;
}

