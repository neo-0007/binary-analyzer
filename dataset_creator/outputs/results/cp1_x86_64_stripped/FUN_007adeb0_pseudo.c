
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_007adeb0(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint *puVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint *puVar11;
  long lVar12;
  char *pcVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  bool bVar19;
  byte *pbVar20;
  byte bVar21;
  ulong uVar22;
  byte *pbVar23;
  long in_FS_OFFSET;
  uint local_254;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  char *local_238;
  long local_230;
  long lStack_228;
  undefined8 *local_220;
  undefined8 local_218 [3];
  char *local_200;
  long local_1f8;
  long lStack_1f0;
  undefined8 *local_1e8;
  undefined8 local_1e0 [6];
  undefined1 local_1b0 [16];
  long local_1a0;
  undefined1 local_198 [8];
  undefined8 *local_190;
  long local_188;
  undefined8 *local_180;
  long local_178;
  long local_170;
  undefined8 local_168;
  uint local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined1 local_148 [255];
  undefined1 local_49;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00777e70();
  puVar11 = (uint *)FUN_006fda20("/etc/resolv.conf","rce");
  if (puVar11 == (uint *)0x0) {
    pcVar13 = (char *)0x0;
    if ((0x28 < *(uint *)(in_FS_OFFSET + -0x58)) ||
       ((0x10000302006U >> ((ulong)*(uint *)(in_FS_OFFSET + -0x58) & 0x3f) & 1) == 0))
    goto LAB_007ae9a9;
  }
  local_238 = (char *)0x0;
  local_200 = (char *)0x0;
  local_1a0 = 0;
  local_230 = _DAT_00840ce0;
  lStack_228 = _UNK_00840ce8;
  local_1f8 = _DAT_00840cf0;
  lStack_1f0 = _UNK_00840cf8;
  local_1b0 = (undefined1  [16])0x0;
  if (param_1 == (undefined8 *)0x0) {
    local_15c = DAT_00840d00;
    local_160 = 0x2c1;
  }
  else {
    local_15c = *param_1;
    local_160 = (uint)param_1[1] | 1;
  }
  local_154 = 1;
  local_250 = 0;
  local_220 = local_218;
  local_1e8 = local_1e0;
  lVar12 = FUN_006e8e30("LOCALDOMAIN");
  if (lVar12 == 0) {
    bVar5 = false;
LAB_007ae035:
    if (puVar11 != (uint *)0x0) {
      *puVar11 = *puVar11 | 0x8000;
LAB_007ae050:
      lVar12 = FUN_007956f0(&local_238,&local_250,puVar11);
      pcVar13 = local_238;
      if (0 < lVar12) {
        if ((*local_238 != ';') && (*local_238 != '#')) {
          iVar8 = thunk_FUN_00712ab0(local_238,"domain",6);
          if (iVar8 == 0) {
            if ((pcVar13[6] == ' ') || (pcVar13[6] == '\t')) {
              if (!bVar5) {
                pcVar13 = pcVar13 + 6;
                do {
                  do {
                    cVar6 = pcVar13[1];
                    pcVar13 = pcVar13 + 1;
                  } while (cVar6 == ' ');
                } while (cVar6 == '\t');
                if ((cVar6 != '\0') && (cVar6 != '\n')) {
                  pcVar13 = (char *)FUN_007128a0();
                  if (pcVar13 == (char *)0x0) goto LAB_007ae8cf;
                  FUN_007104f0(local_200);
                  local_1f8 = 0;
                  local_200 = pcVar13;
                  if (lStack_1f0 != -1) {
                    if (lStack_1f0 == 0) {
                      cVar6 = FUN_007a2e50(&local_1f8,local_1e0,8);
                      if (cVar6 == '\0') {
                        if (local_1e8 != local_1e0) {
                          FUN_007104f0();
                        }
                        lStack_1f0 = _UNK_0082eb88;
                        local_1f8 = _DAT_0082eb80;
                        local_1e8 = local_1e0;
                      }
                      else {
                        local_1e8[local_1f8] = pcVar13;
                        local_1f8 = local_1f8 + 1;
                      }
                    }
                    else {
                      local_1f8 = 1;
                      *local_1e8 = pcVar13;
                    }
                  }
                  puVar14 = (undefined1 *)FUN_00401200(pcVar13,&DAT_008243e8);
                  if (puVar14 != (undefined1 *)0x0) {
                    *puVar14 = 0;
                  }
                }
              }
              goto LAB_007ae050;
            }
          }
          else {
            iVar8 = thunk_FUN_00712ab0(pcVar13,"search",6);
            if ((iVar8 == 0) &&
               (cVar6 = pcVar13[6], bVar19 = cVar6 == ' ' || cVar6 == '\t',
               cVar6 == ' ' || cVar6 == '\t')) {
              if (!bVar5) {
                pcVar13 = pcVar13 + 6;
                do {
                  do {
                    cVar6 = pcVar13[1];
                    pcVar13 = pcVar13 + 1;
                  } while (cVar6 == ' ');
                } while (cVar6 == '\t');
                if (cVar6 != '\0' && cVar6 != '\n') {
                  puVar14 = (undefined1 *)thunk_FUN_00712710(pcVar13,10);
                  if (puVar14 != (undefined1 *)0x0) {
                    *puVar14 = 0;
                  }
                  pcVar13 = (char *)FUN_007128a0(pcVar13);
                  if (pcVar13 == (char *)0x0) goto LAB_007ae8cf;
                  FUN_007104f0(local_200);
                  local_1f8 = 0;
                  local_200 = pcVar13;
                  if (lStack_1f0 != -1) {
                    if (lStack_1f0 == 0) {
                      cVar6 = FUN_007a2e50(&local_1f8,local_1e0,8);
                      if (cVar6 == '\0') {
                        if (local_1e8 != local_1e0) {
                          FUN_007104f0();
                        }
                        lStack_1f0 = _UNK_0082eb88;
                        local_1f8 = _DAT_0082eb80;
                        local_1e8 = local_1e0;
                      }
                      else {
                        local_1e8[local_1f8] = pcVar13;
                        local_1f8 = local_1f8 + 1;
                      }
                    }
                    else {
                      local_1f8 = 1;
                      *local_1e8 = pcVar13;
                    }
                  }
                  cVar6 = *pcVar13;
                  cVar7 = bVar19;
                  while (cVar6 != '\0') {
                    if ((cVar6 == ' ') || (cVar6 == '\t')) {
                      *pcVar13 = '\0';
                      cVar7 = '\0';
                    }
                    else if ((cVar7 == '\0') && (cVar7 = bVar19, lStack_1f0 != -1)) {
                      if (lStack_1f0 == local_1f8) {
                        cVar7 = FUN_007a2e50(&local_1f8,local_1e0,8);
                        if (cVar7 == '\0') {
                          if (local_1e8 != local_1e0) {
                            FUN_007104f0();
                          }
                          lStack_1f0 = _UNK_0082eb88;
                          local_1f8 = _DAT_0082eb80;
                          local_1e8 = local_1e0;
                          cVar7 = bVar19;
                        }
                        else {
                          local_1e8[local_1f8] = pcVar13;
                          local_1f8 = local_1f8 + 1;
                        }
                      }
                      else {
                        local_1e8[local_1f8] = pcVar13;
                        local_1f8 = local_1f8 + 1;
                      }
                    }
                    pcVar1 = pcVar13 + 1;
                    pcVar13 = pcVar13 + 1;
                    cVar6 = *pcVar1;
                  }
                }
              }
              goto LAB_007ae050;
            }
          }
          iVar8 = thunk_FUN_00712ab0(pcVar13,"nameserver",10);
          if ((iVar8 == 0) && ((pcVar13[10] == ' ' || (pcVar13[10] == '\t')))) {
            pcVar13 = pcVar13 + 10;
            do {
              do {
                pcVar1 = pcVar13 + 1;
                pcVar13 = pcVar13 + 1;
              } while (*pcVar1 == ' ');
            } while (*pcVar1 == '\t');
            puVar14 = (undefined1 *)FUN_00401200(pcVar13,&DAT_008243e8);
            if (puVar14 != (undefined1 *)0x0) {
              *puVar14 = 0;
            }
            if (((*pcVar13 == '\0') || (*pcVar13 == '\n')) ||
               (iVar8 = FUN_00776880(pcVar13,&local_254), uVar18 = local_254, iVar8 == 0)) {
              puVar14 = (undefined1 *)thunk_FUN_00712710(pcVar13,0x25);
              if (puVar14 != (undefined1 *)0x0) {
                *puVar14 = 0;
              }
              if (*pcVar13 == '\0') goto LAB_007ae050;
              iVar8 = FUN_007774c0(10,pcVar13,&local_248);
              if (iVar8 < 1) goto LAB_007ae050;
              puVar15 = (undefined8 *)FUN_007101b0(0x1c);
              if (puVar15 == (undefined8 *)0x0) goto LAB_007ae8cf;
              *puVar15 = 0x3500000a;
              *(undefined4 *)(puVar15 + 3) = 0;
              puVar15[1] = local_248;
              puVar15[2] = uStack_240;
              if (puVar14 != (undefined1 *)0x0) {
                FUN_007753a0(&local_248,puVar14 + 1,puVar15 + 3);
              }
            }
            else {
              puVar15 = (undefined8 *)FUN_007101b0(0x10);
              if (puVar15 == (undefined8 *)0x0) goto LAB_007ae8cf;
              *(uint *)((long)puVar15 + 4) = uVar18;
              *(undefined4 *)puVar15 = 0x35000002;
            }
            puVar16 = (undefined8 *)FUN_007adb40(&local_230);
            if (puVar16 == (undefined8 *)0x0) {
              FUN_007104f0(puVar15);
              goto LAB_007ae8cf;
            }
            *puVar16 = puVar15;
            goto LAB_007ae050;
          }
          iVar8 = thunk_FUN_00712ab0(pcVar13,"sortlist",8);
          if ((iVar8 == 0) && ((bVar21 = pcVar13[8], bVar21 == 0x20 || (bVar21 == 9)))) {
            pbVar20 = (byte *)(pcVar13 + 8);
            do {
              uVar22 = (ulong)bVar21;
joined_r0x007ae4ac:
              if ((bVar21 != 0x20) && (bVar21 = (byte)uVar22, bVar21 != 9)) {
                if ((0x3b < bVar21) || ((0x800000000000401U >> (uVar22 & 0x3f) & 1) == 0)) {
                  pbVar23 = pbVar20;
                  if (bVar21 != 0) {
                    do {
                      bVar21 = (byte)uVar22;
                      if (bVar21 == 0x2f) {
LAB_007ae5d0:
                        *pbVar23 = 0;
                        iVar8 = FUN_00776880(pbVar20,&local_254);
                        uVar18 = local_254;
                        if (iVar8 == 0) goto LAB_007ae5b3;
                        *pbVar23 = bVar21;
                        pbVar20 = pbVar23 + 1;
                        bVar21 = pbVar23[1];
                        uVar22 = (ulong)bVar21;
                        pbVar23 = pbVar20;
                        if ((bVar21 == 0x3b) || ((char)bVar21 < '\x01')) goto LAB_007ae647;
                        goto LAB_007ae63c;
                      }
                      if (bVar21 == 0x3b) break;
                      if (bVar21 == 0x26) goto LAB_007ae5d0;
                      if (((char)bVar21 < '\0') ||
                         ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)bVar21 * 2) &
                          0x20) != 0)) break;
                      pbVar2 = pbVar23 + 1;
                      uVar22 = (ulong)*pbVar2;
                      pbVar23 = pbVar23 + 1;
                      if (*pbVar2 == 0) break;
                    } while( true );
                  }
                  *pbVar23 = 0;
                  iVar8 = FUN_00776880(pbVar20,&local_254);
                  if (iVar8 != 0) {
                    uVar9 = 0xff;
                    uVar18 = local_254;
                    if (((int)(local_254 >> 0x18 | (local_254 & 0xff0000) >> 8 |
                               (local_254 & 0xff00) << 8 | local_254 << 0x18) < 0) &&
                       (uVar9 = 0xffff, (local_254 << 0x18 & 0xc0000000) != 0x80000000)) {
                      uVar9 = 0xffffff;
                    }
                    goto LAB_007ae56e;
                  }
                  goto LAB_007ae5b3;
                }
                goto LAB_007ae050;
              }
              bVar21 = pbVar20[1];
              pbVar20 = pbVar20 + 1;
            } while( true );
          }
          iVar8 = thunk_FUN_00712ab0(pcVar13,"options",7);
          if ((iVar8 == 0) && ((pcVar13[7] == ' ' || (pcVar13[7] == '\t')))) {
            FUN_007adc00(&local_238,pcVar13 + 7);
          }
        }
        goto LAB_007ae050;
      }
      if ((*puVar11 & 0x20) != 0) goto LAB_007ae8cf;
    }
    if (local_230 == 0) {
      puVar15 = (undefined8 *)FUN_007adb40(&local_230);
      if (puVar15 != (undefined8 *)0x0) {
        uVar10 = FUN_007c0850(0x7f,1);
        puVar17 = (undefined4 *)FUN_007101b0(0x10);
        if (puVar17 != (undefined4 *)0x0) {
          puVar17[1] = uVar10;
          *puVar17 = 0x35000002;
          *puVar15 = puVar17;
          goto LAB_007ae6b6;
        }
        *puVar15 = 0;
      }
      goto LAB_007ae8cf;
    }
