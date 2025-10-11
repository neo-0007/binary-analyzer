
/* WARNING: Removing unreachable block (ram,0x006f807e) */
/* WARNING: Removing unreachable block (ram,0x006f9b49) */
/* WARNING: Removing unreachable block (ram,0x006f9b5e) */
/* WARNING: Removing unreachable block (ram,0x006f9829) */
/* WARNING: Removing unreachable block (ram,0x006f9c53) */
/* WARNING: Removing unreachable block (ram,0x006f7fc8) */
/* WARNING: Removing unreachable block (ram,0x006f8023) */

ulong FUN_006f8260(void)

{
  int *piVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  unkbyte10 Var7;
  unkbyte10 Var8;
  unkbyte10 Var9;
  unkbyte10 Var10;
  unkbyte10 Var11;
  unkbyte10 Var12;
  unkbyte10 Var13;
  byte bVar14;
  char cVar15;
  char cVar16;
  byte bVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  byte *pbVar23;
  unkbyte10 *pVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  char *pcVar28;
  long lVar29;
  long lVar30;
  undefined2 *puVar31;
  char *pcVar32;
  undefined4 *puVar33;
  undefined8 uVar34;
  undefined1 *puVar35;
  long *plVar36;
  ulong uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  byte *pbVar41;
  long unaff_RBX;
  long lVar42;
  long unaff_RBP;
  uint uVar43;
  undefined1 *puVar44;
  byte *pbVar45;
  uint *unaff_R12;
  undefined1 *puVar46;
  ulong unaff_R13;
  byte *pbVar47;
  char *pcVar48;
  int iVar49;
  int unaff_R14D;
  undefined1 uVar50;
  byte *unaff_R15;
  long in_FS_OFFSET;
  bool bVar51;
  byte bVar52;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined8 extraout_XMM0_Qb;
  
  bVar52 = 0;
code_r0x006f8260:
  if ((-1 < unaff_R14D) && (unaff_R14D = unaff_R14D + -1, unaff_R14D < 1)) {
    *(long *)(unaff_RBP + -0x6b8) = unaff_RBX;
    uVar20 = *(uint *)(unaff_RBP + -0x610);
    lVar29 = *(long *)(unaff_RBP + -0x650);
    goto LAB_006f83af;
  }
  do {
    pbVar45 = *(byte **)(unaff_R12 + 2);
    if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
      *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
      unaff_R13 = (ulong)*pbVar45;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8378;
      uVar20 = FUN_007067b0(unaff_R12);
      unaff_R13 = (ulong)uVar20;
      if (uVar20 == 0xffffffff) {
        *(long *)(unaff_RBP + -0x6b8) = unaff_RBX;
        uVar20 = *(uint *)(unaff_RBP + -0x610);
        lVar29 = *(long *)(unaff_RBP + -0x650);
        *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
        goto LAB_006f83af;
      }
    }
    if (*(char *)(*(long *)(unaff_RBP + -0x460) + (long)(int)unaff_R13) ==
        *(char *)(unaff_RBP + -0x648)) {
      *(long *)(unaff_RBP + -0x6b8) = unaff_RBX;
      uVar20 = *(uint *)(unaff_RBP + -0x610);
      lVar29 = *(long *)(unaff_RBP + -0x650);
LAB_006f9c3a:
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9c46;
      FUN_007075f0(unaff_R12,unaff_R13 & 0xff);
LAB_006f83af:
      if (lVar29 == 0) {
        if (unaff_R15 != *(byte **)(unaff_RBP + -0x620)) {
          if (uVar20 != 0) goto LAB_006f6de8;
LAB_006f7d3d:
          puVar33 = *(undefined4 **)(unaff_RBP + -0x6b8);
          *puVar33 = 0;
          puVar33 = puVar33 + 1;
          if (((*(uint *)(unaff_RBP + -0x63c) & 0x2100) != 0) &&
             (plVar36 = *(long **)(unaff_RBP + -0x670),
             (long)puVar33 - *plVar36 >> 2 != *(long *)(unaff_RBP + -0x698))) {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7d80;
            lVar29 = FUN_00710840();
            if (lVar29 != 0) {
              *plVar36 = lVar29;
            }
          }
          *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
          *(undefined4 **)(unaff_RBP + -0x6b8) = puVar33;
          *(undefined8 *)(unaff_RBP + -0x670) = 0;
LAB_006f6de8:
          *(undefined4 *)(unaff_RBP + -0x610) = 0;
LAB_006f510e:
          do {
            bVar14 = **(byte **)(unaff_RBP + -0x618);
            uVar43 = (uint)unaff_R13;
            if (bVar14 == 0) {
              uVar37 = unaff_R13 & 0xffffffff;
              if (*(int *)(unaff_RBP + -0x610) != 0) {
                lVar29 = *(long *)(unaff_RBP + -0x658);
                uVar21 = *(undefined4 *)(unaff_RBP + -0x600);
                do {
                  if ((int)uVar37 == -1) {
                    lVar30 = -2;
                    *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar21;
                  }
                  else {
                    pbVar45 = *(byte **)(unaff_R12 + 2);
                    if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                      *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                      uVar37 = (ulong)*pbVar45;
                      lVar30 = uVar37 * 2;
                    }
                    else {
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f76e8;
                      uVar20 = FUN_007067b0(unaff_R12);
                      uVar37 = (ulong)uVar20;
                      if (uVar20 == 0xffffffff) {
                        lVar30 = -2;
                        uVar21 = *(undefined4 *)(in_FS_OFFSET + -0x58);
                      }
                      else {
                        lVar30 = (long)(int)uVar20 * 2;
                      }
                    }
                  }
                } while ((*(ushort *)(*(long *)(lVar29 + 0x68) + lVar30) & 0x2000) != 0);
                if ((int)uVar37 != -1) {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7c46;
                  FUN_007075f0(unaff_R12,uVar37 & 0xff);
                }
              }
              break;
            }
            if ((bVar14 & 0x80) == 0) {
              lVar29 = *(long *)(unaff_RBP + -0x618);
joined_r0x006f509a:
              pbVar45 = (byte *)(lVar29 + 1);
              if (bVar14 != 0x25) {
                if ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 +
                              (ulong)bVar14 * 2) & 0x20) == 0) {
                  if (uVar43 == 0xffffffff) {
                    *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f56a3:
                    iVar40 = -1;
                    if (*(int *)(unaff_RBP + -0x640) != 0) {
                      iVar40 = *(int *)(unaff_RBP + -0x640);
                    }
                    *(int *)(unaff_RBP + -0x640) = iVar40;
                    break;
                  }
                  pbVar47 = *(byte **)(unaff_R12 + 2);
                  if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
                    *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
                    unaff_R13 = (ulong)*pbVar47;
                  }
                  else {
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f57e0;
                    uVar20 = FUN_007067b0(unaff_R12);
                    unaff_R13 = (ulong)uVar20;
                    if (uVar20 == 0xffffffff) goto LAB_006f56a3;
                  }
                  unaff_R15 = unaff_R15 + 1;
                  if (*(int *)(unaff_RBP + -0x610) != 0) {
                    lVar29 = *(long *)(*(long *)(unaff_RBP + -0x658) + 0x68);
                    bVar17 = *(byte *)(lVar29 + 1 + (long)(int)unaff_R13 * 2);
                    while ((bVar17 & 0x20) != 0) {
                      pbVar47 = *(byte **)(unaff_R12 + 2);
                      if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
                        *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
                        unaff_R13 = (ulong)*pbVar47;
                      }
                      else {
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5780;
                        uVar20 = FUN_007067b0(unaff_R12);
                        unaff_R13 = (ulong)uVar20;
                        if (uVar20 == 0xffffffff) {
                          iVar40 = -1;
                          if (*(int *)(unaff_RBP + -0x640) != 0) {
                            iVar40 = *(int *)(unaff_RBP + -0x640);
                          }
                          *(int *)(unaff_RBP + -0x640) = iVar40;
                          goto switchD_006f555e_default;
                        }
                        lVar29 = *(long *)(*(long *)(unaff_RBP + -0x658) + 0x68);
                      }
                      unaff_R15 = unaff_R15 + 1;
                      bVar17 = *(byte *)(lVar29 + 1 + (long)(int)unaff_R13 * 2);
                    }
                  }
                  if ((uint)bVar14 != (uint)unaff_R13) {
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5e64;
                    FUN_007075f0(unaff_R12,unaff_R13 & 0xff);
                    break;
                  }
                  *(byte **)(unaff_RBP + -0x618) = pbVar45;
                  *(undefined4 *)(unaff_RBP + -0x610) = 0;
                }
                else {
                  *(byte **)(unaff_RBP + -0x618) = pbVar45;
                  *(undefined4 *)(unaff_RBP + -0x610) = 1;
                }
                goto LAB_006f510e;
              }
              uVar20 = (uint)*(byte *)(lVar29 + 1);
              uVar19 = uVar20 - 0x30;
              *(undefined8 *)(unaff_RBP + -0x470) = *(undefined8 *)(unaff_RBP + -0x460);
              *(long *)(unaff_RBP + -0x468) =
                   *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
              if (uVar19 < 10) {
                bVar14 = *(byte *)(lVar29 + 2);
                *(uint *)(unaff_RBP + -0x638) = uVar19;
                pbVar47 = (byte *)(lVar29 + 2);
                uVar20 = (uint)bVar14;
                uVar39 = uVar20 - 0x30;
                if (uVar39 < 10) {
                  do {
                    pbVar45 = pbVar47 + 1;
                    uVar20 = (uint)pbVar47[1];
                    uVar38 = uVar20 - 0x30;
                    if ((int)uVar19 < 0) {
                      *(uint *)(unaff_RBP + -0x638) = uVar19;
                      pbVar41 = pbVar45;
                      pbVar45 = pbVar47;
                      while (pbVar47 = pbVar41, uVar38 < 10) {
                        uVar20 = (uint)pbVar47[1];
                        pbVar41 = pbVar47 + 1;
                        pbVar45 = pbVar47;
                        uVar38 = uVar20 - 0x30;
                      }
                      goto LAB_006f5285;
                    }
                    if (((int)uVar19 < 0xccccccd) &&
                       ((int)(uVar19 * 10) <= (int)(0x7fffffff - uVar39))) {
                      uVar19 = uVar19 * 10 + uVar39;
                      pbVar45 = pbVar47;
                      goto LAB_006f526a;
                    }
                    if (9 < uVar38) {
                      if (pbVar47[1] != 0x24) {
                        *(undefined4 *)(unaff_RBP + -0x63c) = 0;
                        *(undefined4 *)(unaff_RBP + -0x68c) = 0;
                        *(undefined4 *)(unaff_RBP + -0x638) = 0xffffffff;
                        goto LAB_006f53b7;
                      }
                      *(undefined4 *)(unaff_RBP + -0x68c) = 0xffffffff;
                      goto LAB_006f5803;
                    }
                    uVar19 = 0xffffffff;
LAB_006f526a:
                    pbVar47 = pbVar45 + 1;
                    uVar20 = (uint)pbVar45[1];
                    uVar39 = uVar20 - 0x30;
                  } while (uVar39 < 10);
                  *(uint *)(unaff_RBP + -0x638) = uVar19;
                }
LAB_006f5285:
                *(undefined4 *)(unaff_RBP + -0x63c) = 0;
                *(undefined4 *)(unaff_RBP + -0x68c) = 0;
                if ((char)uVar20 == '$') {
                  *(undefined4 *)(unaff_RBP + -0x68c) = *(undefined4 *)(unaff_RBP + -0x638);
                  pbVar47 = pbVar45;
LAB_006f5803:
                  uVar20 = (uint)pbVar47[2];
                  pbVar45 = pbVar47 + 2;
                  goto LAB_006f532a;
                }
LAB_006f52a2:
                pbVar45 = pbVar47;
                if (*(int *)(unaff_RBP + -0x638) == 0) {
                  *(undefined4 *)(unaff_RBP + -0x638) = 0xffffffff;
                }
              }
              else {
                *(undefined4 *)(unaff_RBP + -0x68c) = 0;
LAB_006f532a:
                *(undefined4 *)(unaff_RBP + -0x63c) = 0;
                if (((byte)(uVar20 - 0x27) < 0x23) &&
                   ((0xfffffffbfffffff6U >> ((ulong)(uVar20 - 0x27) & 0x3f) & 1) == 0)) {
                  uVar39 = 0;
                  uVar19 = 0;
                  if (*(long *)(unaff_RBP + -0x680) == 0) {
                    pbVar45 = pbVar45 + 1;
                    if ((char)uVar20 == '*') goto LAB_006f540e;
                    do {
                      uVar19 = uVar39;
                      if ((char)uVar20 == 'I') {
                        uVar19 = uVar39 | 0x400;
                      }
                      while( true ) {
                        bVar14 = *pbVar45;
                        uVar20 = (uint)bVar14;
                        if ((0x22 < (byte)(bVar14 - 0x27)) ||
                           ((0xfffffffbfffffff6U >> ((ulong)(bVar14 - 0x27) & 0x3f) & 1) != 0))
                        goto LAB_006f5398;
                        pbVar45 = pbVar45 + 1;
                        uVar39 = uVar19;
                        if (bVar14 != 0x2a) break;
LAB_006f540e:
                        uVar19 = uVar19 | 8;
                      }
                    } while( true );
                  }
                  do {
                    pbVar45 = pbVar45 + 1;
                    cVar15 = (char)uVar20;
                    if (cVar15 == '*') {
                      uVar19 = uVar39 | 8;
                    }
                    else if (cVar15 == 'I') {
                      uVar19 = uVar39 | 0x400;
                    }
                    else {
                      uVar19 = uVar39;
                      if (cVar15 == '\'') {
                        uVar19 = uVar39 | 0x80;
                      }
                    }
                    uVar20 = (uint)*pbVar45;
                    uVar38 = *pbVar45 - 0x27;
                  } while (((byte)uVar38 < 0x23) &&
                          (uVar39 = uVar19, (0xfffffffbfffffff6U >> ((ulong)uVar38 & 0x3f) & 1) == 0
                          ));
LAB_006f5398:
                  *(uint *)(unaff_RBP + -0x63c) = uVar19;
                }
                *(undefined4 *)(unaff_RBP + -0x638) = 0xffffffff;
                uVar19 = uVar20 - 0x30;
                if (uVar19 < 10) {
                  *(uint *)(unaff_RBP + -0x638) = uVar19;
                  pbVar47 = pbVar45 + 1;
                  uVar20 = (uint)pbVar45[1];
                  uVar39 = uVar20 - 0x30;
                  if (uVar39 < 10) {
                    do {
                      pbVar45 = pbVar47 + 1;
                      uVar20 = (uint)pbVar47[1];
                      uVar38 = uVar20 - 0x30;
                      if ((int)uVar19 < 0) {
                        *(uint *)(unaff_RBP + -0x638) = uVar19;
                        if (uVar38 < 10) {
                          uVar37 = FUN_00404bad();
                          return uVar37;
                        }
                        goto LAB_006f53b7;
                      }
                      if ((int)uVar19 < 0xccccccd) {
                        if ((int)(0x7fffffff - uVar39) < (int)(uVar19 * 10)) {
                          if (uVar38 < 10) goto LAB_006f5d79;
                          *(undefined4 *)(unaff_RBP + -0x638) = 0xffffffff;
                          goto LAB_006f53b7;
                        }
                        uVar19 = uVar19 * 10 + uVar39;
                      }
                      else {
                        if (9 < uVar38) {
                          *(undefined4 *)(unaff_RBP + -0x638) = 0xffffffff;
                          goto LAB_006f53b7;
                        }
LAB_006f5d79:
                        uVar19 = 0xffffffff;
                        pbVar47 = pbVar45;
                      }
                      pbVar45 = pbVar47 + 1;
                      pbVar47 = pbVar47 + 1;
                      uVar20 = (uint)*pbVar45;
                      uVar39 = uVar20 - 0x30;
                    } while (uVar39 < 10);
                    *(uint *)(unaff_RBP + -0x638) = uVar19;
                  }
                  goto LAB_006f52a2;
                }
              }
LAB_006f53b7:
              cVar15 = (char)uVar20;
              *(byte **)(unaff_RBP + -0x618) = pbVar45 + 1;
              switch(uVar20 - 0x4c & 0xff) {
              case 0:
              case 0x25:
                uVar20 = (uint)pbVar45[1];
                *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 3;
                pbVar45 = *(byte **)(unaff_RBP + -0x618);
                break;
              case 0x15:
                bVar14 = pbVar45[1];
                uVar20 = (uint)bVar14;
                if ((((bVar14 & 0xf7) == 0x53) || (bVar14 == 0x73)) &&
                   (*(int *)(unaff_RBP + -0x690) == 0)) {
                  *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x100;
                  pbVar45 = *(byte **)(unaff_RBP + -0x618);
                  break;
                }
                goto LAB_006f5452;
              case 0x1c:
                uVar20 = (uint)pbVar45[1];
                if (pbVar45[1] == 0x68) {
                  uVar20 = (uint)pbVar45[2];
                  pbVar45 = pbVar45 + 2;
                  *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x200;
                }
                else {
                  *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 4;
                  pbVar45 = *(byte **)(unaff_RBP + -0x618);
                }
                break;
              case 0x1e:
              case 0x28:
              case 0x2e:
                *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 1;
                uVar20 = (uint)pbVar45[1];
                pbVar45 = *(byte **)(unaff_RBP + -0x618);
                break;
              case 0x20:
                uVar20 = (uint)pbVar45[1];
                if (pbVar45[1] == 0x6c) {
                  uVar20 = (uint)pbVar45[2];
                  *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 3;
                  pbVar45 = pbVar45 + 2;
                }
                else {
                  *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 1;
                  pbVar45 = *(byte **)(unaff_RBP + -0x618);
                }
                break;
              case 0x21:
                uVar20 = (uint)pbVar45[1];
                if (pbVar45[1] == 0x6c) {
                  uVar20 = (uint)pbVar45[2];
                  pbVar45 = pbVar45 + 2;
                  *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x2001;
                }
                else {
                  *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x2000;
                  pbVar45 = *(byte **)(unaff_RBP + -0x618);
                }
              }
              cVar15 = (char)uVar20;
              if (cVar15 == '\0') break;
              *(byte **)(unaff_RBP + -0x618) = pbVar45 + 1;
              if (*(int *)(unaff_RBP + -0x610) == 0) {
                bVar14 = (byte)(uVar20 - 0x43);
                if ((0x2b < bVar14) ||
                   ((0xfffff7fefefffffeU >> ((ulong)(uVar20 - 0x43) & 0x3f) & 1) != 0))
                goto LAB_006f5452;
                pbVar47 = unaff_R15;
                switch(bVar14) {
                case 0:
                  goto switchD_006f5e94_caseD_43;
                default:
                  goto switchD_006f555e_default;
                case 2:
                case 3:
                case 4:
                case 0x1e:
                case 0x22:
                case 0x23:
                case 0x24:
                  goto switchD_006f5835_caseD_2;
                case 0x10:
                  goto switchD_006f5e94_caseD_53;
                case 0x15:
                  *(byte **)(unaff_RBP + -0x620) = unaff_R15;
                  goto switchD_006f555e_caseD_58;
                case 0x18:
switchD_006f5e94_caseD_5b:
                  *(byte **)(unaff_RBP + -0x620) = unaff_R15;
                  goto switchD_006f555e_caseD_5b;
                case 0x20:
                  goto switchD_006f5e94_caseD_63;
                case 0x21:
                  *(byte **)(unaff_RBP + -0x620) = unaff_R15;
                  goto switchD_006f555e_caseD_64;
                case 0x26:
                  *(byte **)(unaff_RBP + -0x620) = unaff_R15;
                  goto switchD_006f555e_caseD_69;
                case 0x2b:
                  goto switchD_006f5835_caseD_2b;
                }
              }
LAB_006f5452:
              *(undefined4 *)(unaff_RBP + -0x610) = *(undefined4 *)(in_FS_OFFSET + -0x58);
              uVar37 = unaff_R13 & 0xffffffff;
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
              *(byte **)(unaff_RBP + -0x630) = pbVar45;
              lVar29 = *(long *)(unaff_RBP + -0x658);
              *(char *)(unaff_RBP + -0x620) = cVar15;
              iVar40 = *(int *)(unaff_RBP + -0x600);
              do {
                while ((int)uVar37 == -1) {
                  iVar49 = *(int *)(in_FS_OFFSET + -0x58);
joined_r0x006f54ce:
                  if (iVar49 == 4) {
                    iVar40 = -1;
                    if (*(int *)(unaff_RBP + -0x640) != 0) {
                      iVar40 = *(int *)(unaff_RBP + -0x640);
                    }
                    *(int *)(unaff_RBP + -0x640) = iVar40;
                    goto switchD_006f555e_default;
                  }
                  uVar37 = 0xffffffff;
                  uVar43 = 0xffffffff;
                  if ((*(ushort *)(*(long *)(lVar29 + 0x68) + -2) & 0x2000) == 0) goto LAB_006f54ee;
                }
                pbVar45 = *(byte **)(unaff_R12 + 2);
                if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                  *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                  uVar37 = (ulong)*pbVar45;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f55a0;
                  uVar37 = FUN_007067b0(unaff_R12);
                  if ((int)uVar37 == -1) {
                    iVar40 = *(int *)(in_FS_OFFSET + -0x58);
                    iVar49 = iVar40;
                    goto joined_r0x006f54ce;
                  }
                }
                uVar43 = (uint)uVar37;
                unaff_R15 = unaff_R15 + 1;
              } while ((*(ushort *)(*(long *)(lVar29 + 0x68) + (long)(int)uVar43 * 2) & 0x2000) != 0
                      );
LAB_006f54ee:
              lVar29 = -0x58;
              unaff_R13 = (ulong)uVar43;
              *(int *)(unaff_RBP + -0x600) = iVar40;
              pbVar45 = *(byte **)(unaff_RBP + -0x630);
              bVar14 = *(byte *)(unaff_RBP + -0x620);
              *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x610);
              if (uVar43 == 0xffffffff) {
                if (bVar14 < 0x68) {
                  if (bVar14 < 0x25) break;
                  pbVar47 = unaff_R15;
                  switch(bVar14) {
                  case 0x25:
                    *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f86a4:
                    iVar40 = -1;
                    if (*(int *)(unaff_RBP + -0x640) != 0) {
                      iVar40 = *(int *)(unaff_RBP + -0x640);
                    }
                    *(int *)(unaff_RBP + -0x640) = iVar40;
                    goto switchD_006f555e_default;
                  case 0x26:
                  case 0x27:
                  case 0x28:
                  case 0x29:
                  case 0x2a:
                  case 0x2b:
                  case 0x2c:
                  case 0x2d:
                  case 0x2e:
                  case 0x2f:
                  case 0x30:
                  case 0x31:
                  case 0x32:
                  case 0x33:
                  case 0x34:
                  case 0x35:
                  case 0x36:
                  case 0x37:
                  case 0x38:
                  case 0x39:
                  case 0x3a:
                  case 0x3b:
                  case 0x3c:
                  case 0x3d:
                  case 0x3e:
                  case 0x3f:
                  case 0x40:
                  case 0x42:
                  case 0x44:
                  case 0x48:
                  case 0x49:
                  case 0x4a:
                  case 0x4b:
                  case 0x4c:
                  case 0x4d:
                  case 0x4e:
                  case 0x4f:
                  case 0x50:
                  case 0x51:
                  case 0x52:
                  case 0x54:
                  case 0x55:
                  case 0x56:
                  case 0x57:
                  case 0x59:
                  case 0x5a:
                  case 0x5c:
                  case 0x5d:
                  case 0x5e:
                  case 0x5f:
                  case 0x60:
                  case 0x62:
                    goto switchD_006f555e_default;
                  case 0x41:
                  case 0x45:
                  case 0x46:
                  case 0x47:
                  case 0x61:
                  case 0x65:
                  case 0x66:
                  case 0x67:
                    goto LAB_006f6a75;
                  case 0x43:
                    goto switchD_006f5e94_caseD_43;
                  case 0x53:
                    goto switchD_006f5e94_caseD_53;
                  case 0x58:
                  case 100:
                    goto switchD_006f5e94_caseD_58;
                  case 0x5b:
                    goto switchD_006f5e94_caseD_5b;
                  case 99:
                    goto switchD_006f5e94_caseD_63;
                  default:
                    goto switchD_006f555e_default;
                  }
                }
                bVar14 = bVar14 + 0x97;
                if (0xf < bVar14) break;
                if ((1L << (bVar14 & 0x3f) & 0x90c1U) == 0) {
                  if (bVar14 == 10) goto LAB_006f7873;
                  if (bVar14 == 5) goto switchD_006f5835_caseD_2b;
                  break;
                }
switchD_006f5e94_caseD_58:
                goto LAB_006f623a;
              }
              *(undefined8 *)(unaff_RBP + -0x610) = 0xffffffffffffffa8;
              *(byte **)(unaff_RBP + -0x620) = unaff_R15 + -1;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f553d;
              FUN_007075f0(unaff_R12,unaff_R13 & 0xff);
              if (0x53 < (byte)(bVar14 - 0x25)) break;
              lVar29 = *(long *)(unaff_RBP + -0x610);
              switch(bVar14) {
              case 0x25:
                pbVar45 = *(byte **)(unaff_R12 + 2);
                if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                  *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                  unaff_R13 = (ulong)*pbVar45;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f934c;
                  uVar20 = FUN_007067b0(unaff_R12);
                  unaff_R13 = (ulong)uVar20;
                  if (uVar20 == 0xffffffff) goto LAB_006f86a4;
                }
                if ((int)unaff_R13 != 0x25) {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7e38;
                  FUN_007075f0(unaff_R12,unaff_R13 & 0xff);
                  goto switchD_006f555e_default;
                }
                goto LAB_006f6de8;
              default:
                goto switchD_006f555e_default;
              case 0x41:
              case 0x45:
              case 0x46:
              case 0x47:
              case 0x61:
              case 0x65:
              case 0x66:
              case 0x67:
                unaff_R15 = *(byte **)(unaff_RBP + -0x620);
                goto switchD_006f5835_caseD_2;
              case 0x43:
                pbVar47 = *(byte **)(unaff_RBP + -0x620);
