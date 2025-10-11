
void _dl_close_worker_part_0_isra_0(long param_1,char param_2)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  undefined *puVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  undefined1 *puVar23;
  undefined4 *puVar24;
  long *plVar25;
  long *plVar26;
  undefined1 *puVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  void *pvVar31;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [8];
  long *local_b0;
  int local_a8;
  uint local_a4;
  long *local_a0;
  long local_98;
  long local_90;
  char local_85;
  uint local_84;
  pthread_mutex_t *local_80;
  undefined1 *local_78;
  undefined **local_70;
  long local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  char local_46;
  char local_45;
  uint local_44;
  undefined8 local_40;
  
  local_78 = auStack_b8;
  local_46 = param_2;
  local_80 = (pthread_mutex_t *)(param_1 * 0xa0 + 0x931ba8);
  local_70 = &_dl_ns + param_1 * 0x14;
  do {
    dl_close_state_2 = 1;
    uVar29 = *(uint *)(local_70 + 1);
    local_40 = (long *)(ulong)uVar29;
    uVar30 = (ulong)uVar29 * 8 + 0xf;
    puVar23 = local_78 + -(uVar30 & 0xfffffffffffff000);
    for (puVar27 = local_78; puVar27 != puVar23; puVar27 = puVar27 + -0x1000) {
      *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(puVar27 + -8);
    }
    uVar30 = (ulong)((uint)uVar30 & 0xff0);
    lVar7 = -uVar30;
    if (uVar30 != 0) {
      *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(puVar27 + -8);
    }
    puVar12 = *local_70;
    if (puVar12 == (undefined *)0x0) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      puVar18 = (undefined8 *)(puVar27 + lVar7);
      do {
        *(uint *)(puVar12 + 0x3f4) = uVar21;
        uVar21 = uVar21 + 1;
        puVar12[0x31d] = puVar12[0x31d] & 0xf9;
        *puVar18 = puVar12;
        puVar12 = *(undefined **)(puVar12 + 0x18);
        puVar18 = puVar18 + 1;
      } while (puVar12 != (undefined *)0x0);
    }
    if (uVar29 != uVar21) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar27 + lVar7 + -8) = &UNK_0077a715;
      __assert_fail("idx == nloaded","dl-close.c",0xb8,"_dl_close_worker");
    }
    uVar21 = 0;
    if (uVar29 == 0) {
      *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a61a;
      _dl_sort_maps((long)puVar27 + lVar7,0,param_1 == 0,1);
    }
    else {
LAB_00779afb:
      do {
        lVar16 = *(long *)(puVar27 + (long)(int)uVar21 * 8 + lVar7);
        if ((*(byte *)(lVar16 + 0x31d) & 4) == 0) {
          if (((((*(ulong *)(lVar16 + 0x318) & 0x3ffffffff) == 0x200000000) &&
               (*(char *)(lVar16 + 799) == '\0')) && (*(long *)(lVar16 + 0x468) == 0)) &&
             ((*(byte *)(lVar16 + 0x31d) & 2) == 0)) {
            uVar21 = uVar21 + 1;
            if (uVar29 <= uVar21) break;
            goto LAB_00779afb;
          }
          plVar13 = *(long **)(lVar16 + 0x3d0);
          *(byte *)(lVar16 + 0x31d) = *(byte *)(lVar16 + 0x31d) | 6;
          *(undefined4 *)(lVar16 + 0x3f4) = 0xffffffff;
          if (plVar13 != (long *)0x0) {
            lVar20 = plVar13[1];
            while (lVar20 != 0) {
              uVar22 = *(uint *)(lVar20 + 0x3f4);
              if (uVar22 != 0xffffffff) {
                if (((int)uVar22 < 0) || (uVar29 <= uVar22)) {
                    /* WARNING: Subroutine does not return */
                  *(undefined **)(puVar27 + lVar7 + -8) = &UNK_00779bc1;
                  __assert_fail("(*lp)->l_idx >= 0 && (*lp)->l_idx < nloaded","dl-close.c",0xde,
                                "_dl_close_worker");
                }
                if ((*(byte *)(lVar20 + 0x31d) & 2) == 0) {
                  *(byte *)(lVar20 + 0x31d) = *(byte *)(lVar20 + 0x31d) | 2;
                  iVar11 = *(int *)(plVar13[1] + 0x3f4);
                  if (iVar11 <= (int)uVar21) {
                    uVar21 = iVar11 - 1;
                  }
                }
              }
              lVar20 = plVar13[2];
              plVar13 = plVar13 + 1;
            }
          }
          piVar1 = *(int **)(lVar16 + 0x3d8);
          if ((piVar1 != (int *)0x0) && (iVar11 = *piVar1, iVar11 != 0)) {
            plVar13 = (long *)(piVar1 + 2);
            do {
              lVar16 = *plVar13;
              uVar22 = *(uint *)(lVar16 + 0x3f4);
              if (uVar22 != 0xffffffff) {
                if (((int)uVar22 < 0) || (uVar29 <= uVar22)) {
                    /* WARNING: Subroutine does not return */
                  *(undefined **)(puVar27 + lVar7 + -8) = &UNK_00779c41;
                  __assert_fail("jmap->l_idx >= 0 && jmap->l_idx < nloaded","dl-close.c",0xf7,
                                "_dl_close_worker");
                }
                if ((*(byte *)(lVar16 + 0x31d) & 2) == 0) {
                  *(byte *)(lVar16 + 0x31d) = *(byte *)(lVar16 + 0x31d) | 2;
                  if ((int)uVar22 <= (int)uVar21) {
                    uVar21 = uVar22 - 1;
                  }
                }
              }
              plVar13 = plVar13 + 1;
            } while ((long *)(piVar1 + (ulong)(iVar11 - 1) * 2 + 4) != plVar13);
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar29);
      *(undefined8 *)(puVar27 + lVar7 + -8) = 0x779c98;
      local_58 = (long *)(puVar27 + lVar7);
      _dl_sort_maps((long)puVar27 + lVar7,uVar29,param_1 == 0);
      uVar30 = 0;
      local_44 = local_44 & 0xffffff00;
      local_84 = uVar29;
      uVar21 = 0xffffffff;
      local_a8 = uVar29 - 1;
      local_45 = '\0';
      local_50 = (long *)((ulong)local_50 & 0xffffffff00000000);
      plVar13 = local_58;
      do {
        while( true ) {
          lVar16 = plVar13[uVar30];
          uVar29 = (uint)uVar30;
          if (*(long *)(lVar16 + 0x30) != param_1) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a603;
            __assert_fail("imap->l_ns == nsid","dl-close.c",0x111,"_dl_close_worker");
          }
          bVar9 = *(byte *)(lVar16 + 0x31c);
          if ((*(byte *)(lVar16 + 0x31d) & 2) != 0) break;
          if (((bVar9 & 3) != 2) || (*(char *)(lVar16 + 799) != '\0')) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a677;
            __assert_fail("imap->l_type == lt_loaded && !imap->l_nodelete_active","dl-close.c",0x115
                          ,"_dl_close_worker");
          }
          if ((bVar9 & 8) != 0) {
            if (((byte)_dl_debug_mask & 2) != 0) {
              uVar4 = *(undefined8 *)(lVar16 + 8);
              *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a020;
              local_58 = plVar13;
              local_44 = uVar21;
              _dl_debug_printf("\ncalling fini: %s [%lu]\n\n",uVar4,param_1);
              plVar13 = local_58;
              uVar21 = local_44;
            }
            if ((*(long *)(lVar16 + 0x110) == 0) && (*(long *)(lVar16 + 0xa8) == 0)) {
              bVar9 = *(byte *)(lVar16 + 0x31c);
            }
            else {
              *(undefined8 *)(puVar27 + lVar7 + -8) = 0x779d1e;
              local_58 = plVar13;
              local_44 = uVar21;
              _dl_catch_exception(0,call_destructors,lVar16);
              bVar9 = *(byte *)(lVar16 + 0x31c);
              plVar13 = local_58;
              uVar21 = local_44;
            }
          }
          *(byte *)(lVar16 + 0x31e) = *(byte *)(lVar16 + 0x31e) | 2;
          local_44 = CONCAT31(local_44._1_3_,1);
          local_50 = (long *)CONCAT44(local_50._4_4_,
                                      ((int)local_50 + 1) - (uint)((bVar9 & 0x10) == 0));
          if (uVar29 < uVar21) {
            uVar21 = uVar29;
          }
LAB_00779d48:
          uVar30 = uVar30 + 1;
          if (local_40 == (long *)uVar30) goto LAB_00779f0c;
        }
        if ((bVar9 & 3) != 2) goto LAB_00779d48;
        if (*(long *)(lVar16 + 0x2c0) == 0) {
          lVar20 = *(long *)(lVar16 + 0x3d0);
          if (lVar20 == 0) {
            uVar28 = 1;
            lVar20 = **(long **)(lVar16 + 0x398);
            local_58 = *(long **)(lVar16 + 0x398);
            lVar19 = 0;
            if (lVar20 == 0) goto LAB_00779ed7;
LAB_00779db2:
            cVar10 = '\0';
            plVar26 = local_58 + 1;
            lVar14 = lVar20;
            plVar15 = plVar26;
LAB_00779df8:
            do {
              if (lVar16 + 0x2d0 != lVar14) {
                if (*(long *)(lVar14 + -0x290) != param_1) {
                    /* WARNING: Subroutine does not return */
                  *(undefined **)(puVar27 + lVar7 + -8) = &UNK_0077a76f;
                  __assert_fail("tmap->l_ns == nsid","dl-close.c",0x160,"_dl_close_worker");
                }
                if (*(int *)(lVar14 + 0x134) != -1) {
                  lVar14 = *plVar15;
                  plVar15 = plVar15 + 1;
                  cVar10 = '\x01';
                  if (lVar14 == 0) break;
                  goto LAB_00779df8;
                }
              }
              lVar14 = *plVar15;
              plVar15 = plVar15 + 1;
              uVar28 = uVar28 + 1;
            } while (lVar14 != 0);
            if (cVar10 == '\0') {
              if (lVar19 != 0) goto LAB_00779fe9;
            }
            else {
              plVar15 = (long *)(lVar16 + 0x370);
              local_60 = plVar15;
              if ((plVar15 == local_58) || (local_68 = 4, 3 < uVar28)) {
                local_68 = *(long *)(lVar16 + 0x390);
                *(undefined8 *)(puVar27 + lVar7 + -8) = 0x779f89;
                local_b0 = plVar13;
                local_a4 = uVar21;
                local_a0 = plVar26;
                local_98 = lVar19;
                local_90 = lVar20;
                local_85 = cVar10;
                plVar15 = (long *)malloc(local_68 * 8);
                lVar19 = local_98;
                lVar20 = local_90;
                plVar26 = local_a0;
                plVar13 = local_b0;
                uVar21 = local_a4;
                cVar10 = local_85;
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)(puVar27 + lVar7 + -8) = 0x779fd7;
                  _dl_signal_error(0xc,"dlclose",0,"cannot create scope list");
                }
              }
              lVar14 = 0;
              do {
                while ((lVar16 + 0x2d0 != lVar20 && (*(int *)(lVar20 + 0x134) != -1))) {
                  if (lVar19 != 0) {
                    plVar15[lVar14] = lVar19;
                    lVar14 = lVar14 + 1;
                    lVar19 = 0;
                  }
                  lVar20 = *plVar26;
                  plVar26 = plVar26 + 1;
                  if (lVar20 == 0) goto LAB_00779e88;
                }
                plVar15[lVar14] = lVar20;
                lVar14 = lVar14 + 1;
                lVar20 = *plVar26;
                plVar26 = plVar26 + 1;
              } while (lVar20 != 0);
LAB_00779e88:
              plVar15[lVar14] = 0;
              *(long **)(lVar16 + 0x398) = plVar15;
              if (local_60 == local_58) {
                local_45 = cVar10;
              }
              else {
                local_58 = (long *)CONCAT44(local_58._4_4_,uVar21);
                *(undefined8 *)(puVar27 + lVar7 + -8) = 0x779eb2;
                local_60 = plVar13;
                iVar11 = _dl_scope_free();
                if (iVar11 != 0) {
                  local_45 = '\0';
                }
                plVar13 = local_60;
                uVar21 = (uint)local_58;
              }
              *(long *)(lVar16 + 0x390) = local_68;
            }
          }
          else {
            if (*(long *)(lVar20 + 8) == 0) {
              lVar14 = 0x10;
              uVar22 = 1;
            }
            else {
              uVar28 = 1;
              do {
                iVar11 = (int)uVar28;
                uVar22 = iVar11 + 1;
                uVar28 = (ulong)uVar22;
              } while (*(long *)(lVar20 + uVar28 * 8) != 0);
              lVar14 = (ulong)(iVar11 + 2) << 3;
            }
            *(uint *)(lVar16 + 0x2c8) = uVar22;
            lVar19 = lVar16 + 0x2c0;
            *(long *)(lVar16 + 0x2c0) = lVar14 + lVar20;
            lVar20 = **(long **)(lVar16 + 0x398);
            local_58 = *(long **)(lVar16 + 0x398);
            if (lVar20 != 0) {
              uVar28 = 2;
              goto LAB_00779db2;
            }
LAB_00779fe9:
            *(undefined8 *)(lVar16 + 0x2c0) = 0;
            *(undefined4 *)(lVar16 + 0x2c8) = 0;
          }
        }
        else {
          uVar28 = 1;
          lVar19 = 0;
          lVar20 = **(long **)(lVar16 + 0x398);
          local_58 = *(long **)(lVar16 + 0x398);
          if (lVar20 != 0) goto LAB_00779db2;
        }
