
undefined *
_dl_lookup_symbol_x(byte *param_1,undefined *param_2,long *param_3,long *param_4,undefined8 *param_5
                   ,int param_6,uint param_7,long param_8)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  int *piVar10;
  byte *pbVar11;
  char *pcVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  int iVar16;
  char *pcVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  char *pcVar22;
  undefined1 *puVar23;
  long *plVar24;
  undefined *puVar25;
  long in_FS_OFFSET;
  undefined *puStack_c0;
  long *local_98;
  long local_90;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [40];
  
  uVar4 = param_7 & 8;
  uVar5 = param_7 & 4;
  local_98 = param_4;
LAB_007ae9f9:
  while( true ) {
    bVar1 = *param_1;
    if (bVar1 == 0) {
      iVar16 = 0x1505;
    }
    else {
      iVar16 = 0x1505;
      pbVar11 = param_1;
      do {
        pbVar11 = pbVar11 + 1;
        iVar16 = iVar16 * 0x21 + (uint)bVar1;
        bVar1 = *pbVar11;
      } while (bVar1 != 0);
    }
    local_70 = 0xffffffff;
    local_68 = (undefined1  [16])0x0;
    if ((param_5 != (undefined8 *)0x0) && ((param_7 & 2) != 0)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("version == NULL || !(flags & DL_LOOKUP_RETURN_NEWEST)","dl-lookup.c",0x352,
                    "_dl_lookup_symbol_x");
    }
    plVar21 = (long *)*local_98;
    if (param_8 == 0) break;
    if (param_8 == *(long *)*plVar21) {
      local_90 = 0;
    }
    else {
      local_90 = 0;
      do {
        local_90 = local_90 + 1;
      } while (((long *)*plVar21)[local_90] != param_8);
    }
LAB_007aea7f:
    plVar24 = local_98;
    do {
      iVar6 = do_lookup_x(param_1,iVar16,&local_70,*param_3,local_68,plVar21,local_90,param_5,
                          param_7,param_8,param_6);
      if (iVar6 != 0) break;
      plVar21 = (long *)plVar24[1];
      plVar24 = plVar24 + 1;
      local_90 = 0;
    } while (plVar21 != (long *)0x0);
    lVar7 = *param_3;
    if (local_68._0_8_ == 0) goto LAB_007aec26;
    puStack_c0 = param_2;
    if ((lVar7 == 0) || ((*(byte *)(lVar7 + 5) & 3) != 3)) {
      bVar3 = false;
      puVar25 = (undefined *)local_68._8_8_;
    }
    else {
      puVar25 = param_2;
      if (param_6 == 1) {
        lVar15 = local_68._0_8_;
        if ((undefined *)local_68._8_8_ != param_2) {
          local_68._8_8_ = param_2;
          local_68._0_8_ = lVar7;
          lVar15 = lVar7;
        }
        bVar3 = true;
        puVar14 = param_2;
        goto LAB_007aeb20;
      }
      local_58._0_16_ = (undefined1  [16])0x0;
      plVar21 = local_98;
      if (*local_98 == 0) {
LAB_007aee30:
        puVar25 = (undefined *)local_68._8_8_;
      }
      else {
        do {
          puStack_c0 = (undefined *)0x0;
          iVar6 = do_lookup_x(param_1,iVar16,&local_70);
          if (iVar6 != 0) break;
          plVar24 = plVar21 + 1;
          plVar21 = plVar21 + 1;
        } while (*plVar24 != 0);
        if ((local_58._0_8_ == 0) || ((undefined *)local_58._8_8_ == param_2)) goto LAB_007aee30;
        local_68._8_8_ = param_2;
        local_68._0_8_ = *param_3;
      }
      bVar3 = true;
    }
    if ((((((puVar25[0x31c] & 3) != 2) || ((param_7 & 1) == 0)) || (param_2 == puVar25)) ||
        (puVar25[799] != '\0')) || ((uVar4 != 0 && (puVar25[800] != '\0')))) {
      lVar15 = local_68._0_8_;
      puVar14 = puVar25;
      goto LAB_007aeb20;
    }
    puVar18 = *(uint **)(param_2 + 0x3d8);
    plVar21 = *(long **)(param_2 + 0x3d0);
    if (plVar21 != (long *)0x0) {
      uVar8 = 0;
      puVar14 = (undefined *)*plVar21;
      while (puVar14 != (undefined *)0x0) {
        if (puVar14 == puVar25) goto LAB_007aedf0;
        uVar8 = (ulong)((int)uVar8 + 1);
        puVar14 = (undefined *)plVar21[uVar8];
      }
    }
    if (puVar18 == (uint *)0x0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *puVar18;
      if (uVar19 != 0) {
        puVar9 = puVar18 + 2;
        do {
          if (*(undefined **)puVar9 == puVar25) goto LAB_007aedf0;
          puVar9 = puVar9 + 2;
        } while (puVar18 + (ulong)(uVar19 - 1) * 2 + 4 != puVar9);
      }
    }
    lVar7 = *(long *)(puVar25 + 0x480);
    if (uVar5 == 0) {
      pthread_mutex_lock((pthread_mutex_t *)_dl_load_lock);
      uVar8 = (ulong)uVar19;
    }
    else {
      LOCK();
      iVar16 = *(int *)(in_FS_OFFSET + 0x1c);
      *(int *)(in_FS_OFFSET + 0x1c) = 0;
      UNLOCK();
      if (iVar16 == 2) {
        syscall();
      }
      pthread_mutex_lock((pthread_mutex_t *)_dl_load_lock);
      plVar24 = *(long **)(param_2 + 0x3d0);
      uVar8 = (ulong)uVar19;
      if (((plVar24 != plVar21) && (plVar24 != (long *)0x0)) &&
         (puVar14 = (undefined *)*plVar24, puVar14 != (undefined *)0x0)) {
        uVar13 = 0;
        do {
          if (puVar25 == puVar14) goto LAB_007af059;
          uVar13 = (ulong)((int)uVar13 + 1);
          puVar14 = (undefined *)plVar24[uVar13];
        } while (puVar14 != (undefined *)0x0);
      }
      puVar9 = *(uint **)(param_2 + 0x3d8);
      if (puVar9 != (uint *)0x0) {
        uVar20 = *puVar9;
        if (puVar18 == puVar9) {
          if (uVar19 < uVar20) {
            lVar15 = 0;
            do {
              if (puVar25 == *(undefined **)(puVar18 + (ulong)uVar19 * 2 + lVar15 * 2 + 2))
              goto LAB_007af059;
              lVar15 = lVar15 + 1;
            } while (uVar19 + (int)lVar15 < uVar20);
            goto LAB_007af33e;
          }
        }
        else if (uVar20 == 0) {
          uVar8 = 0;
        }
        else {
          puVar18 = puVar9 + 2;
          do {
            if (puVar25 == *(undefined **)puVar18) goto LAB_007af059;
            puVar18 = puVar18 + 2;
          } while (puVar9 + (ulong)(uVar20 - 1) * 2 + 4 != puVar18);
LAB_007af33e:
          uVar8 = (ulong)uVar20;
        }
      }
    }
    for (puVar14 = (&_dl_ns)[*(long *)(param_2 + 0x30) * 0x14]; puVar14 != (undefined *)0x0;
        puVar14 = *(undefined **)(puVar14 + 0x18)) {
      if (puVar14 == puVar25) {
        if ((puVar14 != (undefined *)0x0) && (lVar7 == *(long *)(puVar25 + 0x480))) {
          if ((puVar25[799] != '\0') || ((uVar4 != 0 && (puVar25[800] != '\0')))) {
            puStack_c0 = (undefined *)0x7aef56;
            pthread_mutex_unlock((pthread_mutex_t *)_dl_load_lock);
            if (uVar5 != 0) goto LAB_007aef61;
            goto LAB_007aedf0;
          }
          if ((param_2[0x31c] & 3) == 2) {
            uVar19 = *(uint *)(param_2 + 0x3e0);
            uVar20 = (uint)uVar8;
            if (uVar20 < uVar19) {
              *(undefined **)(*(long *)(param_2 + 0x3d8) + 8 + uVar8 * 8) = puVar25;
              **(int **)(param_2 + 0x3d8) = uVar20 + 1;
            }
            else {
              uVar2 = 10;
              if (uVar19 != 0) {
                uVar2 = uVar19 * 2;
              }
              piVar10 = (int *)malloc((ulong)uVar2 * 8 + 8);
              if (piVar10 == (int *)0x0) {
                if ((_dl_debug_mask & 4) != 0) {
                  if ((uVar4 != 0) && (puVar25[800] != '\0')) goto LAB_007af14a;
                  _dl_debug_printf("marking %s [%lu] as NODELETE due to memory allocation failure\n"
                                   ,*(undefined8 *)(puVar25 + 8),*(undefined8 *)(puVar25 + 0x30));
                }
                goto LAB_007af0b7;
              }
              if (uVar20 != 0) {
                memcpy(piVar10 + 2,(void *)(*(long *)(param_2 + 0x3d8) + 8),uVar8 * 8);
              }
              *(undefined **)(piVar10 + uVar8 * 2 + 2) = puVar25;
              *piVar10 = uVar20 + 1;
              lVar7 = *(long *)(param_2 + 0x3d8);
              *(uint *)(param_2 + 0x3e0) = uVar2;
              *(int **)(param_2 + 0x3d8) = piVar10;
              if (lVar7 != 0) {
                _dl_scope_free();
              }
            }
            if ((_dl_debug_mask & 0x40) != 0) {
              pcVar12 = *(char **)(param_2 + 8);
              if ((*pcVar12 == '\0') && (pcVar12 = *(char **)_dl_argv, pcVar12 == (char *)0x0)) {
                pcVar12 = "<main program>";
              }
              pcVar22 = *(char **)(puVar25 + 8);
              if ((*pcVar22 == '\0') && (pcVar22 = *(char **)_dl_argv, pcVar22 == (char *)0x0)) {
                pcVar22 = "<main program>";
              }
              _dl_debug_printf("\nfile=%s [%lu];  needed by %s [%lu] (relocation dependency)\n\n",
                               pcVar22,*(undefined8 *)(puVar25 + 0x30),pcVar12,
                               *(undefined8 *)(param_2 + 0x30));
            }
          }
          else {
            if ((_dl_debug_mask & 4) == 0) {
LAB_007af0b7:
              if (uVar4 == 0) {
                puVar25[799] = 1;
                goto LAB_007af0ca;
              }
            }
            else if ((uVar4 == 0) || (puVar25[800] == '\0')) {
              if (**(char **)(param_2 + 8) == '\0') {
                _dl_debug_printf("marking %s [%lu] as NODELETE due to reference to main program\n",
                                 *(undefined8 *)(puVar25 + 8),*(undefined8 *)(puVar25 + 0x30));
              }
              else {
                _dl_debug_printf("marking %s [%lu] as NODELETE due to reference to %s [%lu]\n",
                                 *(undefined8 *)(puVar25 + 8),*(undefined8 *)(puVar25 + 0x30),
                                 *(char **)(param_2 + 8),*(long *)(param_2 + 0x30));
              }
              goto LAB_007af0b7;
            }
LAB_007af14a:
            puVar25[800] = 1;
          }
LAB_007af0ca:
          puStack_c0 = (undefined *)0x7af0d6;
          pthread_mutex_unlock((pthread_mutex_t *)_dl_load_lock);
          lVar15 = local_68._0_8_;
          puVar14 = (undefined *)local_68._8_8_;
          if (uVar5 != 0) {
            *(undefined4 *)(in_FS_OFFSET + 0x1c) = 1;
          }
          goto LAB_007aeb20;
        }
        break;
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)_dl_load_lock);
    if (uVar5 != 0) goto LAB_007aef9b;
  }
  if (plVar21 != (long *)0x0) {
    local_90 = 0;
    goto LAB_007aea7f;
  }
  lVar7 = *param_3;