switchD_006f5e94_caseD_43:
                iVar40 = 1;
                if (*(int *)(unaff_RBP + -0x638) != -1) {
                  iVar40 = *(int *)(unaff_RBP + -0x638);
                }
                *(int *)(unaff_RBP + -0x638) = iVar40;
                uVar20 = *(uint *)(unaff_RBP + -0x63c) & 8;
                *(uint *)(unaff_RBP + -0x610) = uVar20;
                if (uVar20 == 0) {
                  if ((*(uint *)(unaff_RBP + -0x63c) & 0x2100) == 0) {
                    if (*(int *)(unaff_RBP + -0x68c) == 0) {
                      uVar20 = *(uint *)(unaff_RBP + -0x5a8);
                      if (uVar20 < 0x30) {
                        puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
                        *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                        *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
                      }
                      *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar25;
                    }
                    else {
                      puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                      uVar34 = *puVar25;
                      uVar4 = puVar25[1];
                      *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                      *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                      uVar22 = puVar25[2];
                      *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
                      *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
                      *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                      uVar20 = *(uint *)(unaff_RBP + -0x540);
                      iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                      if (iVar40 != 0) {
                        lVar29 = *(long *)(unaff_RBP + -0x538);
                        bVar51 = false;
                        uVar19 = uVar20;
LAB_006fa062:
                        if (uVar19 < 0x30) goto code_r0x006fa067;
                        lVar30 = lVar29 + 8;
                        if (iVar40 != 1) {
                          lVar27 = lVar29 + 0x10;
                          do {
                            lVar30 = lVar27;
                            lVar27 = lVar30 + 8;
                          } while (lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8 != lVar30 + 8);
                        }
                        *(long *)(unaff_RBP + -0x538) = lVar30;
                        if (!bVar51) goto LAB_006fa07d;
LAB_006fa075:
                        uVar20 = uVar19;
                        *(uint *)(unaff_RBP + -0x540) = uVar20;
                      }
LAB_006fa07d:
                      if (uVar20 < 0x30) {
                        puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
                        *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
                        *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
                      }
                      *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar25;
                    }
                    if (*(long *)(unaff_RBP + -0x6b8) == 0) goto switchD_006f555e_default;
                  }
                  else {
                    if (*(int *)(unaff_RBP + -0x68c) == 0) {
                      uVar20 = *(uint *)(unaff_RBP + -0x5a8);
                      if (uVar20 < 0x30) {
                        puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
                        *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                        *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
                      }
                      plVar36 = (long *)*puVar25;
                      *(long **)(unaff_RBP + -0x670) = plVar36;
                    }
                    else {
                      puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                      uVar34 = *puVar25;
                      uVar4 = puVar25[1];
                      *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                      *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                      uVar22 = puVar25[2];
                      *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
                      *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
                      *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                      uVar20 = *(uint *)(unaff_RBP + -0x540);
                      iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                      if (iVar40 != 0) {
                        lVar29 = *(long *)(unaff_RBP + -0x538);
                        bVar51 = false;
                        uVar19 = uVar20;
LAB_006f93a1:
                        if (uVar19 < 0x30) goto code_r0x006f93a6;
                        lVar30 = lVar29 + 8;
                        if (iVar40 != 1) {
                          lVar27 = lVar29 + 0x10;
                          do {
                            lVar30 = lVar27;
                            lVar27 = lVar30 + 8;
                          } while (lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8 != lVar30 + 8);
                        }
                        *(long *)(unaff_RBP + -0x538) = lVar30;
                        if (!bVar51) goto LAB_006f93bc;
LAB_006f93b4:
                        uVar20 = uVar19;
                        *(uint *)(unaff_RBP + -0x540) = uVar20;
                      }
LAB_006f93bc:
                      if (uVar20 < 0x30) {
                        puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
                        *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
                        *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
                      }
                      plVar36 = (long *)*puVar25;
                      *(long **)(unaff_RBP + -0x670) = plVar36;
                    }
                    if (plVar36 == (long *)0x0) goto switchD_006f555e_default;
                    lVar29 = 0x400;
                    if (*(int *)(unaff_RBP + -0x638) < 0x401) {
                      lVar29 = (long)*(int *)(unaff_RBP + -0x638);
                    }
                    *(long *)(unaff_RBP + -0x698) = lVar29;
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5b72;
                    lVar29 = FUN_007101b0(lVar29 * 4);
                    *(long *)(unaff_RBP + -0x6b8) = lVar29;
                    *plVar36 = lVar29;
                    if (lVar29 == 0) {
                      uVar21 = 0xffffffff;
                      if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                        uVar21 = *(undefined4 *)(unaff_RBP + -0x640);
                      }
                      *(undefined4 *)(unaff_RBP + -0x640) = uVar21;
                      goto switchD_006f555e_default;
                    }
                    if (*(long **)(unaff_RBP + -0x6d0) == (long *)0x0) {
LAB_006f8038:
                      puVar46 = (undefined1 *)((long)register0x00000020 + -0x120);
                      *(undefined8 *)((long)register0x00000020 + -8) =
                           *(undefined8 *)((long)register0x00000020 + -8);
                      lVar29 = 1;
                      uVar22 = *(undefined8 *)(unaff_RBP + -0x6d0);
                      *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
                      *(undefined8 *)((long)register0x00000020 + -0x118) = uVar22;
                      *(undefined8 **)(unaff_RBP + -0x6d0) =
                           (undefined8 *)((long)register0x00000020 + -0x120);
                      lVar30 = 0;
                    }
                    else {
                      lVar30 = **(long **)(unaff_RBP + -0x6d0);
                      lVar29 = lVar30 + 1;
                      puVar46 = (undefined1 *)register0x00000020;
                      if (lVar30 == 0x20) goto LAB_006f8038;
                    }
                    plVar36 = *(long **)(unaff_RBP + -0x6d0);
                    lVar27 = *(long *)(unaff_RBP + -0x670);
                    *plVar36 = lVar29;
                    plVar36[lVar30 + 2] = lVar27;
                    register0x00000020 = (BADSPACEBASE *)puVar46;
                  }
                }
                if (uVar43 == 0xffffffff) {
                  *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
                }
                else {
                  pbVar45 = *(byte **)(unaff_R12 + 2);
                  if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                    *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                    unaff_R13 = (ulong)*pbVar45;
LAB_006f5be0:
                    *(undefined8 *)(unaff_RBP + -0x540) = 0;
                    *(long *)(unaff_RBP + -0x630) = unaff_RBP + -0x540;
                    *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) & 0x2100;
                    iVar40 = *(int *)(unaff_RBP + -0x638);
                    *(long *)(unaff_RBP + -0x638) = (long)iVar40;
                    *(int *)(unaff_RBP + -0x620) = iVar40 + -1;
                    unaff_R15 = pbVar47;
                    do {
                      *(char *)(unaff_RBP + -0x50) = (char)unaff_R13;
                      if ((*(int *)(unaff_RBP + -0x610) == 0) && (*(int *)(unaff_RBP + -0x63c) != 0)
                         ) {
                        lVar30 = **(long **)(unaff_RBP + -0x670);
                        lVar29 = *(long *)(unaff_RBP + -0x698) * 4;
                        if (*(long *)(unaff_RBP + -0x6b8) == lVar30 + lVar29) {
                          lVar27 = *(long *)(unaff_RBP + -0x698);
                          lVar42 = (long)*(int *)(unaff_RBP + -0x620);
                          if (lVar27 <= *(long *)(unaff_RBP + -0x638)) {
                            lVar42 = lVar27;
                          }
                          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9afd;
                          lVar30 = FUN_00710840(lVar30,(lVar42 + lVar27) * 4);
                          if (lVar30 == 0) {
                            plVar36 = *(long **)(unaff_RBP + -0x670);
                            *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) + 1;
                            lVar30 = *plVar36;
                            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc973;
                            lVar30 = FUN_00710840(lVar30,lVar29 + 4);
                            if (lVar30 == 0) {
                              *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                              goto switchD_006f555e_default;
                            }
                            *plVar36 = lVar30;
                            *(long *)(unaff_RBP + -0x6b8) = lVar30 + lVar29;
                          }
                          else {
                            *(long *)(unaff_RBP + -0x698) = lVar42 + lVar27;
                            **(long **)(unaff_RBP + -0x670) = lVar30;
                            *(long *)(unaff_RBP + -0x6b8) = lVar30 + lVar29;
                          }
                        }
                      }
                      uVar22 = 0;
                      if (*(int *)(unaff_RBP + -0x610) == 0) {
                        uVar22 = *(undefined8 *)(unaff_RBP + -0x6b8);
                      }
                      while( true ) {
                        unaff_R15 = unaff_R15 + 1;
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5cb3;
                        lVar29 = FUN_007569f0(uVar22,unaff_RBP + -0x50,1);
                        if (lVar29 != -2) break;
                        pbVar45 = *(byte **)(unaff_R12 + 2);
                        if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                          *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                          unaff_R13 = (ulong)*pbVar45;
                        }
                        else {
                          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5ccf;
                          uVar20 = FUN_007067b0(unaff_R12);
                          unaff_R13 = (ulong)uVar20;
                          if (uVar20 == 0xffffffff) {
                            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
                            goto switchD_006f555e_default;
                          }
                        }
                        *(char *)(unaff_RBP + -0x50) = (char)unaff_R13;
                      }
                      if (lVar29 != 1) {
                        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
                        goto switchD_006f555e_default;
                      }
                      *(long *)(unaff_RBP + -0x6b8) = *(long *)(unaff_RBP + -0x6b8) + 4;
                      if (*(int *)(unaff_RBP + -0x620) < 1) goto LAB_006f8d02;
                      pbVar45 = *(byte **)(unaff_R12 + 2);
                      if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                        *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                        unaff_R13 = (ulong)*pbVar45;
                      }
                      else {
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8ce5;
                        uVar20 = FUN_007067b0(unaff_R12);
                        unaff_R13 = (ulong)uVar20;
                        if (uVar20 == 0xffffffff) goto code_r0x006f8cf1;
                      }
                      *(int *)(unaff_RBP + -0x620) = *(int *)(unaff_RBP + -0x620) + -1;
                      *(long *)(unaff_RBP + -0x638) = *(long *)(unaff_RBP + -0x638) + -1;
                    } while( true );
                  }
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f85e4;
                  uVar20 = FUN_007067b0(unaff_R12);
                  unaff_R13 = (ulong)uVar20;
                  if (uVar20 != 0xffffffff) goto LAB_006f5be0;
                }
                iVar40 = -1;
                if (*(int *)(unaff_RBP + -0x640) != 0) {
                  iVar40 = *(int *)(unaff_RBP + -0x640);
                }
                *(int *)(unaff_RBP + -0x640) = iVar40;
                goto switchD_006f555e_default;
              case 0x53:
                unaff_R15 = *(byte **)(unaff_RBP + -0x620);
                goto switchD_006f5e94_caseD_53;
              case 0x58:
              case 0x78:
switchD_006f555e_caseD_58:
                *(undefined4 *)(unaff_RBP + -0x610) = 0x10;
                break;
              case 0x5b:
switchD_006f555e_caseD_5b:
                uVar19 = *(uint *)(unaff_RBP + -0x63c);
                uVar20 = uVar19 & 8;
                *(uint *)(unaff_RBP + -0x610) = uVar19 & 1;
                if ((uVar19 & 1) == 0) {
                  if (uVar20 == 0) {
                    if ((*(uint *)(unaff_RBP + -0x63c) & 0x2100) == 0) {
                      if (*(int *)(unaff_RBP + -0x68c) == 0) {
                        uVar19 = *(uint *)(unaff_RBP + -0x5a8);
                        if (uVar19 < 0x30) {
                          puVar25 = (undefined8 *)((ulong)uVar19 + *(long *)(unaff_RBP + -0x598));
                          *(uint *)(unaff_RBP + -0x5a8) = uVar19 + 8;
                        }
                        else {
                          puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                          *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
                        }
                        *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar25;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                        uVar34 = *puVar25;
                        uVar4 = puVar25[1];
                        *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                        *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                        uVar22 = puVar25[2];
                        *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
                        *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
                        *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                        uVar19 = *(uint *)(unaff_RBP + -0x540);
                        iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                        if (iVar40 != 0) {
                          lVar29 = *(long *)(unaff_RBP + -0x538);
                          bVar51 = false;
                          uVar39 = uVar19;
LAB_006fc9cf:
                          if (uVar39 < 0x30) goto code_r0x006fc9d4;
                          lVar30 = lVar29 + 8;
                          if (iVar40 != 1) {
                            lVar27 = lVar29 + 0x10;
                            do {
                              lVar30 = lVar27;
                              lVar27 = lVar30 + 8;
                            } while (lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8 != lVar30 + 8);
                          }
                          *(long *)(unaff_RBP + -0x538) = lVar30;
                          if (!bVar51) goto LAB_006fca05;
LAB_006fc9fd:
                          uVar19 = uVar39;
                          *(uint *)(unaff_RBP + -0x540) = uVar19;
                        }
LAB_006fca05:
                        if (uVar19 < 0x30) {
                          puVar25 = (undefined8 *)((ulong)uVar19 + *(long *)(unaff_RBP + -0x530));
                          *(uint *)(unaff_RBP + -0x540) = uVar19 + 8;
                        }
                        else {
                          puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
                          *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
                        }
                        *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar25;
                      }
                      lVar29 = *(long *)(unaff_RBP + -0x6c0);
                      goto joined_r0x006f9f33;
                    }
                    if (*(int *)(unaff_RBP + -0x68c) != 0) {
                      puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                      uVar34 = *puVar25;
                      uVar4 = puVar25[1];
                      *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                      *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                      uVar22 = puVar25[2];
                      *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
                      *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
                      *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                      uVar20 = *(uint *)(unaff_RBP + -0x540);
                      iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                      if (iVar40 == 0) goto LAB_006fa161;
                      lVar29 = *(long *)(unaff_RBP + -0x538);
                      bVar51 = false;
                      uVar43 = uVar20;
                      goto LAB_006fa12a;
                    }
                    uVar19 = *(uint *)(unaff_RBP + -0x5a8);
                    if (uVar19 < 0x30) {
                      plVar36 = (long *)((ulong)uVar19 + *(long *)(unaff_RBP + -0x598));
                      *(uint *)(unaff_RBP + -0x5a8) = uVar19 + 8;
                    }
                    else {
                      plVar36 = *(long **)(unaff_RBP + -0x5a0);
                      *(long **)(unaff_RBP + -0x5a0) = plVar36 + 1;
                    }
                    plVar36 = (long *)*plVar36;
                    *(long **)(unaff_RBP + -0x670) = plVar36;
                    if (plVar36 == (long *)0x0) goto switchD_006f555e_default;
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7f94;
                    lVar29 = FUN_007101b0(100);
                    *(long *)(unaff_RBP + -0x6c0) = lVar29;
                    *plVar36 = lVar29;
                    if (lVar29 == 0) {
                      uVar21 = 0xffffffff;
                      if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                        uVar21 = *(undefined4 *)(unaff_RBP + -0x640);
                      }
                      *(undefined4 *)(unaff_RBP + -0x640) = uVar21;
                      goto switchD_006f555e_default;
                    }
                    if ((*(long **)(unaff_RBP + -0x6d0) == (long *)0x0) ||
                       (lVar29 = **(long **)(unaff_RBP + -0x6d0), lVar29 == 0x20))
                    goto LAB_006f7fdd;
LAB_006f692c:
                    lVar30 = lVar29 + 1;
                    puVar46 = (undefined1 *)register0x00000020;
LAB_006f6930:
                    plVar36 = *(long **)(unaff_RBP + -0x6d0);
                    lVar27 = *(long *)(unaff_RBP + -0x670);
                    *plVar36 = lVar30;
                    plVar36[lVar29 + 2] = lVar27;
                    *(undefined8 *)(unaff_RBP + -0x698) = 100;
                    register0x00000020 = (BADSPACEBASE *)puVar46;
                  }
                }
                else if (uVar20 == 0) {
                  if ((uVar19 & 0x2100) != 0) {
                    if (*(int *)(unaff_RBP + -0x68c) == 0) {
                      uVar19 = *(uint *)(unaff_RBP + -0x5a8);
                      if (uVar19 < 0x30) {
                        puVar25 = (undefined8 *)((ulong)uVar19 + *(long *)(unaff_RBP + -0x598));
                        *(uint *)(unaff_RBP + -0x5a8) = uVar19 + 8;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                        *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
                      }
                      plVar36 = (long *)*puVar25;
                      *(long **)(unaff_RBP + -0x670) = plVar36;
                    }
                    else {
                      puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                      uVar34 = *puVar25;
                      uVar4 = puVar25[1];
                      *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                      *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                      uVar22 = puVar25[2];
                      *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
                      *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
                      *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                      uVar19 = *(uint *)(unaff_RBP + -0x540);
                      iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                      if (iVar40 != 0) {
                        lVar29 = *(long *)(unaff_RBP + -0x538);
                        bVar51 = false;
                        uVar39 = uVar19;
LAB_006f9e95:
                        if (uVar39 < 0x30) goto code_r0x006f9e9a;
                        lVar30 = lVar29 + 8;
                        if (iVar40 != 1) {
                          lVar27 = lVar29 + 0x10;
                          do {
                            lVar30 = lVar27;
                            lVar27 = lVar30 + 8;
                          } while (lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8 != lVar30 + 8);
                        }
                        *(long *)(unaff_RBP + -0x538) = lVar30;
                        if (!bVar51) goto LAB_006f9ecb;
LAB_006f9ec3:
                        uVar19 = uVar39;
                        *(uint *)(unaff_RBP + -0x540) = uVar19;
                      }
LAB_006f9ecb:
                      if (uVar19 < 0x30) {
                        puVar25 = (undefined8 *)((ulong)uVar19 + *(long *)(unaff_RBP + -0x530));
                        *(uint *)(unaff_RBP + -0x540) = uVar19 + 8;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
                        *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
                      }
                      plVar36 = (long *)*puVar25;
                      *(long **)(unaff_RBP + -0x670) = plVar36;
                    }
                    if (plVar36 != (long *)0x0) {
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f68fc;
                      lVar29 = FUN_007101b0(400);
                      *(long *)(unaff_RBP + -0x6b8) = lVar29;
                      *plVar36 = lVar29;
                      if (lVar29 != 0) {
                        if ((*(long **)(unaff_RBP + -0x6d0) != (long *)0x0) &&
                           (lVar29 = **(long **)(unaff_RBP + -0x6d0), lVar29 != 0x20))
                        goto LAB_006f692c;
LAB_006f7fdd:
                        puVar46 = (undefined1 *)((long)register0x00000020 + -0x120);
                        *(undefined8 *)((long)register0x00000020 + -8) =
                             *(undefined8 *)((long)register0x00000020 + -8);
                        lVar30 = 1;
                        uVar22 = *(undefined8 *)(unaff_RBP + -0x6d0);
                        *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
                        *(undefined8 *)((long)register0x00000020 + -0x118) = uVar22;
                        *(undefined8 **)(unaff_RBP + -0x6d0) =
                             (undefined8 *)((long)register0x00000020 + -0x120);
                        lVar29 = 0;
                        goto LAB_006f6930;
                      }
                      uVar21 = 0xffffffff;
                      if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                        uVar21 = *(undefined4 *)(unaff_RBP + -0x640);
                      }
                      *(undefined4 *)(unaff_RBP + -0x640) = uVar21;
                    }
                    goto switchD_006f555e_default;
                  }
                  if (*(int *)(unaff_RBP + -0x68c) == 0) {
                    uVar19 = *(uint *)(unaff_RBP + -0x5a8);
                    if (uVar19 < 0x30) {
                      puVar25 = (undefined8 *)((ulong)uVar19 + *(long *)(unaff_RBP + -0x598));
                      *(uint *)(unaff_RBP + -0x5a8) = uVar19 + 8;
                    }
                    else {
                      puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                      *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
                    }
                    *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar25;
                  }
                  else {
                    puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                    uVar34 = *puVar25;
                    uVar4 = puVar25[1];
                    *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                    *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                    uVar22 = puVar25[2];
                    *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
                    *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
                    *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                    uVar19 = *(uint *)(unaff_RBP + -0x540);
                    iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                    if (iVar40 != 0) {
                      lVar29 = *(long *)(unaff_RBP + -0x538);
                      bVar51 = false;
                      uVar39 = uVar19;
LAB_006faf95:
                      if (uVar39 < 0x30) goto code_r0x006faf9a;
                      lVar30 = lVar29 + 8;
                      if (iVar40 != 1) {
                        lVar27 = lVar29 + 0x10;
                        do {
                          lVar30 = lVar27;
                          lVar27 = lVar30 + 8;
                        } while (lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8 != lVar30 + 8);
                      }
                      *(long *)(unaff_RBP + -0x538) = lVar30;
                      if (!bVar51) goto LAB_006fafcb;
LAB_006fafc3:
                      uVar19 = uVar39;
                      *(uint *)(unaff_RBP + -0x540) = uVar19;
                    }
LAB_006fafcb:
                    if (uVar19 < 0x30) {
                      puVar25 = (undefined8 *)((ulong)uVar19 + *(long *)(unaff_RBP + -0x530));
                      *(uint *)(unaff_RBP + -0x540) = uVar19 + 8;
                    }
                    else {
                      puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
                      *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
                    }
                    *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar25;
                  }
                  lVar29 = *(long *)(unaff_RBP + -0x6b8);
joined_r0x006f9f33:
                  if (lVar29 == 0) goto switchD_006f555e_default;
                }
                bVar14 = pbVar45[1];
                *(undefined1 *)(unaff_RBP + -0x648) = 0;
                if (bVar14 == 0x5e) {
                  *(undefined1 *)(unaff_RBP + -0x648) = 1;
                  *(byte **)(unaff_RBP + -0x618) = pbVar45 + 2;
                }
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6989;
                cVar15 = FUN_007125e0(unaff_RBP + -0x460,0x100,1);
                if (cVar15 == '\0') {
                  *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                  goto switchD_006f555e_default;
                }
                puVar25 = *(undefined8 **)(unaff_RBP + -0x460);
                *puVar25 = 0;
                puVar25[0x1f] = 0;
                uVar37 = (ulong)(((int)puVar25 -
                                 (int)(undefined8 *)((ulong)(puVar25 + 1) & 0xfffffffffffffff8)) +
                                 0x100U >> 3);
                puVar25 = (undefined8 *)((ulong)(puVar25 + 1) & 0xfffffffffffffff8);
                for (; uVar37 != 0; uVar37 = uVar37 - 1) {
                  *puVar25 = 0;
                  puVar25 = puVar25 + (ulong)bVar52 * -2 + 1;
                }
                bVar14 = **(byte **)(unaff_RBP + -0x618);
                uVar37 = (ulong)bVar14;
                if ((bVar14 == 0x5d) || (bVar14 == 0x2d)) {
                  lVar29 = *(long *)(unaff_RBP + -0x618);
                  *(undefined1 *)(*(long *)(unaff_RBP + -0x460) + uVar37) = 1;
                  uVar37 = (ulong)*(byte *)(lVar29 + 1);
                  *(long *)(unaff_RBP + -0x618) = lVar29 + 1;
                }
                pbVar45 = *(byte **)(unaff_RBP + -0x618);
                if ((char)uVar37 == '\0') {
                  uVar37 = FUN_006f9df5();
                  return uVar37;
                }
                while( true ) {
                  pbVar47 = pbVar45 + 1;
                  if ((char)uVar37 == ']') break;
                  if (((((char)uVar37 == '-') && (bVar14 = *pbVar47, bVar14 != 0)) &&
                      (bVar14 != 0x5d)) && (bVar17 = pbVar45[-1], bVar17 <= bVar14)) {
                    if (bVar17 < bVar14) {
                      do {
                        uVar37 = (ulong)bVar17;
                        bVar17 = bVar17 + 1;
                        *(undefined1 *)(*(long *)(unaff_RBP + -0x460) + uVar37) = 1;
                        bVar14 = *pbVar47;
                      } while (bVar17 < bVar14);
                      goto LAB_006f6a06;
                    }
                  }
                  else {
                    *(undefined1 *)(*(long *)(unaff_RBP + -0x460) + uVar37) = 1;
                    bVar14 = *pbVar47;
LAB_006f6a06:
                    if (bVar14 == 0) goto switchD_006f555e_default;
                  }
                  uVar37 = (ulong)bVar14;
                  pbVar45 = pbVar47;
                }
                *(byte **)(unaff_RBP + -0x618) = pbVar47;
                if (*(int *)(unaff_RBP + -0x610) != 0) {
                  if (uVar43 != 0xffffffff) {
                    pbVar45 = *(byte **)(unaff_R12 + 2);
                    if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                      *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                      unaff_R13 = (ulong)*pbVar45;
                    }
                    else {
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9f71;
                      uVar43 = FUN_007067b0(unaff_R12);
                      unaff_R13 = (ulong)uVar43;
                      if (uVar43 == 0xffffffff) goto LAB_006f977e;
                    }
                    unaff_R15 = *(byte **)(unaff_RBP + -0x620);
                    *(undefined8 *)(unaff_RBP + -0x540) = 0;
                    *(long *)(unaff_RBP + -0x630) = unaff_RBP + -0x540;
                    if (*(char *)(unaff_RBP + -0x648) !=
                        *(char *)(*(long *)(unaff_RBP + -0x460) + (long)(int)unaff_R13)) {
                      *(uint *)(unaff_RBP + -0x610) = uVar20;
                      *(undefined8 *)(unaff_RBP + -0x650) = 0;
                      unaff_RBX = *(long *)(unaff_RBP + -0x6b8);
                      unaff_R14D = *(int *)(unaff_RBP + -0x638);
                      *(uint *)(unaff_RBP + -0x668) = *(uint *)(unaff_RBP + -0x63c) & 0x2100;
                      *(long *)(unaff_RBP + -0x660) = unaff_RBP + -0x50;
                      goto LAB_006f82b1;
                    }
                    unaff_R15 = *(byte **)(unaff_RBP + -0x620);
                    lVar29 = 0;
                    goto LAB_006f9c3a;
                  }
                  *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f977e:
                  iVar40 = -1;
                  if (*(int *)(unaff_RBP + -0x640) != 0) {
                    iVar40 = *(int *)(unaff_RBP + -0x640);
                  }
                  *(int *)(unaff_RBP + -0x640) = iVar40;
                  goto switchD_006f555e_default;
                }
                if (uVar43 == 0xffffffff) {
                  *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f99b8:
                  iVar40 = -1;
                  if (*(int *)(unaff_RBP + -0x640) != 0) {
                    iVar40 = *(int *)(unaff_RBP + -0x640);
                  }
                  *(int *)(unaff_RBP + -0x640) = iVar40;
                  goto switchD_006f555e_default;
                }
                pbVar45 = *(byte **)(unaff_R12 + 2);
                if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                  *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                  unaff_R13 = (ulong)*pbVar45;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9d5b;
                  uVar43 = FUN_007067b0(unaff_R12);
                  unaff_R13 = (ulong)uVar43;
                  if (uVar43 == 0xffffffff) goto LAB_006f99b8;
                }
                unaff_R15 = *(byte **)(unaff_RBP + -0x620);
                if (*(char *)(unaff_RBP + -0x648) ==
                    *(char *)(*(long *)(unaff_RBP + -0x460) + (long)(int)unaff_R13)) {
                  unaff_R15 = *(byte **)(unaff_RBP + -0x620);
                }
                else {
                  puVar46 = *(undefined1 **)(unaff_RBP + -0x6c0);
                  *(uint *)(unaff_RBP + -0x630) = *(uint *)(unaff_RBP + -0x63c) & 0x2100;
                  iVar40 = *(int *)(unaff_RBP + -0x638);
                  do {
                    unaff_R15 = unaff_R15 + 1;
                    if (uVar20 == 0) {
                      iVar49 = *(int *)(unaff_RBP + -0x630);
                      *puVar46 = (char)unaff_R13;
                      puVar46 = puVar46 + 1;
                      if ((iVar49 != 0) &&
                         (lVar29 = **(long **)(unaff_RBP + -0x670),
                         puVar46 == (undefined1 *)(lVar29 + *(long *)(unaff_RBP + -0x698)))) {
                        *(undefined4 *)(unaff_RBP + -0x650) = 0;
                        *(uint **)(unaff_RBP + -0x638) = unaff_R12;
                        uVar37 = *(long *)(unaff_RBP + -0x698) + 1;
                        uVar26 = *(long *)(unaff_RBP + -0x698) * 2;
                        while( true ) {
                          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9965;
                          lVar29 = FUN_00710840(lVar29,uVar26);
                          if (lVar29 != 0) break;
                          if (uVar26 <= uVar37) {
                            unaff_R12 = *(uint **)(unaff_RBP + -0x638);
                            if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                              plVar36 = *(long **)(unaff_RBP + -0x670);
                              *(undefined8 *)(unaff_RBP + -0x670) = 0;
                              *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
                              *(undefined1 *)(*plVar36 + -1 + *(long *)(unaff_RBP + -0x698)) = 0;
                            }
                            else {
                              *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                            }
                            goto switchD_006f555e_default;
                          }
                          lVar29 = **(long **)(unaff_RBP + -0x670);
                          uVar26 = uVar37;
                        }
                        unaff_R12 = *(uint **)(unaff_RBP + -0x638);
                        uVar20 = *(uint *)(unaff_RBP + -0x650);
                        **(long **)(unaff_RBP + -0x670) = lVar29;
                        puVar46 = (undefined1 *)(lVar29 + *(long *)(unaff_RBP + -0x698));
                        *(ulong *)(unaff_RBP + -0x698) = uVar26;
                      }
                    }
                    if ((-1 < iVar40) && (iVar40 = iVar40 + -1, iVar40 == 0)) {
                      *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
                      goto LAB_006f855e;
                    }
                    pbVar45 = *(byte **)(unaff_R12 + 2);
                    if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                      *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                      unaff_R13 = (ulong)*pbVar45;
                    }
                    else {
                      *(undefined1 **)(unaff_RBP + -0x638) = puVar46;
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f852c;
                      uVar43 = FUN_007067b0(unaff_R12);
                      puVar46 = *(undefined1 **)(unaff_RBP + -0x638);
                      unaff_R13 = (ulong)uVar43;
                      if (uVar43 == 0xffffffff) {
                        *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
                        *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                        goto LAB_006f855e;
                      }
                    }
                  } while (*(char *)(*(long *)(unaff_RBP + -0x460) + (long)(int)unaff_R13) !=
                           *(char *)(unaff_RBP + -0x648));
                  *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
                }
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9d4e;
                FUN_007075f0(unaff_R12,unaff_R13 & 0xff);
LAB_006f855e:
                if (unaff_R15 == *(byte **)(unaff_RBP + -0x620)) goto switchD_006f555e_default;
LAB_006f7aa5:
                if (uVar20 == 0) {
                  puVar46 = *(undefined1 **)(unaff_RBP + -0x6c0);
                  *puVar46 = 0;
                  puVar46 = puVar46 + 1;
                  if (((*(uint *)(unaff_RBP + -0x63c) & 0x2100) != 0) &&
                     (plVar36 = *(long **)(unaff_RBP + -0x670),
                     (long)puVar46 - *plVar36 != *(long *)(unaff_RBP + -0x698))) {
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7ae6;
                    lVar29 = FUN_00710840();
                    if (lVar29 != 0) {
                      *plVar36 = lVar29;
                    }
                  }
                  *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
                  *(undefined4 *)(unaff_RBP + -0x610) = 0;
                  *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
                  *(undefined8 *)(unaff_RBP + -0x670) = 0;
                }
                goto LAB_006f510e;
              case 99:
                pbVar47 = *(byte **)(unaff_RBP + -0x620);
