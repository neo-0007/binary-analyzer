
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __resolv_conf_load(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 uVar3;
  void *__ptr;
  bool bVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  in_addr iVar10;
  FILE *__stream;
  char *pcVar11;
  __ssize_t _Var12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  bool bVar18;
  byte *pbVar19;
  byte bVar20;
  ulong uVar21;
  byte *pbVar22;
  long in_FS_OFFSET;
  uint local_254;
  size_t local_250;
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
  void *local_1a0;
  undefined1 local_198 [8];
  undefined8 *local_190;
  long local_188;
  undefined8 *local_180;
  long local_178;
  void *local_170;
  undefined8 local_168;
  uint local_160;
  undefined8 local_15c;
  undefined4 local_154;
  char local_148 [255];
  undefined1 local_49;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _res_hconf_init();
  __stream = fopen("/etc/resolv.conf","rce");
  if (__stream == (FILE *)0x0) {
    pcVar11 = (char *)0x0;
    if ((0x28 < *(uint *)(in_FS_OFFSET + -0x58)) ||
       ((0x10000302006U >> ((ulong)*(uint *)(in_FS_OFFSET + -0x58) & 0x3f) & 1) == 0))
    goto LAB_007a5069;
  }
  local_238 = (char *)0x0;
  local_200 = (char *)0x0;
  local_1a0 = (void *)0x0;
  local_230 = _DAT_00836ac0;
  lStack_228 = _UNK_00836ac8;
  local_1f8 = _DAT_00836ad0;
  lStack_1f0 = _UNK_00836ad8;
  local_1b0 = (undefined1  [16])0x0;
  if (param_1 == (undefined8 *)0x0) {
    local_15c = DAT_00836ae0;
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
  pcVar11 = getenv("LOCALDOMAIN");
  if (pcVar11 == (char *)0x0) {
    bVar4 = false;
LAB_007a46f5:
    if (__stream != (FILE *)0x0) {
      __stream->_flags = __stream->_flags | 0x8000;
LAB_007a4710:
      _Var12 = getline(&local_238,&local_250,__stream);
      pcVar11 = local_238;
      if (0 < _Var12) {
        if ((*local_238 != ';') && (*local_238 != '#')) {
          iVar8 = strncmp(local_238,"domain",6);
          if (iVar8 == 0) {
            if ((pcVar11[6] == ' ') || (pcVar11[6] == '\t')) {
              if (!bVar4) {
                pcVar11 = pcVar11 + 6;
                do {
                  do {
                    cVar6 = pcVar11[1];
                    pcVar11 = pcVar11 + 1;
                  } while (cVar6 == ' ');
                } while (cVar6 == '\t');
                if ((cVar6 != '\0') && (cVar6 != '\n')) {
                  pcVar11 = strdup(pcVar11);
                  if (pcVar11 == (char *)0x0) goto LAB_007a4f8f;
                  free(local_200);
                  local_1f8 = 0;
                  local_200 = pcVar11;
                  if (lStack_1f0 != -1) {
                    if (lStack_1f0 == 0) {
                      cVar6 = __libc_dynarray_emplace_enlarge(&local_1f8,local_1e0,8);
                      if (cVar6 == '\0') {
                        if (local_1e8 != local_1e0) {
                          free(local_1e8);
                        }
                        lStack_1f0 = _UNK_00824968;
                        local_1f8 = _DAT_00824960;
                        local_1e8 = local_1e0;
                      }
                      else {
                        local_1e8[local_1f8] = pcVar11;
                        local_1f8 = local_1f8 + 1;
                      }
                    }
                    else {
                      local_1f8 = 1;
                      *local_1e8 = pcVar11;
                    }
                  }
                  pcVar11 = strpbrk(pcVar11," \t\n");
                  if (pcVar11 != (char *)0x0) {
                    *pcVar11 = '\0';
                  }
                }
              }
              goto LAB_007a4710;
            }
          }
          else {
            iVar8 = strncmp(pcVar11,"search",6);
            if ((iVar8 == 0) &&
               (cVar6 = pcVar11[6], bVar18 = cVar6 == ' ' || cVar6 == '\t',
               cVar6 == ' ' || cVar6 == '\t')) {
              if (!bVar4) {
                pcVar11 = pcVar11 + 6;
                do {
                  do {
                    cVar6 = pcVar11[1];
                    pcVar11 = pcVar11 + 1;
                  } while (cVar6 == ' ');
                } while (cVar6 == '\t');
                if (cVar6 != '\0' && cVar6 != '\n') {
                  pcVar13 = strchr(pcVar11,10);
                  if (pcVar13 != (char *)0x0) {
                    *pcVar13 = '\0';
                  }
                  pcVar11 = strdup(pcVar11);
                  if (pcVar11 == (char *)0x0) goto LAB_007a4f8f;
                  free(local_200);
                  local_1f8 = 0;
                  local_200 = pcVar11;
                  if (lStack_1f0 != -1) {
                    if (lStack_1f0 == 0) {
                      cVar6 = __libc_dynarray_emplace_enlarge(&local_1f8,local_1e0,8);
                      if (cVar6 == '\0') {
                        if (local_1e8 != local_1e0) {
                          free(local_1e8);
                        }
                        lStack_1f0 = _UNK_00824968;
                        local_1f8 = _DAT_00824960;
                        local_1e8 = local_1e0;
                      }
                      else {
                        local_1e8[local_1f8] = pcVar11;
                        local_1f8 = local_1f8 + 1;
                      }
                    }
                    else {
                      local_1f8 = 1;
                      *local_1e8 = pcVar11;
                    }
                  }
                  cVar6 = *pcVar11;
                  cVar7 = bVar18;
                  while (cVar6 != '\0') {
                    if ((cVar6 == ' ') || (cVar6 == '\t')) {
                      *pcVar11 = '\0';
                      cVar7 = '\0';
                    }
                    else if ((cVar7 == '\0') && (cVar7 = bVar18, lStack_1f0 != -1)) {
                      if (lStack_1f0 == local_1f8) {
                        cVar7 = __libc_dynarray_emplace_enlarge(&local_1f8,local_1e0,8);
                        if (cVar7 == '\0') {
                          if (local_1e8 != local_1e0) {
                            free(local_1e8);
                          }
                          lStack_1f0 = _UNK_00824968;
                          local_1f8 = _DAT_00824960;
                          local_1e8 = local_1e0;
                          cVar7 = bVar18;
                        }
                        else {
                          local_1e8[local_1f8] = pcVar11;
                          local_1f8 = local_1f8 + 1;
                        }
                      }
                      else {
                        local_1e8[local_1f8] = pcVar11;
                        local_1f8 = local_1f8 + 1;
                      }
                    }
                    pcVar13 = pcVar11 + 1;
                    pcVar11 = pcVar11 + 1;
                    cVar6 = *pcVar13;
                  }
                }
              }
              goto LAB_007a4710;
            }
          }
          iVar8 = strncmp(pcVar11,"nameserver",10);
          if ((iVar8 == 0) && ((pcVar11[10] == ' ' || (pcVar11[10] == '\t')))) {
            pcVar11 = pcVar11 + 10;
            do {
              do {
                pcVar13 = pcVar11 + 1;
                pcVar11 = pcVar11 + 1;
              } while (*pcVar13 == ' ');
            } while (*pcVar13 == '\t');
            pcVar13 = strpbrk(pcVar11," \t\n");
            if (pcVar13 != (char *)0x0) {
              *pcVar13 = '\0';
            }
            if (((*pcVar11 == '\0') || (*pcVar11 == '\n')) ||
               (iVar8 = __inet_aton_exact(pcVar11,&local_254), uVar17 = local_254, iVar8 == 0)) {
              pcVar13 = strchr(pcVar11,0x25);
              if (pcVar13 != (char *)0x0) {
                *pcVar13 = '\0';
              }
              if (*pcVar11 == '\0') goto LAB_007a4710;
              iVar8 = inet_pton(10,pcVar11,&local_248);
              if (iVar8 < 1) goto LAB_007a4710;
              puVar14 = (undefined8 *)malloc(0x1c);
              if (puVar14 == (undefined8 *)0x0) goto LAB_007a4f8f;
              *puVar14 = 0x3500000a;
              *(undefined4 *)(puVar14 + 3) = 0;
              puVar14[1] = local_248;
              puVar14[2] = uStack_240;
              if (pcVar13 != (char *)0x0) {
                __inet6_scopeid_pton(&local_248,pcVar13 + 1,puVar14 + 3);
              }
            }
            else {
              puVar14 = (undefined8 *)malloc(0x10);
              if (puVar14 == (undefined8 *)0x0) goto LAB_007a4f8f;
              *(uint *)((long)puVar14 + 4) = uVar17;
              *(undefined4 *)puVar14 = 0x35000002;
            }
            puVar15 = (undefined8 *)nameserver_list_emplace(&local_230);
            if (puVar15 == (undefined8 *)0x0) {
              free(puVar14);
              goto LAB_007a4f8f;
            }
            *puVar15 = puVar14;
            goto LAB_007a4710;
          }
          iVar8 = strncmp(pcVar11,"sortlist",8);
          if ((iVar8 == 0) && ((bVar20 = pcVar11[8], bVar20 == 0x20 || (bVar20 == 9)))) {
            pbVar19 = (byte *)(pcVar11 + 8);
            do {
              uVar21 = (ulong)bVar20;
joined_r0x007a4b6c:
              if ((bVar20 != 0x20) && (bVar20 = (byte)uVar21, bVar20 != 9)) {
                if ((0x3b < bVar20) || ((0x800000000000401U >> (uVar21 & 0x3f) & 1) == 0)) {
                  pbVar22 = pbVar19;
                  if (bVar20 != 0) {
                    do {
                      bVar20 = (byte)uVar21;
                      if (bVar20 == 0x2f) {
LAB_007a4c90:
                        *pbVar22 = 0;
                        iVar8 = __inet_aton_exact(pbVar19,&local_254);
                        uVar17 = local_254;
                        if (iVar8 == 0) goto LAB_007a4c73;
                        *pbVar22 = bVar20;
                        pbVar19 = pbVar22 + 1;
                        bVar20 = pbVar22[1];
                        uVar21 = (ulong)bVar20;
                        pbVar22 = pbVar19;
                        if ((bVar20 == 0x3b) || ((char)bVar20 < '\x01')) goto LAB_007a4d07;
                        goto LAB_007a4cfc;
                      }
                      if (bVar20 == 0x3b) break;
                      if (bVar20 == 0x26) goto LAB_007a4c90;
                      if (((char)bVar20 < '\0') ||
                         ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)bVar20 * 2) &
                          0x20) != 0)) break;
                      pbVar1 = pbVar22 + 1;
                      uVar21 = (ulong)*pbVar1;
                      pbVar22 = pbVar22 + 1;
                      if (*pbVar1 == 0) break;
                    } while( true );
                  }
                  *pbVar22 = 0;
                  iVar8 = __inet_aton_exact(pbVar19,&local_254);
                  if (iVar8 != 0) {
                    uVar9 = 0xff;
                    uVar17 = local_254;
                    if (((int)(local_254 >> 0x18 | (local_254 & 0xff0000) >> 8 |
                               (local_254 & 0xff00) << 8 | local_254 << 0x18) < 0) &&
                       (uVar9 = 0xffff, (local_254 << 0x18 & 0xc0000000) != 0x80000000)) {
                      uVar9 = 0xffffff;
                    }
                    goto LAB_007a4c2e;
                  }
                  goto LAB_007a4c73;
                }
                goto LAB_007a4710;
              }
              bVar20 = pbVar19[1];
              pbVar19 = pbVar19 + 1;
            } while( true );
          }
          iVar8 = strncmp(pcVar11,"options",7);
          if ((iVar8 == 0) && ((pcVar11[7] == ' ' || (pcVar11[7] == '\t')))) {
            res_setoptions(&local_238,pcVar11 + 7);
          }
        }
        goto LAB_007a4710;
      }
      if ((__stream->_flags & 0x20) != 0) goto LAB_007a4f8f;
    }
    if (local_230 == 0) {
      puVar14 = (undefined8 *)nameserver_list_emplace(&local_230);
      if (puVar14 != (undefined8 *)0x0) {
        iVar10 = inet_makeaddr(0x7f,1);
        puVar16 = (undefined4 *)malloc(0x10);
        if (puVar16 != (undefined4 *)0x0) {
          puVar16[1] = iVar10.s_addr;
          *puVar16 = 0x35000002;
          *puVar14 = puVar16;
          goto LAB_007a4d76;
        }
        *puVar14 = 0;
      }
      goto LAB_007a4f8f;
    }