LAB_007aec26:
  if (((lVar7 == 0) || (*(byte *)(lVar7 + 4) >> 4 != 2)) && ((_dl_debug_mask & 0x100) == 0)) {
    if (param_2 == (undefined *)0x0) goto LAB_007af3e5;
    pcVar22 = "";
    pcVar12 = *(char **)(param_2 + 8);
    puVar23 = &DAT_008343a2;
    if (param_5 != (undefined8 *)0x0) {
      pcVar22 = ", version ";
      puVar23 = (undefined1 *)*param_5;
      if (puVar23 == (undefined1 *)0x0) {
        puVar23 = &DAT_008343a2;
      }
    }
    if (*pcVar12 == '\0') goto LAB_007af40b;
    do {
      _dl_exception_create_format
                (local_58,pcVar12,"undefined symbol: %s%s%s",param_1,pcVar22,puVar23);
      _dl_signal_exception(0,local_58,"symbol lookup error");
LAB_007af3e5:
      pcVar22 = "";
      puVar23 = &DAT_008343a2;
      if (param_5 != (undefined8 *)0x0) {
        pcVar22 = ", version ";
        puVar23 = (undefined1 *)*param_5;
        if (puVar23 == (undefined1 *)0x0) {
          puVar23 = &DAT_008343a2;
        }
      }
LAB_007af40b:
      pcVar12 = *(char **)_dl_argv;
      if (pcVar12 == (char *)0x0) {
        pcVar12 = "<main program>";
      }
    } while( true );
  }
  lVar15 = 0;
  puVar14 = (undefined *)0x0;
  goto LAB_007aeb40;
