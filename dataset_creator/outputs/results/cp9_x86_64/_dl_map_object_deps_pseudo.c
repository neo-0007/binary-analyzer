
/* WARNING: Removing unreachable block (ram,0x007a83a2) */
/* WARNING: Removing unreachable block (ram,0x007a8ae5) */

void _dl_map_object_deps(long *param_1,size_t *param_2,uint param_3,int param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  long *plVar5;
  size_t *psVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  size_t sVar12;
  char *pcVar13;
  long *__src;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  size_t *psVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  size_t *psVar22;
  uint uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  uint *__src_00;
  uint *puVar28;
  ulong *puVar29;
  long *plVar30;
  char *pcVar31;
  long *plVar32;
  long in_FS_OFFSET;
  bool bVar33;
  undefined1 auStack_508 [8];
  int local_500;
  int local_4fc;
  size_t *local_4f8;
  undefined1 *local_4f0;
  size_t *local_4e8;
  long *local_4e0;
  long *local_4d8;
  size_t *local_4d0;
  size_t local_4c8;
  size_t sStack_4c0;
  size_t *local_4b8;
  long *local_4b0;
  undefined1 *local_4a8;
  size_t local_4a0;
  undefined1 local_498 [8];
  long local_490;
  long *local_478;
  long *local_470;
  size_t local_468;
  char *local_460;
  size_t local_458;
  undefined1 *local_448;
  undefined8 local_440;
  undefined1 local_438 [1032];
  
  local_4e0 = (long *)CONCAT44(param_5,param_4);
  uVar18 = (ulong)(param_3 + 2) * 0x18 + 0x17;
  puVar25 = auStack_508;
  puVar24 = auStack_508;
  puVar27 = auStack_508;
  while (puVar24 != auStack_508 + -(uVar18 & 0xfffffffffffff000)) {
    puVar25 = puVar27 + -0x1000;
    *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(puVar27 + -8);
    puVar24 = puVar27 + -0x1000;
    puVar27 = puVar27 + -0x1000;
  }
  uVar18 = (ulong)((uint)uVar18 & 0xff0);
  lVar21 = -uVar18;
  puVar27 = puVar25 + lVar21;
  if (uVar18 != 0) {
    *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
  }
  local_4f8 = (size_t *)((ulong)(puVar25 + lVar21 + 0xf) & 0xfffffffffffffff0);
  bVar2 = *(byte *)((long)param_1 + 0x31c);
  *(uint *)local_4f8 = 0;
  local_4a0 = CONCAT71(local_4a0._1_7_,bVar2);
  local_4f8[1] = (size_t)param_1;
  local_4f8[2] = (size_t)(local_4f8 + 3);
  *(byte *)((long)param_1 + 0x31c) = bVar2 & 0x9f | 0x20;
  if (param_3 == 0) {
    local_4d8._0_4_ = 1;
    local_4b8 = local_4f8;
    plVar30 = param_1;
  }
  else {
    local_4d8._0_4_ = param_3 + 1;
    uVar18 = 1;
    psVar17 = local_4f8 + 3;
    do {
      uVar10 = (uint)uVar18;
      uVar18 = (ulong)(uVar10 + 1);
      sVar12 = *param_2;
      *(uint *)psVar17 = 0;
      param_2 = param_2 + 1;
      psVar17[1] = sVar12;
      psVar17[2] = (size_t)(local_4f8 + uVar18 * 3);
      *(byte *)(sVar12 + 0x31c) = *(byte *)(sVar12 + 0x31c) & 0x9f | 0x20;
      psVar17 = psVar17 + 3;
    } while (param_3 != uVar10);
    local_4b8 = local_4f8 + (ulong)param_3 * 3;
    plVar30 = (long *)local_4f8[1];
  }
  local_4b8[2] = 0;
  local_4f0 = local_438;
  local_440 = 0x400;
  local_500 = *(int *)(in_FS_OFFSET + -0x58);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
  local_4fc = param_4;
  local_4d0 = local_4f8;
  local_4b0 = param_1;
  local_448 = local_4f0;
  do {
    *(uint *)local_4d0 = 1;
    local_4a8 = (undefined1 *)plVar30[0x58];
    if (local_4a8 == (undefined1 *)0x0) {
      puVar25 = (undefined1 *)0x0;
      if (((plVar30[0x7a] == 0) && (local_4b0 != plVar30)) &&
         (sVar3 = *(short *)((long)plVar30 + 0x2ba), sVar3 != 0)) {
        *(undefined8 *)(puVar27 + -8) = 0x7a8a80;
        cVar8 = __libc_scratch_buffer_set_array_size(&local_448,sVar3,8);
        if (cVar8 == '\0') {
          lVar21 = local_4b0[1];
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar27 + -8) = 0x7a907c;
          _dl_signal_error(0xc,lVar21,0,"cannot allocate dependency buffer");
        }
        local_4a8 = local_448;
        puVar25 = local_4a8;
      }
    }
    else {
      local_4a8 = (undefined1 *)0x0;
      puVar25 = local_4a8;
    }
    local_4a8 = puVar25;
    if (((plVar30[9] != 0) || (plVar30[0x3d] != 0)) || (uVar18 = 0, plVar30[0x3b] != 0)) {
      local_4a0 = *(size_t *)(plVar30[0xd] + 8);
      if ((*(byte *)((long)plVar30 + 0x31e) & 0x20) != 0) {
        local_4a0 = local_4a0 + *plVar30;
      }
      local_468 = local_4a0;
      puVar29 = (ulong *)plVar30[2];
      local_470 = local_4e0;
      uVar16 = *puVar29;
      local_478 = plVar30;
      if (uVar16 == 0) {
        uVar18 = 0;
      }
      else {
        uVar14 = 0;
        local_4e8 = local_4d0;
        do {
          uVar18 = uVar14;
          if (uVar16 != 1) {
            puVar25 = puVar27;
            if ((uVar16 & 0xfffffffffffffffd) != 0x7ffffffd) goto LAB_007a841f;
            pcVar31 = (char *)(local_4a0 + puVar29[1]);
            *(undefined8 *)(puVar27 + -8) = 0x7a845b;
            lVar21 = _dl_dst_count(pcVar31);
            pcVar13 = pcVar31;
            if (lVar21 != 0) {
              if (__libc_enable_secure != 0) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(puVar27 + -8) = 0x7a90e0;
                _dl_signal_error(0,pcVar31,0,"DST not allowed in SUID/SGID programs");
              }
              *(undefined8 *)(puVar27 + -8) = 0x7a847f;
              sVar12 = strlen(pcVar31);
              pcVar13 = (char *)plVar30[0x6a];
              if (pcVar13 == (char *)0x0) {
                if (*(char *)plVar30[1] != '\0') {
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)(puVar27 + -8) = 0x7a90ba;
                  __assert_fail("(l)->l_name[0] == \'\\0\' || IS_RTLD (l)","dl-deps.c",0x11f,
                                "_dl_map_object_deps");
                }
                *(undefined8 *)(puVar27 + -8) = 0x7a8ccd;
                local_4c8 = sVar12;
                pcVar13 = (char *)_dl_get_origin();
                plVar30[0x6a] = (long)pcVar13;
                sVar12 = local_4c8;
                if (pcVar13 + -1 < (char *)0xfffffffffffffffe) goto LAB_007a849c;
LAB_007a8cec:
                uVar16 = 0;
              }
              else {
                if (pcVar13 == (char *)0xffffffffffffffff) goto LAB_007a8cec;
LAB_007a849c:
                *(undefined8 *)(puVar27 + -8) = 0x7a84a8;
                local_4c8 = sVar12;
                uVar16 = strlen(pcVar13);
                sVar12 = local_4c8;
              }
              uVar20 = _dl_platformlen;
              if (_dl_platformlen < 0x14) {
                uVar20 = 0x14;
              }
              if (uVar16 <= uVar20) {
                uVar16 = uVar20;
              }
              uVar16 = sVar12 + 0x17 + (uVar16 - 4) * lVar21;
              for (; puVar25 != puVar27 + -(uVar16 & 0xfffffffffffff000);
                  puVar25 = puVar25 + -0x1000) {
                *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
              }
              uVar16 = (ulong)((uint)uVar16 & 0xff0);
              lVar21 = -uVar16;
              puVar26 = puVar25 + lVar21;
              puVar27 = puVar25 + lVar21;
              if (uVar16 != 0) {
                *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
              }
              *(undefined8 *)(puVar25 + lVar21 + -8) = 0x7a8529;
              pcVar13 = (char *)_dl_dst_substitute(plVar30,pcVar31,
                                                   (ulong)(puVar25 + lVar21 + 0xf) &
                                                   0xfffffffffffffff0);
              if (*pcVar13 != '\0') goto LAB_007a8a9e;
              if (*puVar29 == 0x7ffffffd) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(puVar25 + lVar21 + -8) = 0x7a90cd;
                _dl_signal_error(0,pcVar31,0,"empty dynamic string token substitution");
              }
              goto LAB_007a8540;
            }
LAB_007a8a9e:
            local_460 = pcVar13;
            if (((byte)_dl_debug_mask & 1) != 0) {
              pcVar31 = (char *)plVar30[1];
              if ((*pcVar31 == '\0') && (pcVar31 = *(char **)_dl_argv, pcVar31 == (char *)0x0)) {
                pcVar31 = "<main program>";
              }
              *(undefined8 *)(puVar27 + -8) = 0x7a9011;
              _dl_debug_printf("load auxiliary object=%s requested by file=%s\n",pcVar13,pcVar31);
            }
            *(undefined8 *)(puVar27 + -8) = 0x7a8acf;
            iVar9 = _dl_catch_exception(local_498,openaux,&local_478);
            if (local_490 == 0) {
              puVar25 = puVar27 + -0x20;
              *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(puVar27 + -8);
              local_4c8 = *local_4e8;
              sStack_4c0 = local_4e8[1];
              psVar17 = (size_t *)((ulong)(puVar27 + -0x11) & 0xfffffffffffffff0);
              *psVar17 = local_4c8;
              psVar17[1] = sStack_4c0;
              psVar17[2] = local_4e8[2];
              *(uint *)local_4e8 = 0;
              local_4e8[1] = local_458;
              if (local_4a8 != (undefined1 *)0x0) {
                uVar18 = (ulong)((int)uVar14 + 1);
                *(size_t *)(local_4a8 + uVar14 * 8) = local_458;
              }
              psVar6 = psVar17;
              if ((*(byte *)(local_458 + 0x31c) & 0x60) == 0) {
                local_4d8 = (long *)CONCAT44(local_4d8._4_4_,(uint)local_4d8 + 1);
                local_4e8[2] = (size_t)psVar17;
                *(byte *)(local_458 + 0x31c) = *(byte *)(local_458 + 0x31c) & 0x9f | 0x20;
                lVar21 = *(long *)(local_458 + 0x20);
                psVar6 = local_4b8;
              }
              else {
                do {
                  psVar22 = psVar6;
                  psVar6 = (size_t *)psVar22[2];
                  if (psVar6 == (size_t *)0x0) {
                    sVar12 = psVar17[1];
                    *local_4e8 = *psVar17;
                    local_4e8[1] = sVar12;
                    local_4e8[2] = psVar17[2];
                    puVar25 = puVar27 + -0x20;
                    goto LAB_007a841f;
                  }
                } while (psVar6[1] != local_458);
                local_4e8[2] = (size_t)psVar17;
                if ((size_t *)psVar22[2] == local_4b8) {
                  local_4b8 = psVar22;
                }
                psVar22[2] = ((size_t *)psVar22[2])[2];
                lVar21 = *(long *)(local_458 + 0x20);
                psVar6 = local_4b8;
              }
              if (lVar21 != 0) {
                *(undefined8 *)(lVar21 + 0x18) = *(undefined8 *)(local_458 + 0x18);
              }
              if (*(long *)(local_458 + 0x18) != 0) {
                *(long *)(*(long *)(local_458 + 0x18) + 0x20) = lVar21;
              }
              sVar12 = psVar17[1];
              *(undefined8 *)(local_458 + 0x20) = *(undefined8 *)(sVar12 + 0x20);
              *(size_t *)(sVar12 + 0x20) = local_458;
              if (*(long *)(local_458 + 0x20) != 0) {
                *(size_t *)(*(long *)(local_458 + 0x20) + 0x18) = local_458;
              }
              *(size_t *)(local_458 + 0x18) = sVar12;
              bVar33 = psVar6 != local_4e8;
              local_4e8 = psVar17;
              local_4b8 = psVar17;
              if (bVar33) {
                puVar25 = puVar27 + -0x20;
                local_4b8 = psVar6;
              }
              goto LAB_007a841f;
            }
            if (*puVar29 == 0x7ffffffd) {
              *(undefined8 *)(puVar27 + -8) = 0x7a8fda;
              _dl_exception_free(local_498);
              puVar25 = puVar27;
              goto LAB_007a841f;
            }
LAB_007a85b0:
            local_4b8 = (size_t *)CONCAT44(local_4b8._4_4_,iVar9);
            if (iVar9 == 0) {
              local_4b8 = (size_t *)CONCAT44(local_4b8._4_4_,0xffffffff);
            }
            goto LAB_007a85cb;
          }
          pcVar31 = (char *)(local_4a0 + puVar29[1]);
          *(undefined8 *)(puVar27 + -8) = 0x7a8284;
          lVar21 = _dl_dst_count(pcVar31);
          pcVar13 = pcVar31;
          if (lVar21 == 0) {
LAB_007a835b:
            *(undefined8 *)(puVar27 + -8) = 0x7a837c;
            local_460 = pcVar13;
            iVar9 = _dl_catch_exception(local_498,openaux,&local_478);
            if (local_490 != 0) goto LAB_007a85b0;
            puVar25 = puVar27;
            if ((*(byte *)(local_458 + 0x31c) & 0x60) == 0) {
              puVar25 = puVar27 + -0x20;
              *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(puVar27 + -8);
              local_4d8 = (long *)CONCAT44(local_4d8._4_4_,(uint)local_4d8 + 1);
              psVar17 = (size_t *)((ulong)(puVar27 + -0x11) & 0xfffffffffffffff0);
              psVar17[1] = local_458;
              *(uint *)psVar17 = 0;
              psVar17[2] = 0;
              local_4b8[2] = (size_t)psVar17;
              *(byte *)(local_458 + 0x31c) = *(byte *)(local_458 + 0x31c) & 0x9f | 0x20;
              local_4b8 = psVar17;
            }
            if (local_4a8 != (undefined1 *)0x0) {
              *(size_t *)(local_4a8 + uVar14 * 8) = local_458;
              uVar18 = (ulong)((int)uVar14 + 1);
            }
          }
          else {
            if (__libc_enable_secure != 0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar27 + -8) = 0x7a905e;
              _dl_signal_error(0,pcVar31,0,"DST not allowed in SUID/SGID programs");
            }
            *(undefined8 *)(puVar27 + -8) = 0x7a82a6;
            sVar12 = strlen(pcVar31);
            pcVar13 = (char *)plVar30[0x6a];
            if (pcVar13 == (char *)0x0) {
              if (*(char *)plVar30[1] != '\0') {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(puVar27 + -8) = 0x7a909b;
                __assert_fail("(l)->l_name[0] == \'\\0\' || IS_RTLD (l)","dl-deps.c",0xf4,
                              "_dl_map_object_deps");
              }
              *(undefined8 *)(puVar27 + -8) = 0x7a8589;
              local_4c8 = sVar12;
              pcVar13 = (char *)_dl_get_origin();
              plVar30[0x6a] = (long)pcVar13;
              sVar12 = local_4c8;
              if (pcVar13 + -1 < (char *)0xfffffffffffffffe) goto LAB_007a82c3;
LAB_007a85a8:
              uVar16 = 0;
            }
            else {
              if (pcVar13 == (char *)0xffffffffffffffff) goto LAB_007a85a8;
LAB_007a82c3:
              *(undefined8 *)(puVar27 + -8) = 0x7a82cf;
              local_4c8 = sVar12;
              uVar16 = strlen(pcVar13);
              sVar12 = local_4c8;
            }
            uVar20 = _dl_platformlen;
            if (_dl_platformlen < 0x14) {
              uVar20 = 0x14;
            }
            if (uVar20 < uVar16) {
              uVar20 = uVar16;
            }
            uVar16 = sVar12 + 0x17 + (uVar20 - 4) * lVar21;
            for (puVar25 = puVar27; puVar25 != puVar27 + -(uVar16 & 0xfffffffffffff000);
                puVar25 = puVar25 + -0x1000) {
              *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
            }
            uVar16 = (ulong)((uint)uVar16 & 0xff0);
            lVar21 = -uVar16;
            puVar27 = puVar25 + lVar21;
            puVar26 = puVar25 + lVar21;
            if (uVar16 != 0) {
              *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
            }
            *(undefined8 *)(puVar25 + lVar21 + -8) = 0x7a8352;
            pcVar13 = (char *)_dl_dst_substitute(plVar30,pcVar31,
                                                 (ulong)(puVar25 + lVar21 + 0xf) &
                                                 0xfffffffffffffff0);
            if (*pcVar13 != '\0') goto LAB_007a835b;
LAB_007a8540:
            puVar25 = puVar26;
            if (((byte)_dl_debug_mask & 1) != 0) {
              *(undefined8 *)(puVar26 + -8) = 0x7a855e;
              _dl_debug_printf("cannot load auxiliary `%s\' because of empty dynamic string token substitution\n"
                               ,pcVar31);
            }
          }