switchD_006f5e94_caseD_63:
                uVar20 = *(uint *)(unaff_RBP + -0x63c);
                *(uint *)(unaff_RBP + -0x610) = uVar20 & 1;
                if ((uVar20 & 1) != 0) goto switchD_006f5e94_caseD_43;
                iVar40 = 1;
                if (*(int *)(unaff_RBP + -0x638) != -1) {
                  iVar40 = *(int *)(unaff_RBP + -0x638);
                }
                *(int *)(unaff_RBP + -0x638) = iVar40;
                if ((uVar20 & 8) == 0) {
                  if ((uVar20 & 0x2100) == 0) {
                    if (*(int *)(unaff_RBP + -0x68c) == 0) {
                      uVar19 = *(uint *)(unaff_RBP + -0x5a8);
                      if (uVar19 < 0x30) {
                        puVar25 = (undefined8 *)((ulong)uVar19 + *(long *)(unaff_RBP + -0x598));
                        *(uint *)(unaff_RBP + -0x5a8) = uVar19 + 8;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                        *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
                      }
                      *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar25;
                    }
                    else {
                      puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                      uVar34 = *puVar25;
                      uVar4 = puVar25[1];
                      *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                      *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                      uVar22 = puVar25[2];
                      *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
                      *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
                      *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                      uVar19 = *(uint *)(unaff_RBP + -0x540);
                      iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                      if (iVar40 != 0) {
                        lVar29 = *(long *)(unaff_RBP + -0x538);
                        bVar51 = false;
                        uVar39 = uVar19;
LAB_006fb4ac:
                        if (uVar39 < 0x30) goto code_r0x006fb4b1;
                        lVar30 = lVar29 + 8;
                        if (iVar40 != 1) {
                          lVar27 = lVar29 + 0x10;
                          do {
                            lVar30 = lVar27;
                            lVar27 = lVar30 + 8;
                          } while (lVar30 + 8 != lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8);
                        }
                        *(long *)(unaff_RBP + -0x538) = lVar30;
                        if (!bVar51) goto LAB_006fb4e9;
LAB_006fb4e1:
                        uVar19 = uVar39;
                        *(uint *)(unaff_RBP + -0x540) = uVar19;
                      }
LAB_006fb4e9:
                      if (uVar19 < 0x30) {
                        puVar25 = (undefined8 *)((ulong)uVar19 + *(long *)(unaff_RBP + -0x530));
                        *(uint *)(unaff_RBP + -0x540) = uVar19 + 8;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
                        *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
                      }
                      *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar25;
                    }
                    if (*(long *)(unaff_RBP + -0x6c0) == 0) goto switchD_006f555e_default;
                  }
                  else {
                    if (*(int *)(unaff_RBP + -0x68c) == 0) {
                      uVar19 = *(uint *)(unaff_RBP + -0x5a8);
                      if (uVar19 < 0x30) {
                        puVar25 = (undefined8 *)((ulong)uVar19 + *(long *)(unaff_RBP + -0x598));
                        *(uint *)(unaff_RBP + -0x5a8) = uVar19 + 8;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                        *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
                      }
                      plVar36 = (long *)*puVar25;
                      *(long **)(unaff_RBP + -0x670) = plVar36;
                    }
                    else {
                      puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                      uVar34 = *puVar25;
                      uVar4 = puVar25[1];
                      *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                      *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                      uVar22 = puVar25[2];
                      *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
                      *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
                      *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                      uVar19 = *(uint *)(unaff_RBP + -0x540);
                      iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                      if (iVar40 != 0) {
                        lVar29 = *(long *)(unaff_RBP + -0x538);
                        bVar51 = false;
                        uVar39 = uVar19;
LAB_006fb574:
                        if (uVar39 < 0x30) goto code_r0x006fb579;
                        lVar30 = lVar29 + 8;
                        if (iVar40 != 1) {
                          lVar27 = lVar29 + 0x10;
                          do {
                            lVar30 = lVar27;
                            lVar27 = lVar30 + 8;
                          } while (lVar30 + 8 != lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8);
                        }
                        *(long *)(unaff_RBP + -0x538) = lVar30;
                        if (!bVar51) goto LAB_006fb5aa;
LAB_006fb5a2:
                        uVar19 = uVar39;
                        *(uint *)(unaff_RBP + -0x540) = uVar19;
                      }
LAB_006fb5aa:
                      if (uVar19 < 0x30) {
                        puVar25 = (undefined8 *)((ulong)uVar19 + *(long *)(unaff_RBP + -0x530));
                        *(uint *)(unaff_RBP + -0x540) = uVar19 + 8;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
                        *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
                      }
                      plVar36 = (long *)*puVar25;
                      *(long **)(unaff_RBP + -0x670) = plVar36;
                    }
                    if (plVar36 == (long *)0x0) goto switchD_006f555e_default;
                    lVar29 = 0x400;
                    if (*(int *)(unaff_RBP + -0x638) < 0x401) {
                      lVar29 = (long)*(int *)(unaff_RBP + -0x638);
                    }
                    *(long *)(unaff_RBP + -0x698) = lVar29;
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f66f5;
                    lVar29 = FUN_007101b0(lVar29);
                    *(long *)(unaff_RBP + -0x6c0) = lVar29;
                    *plVar36 = lVar29;
                    if (lVar29 == 0) {
                      uVar21 = 0xffffffff;
                      if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                        uVar21 = *(undefined4 *)(unaff_RBP + -0x640);
                      }
                      *(undefined4 *)(unaff_RBP + -0x640) = uVar21;
                      goto switchD_006f555e_default;
                    }
                    if (*(long **)(unaff_RBP + -0x6d0) == (long *)0x0) {
LAB_006f9c68:
                      puVar46 = (undefined1 *)((long)register0x00000020 + -0x120);
                      *(undefined8 *)((long)register0x00000020 + -8) =
                           *(undefined8 *)((long)register0x00000020 + -8);
                      lVar29 = 1;
                      uVar22 = *(undefined8 *)(unaff_RBP + -0x6d0);
                      *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
                      *(undefined8 *)((long)register0x00000020 + -0x118) = uVar22;
                      *(undefined8 **)(unaff_RBP + -0x6d0) =
                           (undefined8 *)((long)register0x00000020 + -0x120);
                      lVar30 = 0;
                    }
                    else {
                      lVar30 = **(long **)(unaff_RBP + -0x6d0);
                      lVar29 = lVar30 + 1;
                      puVar46 = (undefined1 *)register0x00000020;
                      if (lVar30 == 0x20) goto LAB_006f9c68;
                    }
                    plVar36 = *(long **)(unaff_RBP + -0x6d0);
                    lVar27 = *(long *)(unaff_RBP + -0x670);
                    *plVar36 = lVar29;
                    plVar36[lVar30 + 2] = lVar27;
                    register0x00000020 = (BADSPACEBASE *)puVar46;
                  }
                }
                if (uVar43 == 0xffffffff) {
                  *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f9447:
                  iVar40 = -1;
                  if (*(int *)(unaff_RBP + -0x640) != 0) {
                    iVar40 = *(int *)(unaff_RBP + -0x640);
                  }
                  *(int *)(unaff_RBP + -0x640) = iVar40;
                  goto switchD_006f555e_default;
                }
                pbVar45 = *(byte **)(unaff_R12 + 2);
                if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                  *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                  unaff_R13 = (ulong)*pbVar45;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9438;
                  uVar43 = FUN_007067b0(unaff_R12);
                  unaff_R13 = (ulong)uVar43;
                  if (uVar43 == 0xffffffff) goto LAB_006f9447;
                }
                unaff_R15 = pbVar47 + 1;
                if ((uVar20 & 8) == 0) {
                  if ((*(uint *)(unaff_RBP + -0x63c) & 0x2100) != 0) {
                    *(byte **)(unaff_RBP + -0x620) = unaff_R15;
                    *(long *)(unaff_RBP + -0x630) = (long)*(int *)(unaff_RBP + -0x638);
                    puVar46 = *(undefined1 **)(unaff_RBP + -0x6c0);
                    *(int *)(unaff_RBP + -0x610) = *(int *)(unaff_RBP + -0x638) + -1;
                    lVar29 = *(long *)(unaff_RBP + -0x698);
                    do {
                      lVar30 = lVar29;
                      if (puVar46 == (undefined1 *)(**(long **)(unaff_RBP + -0x670) + lVar29)) {
                        lVar30 = (long)*(int *)(unaff_RBP + -0x610);
                        if (lVar29 < (*(long *)(unaff_RBP + -0x630) + *(long *)(unaff_RBP + -0x620))
                                     - (long)unaff_R15) {
                          lVar30 = lVar29;
                        }
                        *(long *)(unaff_RBP + -0x638) = lVar30 + lVar29;
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9594;
                        lVar27 = FUN_00710840();
                        lVar30 = *(long *)(unaff_RBP + -0x638);
                        if (lVar27 == 0) {
                          lVar30 = lVar29 + 1;
                          uVar22 = **(undefined8 **)(unaff_RBP + -0x670);
                          *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb89e;
                          lVar27 = FUN_00710840(uVar22,lVar30);
                          if (lVar27 == 0) {
                            *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                            goto switchD_006f555e_default;
                          }
                          **(long **)(unaff_RBP + -0x670) = lVar27;
                          puVar46 = (undefined1 *)(lVar27 + lVar29);
                        }
                        else {
                          **(long **)(unaff_RBP + -0x670) = lVar27;
                          puVar46 = (undefined1 *)(lVar27 + lVar29);
                        }
                      }
                      *puVar46 = (char)unaff_R13;
                      puVar46 = puVar46 + 1;
                      if (*(int *)(unaff_RBP + -0x610) < 1) {
                        *(long *)(unaff_RBP + -0x698) = lVar30;
                        goto LAB_006f952c;
                      }
                      pbVar45 = *(byte **)(unaff_R12 + 2);
                      if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                        *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                        unaff_R13 = (ulong)*pbVar45;
                      }
                      else {
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9506;
                        uVar20 = FUN_007067b0(unaff_R12);
                        unaff_R13 = (ulong)uVar20;
                        if (uVar20 == 0xffffffff) goto code_r0x006f950e;
                      }
                      *(int *)(unaff_RBP + -0x610) = *(int *)(unaff_RBP + -0x610) + -1;
                      unaff_R15 = unaff_R15 + 1;
                      lVar29 = lVar30;
                    } while( true );
                  }
                  puVar35 = *(undefined1 **)(unaff_RBP + -0x6c0);
                  lVar29 = (long)unaff_R15 - (long)puVar35;
                  *(int *)(unaff_RBP + -0x610) = *(int *)(unaff_RBP + -0x638) + (int)puVar35;
                  do {
                    while( true ) {
                      iVar40 = *(int *)(unaff_RBP + -0x610);
                      unaff_R15 = puVar35 + lVar29;
                      puVar46 = puVar35 + 1;
                      *puVar35 = (char)unaff_R13;
                      if (iVar40 - (int)puVar46 < 1) goto LAB_006f67ef;
                      pbVar45 = *(byte **)(unaff_R12 + 2);
                      puVar35 = puVar46;
                      if (*(byte **)(unaff_R12 + 4) <= pbVar45) break;
                      *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                      unaff_R13 = (ulong)*pbVar45;
                    }
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f67d6;
                    uVar20 = FUN_007067b0(unaff_R12);
                    unaff_R13 = (ulong)uVar20;
                  } while (uVar20 != 0xffffffff);
                  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                  goto LAB_006f67ef;
                }
                iVar40 = *(int *)(unaff_RBP + -0x638);
                if (1 < iVar40) {
                  do {
                    pbVar45 = *(byte **)(unaff_R12 + 2);
                    if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                      *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                      unaff_R13 = (ulong)*pbVar45;
                    }
                    else {
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8b70;
                      uVar20 = FUN_007067b0(unaff_R12);
                      unaff_R13 = (ulong)uVar20;
                      if (uVar20 == 0xffffffff) {
                        *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                        break;
                      }
                    }
                    unaff_R15 = unaff_R15 + 1;
                  } while (unaff_R15 != pbVar47 + (ulong)(iVar40 - 2) + 2);
                }
                goto LAB_006f510e;
              case 100:
switchD_006f555e_caseD_64:
                *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x40;
                *(undefined4 *)(unaff_RBP + -0x610) = 10;
                break;
              case 0x69:
switchD_006f555e_caseD_69:
                *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x40;
                *(undefined4 *)(unaff_RBP + -0x610) = 0;
                break;
              case 0x6e:
                unaff_R15 = *(byte **)(unaff_RBP + -0x620);
switchD_006f5835_caseD_2b:
                uVar20 = *(uint *)(unaff_RBP + -0x63c);
                *(uint *)(unaff_RBP + -0x610) = uVar20 & 8;
                if ((uVar20 & 8) != 0) goto LAB_006f6de8;
                if ((uVar20 & 1) == 0) {
                  if ((*(byte *)(unaff_RBP + -0x63c) & 4) == 0) {
                    *(uint *)(unaff_RBP + -0x610) = uVar20 & 0x200;
                    if ((uVar20 & 0x200) == 0) {
                      if (*(int *)(unaff_RBP + -0x68c) == 0) {
                        uVar20 = *(uint *)(unaff_RBP + -0x5a8);
                        if (uVar20 < 0x30) {
                          puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
                          *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
                        }
                        else {
                          puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                          *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
                        }
                        puVar33 = (undefined4 *)*puVar25;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                        uVar34 = *puVar25;
                        uVar4 = puVar25[1];
                        *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                        *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                        uVar22 = puVar25[2];
                        *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
                        *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
                        *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                        uVar20 = *(uint *)(unaff_RBP + -0x540);
                        iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                        if (iVar40 != 0) {
                          lVar29 = *(long *)(unaff_RBP + -0x538);
                          bVar51 = false;
                          uVar43 = uVar20;
LAB_006fb04d:
                          if (uVar43 < 0x30) goto code_r0x006fb052;
                          lVar30 = lVar29 + 8;
                          if (iVar40 != 1) {
                            lVar27 = lVar29 + 0x10;
                            do {
                              lVar30 = lVar27;
                              lVar27 = lVar30 + 8;
                            } while (lVar30 + 8 != lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8);
                          }
                          *(long *)(unaff_RBP + -0x538) = lVar30;
                          if (!bVar51) goto LAB_006fb089;
LAB_006fb081:
                          uVar20 = uVar43;
                          *(uint *)(unaff_RBP + -0x540) = uVar20;
                        }
LAB_006fb089:
                        if (uVar20 < 0x30) {
                          puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
                          *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
                        }
                        else {
                          puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
                          *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
                        }
                        puVar33 = (undefined4 *)*puVar25;
                      }
                      *puVar33 = (int)unaff_R15;
                    }
                    else {
                      if (*(int *)(unaff_RBP + -0x68c) == 0) {
                        uVar20 = *(uint *)(unaff_RBP + -0x5a8);
                        if (uVar20 < 0x30) {
                          puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
                          *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
                        }
                        else {
                          puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                          *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
                        }
                        puVar46 = (undefined1 *)*puVar25;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                        uVar34 = *puVar25;
                        uVar4 = puVar25[1];
                        *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                        *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                        uVar22 = puVar25[2];
                        *(undefined8 *)(unaff_RBP + -0x610) = uVar34;
                        *(undefined8 *)(unaff_RBP + -0x608) = uVar4;
                        *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                        uVar20 = *(uint *)(unaff_RBP + -0x540);
                        iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                        if (iVar40 != 0) {
                          lVar29 = *(long *)(unaff_RBP + -0x538);
                          bVar51 = false;
                          uVar43 = uVar20;
LAB_006fc816:
                          if (uVar43 < 0x30) goto code_r0x006fc81b;
                          lVar30 = lVar29 + 8;
                          if (iVar40 != 1) {
                            lVar27 = lVar29 + 0x10;
                            do {
                              lVar30 = lVar27;
                              lVar27 = lVar30 + 8;
                            } while (lVar30 + 8 != lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8);
                          }
                          *(long *)(unaff_RBP + -0x538) = lVar30;
                          if (!bVar51) goto LAB_006fc851;
LAB_006fc849:
                          uVar20 = uVar43;
                          *(uint *)(unaff_RBP + -0x540) = uVar20;
                        }
LAB_006fc851:
                        if (uVar20 < 0x30) {
                          puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
                          *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
                        }
                        else {
                          puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
                          *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
                        }
                        puVar46 = (undefined1 *)*puVar25;
                      }
                      *puVar46 = (char)unaff_R15;
                      *(undefined4 *)(unaff_RBP + -0x610) = 0;
                    }
                  }
                  else {
                    if (*(int *)(unaff_RBP + -0x68c) == 0) {
                      uVar20 = *(uint *)(unaff_RBP + -0x5a8);
                      if (uVar20 < 0x30) {
                        puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
                        *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                        *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
                      }
                      puVar31 = (undefined2 *)*puVar25;
                    }
                    else {
                      puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                      uVar34 = *puVar25;
                      uVar4 = puVar25[1];
                      *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                      *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                      uVar22 = puVar25[2];
                      *(undefined8 *)(unaff_RBP + -0x610) = uVar34;
                      *(undefined8 *)(unaff_RBP + -0x608) = uVar4;
                      *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                      uVar20 = *(uint *)(unaff_RBP + -0x540);
                      iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                      if (iVar40 != 0) {
                        lVar29 = *(long *)(unaff_RBP + -0x538);
                        bVar51 = false;
                        uVar43 = uVar20;
LAB_006fb3c9:
                        if (uVar43 < 0x30) goto code_r0x006fb3ce;
                        lVar30 = lVar29 + 8;
                        if (iVar40 != 1) {
                          lVar27 = lVar29 + 0x10;
                          do {
                            lVar30 = lVar27;
                            lVar27 = lVar30 + 8;
                          } while (lVar30 + 8 != lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8);
                        }
                        *(long *)(unaff_RBP + -0x538) = lVar30;
                        if (!bVar51) goto LAB_006fb3ff;
LAB_006fb3f7:
                        uVar20 = uVar43;
                        *(uint *)(unaff_RBP + -0x540) = uVar20;
                      }
LAB_006fb3ff:
                      if (uVar20 < 0x30) {
                        puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
                        *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
                        *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
                      }
                      puVar31 = (undefined2 *)*puVar25;
                    }
                    *puVar31 = (short)unaff_R15;
                    *(undefined4 *)(unaff_RBP + -0x610) = 0;
                  }
                }
                else {
                  if (*(int *)(unaff_RBP + -0x68c) == 0) {
                    uVar20 = *(uint *)(unaff_RBP + -0x5a8);
                    if (uVar20 < 0x30) {
                      puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
                      *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
                    }
                    else {
                      puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                      *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
                    }
                    plVar36 = (long *)*puVar25;
                  }
                  else {
                    puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                    uVar34 = *puVar25;
                    uVar4 = puVar25[1];
                    *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                    *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                    uVar22 = puVar25[2];
                    *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
                    *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
                    *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                    uVar20 = *(uint *)(unaff_RBP + -0x540);
                    iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                    if (iVar40 != 0) {
                      lVar29 = *(long *)(unaff_RBP + -0x538);
                      bVar51 = false;
                      uVar43 = uVar20;
LAB_006fa1cf:
                      if (uVar43 < 0x30) goto code_r0x006fa1d4;
                      lVar30 = lVar29 + 8;
                      if (iVar40 != 1) {
                        lVar27 = lVar29 + 0x10;
                        do {
                          lVar30 = lVar27;
                          lVar27 = lVar30 + 8;
                        } while (lVar30 + 8 != lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8);
                      }
                      *(long *)(unaff_RBP + -0x538) = lVar30;
                      if (!bVar51) goto LAB_006fa1ea;
LAB_006fa1e2:
                      uVar20 = uVar43;
                      *(uint *)(unaff_RBP + -0x540) = uVar20;
                    }
LAB_006fa1ea:
                    if (uVar20 < 0x30) {
                      puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
                      *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
                    }
                    else {
                      puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
                      *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
                    }
                    plVar36 = (long *)*puVar25;
                  }
                  *plVar36 = (long)unaff_R15;
                }
                goto LAB_006f510e;
              case 0x6f:
                *(undefined4 *)(unaff_RBP + -0x610) = 8;
                goto LAB_006f62d6;
              case 0x70:
                *(undefined4 *)(unaff_RBP + -0x610) = 0x10;
                *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) & 0xfffffff9 | 0x1001;
                break;
              case 0x73:
                unaff_R15 = *(byte **)(unaff_RBP + -0x620);
LAB_006f7873:
                uVar19 = *(uint *)(unaff_RBP + -0x63c);
                *(uint *)(unaff_RBP + -0x610) = uVar19 & 1;
                if ((uVar19 & 1) == 0) {
                  uVar20 = uVar19 & 8;
                  if (uVar20 == 0) {
                    if ((uVar19 & 0x2100) == 0) {
                      if (*(int *)(unaff_RBP + -0x68c) == 0) {
                        uVar19 = *(uint *)(unaff_RBP + -0x5a8);
                        if (uVar19 < 0x30) {
                          puVar25 = (undefined8 *)((ulong)uVar19 + *(long *)(unaff_RBP + -0x598));
                          *(uint *)(unaff_RBP + -0x5a8) = uVar19 + 8;
                        }
                        else {
                          puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                          *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
                        }
                        *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar25;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                        uVar34 = *puVar25;
                        uVar4 = puVar25[1];
                        *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                        *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                        uVar22 = puVar25[2];
                        *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
                        *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
                        *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                        uVar19 = *(uint *)(unaff_RBP + -0x540);
                        iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                        if (iVar40 != 0) {
                          lVar30 = *(long *)(unaff_RBP + -0x538);
                          bVar51 = false;
                          uVar39 = uVar19;
LAB_006fb2eb:
                          if (uVar39 < 0x30) goto code_r0x006fb2f0;
                          lVar27 = lVar30 + 8;
                          if (iVar40 != 1) {
                            lVar42 = lVar30 + 0x10;
                            do {
                              lVar27 = lVar42;
                              lVar42 = lVar27 + 8;
                            } while (lVar30 + 0x18 + (ulong)(iVar40 - 2) * 8 != lVar27 + 8);
                          }
                          *(long *)(unaff_RBP + -0x538) = lVar27;
                          if (!bVar51) goto LAB_006fb321;
LAB_006fb319:
                          uVar19 = uVar39;
                          *(uint *)(unaff_RBP + -0x540) = uVar19;
                        }
LAB_006fb321:
                        if (uVar19 < 0x30) {
                          puVar25 = (undefined8 *)((ulong)uVar19 + *(long *)(unaff_RBP + -0x530));
                          *(uint *)(unaff_RBP + -0x540) = uVar19 + 8;
                        }
                        else {
                          puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
                          *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
                        }
                        *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar25;
                      }
                      if (*(long *)(unaff_RBP + -0x6c0) == 0) goto switchD_006f555e_default;
                    }
                    else {
                      if (*(int *)(unaff_RBP + -0x68c) == 0) {
                        uVar19 = *(uint *)(unaff_RBP + -0x5a8);
                        if (uVar19 < 0x30) {
                          puVar25 = (undefined8 *)((ulong)uVar19 + *(long *)(unaff_RBP + -0x598));
                          *(uint *)(unaff_RBP + -0x5a8) = uVar19 + 8;
                        }
                        else {
                          puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                          *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
                        }
                        plVar36 = (long *)*puVar25;
                        *(long **)(unaff_RBP + -0x670) = plVar36;
                      }
                      else {
                        puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                        uVar34 = *puVar25;
                        uVar4 = puVar25[1];
                        *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                        *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                        uVar22 = puVar25[2];
                        *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
                        *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
                        *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                        uVar19 = *(uint *)(unaff_RBP + -0x540);
                        iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                        if (iVar40 != 0) {
                          lVar30 = *(long *)(unaff_RBP + -0x538);
                          bVar51 = false;
                          uVar39 = uVar19;
LAB_006fa618:
                          if (uVar39 < 0x30) goto code_r0x006fa61d;
                          lVar27 = lVar30 + 8;
                          if (iVar40 != 1) {
                            lVar42 = lVar30 + 0x10;
                            do {
                              lVar27 = lVar42;
                              lVar42 = lVar27 + 8;
                            } while (lVar30 + 0x18 + (ulong)(iVar40 - 2) * 8 != lVar27 + 8);
                          }
                          *(long *)(unaff_RBP + -0x538) = lVar27;
                          if (!bVar51) goto LAB_006fa633;
LAB_006fa62b:
                          uVar19 = uVar39;
                          *(uint *)(unaff_RBP + -0x540) = uVar19;
                        }
LAB_006fa633:
                        if (uVar19 < 0x30) {
                          puVar25 = (undefined8 *)((ulong)uVar19 + *(long *)(unaff_RBP + -0x530));
                          *(uint *)(unaff_RBP + -0x540) = uVar19 + 8;
                        }
                        else {
                          puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
                          *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
                        }
                        plVar36 = (long *)*puVar25;
                        *(long **)(unaff_RBP + -0x670) = plVar36;
                      }
                      *(long *)(unaff_RBP + -0x630) = lVar29;
                      if (plVar36 == (long *)0x0) goto switchD_006f555e_default;
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f78f6;
                      lVar29 = FUN_007101b0(100);
                      *(long *)(unaff_RBP + -0x6c0) = lVar29;
                      *plVar36 = lVar29;
                      if (lVar29 == 0) {
                        uVar21 = 0xffffffff;
                        if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                          uVar21 = *(undefined4 *)(unaff_RBP + -0x640);
                        }
                        *(undefined4 *)(unaff_RBP + -0x640) = uVar21;
                        goto switchD_006f555e_default;
                      }
                      lVar29 = *(long *)(unaff_RBP + -0x630);
                      if (*(long **)(unaff_RBP + -0x6d0) == (long *)0x0) {
LAB_006f983e:
                        puVar46 = (undefined1 *)((long)register0x00000020 + -0x120);
                        *(undefined8 *)((long)register0x00000020 + -8) =
                             *(undefined8 *)((long)register0x00000020 + -8);
                        lVar30 = 1;
                        uVar22 = *(undefined8 *)(unaff_RBP + -0x6d0);
                        *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
                        *(undefined8 *)((long)register0x00000020 + -0x118) = uVar22;
                        *(undefined8 **)(unaff_RBP + -0x6d0) =
                             (undefined8 *)((long)register0x00000020 + -0x120);
                        lVar27 = 0;
                      }
                      else {
                        lVar27 = **(long **)(unaff_RBP + -0x6d0);
                        lVar30 = lVar27 + 1;
                        puVar46 = (undefined1 *)register0x00000020;
                        if (lVar27 == 0x20) goto LAB_006f983e;
                      }
                      plVar36 = *(long **)(unaff_RBP + -0x6d0);
                      lVar42 = *(long *)(unaff_RBP + -0x670);
                      *(undefined8 *)(unaff_RBP + -0x698) = 100;
                      *plVar36 = lVar30;
                      plVar36[lVar27 + 2] = lVar42;
                      register0x00000020 = (BADSPACEBASE *)puVar46;
                    }
                  }
                  if (uVar43 != 0xffffffff) {
                    pbVar45 = *(byte **)(unaff_R12 + 2);
                    if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                      *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                      unaff_R13 = (ulong)*pbVar45;
                    }
                    else {
                      *(long *)(unaff_RBP + -0x630) = lVar29;
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9b72;
                      uVar43 = FUN_007067b0(unaff_R12);
                      lVar29 = *(long *)(unaff_RBP + -0x630);
                      unaff_R13 = (ulong)uVar43;
                      if (uVar43 == 0xffffffff) goto LAB_006f9b88;
                    }
                    if ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 +
                                  (long)(int)unaff_R13 * 2) & 0x20) == 0) {
                      *(long *)(unaff_RBP + -0x648) = lVar29;
                      lVar29 = *(long *)(unaff_RBP + -0x658);
                      iVar40 = *(int *)(unaff_RBP + -0x638);
                      *(uint *)(unaff_RBP + -0x620) = *(uint *)(unaff_RBP + -0x63c) & 0x2100;
                      puVar46 = *(undefined1 **)(unaff_RBP + -0x6c0);
                      do {
                        unaff_R15 = unaff_R15 + 1;
                        if (uVar20 == 0) {
                          iVar49 = *(int *)(unaff_RBP + -0x620);
                          *puVar46 = (char)unaff_R13;
                          puVar46 = puVar46 + 1;
                          if ((iVar49 != 0) &&
                             (lVar30 = **(long **)(unaff_RBP + -0x670),
                             *(long *)(unaff_RBP + -0x630) = *(long *)(unaff_RBP + -0x698),
                             puVar46 == (undefined1 *)(*(long *)(unaff_RBP + -0x698) + lVar30))) {
                            *(uint **)(unaff_RBP + -0x660) = unaff_R12;
                            *(undefined4 *)(unaff_RBP + -0x650) = 0;
                            *(long *)(unaff_RBP + -0x638) = *(long *)(unaff_RBP + -0x698) * 2;
                            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8be6;
                            lVar30 = FUN_00710840();
                            uVar22 = *(undefined8 *)(unaff_RBP + -0x638);
                            uVar20 = *(uint *)(unaff_RBP + -0x650);
                            unaff_R12 = *(uint **)(unaff_RBP + -0x660);
                            if (lVar30 == 0) {
                              *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) + 1;
                              uVar22 = *(undefined8 *)(unaff_RBP + -0x698);
                              *(uint **)(unaff_RBP + -0x650) = unaff_R12;
                              uVar34 = **(undefined8 **)(unaff_RBP + -0x670);
                              *(uint *)(unaff_RBP + -0x638) = uVar20;
                              *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb166;
                              lVar30 = FUN_00710840(uVar34,uVar22);
                              uVar20 = *(uint *)(unaff_RBP + -0x638);
                              unaff_R12 = *(uint **)(unaff_RBP + -0x650);
                              if (lVar30 == 0) {
                                if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                                  plVar36 = *(long **)(unaff_RBP + -0x670);
                                  *(undefined8 *)(unaff_RBP + -0x670) = 0;
                                  *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
                                  *(undefined1 *)(*plVar36 + -1 + *(long *)(unaff_RBP + -0x630)) = 0
                                  ;
                                }
                                else {
                                  *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                                }
                                goto switchD_006f555e_default;
                              }
                              **(long **)(unaff_RBP + -0x670) = lVar30;
                              puVar46 = (undefined1 *)(lVar30 + *(long *)(unaff_RBP + -0x630));
                            }
                            else {
                              **(long **)(unaff_RBP + -0x670) = lVar30;
                              puVar46 = (undefined1 *)(lVar30 + *(long *)(unaff_RBP + -0x698));
                              *(undefined8 *)(unaff_RBP + -0x698) = uVar22;
                            }
                          }
                        }
                        if ((0 < iVar40) && (iVar40 = iVar40 + -1, iVar40 == 0)) {
                          *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
                          goto LAB_006f7aa5;
                        }
                        pbVar45 = *(byte **)(unaff_R12 + 2);
                        if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                          *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                          unaff_R13 = (ulong)*pbVar45;
                        }
                        else {
                          *(uint *)(unaff_RBP + -0x638) = uVar20;
                          *(uint **)(unaff_RBP + -0x630) = unaff_R12;
                          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7a6b;
                          uVar43 = FUN_007067b0(unaff_R12);
                          unaff_R12 = *(uint **)(unaff_RBP + -0x630);
                          uVar20 = *(uint *)(unaff_RBP + -0x638);
                          unaff_R13 = (ulong)uVar43;
                          if (uVar43 == 0xffffffff) {
                            unaff_R13 = 0xffffffff;
                            *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
                            *(undefined4 *)(unaff_RBP + -0x600) =
                                 *(undefined4 *)(in_FS_OFFSET + *(long *)(unaff_RBP + -0x648));
                            goto LAB_006f7aa5;
                          }
                        }
                      } while ((*(byte *)(*(long *)(lVar29 + 0x68) + 1 + (long)(int)unaff_R13 * 2) &
                               0x20) == 0);
                      *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
                    }
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f981c;
                    FUN_007075f0(unaff_R12,unaff_R13 & 0xff);
                    goto LAB_006f7aa5;
                  }
                  *(undefined4 *)(in_FS_OFFSET + lVar29) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f9b88:
                  iVar40 = -1;
                  if (*(int *)(unaff_RBP + -0x640) != 0) {
                    iVar40 = *(int *)(unaff_RBP + -0x640);
                  }
                  *(int *)(unaff_RBP + -0x640) = iVar40;
                  goto switchD_006f555e_default;
                }