LAB_00779ed7:
        if ((*(long *)(lVar16 + 0x2e0) != 0) && (*(int *)(*(long *)(lVar16 + 0x2e0) + 0x3f4) != -1))
        {
          *(undefined8 *)(lVar16 + 0x2e0) = 0;
        }
        if (uVar29 < uVar21) {
          uVar21 = uVar29;
        }
        uVar30 = uVar30 + 1;
      } while (local_40 != (long *)uVar30);
LAB_00779f0c:
      uVar29 = local_84;
      if ((char)local_44 != '\0') {
        *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a0df;
        local_58 = plVar13;
        local_40._0_4_ = uVar21;
        local_60 = (long *)_dl_debug_update(param_1);
        *(undefined4 *)(local_60 + 3) = 2;
        *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a0f2;
        _dl_debug_state();
        if ((int)local_50 != 0) {
          plVar13 = (long *)local_70[2];
          uVar30 = (ulong)*(uint *)(plVar13 + 1);
          do {
            uVar22 = (uint)uVar30;
            uVar21 = uVar22;
            if (uVar22 == 0) goto LAB_0077a585;
            lVar16 = *plVar13;
            uVar30 = (ulong)(uVar22 - 1);
          } while ((*(byte *)(*(long *)(lVar16 + uVar30 * 8) + 0x31e) & 2) != 0);
          if (*(uint *)(plVar13 + 1) != uVar22 + (int)local_50) {
            lVar20 = 0;
            uVar21 = 0;
            do {
              lVar14 = *(long *)(lVar16 + lVar20 * 8);
              if ((*(byte *)(lVar14 + 0x31e) & 2) == 0) {
                if (uVar21 != (uint)lVar20) {
                  *(long *)(lVar16 + (ulong)uVar21 * 8) = lVar14;
                }
                uVar21 = uVar21 + 1;
              }
              lVar20 = lVar20 + 1;
            } while ((uint)lVar20 < uVar22);
          }
LAB_0077a585:
          *(uint *)(plVar13 + 1) = uVar21;
        }
        plVar13 = local_58;
        uVar21 = (uint)local_40;
        if ((*(int *)(in_FS_OFFSET + 0x18) != 0) &&
           ((((int)local_50 != 0 || (local_45 != '\0')) ||
            ((_dl_scope_free_list != (long *)0x0 && (*_dl_scope_free_list != 0)))))) {
          local_50 = local_58;
          *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a4d7;
          __thread_gscope_wait();
          uVar21 = (uint)local_40;
          plVar13 = local_50;
          plVar26 = _dl_scope_free_list;
          if (_dl_scope_free_list != (long *)0x0) {
            lVar16 = *_dl_scope_free_list;
            while (lVar16 != 0) {
              *plVar26 = lVar16 + -1;
              pvVar2 = (void *)plVar26[lVar16];
              *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a514;
              free(pvVar2);
              lVar16 = *plVar26;
            }
          }
        }
        local_40 = (long *)CONCAT44(local_40._4_4_,uVar21);
        *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a12a;
        local_50 = plVar13;
        pthread_mutex_lock((pthread_mutex_t *)_dl_load_tls_lock);
        *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a136;
        pthread_mutex_lock((pthread_mutex_t *)_dl_load_write_lock);
        plVar13 = local_50;
        uVar21 = (uint)local_40;
        if ((uint)local_40 < uVar29) {
          uVar30 = (ulong)local_40 & 0xffffffff;
          local_58 = (long *)((ulong)local_58 & 0xffffffffffffff00);
          local_40 = (long *)0x0;
          plVar26 = local_50 + uVar30;
          uVar21 = local_a8 - uVar21;
          local_50 = (long *)0x0;
          do {
            while (pvVar2 = (void *)*plVar26, (*(byte *)((long)pvVar2 + 0x31d) & 2) != 0) {
              plVar26 = plVar26 + 1;
              if (plVar26 == plVar13 + uVar21 + uVar30 + 1) goto LAB_0077a2dd;
            }
            bVar9 = *(byte *)((long)pvVar2 + 0x31c);
            if ((bVar9 & 3) != 2) {
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar27 + lVar7 + -8) = &UNK_0077a6a2;
              __assert_fail("imap->l_type == lt_loaded","dl-close.c",0x20c,"_dl_close_worker");
            }
            plVar15 = _dl_tls_static_used;
            plVar8 = local_40;
            if (*(long *)((long)pvVar2 + 0x440) != 0) {
              if (_dl_tls_dtv_slotinfo_list != 0) {
                uVar4 = *(undefined8 *)((long)pvVar2 + 0x460);
                *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a412;
                cVar10 = remove_slotinfo(uVar4,_dl_tls_dtv_slotinfo_list,0,bVar9 >> 3 & 1);
                if (cVar10 == '\0') {
                  _dl_tls_max_dtv_idx = _dl_tls_static_nelem;
                }
              }
              plVar6 = *(long **)((long)pvVar2 + 0x458);
              local_58 = (long *)CONCAT71(local_58._1_7_,(char)local_44);
              plVar15 = _dl_tls_static_used;
              plVar8 = local_40;
              if (1 < (long)plVar6 + 1U) {
                plVar8 = plVar6;
                if ((local_50 == (long *)0x0) || (plVar6 == local_50)) {
                  local_50 = (long *)((long)plVar6 - *(long *)((long)pvVar2 + 0x440));
                  local_58 = (long *)CONCAT71(local_58._1_7_,(char)local_44);
                  if (local_40 != (long *)0x0) {
                    plVar8 = local_40;
                  }
                }
                else {
                  plVar25 = (long *)((long)plVar6 - *(long *)((long)pvVar2 + 0x440));
                  if (plVar25 != local_40) {
                    if (_dl_tls_static_used == local_40) {
                      _dl_tls_static_used = local_50;
                      plVar15 = _dl_tls_static_used;
                      local_50 = plVar25;
                    }
                    else {
                      plVar15 = plVar25;
                      plVar8 = local_40;
                      if ((plVar6 != _dl_tls_static_used) &&
                         (plVar15 = _dl_tls_static_used, local_40 < plVar6)) {
                        local_50 = plVar25;
                        plVar8 = plVar6;
                      }
                    }
                  }
                }
              }
            }
            local_40 = plVar8;
            _dl_tls_static_used = plVar15;
            if (local_46 != '\0') {
              *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a369;
              pthread_mutex_lock(local_80);
              puVar17 = (undefined4 *)local_70[10];
              if ((puVar17 != (undefined4 *)0x0) && (local_70[0xb] != (undefined *)0x0)) {
                puVar24 = puVar17 + (long)local_70[0xb] * 8;
                do {
                  if ((*(long *)(puVar17 + 2) != 0) && (pvVar2 == *(void **)(puVar17 + 6))) {
                    *(undefined8 *)(puVar17 + 2) = 0;
                    *puVar17 = 0;
                    local_70[0xc] = local_70[0xc] + -1;
                  }
                  puVar17 = puVar17 + 8;
                } while (puVar17 != puVar24);
              }
              *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a37f;
              pthread_mutex_unlock(local_80);
            }
            *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a1c8;
            _dl_unmap(pvVar2);
            if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar27 + lVar7 + -8) = &UNK_0077a748;
              __assert_fail("nsid == LM_ID_BASE","dl-close.c",0x29a,"_dl_close_worker");
            }
            lVar16 = *(long *)((long)pvVar2 + 0x20);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a6f6;
              __assert_fail("imap->l_prev != NULL","dl-close.c",0x29b,"_dl_close_worker");
            }
            lVar20 = *(long *)((long)pvVar2 + 0x18);
            DAT_00931b88 = DAT_00931b88 + -1;
            *(long *)(lVar16 + 0x18) = lVar20;
            if (lVar20 != 0) {
              *(long *)(lVar20 + 0x20) = lVar16;
            }
            *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a1fe;
            _dl_find_object_dlclose(pvVar2);
            pvVar31 = *(void **)((long)pvVar2 + 0x2e8);
            *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a20a;
            free(pvVar31);
            pvVar31 = *(void **)((long)pvVar2 + 0x350);
            if (pvVar31 != (void *)0xffffffffffffffff) {
              *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a21c;
              free(pvVar31);
            }
            pvVar31 = *(void **)((long)pvVar2 + 0x3d8);
            *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a228;
            free(pvVar31);
            if (((byte)_dl_debug_mask & 0x40) != 0) {
              uVar4 = *(undefined8 *)((long)pvVar2 + 0x30);
              uVar5 = *(undefined8 *)((long)pvVar2 + 8);
              *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a3eb;
              _dl_debug_printf("\nfile=%s [%lu];  destroying link map\n",uVar5,uVar4);
            }
            pvVar31 = *(void **)((long)pvVar2 + 8);
            *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a23e;
            free(pvVar31);
            pvVar31 = *(void **)((long)pvVar2 + 0x38);
            do {
              while (pvVar3 = *(void **)((long)pvVar31 + 8), *(int *)((long)pvVar31 + 0x10) != 0) {
                pvVar31 = pvVar3;
                if (pvVar3 == (void *)0x0) goto LAB_0077a265;
              }
              *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a260;
              free(pvVar31);
              pvVar31 = pvVar3;
            } while (pvVar3 != (void *)0x0);
