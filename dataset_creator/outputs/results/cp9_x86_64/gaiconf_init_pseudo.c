
/* WARNING: Type propagation algorithm not settling */

void gaiconf_init(void)

{
  char *pcVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 *__ptr;
  char cVar4;
  int iVar5;
  FILE *__stream;
  __ssize_t _Var6;
  char *pcVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uintmax_t uVar12;
  uintmax_t uVar13;
  undefined8 *puVar14;
  undefined1 *__base;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ushort *puVar17;
  long lVar18;
  char *unaff_RBX;
  char *pcVar19;
  size_t *psVar20;
  long lVar21;
  undefined8 **ppuVar22;
  uint uVar23;
  char *__s1;
  undefined1 *__base_00;
  size_t sVar24;
  long in_FS_OFFSET;
  bool bVar25;
  bool bVar26;
  size_t local_158;
  undefined8 *local_150;
  char local_12a;
  char local_129;
  undefined8 *local_128;
  size_t local_120;
  undefined8 *local_118;
  size_t local_110;
  char *local_108;
  size_t local_100;
  char *local_f8;
  char *local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  uint local_dc;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_12a = '\0';
  local_128 = (undefined8 *)0x0;
  local_120 = 0;
  local_118 = (undefined8 *)0x0;
  local_110 = 0;
  local_129 = '\0';
  __stream = fopen("/etc/gai.conf","rce");
  if (__stream != (FILE *)0x0) {
    iVar5 = fileno(__stream);
    iVar5 = fstat(iVar5,&local_d8);
    if (iVar5 == 0) {
      local_108 = (char *)0x0;
      uVar23 = __stream->_flags;
      local_100 = 0;
      __stream->_flags = uVar23 | 0x8000;
      if ((uVar23 & 0x10) == 0) {
        bVar26 = false;
        local_158 = 0;
        local_150 = (undefined8 *)0x0;
        do {
          _Var6 = getline(&local_108,&local_100,__stream);
          pcVar19 = local_108;
          if (_Var6 < 1) break;
          pcVar7 = strchr(local_108,0x23);
          if (pcVar7 != (char *)0x0) {
            *pcVar7 = '\0';
            pcVar19 = local_108;
          }
          cVar4 = *pcVar19;
          puVar17 = *(ushort **)(in_FS_OFFSET + -0x40);
          uVar2 = puVar17[cVar4];
          while ((uVar2 & 0x2000) != 0) {
            pcVar19 = pcVar19 + 1;
            cVar4 = *pcVar19;
            uVar2 = puVar17[cVar4];
          }
          pcVar7 = pcVar19;
          if (cVar4 == '\0') {
            lVar21 = 0;
            __s1 = pcVar19;
            pcVar8 = pcVar19;
          }
          else {
            while( true ) {
              cVar4 = pcVar7[1];
              __s1 = pcVar7 + 1;
              pcVar8 = __s1;
              if ((uVar2 & 0x2000) != 0) break;
              if (cVar4 == '\0') {
                lVar21 = (long)__s1 - (long)pcVar19;
                if ((*puVar17 & 0x2000) == 0) goto LAB_00760e80;
                goto LAB_00760b3a;
              }
              uVar2 = puVar17[cVar4];
              pcVar7 = __s1;
            }
            lVar18 = (long)cVar4;
            *pcVar7 = '\0';
            puVar17 = *(ushort **)(in_FS_OFFSET + -0x40);
            lVar21 = (long)pcVar7 - (long)pcVar19;
            local_f8 = __s1;
            if ((*(byte *)((long)puVar17 + lVar18 * 2 + 1) & 0x20) != 0) {
LAB_00760b3a:
              pcVar7 = pcVar7 + 2;
              do {
                pcVar8 = pcVar7;
                cVar4 = *pcVar8;
                lVar18 = (long)cVar4;
                pcVar7 = pcVar8 + 1;
                local_f8 = pcVar8;
              } while ((*(byte *)((long)puVar17 + lVar18 * 2 + 1) & 0x20) != 0);
            }
            while (__s1 = local_f8, cVar4 != '\0') {
              if ((*(byte *)((long)puVar17 + lVar18 * 2 + 1) & 0x20) != 0) {
                if (pcVar19 != pcVar8) {
                  pcVar7 = pcVar8 + 1;
                  *pcVar8 = '\0';
                  cVar4 = pcVar8[1];
                  puVar17 = *(ushort **)(in_FS_OFFSET + -0x40);
                  uVar2 = puVar17[cVar4];
                  goto joined_r0x00760bb0;
                }
                goto LAB_00760c80;
              }
              cVar4 = pcVar8[1];
              lVar18 = (long)cVar4;
              pcVar8 = pcVar8 + 1;
            }
          }
LAB_00760e80:
          local_f8 = pcVar8;
          if (pcVar19 == local_f8) goto LAB_00760c80;
          if ((*puVar17 & 0x2000) == 0) {
            *local_f8 = '\0';
            lVar18 = lVar21 + -7;
            bVar25 = lVar18 == 0;
            pcVar7 = local_f8;
            if (bVar25) goto LAB_00760ea8;
LAB_00760c29:
            if (bVar25 || SBORROW8(lVar21,7) != lVar18 < 0) {
              if (lVar21 == 5) {
                iVar5 = strcmp(pcVar19,"label");
                if (iVar5 == 0) {
                  pcVar19 = &local_12a;
                  psVar20 = &local_120;
                  ppuVar22 = &local_128;
                  goto LAB_00760db2;
                }
              }
              else if ((lVar21 == 6) && (iVar5 = strcmp(pcVar19,"reload"), iVar5 == 0)) {
                iVar5 = strcmp(__s1,"yes");
                gaiconf_reload_flag = (uint)(iVar5 == 0);
                if (iVar5 == 0) {
                  gaiconf_reload_flag_ever_set = 1;
                }
              }
              goto LAB_00760c80;
            }
            if ((lVar21 != 10) || (iVar5 = strcmp(pcVar19,"precedence"), iVar5 != 0))
            goto LAB_00760c80;
            pcVar19 = &local_129;
            psVar20 = &local_110;
            ppuVar22 = &local_118;
LAB_00760db2:
            cVar4 = add_prefixlist(ppuVar22,psVar20,pcVar19,__s1,pcVar7,&local_f8);
            if (cVar4 != '\0') goto LAB_00760c80;
LAB_00760dc7:
            free(local_108);
            fclose(__stream);
            puVar14 = local_128;
            goto joined_r0x00760df4;
          }
          do {
            pcVar7 = local_f8 + 1;
            cVar4 = *pcVar7;
            uVar2 = puVar17[cVar4];
joined_r0x00760bb0:
            local_f8 = pcVar7;
          } while ((uVar2 & 0x2000) != 0);
          pcVar8 = pcVar7;
          if (cVar4 != '\0') {
            bVar25 = false;
            while ((uVar2 & 0x2000) == 0) {
              pcVar1 = pcVar8 + 1;
              pcVar8 = pcVar8 + 1;
              local_f8 = pcVar8;
              if (*pcVar1 == '\0') goto LAB_00760c1c;
              bVar25 = true;
              unaff_RBX = pcVar8;
              uVar2 = puVar17[*pcVar1];
            }
            local_f8 = pcVar7;
            if (bVar25) {
              local_f8 = unaff_RBX;
            }
          }
LAB_00760c1c:
          *pcVar8 = '\0';
          lVar18 = lVar21 + -7;
          bVar25 = lVar21 == 7;
          if (!bVar25) goto LAB_00760c29;
LAB_00760ea8:
          iVar5 = strcmp(pcVar19,"scopev4");
          if (iVar5 == 0) {
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
            pcVar19 = strchr(__s1,0x2f);
            if (pcVar19 == (char *)0x0) {
              local_f8 = (char *)0x0;
            }
            else {
              local_f8 = pcVar19 + 1;
              *pcVar19 = '\0';
            }
            pcVar19 = local_f8;
            iVar5 = inet_pton(10,__s1,&local_e8);
            if (iVar5 == 0) {
              iVar5 = inet_pton(2,__s1,&local_dc);
              if (iVar5 != 0) {
                if (pcVar19 == (char *)0x0) {
                  if (*local_f0 == '\0') {
                    uVar12 = 0x20;
                    goto LAB_00761368;
                  }
                }
                else {
                  uVar12 = strtouq(pcVar19,&local_f0,10);
                  if (((uVar12 != 0xffffffffffffffff) && (*local_f0 == '\0')) && (uVar12 < 0x21)) {
LAB_00761368:
                    uVar13 = strtouq(pcVar7,&local_f0,10);
                    if (((uVar13 != 0xffffffffffffffff) && (*local_f0 == '\0')) &&
                       (uVar13 < 0x80000000)) {
                      lVar18 = uVar12 + 0x60;
                      puVar14 = (undefined8 *)malloc(0x18);
                      if (puVar14 == (undefined8 *)0x0) goto LAB_00760dc7;
                      uVar23 = 0;
                      if (lVar18 != 0x60) {
                        uVar23 = -1 << (0x80U - (char)lVar18 & 0x1f);
                        uVar23 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8
                                 | uVar23 << 0x18;
                      }
                      local_158 = local_158 + 1;
                      *(int *)(puVar14 + 1) = (int)uVar13;
                      bVar26 = (bool)(bVar26 | lVar18 == 0x60);
                      puVar14[2] = local_150;
                      *puVar14 = CONCAT44(uVar23,local_dc & uVar23);
                      local_150 = puVar14;
                    }
                  }
                }
              }
            }
            else if ((local_e8 == 0 && local_e4 == 0) && (local_e0 == -0x10000)) {
              if (pcVar19 == (char *)0x0) {
                if (*local_f0 == '\0') {
                  uVar12 = 0x80;
                  goto LAB_00760f9f;
                }
              }
              else {
                uVar12 = strtouq(pcVar19,&local_f0,10);
                if (((uVar12 != 0xffffffffffffffff) && (*local_f0 == '\0')) &&
                   (uVar12 - 0x60 < 0x21)) {
LAB_00760f9f:
                  uVar13 = strtouq(pcVar7,&local_f0,10);
                  if (((uVar13 != 0xffffffffffffffff) && (*local_f0 == '\0')) &&
                     (uVar13 < 0x80000000)) {
                    puVar14 = (undefined8 *)malloc(0x18);
                    if (puVar14 == (undefined8 *)0x0) goto LAB_00760dc7;
                    uVar23 = 0;
                    if (uVar12 != 0x60) {
                      uVar23 = -1 << (0x80U - (char)uVar12 & 0x1f);
                    }
                    uVar23 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                             uVar23 << 0x18;
                    local_158 = local_158 + 1;
                    *(int *)(puVar14 + 1) = (int)uVar13;
                    bVar26 = (bool)(bVar26 | uVar12 == 0x60);
                    puVar14[2] = local_150;
                    *puVar14 = CONCAT44(uVar23,local_dc & uVar23);
                    local_150 = puVar14;
                  }
                }
              }
            }
          }
LAB_00760c80:
        } while ((__stream->_flags & 0x10) == 0);
        sVar24 = local_120;
        free(local_108);
        fclose(__stream);
        if (sVar24 != 0) {
          iVar5 = (int)sVar24;
          if (local_12a == '\0') {
            sVar24 = sVar24 + 1;
            local_120 = sVar24;
            puVar9 = (undefined1 *)malloc(sVar24 * 0x18);
            puVar14 = local_128;
            if (puVar9 != (undefined1 *)0x0) {
              *(undefined8 *)((undefined1 (*) [16])(puVar9 + (long)iVar5 * 0x18))[1] = 0x100000000;
              *(undefined1 (*) [16])(puVar9 + (long)iVar5 * 0x18) = (undefined1  [16])0x0;
              goto LAB_00760cd6;
            }
          }
          else {
            puVar9 = (undefined1 *)malloc(sVar24 * 0x18);
            puVar14 = local_128;
            if (puVar9 != (undefined1 *)0x0) {
LAB_00760cd6:
              puVar14 = local_128;
              if (0 < iVar5) {
                lVar18 = (long)(int)(iVar5 - 1U) * 0x18;
                puVar10 = (undefined8 *)(puVar9 + lVar18);
                puVar15 = local_128;
                do {
                  uVar3 = puVar15[1];
                  puVar11 = puVar10 + -3;
                  *puVar10 = *puVar15;
                  puVar10[1] = uVar3;
                  puVar16 = puVar15 + 2;
                  puVar15 = (undefined8 *)puVar15[3];
                  puVar10[2] = *puVar16;
                  puVar10 = puVar11;
                } while (puVar11 !=
                         (undefined8 *)(puVar9 + (ulong)(iVar5 - 1U) * -0x18 + lVar18 + -0x18));
              }
              while (puVar14 != (undefined8 *)0x0) {
                puVar15 = (undefined8 *)puVar14[3];
                free(puVar14);
                puVar14 = puVar15;
              }
              local_128 = (undefined8 *)0x0;
              qsort(puVar9,sVar24,0x18,prefixcmp);
              goto LAB_007610b9;
            }
          }
joined_r0x00760df4:
          while (puVar15 = local_118, puVar14 != (undefined8 *)0x0) {
            puVar15 = (undefined8 *)puVar14[3];
            free(puVar14);
            puVar14 = puVar15;
          }
          while (puVar15 != (undefined8 *)0x0) {
            puVar14 = (undefined8 *)puVar15[3];
            free(puVar15);
            puVar15 = puVar14;
          }
          while (local_150 != (undefined8 *)0x0) {
            puVar14 = (undefined8 *)local_150[2];
            free(local_150);
            local_150 = puVar14;
          }
          goto LAB_00761275;
        }
        puVar9 = default_labels;
LAB_007610b9:
        __base_00 = default_precedence;
        if (local_110 != 0) goto LAB_007610d1;
LAB_00761190:
        if (local_158 == 0) {
          __base = default_scopes;
        }
        else {
          if (bVar26) {
            __base = (undefined1 *)malloc(local_158 * 0xc);
            if (__base == (undefined1 *)0x0) {
LAB_0076160b:
              if (puVar9 != default_labels) {
                free(puVar9);
              }
              puVar14 = local_128;
              if (__base_00 != default_precedence) {
                free(__base_00);
                puVar14 = local_128;
              }
              goto joined_r0x00760df4;
            }
            iVar5 = (int)local_158;
          }
          else {
            local_158 = local_158 + 1;
            __base = (undefined1 *)malloc(local_158 * 0xc);
            if (__base == (undefined1 *)0x0) goto LAB_0076160b;
            iVar5 = (int)local_158 + -1;
            *(undefined8 *)(__base + (long)iVar5 * 0xc) = 0;
            *(undefined4 *)((long)(__base + (long)iVar5 * 0xc) + 8) = 0xe;
          }
          if (0 < iVar5) {
            lVar18 = (long)(int)(iVar5 - 1U) * 0xc;
            puVar15 = (undefined8 *)(__base + lVar18);
            puVar14 = local_150;
            do {
              puVar16 = (undefined8 *)((long)puVar15 + -0xc);
              *puVar15 = *puVar14;
              puVar10 = puVar14 + 1;
              puVar14 = (undefined8 *)puVar14[2];
              *(undefined4 *)(puVar15 + 1) = *(undefined4 *)puVar10;
              puVar15 = puVar16;
            } while (puVar16 != (undefined8 *)(__base + (ulong)(iVar5 - 1U) * -0xc + lVar18 + -0xc))
            ;
          }
          while (local_150 != (undefined8 *)0x0) {
            puVar14 = (undefined8 *)local_150[2];
            free(local_150);
            local_150 = puVar14;
          }
          qsort(__base,local_158,0xc,scopecmp);
        }
      }
      else {
        fclose(__stream);
        if (local_110 != 0) {
          puVar9 = default_labels;
          bVar26 = false;
          local_150 = (undefined8 *)0x0;
          local_158 = 0;
LAB_007610d1:
          sVar24 = local_110;
          iVar5 = (int)local_110;
          if (local_129 == '\0') {
            sVar24 = local_110 + 1;
            local_110 = sVar24;
            __base_00 = (undefined1 *)malloc(sVar24 * 0x18);
            if (__base_00 == (undefined1 *)0x0) goto LAB_00761597;
            *(undefined8 *)((undefined1 (*) [16])(__base_00 + (long)iVar5 * 0x18))[1] = 0x2800000000
            ;
            *(undefined1 (*) [16])(__base_00 + (long)iVar5 * 0x18) = (undefined1  [16])0x0;
          }
          else {
            __base_00 = (undefined1 *)malloc(local_110 * 0x18);
            if (__base_00 == (undefined1 *)0x0) {
LAB_00761597:
              puVar14 = local_128;
              if (puVar9 != default_labels) {
                free(puVar9);
                puVar14 = local_128;
              }
              goto joined_r0x00760df4;
            }
          }
          puVar14 = local_118;
          if (0 < iVar5) {
            lVar18 = (long)(int)(iVar5 - 1U) * 0x18;
            puVar10 = (undefined8 *)(__base_00 + lVar18);
            puVar15 = local_118;
            do {
              uVar3 = puVar15[1];
              puVar11 = puVar10 + -3;
              *puVar10 = *puVar15;
              puVar10[1] = uVar3;
              puVar16 = puVar15 + 2;
              puVar15 = (undefined8 *)puVar15[3];
              puVar10[2] = *puVar16;
              puVar10 = puVar11;
            } while ((undefined8 *)(__base_00 + (ulong)(iVar5 - 1U) * -0x18 + lVar18 + -0x18) !=
                     puVar11);
          }
          while (puVar14 != (undefined8 *)0x0) {
            puVar15 = (undefined8 *)puVar14[3];
            free(puVar14);
            puVar14 = puVar15;
          }
          local_118 = (undefined8 *)0x0;
          qsort(__base_00,sVar24,0x18,prefixcmp);
          goto LAB_00761190;
        }
        __base_00 = default_precedence;
        puVar9 = default_labels;
        __base = default_scopes;
      }
      __ptr = labels;
      bVar26 = labels != default_labels;
      labels = puVar9;
      if (bVar26) {
        free(__ptr);
      }
      puVar9 = precedence;
      bVar26 = precedence != default_precedence;
      precedence = __base_00;
      if (bVar26) {
        free(puVar9);
      }
      puVar9 = scopes;
      bVar26 = scopes != default_scopes;
      scopes = __base;
      if (bVar26) {
        free(puVar9);
      }
      gaiconf_mtime = local_d8.st_mtim.tv_sec;
      DAT_0093db58 = local_d8.st_mtim.tv_nsec;
      goto LAB_007612c4;
    }
    fclose(__stream);
  }
LAB_00761275:
  puVar9 = labels;
  if (labels != default_labels) {
    labels = default_labels;
    free(puVar9);
  }
  puVar9 = precedence;
  if (precedence != default_precedence) {
    precedence = default_precedence;
    free(puVar9);
  }
  puVar9 = scopes;
  if (scopes != default_scopes) {
    scopes = default_scopes;
    free(puVar9);
  }
LAB_007612c4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