switchD_006f5e94_caseD_53:
                uVar20 = *(uint *)(unaff_RBP + -0x63c) & 8;
                *(uint *)(unaff_RBP + -0x610) = uVar20;
                if (uVar20 != 0) goto LAB_006f59dc;
                if ((*(uint *)(unaff_RBP + -0x63c) & 0x2100) != 0) {
                  if (*(int *)(unaff_RBP + -0x68c) != 0) {
                    puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                    uVar34 = *puVar25;
                    uVar4 = puVar25[1];
                    *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                    *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                    uVar22 = puVar25[2];
                    *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
                    *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
                    *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                    uVar20 = *(uint *)(unaff_RBP + -0x540);
                    iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                    if (iVar40 == 0) goto LAB_006f8c95;
                    lVar29 = *(long *)(unaff_RBP + -0x538);
                    bVar51 = false;
                    uVar19 = uVar20;
                    goto LAB_006f8c7a;
                  }
                  uVar20 = *(uint *)(unaff_RBP + -0x5a8);
                  if (uVar20 < 0x30) {
                    puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
                    *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
                  }
                  else {
                    puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                    *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
                  }
                  plVar36 = (long *)*puVar25;
                  *(long **)(unaff_RBP + -0x670) = plVar36;
                  goto LAB_006f5974;
                }
                if (*(int *)(unaff_RBP + -0x68c) != 0) {
                  puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
                  uVar34 = *puVar25;
                  uVar4 = puVar25[1];
                  *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
                  *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
                  uVar22 = puVar25[2];
                  *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
                  *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
                  *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
                  uVar20 = *(uint *)(unaff_RBP + -0x540);
                  iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
                  if (iVar40 == 0) goto LAB_006faaae;
                  lVar29 = *(long *)(unaff_RBP + -0x538);
                  bVar51 = false;
                  uVar19 = uVar20;
                  goto LAB_006faa93;
                }
                uVar20 = *(uint *)(unaff_RBP + -0x5a8);
                if (uVar20 < 0x30) {
                  puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
                  *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
                }
                else {
                  puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                  *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
                }
                *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar25;
                goto LAB_006f8750;
              case 0x75:
                *(undefined4 *)(unaff_RBP + -0x610) = 10;
                goto LAB_006f62d6;
              }
              if (uVar43 != 0xffffffff) {
LAB_006f62d6:
                pbVar45 = *(byte **)(unaff_R12 + 2);
                if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                  *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                  uVar37 = (ulong)*pbVar45;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7721;
                  uVar20 = FUN_007067b0(unaff_R12);
                  uVar37 = (ulong)uVar20;
                  if (uVar20 == 0xffffffff) goto LAB_006f6244;
                }
                unaff_R15 = (byte *)(*(long *)(unaff_RBP + -0x620) + 1);
                if (((int)uVar37 - 0x2bU & 0xfffffffd) == 0) {
                  puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
                  puVar35 = *(undefined1 **)(unaff_RBP + -0x468);
                  if (puVar35 == puVar46) {
                    if (puVar35 != (undefined1 *)0x0) {
                      lVar29 = *(long *)(unaff_RBP + -0x460);
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f87a6;
                      cVar15 = FUN_00712520(unaff_RBP + -0x460);
                      if (cVar15 == '\0') {
                        *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
                      }
                      else {
                        *(undefined1 **)(unaff_RBP + -0x470) =
                             puVar35 + (*(long *)(unaff_RBP + -0x460) - lVar29) + 1;
                        *(long *)(unaff_RBP + -0x468) =
                             *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                        puVar35[*(long *)(unaff_RBP + -0x460) - lVar29] = (char)uVar37;
                      }
                    }
                  }
                  else {
                    *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
                    *puVar46 = (char)uVar37;
                  }
                  pbVar45 = *(byte **)(unaff_R12 + 2);
                  *(uint *)(unaff_RBP + -0x638) =
                       *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
                  if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                    *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                    uVar37 = (ulong)*pbVar45;
LAB_006f6358:
                    unaff_R15 = (byte *)(*(long *)(unaff_RBP + -0x620) + 2);
                    goto LAB_006f6363;
                  }
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6dff;
                  uVar26 = FUN_007067b0(unaff_R12);
                  uVar37 = uVar26 & 0xffffffff;
                  if ((int)uVar26 != -1) goto LAB_006f6358;
                  bVar51 = false;
                  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
LAB_006f6e1e:
                  if (*(int *)(unaff_RBP + -0x610) != 0) {
LAB_006f765a:
                    if (*(int *)(unaff_RBP + -0x610) == 10) goto LAB_006f6e2c;
LAB_006f641c:
                    uVar20 = (uint)uVar37;
                    if (bVar51 == false) {
LAB_006f813c:
                      pcVar48 = *(char **)(unaff_RBP + -0x470);
                    }
                    else {
LAB_006f6424:
                      uVar37 = (ulong)uVar20;
                      iVar40 = *(int *)(unaff_RBP + -0x638);
                      *(uint *)(unaff_RBP + -0x650) = *(uint *)(unaff_RBP + -0x63c) & 0x80;
                      *(long *)(unaff_RBP + -0x648) = unaff_RBP + -0x460;
                      do {
                        uVar20 = (uint)uVar37;
                        if (*(int *)(unaff_RBP + -0x610) != 0x10) {
                          if ((uVar20 - 0x30 < 10) &&
                             ((int)(uVar20 - 0x2f) <= *(int *)(unaff_RBP + -0x610)))
                          goto LAB_006f647d;
                          if (*(int *)(unaff_RBP + -0x610) != 10) {
                            *(int *)(unaff_RBP + -0x638) = iVar40;
                            pcVar48 = *(char **)(unaff_RBP + -0x470);
                            *(undefined4 *)(unaff_RBP + -0x610) = 8;
                            goto LAB_006f651d;
                          }
                          if (*(int *)(unaff_RBP + -0x650) != 0) {
                            pbVar45 = *(byte **)(unaff_RBP + -0x680);
                            iVar49 = 0x7fffffff;
                            if (0 < iVar40) {
                              iVar49 = iVar40;
                            }
                            if (uVar20 == *pbVar45) {
                              *(int *)(unaff_RBP + -0x630) = iVar40;
                              unaff_R13 = uVar37;
                              do {
                                uVar20 = (uint)unaff_R13;
                                puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
                                uVar50 = (undefined1)unaff_R13;
                                if (puVar46 == *(undefined1 **)(unaff_RBP + -0x468)) {
                                  *(undefined1 *)(unaff_RBP + -0x620) = uVar50;
                                  if (puVar46 != (undefined1 *)0x0) {
                                    uVar22 = *(undefined8 *)(unaff_RBP + -0x648);
                                    *(long *)(unaff_RBP + -0x638) =
                                         (long)puVar46 - *(long *)(unaff_RBP + -0x460);
                                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6be3;
                                    cVar15 = FUN_00712520(uVar22);
                                    uVar37 = (ulong)*(byte *)(unaff_RBP + -0x620);
                                    if (cVar15 == '\0') {
                                      *(undefined1 (*) [16])(unaff_RBP + -0x470) =
                                           (undefined1  [16])0x0;
                                      goto LAB_006f6b5e;
                                    }
                                    puVar46 = (undefined1 *)
                                              (*(long *)(unaff_RBP + -0x638) +
                                              *(long *)(unaff_RBP + -0x460));
                                    *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
                                    *(long *)(unaff_RBP + -0x468) =
                                         *(long *)(unaff_RBP + -0x460) +
                                         *(long *)(unaff_RBP + -0x458);
                                    *puVar46 = uVar50;
                                    if (pbVar45[1] != 0) goto LAB_006f6b6d;
                                    goto LAB_006f6c36;
                                  }
                                  if (pbVar45[1] == 0) goto LAB_006f6c55;
                                }
                                else {
                                  *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
                                  *puVar46 = uVar50;
                                  uVar37 = unaff_R13;
LAB_006f6b5e:
                                  if (pbVar45[1] == 0) {
LAB_006f6c36:
                                    pcVar48 = *(char **)(unaff_RBP + -0x470);
                                    iVar40 = *(int *)(unaff_RBP + -0x630);
                                    if (pcVar48 == (char *)0x0) goto LAB_006f6c55;
                                    goto LAB_006f6cc7;
                                  }
                                }
LAB_006f6b6d:
                                pbVar45 = pbVar45 + 1;
                                if (iVar49 == 0) {
                                  pcVar48 = *(char **)(unaff_RBP + -0x470);
                                  *(undefined4 *)(unaff_RBP + -0x638) =
                                       *(undefined4 *)(unaff_RBP + -0x630);
                                  if (pcVar48 == (char *)0x0) goto LAB_006f6c55;
                                  if (pbVar45 <= *(byte **)(unaff_RBP + -0x680)) goto LAB_006f6526;
                                  *(long *)(unaff_RBP + -0x470) =
                                       (long)pcVar48 -
                                       ((long)pbVar45 - *(long *)(unaff_RBP + -0x680));
                                  uVar37 = unaff_R13;
                                  goto LAB_006f8639;
                                }
                                pbVar47 = *(byte **)(unaff_R12 + 2);
                                if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
                                  *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
                                  uVar37 = (ulong)*pbVar47;
                                }
                                else {
                                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6c80;
                                  uVar20 = FUN_007067b0(unaff_R12);
                                  uVar37 = (ulong)uVar20;
                                  if (uVar20 == 0xffffffff) {
                                    iVar40 = *(int *)(unaff_RBP + -0x630);
                                    *(undefined4 *)(unaff_RBP + -0x600) =
                                         *(undefined4 *)(in_FS_OFFSET + -0x58);
                                    goto LAB_006f6caf;
                                  }
                                }
                                unaff_R15 = unaff_R15 + 1;
                                iVar49 = iVar49 + -1;
                                unaff_R13 = uVar37;
                              } while ((uint)*pbVar45 == (uint)uVar37);
                              iVar40 = *(int *)(unaff_RBP + -0x630);
                            }
LAB_006f6caf:
                            uVar20 = (uint)uVar37;
                            pcVar48 = *(char **)(unaff_RBP + -0x470);
                            if (pcVar48 != (char *)0x0) {
                              if (*pbVar45 == 0) {
LAB_006f6cc7:
                                uVar50 = (undefined1)uVar37;
                                pcVar28 = *(char **)(unaff_RBP + -0x468);
                                pcVar32 = pcVar48 + -1;
                                *(char **)(unaff_RBP + -0x470) = pcVar32;
                                if (0 < iVar40) {
                                  iVar40 = iVar49;
                                }
                                if (pcVar32 == pcVar28) goto LAB_006f6ce9;
                                goto LAB_006f649b;
                              }
                              *(int *)(unaff_RBP + -0x638) = iVar40;
                              unaff_R13 = uVar37;
                              if (*(byte **)(unaff_RBP + -0x680) < pbVar45) {
                                *(long *)(unaff_RBP + -0x470) =
                                     (long)pcVar48 - ((long)pbVar45 - *(long *)(unaff_RBP + -0x680))
                                ;
                                if (uVar20 != 0xffffffff) {
LAB_006f8639:
                                  unaff_R15 = unaff_R15 + -1;
                                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8649;
                                  FUN_007075f0(unaff_R12,uVar37 & 0xff);
                                }
                                pbVar47 = pbVar45 + -1;
                                pbVar41 = pbVar47;
                                if (*(byte **)(unaff_RBP + -0x680) < pbVar47) {
                                  do {
                                    bVar14 = *pbVar41;
                                    pbVar41 = pbVar41 + -1;
                                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8669;
                                    FUN_007075f0(unaff_R12,bVar14);
                                  } while (*(byte **)(unaff_RBP + -0x680) != pbVar41);
                                  lVar29 = (*(long *)(unaff_RBP + -0x680) + 1) - (long)pbVar45;
                                  unaff_R15 = unaff_R15 + lVar29;
                                  pbVar47 = pbVar47 + lVar29;
                                }
                                uVar37 = (ulong)*pbVar47;
                                pcVar48 = *(char **)(unaff_RBP + -0x470);
                                goto LAB_006f651d;
                              }
                              goto LAB_006f6526;
                            }
LAB_006f6c55:
                            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
                            *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                            goto switchD_006f555e_default;
                          }
                          break;
                        }
                        if ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 +
                                      (long)(int)uVar20 * 2) & 0x10) == 0) break;
LAB_006f647d:
                        pcVar32 = *(char **)(unaff_RBP + -0x470);
                        pcVar28 = *(char **)(unaff_RBP + -0x468);
                        uVar50 = (undefined1)uVar37;
                        if (pcVar32 == pcVar28) {
                          if (pcVar28 != (char *)0x0) {
LAB_006f6ce9:
                            uVar22 = *(undefined8 *)(unaff_RBP + -0x648);
                            *(undefined1 *)(unaff_RBP + -0x630) = uVar50;
                            lVar29 = *(long *)(unaff_RBP + -0x460);
                            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6d03;
                            cVar15 = FUN_00712520(uVar22);
                            if (cVar15 == '\0') {
                              *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
                            }
                            else {
                              *(char **)(unaff_RBP + -0x470) =
                                   pcVar28 + (*(long *)(unaff_RBP + -0x460) - lVar29) + 1;
                              *(long *)(unaff_RBP + -0x468) =
                                   *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                              pcVar28[*(long *)(unaff_RBP + -0x460) - lVar29] =
                                   *(char *)(unaff_RBP + -0x630);
                            }
                          }
                        }
                        else {
                          pcVar48 = pcVar32 + 1;
LAB_006f649b:
                          *(char **)(unaff_RBP + -0x470) = pcVar48;
                          *pcVar32 = (char)uVar37;
                        }
                        iVar40 = iVar40 - (uint)(0 < iVar40);
                        if (uVar20 == 0xffffffff) {
                          *(int *)(unaff_RBP + -0x638) = iVar40;
                          *(undefined4 *)(in_FS_OFFSET + -0x58) =
                               *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f6ae6:
                          pcVar48 = *(char **)(unaff_RBP + -0x470);
                          uVar37 = 0xffffffff;
                          goto LAB_006f651d;
                        }
                        pbVar45 = *(byte **)(unaff_R12 + 2);
                        if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                          *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                          uVar37 = (ulong)*pbVar45;
                        }
                        else {
                          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6d4d;
                          uVar20 = FUN_007067b0(unaff_R12);
                          uVar37 = (ulong)uVar20;
                          if (uVar20 == 0xffffffff) {
                            *(int *)(unaff_RBP + -0x638) = iVar40;
                            *(undefined4 *)(unaff_RBP + -0x600) =
                                 *(undefined4 *)(in_FS_OFFSET + -0x58);
                            goto LAB_006f6ae6;
                          }
                        }
                        unaff_R15 = unaff_R15 + 1;
                      } while (iVar40 != 0);
                      pcVar48 = *(char **)(unaff_RBP + -0x470);
                      *(int *)(unaff_RBP + -0x638) = iVar40;
                    }
                    goto LAB_006f651d;
                  }
LAB_006f6e2c:
                  *(undefined4 *)(unaff_RBP + -0x610) = 10;
                  if ((*(uint *)(unaff_RBP + -0x63c) & 0x400) == 0) goto LAB_006f641c;
                  *(bool *)(unaff_RBP + -0x630) = bVar51;
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6e58;
                  lVar29 = FUN_007712d0("to_inpunct");
                  cVar15 = *(char *)(unaff_RBP + -0x630);
                  *(long *)(unaff_RBP + -0x6a0) = lVar29;
                  iVar40 = *(int *)(*(long *)(unaff_RBP + -0x678) + 0xd8);
                  *(int *)(unaff_RBP + -0x610) = iVar40;
                  *(int *)(unaff_RBP + -0x6e8) = iVar40 + -1;
                  if (lVar29 != 0) {
                    *(byte **)(unaff_RBP + -0x648) = unaff_R15;
                    *(undefined8 *)(unaff_RBP + -0x630) = 0;
                    *(undefined4 *)(unaff_RBP + -0x6e8) = *(undefined4 *)(unaff_RBP + -0x610);
                    *(long *)(unaff_RBP + -0x650) = unaff_RBP + -0x590;
                    *(int *)(unaff_RBP + -0x660) = (int)uVar37;
                    *(char *)(unaff_RBP + -0x668) = cVar15;
                    *(uint **)(unaff_RBP + -0x688) = unaff_R12;
                    do {
                      lVar29 = *(long *)(unaff_RBP + -0x630);
                      lVar30 = *(long *)(*(long *)(unaff_RBP + -0x678) + 0xe0 + lVar29 * 8);
                      uVar22 = *(undefined8 *)(unaff_RBP + -0x6a0);
                      *(long *)(*(long *)(unaff_RBP + -0x650) + lVar29 * 8) = lVar30;
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa498;
                      uVar21 = FUN_00771360((int)lVar29 + 0x30,uVar22);
                      *(undefined8 *)(unaff_RBP + -0x5b0) = 0;
                      *(undefined1 **)((long)register0x00000020 + -8) = &LAB_006fa4ac;
                      lVar29 = FUN_00756c20(unaff_RBP + -0x50,uVar21,
                                            (undefined8 *)(unaff_RBP + -0x5b0));
                      *(long *)(unaff_RBP + -0x620) = lVar29;
                      if (lVar29 == -1) {
                        unaff_R15 = *(byte **)(unaff_RBP + -0x648);
                        uVar37 = (ulong)*(uint *)(unaff_RBP + -0x660);
                        *(undefined8 *)(unaff_RBP + -0x6a0) = 0;
                        cVar15 = *(char *)(unaff_RBP + -0x668);
                        unaff_R12 = *(uint **)(unaff_RBP + -0x688);
                        goto LAB_006f6e8b;
                      }
                      iVar40 = 0;
                      lVar27 = 0;
                      lVar29 = lVar30;
                      if (0 < *(int *)(unaff_RBP + -0x610)) {
                        do {
                          iVar40 = iVar40 + 1;
                          *(undefined1 **)((long)register0x00000020 + -8) = &LAB_006fa4db;
                          lVar27 = thunk_FUN_007129d0(lVar29);
                          lVar29 = lVar29 + 1 + lVar27;
                        } while (*(int *)(unaff_RBP + -0x610) != iVar40);
                        lVar27 = lVar29 - lVar30;
                      }
                      uVar37 = *(long *)(unaff_RBP + -0x620) + 0x18 + lVar27;
                      for (puVar46 = (undefined1 *)register0x00000020;
                          puVar46 !=
                          (undefined1 *)((long)register0x00000020 + -(uVar37 & 0xfffffffffffff000));
                          puVar46 = puVar46 + -0x1000) {
                        *(undefined8 *)(puVar46 + -8) = *(undefined8 *)(puVar46 + -8);
                      }
                      uVar37 = (ulong)((uint)uVar37 & 0xff0);
                      lVar29 = -uVar37;
                      register0x00000020 = (BADSPACEBASE *)(puVar46 + lVar29);
                      if (uVar37 != 0) {
                        *(undefined8 *)(puVar46 + -8) = *(undefined8 *)(puVar46 + -8);
                      }
                      *(long *)(unaff_RBP + -0x6f0) = (long)puVar46 + lVar29;
                      *(undefined8 *)(puVar46 + lVar29 + -8) = 0x6fa557;
                      uVar34 = thunk_FUN_00713820((long)puVar46 + lVar29,lVar30);
                      uVar22 = *(undefined8 *)(unaff_RBP + -0x620);
                      *(undefined8 *)(puVar46 + lVar29 + -8) = 0x6fa569;
                      puVar35 = (undefined1 *)thunk_FUN_00713820(uVar34,unaff_RBP + -0x50,uVar22);
                      uVar22 = *(undefined8 *)(unaff_RBP + -0x6f0);
                      *puVar35 = 0;
                      lVar30 = *(long *)(unaff_RBP + -0x630);
                      *(undefined8 *)(unaff_RBP + -0x540 + lVar30 * 8) = uVar22;
                      lVar30 = lVar30 + 1;
                      *(long *)(unaff_RBP + -0x630) = lVar30;
                    } while (lVar30 != 10);
                    unaff_R15 = *(byte **)(unaff_RBP + -0x648);
                    uVar37 = (ulong)*(uint *)(unaff_RBP + -0x660);
                    cVar15 = *(char *)(unaff_RBP + -0x668);
                    unaff_R12 = *(uint **)(unaff_RBP + -0x688);
                    register0x00000020 = (BADSPACEBASE *)(puVar46 + lVar29);
                  }
LAB_006f6e8b:
                  *(undefined4 *)(unaff_RBP + -0x688) = 0;
                  *(uint *)(unaff_RBP + -0x6f0) = *(uint *)(unaff_RBP + -0x63c) & 0x80;
                  *(long *)(unaff_RBP + -0x650) = unaff_RBP + -0x590;
                  uVar26 = uVar37;
                  if (cVar15 != '\0') {
LAB_006f6ec0:
                    *(undefined8 *)(unaff_RBP + -0x630) = 0;
                    iVar40 = 0x7fffffff;
                    if (0 < *(int *)(unaff_RBP + -0x638)) {
                      iVar40 = *(int *)(unaff_RBP + -0x638);
                    }
                    *(int *)(unaff_RBP + -0x668) = iVar40;
                    *(undefined8 *)(unaff_RBP + -0x648) = *(undefined8 *)(unaff_RBP + -0x650);
LAB_006f6ef8:
                    *(undefined4 *)(unaff_RBP + -0x660) = *(undefined4 *)(unaff_RBP + -0x630);
                    if (*(long *)(unaff_RBP + -0x6a0) == 0) {
                      pbVar45 = *(byte **)(*(long *)(unaff_RBP + -0x678) + 0xe0 +
                                          *(long *)(unaff_RBP + -0x630) * 8);
                    }
                    else {
                      pbVar45 = *(byte **)(unaff_RBP + -0x540 + *(long *)(unaff_RBP + -0x630) * 8);
                    }
                    plVar36 = *(long **)(unaff_RBP + -0x648);
                    iVar40 = *(int *)(unaff_RBP + -0x688);
                    *plVar36 = (long)pbVar45;
                    if (iVar40 != 0) {
                      *(byte **)(unaff_RBP + -0x610) = unaff_R15;
                      *(int *)(unaff_RBP + -0x620) = (int)uVar26;
                      iVar49 = 0;
                      do {
                        iVar49 = iVar49 + 1;
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6f64;
                        lVar29 = thunk_FUN_007129d0(pbVar45);
                        pbVar45 = pbVar45 + lVar29 + 1;
                        *plVar36 = (long)pbVar45;
                      } while (iVar40 != iVar49);
                      unaff_R15 = *(byte **)(unaff_RBP + -0x610);
                      uVar26 = (ulong)*(uint *)(unaff_RBP + -0x620);
                    }
                    if ((uint)*pbVar45 == (uint)uVar26) {
                      iVar40 = *(int *)(unaff_RBP + -0x668);
                      *(byte **)(unaff_RBP + -0x620) = pbVar45;
                      pbVar47 = pbVar45;
                      do {
                        pbVar41 = pbVar47 + 1;
                        if (*pbVar41 == 0) goto LAB_006f7335;
                        if (iVar40 == 0) {
                          pbVar45 = *(byte **)(unaff_RBP + -0x620);
                          pbVar23 = pbVar47;
                          if (pbVar45 < pbVar41) goto LAB_006f74a3;
                          goto LAB_006f7043;
                        }
                        pbVar45 = *(byte **)(unaff_R12 + 2);
                        if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                          *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                          uVar26 = (ulong)*pbVar45;
                          pbVar23 = pbVar47;
                        }
                        else {
                          *(byte **)(unaff_RBP + -0x610) = pbVar47;
                          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7002;
                          uVar20 = FUN_007067b0(unaff_R12);
                          pbVar23 = *(byte **)(unaff_RBP + -0x610);
                          uVar26 = (ulong)uVar20;
                          if (uVar20 == 0xffffffff) {
                            pbVar45 = *(byte **)(unaff_RBP + -0x620);
                            *(undefined4 *)(unaff_RBP + -0x600) =
                                 *(undefined4 *)(in_FS_OFFSET + -0x58);
                            goto LAB_006f7031;
                          }
                        }
                        unaff_R15 = unaff_R15 + 1;
                        iVar40 = iVar40 + -1;
                        pbVar47 = pbVar41;
                      } while ((uint)*pbVar41 == (uint)uVar26);
                      pbVar45 = *(byte **)(unaff_RBP + -0x620);
LAB_006f7031:
                      if (*pbVar41 == 0) goto LAB_006f7335;
                      if (pbVar45 < pbVar41) {
                        if ((int)uVar26 != -1) {
LAB_006f74a3:
                          *(byte **)(unaff_RBP + -0x610) = pbVar23;
                          unaff_R15 = unaff_R15 + -1;
                          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f74ba;
                          FUN_007075f0(unaff_R12,uVar26 & 0xff);
                          pbVar23 = *(byte **)(unaff_RBP + -0x610);
                        }
                        pbVar47 = pbVar23;
                        if (pbVar45 < pbVar23) {
                          do {
                            bVar14 = *pbVar47;
                            pbVar47 = pbVar47 + -1;
                            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f74e1;
                            FUN_007075f0(unaff_R12,bVar14);
                          } while (pbVar47 != pbVar45);
                          unaff_R15 = unaff_R15 + ((long)pbVar45 - (long)pbVar23);
                          pbVar23 = pbVar45;
                        }
                        uVar26 = (ulong)*pbVar23;
                      }
LAB_006f7043:
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f704b;
                      lVar29 = thunk_FUN_007129d0(pbVar45);
                      plVar36 = *(long **)(unaff_RBP + -0x648);
                      *(long *)(unaff_RBP + -0x630) = *(long *)(unaff_RBP + -0x630) + 1;
                      *plVar36 = (long)(pbVar45 + lVar29 + 1);
                      *(long **)(unaff_RBP + -0x648) = plVar36 + 1;
                      if (*(long *)(unaff_RBP + -0x630) == 10) goto code_r0x006f707e;
                      goto LAB_006f6ef8;
                    }
                    if (*pbVar45 != 0) goto LAB_006f7043;
                    iVar40 = *(int *)(unaff_RBP + -0x668);
