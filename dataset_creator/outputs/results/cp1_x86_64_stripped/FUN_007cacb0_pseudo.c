
ulong FUN_007cacb0(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  ushort uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  bool bVar30;
  ulong in_XMM0_Qb;
  ulong in_XMM1_Qb;
  long local_78;
  ulong local_68;
  
  uVar16 = in_XMM0_Qb & 0xffffffffffff;
  if ((in_XMM0_Qb & 0x7fff000000000000) == 0) {
    if (uVar16 == 0 && param_1 == 0) {
      local_78 = 1;
      uVar16 = 0;
      lVar21 = 0;
      uVar20 = 0;
      uVar28 = 4;
      uVar29 = 0;
    }
    else {
      if (uVar16 == 0) {
        lVar21 = 0x3f;
        if (param_1 != 0) {
          for (; param_1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        lVar21 = (long)(int)(((uint)lVar21 ^ 0x3f) + 0x40);
        lVar23 = lVar21 + -0xf;
        if (lVar23 < 0x3d) goto LAB_007cb134;
        uVar29 = 0;
        uVar16 = param_1 << ((char)lVar23 - 0x3dU & 0x3f);
      }
      else {
        lVar21 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        lVar21 = (long)(int)((uint)lVar21 ^ 0x3f);
        lVar23 = lVar21 + -0xf;
LAB_007cb134:
        bVar12 = (char)lVar23 + 3;
        uVar29 = param_1 << (bVar12 & 0x3f);
        uVar16 = param_1 >> (0x3dU - (char)lVar23 & 0x3f) | uVar16 << (bVar12 & 0x3f);
      }
      local_78 = 0;
      uVar28 = 0;
      uVar20 = 2;
      lVar21 = -0x3fef - lVar21;
    }
  }
  else if (((ushort)(in_XMM0_Qb >> 0x30) & 0x7fff) == 0x7fff) {
    if (uVar16 == 0 && param_1 == 0) {
      uVar16 = 0;
      uVar28 = 8;
      lVar21 = 0x7fff;
      uVar20 = 0;
      local_78 = 2;
      uVar29 = 0;
    }
    else {
      lVar21 = 0x7fff;
      local_78 = 3;
      uVar28 = 0xc;
      uVar20 = (uint)(uVar16 >> 0x2f) ^ 1;
      uVar29 = param_1;
    }
  }
  else {
    uVar28 = 0;
    lVar21 = (in_XMM0_Qb >> 0x30 & 0x7fff) - 0x3fff;
    uVar20 = 0;
    local_78 = 0;
    uVar16 = uVar16 << 3 | param_1 >> 0x3d | 0x8000000000000;
    uVar29 = param_1 * 8;
  }
  uVar10 = in_XMM1_Qb & 0xffffffffffff;
  uVar17 = in_XMM1_Qb >> 0x3f;
  uVar9 = (uint)(in_XMM1_Qb >> 0x20);
  uVar13 = (ushort)(in_XMM1_Qb >> 0x30) & 0x7fff;
  uVar15 = (uint)(in_XMM0_Qb >> 0x20);
  if ((in_XMM1_Qb & 0x7fff000000000000) == 0) {
    if (uVar10 == 0 && param_2 == 0) {
      uVar28 = uVar28 | 1;
      uVar10 = 0;
      param_2 = 0;
      lVar23 = 1;
      goto LAB_007cada6;
    }
    if (uVar10 == 0) {
      lVar23 = 0x3f;
      if (param_2 != 0) {
        for (; param_2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      lVar24 = (long)(int)(((uint)lVar23 ^ 0x3f) + 0x40);
      lVar23 = lVar24 + -0xf;
      if (lVar23 < 0x3d) goto LAB_007cb0d9;
      uVar10 = param_2 << ((char)lVar23 - 0x3dU & 0x3f);
      param_2 = 0;
    }
    else {
      lVar23 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      lVar24 = (long)(int)((uint)lVar23 ^ 0x3f);
      lVar23 = lVar24 + -0xf;
LAB_007cb0d9:
      bVar12 = (char)lVar23 + 3;
      uVar10 = param_2 >> (0x3dU - (char)lVar23 & 0x3f) | uVar10 << (bVar12 & 0x3f);
      param_2 = param_2 << (bVar12 & 0x3f);
    }
    uVar20 = uVar20 | 2;
    lVar23 = 0;
    lVar21 = (lVar21 - lVar24) + -0x3fef;
LAB_007cada6:
    lVar22 = lVar21 + 1;
    lVar24 = lVar21;
    if (uVar28 < 0xb) {
LAB_007cae21:
      local_68 = (ulong)((uVar9 ^ uVar15) >> 0x1f);
      uVar11 = uVar10;
      if (2 < uVar28) {
LAB_007caefe:
        uVar28 = 1L << (sbyte)uVar28;
        uVar10 = uVar16;
        uVar18 = uVar29;
        uVar19 = local_68;
        lVar14 = local_78;
        if ((uVar28 & 0x530) == 0) {
          if ((uVar28 & 0x240) != 0) {
            uVar20 = uVar20 | 1;
            uVar29 = 0;
            goto LAB_007cae54;
          }
          uVar10 = uVar11;
          uVar18 = param_2;
          uVar19 = uVar17;
          lVar14 = lVar23;
          if ((uVar28 & 0x88) == 0) goto LAB_007caf70;
        }
LAB_007caf40:
        local_78 = lVar14;
        param_2 = uVar18;
        lVar23 = local_78;
        local_68 = uVar19;
        if (local_78 == 2) {
LAB_007caf60:
          uVar29 = 0;
          goto LAB_007cae54;
        }
        goto LAB_007cb7aa;
      }
      if (uVar28 - 1 < 2) {
        if (lVar23 == 2) goto LAB_007caf60;
        goto LAB_007cae43;
      }
LAB_007caf70:
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar29;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_2;
      uVar10 = SUB168(auVar1 * auVar5,8);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar29;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar11;
      uVar18 = SUB168(auVar2 * auVar6,8);
      uVar29 = SUB168(auVar2 * auVar6,0);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar16;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_2;
      uVar19 = SUB168(auVar3 * auVar7,8);
      uVar28 = SUB168(auVar3 * auVar7,0);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar16;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar11;
      uVar16 = SUB168(auVar4 * auVar8,0);
      uVar17 = uVar29 + uVar10;
      uVar25 = (ulong)CARRY8(uVar29,uVar10);
      uVar29 = uVar18 + uVar16;
      uVar10 = uVar29 + uVar25;
      uVar27 = uVar17 + uVar28;
      uVar11 = (ulong)CARRY8(uVar17,uVar28);
      uVar28 = uVar10 + uVar19;
      uVar17 = uVar28 + uVar11;
      uVar26 = uVar17 >> 0x33;
      uVar16 = ((ulong)(CARRY8(uVar28,uVar11) || CARRY8(uVar10,uVar19)) +
               (ulong)(CARRY8(uVar29,uVar25) || CARRY8(uVar18,uVar16)) + SUB168(auVar4 * auVar8,8))
               * 0x2000;
      uVar10 = uVar26 | uVar16;
      param_2 = (ulong)((uVar27 & 0x7ffffffffffff) != 0 || SUB168(auVar1 * auVar5,0) != 0) |
                uVar27 >> 0x33 | uVar17 * 0x2000;
      if ((uVar16 >> 0x34 & 1) != 0) {
        uVar10 = uVar10 >> 1;
        param_2 = uVar26 << 0x3f | param_2 >> 1 | (ulong)((uint)param_2 & 1);
        lVar24 = lVar22;
      }
LAB_007cb02c:
      lVar21 = lVar24 + 0x3fff;
      if (lVar21 < 1) {
        lVar23 = 1 - lVar21;
        bVar12 = (byte)lVar23;
        if (lVar21 == 0) {
          uVar16 = uVar10;
          if ((param_2 & 7) != 0) {
            uVar20 = uVar20 | 0x20;
            uVar9 = MXCSR & 0x6000;
            if (uVar9 == 0x2000) {
              if (local_68 != 0) {
LAB_007cb76a:
                uVar16 = uVar10 + (0xfffffffffffffff7 < param_2);
              }
            }
            else if (uVar9 == 0x4000) {
              if (local_68 == 0) goto LAB_007cb76a;
            }
            else if ((uVar9 == 0) && (((uint)param_2 & 0xf) != 4)) {
              uVar16 = uVar10 + (0xfffffffffffffffb < param_2);
            }
          }
          uVar9 = ((uint)(uVar16 >> 0x34) ^ 1) & 1;
LAB_007cb2ab:
          uVar28 = uVar10 << (0x40 - bVar12 & 0x3f) | param_2 >> (bVar12 & 0x3f);
          uVar29 = (ulong)(param_2 << (0x40 - bVar12 & 0x3f) != 0);
          uVar10 = uVar10 >> (bVar12 & 0x3f);
          uVar16 = uVar28 | uVar29;
          if ((uVar28 & 7) != 0 || uVar29 != 0) {
LAB_007cb2e0:
            uVar20 = uVar20 | 0x20;
            uVar15 = MXCSR & 0x6000;
            if (uVar15 == 0x2000) {
              if (local_68 != 0) {
LAB_007cb743:
                bVar30 = 0xfffffffffffffff7 < uVar16;
                uVar16 = uVar16 + 8;
                uVar10 = uVar10 + bVar30;
              }
            }
            else if (uVar15 == 0x4000) {
              if (local_68 == 0) goto LAB_007cb743;
            }
            else if ((uVar15 == 0) && (((uint)uVar16 & 0xf) != 4)) {
              bVar30 = 0xfffffffffffffffb < uVar16;
              uVar16 = uVar16 + 4;
              uVar10 = uVar10 + bVar30;
            }
          }
          if ((uVar10 >> 0x33 & 1) == 0) {
            uVar29 = uVar16 >> 3 | uVar10 << 0x3d;
            if (uVar9 == 0) goto LAB_007cae54;
            if ((uVar20 & 0x20) == 0) goto LAB_007cb626;
          }
          else {
            uVar20 = uVar20 | 0x20;
            if (uVar9 == 0) {
              uVar29 = 0;
              goto LAB_007cb351;
            }
            uVar29 = 0;
          }
        }
        else {
          if (0x74 < lVar23) {
            uVar29 = param_2 | uVar10;
            if ((param_2 | uVar10) != 0) {
              uVar20 = uVar20 | 0x20;
              uVar29 = 0;
              uVar9 = MXCSR & 0x6000;
              if (uVar9 == 0x2000) {
                if (local_68 != 0) {
LAB_007cb719:
                  uVar29 = 9;
LAB_007cb418:
                  uVar29 = uVar29 >> 3;
                }
              }
              else if (uVar9 == 0x4000) {
                if (local_68 == 0) goto LAB_007cb719;
              }
              else {
                uVar29 = 0;
                if (uVar9 == 0) {
                  uVar29 = 0;
                  goto LAB_007cb418;
                }
              }
            }
            uVar20 = uVar20 | 0x10;
            goto LAB_007cb434;
          }
          if (lVar23 < 0x40) {
            uVar9 = 1;
            goto LAB_007cb2ab;
          }
          uVar29 = uVar10 >> (bVar12 - 0x40 & 0x3f);
          if (lVar23 != 0x40) {
            param_2 = param_2 | uVar10 << (0x80 - bVar12 & 0x3f);
          }
          uVar16 = param_2 != 0 | uVar29;
          if ((ulong)(param_2 != 0) != 0 || (uVar29 & 7) != 0) {
            uVar9 = 1;
            uVar10 = 0;
            goto LAB_007cb2e0;
          }
          uVar29 = uVar29 >> 3;
LAB_007cb626:
          if ((MXCSR & 0x800) != 0) goto LAB_007cae54;
        }
        uVar20 = uVar20 | 0x10;
LAB_007cb434:
        FUN_007cbbe0(uVar20);
        return uVar29;
      }
      if ((param_2 & 7) != 0) {
        uVar20 = uVar20 | 0x20;
        uVar9 = MXCSR & 0x6000;
        if (uVar9 == 0x2000) {
          if (local_68 != 0) {
LAB_007cb53c:
            bVar30 = 0xfffffffffffffff7 < param_2;
            param_2 = param_2 + 8;
            uVar10 = uVar10 + bVar30;
          }
        }
        else if (uVar9 == 0x4000) {
          if (local_68 == 0) goto LAB_007cb53c;
        }
        else if ((uVar9 == 0) && (((uint)param_2 & 0xf) != 4)) {
          bVar30 = 0xfffffffffffffffb < param_2;
          param_2 = param_2 + 4;
          uVar10 = uVar10 + bVar30;
        }
      }
      if ((uVar10 >> 0x34 & 1) != 0) {
        uVar10 = uVar10 & 0xffefffffffffffff;
        lVar21 = lVar24 + 0x4000;
      }
      if (0x7ffe < lVar21) {
        uVar9 = MXCSR & 0x6000;
        if (uVar9 == 0x2000) {
          uVar29 = -(ulong)(local_68 == 0);
        }
        else if (uVar9 == 0x4000) {
          uVar29 = -(ulong)(local_68 != 0);
        }
        else {
          uVar29 = -(ulong)(uVar9 != 0);
        }
        uVar20 = uVar20 | 0x28;
        goto LAB_007cb434;
      }
      uVar29 = uVar10 << 0x3d | param_2 >> 3;
    }
    else {
      local_68 = uVar17;
      if (uVar28 != 0xb) {
LAB_007cadca:
        uVar10 = uVar16;
        uVar18 = uVar29;
        uVar19 = in_XMM0_Qb >> 0x3f;
        lVar14 = local_78;
        goto LAB_007caf40;
      }
LAB_007cb7aa:
      uVar29 = param_2;
      if (lVar23 != 3) {
LAB_007cae43:
        lVar24 = lVar22;
        if (lVar23 != 1) goto LAB_007cb02c;
        uVar29 = 0;
      }
    }
  }
  else {
    if (uVar13 != 0x7fff) {
      uVar11 = param_2 >> 0x3d;
      param_2 = param_2 << 3;
      lVar21 = lVar21 + -0x3fff + (ulong)uVar13;
      lVar23 = 0;
      uVar10 = uVar10 << 3 | uVar11 | 0x8000000000000;
      goto LAB_007cada6;
    }
    lVar24 = lVar21 + 0x7fff;
    if (param_2 != 0 || uVar10 != 0) {
      bVar30 = param_2 <= uVar29;
      uVar28 = uVar28 | 3;
      if ((in_XMM1_Qb & 0x800000000000) == 0) {
        uVar20 = uVar20 | 1;
      }
      local_68 = (ulong)((uVar9 ^ uVar15) >> 0x1f);
      lVar22 = lVar21 + 0x8000;
      if (10 < uVar28) {
        lVar14 = 3;
        goto LAB_007cb692;
      }
      lVar23 = 3;
      uVar11 = uVar10;
      goto LAB_007caefe;
    }
    uVar28 = uVar28 | 2;
    lVar22 = lVar21 + 0x8000;
    uVar10 = 0;
    if (uVar28 < 0xb) {
      param_2 = 0;
      lVar23 = 2;
      goto LAB_007cae21;
    }
    bVar30 = true;
    lVar14 = 2;
    param_2 = 0;
LAB_007cb692:
    lVar22 = lVar21 + 0x8000;
    if (uVar28 != 0xf) {
      uVar18 = param_2;
      uVar19 = uVar17;
      if (uVar28 != 0xb) goto LAB_007cadca;
      goto LAB_007caf40;
    }
    if ((uVar16 <= uVar10) && ((uVar16 != uVar10 || (!bVar30)))) {
      uVar29 = param_2;
    }
  }
LAB_007cae54:
  if (uVar20 == 0) {
    return uVar29;
  }
LAB_007cb351:
  FUN_007cbbe0(uVar20);
  return uVar29;
}

