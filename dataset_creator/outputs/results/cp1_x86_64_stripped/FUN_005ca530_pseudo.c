
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_005ca530(long param_1,long param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  undefined4 *puVar16;
  byte bVar17;
  char *pcVar18;
  byte *pbVar20;
  ushort uVar21;
  int iVar22;
  short *psVar23;
  long lVar24;
  ulong uVar25;
  byte *pbVar26;
  undefined8 uVar27;
  char *pcVar28;
  long in_FS_OFFSET;
  bool bVar29;
  undefined1 auVar30 [16];
  long local_148;
  byte *local_140;
  long local_138;
  byte *local_100;
  long local_f8;
  char *local_f0;
  undefined1 local_e8 [24];
  uint local_d0;
  undefined2 local_58;
  undefined1 local_56;
  long local_40;
  ulong uVar19;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(param_1 + 0x10);
  local_100 = (byte *)0x0;
  local_f8 = 0;
  lVar8 = FUN_004c4f60();
  if (lVar8 == 0) {
    pbVar9 = (byte *)0x0;
    pcVar28 = (char *)0x0;
    lVar15 = 0;
    FUN_0051f420();
    FUN_0051f540("../crypto/conf/conf_def.c",0xe7,"def_load_bio");
    FUN_0051f8f0(0xe,0x80007,0);
    local_138 = 0;
    local_148 = 0;
    lVar10 = local_138;
  }
  else {
    pbVar9 = (byte *)FUN_0041c2c0("default","../crypto/conf/conf_def.c",0xeb);
    local_100 = pbVar9;
    if (pbVar9 == (byte *)0x0) {
      FUN_0051f420();
      uVar27 = 0xed;
    }
    else {
      iVar6 = FUN_005c9880(param_1);
      if (iVar6 != 0) {
        local_138 = FUN_005c9940(param_1,pbVar9);
        if (local_138 == 0) {
          FUN_0051f420();
          pcVar28 = (char *)0x0;
          lVar15 = 0;
          FUN_0051f540("../crypto/conf/conf_def.c",0xf8,"def_load_bio");
          FUN_0051f8f0(0xe,0x67,0);
          local_148 = 0;
          lVar10 = 0;
        }
        else {
          pcVar28 = (char *)0x0;
          lVar15 = 0;
          local_148 = 0;
          bVar29 = true;
          bVar5 = false;
          iVar6 = 0;
          while (lVar10 = FUN_004c5070(lVar8,(long)(iVar6 + 0x200)), lVar10 != 0) {
            psVar23 = (short *)((long)iVar6 + *(long *)(lVar8 + 8));
            *(undefined1 *)psVar23 = 0;
            while( true ) {
              if ((param_2 != 0) && (iVar7 = FUN_004abaa0(param_2,psVar23,0x1ff), iVar7 < 0))
              goto LAB_005caa55;
              *(undefined1 *)((long)psVar23 + 0x1ff) = 0;
              iVar7 = thunk_FUN_007129d0(psVar23);
              if (bVar29) {
                local_56 = 0xbf;
                local_58 = 0xbbef;
                if (((2 < iVar7) && (*psVar23 == -0x4411)) && ((char)psVar23[1] == -0x41)) {
                  thunk_FUN_00713610(psVar23,(undefined1 *)((long)psVar23 + 3),(long)(iVar7 + -3));
                  *(undefined1 *)((long)psVar23 + (long)iVar7 + -3) = 0;
                  iVar7 = iVar7 + -3;
                }
              }
              if (bVar5 || iVar7 != 0) break;
              pcVar18 = pcVar28;
              if (local_f8 == 0) {
LAB_005ca71a:
                lVar10 = FUN_00436020(lVar15);
                if (lVar10 == 0) {
                  FUN_004c4ff0(lVar8);
                  FUN_0041ad60(local_100,"../crypto/conf/conf_def.c",0x22a);
                  uVar27 = 1;
                  FUN_004360b0(lVar15);
                  goto LAB_005ca8c6;
                }
              }
              else {
                lVar10 = FUN_005c9b90(pcVar28,&local_f8);
                if (lVar10 == 0) {
                  pcVar18 = (char *)0x0;
                  FUN_0041ad60(pcVar28,"../crypto/conf/conf_def.c",0x125);
                  goto LAB_005ca71a;
                }
              }
              thunk_FUN_004ab560(param_2);
              bVar29 = false;
              param_2 = lVar10;
              pcVar28 = pcVar18;
            }
            bVar29 = true;
            iVar22 = iVar7;
            if (iVar7 < 1) {
LAB_005ca981:
              iVar6 = iVar6 + iVar22;
              if ((iVar7 == 0) || (!bVar29)) goto LAB_005caa70;
              if (0 < iVar6) {
                pbVar26 = *(byte **)(lVar8 + 8);
                pbVar9 = pbVar26 + (long)iVar6 + -1;
                lVar10 = *(long *)(param_1 + 8);
                if (((char)*pbVar9 < '\0') ||
                   ((*(byte *)(lVar10 + (long)(char)*pbVar9 * 2) & 0x20) == 0)) goto LAB_005ca9c8;
                bVar5 = true;
                goto LAB_005cb238;
              }
LAB_005ca9c8:
              bVar5 = true;
              goto LAB_005ca9d0;
            }
            pcVar18 = (char *)((long)psVar23 + (long)iVar7 + -1);
            do {
              if ((*pcVar18 != '\r') && (*pcVar18 != '\n')) {
                bVar29 = iVar7 == iVar22;
                goto LAB_005ca981;
              }
              pcVar18 = pcVar18 + -1;
              iVar22 = iVar22 + -1;
            } while (iVar22 != 0);
LAB_005caa70:
            *(undefined1 *)((long)psVar23 + (long)iVar22) = 0;
            local_148 = local_148 + 1;
            pbVar26 = *(byte **)(lVar8 + 8);
            if (iVar6 < 1) {
              lVar10 = *(long *)(param_1 + 8);
LAB_005caab8:
              uVar25 = (ulong)*pbVar26;
              pbVar9 = pbVar26;
              uVar19 = uVar25;
              if ((char)*pbVar26 < '\0') goto LAB_005caaf8;
              while (uVar3 = *(ushort *)(lVar10 + uVar19 * 2), (uVar3 & 0x800) == 0) {
                if ((uVar3 & 0x10) == 0) {
                  uVar19 = (ulong)*pbVar9;
                  goto LAB_005caaf8;
                }
                pbVar20 = pbVar9 + 1;
                pbVar9 = pbVar9 + 1;
                uVar19 = (ulong)*pbVar20;
                if ((char)*pbVar20 < '\0') {
LAB_005caaf0:
                  pbVar20 = pbVar9 + 1;
                  pbVar9 = pbVar9 + 1;
                  uVar19 = (ulong)*pbVar20;
LAB_005caaf8:
                  do {
                    bVar17 = (byte)uVar19;
                    if ((char)bVar17 < '\0') goto LAB_005caaf0;
                    uVar3 = *(ushort *)(lVar10 + (long)(char)bVar17 * 2);
                    if ((uVar3 & 0x80) != 0) goto LAB_005cae28;
                    if ((uVar3 & 0x400) == 0) {
                      if ((uVar3 & 0x40) != 0) {
                        do {
                          do {
                            bVar2 = pbVar9[1];
                            pbVar9 = pbVar9 + 1;
                          } while ((char)bVar2 < '\0');
                          do {
                            uVar19 = (ulong)bVar2;
                            uVar3 = *(ushort *)(lVar10 + (long)(char)bVar2 * 2);
                            if ((uVar3 & 8) != 0) {
                              if (bVar17 == bVar2) goto LAB_005caaf0;
                              goto LAB_005caaf8;
                            }
                            if (bVar17 == bVar2) goto LAB_005caaf0;
                            if ((uVar3 & 0x20) == 0) break;
                            bVar2 = pbVar9[1];
                            if ((-1 < (char)bVar2) &&
                               ((*(byte *)(lVar10 + (long)(char)bVar2 * 2) & 8) != 0)) {
                              pbVar9 = pbVar9 + 1;
                              uVar19 = (ulong)bVar2;
                              goto LAB_005caaf8;
                            }
                            bVar2 = pbVar9[2];
                            pbVar9 = pbVar9 + 2;
                          } while (-1 < (char)bVar2);
                        } while( true );
                      }
                      if ((uVar3 & 0x20) == 0) {
                        if ((uVar3 & 8) != 0) goto LAB_005cab2e;
                        goto LAB_005caaf0;
                      }
                      bVar17 = pbVar9[1];
                      if (((char)bVar17 < '\0') ||
                         ((*(byte *)(lVar10 + (long)(char)bVar17 * 2) & 8) == 0)) {
                        pbVar20 = pbVar9 + 2;
                        pbVar9 = pbVar9 + 2;
                        uVar19 = (ulong)*pbVar20;
                      }
                      else {
                        pbVar9 = pbVar9 + 1;
                        uVar19 = (ulong)bVar17;
                      }
                    }
                    else {
                      while( true ) {
                        do {
                          pbVar20 = pbVar9;
                          bVar2 = pbVar20[1];
                          uVar19 = (ulong)bVar2;
                          pbVar9 = pbVar20 + 1;
                        } while ((char)bVar2 < '\0');
                        if ((*(byte *)(lVar10 + (long)(char)bVar2 * 2) & 8) != 0) break;
                        if (bVar17 == bVar2) {
                          bVar2 = pbVar20[2];
                          if (bVar17 != bVar2) goto LAB_005cae18;
                          pbVar9 = pbVar20 + 2;
                        }
                      }
                      if (bVar17 == bVar2) {
                        bVar2 = pbVar20[2];
LAB_005cae18:
                        pbVar9 = pbVar20 + 2;
                        uVar19 = (ulong)bVar2;
                      }
                    }
                  } while( true );
                }
              }
LAB_005cae28:
              *pbVar9 = 0;
              uVar25 = (ulong)*pbVar26;
              lVar10 = *(long *)(param_1 + 8);
LAB_005cab2e:
              bVar17 = (byte)uVar25;
joined_r0x005cab31:
              lVar24 = param_2;
              if (-1 < (char)bVar17) {
                uVar3 = *(ushort *)(lVar10 + uVar25 * 2);
                uVar21 = uVar3 & 8;
                if ((uVar3 & 0x10) != 0) {
                  if (uVar21 == 0) goto code_r0x005cab52;
                  goto LAB_005cb09f;
                }
                if (uVar21 != 0) goto LAB_005cb09f;
                if ((char)uVar25 == '[') {
                  bVar17 = pbVar26[1];
                  while (((pbVar9 = pbVar26 + 1, pbVar20 = pbVar9, lVar24 = param_1,
                          -1 < (char)bVar17 &&
                          (uVar3 = *(ushort *)(lVar10 + (ulong)bVar17 * 2), (uVar3 & 0x10) != 0)) &&
                         ((uVar3 & 8) == 0))) {
                    bVar17 = pbVar26[2];
                    pbVar26 = pbVar9;
                  }
                  do {
                    pbVar11 = (byte *)FUN_005c9a60(lVar24,pbVar20);
                    bVar17 = *pbVar11;
                    pbVar26 = pbVar11;
                    while (-1 < (char)bVar17) {
                      uVar3 = *(ushort *)(lVar10 + (ulong)bVar17 * 2);
                      if (((uVar3 & 0x10) == 0) || ((uVar3 & 8) != 0)) {
                        if (bVar17 == 0x5d) {
                          *pbVar11 = 0;
                          iVar6 = FUN_005c9d10(param_1,0,&local_100,pbVar9);
                          pbVar9 = local_100;
                          if (iVar6 == 0) goto LAB_005caa55;
                          local_138 = FUN_005c9630(param_1,local_100);
                          bVar5 = false;
                          iVar6 = 0;
                          if ((local_138 != 0) ||
                             (local_138 = FUN_005c9940(param_1,pbVar9), local_138 != 0))
                          goto LAB_005ca9d0;
                          FUN_0051f420();
                          FUN_0051f540("../crypto/conf/conf_def.c",0x177,"def_load_bio");
                          FUN_0051f8f0(0xe,0x67,0);
                          lVar10 = 0;
                          goto LAB_005ca7ac;
                        }
                        break;
                      }
                      pbVar1 = pbVar26 + 1;
                      pbVar26 = pbVar26 + 1;
                      bVar17 = *pbVar1;
                    }
                  } while ((bVar17 != 0) && (bVar29 = pbVar20 != pbVar26, pbVar20 = pbVar26, bVar29)
                          );
                  FUN_0051f420();
                  FUN_0051f540("../crypto/conf/conf_def.c",0x16e,"def_load_bio");
                  uVar27 = 100;
                  goto LAB_005cb3df;
                }
              }
              pbVar9 = (byte *)FUN_005c9a60(param_1,pbVar26);
              bVar17 = *pbVar9;
              if ((bVar17 == 0x3a) && (pbVar9[1] == 0x3a)) {
                *pbVar9 = 0;
                pbVar20 = pbVar9 + 2;
                lVar10 = param_1;
                pbVar9 = (byte *)FUN_005c9a60(param_1,pbVar20);
                lVar10 = *(long *)(lVar10 + 8);
                bVar17 = *pbVar9;
                local_140 = pbVar26;
                pbVar11 = pbVar9;
              }
              else {
                local_140 = local_100;
                pbVar11 = pbVar9;
                pbVar20 = pbVar26;
              }
              while (((-1 < (char)bVar17 &&
                      (uVar3 = *(ushort *)(lVar10 + (ulong)bVar17 * 2), (uVar3 & 0x10) != 0)) &&
                     ((uVar3 & 8) == 0))) {
                bVar17 = pbVar9[1];
                pbVar9 = pbVar9 + 1;
              }
              iVar6 = thunk_FUN_00712ab0(pbVar20,".pragma",7);
              if (iVar6 != 0) {
                iVar6 = thunk_FUN_00712ab0(pbVar20,".include",8);
                if (iVar6 != 0) {
                  if (bVar17 != 0x3d) goto LAB_005cb436;
                  *pbVar11 = 0;
                  bVar17 = pbVar9[1];
                  while (((pbVar26 = pbVar9 + 1, -1 < (char)bVar17 &&
                          (uVar3 = *(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar17 * 2),
                          (uVar3 & 0x10) != 0)) && ((uVar3 & 8) == 0))) {
                    bVar17 = pbVar9[2];
                    pbVar9 = pbVar26;
                  }
                  FUN_005ca4e0(*(long *)(param_1 + 8),pbVar26);
                  lVar10 = FUN_0041ad90(0x18,"../crypto/conf/conf_def.c",0x20a);
                  if (lVar10 != 0) {
                    lVar13 = FUN_0041c2c0(pbVar20,"../crypto/conf/conf_def.c",0x20e);
                    *(undefined8 *)(lVar10 + 0x10) = 0;
                    *(long *)(lVar10 + 8) = lVar13;
                    if (lVar13 == 0) {
                      FUN_0051f420();
                      FUN_0051f540("../crypto/conf/conf_def.c",0x211,"def_load_bio");
                      FUN_0051f8f0(0xe,0xc0100,0);
                      pbVar9 = local_100;
                    }
                    else {
                      iVar6 = FUN_005c9d10(param_1,local_140,lVar10 + 0x10,pbVar26);
                      pbVar9 = local_100;
                      if (iVar6 != 0) {
                        iVar6 = thunk_FUN_00712780(local_140,local_100);
                        lVar13 = local_138;
                        if (((iVar6 == 0) || (lVar13 = FUN_005c9630(param_1,local_140), lVar13 != 0)
                            ) || (lVar13 = FUN_005c9940(param_1,local_140), lVar13 != 0)) {
                          iVar6 = FUN_005c96c0(param_1,lVar13,lVar10);
                          if (iVar6 != 0) {
LAB_005cb09f:
                            bVar5 = false;
                            iVar6 = 0;
                            param_2 = lVar24;
                            goto LAB_005ca9d0;
                          }
                          FUN_0051f420();
                          FUN_0051f540("../crypto/conf/conf_def.c",0x223,"def_load_bio");
                          FUN_0051f8f0(0xe,0xc0100,0);
                        }
                        else {
                          FUN_0051f420();
                          FUN_0051f540("../crypto/conf/conf_def.c",0x21c,"def_load_bio");
                          FUN_0051f8f0(0xe,0x67,0);
                        }
                      }
                    }
                    goto LAB_005ca7ac;
                  }
                  FUN_0051f420();
                  FUN_0051f540("../crypto/conf/conf_def.c",0x20b,"def_load_bio");
                  uVar27 = 0xc0100;
                  goto LAB_005cb3df;
                }
LAB_005caed2:
                if ((pbVar9 == pbVar20 + 8) && (bVar17 != 0x3d)) {
LAB_005cb436:
                  FUN_0051f420();
                  FUN_0051f540("../crypto/conf/conf_def.c",0x201,"def_load_bio");
                  FUN_0051f8f0(0xe,0x65,"HERE-->%s",pbVar9);
                  local_138 = 0;
                  pbVar9 = local_100;
                  lVar10 = local_138;
                }
                else {
                  local_f0 = (char *)0x0;
                  auVar30 = thunk_FUN_006e8f20("OPENSSL_CONF_INCLUDE");
                  lVar10 = auVar30._0_8_;
                  if (lVar10 == 0) {
                    lVar10 = *(long *)(param_1 + 0x20);
                  }
                  if (*pbVar9 == 0x3d) {
                    bVar17 = pbVar9[1];
                    while (((pbVar9 = pbVar9 + 1, -1 < (char)bVar17 &&
                            (uVar3 = *(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar17 * 2),
                            (uVar3 & 0x10) != 0)) && ((uVar3 & 8) == 0))) {
                      bVar17 = pbVar9[1];
                    }
                  }
                  FUN_005ca4e0(*(long *)(param_1 + 8),pbVar9,auVar30._8_8_,pbVar9);
                  iVar6 = FUN_005c9d10(param_1,local_140,&local_f0);
                  pcVar18 = local_f0;
                  if (iVar6 != 0) {
                    pcVar14 = local_f0;
                    if (lVar10 == 0) {
LAB_005caff0:
                      if ((*(int *)(param_1 + 0x1c) != 0) && (*pcVar14 != '/')) {
                        FUN_0051f420();
                        FUN_0051f540("../crypto/conf/conf_def.c",0x1dd,"def_load_bio");
                        FUN_0051f8f0(0xe,0x7d,0);
                        FUN_0041ad60(pcVar14,"../crypto/conf/conf_def.c",0x1de);
                        goto LAB_005caa55;
                      }
                    }
                    else if (*local_f0 != '/') {
                      lVar12 = thunk_FUN_007129d0(lVar10);
                      lVar13 = thunk_FUN_007129d0(pcVar18);
                      lVar13 = lVar12 + 2 + lVar13;
                      pcVar14 = (char *)FUN_0041ad90(lVar13,"../crypto/conf/conf_def.c",0x1cb);
                      if (pcVar14 == (char *)0x0) {
                        FUN_0051f420();
                        FUN_0051f540("../crypto/conf/conf_def.c",0x1cd,"def_load_bio");
                        FUN_0051f8f0(0xe,0xc0100,0);
                        FUN_0041ad60(pcVar18,"../crypto/conf/conf_def.c",0x1ce);
                        goto LAB_005caa55;
                      }
                      FUN_0041c470(pcVar14,lVar10,lVar13);
                      if ((*pcVar14 == '\0') ||
                         (lVar10 = thunk_FUN_007129d0(pcVar14), pcVar14[lVar10 + -1] != '/')) {
                        FUN_0041c4d0(pcVar14,&DAT_00823afc,lVar13);
                      }
                      FUN_0041c4d0(pcVar14,pcVar18,lVar13);
                      FUN_0041ad60(pcVar18,"../crypto/conf/conf_def.c",0x1d6);
                      goto LAB_005caff0;
                    }
                    iVar6 = FUN_0076d7d0(pcVar14,local_e8);
                    if (iVar6 < 0) {
                      FUN_0051f420();
                      FUN_0051f540("../crypto/conf/conf_def.c",0x325,"process_include");
                      puVar16 = (undefined4 *)FUN_006d2700();
                      FUN_0051f8f0(2,*puVar16,"calling stat(%s)",pcVar14);
                    }
                    else {
                      if ((local_d0 & 0xf000) != 0x4000) {
                        lVar10 = FUN_004b0b90(pcVar14,"r");
                        if (pcVar14 != pcVar28) {
                          FUN_0041ad60(pcVar14,"../crypto/conf/conf_def.c",0x1e7);
                        }
                        pcVar14 = pcVar28;
                        if (lVar10 == 0) goto LAB_005cb09f;
LAB_005cb4e6:
                        pcVar28 = pcVar14;
                        if ((lVar15 == 0) && (lVar15 = FUN_00436410(), lVar15 == 0)) {
                          FUN_0051f420();
                          uVar27 = 0x1f2;
                        }
                        else {
                          iVar6 = FUN_00435f80(lVar15,param_2);
                          lVar24 = lVar10;
                          if (iVar6 != 0) goto LAB_005cb09f;
                          FUN_0051f420();
                          uVar27 = 0x1f8;
                        }
                        FUN_0051f540("../crypto/conf/conf_def.c",uVar27,"def_load_bio");
                        FUN_0051f8f0(0xe,0xc0100,0);
                        FUN_004ab560(lVar10);
                        goto LAB_005caa55;
                      }
                      if (local_f8 == 0) {
                        lVar10 = FUN_005c9b90(pcVar14,&local_f8);
                        if (lVar10 != 0) goto LAB_005cb4e6;
                      }
                      else {
                        FUN_0051f420();
                        FUN_0051f540("../crypto/conf/conf_def.c",0x32c,"process_include");
                        FUN_0051f8f0(0xe,0x6f,&DAT_007e3d61,pcVar14);
                      }
                    }
                    if (pcVar14 != pcVar28) {
                      FUN_0041ad60(pcVar14,"../crypto/conf/conf_def.c",0x1e7);
                    }
                    goto LAB_005cb09f;
                  }
LAB_005caa55:
                  local_138 = 0;
                  pbVar9 = local_100;
                  lVar10 = local_138;
                }
                goto LAB_005ca7ac;
              }
              if (pbVar9 == pbVar20 + 7) {
                if (bVar17 != 0x3d) {
                  iVar6 = thunk_FUN_00712ab0(pbVar20,".include",8);
                  if (iVar6 != 0) goto LAB_005cb436;
                  goto LAB_005caed2;
                }
LAB_005cb55e:
                bVar17 = pbVar9[1];
                while (((pbVar9 = pbVar9 + 1, -1 < (char)bVar17 &&
                        (uVar3 = *(ushort *)(lVar10 + (ulong)bVar17 * 2), (uVar3 & 0x10) != 0)) &&
                       ((uVar3 & 8) == 0))) {
                  bVar17 = pbVar9[1];
                }
              }
              else if (bVar17 == 0x3d) goto LAB_005cb55e;
              FUN_005ca4e0(lVar10,pbVar9);
              pbVar26 = (byte *)thunk_FUN_00712710(pbVar9,0x3a);
              if (((pbVar26 == (byte *)0x0) || (pbVar9 == pbVar26)) || (pbVar26[1] == 0)) {
                FUN_0051f420();
                FUN_0051f540("../crypto/conf/conf_def.c",0x195,"def_load_bio");
                uVar27 = 0x7a;
                goto LAB_005cb3df;
              }
              *pbVar26 = 0;
              pbVar20 = pbVar26;
              lVar10 = param_1;
              FUN_005ca4e0(*(undefined8 *)(param_1 + 8),pbVar9);
              bVar17 = pbVar20[1];
              while (((pbVar20 = pbVar26 + 1, -1 < (char)bVar17 &&
                      (uVar3 = *(ushort *)(*(long *)(lVar10 + 8) + (ulong)bVar17 * 2),
                      (uVar3 & 0x10) != 0)) && ((uVar3 & 8) == 0))) {
                bVar17 = pbVar26[2];
                pbVar26 = pbVar20;
              }
              iVar6 = thunk_FUN_00712780(pbVar9,"dollarid");
              if (iVar6 == 0) {
                iVar6 = FUN_005ca3a0(pbVar20,param_1 + 0x18);
joined_r0x005caa46:
                if (iVar6 == 0) goto LAB_005caa55;
              }
              else {
                iVar6 = thunk_FUN_00712780(pbVar9,"abspath");
                if (iVar6 == 0) {
                  iVar6 = FUN_005ca3a0(pbVar20,param_1 + 0x1c);
                  goto joined_r0x005caa46;
                }
                iVar6 = thunk_FUN_00712780(pbVar9,"includedir");
                if (iVar6 != 0) goto LAB_005cb09f;
                FUN_0041ad60(*(undefined8 *)(param_1 + 0x20),"../crypto/conf/conf_def.c",0x1ab);
                lVar10 = FUN_0041c2c0(pbVar20,"../crypto/conf/conf_def.c",0x1ac);
                *(long *)(param_1 + 0x20) = lVar10;
                if (lVar10 == 0) {
                  FUN_0051f420();
                  FUN_0051f540("../crypto/conf/conf_def.c",0x1ad,"def_load_bio");
                  uVar27 = 0xc0100;
                  goto LAB_005cb3df;
                }
              }
              iVar6 = 0;
              bVar5 = false;
            }
            else {
              pbVar9 = pbVar26 + (long)iVar6 + -1;
              lVar10 = *(long *)(param_1 + 8);
              if (((char)*pbVar9 < '\0') ||
                 ((*(byte *)(lVar10 + (long)(char)*pbVar9 * 2) & 0x20) == 0)) goto LAB_005caab8;
              bVar5 = false;
LAB_005cb238:
              if (((iVar6 == 1) || ((char)pbVar9[-1] < '\0')) ||
                 ((*(byte *)(lVar10 + (long)(char)pbVar9[-1] * 2) & 0x20) == 0)) {
                iVar6 = iVar6 + -1;
                bVar5 = true;
              }
              else if (!bVar5) goto LAB_005caab8;
            }
LAB_005ca9d0:
            bVar29 = false;
          }
          FUN_0051f420();
          FUN_0051f540("../crypto/conf/conf_def.c",0x100,"def_load_bio");
          uVar27 = 0x80007;
LAB_005cb3df:
          FUN_0051f8f0(0xe,uVar27,0);
          local_138 = 0;
          pbVar9 = local_100;
          lVar10 = local_138;
        }
        goto LAB_005ca7ac;
      }
      FUN_0051f420();
      uVar27 = 0xf2;
    }
    pcVar28 = (char *)0x0;
    lVar15 = 0;
    FUN_0051f540("../crypto/conf/conf_def.c",uVar27,"def_load_bio");
    FUN_0051f8f0(0xe,0xc0100,0);
    local_138 = 0;
    local_148 = 0;
    lVar10 = local_138;
  }
LAB_005ca7ac:
  local_138 = lVar10;
  FUN_004c4ff0(lVar8);
  FUN_0041ad60(pbVar9,"../crypto/conf/conf_def.c",0x234);
  while (iVar6 = FUN_00436480(lVar15), 0 < iVar6) {
    lVar8 = FUN_00436020(lVar15);
    thunk_FUN_004ab560(param_2);
    param_2 = lVar8;
  }
  FUN_004360b0();
  FUN_0041ad60(pcVar28,"../crypto/conf/conf_def.c",0x241);
  if (local_f8 != 0) {
    FUN_00546f80(&local_f8);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = local_148;
  }
  FUN_004aeb30(&local_58,0x18,"%ld",local_148);
  FUN_0051ef40(2,"line ",&local_58);
  if (*(long *)(param_1 + 0x10) != lVar4) {
    FUN_004cc720();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  uVar27 = 0;
  if (local_138 != 0) {
    FUN_0041ad60(*(undefined8 *)(local_138 + 8),"../crypto/conf/conf_def.c",0x24e);
    FUN_0041ad60(*(undefined8 *)(local_138 + 0x10),"../crypto/conf/conf_def.c",0x24f);
    FUN_0041ad60(local_138,"../crypto/conf/conf_def.c",0x250);
  }
LAB_005ca8c6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar27;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
code_r0x005cab52:
  bVar17 = pbVar26[1];
  uVar25 = (ulong)bVar17;
  pbVar26 = pbVar26 + 1;
  goto joined_r0x005cab31;
}