LAB_007ae6b6:
    if (local_1f8 == 0) {
      local_49 = 0;
      iVar8 = FUN_007abcf0(local_148,0xff);
      if ((iVar8 != 0) || (lVar12 = thunk_FUN_00712710(local_148,0x2e), lVar12 == 0))
      goto LAB_007ae760;
      pcVar13 = (char *)FUN_007128a0(lVar12 + 1);
      if (pcVar13 != (char *)0x0) {
        FUN_007104f0(local_200);
        local_200 = pcVar13;
        if (lStack_1f0 != -1) {
          if (lStack_1f0 == local_1f8) {
            cVar6 = FUN_007a2e50(&local_1f8,local_1e0,8);
            if (cVar6 == '\0') {
              if (local_1e8 != local_1e0) {
                FUN_007104f0();
              }
              lStack_1f0 = _UNK_0082eb88;
              local_1f8 = _DAT_0082eb80;
              local_1e8 = local_1e0;
            }
            else {
              local_1e8[local_1f8] = pcVar13;
              local_1f8 = local_1f8 + 1;
            }
          }
          else {
            local_1e8[local_1f8] = pcVar13;
            local_1f8 = local_1f8 + 1;
          }
        }
        goto LAB_007ae760;
      }
    }
    else {
LAB_007ae760:
      lVar12 = FUN_006e8e30("RES_OPTIONS");
      if (lVar12 != 0) {
        FUN_007adc00(&local_238,lVar12);
      }
      if (((lStack_228 == -1) || (lStack_1f0 == -1)) || (local_1b0._8_8_ == -1)) {
        pcVar13 = (char *)0x0;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
      }
      else {
        if ((param_2 != 0) && (cVar6 = FUN_007abb30(param_2,puVar11), cVar6 == '\0'))
        goto LAB_007ae8cf;
        local_190 = local_220;
        local_188 = local_230;
        local_180 = local_1e8;
        local_178 = local_1f8;
        local_170 = local_1a0;
        local_168 = local_1b0._0_8_;
        pcVar13 = (char *)FUN_007afa60(local_198);
      }
    }
  }
  else {
    pcVar13 = (char *)FUN_007128a0(lVar12);
    if (pcVar13 != (char *)0x0) {
      FUN_007104f0(local_200);
      local_200 = pcVar13;
      if (lStack_1f0 != -1) {
        if (lStack_1f0 == local_1f8) {
          cVar6 = FUN_007a2e50(&local_1f8,local_1e0,8);
          if (cVar6 == '\0') {
            if (local_1e8 != local_1e0) {
              FUN_007104f0();
            }
            lStack_1f0 = _UNK_0082eb88;
            local_1f8 = _DAT_0082eb80;
            local_1e8 = local_1e0;
          }
          else {
            local_1e8[local_1f8] = pcVar13;
            local_1f8 = local_1f8 + 1;
          }
        }
        else {
          local_1e8[local_1f8] = pcVar13;
          local_1f8 = local_1f8 + 1;
        }
      }
      cVar7 = '\x01';
      cVar6 = *pcVar13;
      while (cVar6 != '\0') {
        if (cVar6 == '\n') {
          *pcVar13 = '\0';
          break;
        }
        if ((cVar6 == ' ') || (cVar6 == '\t')) {
          *pcVar13 = '\0';
          cVar7 = '\0';
        }
        else if ((cVar7 == '\0') && (cVar7 = '\x01', lStack_1f0 != -1)) {
          if (lStack_1f0 == local_1f8) {
            cVar7 = FUN_007a2e50(&local_1f8,local_1e0,8);
            if (cVar7 == '\0') {
              if (local_1e8 != local_1e0) {
                FUN_007104f0();
              }
              lStack_1f0 = _UNK_0082eb88;
              cVar7 = '\x01';
              local_1f8 = _DAT_0082eb80;
              local_1e8 = local_1e0;
            }
            else {
              local_1e8[local_1f8] = pcVar13;
              local_1f8 = local_1f8 + 1;
            }
          }
          else {
            local_1e8[local_1f8] = pcVar13;
            local_1f8 = local_1f8 + 1;
          }
        }
        pcVar1 = pcVar13 + 1;
        pcVar13 = pcVar13 + 1;
        cVar6 = *pcVar1;
      }
      bVar5 = true;
      goto LAB_007ae035;
    }
LAB_007ae8cf:
    pcVar13 = (char *)0x0;
  }
  FUN_007104f0(local_238);
  FUN_007104f0(local_200);
  if (local_230 != 0) {
    puVar15 = local_220 + local_230;
    puVar16 = local_220;
    do {
      uVar4 = *puVar16;
      puVar16 = puVar16 + 1;
      FUN_007104f0(uVar4);
    } while (puVar16 != puVar15);
  }
  if (local_220 != local_218) {
    FUN_007104f0();
  }
  local_230 = _DAT_00840ce0;
  lStack_228 = _UNK_00840ce8;
  local_220 = local_218;
  if (local_1e8 != local_1e0) {
    FUN_007104f0();
  }
  local_1f8 = _DAT_00840cf0;
  lStack_1f0 = _UNK_00840cf8;
  local_1e8 = local_1e0;
  FUN_007104f0(local_1a0);
  local_1a0 = 0;
  local_1b0 = (undefined1  [16])0x0;
  if (puVar11 != (uint *)0x0) {
    uVar10 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    FUN_006fd190(puVar11);
    *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar10;
  }
