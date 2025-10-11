
long FUN_007637d0(byte *param_1,long param_2,byte *param_3,uint *param_4,int param_5,char *param_6,
                 long param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  ulong uVar29;
  long in_FS_OFFSET;
  char *local_d0;
  char *local_c8;
  int local_b8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  byte local_44 [4];
  long local_40;
  
  uVar24 = param_4[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(param_7 + 0x10);
  local_d0 = *(char **)(param_4 + 0xc);
  if ((int)uVar24 < 0xd) {
    if (uVar24 == 0) {
      uVar24 = 0xc;
    }
  }
  else {
    uVar24 = uVar24 - 0xc;
  }
  bVar11 = *param_3;
  lVar17 = 0;
  local_b8 = param_5;
joined_r0x00763840:
  if (bVar11 == 0) {
    if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
      *param_1 = 0;
    }
LAB_0076389b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return lVar17;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  if (bVar11 != 0x25) {
    if ((ulong)(param_2 - lVar17) < 2) goto LAB_00763898;
    if (param_1 != (byte *)0x0) {
      *param_1 = bVar11;
      param_1 = param_1 + 1;
    }
    lVar17 = lVar17 + 1;
    pbVar12 = param_1;
    goto LAB_00763873;
  }
  bVar5 = false;
  bVar21 = false;
  iVar23 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          bVar11 = param_3[1];
          uVar25 = (uint)(char)bVar11;
          param_3 = param_3 + 1;
          if (bVar11 != 0x30) break;
          iVar23 = 0x30;
        }
        pbVar12 = param_1;
        if ('0' < (char)bVar11) break;
        if (bVar11 == 0x23) {
          bVar21 = true;
        }
        else {
          if (bVar11 != 0x2d) {
            iVar14 = -1;
            goto LAB_00763966;
          }
          iVar23 = 0x2d;
        }
      }
      if (bVar11 != 0x5e) break;
      bVar5 = true;
    }
    if (bVar11 != 0x5f) break;
    iVar23 = 0x5f;
  }
  if (uVar25 - 0x30 < 10) {
    iVar14 = 0;
    pbVar8 = param_3;
    uVar15 = uVar25;
    do {
      uVar25 = (uint)(char)pbVar8[1];
      param_3 = pbVar8 + 1;
      if ((iVar14 < 0xccccccd) && ((iVar14 != 0xccccccc || ((char)uVar15 < '8')))) {
        iVar14 = (uVar15 - 0x30) + iVar14 * 10;
        param_3 = pbVar8;
      }
      else {
        if (9 < uVar25 - 0x30) {
          iVar14 = 0x7fffffff;
          break;
        }
        iVar14 = 0x7fffffff;
      }
      uVar25 = (uint)(char)param_3[1];
      param_3 = param_3 + 1;
      pbVar8 = param_3;
      uVar15 = uVar25;
    } while (uVar25 - 0x30 < 10);
  }
  else {
    iVar14 = -1;
  }
  if ((char)uVar25 != 'E') {
LAB_00763966:
    bVar11 = (byte)uVar25;
    if (bVar11 == 0x4f) goto LAB_007639e5;
    pbVar8 = param_3;
    switch(uVar25 & 0xff) {
    case 0:
      goto switchD_00763985_caseD_0;
    default:
      goto switchD_00763985_caseD_1;
    case 0x25:
LAB_00764c2a:
      iVar14 = iVar14 + -1;
      iVar27 = 0;
      if (-1 < iVar14) {
        iVar27 = iVar14;
      }
      uVar29 = (ulong)(iVar27 + 1);
      if (uVar29 < (ulong)(param_2 - lVar17)) {
        if (param_1 != (byte *)0x0) {
          bVar11 = 0x25;
          pbVar12 = param_1;
          if (0 < iVar14) {
            pbVar12 = param_1 + iVar14;
            if (iVar23 == 0x30) {
              thunk_FUN_00713720(param_1,0x30);
              bVar11 = *param_3;
            }
            else {
              thunk_FUN_00713720(param_1,0x20);
              bVar11 = *param_3;
            }
          }
          *pbVar12 = bVar11;
          param_1 = pbVar12 + 1;
        }
        goto LAB_00763c78;
      }
      goto LAB_00763898;
    case 0x41:
LAB_00763f6b:
      if (!bVar21) {
        bVar21 = bVar5;
      }
      lVar28 = 1;
      uVar25 = param_4[6];
      if (uVar25 < 7) {
        iVar27 = thunk_FUN_007129d0();
        lVar28 = (long)iVar27;
      }
      iVar14 = iVar14 - (int)lVar28;
      iVar27 = 0;
      if (-1 < iVar14) {
        iVar27 = iVar14;
      }
      uVar29 = (ulong)(iVar27 + (int)lVar28);
      if ((ulong)(param_2 - lVar17) <= uVar29) goto LAB_00763898;
      if (param_1 == (byte *)0x0) goto LAB_00763c78;
      if (0 < iVar14) {
        uVar19 = 0x30;
        pbVar12 = param_1 + iVar14;
        if (iVar23 != 0x30) {
          uVar19 = 0x20;
        }
        thunk_FUN_00713720(param_1,uVar19);
        uVar25 = param_4[6];
      }
      puVar18 = &DAT_007d0973;
      if (bVar21) {
        lVar9 = lVar28;
        if (uVar25 < 7) {
          puVar18 = *(undefined1 **)(lVar4 + 0x40 + (ulong)(uVar25 + 0x20007 & 0xffff) * 8);
        }
        while (lVar9 != 0) {
          lVar9 = lVar9 + -1;
          pbVar12[lVar9] =
               (byte)*(undefined4 *)(*(long *)(param_7 + 0x78) + (ulong)(byte)puVar18[lVar9] * 4);
        }
        goto LAB_00763c75;
      }
      if (uVar25 < 7) {
        puVar18 = *(undefined1 **)(lVar4 + 0x40 + (ulong)(uVar25 + 0x20007 & 0xffff) * 8);
      }
      goto LAB_00764049;
    case 0x42:
      uVar25 = 0;
LAB_00763e72:
      if (!bVar21) {
        bVar21 = bVar5;
      }
      uVar15 = param_4[4];
      if (uVar25 == 0x4f) {
        iVar27 = 1;
        if (uVar15 < 0xc) {
          iVar27 = thunk_FUN_007129d0(*(undefined8 *)
                                       (lVar4 + 0x40 + (ulong)(uVar15 + 0x2006f & 0xffff) * 8));
        }
        iVar14 = iVar14 - iVar27;
        iVar7 = 0;
        if (-1 < iVar14) {
          iVar7 = iVar14;
        }
        local_c8 = (char *)(long)(iVar7 + iVar27);
        if ((ulong)(param_2 - lVar17) <= local_c8) goto LAB_00763898;
        if (param_1 != (byte *)0x0) {
          if (0 < iVar14) {
            pbVar12 = param_1 + iVar14;
            if (iVar23 == 0x30) {
              thunk_FUN_00713720(param_1,0x30);
              uVar15 = param_4[4];
            }
            else {
              thunk_FUN_00713720(param_1,0x20);
              uVar15 = param_4[4];
            }
          }
          lVar9 = (long)iVar27;
          if (bVar21) {
            puVar18 = &DAT_007d0973;
            lVar28 = lVar9;
            if (uVar15 < 0xc) {
              puVar18 = *(undefined1 **)(lVar4 + 0x40 + (ulong)(uVar15 + 0x2006f & 0xffff) * 8);
            }
            while (lVar28 != 0) {
              lVar28 = lVar28 + -1;
              pbVar12[lVar28] =
                   (byte)*(undefined4 *)
                          (*(long *)(param_7 + 0x78) + (ulong)(byte)puVar18[lVar28] * 4);
            }
          }
          else {
            puVar18 = &DAT_007d0973;
            if (uVar15 < 0xc) {
              puVar18 = *(undefined1 **)(lVar4 + 0x40 + (ulong)(uVar15 + 0x2006f & 0xffff) * 8);
            }
LAB_007652ed:
            thunk_FUN_00713a50(pbVar12,puVar18,lVar9);
          }
LAB_007652f8:
          param_1 = pbVar12 + lVar9;
        }
LAB_007652fb:
        lVar17 = lVar17 + (long)local_c8;
        pbVar12 = param_1;
      }
      else {
        iVar27 = 1;
        if (uVar15 < 0xc) {
          iVar27 = thunk_FUN_007129d0();
        }
        iVar14 = iVar14 - iVar27;
        iVar7 = 0;
        if (-1 < iVar14) {
          iVar7 = iVar14;
        }
        uVar29 = (ulong)(iVar7 + iVar27);
        if ((ulong)(param_2 - lVar17) <= uVar29) goto LAB_00763898;
        if (param_1 != (byte *)0x0) {
          if (0 < iVar14) {
            uVar19 = 0x30;
            pbVar12 = param_1 + iVar14;
            if (iVar23 != 0x30) {
              uVar19 = 0x20;
            }
            thunk_FUN_00713720(param_1,uVar19);
            uVar15 = param_4[4];
          }
          lVar9 = (long)iVar27;
          puVar18 = &DAT_007d0973;
          if (bVar21) {
            lVar28 = lVar9;
            if (uVar15 < 0xc) {
              puVar18 = *(undefined1 **)(lVar4 + 0x40 + (ulong)(uVar15 + 0x2001a & 0xffff) * 8);
            }
            while (lVar28 != 0) {
              lVar28 = lVar28 + -1;
              pbVar12[lVar28] =
                   (byte)*(undefined4 *)
                          (*(long *)(param_7 + 0x78) + (ulong)(byte)puVar18[lVar28] * 4);
            }
          }
          else {
            if (uVar15 < 0xc) {
              puVar18 = *(undefined1 **)(lVar4 + 0x40 + (ulong)(uVar15 + 0x2001a & 0xffff) * 8);
            }
LAB_00763d8d:
            thunk_FUN_00713a50(pbVar12,puVar18,lVar9);
          }
LAB_00763d98:
          param_1 = pbVar12 + lVar9;
        }
LAB_00763d9b:
        lVar17 = lVar17 + uVar29;
        pbVar12 = param_1;
      }
      goto LAB_00763873;
    case 0x43:
      uVar25 = 0;
LAB_007649ea:
      iVar27 = 1;
      if (0 < iVar14) {
        iVar27 = iVar14;
      }
      uVar29 = (ulong)(uint)((int)(param_4[5] + 0x76c) / 100 +
                            ((int)(param_4[5] + 0x76c) % 100 >> 0x1f));
      break;
    case 0x44:
LAB_0076414b:
      local_c8 = "%m/%d/%y";
      goto LAB_00764070;
    case 0x46:
LAB_0076405c:
      local_c8 = "%Y-%m-%d";
      goto LAB_00764070;
    case 0x47:
    case 0x56:
    case 0x67:
      uVar25 = 0;
LAB_00763a5e:
      uVar2 = param_4[7];
      uVar3 = param_4[6];
      uVar15 = param_4[5];
      iVar27 = (uVar2 - uVar3) + 0x17e;
      iVar7 = (uVar2 - iVar27) + 3 + (iVar27 / 7) * 7;
      if (iVar7 < 0) {
        uVar15 = uVar15 + 0x76b;
        uVar29 = (ulong)uVar15;
        iVar27 = 0x16d;
        if (((uVar15 & 3) == 0) &&
           (iVar27 = 0x16e,
           (uVar15 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar15 * 0x40000000) < 0x28f5c29)) {
          iVar27 = 0x16e - (uint)((int)uVar15 % 400 != 0);
        }
        iVar7 = ((uVar2 + iVar27) - uVar3) + 0x17e;
        iVar7 = ((uVar2 + iVar27) - iVar7) + 3 + (iVar7 / 7) * 7;
      }
      else {
        uVar1 = uVar15 + 0x76c;
        uVar29 = (ulong)uVar1;
        iVar27 = 0x16d;
        if ((uVar15 & 3) == 0) {
          uVar13 = uVar1 * -0x3d70a3d7 + 0x51eb850;
          iVar27 = 0x16e;
          if ((uVar13 >> 2 | uVar15 * 0x40000000) < 0x28f5c29) {
            iVar27 = ((uVar13 >> 4 | uVar1 * -0x70000000) < 0xa3d70b) + 0x16d;
          }
        }
        iVar16 = ((uVar2 - iVar27) - uVar3) + 0x17e;
        iVar27 = ((uVar2 - iVar27) - iVar16) + 3 + (iVar16 / 7) * 7;
        if (-1 < iVar27) {
          uVar29 = (ulong)(uVar15 + 0x76d);
          iVar7 = iVar27;
        }
      }
      if (bVar11 == 0x47) {
        iVar27 = 1;
        if (0 < iVar14) {
          iVar27 = iVar14;
        }
      }
      else {
        iVar27 = 2;
        if (1 < iVar14) {
          iVar27 = iVar14;
        }
        if (bVar11 == 0x67) {
          uVar29 = (ulong)(((int)uVar29 % 100 + 100U) % 100);
        }
        else {
          uVar29 = (ulong)(iVar7 / 7 + 1);
        }
      }
      break;
    case 0x48:
      uVar25 = 0;
LAB_007649c7:
      iVar27 = 2;
      if (1 < iVar14) {
        iVar27 = iVar14;
      }
      uVar29 = (ulong)param_4[2];
      break;
    case 0x49:
      uVar25 = 0;
LAB_007649a8:
      uVar29 = (ulong)uVar24;
      iVar27 = 2;
      if (1 < iVar14) {
        iVar27 = iVar14;
      }
      break;
    case 0x4d:
      uVar25 = 0;
LAB_00764985:
      iVar27 = 2;
      if (1 < iVar14) {
        iVar27 = iVar14;
      }
      uVar29 = (ulong)param_4[1];
      break;
    case 0x50:
      goto switchD_00763a03_caseD_50;
    case 0x52:
      goto switchD_00763a03_caseD_52;
    case 0x53:
      uVar25 = 0;
LAB_00764942:
      iVar27 = 2;
      if (1 < iVar14) {
        iVar27 = iVar14;
      }
      uVar29 = (ulong)*param_4;
      break;
    case 0x54:
      goto switchD_00763a03_caseD_54;
    case 0x55:
      uVar25 = 0;
LAB_00764905:
      iVar27 = 2;
      if (1 < iVar14) {
        iVar27 = iVar14;
      }
      iVar7 = (param_4[7] - param_4[6]) + 7;
      goto LAB_00764671;
    case 0x57:
      uVar25 = 0;
LAB_00764624:
      iVar27 = 2;
      if (1 < iVar14) {
        iVar27 = iVar14;
      }
      iVar7 = (((int)(param_4[6] + 6) / 7) * 7 - (param_4[6] + 6)) + 7 + param_4[7];
LAB_00764671:
      uVar29 = (ulong)(uint)(iVar7 / 7);
      break;
    case 0x58:
LAB_00764608:
      local_c8 = *(char **)(lVar4 + 400);
      goto LAB_00764070;
    case 0x59:
      goto LAB_0076444b;
    case 0x5a:
      goto switchD_00763a03_caseD_5a;
    case 0x61:
LAB_0076415f:
      if (!bVar21) {
        bVar21 = bVar5;
      }
      lVar28 = 1;
      uVar25 = param_4[6];
      if (uVar25 < 7) {
        iVar27 = thunk_FUN_007129d0(*(undefined8 *)(lVar4 + 0x40 + (long)(int)uVar25 * 8));
        lVar28 = (long)iVar27;
      }
      iVar14 = iVar14 - (int)lVar28;
      iVar27 = 0;
      if (-1 < iVar14) {
        iVar27 = iVar14;
      }
      uVar29 = (ulong)(iVar27 + (int)lVar28);
      if ((ulong)(param_2 - lVar17) <= uVar29) goto LAB_00763898;
      if (param_1 == (byte *)0x0) goto LAB_00763c78;
      if (0 < iVar14) {
        uVar19 = 0x30;
        pbVar12 = param_1 + iVar14;
        if (iVar23 != 0x30) {
          uVar19 = 0x20;
        }
        thunk_FUN_00713720(param_1,uVar19);
        uVar25 = param_4[6];
      }
      puVar18 = &DAT_007d0973;
      if (!bVar21) {
        if (uVar25 < 7) {
          puVar18 = *(undefined1 **)(lVar4 + 0x40 + (long)(int)uVar25 * 8);
        }
        goto LAB_00764049;
      }
      lVar9 = lVar28;
      if (uVar25 < 7) {
        puVar18 = *(undefined1 **)(lVar4 + 0x40 + (long)(int)uVar25 * 8);
      }
      while (lVar9 != 0) {
        lVar9 = lVar9 + -1;
        pbVar12[lVar9] =
             (byte)*(undefined4 *)(*(long *)(param_7 + 0x78) + (ulong)(byte)puVar18[lVar9] * 4);
      }
      goto LAB_00763c75;
    case 0x62:
    case 0x68:
      uVar25 = 0;
      goto switchD_00763a03_caseD_62;
    case 99:
LAB_00764333:
      local_c8 = *(char **)(lVar4 + 0x180);
      goto LAB_00764070;
    case 100:
      uVar25 = 0;
LAB_00764313:
      iVar27 = 2;
      if (1 < iVar14) {
        iVar27 = iVar14;
      }
      uVar29 = (ulong)param_4[3];
      break;
    case 0x65:
      uVar25 = 0;
LAB_007648bf:
      iVar27 = 2;
      if (1 < iVar14) {
        iVar27 = iVar14;
      }
      uVar29 = (ulong)param_4[3];
      goto LAB_007647e8;
    case 0x6a:
      uVar25 = 0;
LAB_00764895:
      iVar27 = 3;
      if (2 < iVar14) {
        iVar27 = iVar14;
      }
      uVar29 = (ulong)(param_4[7] + 1);
      break;
    case 0x6b:
      uVar25 = 0;
LAB_007648e2:
      iVar27 = 2;
      if (1 < iVar14) {
        iVar27 = iVar14;
      }
      uVar29 = (ulong)param_4[2];
      goto LAB_007647e8;
    case 0x6c:
      uVar25 = 0;
LAB_007647d4:
      uVar29 = (ulong)uVar24;
      iVar27 = 2;
      if (1 < iVar14) {
        iVar27 = iVar14;
      }
LAB_007647e8:
      if ((iVar23 != 0x30) && (iVar23 != 0x2d)) {
        iVar23 = 0x5f;
      }
      break;
    case 0x6d:
      uVar25 = 0;
LAB_0076486b:
      iVar27 = 2;
      if (1 < iVar14) {
        iVar27 = iVar14;
      }
      uVar29 = (ulong)(param_4[4] + 1);
      break;
    case 0x6e:
      goto switchD_00763a03_caseD_6e;
    case 0x70:
      goto switchD_00763a03_caseD_70;
    case 0x72:
      goto switchD_00763a03_caseD_72;
    case 0x73:
      goto switchD_00763a03_caseD_73;
    case 0x74:
      goto switchD_00763a03_caseD_74;
    case 0x75:
      uVar25 = 0;
      goto switchD_00763a03_caseD_75;
    case 0x77:
      uVar25 = 0;
LAB_00764a2d:
      iVar27 = 1;
      if (0 < iVar14) {
        iVar27 = iVar14;
      }
      uVar29 = (ulong)param_4[6];
      break;
    case 0x78:
LAB_00764c0a:
      local_c8 = *(char **)(lVar4 + 0x188);
LAB_00764070:
      lVar9 = param_7;
      iVar7 = FUN_007637d0(0,0xffffffffffffffff,local_c8,param_4);
      iVar14 = iVar14 - iVar7;
      iVar27 = 0;
      if (-1 < iVar14) {
        iVar27 = iVar14;
      }
      uVar29 = param_2 - lVar17;
      if (uVar29 <= (ulong)(long)(iVar27 + iVar7)) goto LAB_00763898;
      lVar17 = lVar17 + (iVar27 + iVar7);
      if (param_1 != (byte *)0x0) {
        pbVar12 = param_1;
        if (0 < iVar14) {
          lVar28 = (long)iVar14;
          pbVar12 = param_1 + lVar28;
          if (iVar23 == 0x30) {
            thunk_FUN_00713720(param_1,0x30,lVar28,lVar9);
          }
          else {
            thunk_FUN_00713720(param_1,0x20,lVar28,lVar9);
          }
        }
        pbVar8 = pbVar12 + iVar7;
        FUN_007637d0(pbVar12,uVar29,local_c8,param_4,local_b8,param_6,param_7);
        pbVar12 = pbVar8;
        if ((bVar5) && (param_1 < pbVar8)) {
          do {
            pbVar12 = param_1 + 1;
            *param_1 = (byte)*(undefined4 *)(*(long *)(param_7 + 0x78) + (ulong)*param_1 * 4);
            param_1 = pbVar12;
          } while (pbVar8 != pbVar12);
        }
      }
      goto LAB_00763873;
    case 0x79:
      uVar25 = 0;
LAB_00764bb7:
      iVar27 = 2;
      if (1 < iVar14) {
        iVar27 = iVar14;
      }
      uVar29 = (ulong)(((int)param_4[5] % 100 + 100U) % 100);
      break;
    case 0x7a:
      uVar25 = 0;
      goto switchD_00763a03_caseD_7a;
    }
LAB_00763ba0:
    if ((uVar25 != 0x4f) || ((int)uVar29 < 0)) {
LAB_00764470:
      uVar25 = 0;
      if ((int)uVar29 < 0) {
        uVar29 = (ulong)(uint)-(int)uVar29;
        uVar25 = 1;
      }
LAB_00764481:
      pbVar8 = local_44 + 2;
      do {
        pbVar8 = pbVar8 + -1;
        uVar15 = (uint)uVar29;
        *pbVar8 = (char)uVar29 + (char)(uVar29 / 10) * -10 + 0x30;
        uVar29 = uVar29 / 10;
      } while (9 < uVar15);
LAB_007644c2:
      iVar7 = (int)local_44 + 2;
      if (uVar25 != 0) {
        pbVar8[-1] = 0x2d;
        pbVar8 = pbVar8 + -1;
      }
      iVar26 = iVar7 - (int)pbVar8;
      iVar16 = iVar14;
      if ((iVar23 == 0x2d) || (iVar22 = iVar27 - iVar26, iVar22 < 1)) {
LAB_0076455f:
        iVar16 = iVar16 - iVar26;
        iVar14 = 0;
        if (-1 < iVar16) {
          iVar14 = iVar16;
        }
        uVar29 = (ulong)(iVar14 + iVar26);
        if (uVar29 < (ulong)(param_2 - lVar17)) {
          if (param_1 != (byte *)0x0) {
            pbVar12 = param_1;
            if (0 < iVar16) {
              pbVar12 = param_1 + iVar16;
              if (iVar23 == 0x30) {
                thunk_FUN_00713720(param_1,0x30);
              }
              else {
                thunk_FUN_00713720(param_1,0x20);
              }
            }
            lVar28 = (long)iVar26;
            lVar9 = lVar28;
            if (!bVar5) goto LAB_00763c67;
            while (lVar9 != 0) {
              lVar9 = lVar9 + -1;
              pbVar12[lVar9] =
                   (byte)*(undefined4 *)(*(long *)(param_7 + 0x78) + (ulong)pbVar8[lVar9] * 4);
            }
            goto LAB_00763c75;
          }
          goto LAB_00763c78;
        }
      }
      else if (iVar23 == 0x5f) {
        uVar29 = (ulong)iVar22;
        if (uVar29 < (ulong)(param_2 - lVar17)) {
          if (param_1 != (byte *)0x0) {
            thunk_FUN_00713720(param_1,0x20);
            param_1 = param_1 + uVar29;
          }
          lVar17 = lVar17 + uVar29;
          iVar16 = 0;
          if (iVar22 < iVar14) {
            iVar16 = iVar14 - iVar22;
          }
          goto LAB_0076455f;
        }
      }
      else if ((ulong)(long)iVar27 < (ulong)(param_2 - lVar17)) {
        lVar9 = (long)iVar22;
        if (uVar25 == 0) {
          if (param_1 != (byte *)0x0) goto LAB_00764532;
        }
        else {
          pbVar8 = pbVar8 + 1;
          lVar17 = lVar17 + 1;
          iVar26 = iVar7 - (int)pbVar8;
          if (param_1 != (byte *)0x0) {
            *param_1 = 0x2d;
            param_1 = param_1 + 1;
LAB_00764532:
            thunk_FUN_00713720(param_1,0x30,lVar9);
            param_1 = param_1 + lVar9;
          }
        }
        lVar17 = lVar17 + lVar9;
        iVar16 = 0;
        goto LAB_0076455f;
      }
LAB_00763898:
      lVar17 = 0;
      goto LAB_0076389b;
    }
    pbVar8 = (byte *)FUN_00768440(uVar29,lVar4);
    if ((pbVar8 == (byte *)0x0) || (lVar9 = thunk_FUN_007129d0(), lVar9 == 0)) {
      uVar25 = 0;
      goto LAB_00764481;
    }
    iVar7 = (int)lVar9;
    iVar14 = iVar14 - iVar7;
    iVar27 = 0;
    if (-1 < iVar14) {
      iVar27 = iVar14;
    }
    uVar29 = (ulong)(iVar27 + iVar7);
    if ((ulong)(param_2 - lVar17) <= uVar29) goto LAB_00763898;
    if (param_1 != (byte *)0x0) {
      pbVar12 = param_1;
      if (0 < iVar14) {
        pbVar12 = param_1 + iVar14;
        if (iVar23 == 0x30) {
          thunk_FUN_00713720(param_1,0x30);
        }
        else {
          thunk_FUN_00713720(param_1,0x20);
        }
      }
      lVar28 = (long)iVar7;
      lVar9 = lVar28;
      if (bVar5) {
        while (lVar9 != 0) {
          lVar9 = lVar9 + -1;
          pbVar12[lVar9] =
               (byte)*(undefined4 *)(*(long *)(param_7 + 0x78) + (ulong)pbVar8[lVar9] * 4);
        }
      }
      else {
LAB_00763c67:
        thunk_FUN_00713a50(pbVar12,pbVar8,lVar28);
      }
LAB_00763c75:
      param_1 = pbVar12 + lVar28;
    }
LAB_00763c78:
    lVar17 = lVar17 + uVar29;
    pbVar12 = param_1;
LAB_00763873:
    bVar11 = param_3[1];
    param_3 = param_3 + 1;
    param_1 = pbVar12;
    goto joined_r0x00763840;
  }