LAB_007a4d76:
    if (local_1f8 == 0) {
      local_49 = 0;
      iVar8 = gethostname(local_148,0xff);
      if ((iVar8 != 0) || (pcVar11 = strchr(local_148,0x2e), pcVar11 == (char *)0x0))
      goto LAB_007a4e20;
      pcVar11 = strdup(pcVar11 + 1);
      if (pcVar11 != (char *)0x0) {
        free(local_200);
        local_200 = pcVar11;
        if (lStack_1f0 != -1) {
          if (lStack_1f0 == local_1f8) {
            cVar6 = __libc_dynarray_emplace_enlarge(&local_1f8,local_1e0,8);
            if (cVar6 == '\0') {
              if (local_1e8 != local_1e0) {
                free(local_1e8);
              }
              lStack_1f0 = _UNK_00824968;
              local_1f8 = _DAT_00824960;
              local_1e8 = local_1e0;
            }
            else {
              local_1e8[local_1f8] = pcVar11;
              local_1f8 = local_1f8 + 1;
            }
          }
          else {
            local_1e8[local_1f8] = pcVar11;
            local_1f8 = local_1f8 + 1;
          }
        }
        goto LAB_007a4e20;
      }
    }
    else {
LAB_007a4e20:
      pcVar11 = getenv("RES_OPTIONS");
      if (pcVar11 != (char *)0x0) {
        res_setoptions(&local_238,pcVar11);
      }
      if (((lStack_228 == -1) || (lStack_1f0 == -1)) || (local_1b0._8_8_ == -1)) {
        pcVar11 = (char *)0x0;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
      }
      else {
        if ((param_2 != 0) &&
           (cVar6 = __file_change_detection_for_fp(param_2,__stream), cVar6 == '\0'))
        goto LAB_007a4f8f;
        local_190 = local_220;
        local_188 = local_230;
        local_180 = local_1e8;
        local_178 = local_1f8;
        local_170 = local_1a0;
        local_168 = local_1b0._0_8_;
        pcVar11 = (char *)__resolv_conf_allocate(local_198);
      }
    }
  }
  else {
    pcVar11 = strdup(pcVar11);
    if (pcVar11 != (char *)0x0) {
      free(local_200);
      local_200 = pcVar11;
      if (lStack_1f0 != -1) {
        if (lStack_1f0 == local_1f8) {
          cVar6 = __libc_dynarray_emplace_enlarge(&local_1f8,local_1e0,8);
          if (cVar6 == '\0') {
            if (local_1e8 != local_1e0) {
              free(local_1e8);
            }
            lStack_1f0 = _UNK_00824968;
            local_1f8 = _DAT_00824960;
            local_1e8 = local_1e0;
          }
          else {
            local_1e8[local_1f8] = pcVar11;
            local_1f8 = local_1f8 + 1;
          }
        }
        else {
          local_1e8[local_1f8] = pcVar11;
          local_1f8 = local_1f8 + 1;
        }
      }
      cVar7 = '\x01';
      cVar6 = *pcVar11;
      while (cVar6 != '\0') {
        if (cVar6 == '\n') {
          *pcVar11 = '\0';
          break;
        }
        if ((cVar6 == ' ') || (cVar6 == '\t')) {
          *pcVar11 = '\0';
          cVar7 = '\0';
        }
        else if ((cVar7 == '\0') && (cVar7 = '\x01', lStack_1f0 != -1)) {
          if (lStack_1f0 == local_1f8) {
            cVar7 = __libc_dynarray_emplace_enlarge(&local_1f8,local_1e0,8);
            if (cVar7 == '\0') {
              if (local_1e8 != local_1e0) {
                free(local_1e8);
              }
              lStack_1f0 = _UNK_00824968;
              cVar7 = '\x01';
              local_1f8 = _DAT_00824960;
              local_1e8 = local_1e0;
            }
            else {
              local_1e8[local_1f8] = pcVar11;
              local_1f8 = local_1f8 + 1;
            }
          }
          else {
            local_1e8[local_1f8] = pcVar11;
            local_1f8 = local_1f8 + 1;
          }
        }
        pcVar13 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
        cVar6 = *pcVar13;
      }
      bVar4 = true;
      goto LAB_007a46f5;
    }
LAB_007a4f8f:
    pcVar11 = (char *)0x0;
  }
  free(local_238);
  free(local_200);
  if (local_230 != 0) {
    puVar14 = local_220 + local_230;
    puVar15 = local_220;
    do {
      __ptr = (void *)*puVar15;
      puVar15 = puVar15 + 1;
      free(__ptr);
    } while (puVar15 != puVar14);
  }
  if (local_220 != local_218) {
    free(local_220);
  }
  local_230 = _DAT_00836ac0;
  lStack_228 = _UNK_00836ac8;
  local_220 = local_218;
  if (local_1e8 != local_1e0) {
    free(local_1e8);
  }
  local_1f8 = _DAT_00836ad0;
  lStack_1f0 = _UNK_00836ad8;
  local_1e8 = local_1e0;
  free(local_1a0);
  local_1a0 = (void *)0x0;
  local_1b0 = (undefined1  [16])0x0;
  if (__stream != (FILE *)0x0) {
    uVar3 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    fclose(__stream);
    *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar3;
  }
