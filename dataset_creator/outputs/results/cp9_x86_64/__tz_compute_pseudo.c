
void __tz_compute(long param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  
  iVar4 = *(int *)(param_2 + 0x14);
  uVar1 = iVar4 + 0x76c;
  if (iVar4 == -0x76d) {
    if (DAT_0093da68 == 1) {
      DAT_0093da88 = 0xffffffff;
      DAT_0093da80 = ((long)(int)(DAT_0093da70 - 1) * 0x15180 - (long)DAT_0093da78) +
                     (long)DAT_0093da74;
    }
    else {
      if (DAT_0093da68 == 2) {
        lVar12 = 0;
LAB_007582a3:
        uVar7 = 0;
        uVar11 = 0;
LAB_007582a8:
        uVar13 = (uint)DAT_0093da6c;
        lVar12 = (ulong)*(ushort *)(&DAT_008368de + (uVar13 + uVar7) * 2) * 0x15180 + lVar12;
        uVar10 = iVar4 + 0x76b;
        if (2 < DAT_0093da6c) {
          uVar10 = uVar1;
        }
        iVar8 = (int)uVar10 >> 0x1f;
        iVar14 = (int)uVar10 / 100 + iVar8;
        iVar6 = uVar10 + (iVar14 - iVar8) * -100;
        iVar5 = iVar6 + 3;
        if (-1 < iVar6) {
          iVar5 = iVar6;
        }
        iVar5 = (int)((int)uVar10 / 400 + iVar8 * 2 +
                      (iVar5 >> 2) + iVar6 + 1 + (((uVar13 + 9) % 0xc + 1) * 0x1a - 2) / 10 +
                     iVar14 * -2) % 7;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 7;
        }
        iVar5 = (uint)DAT_0093da70 - iVar5;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 7;
        }
        if (1 < DAT_0093da6e) {
          iVar6 = iVar5 + -7;
          do {
            lVar9 = (long)iVar5;
            iVar5 = iVar5 + 7;
            if ((int)((uint)*(ushort *)(__mon_yday + (uVar11 * 0xd + (long)(int)uVar13) * 2) -
                     (uint)*(ushort *)(&DAT_008368de + (uVar13 + uVar7) * 2)) <= iVar5) {
              lVar12 = lVar9 * 0x15180 + lVar12;
              goto LAB_00757f25;
            }
          } while (iVar5 != iVar6 + (uint)DAT_0093da6e * 7);
        }
        lVar12 = (long)iVar5 * 0x15180 + lVar12;
      }
      else {
        if (DAT_0093da68 != 0) {
          DAT_0093da88 = 0xffffffff;
          DAT_0093da80 = (long)DAT_0093da74 - (long)DAT_0093da78;
          goto LAB_00757f4f;
        }
        lVar12 = 0;
LAB_00757f13:
        lVar12 = (ulong)DAT_0093da70 * 0x15180 + lVar12;
      }
LAB_00757f25:
      DAT_0093da80 = (lVar12 - DAT_0093da78) + (long)DAT_0093da74;
      DAT_0093da88 = uVar1;
      if (uVar1 != 0xffffffff) goto LAB_00757e00;
    }
LAB_00757f4f:
    lVar12 = 0;
    if (DAT_0093da98 != 1) goto LAB_00757e6d;