LAB_006f7335:
                    pcVar32 = *(char **)(unaff_RBP + -0x468);
                    if (*(int *)(unaff_RBP + -0x638) < 1) {
                      iVar40 = *(int *)(unaff_RBP + -0x638);
                    }
                    pcVar28 = *(char **)(unaff_RBP + -0x470);
                    iVar49 = *(int *)(unaff_RBP + -0x660) + 0x30;
                    cVar15 = (char)iVar49;
                    *(int *)(unaff_RBP + -0x638) = iVar40;
                    if (pcVar32 != pcVar28) {
                      pcVar48 = pcVar28 + 1;
                      *(undefined4 *)(unaff_RBP + -0x6e8) = *(undefined4 *)(unaff_RBP + -0x688);
                      goto LAB_006f737d;
                    }
                    *(undefined4 *)(unaff_RBP + -0x6e8) = *(undefined4 *)(unaff_RBP + -0x688);
                    if (pcVar32 != (char *)0x0) goto LAB_006f75a9;
                    if (0 < *(int *)(unaff_RBP + -0x638)) goto LAB_006f7391;
                    goto LAB_006f73a2;
                  }
                  pcVar48 = *(char **)(unaff_RBP + -0x470);
                  goto LAB_006f73db;
                }
LAB_006f6363:
                iVar40 = *(int *)(unaff_RBP + -0x638);
                bVar51 = iVar40 != 0;
                if (((int)uVar37 != 0x30) || (!bVar51)) goto LAB_006f6e1e;
                puVar46 = *(undefined1 **)(unaff_RBP + -0x468);
                *(uint *)(unaff_RBP + -0x638) = iVar40 - (uint)(0 < iVar40);
                puVar35 = *(undefined1 **)(unaff_RBP + -0x470);
                if (puVar46 == puVar35) {
                  if (puVar46 != (undefined1 *)0x0) {
                    lVar29 = *(long *)(unaff_RBP + -0x460);
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8aef;
                    cVar15 = FUN_00712520(unaff_RBP + -0x460);
                    if (cVar15 == '\0') {
                      *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
                    }
                    else {
                      *(undefined1 **)(unaff_RBP + -0x470) =
                           puVar46 + (*(long *)(unaff_RBP + -0x460) - lVar29) + 1;
                      *(long *)(unaff_RBP + -0x468) =
                           *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                      puVar46[*(long *)(unaff_RBP + -0x460) - lVar29] = 0x30;
                    }
                  }
                }
                else {
                  *(undefined1 **)(unaff_RBP + -0x470) = puVar35 + 1;
                  *puVar35 = 0x30;
                }
                pbVar45 = *(byte **)(unaff_R12 + 2);
                if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                  *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                  uVar37 = (ulong)*pbVar45;
LAB_006f63d0:
                  unaff_R15 = unaff_R15 + 1;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7b1f;
                  uVar20 = FUN_007067b0(unaff_R12);
                  uVar37 = (ulong)uVar20;
                  if (uVar20 != 0xffffffff) goto LAB_006f63d0;
                  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                }
                if (*(int *)(unaff_RBP + -0x638) == 0) {
                  if (*(int *)(unaff_RBP + -0x610) != 0) {
                    bVar51 = false;
                    goto LAB_006f765a;
                  }
                  *(undefined4 *)(unaff_RBP + -0x610) = 8;
                  goto LAB_006f813c;
                }
                iVar40 = (int)uVar37;
                if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + (uVar37 & 0xff) * 4)
                    != 0x78) {
                  bVar51 = iVar40 != -1;
                  if (*(int *)(unaff_RBP + -0x610) != 0) goto LAB_006f765a;
                  *(undefined4 *)(unaff_RBP + -0x610) = 8;
                  goto LAB_006f641c;
                }
                bVar51 = iVar40 != -1;
                if ((*(byte *)(unaff_RBP + -0x610) & 10) != 0) goto LAB_006f765a;
                *(uint *)(unaff_RBP + -0x638) =
                     *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
                if (iVar40 != -1) {
                  pbVar45 = *(byte **)(unaff_R12 + 2);
                  if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                    *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                    uVar37 = (ulong)*pbVar45;
                  }
                  else {
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa83d;
                    uVar20 = FUN_007067b0(unaff_R12);
                    uVar37 = (ulong)uVar20;
                    if (uVar20 == 0xffffffff) {
                      pcVar48 = *(char **)(unaff_RBP + -0x470);
                      uVar21 = *(undefined4 *)(in_FS_OFFSET + -0x58);
                      *(undefined4 *)(unaff_RBP + -0x610) = 0x10;
                      *(undefined4 *)(unaff_RBP + -0x600) = uVar21;
                      goto LAB_006f651d;
                    }
                  }
                  uVar20 = (uint)uVar37;
                  unaff_R15 = unaff_R15 + 1;
                  *(undefined4 *)(unaff_RBP + -0x610) = 0x10;
                  if (*(int *)(unaff_RBP + -0x638) == 0) goto LAB_006f813c;
                  goto LAB_006f6424;
                }
                *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
                pcVar48 = *(char **)(unaff_RBP + -0x470);
                *(undefined4 *)(unaff_RBP + -0x610) = 0x10;
                goto LAB_006f651d;
              }
LAB_006f623a:
              *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f6244:
              iVar40 = -1;
              if (*(int *)(unaff_RBP + -0x640) != 0) {
                iVar40 = *(int *)(unaff_RBP + -0x640);
              }
              *(int *)(unaff_RBP + -0x640) = iVar40;
              break;
            }
            pbVar45 = *(byte **)(unaff_RBP + -0x618);
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f519f;
            uVar22 = thunk_FUN_007129d0(pbVar45);
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f51b1;
            iVar40 = FUN_007569c0(pbVar45,uVar22,unaff_RBP + -0x5b8);
            if (iVar40 < 1) {
              lVar29 = *(long *)(unaff_RBP + -0x618);
              bVar14 = *pbVar45;
              goto joined_r0x006f509a;
            }
            pbVar47 = *(byte **)(unaff_RBP + -0x618);
            pbVar45 = pbVar47 + (ulong)(iVar40 - 1) + 1;
            pbVar41 = pbVar47;
            do {
              if ((int)unaff_R13 == -1) {
                *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f57bd:
                iVar40 = -1;
                if (*(int *)(unaff_RBP + -0x640) != 0) {
                  iVar40 = *(int *)(unaff_RBP + -0x640);
                }
                *(int *)(unaff_RBP + -0x640) = iVar40;
                goto switchD_006f555e_default;
              }
              pbVar23 = *(byte **)(unaff_R12 + 2);
              if (pbVar23 < *(byte **)(unaff_R12 + 4)) {
                *(byte **)(unaff_R12 + 2) = pbVar23 + 1;
                unaff_R13 = (ulong)*pbVar23;
              }
              else {
                *(byte **)(unaff_RBP + -0x618) = pbVar45;
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5d28;
                uVar20 = FUN_007067b0(unaff_R12);
                pbVar45 = *(byte **)(unaff_RBP + -0x618);
                unaff_R13 = (ulong)uVar20;
                if (uVar20 == 0xffffffff) goto LAB_006f57bd;
              }
              pbVar23 = pbVar41 + (long)(unaff_R15 + (1 - (long)pbVar47));
              bVar14 = *pbVar41;
              pbVar41 = pbVar41 + 1;
              if ((uint)bVar14 != (uint)unaff_R13) {
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7e4c;
                FUN_007075f0(unaff_R12,unaff_R13 & 0xff);
                goto switchD_006f555e_default;
              }
            } while (pbVar41 != pbVar45);
            *(byte **)(unaff_RBP + -0x618) = pbVar41;
            unaff_R15 = pbVar23;
          } while( true );
        }
      }
      else {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
      }
      goto switchD_006f555e_default;
    }
LAB_006f82b1:
    unaff_R15 = unaff_R15 + 1;
    if (*(int *)(unaff_RBP + -0x610) != 0) goto code_r0x006f8260;
    *(char *)(unaff_RBP + -0x50) = (char)unaff_R13;
    uVar22 = *(undefined8 *)(unaff_RBP + -0x660);
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f82da;
    lVar29 = FUN_007569f0(unaff_RBX,uVar22,1);
    if (lVar29 != -2) goto code_r0x006f82e4;
    *(long *)(unaff_RBP + -0x650) = *(long *)(unaff_RBP + -0x650) + 1;
    if (0xf < *(ulong *)(unaff_RBP + -0x650)) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f841a;
      FUN_006e2220("cnt < MB_LEN_MAX","vfscanf-internal.c",0xa77,"__vfscanf_internal");
    }
  } while( true );
code_r0x006fb2f0:
  uVar39 = uVar39 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fb319;
  goto LAB_006fb2eb;
code_r0x006fa61d:
  uVar39 = uVar39 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fa62b;
  goto LAB_006fa618;
code_r0x006fc81b:
  uVar43 = uVar43 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fc849;
  goto LAB_006fc816;
code_r0x006fb052:
  uVar43 = uVar43 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fb081;
  goto LAB_006fb04d;
code_r0x006fb3ce:
  uVar43 = uVar43 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fb3f7;
  goto LAB_006fb3c9;
code_r0x006fa1d4:
  uVar43 = uVar43 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fa1e2;
  goto LAB_006fa1cf;
code_r0x006fb4b1:
  uVar39 = uVar39 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fb4e1;
  goto LAB_006fb4ac;
code_r0x006fb579:
  uVar39 = uVar39 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fb5a2;
  goto LAB_006fb574;
code_r0x006f950e:
  *(long *)(unaff_RBP + -0x698) = lVar30;
  unaff_R13 = 0xffffffff;
  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
LAB_006f952c:
  if ((long)puVar46 - **(long **)(unaff_RBP + -0x670) != *(long *)(unaff_RBP + -0x698)) {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f954e;
    lVar29 = FUN_00710840();
    if (lVar29 != 0) {
      **(long **)(unaff_RBP + -0x670) = lVar29;
    }
  }
LAB_006f67ef:
  *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
  *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
  *(undefined4 *)(unaff_RBP + -0x610) = 0;
  *(undefined8 *)(unaff_RBP + -0x670) = 0;
  goto LAB_006f510e;
code_r0x006faf9a:
  uVar39 = uVar39 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fafc3;
  goto LAB_006faf95;
code_r0x006f9e9a:
  uVar39 = uVar39 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006f9ec3;
  goto LAB_006f9e95;
code_r0x006fc9d4:
  uVar39 = uVar39 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fc9fd;
  goto LAB_006fc9cf;
code_r0x006f707e:
  iVar40 = *(int *)(unaff_RBP + -0x688) + 1;
  *(int *)(unaff_RBP + -0x648) = iVar40;
  if (iVar40 <= *(int *)(unaff_RBP + -0x6e8)) {
    do {
      *(undefined8 *)(unaff_RBP + -0x620) = 0;
      do {
        pbVar45 = *(byte **)(*(long *)(unaff_RBP + -0x650) + *(long *)(unaff_RBP + -0x620) * 8);
        *(int *)(unaff_RBP + -0x660) = (int)*(long *)(unaff_RBP + -0x620);
        bVar14 = *pbVar45;
        *(byte **)(unaff_RBP + -0x630) = pbVar45;
        if ((uint)bVar14 == (uint)uVar26) {
          iVar40 = *(int *)(unaff_RBP + -0x668);
          do {
            pbVar47 = pbVar45;
            pbVar45 = pbVar47 + 1;
            if (*pbVar45 == 0) goto LAB_006f7329;
            if (iVar40 == 0) {
              if (*(byte **)(unaff_RBP + -0x630) < pbVar45) goto LAB_006f7403;
              goto LAB_006f718d;
            }
            pbVar41 = *(byte **)(unaff_R12 + 2);
            if (pbVar41 < *(byte **)(unaff_R12 + 4)) {
              *(byte **)(unaff_R12 + 2) = pbVar41 + 1;
              uVar26 = (ulong)*pbVar41;
            }
            else {
              *(byte **)(unaff_RBP + -0x610) = pbVar47;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7152;
              uVar20 = FUN_007067b0(unaff_R12);
              pbVar47 = *(byte **)(unaff_RBP + -0x610);
              uVar26 = (ulong)uVar20;
              if (uVar20 == 0xffffffff) {
                *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                break;
              }
            }
            unaff_R15 = unaff_R15 + 1;
            iVar40 = iVar40 + -1;
          } while ((uint)*pbVar45 == (uint)uVar26);
          if (*pbVar45 == 0) {
LAB_006f7329:
            *(undefined4 *)(unaff_RBP + -0x688) = *(undefined4 *)(unaff_RBP + -0x648);
            goto LAB_006f7335;
          }
          if (*(byte **)(unaff_RBP + -0x630) < pbVar45) {
            if ((int)uVar26 != -1) {
LAB_006f7403:
              unaff_R15 = unaff_R15 + -1;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7413;
              FUN_007075f0(unaff_R12,uVar26 & 0xff);
            }
            pbVar45 = *(byte **)(unaff_RBP + -0x630);
            pbVar41 = pbVar47;
            if (pbVar45 < pbVar47) {
              do {
                bVar14 = *pbVar41;
                pbVar41 = pbVar41 + -1;
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7438;
                FUN_007075f0(unaff_R12,bVar14);
              } while (pbVar45 != pbVar41);
              pbVar41 = *(byte **)(unaff_RBP + -0x630);
              unaff_R15 = unaff_R15 + ((long)pbVar41 - (long)pbVar47);
            }
            uVar26 = (ulong)*pbVar41;
          }
        }
        else if (bVar14 == 0) {
          iVar40 = *(int *)(unaff_RBP + -0x668);
          goto LAB_006f7329;
        }
LAB_006f718d:
        lVar29 = *(long *)(unaff_RBP + -0x630);
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f719c;
        lVar27 = thunk_FUN_007129d0(lVar29);
        lVar30 = *(long *)(unaff_RBP + -0x620);
        *(long *)(*(long *)(unaff_RBP + -0x650) + lVar30 * 8) = lVar29 + 1 + lVar27;
        lVar30 = lVar30 + 1;
        *(long *)(unaff_RBP + -0x620) = lVar30;
      } while (lVar30 != 10);
      *(int *)(unaff_RBP + -0x648) = *(int *)(unaff_RBP + -0x648) + 1;
    } while (*(int *)(unaff_RBP + -0x648) <= *(int *)(unaff_RBP + -0x6e8));
  }
  if (*(int *)(unaff_RBP + -0x6f0) == 0) goto LAB_006f73d1;
  pbVar45 = *(byte **)(unaff_RBP + -0x680);
  iVar40 = 0x7fffffff;
  if (0 < *(int *)(unaff_RBP + -0x638)) {
    iVar40 = *(int *)(unaff_RBP + -0x638);
  }
  if ((uint)*pbVar45 == (uint)uVar26) {
    *(long *)(unaff_RBP + -0x630) = unaff_RBP + -0x460;
    uVar37 = uVar26;
    do {
      iVar49 = (int)uVar37;
      puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
      puVar35 = *(undefined1 **)(unaff_RBP + -0x468);
      uVar50 = (undefined1)uVar37;
      if (puVar35 == puVar46) {
        *(undefined1 *)(unaff_RBP + -0x620) = uVar50;
        if (puVar35 != (undefined1 *)0x0) {
          uVar22 = *(undefined8 *)(unaff_RBP + -0x630);
          *(long *)(unaff_RBP + -0x610) = (long)puVar35 - *(long *)(unaff_RBP + -0x460);
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f72d5;
          cVar15 = FUN_00712520(uVar22);
          bVar14 = *(byte *)(unaff_RBP + -0x620);
          uVar26 = (ulong)bVar14;
          if (cVar15 == '\0') {
            *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
          }
          else {
            puVar46 = (undefined1 *)(*(long *)(unaff_RBP + -0x610) + *(long *)(unaff_RBP + -0x460));
            *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
            *(long *)(unaff_RBP + -0x468) =
                 *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
            *puVar46 = uVar50;
          }
          goto LAB_006f724e;
        }
        if (pbVar45[1] == 0) goto LAB_006f86db;
      }
      else {
        *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
        *puVar46 = uVar50;
        uVar26 = uVar37;
LAB_006f724e:
        if (pbVar45[1] == 0) {
          pcVar48 = *(char **)(unaff_RBP + -0x470);
          if (pcVar48 == (char *)0x0) goto LAB_006f86db;
          goto LAB_006f757b;
        }
      }
      pbVar45 = pbVar45 + 1;
      if (iVar40 == 0) {
        pcVar48 = *(char **)(unaff_RBP + -0x470);
        if (pcVar48 == (char *)0x0) goto LAB_006f86db;
        if (pbVar45 <= *(byte **)(unaff_RBP + -0x680)) goto LAB_006f73db;
        *(long *)(unaff_RBP + -0x470) =
             (long)pcVar48 - ((long)pbVar45 - *(long *)(unaff_RBP + -0x680));
        goto LAB_006fb799;
      }
      pbVar47 = *(byte **)(unaff_R12 + 2);
      if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
        *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
        uVar26 = (ulong)*pbVar47;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f753c;
        uVar20 = FUN_007067b0(unaff_R12);
        uVar26 = (ulong)uVar20;
        if (uVar20 == 0xffffffff) {
          *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
          break;
        }
      }
      unaff_R15 = unaff_R15 + 1;
      iVar40 = iVar40 + -1;
      uVar37 = uVar26;
    } while ((uint)*pbVar45 == (uint)uVar26);
  }
  iVar49 = (int)uVar26;
  pcVar48 = *(char **)(unaff_RBP + -0x470);
  if (pcVar48 == (char *)0x0) {
LAB_006f86db:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    goto switchD_006f555e_default;
  }
  if (*pbVar45 != 0) {
    uVar37 = uVar26;
    if (*(byte **)(unaff_RBP + -0x680) < pbVar45) {
      *(long *)(unaff_RBP + -0x470) =
           (long)pcVar48 - ((long)pbVar45 - *(long *)(unaff_RBP + -0x680));
      if (iVar49 != -1) {
LAB_006fb799:
        unaff_R15 = unaff_R15 + -1;
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb7a9;
        FUN_007075f0(unaff_R12,uVar37 & 0xff);
      }
      pbVar47 = pbVar45 + -1;
      pbVar41 = pbVar47;
      if (*(byte **)(unaff_RBP + -0x680) < pbVar47) {
        do {
          bVar14 = *pbVar41;
          pbVar41 = pbVar41 + -1;
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb6d0;
          FUN_007075f0(unaff_R12,bVar14);
        } while (*(byte **)(unaff_RBP + -0x680) != pbVar41);
        lVar29 = (*(long *)(unaff_RBP + -0x680) + 1) - (long)pbVar45;
        unaff_R15 = unaff_R15 + lVar29;
        pbVar47 = pbVar47 + lVar29;
      }
      uVar37 = (ulong)*pbVar47;
      pcVar48 = *(char **)(unaff_RBP + -0x470);
    }
    goto LAB_006f73db;
  }
LAB_006f757b:
  cVar15 = (char)uVar26;
  pcVar32 = *(char **)(unaff_RBP + -0x468);
  if (*(int *)(unaff_RBP + -0x638) < 1) {
    iVar40 = *(int *)(unaff_RBP + -0x638);
  }
  pcVar28 = pcVar48 + -1;
  *(char **)(unaff_RBP + -0x470) = pcVar28;
  *(int *)(unaff_RBP + -0x638) = iVar40;
  if (pcVar28 == pcVar32) {
LAB_006f75a9:
    *(char *)(unaff_RBP + -0x610) = cVar15;
    lVar29 = *(long *)(unaff_RBP + -0x460);
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f75c3;
    cVar15 = FUN_00712520(unaff_RBP + -0x460);
    if (cVar15 == '\0') {
      *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
    }
    else {
      *(char **)(unaff_RBP + -0x470) = pcVar32 + (*(long *)(unaff_RBP + -0x460) - lVar29) + 1;
      *(long *)(unaff_RBP + -0x468) = *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
      pcVar32[*(long *)(unaff_RBP + -0x460) - lVar29] = *(char *)(unaff_RBP + -0x610);
    }
  }
  else {
LAB_006f737d:
    *(char **)(unaff_RBP + -0x470) = pcVar48;
    *pcVar28 = cVar15;
  }
  if (0 < *(int *)(unaff_RBP + -0x638)) {
LAB_006f7391:
    *(int *)(unaff_RBP + -0x638) = *(int *)(unaff_RBP + -0x638) + -1;
  }
  if (iVar49 != -1) {
LAB_006f73a2:
    pbVar45 = *(byte **)(unaff_R12 + 2);
    if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
      *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
      uVar26 = (ulong)*pbVar45;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7690;
      uVar20 = FUN_007067b0(unaff_R12);
      uVar26 = (ulong)uVar20;
      if (uVar20 == 0xffffffff) {
        *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
        goto LAB_006f7618;
      }
    }
    unaff_R15 = unaff_R15 + 1;
    if (*(int *)(unaff_RBP + -0x638) == 0) goto LAB_006f73d1;
    goto LAB_006f6ec0;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f7618:
  pcVar48 = *(char **)(unaff_RBP + -0x470);
  uVar37 = 0xffffffff;
  goto LAB_006f73db;
LAB_006f73d1:
  pcVar48 = *(char **)(unaff_RBP + -0x470);
  uVar37 = uVar26;
LAB_006f73db:
  *(undefined4 *)(unaff_RBP + -0x610) = 10;
LAB_006f651d:
  unaff_R13 = uVar37;
  if (pcVar48 == (char *)0x0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    goto switchD_006f555e_default;
  }
