
long _nl_find_locale(char *param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  void *pvVar8;
  long lVar9;
  undefined8 *puVar10;
  char cVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  char *pcVar21;
  char *pcVar22;
  int iVar23;
  char *pcVar24;
  long *plVar25;
  char *pcVar26;
  undefined8 *puVar27;
  long in_FS_OFFSET;
  undefined1 auStack_98 [8];
  char *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  char *local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  char *local_50;
  void *local_48;
  long local_40;
  undefined1 *puVar16;
  
  puVar16 = auStack_98;
  puVar15 = auStack_98;
  puVar14 = auStack_98;
  local_70 = (char *)*param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = param_2;
  if (((*local_70 == '\0') &&
      ((local_70 = getenv("LC_ALL"), local_70 == (char *)0x0 || (*local_70 == '\0')))) &&
     (((local_70 = getenv("LC_COLLATE" + (byte)(&_nl_category_name_idxs)[param_3]),
       local_70 == (char *)0x0 || (*local_70 == '\0')) &&
      ((local_70 = getenv("LANG"), local_70 == (char *)0x0 || (*local_70 == '\0')))))) {
    pcVar26 = "C";
    local_70 = "C";
    iVar5 = strcmp("C","C");
  }
  else {
    pcVar26 = local_70;
    iVar5 = strcmp(local_70,"C");
  }
  if ((iVar5 == 0) || (iVar5 = strcmp(pcVar26,"POSIX"), iVar5 == 0)) {
    *param_4 = "C";
    lVar9 = *(long *)(_nl_C + (long)param_3 * 8);
    goto LAB_006d5bbc;
  }
  sVar7 = strlen(pcVar26);
  if ((sVar7 < 0x100) && (pvVar8 = memmem(pcVar26,sVar7,&slashdot_0,4), pvVar8 == (void *)0x0)) {
    if (sVar7 == 2) {
      if (*pcVar26 == '.') {
        if ((pcVar26[1] == '.') || (pvVar8 = memchr(pcVar26,0x2f,2), pvVar8 != (void *)0x0))
        goto LAB_006d5c10;
      }
      else {
LAB_006d5b7c:
        pvVar8 = memchr(pcVar26,0x2f,sVar7);
        if ((pvVar8 != (void *)0x0) && (*pcVar26 != '/')) goto LAB_006d5c10;
      }
      *param_4 = local_70;
      if (param_1 == (char *)0x0) {
        lVar9 = _nl_load_locale_from_archive(param_3,param_4);
        puVar14 = auStack_98;
        if (lVar9 != 0) goto LAB_006d5bbc;
        local_70 = (char *)_nl_expand_alias(*param_4);
        if (local_70 != (char *)0x0) {
          lVar9 = _nl_load_locale_from_archive(param_3,&local_70);
          puVar14 = auStack_98;
          if (lVar9 != 0) goto LAB_006d5bbc;
          local_80 = 0x10;
          param_1 = "/usr/lib/locale";
          goto LAB_006d5ce4;
        }
        local_80 = 0x10;
        param_1 = "/usr/lib/locale";
LAB_006d5f97:
        local_70 = (char *)*param_4;
      }
      else {
        local_70 = (char *)_nl_expand_alias();
LAB_006d5ce4:
        if (local_70 == (char *)0x0) goto LAB_006d5f97;
      }
      pcVar26 = local_70;
      sVar7 = strlen(local_70);
      puVar14 = auStack_98;
      while (puVar16 != auStack_98 + -(sVar7 + 0x18 & 0xfffffffffffff000)) {
        puVar15 = puVar14 + -0x1000;
        *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
        puVar16 = puVar14 + -0x1000;
        puVar14 = puVar14 + -0x1000;
      }
      uVar12 = (ulong)((uint)(sVar7 + 0x18) & 0xff0);
      lVar1 = -uVar12;
      puVar19 = puVar15 + lVar1;
      puVar17 = puVar15 + lVar1;
      puVar14 = puVar15 + lVar1;
      if (uVar12 != 0) {
        *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
      }
      *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6d5d52;
      pvVar8 = memcpy((void *)((ulong)(puVar15 + lVar1 + 0xf) & 0xfffffffffffffff0),pcVar26,
                      sVar7 + 1);
      *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6d5d6e;
      uVar6 = _nl_explode_name(pvVar8,&local_68,&local_60,&local_58,&local_50,&local_48);
      puVar20 = puVar15 + lVar1;
      if (uVar6 == 0xffffffff) {
LAB_006d6230:
        lVar9 = 0;
        puVar14 = puVar20;
      }
      else {
        lVar9 = (long)param_3;
        *(undefined8 *)(puVar15 + lVar1 + -0x10) = 0;
        local_90 = "LC_COLLATE" + (byte)(&_nl_category_name_idxs)[lVar9];
        *(char **)(puVar15 + lVar1 + -0x18) = local_90;
        local_88 = _nl_locale_file_list + lVar9 * 8;
        *(char **)(puVar15 + lVar1 + -0x20) = local_60;
        *(void **)(puVar15 + lVar1 + -0x28) = local_48;
        *(char **)(puVar15 + lVar1 + -0x30) = local_50;
        *(undefined8 *)(puVar15 + lVar1 + -0x38) = 0x6d5dd1;
        puVar10 = (undefined8 *)
                  _nl_make_l10nflist(local_88,param_1,local_80,uVar6,local_68,local_58);
        if (puVar10 == (undefined8 *)0x0) {
          *(undefined8 *)(puVar15 + lVar1 + -0x10) = 1;
          *(char **)(puVar15 + lVar1 + -0x18) = local_90;
          *(char **)(puVar15 + lVar1 + -0x20) = local_60;
          *(void **)(puVar15 + lVar1 + -0x28) = local_48;
          *(char **)(puVar15 + lVar1 + -0x30) = local_50;
          *(undefined8 *)(puVar15 + lVar1 + -0x38) = 0x6d6218;
          puVar10 = (undefined8 *)
                    _nl_make_l10nflist(local_88,param_1,local_80,uVar6,local_68,local_58);
          puVar20 = puVar15 + lVar1;
          if (puVar10 == (undefined8 *)0x0) goto LAB_006d6230;
        }
        if ((uVar6 & 1) != 0) {
          *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6d6259;
          free(local_48);
        }
        if (*(int *)(puVar10 + 1) == 0) {
          *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6d624b;
          _nl_load_locale(puVar10,param_3);
        }
        plVar25 = (long *)puVar10[2];
        puVar13 = puVar10;
        if (plVar25 == (long *)0x0) {
          puVar13 = (undefined8 *)puVar10[4];
          if (puVar13 != (undefined8 *)0x0) {
            puVar27 = puVar10 + 4;
            do {
              if (*(int *)(puVar13 + 1) == 0) {
                *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6d62a1;
                _nl_load_locale(puVar13,param_3);
                puVar13 = (undefined8 *)*puVar27;
              }
              plVar25 = (long *)puVar13[2];
              if (plVar25 != (long *)0x0) {
                puVar10[4] = puVar13;
                goto LAB_006d5e0e;
              }
              puVar13 = (undefined8 *)puVar27[1];
              puVar27 = puVar27 + 1;
            } while (puVar13 != (undefined8 *)0x0);
          }
          puVar10[4] = 0;
          lVar9 = 0;
          puVar14 = puVar15 + lVar1;
          goto LAB_006d5bbc;
        }
LAB_006d5e0e:
        if (local_50 != (char *)0x0) {
          pcVar26 = (char *)plVar25[(long)*(int *)(codeset_idx_2 + lVar9 * 4) + 8];
          if (pcVar26 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6d6351;
            __assert_fail("locale_codeset != NULL","findlocale.c",0x11a,"_nl_find_locale");
          }
          *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6d5e3c;
          sVar7 = strlen(pcVar26);
          uVar3 = _nl_C_locobj._120_8_;
          uVar2 = _nl_C_locobj._104_8_;
          puVar20 = puVar15 + lVar1;
          while (puVar17 != puVar15 + (lVar1 - (sVar7 + 0x1a & 0xfffffffffffff000))) {
            puVar14 = puVar20 + -0x1000;
            *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
            puVar17 = puVar20 + -0x1000;
            puVar20 = puVar20 + -0x1000;
          }
          uVar12 = (ulong)((uint)(sVar7 + 0x1a) & 0xff0);
          lVar9 = -uVar12;
          puVar18 = puVar14 + lVar9;
          puVar15 = puVar14 + lVar9;
          if (uVar12 != 0) {
            *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
          }
          cVar11 = *pcVar26;
          pcVar24 = (char *)((ulong)(puVar14 + lVar9 + 0xf) & 0xfffffffffffffff0);
          if (cVar11 == '\0') {
            iVar5 = 1;
            pcVar21 = pcVar24;
LAB_006d608a:
            sVar7 = (ulong)(2 - iVar5) + 1;
            if (2 < iVar5) {
              sVar7 = 1;
            }
            *(undefined8 *)(puVar14 + lVar9 + -8) = 0x6d60b0;
            pvVar8 = memset(pcVar21,0x2f,sVar7);
            pcVar21 = (char *)((long)pvVar8 + sVar7);
          }
          else {
            iVar23 = 0;
            pcVar22 = pcVar24;
            do {
              bVar4 = (byte)(*(ushort *)(uVar2 + (long)cVar11 * 2) >> 3) & 1;
              if ((byte)(cVar11 - 0x2cU) < 0x34) {
                bVar4 = bVar4 | (byte)(-0x8000000004008 >> (cVar11 - 0x2cU & 0x3f)) & 1 ^ 1;
              }
              if (bVar4 == 0) {
                pcVar21 = pcVar22;
                if (cVar11 == '/') {
                  iVar23 = iVar23 + 1;
                  if (iVar23 == 3) goto LAB_006d60b6;
                  *pcVar22 = '/';
                  pcVar21 = pcVar22 + 1;
                }
              }
              else {
                pcVar21 = pcVar22 + 1;
                *pcVar22 = (char)*(undefined4 *)(uVar3 + (long)cVar11 * 4);
              }
              cVar11 = pcVar26[1];
              pcVar26 = pcVar26 + 1;
              pcVar22 = pcVar21;
            } while (cVar11 != '\0');
            iVar5 = iVar23 + 1;
            if (iVar23 < 2) goto LAB_006d608a;
          }
LAB_006d60b6:
          *pcVar21 = '\0';
          *(undefined8 *)(puVar14 + lVar9 + -8) = 0x6d60c1;
          sVar7 = strlen(local_50);
          uVar2 = _nl_C_locobj._104_8_;
          puVar20 = puVar14 + lVar9;
          while (puVar18 != puVar14 + (lVar9 - (sVar7 + 0x1a & 0xfffffffffffff000))) {
            puVar15 = puVar20 + -0x1000;
            *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
            puVar18 = puVar20 + -0x1000;
            puVar20 = puVar20 + -0x1000;
          }
          uVar12 = (ulong)((uint)(sVar7 + 0x1a) & 0xff0);
          lVar9 = -uVar12;
          puVar19 = puVar15 + lVar9;
          if (uVar12 != 0) {
            *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
          }
          cVar11 = *local_50;
          pcVar26 = (char *)((ulong)(puVar15 + lVar9 + 0xf) & 0xfffffffffffffff0);
          if (cVar11 == '\0') {
            iVar5 = 1;
            pcVar21 = pcVar26;
LAB_006d5fb2:
            sVar7 = (ulong)(2 - iVar5) + 1;
            if (2 < iVar5) {
              sVar7 = 1;
            }
            *(undefined8 *)(puVar15 + lVar9 + -8) = 0x6d5fd8;
            pvVar8 = memset(pcVar21,0x2f,sVar7);
            pcVar21 = (char *)((long)pvVar8 + sVar7);
          }
          else {
            iVar23 = 0;
            pcVar22 = pcVar26;
            do {
              bVar4 = (byte)(*(ushort *)(uVar2 + (long)cVar11 * 2) >> 3) & 1;
              if ((byte)(cVar11 - 0x2cU) < 0x34) {
                bVar4 = bVar4 | (byte)(-0x8000000004008 >> (cVar11 - 0x2cU & 0x3f)) & 1 ^ 1;
              }
              if (bVar4 == 0) {
                pcVar21 = pcVar22;
                if (cVar11 == '/') {
                  iVar23 = iVar23 + 1;
                  if (iVar23 == 3) goto LAB_006d5fde;
                  *pcVar22 = '/';
                  pcVar21 = pcVar22 + 1;
                }
              }
              else {
                pcVar21 = pcVar22 + 1;
                *pcVar22 = (char)*(undefined4 *)(uVar3 + (long)cVar11 * 4);
              }
              cVar11 = local_50[1];
              local_50 = local_50 + 1;
              pcVar22 = pcVar21;
            } while (cVar11 != '\0');
            iVar5 = iVar23 + 1;
            if (iVar23 < 2) goto LAB_006d5fb2;
          }
LAB_006d5fde:
          *pcVar21 = '\0';
          pcVar21 = pcVar24;
          do {
            cVar11 = (char)*(undefined4 *)(uVar3 + (long)*pcVar21 * 4);
            *pcVar21 = cVar11;
            pcVar22 = pcVar26;
            pcVar21 = pcVar21 + 1;
          } while (cVar11 != '\0');
          do {
            cVar11 = (char)*(undefined4 *)(uVar3 + (long)*pcVar22 * 4);
            *pcVar22 = cVar11;
            pcVar22 = pcVar22 + 1;
          } while (cVar11 != '\0');
          *(undefined8 *)(puVar15 + lVar9 + -8) = 0x6d601f;
          iVar5 = __gconv_compare_alias(pcVar26,pcVar24);
          puVar20 = puVar15 + lVar9;
          if (iVar5 != 0) goto LAB_006d6230;
          plVar25 = (long *)puVar13[2];
        }
        if (*plVar25 == 0) {
          pcVar26 = (char *)*puVar13;
          *(undefined8 *)(puVar19 + -8) = 0x6d62bd;
          pcVar24 = rindex(pcVar26,0x2f);
          pcVar26 = pcVar24 + -1;
          if (pcVar24[-2] == '/') {
            sVar7 = 1;
          }
          else {
            do {
              pcVar22 = pcVar26 + -1;
              pcVar21 = pcVar26 + -2;
              pcVar26 = pcVar22;
            } while (*pcVar21 != '/');
            sVar7 = (long)pcVar24 - (long)pcVar22;
          }
          *(undefined8 *)(puVar19 + -8) = 0x6d62e5;
          pcVar26 = strndup(pcVar26,sVar7);
          *plVar25 = (long)pcVar26;
        }
        if (local_60 == (char *)0x0) {
          lVar9 = puVar13[2];
        }
        else {
          *(undefined8 *)(puVar19 + -8) = 0x6d6056;
          iVar5 = strcasecmp_l(local_60,"TRANSLIT",(__locale_t)_nl_C_locobj);
          lVar9 = puVar13[2];
          if (iVar5 == 0) {
            *(undefined4 *)(lVar9 + 0x34) = 1;
          }
        }
        puVar14 = puVar19;
        if (*(uint *)(lVar9 + 0x30) < 0xfffffffe) {
          *(uint *)(lVar9 + 0x30) = *(uint *)(lVar9 + 0x30) + 1;
        }
      }
      goto LAB_006d5bbc;
    }
    if ((sVar7 < 3) ||
       ((((*pcVar26 != '.' || (pcVar26[1] != '.')) || (pcVar26[2] != '/')) &&
        (((pcVar26[sVar7 - 3] != '/' || (pcVar26[sVar7 - 2] != '.')) || (pcVar26[sVar7 - 1] != '.'))
        )))) goto LAB_006d5b7c;
  }
LAB_006d5c10:
  lVar9 = 0;
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  puVar14 = auStack_98;
LAB_006d5bbc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar14 + -8) = 0x6d6332;
  __stack_chk_fail_local();
}