LAB_007a841f:
          uVar16 = puVar29[2];
          puVar29 = puVar29 + 2;
          puVar27 = puVar25;
          uVar14 = uVar18;
        } while (uVar16 != 0);
      }
    }
    if (local_4a8 != (undefined1 *)0x0) {
      iVar9 = (int)uVar18;
      *(undefined8 *)(local_4a8 + uVar18 * 8) = 0;
      *(undefined8 *)(puVar27 + -8) = 0x7a8159;
      puVar11 = (undefined8 *)malloc((ulong)(iVar9 * 2 + 3) << 3);
      if (puVar11 == (undefined8 *)0x0) {
        if (local_448 != local_4f0) {
          *(undefined8 *)(puVar27 + -8) = 0x7a90f5;
          free(local_448);
        }
        lVar21 = local_4b0[1];
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar27 + -8) = 0x7a9113;
        _dl_signal_error(0xc,lVar21,0,"cannot allocate dependency list");
      }
      *puVar11 = plVar30;
      sVar12 = (ulong)(iVar9 + 1) * 8;
      *(undefined8 *)(puVar27 + -8) = 0x7a8183;
      memcpy(puVar11 + 1,local_4a8,sVar12);
      *(undefined8 *)(puVar27 + -8) = 0x7a8196;
      memcpy(puVar11 + (iVar9 + 2),puVar11,sVar12);
      *(byte *)((long)plVar30 + 0x31e) = *(byte *)((long)plVar30 + 0x31e) | 0x10;
      plVar30[0x7a] = (long)puVar11;
    }
    psVar17 = local_4d0;
    if ((uint)*local_4d0 != 0) break;