LAB_007af059:
  if (lVar7 == *(long *)(puVar25 + 0x480)) {
    puStack_c0 = (undefined *)0x7af352;
    pthread_mutex_unlock((pthread_mutex_t *)_dl_load_lock);
LAB_007aef61:
    *(undefined4 *)(in_FS_OFFSET + 0x1c) = 1;
LAB_007aedf0:
    lVar15 = local_68._0_8_;
    puVar14 = (undefined *)local_68._8_8_;
LAB_007aeb20:
    if (*(int *)(puVar25 + 0x3e4) == 0) {
      *(undefined4 *)(puVar25 + 0x3e4) = 1;
    }
    if (((_dl_debug_mask & 0x804) != 0) && ((_dl_debug_mask & 4) != 0)) {
      pcVar12 = *(char **)(puVar14 + 8);
      pcVar22 = "protected";
      if (!bVar3) {
        pcVar22 = "normal";
      }
      if ((*pcVar12 == '\0') && (pcVar12 = *(char **)_dl_argv, pcVar12 == (char *)0x0)) {
        pcVar12 = "<main program>";
      }
      pcVar17 = *(char **)(param_2 + 8);
      if ((*pcVar17 == '\0') && (pcVar17 = *(char **)_dl_argv, pcVar17 == (char *)0x0)) {
        pcVar17 = "<main program>";
      }
      _dl_debug_printf("binding file %s [%lu] to %s [%lu]: %s symbol `%s\'",pcVar17,
                       *(undefined8 *)(param_2 + 0x30),pcVar12,*(undefined8 *)(puVar14 + 0x30),
                       pcVar22,param_1);
      if (param_5 == (undefined8 *)0x0) {
        _dl_debug_printf_c(&DAT_0081a1ca);
      }
      else {
        _dl_debug_printf_c(" [%s]\n",*param_5,puStack_c0);
      }
    }
LAB_007aeb40:
    *param_3 = lVar15;
    return puVar14;
  }
  pthread_mutex_unlock((pthread_mutex_t *)_dl_load_lock);
LAB_007aef9b:
  *(undefined4 *)(in_FS_OFFSET + 0x1c) = 1;
  local_98 = *(long **)(param_2 + 0x398);
  goto LAB_007ae9f9;
}