LAB_007639e5:
  bVar11 = param_3[1];
  param_3 = param_3 + 1;
  switch(bVar11) {
  case 0:
    pbVar8 = param_3;
switchD_00763985_caseD_0:
    param_3 = pbVar8 + -1;
    if (pbVar8[-1] != 0x25) break;
    iVar27 = 1;
    lVar9 = 0;
    pbVar8 = param_3;
    goto LAB_00763dc0;
  default:
    goto switchD_00763a03_caseD_1;
  case 0x25:
    if (uVar25 == 0) goto LAB_00764c2a;
    iVar27 = 1;
    lVar9 = 0;
    pbVar8 = param_3;
    goto LAB_00763dc0;
  case 0x41:
    if (uVar25 == 0) goto LAB_00763f6b;
    break;
  case 0x42:
    if (uVar25 != 0x45) goto LAB_00763e72;
    break;
  case 0x43:
    if ((uVar25 != 0x45) || (lVar9 = FUN_007681f0(param_4,lVar4), lVar9 == 0)) goto LAB_007649ea;
    lVar28 = *(long *)(lVar9 + 0x20);
    iVar7 = thunk_FUN_007129d0(lVar28);
    iVar14 = iVar14 - iVar7;
    iVar27 = 0;
    if (-1 < iVar14) {
      iVar27 = iVar14;
    }
    if ((ulong)(param_2 - lVar17) <= (ulong)(long)(iVar27 + iVar7)) goto LAB_00763898;
    if (param_1 != (byte *)0x0) {
      pbVar12 = param_1;
      if (0 < iVar14) {
        pbVar12 = param_1 + iVar14;
        if (iVar23 == 0x30) {
          thunk_FUN_00713720(param_1,0x30);
          lVar28 = *(long *)(lVar9 + 0x20);
        }
        else {
          thunk_FUN_00713720(param_1,0x20);
          lVar28 = *(long *)(lVar9 + 0x20);
        }
      }
      lVar10 = (long)iVar7;
      lVar9 = lVar10;
      if (bVar5) {
        while (lVar9 != 0) {
          lVar9 = lVar9 + -1;
          pbVar12[lVar9] =
               (byte)*(undefined4 *)
                      (*(long *)(param_7 + 0x78) + (ulong)*(byte *)(lVar28 + lVar9) * 4);
        }
      }
      else {
        thunk_FUN_00713a50(pbVar12,lVar28,lVar10);
      }
      param_1 = pbVar12 + lVar10;
    }
    lVar17 = lVar17 + (iVar27 + iVar7);
    pbVar12 = param_1;
    goto LAB_00763873;
  case 0x44:
    if (uVar25 == 0) goto LAB_0076414b;
    break;
  case 0x46:
    if (uVar25 == 0) goto LAB_0076405c;
    break;
  case 0x47:
  case 0x56:
  case 0x67:
    if (uVar25 != 0x45) goto LAB_00763a5e;
    goto switchD_00763985_caseD_1;
  case 0x48:
    if (uVar25 != 0x45) goto LAB_007649c7;
    break;
  case 0x49:
    if (uVar25 != 0x45) goto LAB_007649a8;
    break;
  case 0x4d:
    if (uVar25 != 0x45) goto LAB_00764985;
    break;
  case 0x50:
switchD_00763a03_caseD_50:
    bVar6 = true;
    goto LAB_007646ba;
  case 0x52:
switchD_00763a03_caseD_52:
    local_c8 = "%H:%M";
    goto LAB_00764070;
  case 0x53:
    if (uVar25 != 0x45) goto LAB_00764942;
    break;
  case 0x54:
switchD_00763a03_caseD_54:
    local_c8 = "%H:%M:%S";
    goto LAB_00764070;
  case 0x55:
    if (uVar25 != 0x45) goto LAB_00764905;
    break;
  case 0x57:
    if (uVar25 != 0x45) goto LAB_00764624;
    break;
  case 0x58:
    if (uVar25 != 0x4f) {
      if ((uVar25 != 0x45) ||
         (local_c8 = *(char **)(lVar4 + 0x1c8), **(char **)(lVar4 + 0x1c8) == '\0'))
      goto LAB_00764608;
      goto LAB_00764070;
    }
    break;
  case 0x59:
    if (uVar25 == 0x45) {
      lVar9 = FUN_007681f0(param_4,lVar4);
      if (lVar9 != 0) {
        local_c8 = *(char **)(lVar9 + 0x28);
        if (iVar23 != 0) {
          local_b8 = iVar23;
        }
        goto LAB_00764070;
      }
    }
    else if (uVar25 == 0x4f) break;
LAB_0076444b:
    iVar27 = 1;
    if (0 < iVar14) {
      iVar27 = iVar14;
    }
    uVar29 = (ulong)(param_4[5] + 0x76c);
    goto LAB_00764470;
  case 0x5a:
switchD_00763a03_caseD_5a:
    bVar6 = false;
    if (!bVar21) {
      bVar6 = bVar5;
    }
    if (local_d0 == (char *)0x0) {
      uVar25 = param_4[8];
      if (-1 < (int)uVar25) goto LAB_00764382;
LAB_00765407:
      lVar9 = 0;
      local_d0 = "";
    }
    else {
      if ((*local_d0 == '\0') && (uVar25 = param_4[8], -1 < (int)uVar25)) {
LAB_00764382:
        if (*param_6 == '\0') {
          FUN_00761f50();
          *param_6 = '\x01';
          uVar25 = param_4[8];
        }
        if (1 < (int)uVar25) {
          iVar14 = iVar14 + -1;
          lVar9 = 1;
          local_d0 = "?";
          goto LAB_007643af;
        }
        local_d0 = (&PTR_DAT_0093ea00)[(int)uVar25];
        if (local_d0 == (char *)0x0) goto LAB_00765407;
      }
      iVar27 = thunk_FUN_007129d0(local_d0);
      lVar9 = (long)iVar27;
      iVar14 = iVar14 - iVar27;
    }
LAB_007643af:
    iVar27 = 0;
    if (-1 < iVar14) {
      iVar27 = iVar14;
    }
    uVar29 = (ulong)(iVar27 + (int)lVar9);
    if ((ulong)(param_2 - lVar17) <= uVar29) goto LAB_00763898;
    if (param_1 != (byte *)0x0) {
      pbVar12 = param_1;
      if (0 < iVar14) {
        pbVar12 = param_1 + iVar14;
        if (iVar23 == 0x30) {
          thunk_FUN_00713720(param_1,0x30);
        }
        else {
          thunk_FUN_00713720(param_1,0x20);
        }
      }
      lVar28 = lVar9;
      if (bVar21) {
        while (lVar28 != 0) {
          lVar28 = lVar28 + -1;
          pbVar12[lVar28] =
               (byte)*(undefined4 *)(*(long *)(param_7 + 0x70) + (ulong)(byte)local_d0[lVar28] * 4);
        }
      }
      else if (bVar6) {
        while (lVar28 != 0) {
          lVar28 = lVar28 + -1;
          pbVar12[lVar28] =
               (byte)*(undefined4 *)(*(long *)(param_7 + 0x78) + (ulong)(byte)local_d0[lVar28] * 4);
        }
      }
      else {
        thunk_FUN_00713a50(pbVar12,local_d0,lVar9);
      }
      param_1 = pbVar12 + lVar9;
    }
    lVar17 = lVar17 + uVar29;
    pbVar12 = param_1;
    goto LAB_00763873;
  case 0x61:
    if (uVar25 == 0) goto LAB_0076415f;
    break;
  case 0x62:
  case 0x68:
switchD_00763a03_caseD_62:
    if (!bVar21) {
      bVar21 = bVar5;
    }
    bVar5 = bVar21;
    if (uVar25 != 0x45) {
      uVar15 = param_4[4];
      if (uVar25 == 0x4f) {
        iVar27 = 1;
        if (uVar15 < 0xc) {
          iVar27 = thunk_FUN_007129d0(*(undefined8 *)
                                       (lVar4 + 0x40 + (ulong)(uVar15 + 0x20087 & 0xffff) * 8));
        }
        iVar14 = iVar14 - iVar27;
        iVar7 = 0;
        if (-1 < iVar14) {
          iVar7 = iVar14;
        }
        local_c8 = (char *)(long)(iVar7 + iVar27);
        if (local_c8 < (ulong)(param_2 - lVar17)) {
          if (param_1 != (byte *)0x0) {
            if (0 < iVar14) {
              pbVar12 = param_1 + iVar14;
              if (iVar23 == 0x30) {
                thunk_FUN_00713720(param_1,0x30);
                uVar15 = param_4[4];
              }
              else {
                thunk_FUN_00713720(param_1,0x20);
                uVar15 = param_4[4];
              }
            }
            lVar9 = (long)iVar27;
            if (!bVar5) {
              puVar18 = &DAT_007d0973;
              if (uVar15 < 0xc) {
                puVar18 = *(undefined1 **)(lVar4 + 0x40 + (ulong)(uVar15 + 0x20087 & 0xffff) * 8);
              }
              goto LAB_007652ed;
            }
            puVar18 = &DAT_007d0973;
            lVar28 = lVar9;
            if (uVar15 < 0xc) {
              puVar18 = *(undefined1 **)(lVar4 + 0x40 + (ulong)(uVar15 + 0x20087 & 0xffff) * 8);
            }
            while (lVar28 != 0) {
              lVar28 = lVar28 + -1;
              pbVar12[lVar28] =
                   (byte)*(undefined4 *)
                          (*(long *)(param_7 + 0x78) + (ulong)(byte)puVar18[lVar28] * 4);
            }
            goto LAB_007652f8;
          }
          goto LAB_007652fb;
        }
      }
      else {
        iVar27 = 1;
        if (uVar15 < 0xc) {
          iVar27 = thunk_FUN_007129d0(*(undefined8 *)
                                       (lVar4 + 0x40 + (ulong)(uVar15 + 0x2000e & 0xffff) * 8));
        }
        iVar14 = iVar14 - iVar27;
        iVar7 = 0;
        if (-1 < iVar14) {
          iVar7 = iVar14;
        }
        uVar29 = (ulong)(iVar7 + iVar27);
        if (uVar29 < (ulong)(param_2 - lVar17)) {
          if (param_1 != (byte *)0x0) {
            if (0 < iVar14) {
              uVar19 = 0x30;
              pbVar12 = param_1 + iVar14;
              if (iVar23 != 0x30) {
                uVar19 = 0x20;
              }
              thunk_FUN_00713720(param_1,uVar19);
              uVar15 = param_4[4];
            }
            lVar9 = (long)iVar27;
            puVar18 = &DAT_007d0973;
            if (!bVar5) {
              if (uVar15 < 0xc) {
                puVar18 = *(undefined1 **)(lVar4 + 0x40 + (ulong)(uVar15 + 0x2000e & 0xffff) * 8);
              }
              goto LAB_00763d8d;
            }
            lVar28 = lVar9;
            if (uVar15 < 0xc) {
              puVar18 = *(undefined1 **)(lVar4 + 0x40 + (ulong)(uVar15 + 0x2000e & 0xffff) * 8);
            }
            while (lVar28 != 0) {
              lVar28 = lVar28 + -1;
              pbVar12[lVar28] =
                   (byte)*(undefined4 *)
                          (*(long *)(param_7 + 0x78) + (ulong)(byte)puVar18[lVar28] * 4);
            }
            goto LAB_00763d98;
          }
          goto LAB_00763d9b;
        }
      }
      goto LAB_00763898;
    }
    goto switchD_00763a03_caseD_1;
  case 99:
    if (uVar25 != 0x4f) {
      if ((uVar25 != 0x45) ||
         (local_c8 = *(char **)(lVar4 + 0x1c0), **(char **)(lVar4 + 0x1c0) == '\0'))
      goto LAB_00764333;
      goto LAB_00764070;
    }
    break;
  case 100:
    if (uVar25 != 0x45) goto LAB_00764313;
    break;
  case 0x65:
    if (uVar25 != 0x45) goto LAB_007648bf;
    break;
  case 0x6a:
    if (uVar25 != 0x45) goto LAB_00764895;
    break;
  case 0x6b:
    if (uVar25 != 0x45) goto LAB_007648e2;
    break;
  case 0x6c:
    if (uVar25 != 0x45) goto LAB_007647d4;
    break;
  case 0x6d:
    if (uVar25 != 0x45) goto LAB_0076486b;
    break;
  case 0x6e:
switchD_00763a03_caseD_6e:
    iVar14 = iVar14 + -1;
    iVar27 = 0;
    if (-1 < iVar14) {
      iVar27 = iVar14;
    }
    uVar29 = (ulong)(iVar27 + 1);
    if ((ulong)(param_2 - lVar17) <= uVar29) goto LAB_00763898;
    if (param_1 != (byte *)0x0) {
      pbVar12 = param_1;
      if (0 < iVar14) {
        pbVar12 = param_1 + iVar14;
        if (iVar23 == 0x30) {
          thunk_FUN_00713720(param_1,0x30);
        }
        else {
          thunk_FUN_00713720(param_1,0x20);
        }
      }
      *pbVar12 = 10;
      param_1 = pbVar12 + 1;
    }
    goto LAB_00763c78;
  case 0x70:
switchD_00763a03_caseD_70:
    bVar6 = false;
LAB_007646ba:
    if (bVar21) {
      bVar5 = false;
      bVar6 = bVar21;
    }
    uVar25 = param_4[2];
    iVar7 = thunk_FUN_007129d0(*(undefined8 *)(lVar4 + 0x170 + (ulong)(0xb < (int)uVar25) * 8));
    iVar14 = iVar14 - iVar7;
    iVar27 = 0;
    if (-1 < iVar14) {
      iVar27 = iVar14;
    }
    uVar29 = (ulong)(iVar27 + iVar7);
    if ((ulong)(param_2 - lVar17) <= uVar29) goto LAB_00763898;
    if (param_1 == (byte *)0x0) goto LAB_00763c78;
    if (0 < iVar14) {
      uVar19 = 0x30;
      pbVar12 = param_1 + iVar14;
      if (iVar23 != 0x30) {
        uVar19 = 0x20;
      }
      thunk_FUN_00713720(param_1,uVar19);
      uVar25 = param_4[2];
    }
    lVar28 = (long)iVar7;
    puVar18 = *(undefined1 **)(lVar4 + 0x170 + (ulong)(0xb < (int)uVar25) * 8);
    lVar9 = lVar28;
    if (bVar6) {
      while (lVar9 != 0) {
        lVar9 = lVar9 + -1;
        pbVar12[lVar9] =
             (byte)*(undefined4 *)(*(long *)(param_7 + 0x70) + (ulong)(byte)puVar18[lVar9] * 4);
      }
    }
    else if (bVar5) {
      while (lVar9 != 0) {
        lVar9 = lVar9 + -1;
        pbVar12[lVar9] =
             (byte)*(undefined4 *)(*(long *)(param_7 + 0x78) + (ulong)(byte)puVar18[lVar9] * 4);
      }
    }
    else {
LAB_00764049:
      thunk_FUN_00713a50(pbVar12,puVar18,lVar28);
    }
    goto LAB_00763c75;
  case 0x72:
switchD_00763a03_caseD_72:
    local_c8 = "%I:%M:%S %p";
    if (**(char **)(lVar4 + 0x198) != '\0') {
      local_c8 = *(char **)(lVar4 + 0x198);
    }
    goto LAB_00764070;
  case 0x73:
switchD_00763a03_caseD_73:
    local_78 = *(undefined8 *)(param_4 + 8);
    uStack_70 = *(undefined8 *)(param_4 + 10);
    local_98 = *(undefined8 *)param_4;
    uStack_90 = *(undefined8 *)(param_4 + 2);
    local_88 = *(undefined8 *)(param_4 + 4);
    uStack_80 = *(undefined8 *)(param_4 + 6);
    local_68 = *(undefined8 *)(param_4 + 0xc);
    uVar29 = FUN_007aaee0(&local_98);
    pbVar8 = local_44 + 2;
    uVar25 = (uint)(uVar29 >> 0x3f);
    if ((long)uVar29 < 0) {
      do {
        pbVar8 = pbVar8 + -1;
        uVar20 = (long)uVar29 / 10;
        *pbVar8 = 0x30 - ((char)uVar29 + (char)uVar20 * -10);
        uVar29 = uVar20;
      } while (uVar20 != 0);
    }
    else {
      do {
        pbVar8 = pbVar8 + -1;
        uVar20 = uVar29 / 10;
        *pbVar8 = (char)uVar29 + (char)uVar20 * -10 + 0x30;
        uVar29 = uVar20;
      } while (uVar20 != 0);
    }
    iVar27 = 1;
    goto LAB_007644c2;
  case 0x74:
switchD_00763a03_caseD_74:
    iVar14 = iVar14 + -1;
    iVar27 = 0;
    if (-1 < iVar14) {
      iVar27 = iVar14;
    }
    uVar29 = (ulong)(iVar27 + 1);
    if ((ulong)(param_2 - lVar17) <= uVar29) goto LAB_00763898;
    if (param_1 != (byte *)0x0) {
      pbVar12 = param_1;
      if (0 < iVar14) {
        pbVar12 = param_1 + iVar14;
        if (iVar23 == 0x30) {
          thunk_FUN_00713720(param_1,0x30);
        }
        else {
          thunk_FUN_00713720(param_1,0x20);
        }
      }
      *pbVar12 = 9;
      param_1 = pbVar12 + 1;
    }
    goto LAB_00763c78;
  case 0x75:
switchD_00763a03_caseD_75:
    iVar27 = 1;
    if (0 < iVar14) {
      iVar27 = iVar14;
    }
    uVar29 = (ulong)((int)(param_4[6] + 6) % 7 + 1);
    goto LAB_00763ba0;
  case 0x77:
    if (uVar25 != 0x45) goto LAB_00764a2d;
    break;
  case 0x78:
    if (uVar25 != 0x4f) {
      if ((uVar25 != 0x45) ||
         (local_c8 = *(char **)(lVar4 + 0x1b0), **(char **)(lVar4 + 0x1b0) == '\0'))
      goto LAB_00764c0a;
      goto LAB_00764070;
    }
    break;
  case 0x79:
    if ((uVar25 != 0x45) || (lVar9 = FUN_007681f0(param_4,lVar4), lVar9 == 0)) goto LAB_00764bb7;
    if (local_b8 != 0) {
      iVar23 = local_b8;
    }
    iVar27 = 2;
    if (1 < iVar14) {
      iVar27 = iVar14;
    }
    uVar29 = (ulong)((param_4[5] - *(int *)(lVar9 + 8)) * *(int *)(lVar9 + 0x40) +
                    *(int *)(lVar9 + 4));
    goto LAB_00764470;
  case 0x7a:
switchD_00763a03_caseD_7a:
    if (-1 < (int)param_4[8]) {
      uVar29 = *(ulong *)(param_4 + 10);
      iVar7 = iVar14 + -1;
      iVar27 = 0;
      if (-1 < iVar7) {
        iVar27 = iVar7;
      }
      iVar16 = (int)uVar29;
      uVar20 = (ulong)(iVar27 + 1);
      if (iVar16 < 0) {
        if (uVar20 < (ulong)(param_2 - lVar17)) {
          if (param_1 != (byte *)0x0) {
            pbVar12 = param_1;
            if (0 < iVar7) {
              pbVar12 = param_1 + iVar7;
              if (iVar23 == 0x30) {
                thunk_FUN_00713720(param_1,0x30);
              }
              else {
                thunk_FUN_00713720(param_1,0x20);
              }
            }
            *pbVar12 = 0x2d;
            param_1 = pbVar12 + 1;
          }
          uVar29 = (ulong)(uint)-iVar16;
          goto LAB_007642d9;
        }
      }
      else if (uVar20 < (ulong)(param_2 - lVar17)) {
        if (param_1 != (byte *)0x0) {
          pbVar12 = param_1;
          if (0 < iVar7) {
            pbVar12 = param_1 + iVar7;
            if (iVar23 == 0x30) {
              thunk_FUN_00713720(param_1,0x30);
            }
            else {
              thunk_FUN_00713720(param_1,0x20);
            }
          }
          *pbVar12 = 0x2b;
          param_1 = pbVar12 + 1;
        }
        uVar29 = uVar29 & 0xffffffff;
LAB_007642d9:
        lVar17 = lVar17 + uVar20;
        iVar27 = 4;
        if (3 < iVar14) {
          iVar27 = iVar14;
        }
        uVar29 = (ulong)(uint)((int)(uVar29 / 0xe10) * 0x28 + (int)(uVar29 / 0x3c));
        goto LAB_00763ba0;
      }
      goto LAB_00763898;
    }
    goto LAB_00763873;
  }
