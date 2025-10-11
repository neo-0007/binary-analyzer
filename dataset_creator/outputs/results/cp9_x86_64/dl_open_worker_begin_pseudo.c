
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dl_open_worker_begin(undefined8 *param_1)

{
  undefined4 uVar1;
  char *__s;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  ulong uVar13;
  long *__dest;
  uint uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  long local_60;
  
  __s = (char *)*param_1;
  uVar22 = *(uint *)(param_1 + 1);
  pcVar7 = strchr(__s,0x24);
  if ((pcVar7 == (char *)0x0) && (lVar9 = param_1[4], lVar9 != -2)) {
    pcVar7 = strchr(__s,0x2f);
    puVar8 = (undefined *)0x0;
    if (pcVar7 == (char *)0x0) goto LAB_0077c651;
  }
  else {
LAB_0077c651:
    puVar3 = _dl_ns;
    puVar8 = (undefined *)_dl_find_dso_for_object(param_1[2]);
    lVar9 = param_1[4];
    if (puVar8 == (undefined *)0x0) {
      puVar8 = puVar3;
    }
    if (lVar9 == -2) {
      lVar9 = *(long *)(puVar8 + 0x30);
      param_1[4] = lVar9;
    }
  }
  uVar1 = *(undefined4 *)(&DAT_00931b9c + lVar9 * 0xa0);
  *(bool *)((long)param_1 + 0x2c) = *(long *)(&DAT_00931ba0 + lVar9 * 0xa0) != 0;
  *(undefined4 *)(param_1 + 5) = uVar1;
  _dl_debug_initialize(0,lVar9);
  lVar9 = _dl_map_object(puVar8,__s,2,0,uVar22 | 0x10000000,param_1[4]);
  param_1[3] = lVar9;
  if (lVar9 == 0) {
    if ((uVar22 & 4) != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("mode & RTLD_NOLOAD","dl-open.c",0x21d,"dl_open_worker_begin");
  }
  if ((uVar22 & 0x40000000) != 0) {
    return;
  }
  uVar21 = uVar22 & 0x1000;
  *(int *)(lVar9 + 0x318) = *(int *)(lVar9 + 0x318) + 1;
  if (*(long *)(lVar9 + 0x2c0) == 0) {
    if (uVar21 != 0) {
      *(undefined1 *)(lVar9 + 800) = 1;
    }
    uVar13 = 0;
    _dl_map_object_deps(lVar9,0,0,0);
    uVar21 = *(uint *)(lVar9 + 0x2c8);
    if (uVar21 != 0) {
      do {
        while( true ) {
          plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x2c0) + uVar13 * 8) + 0x28);
          if (plVar11[0x5d] != 0) break;
          _dl_check_map_versions(plVar11,0,0);
          if (plVar11[0x16] == 0) {
LAB_0077c7be:
            uVar21 = *(uint *)(lVar9 + 0x2c8);
          }
          else {
            lVar10 = 0;
            if ((*(byte *)((long)plVar11 + 0x31e) & 0x20) != 0) {
              lVar10 = *plVar11;
            }
            iVar5 = strcmp((char *)(*(long *)(plVar11[0x16] + 8) + *(long *)(plVar11[0xd] + 8) +
                                   lVar10),"ld-linux-x86-64.so.2");
            if (iVar5 != 0) goto LAB_0077c7be;
            __rtld_static_init(plVar11);
            uVar21 = *(uint *)(lVar9 + 0x2c8);
          }
          uVar23 = (int)uVar13 + 1;
          uVar13 = (ulong)uVar23;
          if (uVar21 <= uVar23) goto LAB_0077c7d0;
        }
        uVar23 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar23;
      } while (uVar23 < uVar21);
    }