LAB_006f6526:
  pcVar32 = *(char **)(unaff_RBP + -0x460);
  iVar40 = (int)unaff_R13;
  if (pcVar32 == pcVar48) {
    if ((((*(uint *)(unaff_RBP + -0x63c) & 0x1000) != 0) && (4 < *(uint *)(unaff_RBP + -0x638))) &&
       (iVar40 == 0x28)) {
      lVar29 = *(long *)(*(long *)(unaff_RBP + -0x658) + 0x70);
      pbVar45 = *(byte **)(unaff_R12 + 2);
      if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
        *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
        uVar37 = (ulong)*pbVar45;
        uVar20 = (uint)*pbVar45;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8b96;
        uVar20 = FUN_007067b0(unaff_R12);
        if (uVar20 == 0xffffffff) goto switchD_006f555e_default;
        uVar37 = (ulong)(uVar20 & 0xff);
      }
      if (*(int *)(lVar29 + uVar37 * 4) == 0x6e) {
        lVar29 = *(long *)(*(long *)(unaff_RBP + -0x658) + 0x70);
        pbVar45 = *(byte **)(unaff_R12 + 2);
        if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
          *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
          uVar37 = (ulong)*pbVar45;
          uVar20 = (uint)*pbVar45;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f96db;
          uVar20 = FUN_007067b0(unaff_R12);
          if (uVar20 == 0xffffffff) {
            uVar21 = *(undefined4 *)(in_FS_OFFSET + -0x58);
            if (*(int *)(lVar29 + 0x3fc) != 0x69) goto switchD_006f555e_default;
            iVar40 = *(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + 0x3fc);
            goto joined_r0x006f9714;
          }
          uVar37 = (ulong)(uVar20 & 0xff);
        }
        if (*(int *)(lVar29 + uVar37 * 4) == 0x69) {
          lVar29 = *(long *)(*(long *)(unaff_RBP + -0x658) + 0x70);
          pbVar45 = *(byte **)(unaff_R12 + 2);
          if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
            *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
            uVar37 = (ulong)*pbVar45;
            uVar20 = (uint)*pbVar45;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9628;
            uVar20 = FUN_007067b0(unaff_R12);
            if (uVar20 == 0xffffffff) {
              iVar40 = *(int *)(lVar29 + 0x3fc);
              uVar21 = *(undefined4 *)(in_FS_OFFSET + -0x58);
joined_r0x006f9714:
              if (iVar40 == 0x6c) {
                *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar21;
              }
              goto switchD_006f555e_default;
            }
            uVar37 = (ulong)(uVar20 & 0xff);
          }
          if (*(int *)(lVar29 + uVar37 * 4) == 0x6c) {
            pbVar45 = *(byte **)(unaff_R12 + 2);
            if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
              *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
              unaff_R13 = (ulong)*pbVar45;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f894f;
              uVar20 = FUN_007067b0(unaff_R12);
              unaff_R13 = (ulong)uVar20;
              if (uVar20 == 0xffffffff) goto switchD_006f555e_default;
            }
            unaff_R15 = unaff_R15 + 4;
            uVar20 = (uint)unaff_R13;
            if (uVar20 == 0x29) {
              puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
              if (puVar46 != *(undefined1 **)(unaff_RBP + -0x468)) {
                *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
                *puVar46 = 0x30;
LAB_006f6560:
                pcVar48 = *(char **)(unaff_RBP + -0x470);
                if (pcVar48 != *(char **)(unaff_RBP + -0x468)) goto LAB_006f6574;
                if (pcVar48 == (char *)0x0) goto LAB_006f87e3;
                pcVar32 = *(char **)(unaff_RBP + -0x460);
                goto LAB_006f7b4e;
              }
              if (puVar46 == (undefined1 *)0x0) goto LAB_006f87e3;
              lVar29 = *(long *)(unaff_RBP + -0x460);
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9674;
              cVar15 = FUN_00712520(unaff_RBP + -0x460);
              if (cVar15 != '\0') {
                *(undefined1 **)(unaff_RBP + -0x470) =
                     puVar46 + (*(long *)(unaff_RBP + -0x460) - lVar29) + 1;
                *(long *)(unaff_RBP + -0x468) =
                     *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                puVar46[*(long *)(unaff_RBP + -0x460) - lVar29] = 0x30;
                goto LAB_006f6560;
              }
              goto LAB_006fa321;
            }
          }
        }
      }
      unaff_R13 = (ulong)uVar20;
      goto LAB_006f7c6d;
    }
  }
  else if (((long)pcVar48 - (long)pcVar32 != 1) || ((*pcVar32 - 0x2bU & 0xfd) != 0)) {
    if (iVar40 != -1) {
      unaff_R15 = unaff_R15 + -1;
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6560;
      FUN_007075f0(unaff_R12,unaff_R13 & 0xff);
      goto LAB_006f6560;
    }
    if (*(char **)(unaff_RBP + -0x468) == pcVar48) {
LAB_006f7b4e:
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7b60;
      cVar15 = FUN_00712520(unaff_RBP + -0x460);
      if (cVar15 == '\0') {
LAB_006fa321:
        *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
        goto LAB_006f87e3;
      }
      *(char **)(unaff_RBP + -0x470) = pcVar48 + (*(long *)(unaff_RBP + -0x460) - (long)pcVar32) + 1
      ;
      *(long *)(unaff_RBP + -0x468) = *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
      pcVar48[*(long *)(unaff_RBP + -0x460) - (long)pcVar32] = '\0';
    }
    else {
LAB_006f6574:
      *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
      *pcVar48 = '\0';
    }
    if (*(long *)(unaff_RBP + -0x470) == 0) {
LAB_006f87e3:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
      *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
      goto switchD_006f555e_default;
    }
    uVar22 = *(undefined8 *)(unaff_RBP + -0x460);
    uVar21 = *(undefined4 *)(unaff_RBP + -0x610);
    uVar20 = *(uint *)(unaff_RBP + -0x63c) & 0x40;
    if (uVar20 == 0) {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f773a;
      uVar22 = FUN_006e94f0(uVar22,unaff_RBP + -0x5e8,uVar21);
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f65c2;
      uVar22 = FUN_006e94b0();
    }
    if (*(long *)(unaff_RBP + -0x5e8) == *(long *)(unaff_RBP + -0x460))
    goto switchD_006f555e_default;
    uVar43 = *(uint *)(unaff_RBP + -0x63c) & 8;
    *(uint *)(unaff_RBP + -0x610) = uVar43;
    if (uVar43 != 0) goto LAB_006f6de8;
    uVar43 = *(uint *)(unaff_RBP + -0x63c) & 1;
    if (uVar20 == 0) {
      if (uVar43 == 0) {
        if ((*(byte *)(unaff_RBP + -0x63c) & 4) == 0) {
          if ((*(uint *)(unaff_RBP + -0x63c) & 0x200) != 0) {
            if (*(int *)(unaff_RBP + -0x68c) == 0) goto LAB_006fa29a;
            puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
            uVar4 = *puVar25;
            uVar5 = puVar25[1];
            *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
            *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
            uVar34 = puVar25[2];
            *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
            *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
            *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
            uVar20 = *(uint *)(unaff_RBP + -0x540);
            iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
            if (iVar40 != 0) {
              lVar29 = *(long *)(unaff_RBP + -0x538);
              bVar51 = false;
              uVar43 = uVar20;
              do {
                if (0x2f < uVar43) {
                  lVar30 = lVar29 + 8;
                  if (iVar40 != 1) {
                    lVar27 = lVar29 + 0x10;
                    do {
                      lVar30 = lVar27;
                      lVar27 = lVar30 + 8;
                    } while (lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8 != lVar30 + 8);
                  }
                  goto LAB_006fac56;
                }
                uVar43 = uVar43 + 8;
                bVar51 = true;
                iVar40 = iVar40 + -1;
              } while (iVar40 != 0);
LAB_006fac62:
              uVar20 = uVar43;
              *(uint *)(unaff_RBP + -0x540) = uVar20;
            }
            goto LAB_006fac6a;
          }
          if (*(int *)(unaff_RBP + -0x68c) == 0) goto LAB_006f95f5;
          puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar4 = *puVar25;
          uVar5 = puVar25[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
          uVar34 = puVar25[2];
          *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
          uVar20 = *(uint *)(unaff_RBP + -0x540);
          iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar40 != 0) {
            lVar29 = *(long *)(unaff_RBP + -0x538);
            bVar51 = false;
            uVar43 = uVar20;
            do {
              if (0x2f < uVar43) {
                lVar30 = lVar29 + 8;
                if (iVar40 != 1) {
                  lVar27 = lVar29 + 0x10;
                  do {
                    lVar30 = lVar27;
                    lVar27 = lVar30 + 8;
                  } while (lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8 != lVar30 + 8);
                }
                goto LAB_006fa88d;
              }
              uVar43 = uVar43 + 8;
              bVar51 = true;
              iVar40 = iVar40 + -1;
            } while (iVar40 != 0);
LAB_006fa899:
            uVar20 = uVar43;
            *(uint *)(unaff_RBP + -0x540) = uVar20;
          }
          goto LAB_006fa8a1;
        }
        if (*(int *)(unaff_RBP + -0x68c) != 0) {
          puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar4 = *puVar25;
          uVar5 = puVar25[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
          uVar34 = puVar25[2];
          *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
          uVar20 = *(uint *)(unaff_RBP + -0x540);
          iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar40 != 0) {
            lVar29 = *(long *)(unaff_RBP + -0x538);
            bVar51 = false;
            uVar43 = uVar20;
            do {
              if (0x2f < uVar43) {
                lVar30 = lVar29 + 8;
                if (iVar40 != 1) {
                  lVar27 = lVar29 + 0x10;
                  do {
                    lVar30 = lVar27;
                    lVar27 = lVar30 + 8;
                  } while (lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8 != lVar30 + 8);
                }
                goto LAB_006f97a6;
              }
              uVar43 = uVar43 + 8;
              bVar51 = true;
              iVar40 = iVar40 + -1;
            } while (iVar40 != 0);
LAB_006f97b2:
            uVar20 = uVar43;
            *(uint *)(unaff_RBP + -0x540) = uVar20;
          }
          goto LAB_006f97ba;
        }
LAB_006f881b:
        uVar20 = *(uint *)(unaff_RBP + -0x5a8);
        if (uVar20 < 0x30) {
          puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
          *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
        }
        else {
          puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
          *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
        }
        puVar31 = (undefined2 *)*puVar25;
        goto LAB_006f883f;
      }
      if (*(int *)(unaff_RBP + -0x68c) != 0) {
        puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
        uVar4 = *puVar25;
        uVar5 = puVar25[1];
        *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
        uVar34 = puVar25[2];
        *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
        *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
        uVar20 = *(uint *)(unaff_RBP + -0x540);
        iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
        if (iVar40 != 0) {
          lVar29 = *(long *)(unaff_RBP + -0x538);
          bVar51 = false;
          uVar43 = uVar20;
          do {
            if (0x2f < uVar43) {
              lVar30 = lVar29 + 8;
              if (iVar40 != 1) {
                lVar27 = lVar29 + 0x10;
                do {
                  lVar30 = lVar27;
                  lVar27 = lVar30 + 8;
                } while (lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8 != lVar30 + 8);
              }
              goto LAB_006f8a35;
            }
            uVar43 = uVar43 + 8;
            bVar51 = true;
            iVar40 = iVar40 + -1;
          } while (iVar40 != 0);
LAB_006f7f00:
          uVar20 = uVar43;
          *(uint *)(unaff_RBP + -0x540) = uVar20;
        }
        goto LAB_006f7f08;
      }
LAB_006f6611:
      uVar20 = *(uint *)(unaff_RBP + -0x5a8);
      if (uVar20 < 0x30) {
        puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
        *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
      }
      else {
        puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
        *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
      }
      puVar25 = (undefined8 *)*puVar25;
    }
    else {
      if (uVar43 == 0) {
        if ((*(byte *)(unaff_RBP + -0x63c) & 4) == 0) {
          if ((*(uint *)(unaff_RBP + -0x63c) & 0x200) != 0) {
            if (*(int *)(unaff_RBP + -0x68c) == 0) {
LAB_006fa29a:
              uVar20 = *(uint *)(unaff_RBP + -0x5a8);
              if (uVar20 < 0x30) {
                puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
                *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
              }
              else {
                puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
                *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
              }
              *(char *)*puVar25 = (char)uVar22;
              goto LAB_006f6638;
            }
            puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
            uVar4 = *puVar25;
            uVar5 = puVar25[1];
            *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
            *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
            uVar34 = puVar25[2];
            *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
            *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
            *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
            uVar20 = *(uint *)(unaff_RBP + -0x540);
            iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
            if (iVar40 != 0) {
              lVar29 = *(long *)(unaff_RBP + -0x538);
              bVar51 = false;
              uVar43 = uVar20;
LAB_006fa919:
              if (uVar43 < 0x30) goto code_r0x006fa922;
              lVar30 = lVar29 + 8;
              if (iVar40 != 1) {
                lVar27 = lVar29 + 0x10;
                do {
                  lVar30 = lVar27;
                  lVar27 = lVar30 + 8;
                } while (lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8 != lVar30 + 8);
              }
LAB_006fac56:
              *(long *)(unaff_RBP + -0x538) = lVar30;
              if (bVar51) goto LAB_006fac62;
            }
LAB_006fac6a:
            if (uVar20 < 0x30) {
              puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
              *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
            }
            else {
              puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
              *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
            }
            *(char *)*puVar25 = (char)uVar22;
            goto LAB_006f6638;
          }
          if (*(int *)(unaff_RBP + -0x68c) == 0) {
LAB_006f95f5:
            uVar20 = *(uint *)(unaff_RBP + -0x5a8);
            if (uVar20 < 0x30) {
              puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
              *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
            }
            else {
              puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
              *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
            }
            *(int *)*puVar25 = (int)uVar22;
            goto LAB_006f6638;
          }
          puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar4 = *puVar25;
          uVar5 = puVar25[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
          uVar34 = puVar25[2];
          *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
          uVar20 = *(uint *)(unaff_RBP + -0x540);
          iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar40 != 0) {
            lVar29 = *(long *)(unaff_RBP + -0x538);
            bVar51 = false;
            uVar43 = uVar20;
LAB_006f9905:
            if (uVar43 < 0x30) goto code_r0x006f990e;
            lVar30 = lVar29 + 8;
            if (iVar40 != 1) {
              lVar27 = lVar29 + 0x10;
              do {
                lVar30 = lVar27;
                lVar27 = lVar30 + 8;
              } while (lVar30 + 8 != lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8);
            }
LAB_006fa88d:
            *(long *)(unaff_RBP + -0x538) = lVar30;
            if (bVar51) goto LAB_006fa899;
          }
LAB_006fa8a1:
          if (uVar20 < 0x30) {
            puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
            *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
          }
          else {
            puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
            *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
          }
          *(int *)*puVar25 = (int)uVar22;
          goto LAB_006f6638;
        }
        if (*(int *)(unaff_RBP + -0x68c) == 0) goto LAB_006f881b;
        puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
        uVar4 = *puVar25;
        uVar5 = puVar25[1];
        *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
        uVar34 = puVar25[2];
        *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
        *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
        uVar20 = *(uint *)(unaff_RBP + -0x540);
        iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
        if (iVar40 != 0) {
          lVar29 = *(long *)(unaff_RBP + -0x538);
          bVar51 = false;
          uVar43 = uVar20;
LAB_006faa21:
          if (uVar43 < 0x30) goto code_r0x006faa26;
          lVar30 = lVar29 + 8;
          if (iVar40 != 1) {
            lVar27 = lVar29 + 0x10;
            do {
              lVar30 = lVar27;
              lVar27 = lVar30 + 8;
            } while (lVar30 + 8 != lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8);
          }
LAB_006f97a6:
          *(long *)(unaff_RBP + -0x538) = lVar30;
          if (bVar51) goto LAB_006f97b2;
        }
LAB_006f97ba:
        if (uVar20 < 0x30) {
          puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
          *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
        }
        else {
          puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
          *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
        }
        puVar31 = (undefined2 *)*puVar25;
LAB_006f883f:
        *puVar31 = (short)uVar22;
        goto LAB_006f6638;
      }
      if (*(int *)(unaff_RBP + -0x68c) == 0) goto LAB_006f6611;
      puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
      uVar4 = *puVar25;
      uVar5 = puVar25[1];
      *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
      *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
      uVar34 = puVar25[2];
      *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
      *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
      *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
      uVar20 = *(uint *)(unaff_RBP + -0x540);
      iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
      if (iVar40 != 0) {
        lVar29 = *(long *)(unaff_RBP + -0x538);
        bVar51 = false;
        uVar43 = uVar20;
LAB_006f9d02:
        if (uVar43 < 0x30) goto code_r0x006f9d07;
        lVar30 = lVar29 + 8;
        if (iVar40 != 1) {
          lVar27 = lVar29 + 0x10;
          do {
            lVar30 = lVar27;
            lVar27 = lVar30 + 8;
          } while (lVar30 + 8 != lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8);
        }
LAB_006f8a35:
        *(long *)(unaff_RBP + -0x538) = lVar30;
        if (bVar51) goto LAB_006f7f00;
      }
LAB_006f7f08:
      if (uVar20 < 0x30) {
        puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
        *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
      }
      else {
        puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
        *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
      }
      puVar25 = (undefined8 *)*puVar25;
    }
    *puVar25 = uVar22;
LAB_006f6638:
    *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
    goto LAB_006f510e;
  }
  if (iVar40 == -1) goto switchD_006f555e_default;
LAB_006f7c6d:
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7c79;
  FUN_007075f0(unaff_R12,unaff_R13 & 0xff);
  goto switchD_006f555e_default;
code_r0x006fa922:
  uVar43 = uVar43 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fac62;
  goto LAB_006fa919;
code_r0x006f990e:
  uVar43 = uVar43 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fa899;
  goto LAB_006f9905;
code_r0x006faa26:
  uVar43 = uVar43 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006f97b2;
  goto LAB_006faa21;
code_r0x006f9d07:
  uVar43 = uVar43 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006f7f00;
  goto LAB_006f9d02;
LAB_006faa93:
  if (uVar19 < 0x30) goto code_r0x006faa98;
  lVar30 = lVar29 + 8;
  if (iVar40 != 1) {
    lVar27 = lVar29 + 0x10;
    do {
      lVar30 = lVar27;
      lVar27 = lVar30 + 8;
    } while (lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8 != lVar30 + 8);
  }
  *(long *)(unaff_RBP + -0x538) = lVar30;
  if (bVar51) {
LAB_006faaa6:
    uVar20 = uVar19;
    *(uint *)(unaff_RBP + -0x540) = uVar20;
  }
LAB_006faaae:
  if (uVar20 < 0x30) {
    puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
    *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
  }
  else {
    puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
    *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
  }
  *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar25;
LAB_006f8750:
  if (*(long *)(unaff_RBP + -0x6b8) == 0) goto switchD_006f555e_default;
  goto LAB_006f59dc;
code_r0x006faa98:
  uVar19 = uVar19 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006faaa6;
  goto LAB_006faa93;
LAB_006f8c7a:
  if (uVar19 < 0x30) {
    uVar19 = uVar19 + 8;
    bVar51 = true;
    iVar40 = iVar40 + -1;
    if (iVar40 == 0) goto LAB_006f8c8d;
    goto LAB_006f8c7a;
  }
  lVar30 = lVar29 + 8;
  if (iVar40 != 1) {
    lVar27 = lVar29 + 0x10;
    do {
      lVar30 = lVar27;
      lVar27 = lVar30 + 8;
    } while (lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8 != lVar30 + 8);
  }
  *(long *)(unaff_RBP + -0x538) = lVar30;
  if (bVar51) {
LAB_006f8c8d:
    uVar20 = uVar19;
    *(uint *)(unaff_RBP + -0x540) = uVar20;
  }
LAB_006f8c95:
  if (uVar20 < 0x30) {
    puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
    *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
  }
  else {
    puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
    *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
  }
  plVar36 = (long *)*puVar25;
  *(long **)(unaff_RBP + -0x670) = plVar36;
LAB_006f5974:
  if (plVar36 == (long *)0x0) goto switchD_006f555e_default;
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5987;
  lVar29 = FUN_007101b0(400);
  *(long *)(unaff_RBP + -0x6b8) = lVar29;
  *plVar36 = lVar29;
  if (lVar29 == 0) {
    uVar21 = 0xffffffff;
    if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
      uVar21 = *(undefined4 *)(unaff_RBP + -0x640);
    }
    *(undefined4 *)(unaff_RBP + -0x640) = uVar21;
    goto switchD_006f555e_default;
  }
  if (*(long **)(unaff_RBP + -0x6d0) == (long *)0x0) {
LAB_006f8093:
    puVar46 = (undefined1 *)((long)register0x00000020 + -0x120);
    *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
    lVar29 = 1;
    uVar22 = *(undefined8 *)(unaff_RBP + -0x6d0);
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x118) = uVar22;
    *(undefined8 **)(unaff_RBP + -0x6d0) = (undefined8 *)((long)register0x00000020 + -0x120);
    lVar30 = 0;
  }
  else {
    lVar30 = **(long **)(unaff_RBP + -0x6d0);
    lVar29 = lVar30 + 1;
    puVar46 = (undefined1 *)register0x00000020;
    if (lVar30 == 0x20) goto LAB_006f8093;
  }
  plVar36 = *(long **)(unaff_RBP + -0x6d0);
  lVar27 = *(long *)(unaff_RBP + -0x670);
  *(undefined8 *)(unaff_RBP + -0x698) = 100;
  *plVar36 = lVar29;
  plVar36[lVar30 + 2] = lVar27;
  register0x00000020 = (BADSPACEBASE *)puVar46;
LAB_006f59dc:
  if (uVar43 == 0xffffffff) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f6272:
    iVar40 = -1;
    if (*(int *)(unaff_RBP + -0x640) != 0) {
      iVar40 = *(int *)(unaff_RBP + -0x640);
    }
    *(int *)(unaff_RBP + -0x640) = iVar40;
    goto switchD_006f555e_default;
  }
  pbVar45 = *(byte **)(unaff_R12 + 2);
  if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
    *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
    unaff_R13 = (ulong)*pbVar45;
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f85c8;
    uVar20 = FUN_007067b0(unaff_R12);
    unaff_R13 = (ulong)uVar20;
    if (uVar20 == 0xffffffff) goto LAB_006f6272;
  }
  unaff_R15 = unaff_R15 + 1;
  *(undefined8 *)(unaff_RBP + -0x540) = 0;
  *(long *)(unaff_RBP + -0x630) = unaff_RBP + -0x540;
  if ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 + (long)(int)unaff_R13 * 2) &
      0x20) == 0) {
    *(uint *)(unaff_RBP + -0x620) = *(uint *)(unaff_RBP + -0x63c) & 0x2100;
    while( true ) {
      uVar22 = 0;
      if (*(int *)(unaff_RBP + -0x610) == 0) {
        uVar22 = *(undefined8 *)(unaff_RBP + -0x6b8);
      }
      while( true ) {
        *(char *)(unaff_RBP + -0x50) = (char)unaff_R13;
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5a8f;
        lVar29 = FUN_007569f0(uVar22,unaff_RBP + -0x50,1);
        if (lVar29 != -2) break;
        pbVar45 = *(byte **)(unaff_R12 + 2);
        if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
          *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
          unaff_R13 = (ulong)*pbVar45;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5aab;
          uVar20 = FUN_007067b0(unaff_R12);
          unaff_R13 = (ulong)uVar20;
          if (uVar20 == 0xffffffff) {
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
            goto switchD_006f555e_default;
          }
        }
        unaff_R15 = unaff_R15 + 1;
      }
      if (lVar29 != 1) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
        goto switchD_006f555e_default;
      }
      *(long *)(unaff_RBP + -0x6b8) = *(long *)(unaff_RBP + -0x6b8) + 4;
      if ((*(int *)(unaff_RBP + -0x610) == 0) && (*(int *)(unaff_RBP + -0x620) != 0)) {
        lVar30 = **(long **)(unaff_RBP + -0x670);
        lVar29 = *(long *)(unaff_RBP + -0x698) * 4;
        if (*(long *)(unaff_RBP + -0x6b8) == lVar30 + lVar29) {
          lVar27 = *(long *)(unaff_RBP + -0x698);
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbb6b;
          lVar30 = FUN_00710840(lVar30,lVar27 * 8);
          if (lVar30 == 0) {
            *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) + 1;
            uVar22 = **(undefined8 **)(unaff_RBP + -0x670);
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbc01;
            lVar30 = FUN_00710840(uVar22,lVar29 + 4);
            if (lVar30 == 0) {
              if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                plVar36 = *(long **)(unaff_RBP + -0x670);
                *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
                *(undefined8 *)(unaff_RBP + -0x670) = 0;
                *(undefined4 *)(*plVar36 + -4 + lVar29) = 0;
              }
              else {
                *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
              }
              goto switchD_006f555e_default;
            }
            **(long **)(unaff_RBP + -0x670) = lVar30;
            *(long *)(unaff_RBP + -0x6b8) = lVar30 + lVar29;
          }
          else {
            **(long **)(unaff_RBP + -0x670) = lVar30;
            *(long *)(unaff_RBP + -0x6b8) = lVar30 + lVar29;
            *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) * 2;
          }
        }
      }
      if (0 < *(int *)(unaff_RBP + -0x638)) break;
LAB_006f7ce6:
      pbVar45 = *(byte **)(unaff_R12 + 2);
      if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
        *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
        unaff_R13 = (ulong)*pbVar45;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9322;
        uVar20 = FUN_007067b0(unaff_R12);
        unaff_R13 = (ulong)uVar20;
        if (uVar20 == 0xffffffff) {
          *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
          goto LAB_006f7d2d;
        }
      }
      unaff_R15 = unaff_R15 + 1;
      if ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 + (long)(int)unaff_R13 * 2)
          & 0x20) != 0) goto LAB_006f7d1d;
    }
    piVar1 = (int *)(unaff_RBP + -0x638);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) goto LAB_006f7ce6;
  }
  else {
LAB_006f7d1d:
    unaff_R15 = unaff_R15 + -1;
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7d2d;
    FUN_007075f0(unaff_R12,unaff_R13 & 0xff);
  }
LAB_006f7d2d:
  if (*(int *)(unaff_RBP + -0x610) == 0) goto LAB_006f7d3d;
  goto LAB_006f6de8;
code_r0x006fa067:
  uVar19 = uVar19 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fa075;
  goto LAB_006fa062;
code_r0x006f93a6:
  uVar19 = uVar19 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006f93b4;
  goto LAB_006f93a1;
code_r0x006f8cf1:
  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
LAB_006f8d02:
  if (*(int *)(unaff_RBP + -0x610) != 0) goto LAB_006f6de8;
  if ((*(int *)(unaff_RBP + -0x63c) != 0) &&
     (plVar36 = *(long **)(unaff_RBP + -0x670),
     *(long *)(unaff_RBP + -0x6b8) - *plVar36 >> 2 != *(long *)(unaff_RBP + -0x698))) {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8d44;
    lVar29 = FUN_00710840();
    if (lVar29 != 0) {
      *plVar36 = lVar29;
    }
  }
  *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
  *(undefined8 *)(unaff_RBP + -0x670) = 0;
  goto LAB_006f510e;
switchD_006f5835_caseD_2:
  if (uVar43 != 0xffffffff) {
    pbVar45 = *(byte **)(unaff_R12 + 2);
    if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
      *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
      unaff_R13 = (ulong)*pbVar45;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9280;
      uVar37 = FUN_007067b0(unaff_R12);
      unaff_R13 = uVar37 & 0xffffffff;
      if ((int)uVar37 == -1) goto LAB_006f6a7f;
    }
    pbVar45 = unaff_R15 + 1;
    *(uint *)(unaff_RBP + -0x638) =
         *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
    pcVar48 = *(char **)(unaff_RBP + -0x470);
    if (((int)unaff_R13 - 0x2bU & 0xfffffffd) == 0) {
      pcVar32 = *(char **)(unaff_RBP + -0x468);
      if (pcVar32 == pcVar48) {
        if (pcVar32 != (char *)0x0) {
          lVar29 = *(long *)(unaff_RBP + -0x460);
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9dbb;
          cVar15 = FUN_00712520(unaff_RBP + -0x460);
          if (cVar15 == '\0') {
            *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
          }
          else {
            *(char **)(unaff_RBP + -0x470) = pcVar32 + (*(long *)(unaff_RBP + -0x460) - lVar29) + 1;
            *(long *)(unaff_RBP + -0x468) =
                 *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
            pcVar32[*(long *)(unaff_RBP + -0x460) - lVar29] = (char)unaff_R13;
          }
        }
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
        *pcVar48 = (char)unaff_R13;
      }
      if (*(int *)(unaff_RBP + -0x638) == 0) goto switchD_006f555e_default;
      pbVar45 = *(byte **)(unaff_R12 + 2);
      if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
        *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
        uVar37 = (ulong)*pbVar45;
        unaff_R13 = uVar37;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f95c1;
        uVar20 = FUN_007067b0(unaff_R12);
        unaff_R13 = (ulong)uVar20;
        if (uVar20 == 0xffffffff) goto switchD_006f555e_default;
        uVar37 = (ulong)(uVar20 & 0xff);
      }
      pbVar45 = unaff_R15 + 2;
      if (*(int *)(unaff_RBP + -0x638) < 1) {
        *(undefined1 *)(unaff_RBP + -0x668) = 1;
        pcVar48 = *(char **)(unaff_RBP + -0x470);
        *(undefined8 *)(unaff_RBP + -0x620) = 1;
      }
      else {
        *(undefined1 *)(unaff_RBP + -0x668) = 1;
        *(undefined8 *)(unaff_RBP + -0x620) = 1;
        *(int *)(unaff_RBP + -0x638) = *(int *)(unaff_RBP + -0x638) + -1;
        pcVar48 = *(char **)(unaff_RBP + -0x470);
      }
    }
    else {
      *(undefined8 *)(unaff_RBP + -0x620) = 0;
      uVar37 = unaff_R13 & 0xff;
      *(undefined1 *)(unaff_RBP + -0x668) = 0;
    }
    iVar40 = *(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar37 * 4);
    cVar15 = (char)unaff_R13;
    if (iVar40 == 0x6e) {
      if (*(char **)(unaff_RBP + -0x468) == pcVar48) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb923;
        FUN_006f4e40(unaff_RBP + -0x470,(int)cVar15);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
        *pcVar48 = cVar15;
      }
      if (*(int *)(unaff_RBP + -0x638) == 0) goto switchD_006f555e_default;
      pbVar47 = *(byte **)(unaff_R12 + 2);
      if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
        *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
        uVar37 = (ulong)*pbVar47;
        uVar26 = uVar37;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa71f;
        uVar37 = FUN_007067b0(unaff_R12);
        if ((int)uVar37 == -1) goto switchD_006f555e_default;
        uVar26 = uVar37 & 0xff;
      }
      if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar26 * 4) != 0x61)
      goto switchD_006f555e_default;
      pcVar48 = *(char **)(unaff_RBP + -0x470);
      *(uint *)(unaff_RBP + -0x638) =
           *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
      if (pcVar48 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb0fd;
        FUN_006f4e40(unaff_RBP + -0x470,(int)(char)uVar37);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
        *pcVar48 = (char)uVar37;
      }
      if (*(int *)(unaff_RBP + -0x638) == 0) goto switchD_006f555e_default;
      pbVar47 = *(byte **)(unaff_R12 + 2);
      if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
        *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
        uVar37 = (ulong)*pbVar47;
        unaff_R13 = uVar37;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa6fb;
        uVar20 = FUN_007067b0(unaff_R12);
        unaff_R13 = (ulong)uVar20;
        if (uVar20 == 0xffffffff) goto switchD_006f555e_default;
        uVar37 = (ulong)(uVar20 & 0xff);
      }
      unaff_R15 = pbVar45 + 2;
      if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar37 * 4) != 0x6e)
      goto switchD_006f555e_default;
LAB_006f8920:
      pcVar48 = *(char **)(unaff_RBP + -0x470);
      if (pcVar48 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbea7;
        FUN_006f4e40(unaff_RBP + -0x470,(int)(char)unaff_R13);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
        *pcVar48 = (char)unaff_R13;
      }
    }
    else {
      if (iVar40 != 0x69) {
        if ((*(int *)(unaff_RBP + -0x638) == 0) || ((int)unaff_R13 != 0x30)) {
          *(undefined1 *)(unaff_RBP + -0x610) = 0x65;
          cVar15 = '\0';
        }
        else {
          if (*(char **)(unaff_RBP + -0x468) == pcVar48) {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb861;
            FUN_006f4e40(unaff_RBP + -0x470,0x30);
          }
          else {
            *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
            *pcVar48 = '0';
          }
          pbVar47 = *(byte **)(unaff_R12 + 2);
          if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
            *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
            unaff_R13 = (ulong)*pbVar47;
LAB_006f8db7:
            pbVar45 = pbVar45 + 1;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa2ff;
            uVar20 = FUN_007067b0(unaff_R12);
            unaff_R13 = (ulong)uVar20;
            if (uVar20 != 0xffffffff) goto LAB_006f8db7;
            *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
          }
          if (((*(int *)(unaff_RBP + -0x638) < 1) ||
              (iVar40 = *(int *)(unaff_RBP + -0x638) + -1, *(int *)(unaff_RBP + -0x638) = iVar40,
              iVar40 != 0)) &&
             (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + (unaff_R13 & 0xff) * 4) ==
              0x78)) {
            pcVar48 = *(char **)(unaff_RBP + -0x470);
            if (*(char **)(unaff_RBP + -0x468) == pcVar48) {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6fcab0;
              FUN_006f4e40(unaff_RBP + -0x470,(int)(char)unaff_R13);
            }
            else {
              *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
              *pcVar48 = (char)unaff_R13;
            }
            *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) & 0xffffff7f | 0x800;
            if ((int)unaff_R13 == -1) {
              *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
            }
            else {
              pbVar47 = *(byte **)(unaff_R12 + 2);
              if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
                *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
                unaff_R13 = (ulong)*pbVar47;
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6fca67;
                uVar20 = FUN_007067b0(unaff_R12);
                unaff_R13 = (ulong)uVar20;
                if (uVar20 == 0xffffffff) {
                  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                  goto LAB_006faba4;
                }
              }
              pbVar45 = pbVar45 + 1;
            }