LAB_007a81b4:
    local_4d0 = psVar17;
    plVar30 = (long *)local_4d0[1];
  } while( true );
  while (psVar17 = (size_t *)psVar17[2], psVar17 != (size_t *)0x0) {
    if ((uint)*psVar17 == 0) goto LAB_007a81b4;
  }
  local_4b8 = (size_t *)((ulong)local_4b8 & 0xffffffff00000000);
LAB_007a85cb:
  psVar17 = local_4f8;
  if (local_448 != local_4f0) {
    *(undefined8 *)(puVar27 + -8) = 0x7a85e0;
    free(local_448);
  }
  if ((*(int *)(in_FS_OFFSET + -0x58) == 0) && (local_500 != 0)) {
    *(int *)(in_FS_OFFSET + -0x58) = local_500;
  }
  local_4c8 = local_4b0[0x7a];
  if (local_4c8 != 0) {
    local_4a0 = CONCAT71(local_4a0._1_7_,*(byte *)((long)local_4b0 + 0x31c));
    if ((*(byte *)((long)local_4b0 + 0x31c) & 3) == 2) {
      if (local_4b0[0x58] != 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar27 + -8) = &UNK_007a8c3d;
        __assert_fail("map->l_searchlist.r_list == NULL","dl-deps.c",0x1d8,"_dl_map_object_deps");
      }
    }
    else {
      local_4c8 = 0;
    }
  }
  *(undefined8 *)(puVar27 + -8) = 0x7a8654;
  __src = (long *)malloc((ulong)((uint)local_4d8 * 2 + 1) << 3);
  plVar30 = local_4b0;
  if (__src == (long *)0x0) goto LAB_007a9170;
  *(uint *)(local_4b0 + 0x59) = (uint)local_4d8;
  plVar32 = __src + ((uint)local_4d8 + 1);
  local_4b0[0x58] = (long)plVar32;
  if (local_4fc == 0) {
    uVar18 = 0;
    uVar16 = 0xffffffff;
    do {
      while( true ) {
        uVar14 = uVar18;
        plVar5 = (long *)psVar17[1];
        uVar18 = (ulong)((int)uVar14 + 1);
        if (local_4b0 == plVar5) break;
        plVar32[uVar14] = (long)plVar5;
        *(byte *)((long)plVar5 + 0x31c) = *(byte *)((long)plVar5 + 0x31c) & 0x9f;
        psVar17 = (size_t *)psVar17[2];
        if (psVar17 == (size_t *)0x0) {
          local_4a8 = (undefined1 *)CONCAT44(local_4a8._4_4_,(int)uVar16);
          goto LAB_007a86ee;
        }
      }
      plVar32[uVar14] = (long)local_4b0;
      *(byte *)((long)local_4b0 + 0x31c) = *(byte *)((long)local_4b0 + 0x31c) & 0x9f;
      psVar17 = (size_t *)psVar17[2];
      uVar16 = uVar14;
    } while (psVar17 != (size_t *)0x0);
    local_4a8 = (undefined1 *)CONCAT44(local_4a8._4_4_,(int)uVar14);
  }
  else {
    uVar18 = 0;
    uVar16 = 0xffffffff;
    do {
      plVar5 = (long *)psVar17[1];
      if ((*(byte *)((long)plVar5 + 0x31d) & 0x20) == 0) {
        if (local_4b0 == plVar5) {
          uVar16 = uVar18;
        }
        plVar32[uVar18] = (long)plVar5;
        uVar18 = (ulong)((int)uVar18 + 1);
      }
      else {
        *(int *)(local_4b0 + 0x59) = (int)local_4b0[0x59] + -1;
      }
      *(byte *)((long)plVar5 + 0x31c) = *(byte *)((long)plVar5 + 0x31c) & 0x9f;
      psVar17 = (size_t *)psVar17[2];
    } while (psVar17 != (size_t *)0x0);
    local_4a8 = (undefined1 *)CONCAT44(local_4a8._4_4_,(int)uVar16);
  }