LAB_0077c7d0:
    lVar10 = _dl_debug_update(param_1[4]);
    *(undefined4 *)(lVar10 + 0x18) = 0;
    _dl_debug_state();
    if (*(int *)(lVar9 + 0x2c8) != 0) {
      plVar11 = *(long **)(lVar9 + 0x3d0) + (*(int *)(lVar9 + 0x2c8) - 1);
      do {
        lVar10 = *plVar11;
        if (((*(byte *)(lVar10 + 0x31c) & 8) == 0) &&
           (*(uint *)(lVar10 + 0x328) != (*(uint *)(lVar10 + 0x328) & _DAT_0093dff8))) {
                    /* WARNING: Subroutine does not return */
          _dl_signal_error(0,*(undefined8 *)(lVar10 + 8),"dlopen",
                           "CPU ISA level is lower than required");
        }
        bVar24 = *(long **)(lVar9 + 0x3d0) != plVar11;
        plVar11 = plVar11 + -1;
      } while (bVar24);
    }
    _dl_cet_open_check(lVar9);
    if ((_dl_debug_mask._1_1_ & 2) != 0) {
      _dl_show_scope(lVar9,0);
    }
    uVar21 = uVar22 & 0x8000001;
    if (_dl_lazy == 0) {
      uVar21 = uVar22 & 0x8000000;
    }
    plVar11 = *(long **)(lVar9 + 0x3d0);
    uVar20 = 0;
    uVar14 = 0xffffffff;
    lVar10 = *plVar11;
    uVar23 = 0;
    do {
      uVar6 = uVar23 + 1;
      if (((*(byte *)(*(long *)(lVar10 + 0x28) + 0x31c) & 4) == 0) &&
         (uVar20 = uVar6, uVar14 == 0xffffffff)) {
        uVar14 = uVar23;
      }
      lVar10 = plVar11[uVar6];
      uVar23 = uVar6;
    } while (lVar10 != 0);
    uVar23 = uVar20 - 1;
    if (uVar14 < uVar20) {
      lVar10 = (ulong)uVar23 * 8;
      while( true ) {
        lVar18 = *(long *)((long)plVar11 + lVar10);
        if ((*(byte *)(*(long *)(lVar18 + 0x28) + 0x31c) & 4) == 0) {
          _dl_relocate_object(lVar18,*(undefined8 *)(lVar18 + 0x398),uVar21,0);
        }
        if (((ulong)uVar23 - (ulong)(uVar23 - uVar14)) * 8 == lVar10) break;
        plVar11 = *(long **)(lVar9 + 0x3d0);
        lVar10 = lVar10 + -8;
      }
    }
    uVar21 = *(uint *)(lVar9 + 0x2c8);
    uVar23 = 0;
    if (uVar21 != 0) {
      do {
        lVar10 = *(long *)(*(long *)(lVar9 + 0x2c0) + (ulong)uVar23 * 8);
        if ((*(byte *)(lVar10 + 0x31c) & 0xb) == 10) {
          plVar11 = *(long **)(lVar10 + 0x398);
          lVar18 = *plVar11;
          if (lVar18 == 0) {
            uVar13 = 1;
          }
          else {
            plVar15 = plVar11;
            do {
              plVar15 = plVar15 + 1;
              if (lVar18 == lVar9 + 0x2c0) goto LAB_0077c930;
              lVar18 = *plVar15;
            } while (lVar18 != 0);
            do {
              lVar16 = lVar18;
              lVar18 = lVar16 + 1;
            } while (plVar11[lVar18] != 0);
            uVar13 = lVar16 + 2;
          }
          uVar19 = *(ulong *)(lVar10 + 0x390);
          if (uVar19 <= uVar13) {
            plVar15 = (long *)(lVar10 + 0x370);
            if ((3 < uVar19) || (local_60 = 4, __dest = plVar15, plVar15 == plVar11)) {
              local_60 = uVar19 * 2;
              __dest = (long *)malloc(uVar19 << 4);
              if (__dest == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                _dl_signal_error(0xc,"dlopen",0,"cannot create scope list");
              }
            }
            pvVar12 = memcpy(__dest,plVar11,uVar13 << 3);
            plVar11 = *(long **)(lVar10 + 0x398);
            *(void **)(lVar10 + 0x398) = pvVar12;
            if (plVar15 != plVar11) {
              _dl_scope_free();
            }
            uVar21 = *(uint *)(lVar9 + 0x2c8);
            *(long *)(lVar10 + 0x390) = local_60;
          }
        }
LAB_0077c930:
        uVar23 = uVar23 + 1;
      } while (uVar23 < uVar21);
      if (uVar21 != 0) {
        uVar23 = 0;
        bVar24 = false;
        do {
          while ((bVar2 = bVar24, lVar10 = *(long *)(*(long *)(lVar9 + 0x2c0) + (ulong)uVar23 * 8),
                 (*(byte *)(lVar10 + 0x31c) & 8) != 0 || (*(long *)(lVar10 + 0x440) == 0))) {
            uVar23 = uVar23 + 1;
            bVar24 = bVar2;
            if (uVar21 <= uVar23) goto LAB_0077cb00;
          }
          uVar23 = uVar23 + 1;
          bVar2 = true;
          _dl_add_to_slotinfo(lVar10,0);
          uVar21 = *(uint *)(lVar9 + 0x2c8);
          bVar24 = true;
        } while (uVar23 < uVar21);
        goto LAB_0077cb00;
      }
    }
    bVar2 = false;