LAB_007ae9a9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return pcVar13;
LAB_007ae63c:
  if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)uVar22 * 2) & 0x20) != 0)
  goto LAB_007ae647;
  bVar21 = pbVar23[1];
  uVar22 = (ulong)bVar21;
  pbVar23 = pbVar23 + 1;
  if ((bVar21 == 0x3b) || ((char)bVar21 < '\x01')) goto LAB_007ae647;
  goto LAB_007ae63c;
LAB_007ae647:
  *pbVar23 = 0;
  iVar8 = FUN_00776880(pbVar20,&local_254);
  uVar9 = local_254;
  if (iVar8 == 0) {
    uVar9 = 0xff;
    if (((int)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18)
         < 0) && (uVar9 = 0xffff, (uVar18 << 0x18 & 0xc0000000) != 0x80000000)) {
      uVar9 = 0xffffff;
    }
  }
LAB_007ae56e:
  if (local_1b0._8_8_ != -1) {
    uVar4 = local_1b0._0_8_;
    if (local_1b0._8_8_ == local_1b0._0_8_) {
      cVar6 = FUN_007a2e50(local_1b0,0,8);
      if (cVar6 == '\0') {
        FUN_007104f0(local_1a0);
        local_1a0 = 0;
        local_1b0._8_8_ = _UNK_0082eb88;
        local_1b0._0_8_ = _DAT_0082eb80;
      }
      else {
        uVar4 = local_1b0._0_8_;
        local_1b0._0_8_ = local_1b0._0_8_ + 1;
        puVar3 = (uint *)(local_1a0 + uVar4 * 8);
        *puVar3 = uVar18;
        puVar3[1] = uVar9;
      }
    }
    else {
      local_1b0._0_8_ = local_1b0._0_8_ + 1;
      *(ulong *)(local_1a0 + uVar4 * 8) = CONCAT44(uVar9,uVar18);
    }
  }
LAB_007ae5b3:
  bVar21 = (byte)uVar22;
  *pbVar23 = bVar21;
  pbVar20 = pbVar23;
  goto joined_r0x007ae4ac;
}