LAB_007a86ee:
  uVar10 = (uint)uVar18;
  if (((_dl_debug_mask._1_1_ & 8) == 0) || ((long *)_dl_ns != local_4b0)) {
    puVar28 = (uint *)local_4b0[0x7b];
    if (puVar28 != (uint *)0x0) {
      if (uVar10 != 0) goto LAB_007a871b;
      goto LAB_007a8c78;
    }
LAB_007a8c00:
    puVar15 = (uint *)0x0;
  }
  else {
    if (uVar10 == 0) {
      puVar28 = (uint *)local_4b0[0x7b];
      if (puVar28 == (uint *)0x0) goto LAB_007a8c95;
LAB_007a8c78:
      *(byte *)((long)local_4b0 + 0x31c) = *(byte *)((long)local_4b0 + 0x31c) & 0x9f;
      if (*puVar28 == 0) goto LAB_007a8c95;
LAB_007a8760:
      __src_00 = puVar28 + 2;
      local_4d0 = (size_t *)(puVar28 + 4);
      puVar15 = (uint *)0x0;
      uVar23 = 0;
      local_4e8 = (size_t *)CONCAT44(local_4e8._4_4_,uVar10);
      local_4e0 = __src;
      local_4d8 = plVar32;
      do {
        while ((*(byte *)(*(long *)(__src_00 + (ulong)uVar23 * 2) + 0x31c) & 0x60) == 0) {
LAB_007a8790:
          uVar23 = uVar23 + 1;
          if (*puVar28 <= uVar23) goto LAB_007a8858;
        }
        uVar10 = *(uint *)(local_4b0 + 0x7c);
        *(undefined8 *)(puVar27 + -8) = 0x7a87d5;
        local_4a0 = (ulong)uVar23 * 8;
        puVar15 = (uint *)malloc((ulong)uVar10 * 8 + 8);
        if (puVar15 == (uint *)0x0) goto LAB_007a8790;
        uVar10 = uVar23 + 1;
        *(undefined8 *)(puVar27 + -8) = 0x7a87f4;
        memcpy(puVar15 + 2,__src_00,local_4a0);
        uVar4 = *puVar28;
        if (uVar10 < uVar4) {
          psVar17 = (size_t *)(__src_00 + (ulong)uVar10 * 2);
          uVar18 = (ulong)uVar23;
          do {
            uVar16 = uVar18;
            if ((*(byte *)(*psVar17 + 0x31c) & 0x60) == 0) {
              uVar16 = (ulong)((int)uVar18 + 1);
              *(size_t *)(puVar15 + uVar18 * 2 + 2) = *psVar17;
            }
            psVar17 = psVar17 + 1;
            uVar18 = uVar16;
          } while (psVar17 != local_4d0 + (ulong)((uVar4 - 2) - uVar23) + (ulong)uVar10);
          uVar10 = ((uVar4 - 1) + uVar10) - uVar23;
          uVar23 = (uint)uVar16;
        }
        *puVar15 = uVar23;
        uVar23 = uVar10 + 1;
      } while (uVar23 < *puVar28);
LAB_007a8858:
      uVar18 = (ulong)local_4e8 & 0xffffffff;
      __src = local_4e0;
      plVar32 = local_4d8;
      if ((int)local_4e8 == 0) goto LAB_007a8c95;
    }
    else {
      lVar21 = 0;
      local_4d8 = (long *)CONCAT44(local_4d8._4_4_,uVar10);
      while( true ) {
        plVar32 = *(long **)((long)plVar32 + lVar21);
        if ((plVar30 != plVar32) && ((plVar32[0x74] == 0 || (*(int *)(plVar32[0x74] + 8) == 0)))) {
          if ((plVar32[0x3d] != 0) || (plVar32[0x3b] != 0)) {
            lVar21 = plVar32[1];
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar27 + -8) = 0x7a9149;
            _dl_signal_error(0x16,lVar21,0,"Filters not supported with LD_TRACE_PRELINKING");
          }
          *(undefined8 *)(puVar27 + -8) = 0x7a8df7;
          psVar17 = (size_t *)_dl_build_local_scope(__src);
          uVar23 = (uint)psVar17;
          if ((uint)local_4d8 < uVar23) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar27 + -8) = 0x7a9132;
            __assert_fail("cnt <= nlist","dl-deps.c",0x217,"_dl_map_object_deps");
          }
          if (uVar23 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = (ulong)psVar17 & 0xffffffff;
            *(byte *)(*__src + 0x31c) = *(byte *)(*__src + 0x31c) & 0x9f;
            uVar16 = 1;
            if (uVar23 != 1) {
              do {
                *(byte *)(__src[uVar16] + 0x31c) = *(byte *)(__src[uVar16] + 0x31c) & 0x9f;
                if (*(long *)(__src[uVar16] + 0xc0) != 0) {
                  *(byte *)((long)plVar32 + 0x31e) = *(byte *)((long)plVar32 + 0x31e) | 8;
                }
                uVar16 = uVar16 + 1;
              } while (uVar18 != uVar16);
            }
          }
          local_4a0 = uVar18 * 8 + 0x10;
          *(undefined8 *)(puVar27 + -8) = 0x7a8e74;
          local_4d0 = psVar17;
          puVar11 = (undefined8 *)malloc(local_4a0);
          plVar32[0x74] = (long)puVar11;
          if (puVar11 == (undefined8 *)0x0) goto LAB_007a9170;
          *(int *)(puVar11 + 1) = (int)local_4d0;
          *puVar11 = puVar11 + 2;
          *(undefined8 *)(puVar27 + -8) = 0x7a8ea9;
          memcpy(puVar11 + 2,__src,local_4a0 - 0x10);
        }
        if ((ulong)(uVar10 - 1) << 3 == lVar21) break;
        plVar32 = (long *)plVar30[0x58];
        lVar21 = lVar21 + 8;
      }
      uVar18 = (ulong)local_4d8 & 0xffffffff;
      puVar28 = (uint *)local_4b0[0x7b];
      if (puVar28 == (uint *)0x0) goto LAB_007a8c00;
      plVar32 = (long *)local_4b0[0x58];