LAB_006faba4:
            if (*(int *)(unaff_RBP + -0x638) < 1) {
              *(undefined1 *)(unaff_RBP + -0x610) = 0x70;
              pcVar48 = *(char **)(unaff_RBP + -0x470);
              cVar15 = '\0';
            }
            else {
              *(undefined1 *)(unaff_RBP + -0x610) = 0x70;
              pcVar48 = *(char **)(unaff_RBP + -0x470);
              cVar15 = '\0';
              *(int *)(unaff_RBP + -0x638) = *(int *)(unaff_RBP + -0x638) + -1;
            }
          }
          else {
            *(undefined1 *)(unaff_RBP + -0x610) = 0x65;
            pcVar48 = *(char **)(unaff_RBP + -0x470);
            cVar15 = '\x01';
          }
        }
        if (pcVar48 != (char *)0x0) {
          *(byte **)(unaff_RBP + -0x648) = pbVar45;
          *(undefined1 *)(unaff_RBP + -0x660) = 0;
          uVar20 = *(uint *)(unaff_RBP + -0x63c) & 0x80;
          *(uint *)(unaff_RBP + -0x6a0) = uVar20;
          *(bool *)(unaff_RBP + -0x688) = uVar20 != 0;
          *(undefined1 *)(unaff_RBP + -0x630) = 0;
          iVar40 = *(int *)(unaff_RBP + -0x638);
          *(uint *)(unaff_RBP + -0x650) = *(uint *)(unaff_RBP + -0x63c) & 0x800;
          *(int *)(unaff_RBP + -0x6e8) = (int)*(char *)(unaff_RBP + -0x610);
          do {
            uVar20 = (uint)unaff_R13;
            cVar18 = (char)unaff_R13;
            if (uVar20 - 0x30 < 10) {
              if (pcVar48 == *(char **)(unaff_RBP + -0x468)) {
                lVar29 = *(long *)(unaff_RBP + -0x460);
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9fdf;
                cVar15 = FUN_00712520(unaff_RBP + -0x460);
                if (cVar15 != '\0') {
                  *(char **)(unaff_RBP + -0x470) =
                       pcVar48 + (*(long *)(unaff_RBP + -0x460) - lVar29) + 1;
                  *(long *)(unaff_RBP + -0x468) =
                       *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                  pcVar48[*(long *)(unaff_RBP + -0x460) - lVar29] = cVar18;
                  goto LAB_006f8e66;
                }
                *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
                if (iVar40 == 0) goto LAB_006fb8c9;
              }
              else {
                *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
                *pcVar48 = cVar18;
LAB_006f8e66:
                if (iVar40 == 0) goto LAB_006fb0a8;
              }
              cVar15 = '\x01';
            }
            else {
              if (*(char *)(unaff_RBP + -0x660) == '\0') {
                if ((*(int *)(unaff_RBP + -0x650) == 0) ||
                   ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 +
                              (long)(int)uVar20 * 2) & 0x10) == 0)) {
                  if ((cVar15 == '\0') ||
                     (*(char *)(unaff_RBP + -0x610) !=
                      *(char *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) +
                               (unaff_R13 & 0xff) * 4))) goto LAB_006f8ed8;
                  if (pcVar48 == *(char **)(unaff_RBP + -0x468)) {
                    uVar21 = *(undefined4 *)(unaff_RBP + -0x6e8);
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb434;
                    FUN_006f4e40(unaff_RBP + -0x470,uVar21);
                    *(char *)(unaff_RBP + -0x660) = cVar15;
                    *(char *)(unaff_RBP + -0x630) = cVar15;
                  }
                  else {
                    *(char *)(unaff_RBP + -0x660) = cVar15;
                    *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
                    *(char *)(unaff_RBP + -0x630) = cVar15;
                    *pcVar48 = *(char *)(unaff_RBP + -0x610);
                  }
                }
                else if (pcVar48 == *(char **)(unaff_RBP + -0x468)) {
                  cVar15 = '\x01';
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc7a4;
                  FUN_006f4e40(unaff_RBP + -0x470,(int)cVar18);
                }
                else {
                  cVar15 = '\x01';
                  *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
                  *pcVar48 = cVar18;
                }
              }
              else if ((pcVar48[-1] == *(char *)(unaff_RBP + -0x610)) &&
                      ((uVar20 - 0x2b & 0xfffffffd) == 0)) {
                if (pcVar48 == *(char **)(unaff_RBP + -0x468)) {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc7b9;
                  FUN_006f4e40(unaff_RBP + -0x470,(int)cVar18);
                }
                else {
                  *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
                  *pcVar48 = cVar18;
                }
              }
              else {
LAB_006f8ed8:
                iVar49 = 0x7fffffff;
                if (0 < iVar40) {
                  iVar49 = iVar40;
                }
                if (*(char *)(unaff_RBP + -0x630) == '\0') {
                  pbVar45 = *(byte **)(unaff_RBP + -0x6d8);
                  if (uVar20 == **(byte **)(unaff_RBP + -0x6d8)) {
                    *(char *)(unaff_RBP + -0x638) = cVar15;
                    do {
                      pbVar45 = pbVar45 + 1;
                      if (*pbVar45 == 0) {
                        cVar15 = *(char *)(unaff_RBP + -0x638);
                        cVar18 = **(char **)(unaff_RBP + -0x6d8);
                        goto LAB_006f91fc;
                      }
                      if (iVar49 == 0) {
                        cVar15 = *(char *)(unaff_RBP + -0x638);
                        goto LAB_006fa73b;
                      }
                      pbVar47 = *(byte **)(unaff_R12 + 2);
                      if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
                        *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
                        unaff_R13 = (ulong)*pbVar47;
                      }
                      else {
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f91c6;
                        uVar20 = FUN_007067b0(unaff_R12);
                        unaff_R13 = (ulong)uVar20;
                        if (uVar20 == 0xffffffff) {
                          cVar15 = *(char *)(unaff_RBP + -0x638);
                          *(undefined4 *)(unaff_RBP + -0x600) =
                               *(undefined4 *)(in_FS_OFFSET + -0x58);
                          goto LAB_006f91e9;
                        }
                      }
                      bVar14 = *pbVar45;
                      *(long *)(unaff_RBP + -0x648) = *(long *)(unaff_RBP + -0x648) + 1;
                      iVar49 = iVar49 + -1;
                    } while ((uint)bVar14 == (uint)unaff_R13);
                    cVar15 = *(char *)(unaff_RBP + -0x638);
                  }
LAB_006f91e9:
                  if (*pbVar45 != 0) {
LAB_006fa73b:
                    if (*(int *)(unaff_RBP + -0x6a0) == 0) {
LAB_006f8f03:
                      pbVar47 = *(byte **)(unaff_RBP + -0x680);
                      if (pbVar47 != (byte *)0x0) goto LAB_006f8f16;
                    }
                    else {
                      lVar29 = (long)pbVar45 - (long)*(byte **)(unaff_RBP + -0x6d8);
                      lVar30 = 0;
                      pbVar47 = *(byte **)(unaff_RBP + -0x680);
                      if (lVar29 < 1) {
                        if (pbVar45 == *(byte **)(unaff_RBP + -0x6d8)) goto LAB_006fa792;
                        goto LAB_006f8f03;
                      }
                      do {
                        if (*pbVar47 != *(byte *)(*(long *)(unaff_RBP + -0x6d8) + lVar30))
                        goto LAB_006f8f16;
                        pbVar47 = pbVar47 + 1;
                        lVar30 = (long)pbVar47 - *(long *)(unaff_RBP + -0x680);
                      } while (lVar30 < lVar29);
                      if (lVar30 == lVar29) {
LAB_006fa792:
                        if ((uint)*pbVar47 == (uint)unaff_R13) {
                          *(char *)(unaff_RBP + -0x638) = cVar15;
                          do {
                            pbVar47 = pbVar47 + 1;
                            if (*pbVar47 == 0) {
                              cVar15 = *(char *)(unaff_RBP + -0x638);
                              goto LAB_006f8f1f;
                            }
                            if (iVar49 == 0) {
                              *(int *)(unaff_RBP + -0x638) = iVar40;
                              unaff_R15 = *(byte **)(unaff_RBP + -0x648);
                              bVar14 = *(byte *)(unaff_RBP + -0x630);
                              goto LAB_006fb1ff;
                            }
                            pbVar45 = *(byte **)(unaff_R12 + 2);
                            if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
                              *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
                              unaff_R13 = (ulong)*pbVar45;
                            }
                            else {
                              *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa7f6;
                              uVar20 = FUN_007067b0(unaff_R12);
                              unaff_R13 = (ulong)uVar20;
                              if (uVar20 == 0xffffffff) {
                                cVar15 = *(char *)(unaff_RBP + -0x638);
                                *(undefined4 *)(unaff_RBP + -0x600) =
                                     *(undefined4 *)(in_FS_OFFSET + -0x58);
                                goto LAB_006f8f16;
                              }
                            }
                            bVar14 = *pbVar47;
                            *(long *)(unaff_RBP + -0x648) = *(long *)(unaff_RBP + -0x648) + 1;
                            iVar49 = iVar49 + -1;
                          } while ((uint)bVar14 == (uint)unaff_R13);
                          cVar15 = *(char *)(unaff_RBP + -0x638);
                        }
                      }
LAB_006f8f16:
                      if (*pbVar47 == 0) {
LAB_006f8f1f:
                        pcVar48 = *(char **)(unaff_RBP + -0x680);
                        lVar29 = unaff_RBP + -0x460;
                        cVar18 = *pcVar48;
                        if (cVar18 != '\0') {
                          *(uint **)(unaff_RBP + -0x6f0) = unaff_R12;
                          do {
                            pcVar32 = *(char **)(unaff_RBP + -0x470);
                            if (pcVar32 == *(char **)(unaff_RBP + -0x468)) {
                              if (pcVar32 != (char *)0x0) {
                                *(int *)(unaff_RBP + -0x6fc) = iVar49;
                                *(long *)(unaff_RBP + -0x6f8) = lVar29;
                                *(long *)(unaff_RBP + -0x638) =
                                     (long)pcVar32 - *(long *)(unaff_RBP + -0x460);
                                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9a0c;
                                cVar16 = FUN_00712520();
                                lVar29 = *(long *)(unaff_RBP + -0x6f8);
                                iVar49 = *(int *)(unaff_RBP + -0x6fc);
                                if (cVar16 == '\0') {
                                  *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0
                                  ;
                                }
                                else {
                                  pcVar32 = (char *)(*(long *)(unaff_RBP + -0x638) +
                                                    *(long *)(unaff_RBP + -0x460));
                                  *(char **)(unaff_RBP + -0x470) = pcVar32 + 1;
                                  *(long *)(unaff_RBP + -0x468) =
                                       *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458)
                                  ;
                                  *pcVar32 = cVar18;
                                }
                              }
                            }
                            else {
                              *(char **)(unaff_RBP + -0x470) = pcVar32 + 1;
                              *pcVar32 = cVar18;
                            }
                            cVar18 = pcVar48[1];
                            pcVar48 = pcVar48 + 1;
                          } while (cVar18 != '\0');
                          unaff_R12 = *(uint **)(unaff_RBP + -0x6f0);
                        }
                        if (0 < iVar40) {
                          iVar40 = iVar49;
                        }
                        goto LAB_006f8f93;
                      }
                    }
                    *(int *)(unaff_RBP + -0x638) = iVar40;
                    unaff_R15 = *(byte **)(unaff_RBP + -0x648);
                    bVar14 = *(byte *)(unaff_RBP + -0x630);
                    if ((int)unaff_R13 != -1) {
LAB_006fb1ff:
                      unaff_R15 = unaff_R15 + -1;
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb20f;
                      FUN_007075f0(unaff_R12,unaff_R13 & 0xff);
                    }
                    goto LAB_006f8fcd;
                  }
                  cVar18 = **(char **)(unaff_RBP + -0x6d8);
LAB_006f91fc:
                  if (cVar18 != '\0') {
                    lVar30 = *(long *)(unaff_RBP + -0x6d8);
                    *(uint **)(unaff_RBP + -0x638) = unaff_R12;
                    lVar29 = unaff_RBP + -0x460;
                    do {
                      pcVar48 = *(char **)(unaff_RBP + -0x470);
                      if (pcVar48 == *(char **)(unaff_RBP + -0x468)) {
                        if (pcVar48 != (char *)0x0) {
                          *(int *)(unaff_RBP + -0x6f8) = iVar49;
                          *(long *)(unaff_RBP + -0x6f0) = lVar29;
                          *(long *)(unaff_RBP + -0x630) =
                               (long)pcVar48 - *(long *)(unaff_RBP + -0x460);
                          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9a83;
                          cVar16 = FUN_00712520();
                          lVar29 = *(long *)(unaff_RBP + -0x6f0);
                          iVar49 = *(int *)(unaff_RBP + -0x6f8);
                          if (cVar16 == '\0') {
                            *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
                          }
                          else {
                            pcVar48 = (char *)(*(long *)(unaff_RBP + -0x630) +
                                              *(long *)(unaff_RBP + -0x460));
                            *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
                            *(long *)(unaff_RBP + -0x468) =
                                 *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                            *pcVar48 = cVar18;
                          }
                        }
                      }
                      else {
                        *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
                        *pcVar48 = cVar18;
                      }
                      cVar18 = *(char *)(lVar30 + 1);
                      lVar30 = lVar30 + 1;
                    } while (cVar18 != '\0');
                    unaff_R12 = *(uint **)(unaff_RBP + -0x638);
                  }
                }
                else if (**(byte **)(unaff_RBP + -0x6d8) != 0) goto LAB_006f8f03;
                *(undefined1 *)(unaff_RBP + -0x630) = 1;
                if (0 < iVar40) {
                  iVar40 = iVar49;
                }
              }
LAB_006f8f93:
              if (iVar40 == 0) {
LAB_006fb0a8:
                *(int *)(unaff_RBP + -0x638) = iVar40;
                unaff_R15 = *(byte **)(unaff_RBP + -0x648);
                bVar14 = *(byte *)(unaff_RBP + -0x630);
                goto LAB_006f8fcd;
              }
              if ((int)unaff_R13 == -1) {
                *(int *)(unaff_RBP + -0x638) = iVar40;
                unaff_R15 = *(byte **)(unaff_RBP + -0x648);
                bVar14 = *(byte *)(unaff_RBP + -0x630);
                *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
                goto LAB_006f8fcd;
              }
            }
            pbVar45 = *(byte **)(unaff_R12 + 2);
            if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
              *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
              unaff_R13 = (ulong)*pbVar45;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9088;
              uVar20 = FUN_007067b0(unaff_R12);
              unaff_R13 = (ulong)uVar20;
              if (uVar20 == 0xffffffff) goto code_r0x006f9094;
            }
            *(long *)(unaff_RBP + -0x648) = *(long *)(unaff_RBP + -0x648) + 1;
            pcVar48 = *(char **)(unaff_RBP + -0x470);
            iVar40 = iVar40 - (uint)(0 < iVar40);
            if (pcVar48 == (char *)0x0) break;
          } while( true );
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
        *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
        goto switchD_006f555e_default;
      }
      if (*(char **)(unaff_RBP + -0x468) == pcVar48) {
        if (pcVar48 != (char *)0x0) {
          lVar29 = *(long *)(unaff_RBP + -0x460);
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6fcb5f;
          cVar18 = FUN_00712520(unaff_RBP + -0x460);
          if (cVar18 == '\0') {
            *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
          }
          else {
            *(char **)(unaff_RBP + -0x470) = pcVar48 + (*(long *)(unaff_RBP + -0x460) - lVar29) + 1;
            *(long *)(unaff_RBP + -0x468) =
                 *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
            pcVar48[*(long *)(unaff_RBP + -0x460) - lVar29] = cVar15;
          }
        }
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
        *pcVar48 = cVar15;
      }
      if (*(int *)(unaff_RBP + -0x638) == 0) goto switchD_006f555e_default;
      pbVar47 = *(byte **)(unaff_R12 + 2);
      if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
        *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
        uVar37 = (ulong)*pbVar47;
        uVar26 = uVar37;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa247;
        uVar37 = FUN_007067b0(unaff_R12);
        if ((int)uVar37 == -1) goto switchD_006f555e_default;
        uVar26 = uVar37 & 0xff;
      }
      if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar26 * 4) != 0x6e)
      goto switchD_006f555e_default;
      pcVar48 = *(char **)(unaff_RBP + -0x470);
      *(uint *)(unaff_RBP + -0x638) =
           *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
      if (pcVar48 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb843;
        FUN_006f4e40(unaff_RBP + -0x470,(int)(char)uVar37);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
        *pcVar48 = (char)uVar37;
      }
      if (*(int *)(unaff_RBP + -0x638) == 0) goto switchD_006f555e_default;
      pbVar47 = *(byte **)(unaff_R12 + 2);
      if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
        *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
        uVar37 = (ulong)*pbVar47;
        unaff_R13 = uVar37;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa260;
        uVar20 = FUN_007067b0(unaff_R12);
        unaff_R13 = (ulong)uVar20;
        if (uVar20 == 0xffffffff) goto switchD_006f555e_default;
        uVar37 = (ulong)(uVar20 & 0xff);
      }
      unaff_R15 = pbVar45 + 2;
      if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar37 * 4) != 0x66)
      goto switchD_006f555e_default;
      pcVar48 = *(char **)(unaff_RBP + -0x470);
      *(uint *)(unaff_RBP + -0x638) =
           *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
      if (pcVar48 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6faf47;
        FUN_006f4e40(unaff_RBP + -0x470,(int)(char)unaff_R13);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
        *pcVar48 = (char)unaff_R13;
      }
      if (*(int *)(unaff_RBP + -0x638) != 0) {
        pbVar47 = *(byte **)(unaff_R12 + 2);
        if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
          *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
          uVar37 = (ulong)*pbVar47;
          unaff_R13 = uVar37;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6faee7;
          uVar20 = FUN_007067b0(unaff_R12);
          unaff_R13 = (ulong)uVar20;
          if (uVar20 == 0xffffffff) {
            *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
            goto LAB_006f611e;
          }
          uVar37 = (ulong)(uVar20 & 0xff);
        }
        if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar37 * 4) == 0x69) {
          pcVar48 = *(char **)(unaff_RBP + -0x470);
          *(uint *)(unaff_RBP + -0x638) =
               *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
          if (pcVar48 == *(char **)(unaff_RBP + -0x468)) {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbe56;
            FUN_006f4e40(unaff_RBP + -0x470,(int)(char)unaff_R13);
          }
          else {
            *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
            *pcVar48 = (char)unaff_R13;
          }
          if (*(int *)(unaff_RBP + -0x638) != 0) {
            pbVar47 = *(byte **)(unaff_R12 + 2);
            if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
              *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
              uVar37 = (ulong)*pbVar47;
              uVar26 = uVar37;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbe31;
              uVar37 = FUN_007067b0(unaff_R12);
              if ((int)uVar37 == -1) goto switchD_006f555e_default;
              uVar26 = uVar37 & 0xff;
            }
            if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar26 * 4) == 0x6e) {
              pcVar48 = *(char **)(unaff_RBP + -0x470);
              *(uint *)(unaff_RBP + -0x638) =
                   *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
              if (pcVar48 == *(char **)(unaff_RBP + -0x468)) {
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbe1c;
                FUN_006f4e40(unaff_RBP + -0x470,(int)(char)uVar37);
              }
              else {
                *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
                *pcVar48 = (char)uVar37;
              }
              if (*(int *)(unaff_RBP + -0x638) != 0) {
                pbVar47 = *(byte **)(unaff_R12 + 2);
                if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
                  *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
                  uVar37 = (ulong)*pbVar47;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbdf4;
                  uVar37 = FUN_007067b0(unaff_R12);
                  if ((int)uVar37 == -1) goto switchD_006f555e_default;
                }
                if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + (uVar37 & 0xff) * 4)
                    == 0x69) {
                  pcVar48 = *(char **)(unaff_RBP + -0x470);
                  *(uint *)(unaff_RBP + -0x638) =
                       *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
                  if (pcVar48 == *(char **)(unaff_RBP + -0x468)) {
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbddf;
                    FUN_006f4e40(unaff_RBP + -0x470,(int)(char)uVar37);
                  }
                  else {
                    *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
                    *pcVar48 = (char)uVar37;
                  }
                  if (*(int *)(unaff_RBP + -0x638) != 0) {
                    pbVar47 = *(byte **)(unaff_R12 + 2);
                    if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
                      *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
                      uVar37 = (ulong)*pbVar47;
                    }
                    else {
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbdb7;
                      uVar37 = FUN_007067b0(unaff_R12);
                      if ((int)uVar37 == -1) goto switchD_006f555e_default;
                    }
                    if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) +
                                (uVar37 & 0xff) * 4) == 0x74) {
                      pcVar48 = *(char **)(unaff_RBP + -0x470);
                      *(uint *)(unaff_RBP + -0x638) =
                           *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
                      if (pcVar48 == *(char **)(unaff_RBP + -0x468)) {
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbda2;
                        FUN_006f4e40(unaff_RBP + -0x470,(int)(char)uVar37);
                      }
                      else {
                        *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
                        *pcVar48 = (char)uVar37;
                      }
                      if (*(int *)(unaff_RBP + -0x638) != 0) {
                        pbVar47 = *(byte **)(unaff_R12 + 2);
                        if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
                          *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
                          unaff_R13 = (ulong)*pbVar47;
                        }
                        else {
                          *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbd77;
                          uVar20 = FUN_007067b0(unaff_R12);
                          unaff_R13 = (ulong)uVar20;
                          if (uVar20 == 0xffffffff) goto switchD_006f555e_default;
                        }
                        unaff_R15 = pbVar45 + 7;
                        if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) +
                                    (unaff_R13 & 0xff) * 4) == 0x79) goto LAB_006f8920;
                      }
                    }
                  }
                }
              }
            }
          }
          goto switchD_006f555e_default;
        }
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fac44;
        FUN_007075f0(unaff_R12,unaff_R13 & 0xff);
      }
    }
LAB_006f611e:
    puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
    if (puVar46 != *(undefined1 **)(unaff_RBP + -0x468)) goto LAB_006f6132;
    if (puVar46 != (undefined1 *)0x0) goto LAB_006f9029;
    goto LAB_006fa36e;
  }
LAB_006f6a75:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f6a7f:
  iVar40 = -1;
  if (*(int *)(unaff_RBP + -0x640) != 0) {
    iVar40 = *(int *)(unaff_RBP + -0x640);
  }
  *(int *)(unaff_RBP + -0x640) = iVar40;
  goto switchD_006f555e_default;
code_r0x006f9094:
  *(int *)(unaff_RBP + -0x638) = iVar40;
  unaff_R15 = *(byte **)(unaff_RBP + -0x648);
  bVar14 = *(byte *)(unaff_RBP + -0x630);
  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
LAB_006f8fcd:
  puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
  if (puVar46 == (undefined1 *)0x0) {
LAB_006fb8c9:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    goto switchD_006f555e_default;
  }
  if ((*(uint *)(unaff_RBP + -0x63c) & 0x400) != 0) {
    if (*(int *)(unaff_RBP + -0x650) != 0) {
      lVar29 = (long)puVar46 - *(long *)(unaff_RBP + -0x460);
      if (lVar29 == *(long *)(unaff_RBP + -0x620)) goto switchD_006f555e_default;
      goto LAB_006fbebf;
    }
    if (((long)puVar46 - *(long *)(unaff_RBP + -0x460) != *(long *)(unaff_RBP + -0x620)) &&
       ((bVar14 & 1) == 0)) goto LAB_006f9019;
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbf0d;
    lVar29 = FUN_007712d0("to_inpunct");
    *(long *)(unaff_RBP + -0x668) = lVar29;
    if (lVar29 == 0) goto LAB_006fc008;
    if ((int)unaff_R13 == -1) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
    }
    else {
      pbVar45 = *(byte **)(unaff_R12 + 2);
      if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
        *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
        unaff_R13 = (ulong)*pbVar45;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc705;
        uVar20 = FUN_007067b0(unaff_R12);
        unaff_R13 = (ulong)uVar20;
        if (uVar20 == 0xffffffff) {
          *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
          goto LAB_006fbf45;
        }
      }
      unaff_R15 = unaff_R15 + 1;
    }