LAB_00757f63:
    lVar12 = lVar12 + (long)(int)(DAT_0093daa0 - 1) * 0x15180;
    if (((0x3b < DAT_0093daa0) && ((uVar1 & 3) == 0)) &&
       ((uVar10 = uVar1 * -0x3d70a3d7 + 0x51eb850, 0x28f5c28 < (uVar10 >> 2 | iVar4 * 0x40000000) ||
        ((uVar10 >> 4 | uVar1 * -0x70000000) < 0xa3d70b)))) {
      lVar12 = lVar12 + 0x15180;
    }
  }
  else {
    if (uVar1 != DAT_0093da88) {
      if ((int)uVar1 < 0x7b3) {
        lVar12 = 0;
      }
      else {
        uVar10 = iVar4 + 0x76b;
        lVar12 = (long)(int)((((iVar4 + -0x46) * 0x16d + ((int)uVar10 >> 2)) - uVar10 / 100) +
                             -0x1dd + uVar10 / 400) * 0x15180;
      }
      if (DAT_0093da68 == 1) {
        lVar12 = (long)(int)(DAT_0093da70 - 1) * 0x15180 + lVar12;
        if (((0x3b < DAT_0093da70) && ((uVar1 & 3) == 0)) &&
           ((uVar10 = uVar1 * -0x3d70a3d7 + 0x51eb850,
            0x28f5c28 < (uVar10 >> 2 | iVar4 * 0x40000000) ||
            ((uVar10 >> 4 | uVar1 * -0x70000000) < 0xa3d70b)))) {
          lVar12 = lVar12 + 0x15180;
        }
        DAT_0093da80 = (lVar12 - DAT_0093da78) + (long)DAT_0093da74;
        DAT_0093da88 = uVar1;
      }
      else {
        if (DAT_0093da68 == 2) {
          if ((uVar1 & 3) != 0) goto LAB_007582a3;
          if (uVar1 == ((int)uVar1 / 100) * 100) {
            uVar10 = uVar1 * -0x3d70a3d7 + 0x51eb850 >> 4 | uVar1 * -0x70000000;
            uVar7 = (ulong)(-(uint)(uVar10 < 0xa3d70b) & 0xd);
            uVar11 = (ulong)(uVar10 < 0xa3d70b);
          }
          else {
            uVar7 = 0xd;
            uVar11 = 1;
          }
          goto LAB_007582a8;
        }
        if (DAT_0093da68 == 0) goto LAB_00757f13;
        DAT_0093da80 = (lVar12 - DAT_0093da78) + (long)DAT_0093da74;
        DAT_0093da88 = uVar1;
      }
    }
LAB_00757e00:
    if (uVar1 == DAT_0093dab8) goto LAB_00757ea1;
    if ((int)uVar1 < 0x7b3) goto LAB_00757f4f;
    uVar10 = iVar4 + 0x76b;
    lVar12 = (long)(int)((((iVar4 + -0x46) * 0x16d + ((int)uVar10 >> 2)) - uVar10 / 100) + -0x1dd +
                        uVar10 / 400) * 0x15180;
    if (DAT_0093da98 == 1) goto LAB_00757f63;
LAB_00757e6d:
    if (DAT_0093da98 == 2) {
      if ((uVar1 & 3) == 0) {
        if (uVar1 == ((int)uVar1 / 100) * 100) {
          uVar10 = uVar1 * -0x3d70a3d7 + 0x51eb850 >> 4 | uVar1 * -0x70000000;
          uVar7 = (ulong)(-(uint)(uVar10 < 0xa3d70b) & 0xd);
          uVar11 = (ulong)(uVar10 < 0xa3d70b);
        }
        else {
          uVar7 = 0xd;
          uVar11 = 1;
        }
      }
      else {
        uVar7 = 0;
        uVar11 = 0;
      }
      uVar13 = (uint)DAT_0093da9c;
      lVar12 = (ulong)*(ushort *)(&DAT_008368de + (uVar13 + uVar7) * 2) * 0x15180 + lVar12;
      uVar10 = iVar4 + 0x76b;
      if (2 < DAT_0093da9c) {
        uVar10 = uVar1;
      }
      iVar8 = (int)uVar10 >> 0x1f;
      iVar5 = (int)uVar10 / 100 + iVar8;
      iVar6 = uVar10 + (iVar5 - iVar8) * -100;
      iVar4 = iVar6 + 3;
      if (-1 < iVar6) {
        iVar4 = iVar6;
      }
      iVar4 = (int)(iVar6 + 1 + (((uVar13 + 9) % 0xc + 1) * 0x1a - 2) / 10 + (iVar4 >> 2) +
                    (int)uVar10 / 400 + iVar8 * 2 + iVar5 * -2) % 7;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 7;
      }
      iVar4 = (uint)DAT_0093daa0 - iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 7;
      }
      if (1 < DAT_0093da9e) {
        iVar5 = iVar4 + -7;
        do {
          lVar9 = (long)iVar4;
          iVar4 = iVar4 + 7;
          if ((int)((uint)*(ushort *)(__mon_yday + (uVar11 * 0xd + (long)(int)uVar13) * 2) -
                   (uint)*(ushort *)(&DAT_008368de + (uVar13 + uVar7) * 2)) <= iVar4) {
            lVar12 = lVar9 * 0x15180 + lVar12;
            goto LAB_00757e80;
          }
        } while (iVar4 != iVar5 + (uint)DAT_0093da9e * 7);
      }
      lVar12 = (long)iVar4 * 0x15180 + lVar12;
    }
    else if (DAT_0093da98 == 0) {
      lVar12 = lVar12 + (ulong)DAT_0093daa0 * 0x15180;
    }
  }
LAB_00757e80:
  DAT_0093dab0 = (lVar12 - DAT_0093daa8) + (long)DAT_0093daa4;
  DAT_0093dab8 = uVar1;
LAB_00757ea1:
  if (param_3 != 0) {
    bVar3 = param_1 < DAT_0093dab0 && DAT_0093da80 <= param_1;
    if (DAT_0093dab0 < DAT_0093da80) {
      bVar3 = param_1 < DAT_0093dab0 || DAT_0093da80 <= param_1;
    }
    puVar2 = (&tzname)[bVar3];
    *(uint *)(param_2 + 0x20) = (uint)bVar3;
    *(undefined **)(param_2 + 0x30) = puVar2;
    *(long *)(param_2 + 0x28) = (long)(&DAT_0093da78)[(ulong)bVar3 * 0xc];
  }
  return;
}