LAB_0077a265:
            pvVar31 = *(void **)((long)pvVar2 + 0x3d0);
            *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a271;
            free(pvVar31);
            pvVar31 = *(void **)((long)pvVar2 + 0x398);
            if (pvVar31 != (void *)((long)pvVar2 + 0x370)) {
              *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a289;
              free(pvVar31);
            }
            if ((*(byte *)((long)pvVar2 + 0x31d) & 8) != 0) {
              pvVar31 = *(void **)((long)pvVar2 + 0x2a8);
              *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a35b;
              free(pvVar31);
            }
            pvVar31 = *(void **)((long)pvVar2 + 0x330);
            if (pvVar31 != (void *)0xffffffffffffffff) {
              *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a2a9;
              free(pvVar31);
            }
            pvVar31 = *(void **)((long)pvVar2 + 0x3c0);
            if (pvVar31 != (void *)0xffffffffffffffff) {
              *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a2bb;
              free(pvVar31);
            }
            if (pvVar2 == _dl_initfirst) {
              _dl_initfirst = (void *)0x0;
            }
            plVar26 = plVar26 + 1;
            *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a2d4;
            free(pvVar2);
          } while (plVar26 != plVar13 + uVar21 + uVar30 + 1);
LAB_0077a2dd:
          *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a2e9;
          pthread_mutex_unlock((pthread_mutex_t *)_dl_load_write_lock);
          if ((char)local_58 != '\0') {
            lVar16 = _dl_tls_generation + 1;
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a6b6;
              _dl_fatal_printf(
                              "TLS generation counter wrapped!  Please report as described in <https://bugs.launchpad.net/ubuntu/+source/glibc/+bugs>.\n"
                              );
            }
            _dl_tls_generation = lVar16;
            if (_dl_tls_static_used == local_40) {
              _dl_tls_static_used = local_50;
            }
          }
        }
        else {
          *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a724;
          pthread_mutex_unlock((pthread_mutex_t *)_dl_load_write_lock);
        }
        *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a32b;
        pthread_mutex_unlock((pthread_mutex_t *)_dl_load_tls_lock);
        if ((*local_70 == (undefined *)0x0) && (_dl_nns + -1 == param_1)) {
          _dl_nns = param_1;
        }
        *(undefined4 *)(local_60 + 3) = 0;
        *(undefined8 *)(puVar27 + lVar7 + -8) = 0x77a349;
        _dl_debug_state();
      }
    }
    if (dl_close_state_2 != 2) {
      dl_close_state_2 = 0;
      return;
    }
  } while( true );
}