LAB_0077cb00:
    if ((uVar22 & 0x100) != 0) {
      add_to_global_resize(lVar9);
    }
    for (puVar8 = (&_dl_ns)[*(long *)(lVar9 + 0x30) * 0x14]; puVar8 != (undefined *)0x0;
        puVar8 = *(undefined **)(puVar8 + 0x18)) {
      if (puVar8[800] != '\0') {
        if (((byte)_dl_debug_mask & 0x40) != 0) {
          _dl_debug_printf("activating NODELETE for %s [%lu]\n",*(undefined8 *)(puVar8 + 8),
                           *(undefined8 *)(puVar8 + 0x30));
        }
        *(undefined2 *)(puVar8 + 799) = 1;
      }
    }
    uVar22 = *(uint *)(lVar9 + 0x2c8);
    uVar21 = 0;
    if (uVar22 != 0) {
      do {
        lVar18 = 0;
        lVar10 = *(long *)(*(long *)(lVar9 + 0x2c0) + (ulong)uVar21 * 8);
        if ((*(byte *)(lVar10 + 0x31c) & 0xb) == 10) {
          plVar11 = *(long **)(lVar10 + 0x398);
          lVar18 = *plVar11;
          if (lVar18 == 0) {
            uVar13 = 1;
            lVar16 = 0;
            lVar18 = 0;
          }
          else {
            plVar15 = plVar11;
            do {
              plVar15 = plVar15 + 1;
              if (lVar18 == lVar9 + 0x2c0) goto LAB_0077cb84;
              lVar18 = *plVar15;
            } while (lVar18 != 0);
            lVar18 = 0;
            do {
              lVar17 = lVar18;
              lVar18 = lVar17 + 1;
              lVar16 = lVar18 * 8;
            } while (plVar11[lVar18] != 0);
            uVar13 = lVar17 + 2;
          }
          if (*(ulong *)(lVar10 + 0x390) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("cnt + 1 < imap->l_scope_max","dl-open.c",0x153,"update_scopes");
          }
          plVar11[uVar13] = 0;
          *(long *)(*(long *)(lVar10 + 0x398) + lVar16) = lVar9 + 0x2c0;
        }
        if ((_dl_debug_mask._1_1_ & 2) != 0) {
          _dl_show_scope(lVar10,lVar18);
        }
        uVar22 = *(uint *)(lVar9 + 0x2c8);
LAB_0077cb84:
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar22);
    }
    cVar4 = _dl_find_object_update(lVar9);
    if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
      _dl_signal_error(0xc,**(undefined8 **)(lVar9 + 0x38),0,"cannot allocate address lookup data");
    }
    if (bVar2) {
      uVar13 = (ulong)*(uint *)(lVar9 + 0x2c8);
      if (*(uint *)(lVar9 + 0x2c8) == 0) {
        uVar13 = 0;
      }
      else {
        uVar22 = 0;
        uVar19 = uVar13;
        do {
          lVar10 = *(long *)(*(long *)(lVar9 + 0x2c0) + (ulong)uVar22 * 8);
          if (((*(byte *)(lVar10 + 0x31c) & 8) == 0) && (*(long *)(lVar10 + 0x440) != 0)) {
            _dl_add_to_slotinfo(lVar10,1);
            uVar19 = (ulong)*(uint *)(lVar9 + 0x2c8);
            if (((*(byte *)(lVar10 + 0x31d) & 0x40) != 0) &&
               (*(uint *)(lVar9 + 0x2c8) == (uint)uVar13)) {
              uVar13 = (ulong)uVar22;
            }
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < (uint)uVar19);
      }
      lVar10 = _dl_tls_generation + 1;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        _dl_fatal_printf("TLS generation counter wrapped!  Please report this.");
      }
      uVar22 = *(uint *)(lVar9 + 0x2c8);
      _dl_tls_generation = lVar10;
      if ((uint)uVar13 < uVar22) {
        do {
          lVar10 = *(long *)(*(long *)(lVar9 + 0x2c0) + uVar13 * 8);
          if (((*(ushort *)(lVar10 + 0x31c) & 0x4008) == 0x4000) && (*(long *)(lVar10 + 0x440) != 0)
             ) {
            *(byte *)(lVar10 + 0x31d) = *(byte *)(lVar10 + 0x31d) & 0xbf;
            _dl_init_static_tls(lVar10);
            if ((*(byte *)(lVar10 + 0x31d) & 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("imap->l_need_tls_init == 0","dl-open.c",0x1b6,"update_tls_slotinfo");
            }
            uVar22 = *(uint *)(lVar9 + 0x2c8);
          }
          uVar21 = (int)uVar13 + 1;
          uVar13 = (ulong)uVar21;
        } while (uVar21 < uVar22);
      }
    }
    if (*(char *)((long)param_1 + 0x2c) == '\0') {
      _dl_call_libc_early_init(*(undefined8 *)(&DAT_00931ba0 + param_1[4] * 0xa0),0);
    }
    *(undefined1 *)((long)param_1 + 0x2d) = 1;
    return;
  }
  if (((byte)_dl_debug_mask & 0x40) != 0) {
    _dl_debug_printf("opening file=%s [%lu]; direct_opencount=%u\n\n",*(undefined8 *)(lVar9 + 8),
                     *(undefined8 *)(lVar9 + 0x30));
  }
  if ((uVar22 & 0x100) == 0) {
    if (uVar21 != 0) {
      if ((((byte)_dl_debug_mask & 0x40) != 0) && (*(char *)(lVar9 + 799) == '\0')) {
        _dl_debug_printf("marking %s [%lu] as NODELETE\n",*(undefined8 *)(lVar9 + 8),
                         *(undefined8 *)(lVar9 + 0x30));
      }
      *(undefined1 *)(lVar9 + 799) = 1;
    }
    goto LAB_0077cea3;
  }
  if ((*(byte *)(lVar9 + 0x31c) & 0x10) == 0) {
    add_to_global_resize(lVar9);
    if (uVar21 != 0) goto LAB_0077ce4c;
  }
  else {
    if (uVar21 == 0) goto LAB_0077cea3;
LAB_0077ce4c:
    if ((((byte)_dl_debug_mask & 0x40) != 0) && (*(char *)(lVar9 + 799) == '\0')) {
      _dl_debug_printf("marking %s [%lu] as NODELETE\n",*(undefined8 *)(lVar9 + 8),
                       *(undefined8 *)(lVar9 + 0x30));
    }
    *(undefined1 *)(lVar9 + 799) = 1;
  }
  if ((*(byte *)(lVar9 + 0x31c) & 0x10) == 0) {
    add_to_global_update(lVar9);
  }
LAB_0077cea3:
  lVar9 = _dl_debug_update(param_1[4]);
  if (*(int *)(lVar9 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("_dl_debug_update (args->nsid)->r_state == RT_CONSISTENT","dl-open.c",0x245,
                "dl_open_worker_begin");
}