LAB_00764cc0:
  lVar28 = -1;
  do {
    lVar9 = lVar28;
    iVar27 = 1 - (int)lVar9;
    pbVar8 = param_3 + lVar9;
    lVar28 = lVar9 + -1;
  } while (param_3[lVar9] != 0x25);
LAB_00763dc0:
  iVar14 = iVar14 - iVar27;
  iVar7 = 0;
  if (-1 < iVar14) {
    iVar7 = iVar14;
  }
  uVar29 = (ulong)(iVar7 + iVar27);
  if ((ulong)(param_2 - lVar17) <= uVar29) goto LAB_00763898;
  if (param_1 != (byte *)0x0) {
    if (0 < iVar14) {
      pbVar12 = param_1 + iVar14;
      if (iVar23 == 0x30) {
        thunk_FUN_00713720(param_1,0x30);
      }
      else {
        thunk_FUN_00713720(param_1,0x20);
      }
    }
    lVar28 = (long)iVar27;
    lVar10 = lVar28;
    if (!bVar5) goto LAB_00763c67;
    do {
      lVar10 = lVar10 + -1;
      pbVar12[lVar10] =
           (byte)*(undefined4 *)(*(long *)(param_7 + 0x78) + (ulong)param_3[lVar10 + lVar9] * 4);
    } while (lVar10 != 0);
    goto LAB_00763c75;
  }
  goto LAB_00763c78;
switchD_00763a03_caseD_1:
switchD_00763985_caseD_1:
  goto LAB_00764cc0;
}