LAB_006fbf45:
    uVar22 = *(undefined8 *)(unaff_RBP + -0x668);
    puVar25 = (undefined8 *)(unaff_RBP + -0x5b0);
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbf5d;
    uVar21 = FUN_00771360(0x2e,uVar22);
    *(undefined8 *)(unaff_RBP + -0x5b0) = 0;
    *(undefined4 *)(unaff_RBP + -0x564) = uVar21;
    *(bool *)(unaff_RBP + -0x630) =
         *(long *)(unaff_RBP + -0x470) - *(long *)(unaff_RBP + -0x460) ==
         *(long *)(unaff_RBP + -0x620);
    *(long *)(unaff_RBP + -0x648) = unaff_RBP + -0x485;
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbfa5;
    lVar29 = FUN_00756c20(unaff_RBP + -0x485,uVar21,puVar25);
    if (lVar29 != -1) {
      uVar22 = *(undefined8 *)(unaff_RBP + -0x6d8);
      *(undefined1 *)(unaff_RBP + -0x485 + lVar29) = 0;
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbfc3;
      lVar29 = thunk_FUN_007129d0(uVar22);
      bVar51 = false;
      if (lVar29 + *(long *)(unaff_RBP + -0x620) ==
          *(long *)(unaff_RBP + -0x470) - *(long *)(unaff_RBP + -0x460)) {
        uVar22 = *(undefined8 *)(unaff_RBP + -0x648);
        uVar34 = *(undefined8 *)(unaff_RBP + -0x6d8);
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbff6;
        iVar40 = thunk_FUN_00712780(uVar34,uVar22);
        bVar51 = iVar40 == 0;
      }
      bVar17 = bVar51 | (byte)*(undefined4 *)(unaff_RBP + -0x630);
LAB_006fc004:
      if (bVar17 != 0) {
        lVar29 = 0;
        *(undefined1 *)(unaff_RBP + -0x648) = *(undefined1 *)(unaff_RBP + -0x688);
        *(long *)(unaff_RBP + -0x630) = unaff_RBP + -0x540;
        *(long *)(unaff_RBP + -0x650) = unaff_RBP + -0x590;
        *(long *)(unaff_RBP + -0x6e8) = unaff_RBP + -0x496;
        do {
          *(int *)(unaff_RBP + -0x6a0) = (int)lVar29;
          *(long *)(unaff_RBP + -0x6f8) = lVar29 * 0x11 + *(long *)(unaff_RBP + -0x630);
          if (lVar29 == 10) {
            uVar22 = *(undefined8 *)(unaff_RBP + -0x668);
            *(undefined8 *)(unaff_RBP + -0x6f0) = 10;
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc2a2;
            iVar40 = FUN_00771360(0x2c,uVar22);
            *puVar25 = 0;
            uVar22 = *(undefined8 *)(unaff_RBP + -0x6f8);
            *(int *)(unaff_RBP + -0x568) = iVar40;
            *(byte *)(unaff_RBP + -0x648) = *(byte *)(unaff_RBP + -0x648) & iVar40 != 0;
            uVar21 = *(undefined4 *)(*(long *)(unaff_RBP + -0x650) + 0x28);
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc2d3;
            lVar30 = FUN_00756c20(uVar22,uVar21,puVar25);
            lVar29 = *(long *)(unaff_RBP + -0x6f0);
            if (lVar30 != -1) goto LAB_006fc0e7;
            if (*(char *)(unaff_RBP + -0x648) != '\0') {
              uVar22 = *(undefined8 *)(unaff_RBP + -0x680);
              *(long *)(unaff_RBP + -0x6a0) = lVar29;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc304;
              uVar37 = thunk_FUN_007129d0(uVar22);
              lVar29 = *(long *)(unaff_RBP + -0x6a0);
              if (uVar37 < 0x11) {
                puVar46 = *(undefined1 **)(unaff_RBP + -0x680);
                puVar35 = *(undefined1 **)(unaff_RBP + -0x6e8);
                for (uVar37 = (ulong)((int)uVar37 + 1); uVar37 != 0; uVar37 = uVar37 - 1) {
                  *puVar35 = *puVar46;
                  puVar46 = puVar46 + (ulong)bVar52 * -2 + 1;
                  puVar35 = puVar35 + (ulong)bVar52 * -2 + 1;
                }
              }
              else {
                *(undefined1 *)(unaff_RBP + -0x648) = 0;
              }
            }
          }
          else {
            uVar22 = *(undefined8 *)(unaff_RBP + -0x668);
            *(long *)(unaff_RBP + -0x6f0) = lVar29;
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc0ac;
            uVar21 = FUN_00771360((int)lVar29 + 0x30,uVar22);
            *puVar25 = 0;
            uVar22 = *(undefined8 *)(unaff_RBP + -0x6f8);
            *(undefined4 *)(*(long *)(unaff_RBP + -0x650) + *(long *)(unaff_RBP + -0x6f0) * 4) =
                 uVar21;
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc0d6;
            lVar30 = FUN_00756c20(uVar22,uVar21,puVar25);
            lVar29 = *(long *)(unaff_RBP + -0x6f0);
            if (lVar30 == -1) goto LAB_006fc008;
LAB_006fc0e7:
            *(undefined1 *)(lVar30 + (long)*(int *)(unaff_RBP + -0x6a0) * 0x11 + -0x540 + unaff_RBP)
                 = 0;
          }
          lVar29 = lVar29 + 1;
        } while (lVar29 != 0xb);
        *(int *)(unaff_RBP + -0x6f0) = (int)*(char *)(unaff_RBP + -0x610);
LAB_006fc11d:
        pcVar48 = *(char **)(unaff_RBP + -0x470);
        if (pcVar48 != (char *)0x0) {
          if (*(char *)(unaff_RBP + -0x660) != '\0') {
            if ((pcVar48[-1] == *(char *)(unaff_RBP + -0x610)) &&
               (((int)unaff_R13 - 0x2bU & 0xfffffffd) == 0)) {
              if (*(char **)(unaff_RBP + -0x468) == pcVar48) {
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc669;
                FUN_006f4e40(unaff_RBP + -0x470,(int)(char)unaff_R13);
              }
              else {
                *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
                *pcVar48 = (char)unaff_R13;
              }
              goto LAB_006fc3c9;
            }
LAB_006fc14a:
            pbVar45 = *(byte **)(unaff_RBP + -0x630);
            *(byte *)(unaff_RBP + -0x668) = bVar14;
            iVar40 = 0x7fffffff;
            if (0 < *(int *)(unaff_RBP + -0x638)) {
              iVar40 = *(int *)(unaff_RBP + -0x638);
            }
            *(undefined4 *)(unaff_RBP + -0x648) = 0;
            *(int *)(unaff_RBP + -0x6a0) = iVar40;
            do {
              *(byte **)(unaff_RBP + -0x650) = pbVar45;
              iVar40 = *(int *)(unaff_RBP + -0x6a0);
              *(long *)(unaff_RBP + -0x6e8) = (long)unaff_R15 - (long)pbVar45;
              while (unaff_R15 = pbVar45 + *(long *)(unaff_RBP + -0x6e8),
                    (uint)*pbVar45 == (uint)unaff_R13) {
                pbVar45 = pbVar45 + 1;
                if (*pbVar45 == 0) {
                  iVar49 = *(int *)(unaff_RBP + -0x648);
                  bVar14 = *(byte *)(unaff_RBP + -0x668);
                  goto LAB_006fc38b;
                }
                if (iVar40 == 0) {
                  pbVar47 = *(byte **)(unaff_RBP + -0x650);
                  if (pbVar47 < pbVar45) goto LAB_006fc426;
                  goto LAB_006fc225;
                }
                pbVar47 = *(byte **)(unaff_R12 + 2);
                if (pbVar47 < *(byte **)(unaff_R12 + 4)) {
                  *(byte **)(unaff_R12 + 2) = pbVar47 + 1;
                  unaff_R13 = (ulong)*pbVar47;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc1f0;
                  uVar20 = FUN_007067b0(unaff_R12);
                  unaff_R13 = (ulong)uVar20;
                  if (uVar20 == 0xffffffff) {
                    pbVar47 = *(byte **)(unaff_RBP + -0x650);
                    *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                    goto LAB_006fc212;
                  }
                }
                iVar40 = iVar40 + -1;
              }
              pbVar47 = *(byte **)(unaff_RBP + -0x650);
LAB_006fc212:
              if (*pbVar45 == 0) goto LAB_006fc374;
              if (pbVar47 < pbVar45) {
                pbVar41 = pbVar45;
                if ((int)unaff_R13 != -1) {
LAB_006fc426:
                  *(uint **)(unaff_RBP + -0x650) = unaff_R12;
                  unaff_R15 = unaff_R15 + -1;
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc43d;
                  FUN_007075f0(unaff_R12,unaff_R13 & 0xff);
                  unaff_R12 = *(uint **)(unaff_RBP + -0x650);
                  pbVar41 = pbVar45;
                }
                while (pbVar45 = pbVar45 + -1, pbVar47 != pbVar45) {
                  bVar14 = *pbVar45;
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc354;
                  FUN_007075f0(unaff_R12,bVar14);
                }
                unaff_R13 = (ulong)*pbVar47;
                unaff_R15 = pbVar47 + (long)(unaff_R15 + (1 - (long)pbVar41));
              }
LAB_006fc225:
              *(int *)(unaff_RBP + -0x648) = *(int *)(unaff_RBP + -0x648) + 1;
              pbVar45 = pbVar47 + 0x11;
            } while (*(int *)(unaff_RBP + -0x648) != 0xc);
            goto LAB_006fc245;
          }
          if (((ulong)((long)pcVar48 - *(long *)(unaff_RBP + -0x460)) <=
               *(ulong *)(unaff_RBP + -0x620)) ||
             (*(char *)(unaff_RBP + -0x610) !=
              *(char *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + (unaff_R13 & 0xff) * 4)))
          goto LAB_006fc14a;
          if (*(char **)(unaff_RBP + -0x468) == pcVar48) {
            uVar21 = *(undefined4 *)(unaff_RBP + -0x6f0);
            bVar14 = 1;
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc686;
            FUN_006f4e40(unaff_RBP + -0x470,uVar21);
            *(undefined1 *)(unaff_RBP + -0x660) = 1;
          }
          else {
            *(undefined1 *)(unaff_RBP + -0x660) = 1;
            bVar14 = 1;
            *(char **)(unaff_RBP + -0x470) = pcVar48 + 1;
            *pcVar48 = *(char *)(unaff_RBP + -0x610);
          }
          goto LAB_006fc3c9;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
        *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
        goto switchD_006f555e_default;
      }
      goto LAB_006fc008;
    }
    uVar22 = *(undefined8 *)(unaff_RBP + -0x6d8);
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc6b4;
    uVar37 = thunk_FUN_007129d0(uVar22);
    puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
    if (uVar37 < 0x11) {
      lVar29 = *(long *)(unaff_RBP + -0x620);
      lVar30 = *(long *)(unaff_RBP + -0x460);
      puVar35 = *(undefined1 **)(unaff_RBP + -0x6d8);
      puVar44 = *(undefined1 **)(unaff_RBP + -0x648);
      for (uVar26 = (ulong)((int)uVar37 + 1); uVar26 != 0; uVar26 = uVar26 - 1) {
        *puVar44 = *puVar35;
        puVar35 = puVar35 + (ulong)bVar52 * -2 + 1;
        puVar44 = puVar44 + (ulong)bVar52 * -2 + 1;
      }
      bVar17 = (long)puVar46 - lVar30 == lVar29 + uVar37 | (byte)*(undefined4 *)(unaff_RBP + -0x630)
      ;
      goto LAB_006fc004;
    }
    goto LAB_006fc00f;
  }
  lVar29 = (long)puVar46 - *(long *)(unaff_RBP + -0x460);
  if (lVar29 == *(long *)(unaff_RBP + -0x620)) goto switchD_006f555e_default;
  if (*(int *)(unaff_RBP + -0x650) != 0) {
LAB_006fbebf:
    if ((char)(*(char *)(unaff_RBP + -0x668) + '\x02') == lVar29) goto switchD_006f555e_default;
  }
LAB_006f9019:
  if (*(undefined1 **)(unaff_RBP + -0x468) == puVar46) {
LAB_006f9029:
    lVar29 = *(long *)(unaff_RBP + -0x460);
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f903f;
    cVar15 = FUN_00712520(unaff_RBP + -0x460);
    if (cVar15 == '\0') {
      *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
      goto LAB_006fa36e;
    }
    *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + (*(long *)(unaff_RBP + -0x460) - lVar29) + 1;
    *(long *)(unaff_RBP + -0x468) = *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
    puVar46[*(long *)(unaff_RBP + -0x460) - lVar29] = 0;
  }
  else {
LAB_006f6132:
    *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
    *puVar46 = 0;
  }
  if (*(long *)(unaff_RBP + -0x470) == 0) {
LAB_006fa36e:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    goto switchD_006f555e_default;
  }
  uVar20 = *(uint *)(unaff_RBP + -0x63c);
  uVar22 = *(undefined8 *)(unaff_RBP + -0x460);
  uVar43 = uVar20 & 8;
  if ((uVar20 & 2) != 0) {
    if (*(int *)(unaff_RBP + -0x6dc) != 0) {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa968;
      uVar22 = FUN_007920d0(uVar22,unaff_RBP + -0x5e8,uVar20 & 0x80);
      Var7 = in_ST0;
      Var8 = in_ST1;
      Var9 = in_ST2;
      Var10 = in_ST3;
      Var11 = in_ST4;
      Var12 = in_ST5;
      Var13 = in_ST6;
      if (uVar43 == 0) {
        lVar29 = *(long *)(unaff_RBP + -0x5e8);
        if (lVar29 == *(long *)(unaff_RBP + -0x460)) goto switchD_006f555e_default;
        if (*(int *)(unaff_RBP + -0x68c) == 0) {
          uVar20 = *(uint *)(unaff_RBP + -0x5a8);
          if (uVar20 < 0x30) {
            plVar36 = (long *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
            *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
          }
          else {
            plVar36 = *(long **)(unaff_RBP + -0x5a0);
            *(long **)(unaff_RBP + -0x5a0) = plVar36 + 1;
          }
          puVar25 = (undefined8 *)*plVar36;
        }
        else {
          puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar4 = *puVar25;
          uVar5 = puVar25[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
          uVar34 = puVar25[2];
          *(undefined8 *)(unaff_RBP + -0x610) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x608) = uVar5;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
          uVar20 = *(uint *)(unaff_RBP + -0x540);
          iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar40 != 0) {
            lVar30 = *(long *)(unaff_RBP + -0x538);
            bVar51 = false;
            uVar43 = uVar20;
LAB_006fba25:
            if (uVar43 < 0x30) goto code_r0x006fba2a;
            lVar27 = lVar30 + 8;
            if (iVar40 != 1) {
              lVar42 = lVar30 + 0x10;
              do {
                lVar27 = lVar42;
                lVar42 = lVar27 + 8;
              } while (lVar27 + 8 != lVar30 + 0x18 + (ulong)(iVar40 - 2) * 8);
            }
            *(long *)(unaff_RBP + -0x538) = lVar27;
            if (!bVar51) goto LAB_006fba40;
LAB_006fba38:
            uVar20 = uVar43;
            *(uint *)(unaff_RBP + -0x540) = uVar20;
          }
LAB_006fba40:
          if (uVar20 < 0x30) {
            plVar36 = (long *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
            *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
          }
          else {
            plVar36 = *(long **)(unaff_RBP + -0x538);
            *(long **)(unaff_RBP + -0x538) = plVar36 + 1;
          }
          puVar25 = (undefined8 *)*plVar36;
        }
        lVar30 = *(long *)(unaff_RBP + -0x460);
        *puVar25 = uVar22;
        puVar25[1] = extraout_XMM0_Qb;
        goto LAB_006f61f0;
      }
      goto LAB_006f6dd4;
    }
    if (*(int *)(unaff_RBP + -0x6e0) != 0) {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6198;
      FUN_00791e40(uVar22,unaff_RBP + -0x5e8);
      Var7 = in_ST1;
      Var8 = in_ST2;
      Var9 = in_ST3;
      Var10 = in_ST4;
      Var11 = in_ST5;
      Var12 = in_ST6;
      Var13 = in_ST7;
      if (uVar43 != 0) goto LAB_006f6dd4;
      lVar30 = *(long *)(unaff_RBP + -0x460);
      lVar29 = *(long *)(unaff_RBP + -0x5e8);
      if (lVar29 == lVar30) goto switchD_006f555e_default;
      if (*(int *)(unaff_RBP + -0x68c) == 0) {
        uVar20 = *(uint *)(unaff_RBP + -0x5a8);
        if (uVar20 < 0x30) {
          puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
          *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
        }
        else {
          puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
          *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
        }
        pVar24 = (unkbyte10 *)*puVar25;
      }
      else {
        puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
        uVar34 = *puVar25;
        uVar4 = puVar25[1];
        *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
        *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
        uVar22 = puVar25[2];
        *(undefined8 *)(unaff_RBP + -0x610) = uVar34;
        *(undefined8 *)(unaff_RBP + -0x608) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
        uVar20 = *(uint *)(unaff_RBP + -0x540);
        iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
        if (iVar40 != 0) {
          lVar27 = *(long *)(unaff_RBP + -0x538);
          bVar51 = false;
          uVar43 = uVar20;
LAB_006fc8e1:
          if (uVar43 < 0x30) goto code_r0x006fc8e6;
          lVar42 = lVar27 + 8;
          if (iVar40 != 1) {
            lVar6 = lVar27 + 0x10;
            do {
              lVar42 = lVar6;
              lVar6 = lVar42 + 8;
            } while (lVar42 + 8 != lVar27 + 0x18 + (ulong)(iVar40 - 2) * 8);
          }
          *(long *)(unaff_RBP + -0x538) = lVar42;
          if (!bVar51) goto LAB_006fc917;
LAB_006fc90f:
          uVar20 = uVar43;
          *(uint *)(unaff_RBP + -0x540) = uVar20;
        }
LAB_006fc917:
        if (uVar20 < 0x30) {
          puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
          *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
        }
        else {
          puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
          *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
        }
        pVar24 = (unkbyte10 *)*puVar25;
      }
      *pVar24 = in_ST0;
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      in_ST6 = in_ST7;
      goto LAB_006f61f0;
    }
  }
  if ((*(byte *)(unaff_RBP + -0x63c) & 3) == 0) {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa390;
    uVar21 = FUN_00791dc0(uVar22,unaff_RBP + -0x5e8);
    Var7 = in_ST0;
    Var8 = in_ST1;
    Var9 = in_ST2;
    Var10 = in_ST3;
    Var11 = in_ST4;
    Var12 = in_ST5;
    Var13 = in_ST6;
    if (uVar43 != 0) goto LAB_006f6dd4;
    lVar29 = *(long *)(unaff_RBP + -0x5e8);
    if (lVar29 == *(long *)(unaff_RBP + -0x460)) goto switchD_006f555e_default;
    if (*(int *)(unaff_RBP + -0x68c) == 0) {
      uVar20 = *(uint *)(unaff_RBP + -0x5a8);
      if (uVar20 < 0x30) {
        puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
        *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
      }
      else {
        puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
        *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
      }
      puVar33 = (undefined4 *)*puVar25;
    }
    else {
      puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
      uVar34 = *puVar25;
      uVar4 = puVar25[1];
      *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
      *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
      uVar22 = puVar25[2];
      *(undefined8 *)(unaff_RBP + -0x610) = uVar34;
      *(undefined8 *)(unaff_RBP + -0x608) = uVar4;
      *(undefined8 *)(unaff_RBP + -0x530) = uVar22;
      uVar20 = *(uint *)(unaff_RBP + -0x540);
      iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
      if (iVar40 != 0) {
        lVar30 = *(long *)(unaff_RBP + -0x538);
        bVar51 = false;
        uVar43 = uVar20;
LAB_006fbc64:
        if (uVar43 < 0x30) goto code_r0x006fbc69;
        lVar27 = lVar30 + 8;
        if (iVar40 != 1) {
          lVar42 = lVar30 + 0x10;
          do {
            lVar27 = lVar42;
            lVar42 = lVar27 + 8;
          } while (lVar27 + 8 != lVar30 + 0x18 + (ulong)(iVar40 - 2) * 8);
        }
        *(long *)(unaff_RBP + -0x538) = lVar27;
        if (!bVar51) goto LAB_006fbca1;
LAB_006fbc99:
        uVar20 = uVar43;
        *(uint *)(unaff_RBP + -0x540) = uVar20;
      }
LAB_006fbca1:
      if (uVar20 < 0x30) {
        puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
        *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
      }
      else {
        puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
        *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
      }
      puVar33 = (undefined4 *)*puVar25;
    }
    lVar30 = *(long *)(unaff_RBP + -0x460);
    *puVar33 = uVar21;
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f92bc;
    uVar22 = FUN_00791e00();
    Var7 = in_ST0;
    Var8 = in_ST1;
    Var9 = in_ST2;
    Var10 = in_ST3;
    Var11 = in_ST4;
    Var12 = in_ST5;
    Var13 = in_ST6;
    if (uVar43 != 0) {
LAB_006f6dd4:
      in_ST6 = Var13;
      in_ST5 = Var12;
      in_ST4 = Var11;
      in_ST3 = Var10;
      in_ST2 = Var9;
      in_ST1 = Var8;
      in_ST0 = Var7;
      if (*(long *)(unaff_RBP + -0x460) == *(long *)(unaff_RBP + -0x5e8))
      goto switchD_006f555e_default;
      goto LAB_006f6de8;
    }
    lVar29 = *(long *)(unaff_RBP + -0x5e8);
    if (lVar29 == *(long *)(unaff_RBP + -0x460)) goto switchD_006f555e_default;
    if (*(int *)(unaff_RBP + -0x68c) == 0) {
      uVar20 = *(uint *)(unaff_RBP + -0x5a8);
      if (uVar20 < 0x30) {
        puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x598));
        *(uint *)(unaff_RBP + -0x5a8) = uVar20 + 8;
      }
      else {
        puVar25 = *(undefined8 **)(unaff_RBP + -0x5a0);
        *(undefined8 **)(unaff_RBP + -0x5a0) = puVar25 + 1;
      }
      puVar25 = (undefined8 *)*puVar25;
    }
    else {
      puVar25 = *(undefined8 **)(unaff_RBP + -0x6c8);
      uVar4 = *puVar25;
      uVar5 = puVar25[1];
      *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
      *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
      uVar34 = puVar25[2];
      *(undefined8 *)(unaff_RBP + -0x610) = uVar4;
      *(undefined8 *)(unaff_RBP + -0x608) = uVar5;
      *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
      uVar20 = *(uint *)(unaff_RBP + -0x540);
      iVar40 = *(int *)(unaff_RBP + -0x68c) + -1;
      if (iVar40 != 0) {
        lVar30 = *(long *)(unaff_RBP + -0x538);
        bVar51 = false;
        uVar43 = uVar20;
LAB_006fbafe:
        if (uVar43 < 0x30) goto code_r0x006fbb03;
        lVar27 = lVar30 + 8;
        if (iVar40 != 1) {
          lVar42 = lVar30 + 0x10;
          do {
            lVar27 = lVar42;
            lVar42 = lVar27 + 8;
          } while (lVar27 + 8 != lVar30 + 0x18 + (ulong)(iVar40 - 2) * 8);
        }
        *(long *)(unaff_RBP + -0x538) = lVar27;
        if (!bVar51) goto LAB_006fbb34;
LAB_006fbb2c:
        uVar20 = uVar43;
        *(uint *)(unaff_RBP + -0x540) = uVar20;
      }
LAB_006fbb34:
      if (uVar20 < 0x30) {
        puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
        *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
      }
      else {
        puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
        *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
      }
      puVar25 = (undefined8 *)*puVar25;
    }
    lVar30 = *(long *)(unaff_RBP + -0x460);
    *puVar25 = uVar22;
  }
LAB_006f61f0:
  if (lVar29 == lVar30) goto switchD_006f555e_default;
  *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
  *(undefined4 *)(unaff_RBP + -0x610) = 0;
  goto LAB_006f510e;
LAB_006fc374:
  iVar49 = *(int *)(unaff_RBP + -0x648);
  bVar14 = *(byte *)(unaff_RBP + -0x668);
LAB_006fc38b:
  if (*(int *)(unaff_RBP + -0x638) < 1) {
    iVar40 = *(int *)(unaff_RBP + -0x638);
  }
  *(int *)(unaff_RBP + -0x638) = iVar40;
  if (iVar49 < 10) {
    puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
    if (puVar46 == *(undefined1 **)(unaff_RBP + -0x468)) {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc4b7;
      FUN_006f4e40(unaff_RBP + -0x470,iVar49 + 0x30U & 0xff);
    }
    else {
      *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
      *puVar46 = (char)(iVar49 + 0x30U);
    }
  }
  else if ((iVar49 == 0xb) && ((bVar14 & 1) == 0)) {
    for (pcVar48 = *(char **)(unaff_RBP + -0x6d8); cVar15 = *pcVar48, cVar15 != '\0';
        pcVar48 = pcVar48 + 1) {
      pcVar32 = *(char **)(unaff_RBP + -0x470);
      if (pcVar32 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc595;
        FUN_006f4e40(unaff_RBP + -0x470,(int)cVar15);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar32 + 1;
        *pcVar32 = cVar15;
      }
    }
    bVar14 = 1;
  }
  else {
    if (((*(byte *)(unaff_RBP + -0x688) & (bVar14 ^ 1)) == 0) || (iVar49 != 10)) {
LAB_006fc245:
      if ((int)unaff_R13 == -1) goto LAB_006fc008;
      unaff_R15 = unaff_R15 + -1;
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc25f;
      FUN_007075f0(unaff_R12,unaff_R13 & 0xff);
      puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
      goto LAB_006fc00f;
    }
    *(uint **)(unaff_RBP + -0x648) = unaff_R12;
    for (pcVar48 = *(char **)(unaff_RBP + -0x680); cVar15 = *pcVar48, cVar15 != '\0';
        pcVar48 = pcVar48 + 1) {
      pcVar32 = *(char **)(unaff_RBP + -0x470);
      if (pcVar32 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc588;
        FUN_006f4e40(unaff_RBP + -0x470,(int)cVar15);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar32 + 1;
        *pcVar32 = cVar15;
      }
    }
    unaff_R12 = *(uint **)(unaff_RBP + -0x648);
    bVar14 = 0;
  }
LAB_006fc3c9:
  if (*(int *)(unaff_RBP + -0x638) == 0) goto LAB_006fc008;
  if ((int)unaff_R13 == -1) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
    puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
    goto LAB_006fc00f;
  }
  pbVar45 = *(byte **)(unaff_R12 + 2);
  if (pbVar45 < *(byte **)(unaff_R12 + 4)) {
    *(byte **)(unaff_R12 + 2) = pbVar45 + 1;
    unaff_R13 = (ulong)*pbVar45;
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc46d;
    uVar20 = FUN_007067b0(unaff_R12);
    unaff_R13 = (ulong)uVar20;
    if (uVar20 == 0xffffffff) goto code_r0x006fc475;
  }
  unaff_R15 = unaff_R15 + 1;
  if (0 < *(int *)(unaff_RBP + -0x638)) {
    *(int *)(unaff_RBP + -0x638) = *(int *)(unaff_RBP + -0x638) + -1;
  }
  goto LAB_006fc11d;
code_r0x006fc475:
  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
LAB_006fc008:
  puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
LAB_006fc00f:
  if (puVar46 == (undefined1 *)0x0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    goto switchD_006f555e_default;
  }
  if ((long)puVar46 - *(long *)(unaff_RBP + -0x460) == *(long *)(unaff_RBP + -0x620))
  goto switchD_006f555e_default;
  goto LAB_006f9019;
code_r0x006fba2a:
  uVar43 = uVar43 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fba38;
  goto LAB_006fba25;
code_r0x006fc8e6:
  uVar43 = uVar43 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fc90f;
  goto LAB_006fc8e1;
code_r0x006fbc69:
  uVar43 = uVar43 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fbc99;
  goto LAB_006fbc64;
code_r0x006fbb03:
  uVar43 = uVar43 + 8;
  bVar51 = true;
  iVar40 = iVar40 + -1;
  if (iVar40 == 0) goto LAB_006fbb2c;
  goto LAB_006fbafe;
code_r0x006f82e4:
  unaff_RBX = unaff_RBX + 4;
  if (*(int *)(unaff_RBP + -0x668) == 0) {
    *(undefined8 *)(unaff_RBP + -0x650) = 0;
  }
  else {
    *(undefined8 *)(unaff_RBP + -0x650) = 0;
    lVar30 = **(long **)(unaff_RBP + -0x670);
    lVar29 = *(long *)(unaff_RBP + -0x698) * 4;
    if (unaff_RBX == lVar30 + lVar29) {
      lVar27 = *(long *)(unaff_RBP + -0x698);
      *(long *)(unaff_RBP + -0x638) = lVar29;
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8342;
      lVar30 = FUN_00710840(lVar30,lVar27 * 8);
      lVar29 = *(long *)(unaff_RBP + -0x638);
      if (lVar30 == 0) {
        *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) + 1;
        uVar22 = **(undefined8 **)(unaff_RBP + -0x670);
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb5f6;
        lVar29 = FUN_00710840(uVar22,lVar29 + 4);
        if (lVar29 != 0) {
          **(long **)(unaff_RBP + -0x670) = lVar29;
          uVar37 = FUN_006f8260();
          return uVar37;
        }
        if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
          plVar36 = *(long **)(unaff_RBP + -0x670);
          *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
          *(undefined8 *)(unaff_RBP + -0x670) = 0;
          *(undefined4 *)(*plVar36 + -4 + *(long *)(unaff_RBP + -0x638)) = 0;
        }
        else {
          *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
        }
switchD_006f555e_default:
        if ((*unaff_R12 & 0x8000) == 0) {
          piVar1 = *(int **)(unaff_R12 + 0x22);
          iVar40 = piVar1[1];
          piVar1[1] = iVar40 + -1;
          if (iVar40 + -1 == 0) {
            piVar1[2] = 0;
            piVar1[3] = 0;
            LOCK();
            iVar40 = *piVar1;
            *piVar1 = 0;
            UNLOCK();
            if (1 < iVar40) {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7e56;
              FUN_00709660();
            }
          }
        }
        uVar22 = *(undefined8 *)(unaff_RBP + -0x6b0);
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5612;
        FUN_00709560(uVar22);
        if (*(long *)(unaff_RBP + -0x460) != *(long *)(unaff_RBP + -0x6a8)) {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5627;
          FUN_007104f0();
        }
        if (*(int *)(unaff_RBP + -0x640) == -1) {
          puVar2 = *(ulong **)(unaff_RBP + -0x6d0);
          puVar3 = *(ulong **)(unaff_RBP + -0x6d0);
          while (puVar3 != (ulong *)0x0) {
            uVar37 = 0;
            if (*puVar2 != 0) {
              do {
                uVar22 = *(undefined8 *)puVar2[uVar37 + 2];
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5e0d;
                FUN_007104f0(uVar22);
                lVar29 = uVar37 + 2;
                uVar37 = uVar37 + 1;
                *(undefined8 *)puVar2[lVar29] = 0;
              } while (uVar37 < *puVar2);
            }
            puVar2 = (ulong *)puVar2[1];
            puVar3 = puVar2;
          }
          *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
        }
        else if (*(long *)(unaff_RBP + -0x670) != 0) {
          puVar25 = *(undefined8 **)(unaff_RBP + -0x670);
          uVar22 = *puVar25;
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5e41;
          FUN_007104f0(uVar22);
          *puVar25 = 0;
        }
        if (*(long *)(unaff_RBP + -0x38) == *(long *)(in_FS_OFFSET + 0x28)) {
          return (ulong)*(uint *)(unaff_RBP + -0x640);
        }
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbbe6;
        FUN_00771f60();
      }
      *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) << 1;
      **(long **)(unaff_RBP + -0x670) = lVar30;
      unaff_RBX = lVar30 + lVar29;
    }
  }
  goto code_r0x006f8260;
  while( true ) {
    uVar43 = uVar43 + 8;
    bVar51 = true;
    iVar40 = iVar40 + -1;
    if (iVar40 == 0) break;
LAB_006fa12a:
    if (0x2f < uVar43) {
      if (iVar40 != 1) {
        lVar30 = lVar29 + 0x10;
        do {
          lVar27 = lVar30;
          lVar30 = lVar27 + 8;
        } while (lVar29 + 0x18 + (ulong)(iVar40 - 2) * 8 != lVar30);
        uVar37 = FUN_006fa14d(lVar27);
        return uVar37;
      }
      *(long *)(unaff_RBP + -0x538) = lVar29 + 8;
      if (!bVar51) goto LAB_006fa161;
      break;
    }
  }
  uVar20 = uVar43;
  *(uint *)(unaff_RBP + -0x540) = uVar20;
LAB_006fa161:
  if (uVar20 < 0x30) {
    puVar25 = (undefined8 *)((ulong)uVar20 + *(long *)(unaff_RBP + -0x530));
    *(uint *)(unaff_RBP + -0x540) = uVar20 + 8;
  }
  else {
    puVar25 = *(undefined8 **)(unaff_RBP + -0x538);
    *(undefined8 **)(unaff_RBP + -0x538) = puVar25 + 1;
  }
  *(undefined8 *)(unaff_RBP + -0x670) = *puVar25;
  uVar37 = FUN_006f7f81();
  return uVar37;
}