LAB_007a5069:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pcVar11;
LAB_007a4cfc:
  if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)uVar21 * 2) & 0x20) != 0)
  goto LAB_007a4d07;
  bVar20 = pbVar22[1];
  uVar21 = (ulong)bVar20;
  pbVar22 = pbVar22 + 1;
  if ((bVar20 == 0x3b) || ((char)bVar20 < '\x01')) goto LAB_007a4d07;
  goto LAB_007a4cfc;
LAB_007a4d07:
  *pbVar22 = 0;
  iVar8 = __inet_aton_exact(pbVar19,&local_254);
  uVar9 = local_254;
  if (iVar8 == 0) {
    uVar9 = 0xff;
    if (((int)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18)
         < 0) && (uVar9 = 0xffff, (uVar17 << 0x18 & 0xc0000000) != 0x80000000)) {
      uVar9 = 0xffffff;
    }
  }
LAB_007a4c2e:
  if (local_1b0._8_8_ != -1) {
    uVar5 = local_1b0._0_8_;
    if (local_1b0._8_8_ == local_1b0._0_8_) {
      cVar6 = __libc_dynarray_emplace_enlarge(local_1b0,0,8);
      if (cVar6 == '\0') {
        free(local_1a0);
        local_1a0 = (void *)0x0;
        local_1b0._8_8_ = _UNK_00824968;
        local_1b0._0_8_ = _DAT_00824960;
      }
      else {
        uVar5 = local_1b0._0_8_;
        local_1b0._0_8_ = local_1b0._0_8_ + 1;
        puVar2 = (uint *)((long)local_1a0 + uVar5 * 8);
        *puVar2 = uVar17;
        puVar2[1] = uVar9;
      }
    }
    else {
      local_1b0._0_8_ = local_1b0._0_8_ + 1;
      *(ulong *)((long)local_1a0 + uVar5 * 8) = CONCAT44(uVar9,uVar17);
    }
  }
LAB_007a4c73:
  bVar20 = (byte)uVar21;
  *pbVar22 = bVar20;
  pbVar19 = pbVar22;
  goto joined_r0x007a4b6c;
}