LAB_007a871b:
      uVar10 = (uint)uVar18;
      lVar21 = 0;
      do {
        plVar30 = plVar32 + lVar21;
        lVar21 = lVar21 + 1;
        *(byte *)(*plVar30 + 0x31c) = *(byte *)(*plVar30 + 0x31c) & 0x9f | 0x20;
      } while ((uint)lVar21 < uVar10);
      puVar15 = (uint *)0x0;
      *(byte *)((long)local_4b0 + 0x31c) = *(byte *)((long)local_4b0 + 0x31c) & 0x9f;
      if (*puVar28 != 0) goto LAB_007a8760;
    }
    lVar21 = 0;
    do {
      plVar30 = plVar32 + lVar21;
      lVar21 = lVar21 + 1;
      *(byte *)(*plVar30 + 0x31c) = *(byte *)(*plVar30 + 0x31c) & 0x9f;
    } while ((uint)lVar21 < (uint)uVar18);
  }
  uVar10 = (uint)uVar18;
  if ((uint)local_4a8 < uVar10) {
    plVar30 = (long *)local_4b0[0x58];
    if ((uint)local_4a8 == 0) {
      *(undefined8 *)(puVar27 + -8) = 0x7a8bf8;
      memcpy(__src,plVar30,uVar18 * 8);
    }
    else {
      *__src = plVar30[(ulong)local_4a8 & 0xffffffff];
      if (((uint)local_4a8 - 1 < 3) || (__src == plVar30)) {
        uVar16 = 0;
        do {
          __src[uVar16 + 1] = plVar30[uVar16];
          uVar16 = uVar16 + 1;
        } while (((ulong)local_4a8 & 0xffffffff) != uVar16);
      }
      else {
        lVar21 = 0;
        do {
          uVar7 = ((undefined8 *)((long)plVar30 + lVar21))[1];
          puVar11 = (undefined8 *)((long)__src + lVar21 + 8);
          *puVar11 = *(undefined8 *)((long)plVar30 + lVar21);
          puVar11[1] = uVar7;
          lVar21 = lVar21 + 0x10;
        } while (lVar21 != (ulong)((uint)local_4a8 >> 1) << 4);
        if (((ulong)local_4a8 & 1) != 0) {
          __src[((uint)local_4a8 & 0xfffffffe) + 1] = plVar30[(uint)local_4a8 & 0xfffffffe];
        }
      }
      uVar23 = (uint)local_4a8 + 1;
      if (uVar23 < uVar10) {
        uVar16 = (ulong)uVar23;
        if ((__src + uVar16 == plVar30 + uVar16 + 1) || ((uVar10 - (uint)local_4a8) - 2 < 3)) {
          lVar21 = uVar16 * 8;
          do {
            lVar19 = lVar21 + 8;
            *(undefined8 *)((long)__src + lVar21) = *(undefined8 *)((long)plVar30 + lVar21);
            lVar21 = lVar19;
          } while (((ulong)((uVar10 - 2) - (uint)local_4a8) + uVar16 + 1) * 8 != lVar19);
        }
        else {
          uVar10 = (uVar10 - (uint)local_4a8) - 1;
          lVar21 = 0;
          do {
            puVar11 = (undefined8 *)((long)plVar30 + lVar21 + uVar16 * 8);
            uVar7 = puVar11[1];
            puVar1 = (undefined8 *)((long)(__src + uVar16) + lVar21);
            *puVar1 = *puVar11;
            puVar1[1] = uVar7;
            lVar21 = lVar21 + 0x10;
          } while (lVar21 != (ulong)(uVar10 >> 1) << 4);
          uVar23 = uVar23 + (uVar10 & 0xfffffffe);
          if ((uVar10 & 0xfffffffe) != uVar10) {
            __src[uVar23] = plVar30[uVar23];
          }
        }
      }
    }
    lVar21 = *__src;
    lVar19 = *(long *)(&DAT_00931ba0 + *(long *)(lVar21 + 0x30) * 0xa0);
    *(undefined8 *)(puVar27 + -8) = 0x7a89d7;
    _dl_sort_maps(__src,uVar18,lVar19 != lVar21,0);
    __src[uVar18] = 0;
    *(byte *)((long)local_4b0 + 0x31e) = *(byte *)((long)local_4b0 + 0x31e) | 0x10;
    local_4b0[0x7a] = (long)__src;
    if (puVar15 != (uint *)0x0) {
      lVar21 = local_4b0[0x7b];
      local_4b0[0x7b] = (long)puVar15;
      *(undefined8 *)(puVar27 + -8) = 0x7a8a0d;
      _dl_scope_free(lVar21);
    }
    if (local_4c8 != 0) {
      *(undefined8 *)(puVar27 + -8) = 0x7a8a21;
      _dl_scope_free(local_4c8);
    }
    if ((int)local_4b8 == 0) {
      return;
    }
    if ((int)local_4b8 == -1) {
      local_4b8 = (size_t *)((ulong)local_4b8 & 0xffffffff00000000);
    }
    *(undefined8 *)(puVar27 + -8) = 0x7a9170;
    _dl_signal_exception((ulong)local_4b8 & 0xffffffff,local_498,0);
LAB_007a9170:
    lVar21 = local_4b0[1];
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar27 + -8) = 0x7a918e;
    _dl_signal_error(0xc,lVar21,0,"cannot allocate symbol search list");
  }
LAB_007a8c95:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar27 + -8) = 0x7a8cb4;
  __assert_fail("map_index < nlist","dl-deps.c",0x256,"_dl_map_object_deps");
}

