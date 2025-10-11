
/* WARNING: Removing unreachable block (ram,0x006c9e04) */
/* WARNING: Removing unreachable block (ram,0x006c991a) */
/* WARNING: Removing unreachable block (ram,0x006c98bd) */
/* WARNING: Removing unreachable block (ram,0x006c99cf) */
/* WARNING: Removing unreachable block (ram,0x006c9fd0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong find_derivation(char *param_1,char *param_2,char *param_3,char *param_4,long *param_5,
                     ulong *param_6)

{
  char **ppcVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  __compar_fn_t __compar;
  void **__rootp;
  int iVar9;
  long *plVar10;
  long lVar11;
  void *pvVar12;
  undefined8 *puVar13;
  char **ppcVar14;
  char *pcVar15;
  size_t sVar16;
  size_t sVar17;
  undefined8 *puVar18;
  void *pvVar19;
  int iVar20;
  char *pcVar21;
  ulong uVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  ulong uVar25;
  long lVar26;
  undefined8 *puVar27;
  code *pcVar28;
  ulong uVar29;
  long in_FS_OFFSET;
  bool bVar30;
  int iVar31;
  undefined1 auStack_178 [8];
  char *local_170;
  size_t local_168;
  undefined8 local_160;
  undefined1 local_158 [16];
  char **local_148;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  char *local_130;
  size_t local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  char **local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [8];
  char ***local_f0;
  __compar_fn_t local_e8;
  void **local_e0;
  long *local_d8;
  char **local_d0;
  char *local_c8;
  undefined8 *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char **ppcStack_a0;
  char *local_98;
  int local_8c;
  ulong *local_88;
  char *local_80;
  char *local_78;
  char **local_70;
  char *local_68;
  char *pcStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  puVar23 = auStack_f8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = param_1;
  if (param_2 != (char *)0x0) {
    local_b0 = param_2;
  }
  local_d8 = param_5;
  local_c8 = param_4;
  local_b8 = param_2;
  local_98 = param_1;
  local_88 = param_6;
  pcStack_60 = local_b0;
  if (param_4 == (char *)0x0) {
    local_e8 = derivation_compare;
    local_58 = 0;
    local_50 = 0;
    local_e0 = (void **)&known_derivations;
    local_100 = 0x6c99be;
    local_68 = param_3;
    plVar10 = (long *)tfind(&local_68,(void **)&known_derivations,derivation_compare);
    if (plVar10 == (long *)0x0) {
      puVar23 = auStack_138;
      local_d0 = &local_130;
      local_140 = 0x6c9a0c;
      local_130 = param_3;
      local_128 = strlen(param_3);
      local_f0 = &local_108;
      local_120 = 0;
      local_108 = (char **)0x0;
      local_118 = (undefined1  [16])0x0;
      local_c8 = param_3;
      goto LAB_006c9a3d;
    }
  }
  else {
    local_e8 = derivation_compare;
    local_58 = 0;
    local_50 = 0;
    local_e0 = (void **)&known_derivations;
    local_100 = 0x6c97b4;
    local_68 = param_4;
    plVar10 = (long *)tfind(&local_68,(void **)&known_derivations,derivation_compare);
    if (plVar10 == (long *)0x0) {
      local_d0 = &local_130;
      local_130 = local_c8;
      local_140 = 0x6c98fe;
      local_128 = strlen(local_c8);
      local_120 = 0;
      local_118 = (undefined1  [16])0x0;
      puVar23 = auStack_178;
      local_170 = param_3;
      local_168 = strlen(param_3);
      local_f0 = &local_148;
      local_160 = 0;
      local_148 = (char **)0x0;
      local_158 = (undefined1  [16])0x0;
      local_108 = &local_170;
LAB_006c9a3d:
      iVar9 = 0;
      local_c0 = (undefined8 *)0x0;
      iVar20 = 0x7fffffff;
      local_8c = 0x7fffffff;
      ppcVar14 = local_d0;
LAB_006c9a85:
      if ((iVar9 == iVar20 || iVar9 < iVar20) &&
         (((iVar9 != iVar20 || (*(int *)(ppcVar14 + 2) < local_8c)) &&
          (__gconv_modules_db != (char *)0x0)))) {
        pcVar15 = *ppcVar14;
        pcVar21 = __gconv_modules_db;
        do {
          pcVar6 = *(char **)pcVar21;
          *(undefined8 *)(puVar23 + -8) = 0x6c9ab4;
          iVar9 = strcmp(pcVar15,pcVar6);
          if (iVar9 == 0) goto LAB_006c9b1d;
          if (iVar9 < 0) {
            pcVar21 = *(char **)(pcVar21 + 0x20);
          }
          else {
            pcVar21 = *(char **)(pcVar21 + 0x30);
          }
        } while (pcVar21 != (char *)0x0);
      }
      ppcVar14 = (char **)ppcVar14[5];
      if (ppcVar14 != (char **)0x0) goto LAB_006c9a81;
      goto LAB_006c9c11;
    }
  }
  uVar29 = *(ulong *)(*plVar10 + 0x18);
  lVar4 = *(long *)(*plVar10 + 0x10);
  *local_d8 = lVar4;
  lVar26 = uVar29 - 1;
  *local_88 = uVar29;
  if (uVar29 != 0) {
    plVar10 = (long *)(lVar4 + -0x68 + uVar29 * 0x68);
    do {
      lVar11 = plVar10[2];
      *(int *)(plVar10 + 2) = (int)lVar11 + 1;
      if (((int)lVar11 == 0) && (plVar10[1] != 0)) {
        local_100 = 0x6c9810;
        lVar11 = __gconv_find_shlib();
        *plVar10 = lVar11;
        if (lVar11 == 0) {
          uVar25 = lVar26 + 1;
          *(int *)(plVar10 + 2) = (int)plVar10[2] + -1;
          if (uVar25 < uVar29) {
            plVar10 = (long *)(lVar4 + uVar25 * 0x68);
            do {
              lVar26 = *plVar10;
              if (lVar26 == 0) {
                if (plVar10[8] != 0) {
LAB_006ca387:
                    /* WARNING: Subroutine does not return */
                  *(undefined **)(puVar23 + -8) = &UNK_006ca3a6;
                  __assert_fail("step->__end_fct == NULL","gconv_db.c",0xe1,"__gconv_release_step");
                }
              }
              else {
                plVar2 = plVar10 + 2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                if ((int)*plVar2 == 0) {
                  pcVar28 = (code *)(((ulong)plVar10[8] >> 0x11 | plVar10[8] << 0x2f) ^
                                    *(ulong *)(in_FS_OFFSET + 0x30));
                  if (pcVar28 != (code *)0x0) {
                    local_100 = 0x6ca356;
                    _dl_mcount_wrapper_check(pcVar28);
                    local_100 = 0x6ca35c;
                    (*pcVar28)(plVar10);
                    lVar26 = *plVar10;
                  }
                  local_100 = 0x6ca364;
                  __gconv_release_shlib(lVar26);
                  *plVar10 = 0;
                }
              }
              uVar25 = uVar25 + 1;
              plVar10 = plVar10 + 0xd;
            } while (uVar25 < uVar29);
          }
          uVar25 = 1;
          puVar23 = auStack_f8;
          goto LAB_006c9890;
        }
        uVar25 = *(ulong *)(lVar11 + 0x20);
        lVar5 = *(long *)(lVar11 + 0x18);
        lVar11 = *(long *)(lVar11 + 0x28);
        plVar10[6] = 0;
        plVar10[7] = uVar25;
        pcVar28 = (code *)((uVar25 >> 0x11 | uVar25 << 0x2f) ^ *(ulong *)(in_FS_OFFSET + 0x30));
        plVar10[5] = lVar5;
        plVar10[8] = lVar11;
        if (pcVar28 != (code *)0x0) {
          local_100 = 0x6c9859;
          _dl_mcount_wrapper_check();
          local_100 = 0x6c985f;
          (*pcVar28)(plVar10);
          pcVar28 = (code *)plVar10[6];
        }
        uVar25 = (ulong)pcVar28 ^ *(ulong *)(in_FS_OFFSET + 0x30);
        plVar10[6] = uVar25 << 0x11 | uVar25 >> 0x2f;
      }
      lVar26 = lVar26 + -1;
      plVar10 = plVar10 + -0xd;
    } while (lVar26 != -1);
  }
  uVar25 = 0;
  puVar23 = auStack_f8;
  goto LAB_006c9890;
LAB_006c9b1d:
  do {
    local_70 = ppcVar14;
    pcVar15 = *(char **)(pcVar21 + 8);
    ppcStack_a0 = local_70;
    if ((*pcVar15 == '-') && (pcVar15[1] == '\0')) {
      pcVar15 = local_b0;
    }
    iVar9 = (int)((ulong)*(undefined8 *)(pcVar21 + 0x10) >> 0x20) + (int)local_70[2];
    iVar31 = (int)*(undefined8 *)(pcVar21 + 0x10) + (int)((ulong)local_70[2] >> 0x20);
    local_80 = (char *)CONCAT44(iVar31,iVar9);
    local_78 = (char *)CONCAT44(local_78._4_4_,iVar9);
    *(undefined8 *)(puVar23 + -8) = 0x6c9b7f;
    local_a8 = pcVar21;
    iVar9 = strcmp(pcVar15,local_98);
    puVar18 = local_c0;
    if (iVar9 == 0) {
joined_r0x006c9b91:
      for (; puVar18 != (undefined8 *)0x0; puVar18 = (undefined8 *)puVar18[5]) {
        pcVar6 = (char *)*puVar18;
        *(undefined8 *)(puVar23 + -8) = 0x6c9bb8;
        iVar9 = strcmp(pcVar15,pcVar6);
        if (iVar9 == 0) {
          iVar9 = *(int *)((long)puVar18 + 0x14);
          puVar24 = puVar23;
          if ((iVar9 != iVar31 && iVar31 <= iVar9) ||
             ((iVar9 == iVar31 && ((int)local_78 < *(int *)(puVar18 + 2))))) {
            puVar18[3] = pcVar21;
            puVar18[4] = local_70;
            puVar18[2] = local_80;
          }
          goto LAB_006c9bcc;
        }
      }
      puVar24 = puVar23 + -0x40;
      *(undefined8 *)(puVar23 + -8) = *(undefined8 *)(puVar23 + -8);
      puVar18 = (undefined8 *)((ulong)(puVar23 + -0x31) & 0xfffffffffffffff0);
      *puVar18 = pcVar15;
      *(undefined8 *)(puVar23 + -0x48) = 0x6ca006;
      sVar16 = strlen(pcVar15);
      puVar18[3] = pcVar21;
      puVar18[1] = sVar16;
      puVar18[2] = local_80;
      puVar18[4] = local_70;
      puVar18[5] = local_c0;
      local_c0 = puVar18;
LAB_006c9bcc:
      puVar23 = puVar24;
      if (iVar31 < iVar20) {
        local_8c = (int)local_78;
        iVar20 = iVar31;
        goto LAB_006c9b10;
      }
      if (iVar20 != iVar31) goto LAB_006c9b10;
      pcVar21 = *(char **)(pcVar21 + 0x28);
      iVar9 = (int)local_78;
      if (local_8c <= (int)local_78) {
        iVar9 = local_8c;
      }
    }
    else {
      if (local_b8 != (char *)0x0) {
        *(undefined8 *)(puVar23 + -8) = 0x6c9ae7;
        iVar9 = strcmp(pcVar15,local_b8);
        puVar18 = local_c0;
        if (iVar9 == 0) goto joined_r0x006c9b91;
      }
      ppcVar14 = local_d0;
      if ((iVar31 < iVar20) || ((iVar20 == iVar31 && ((int)local_78 < local_8c)))) {
        do {
          pcVar6 = *ppcVar14;
          *(undefined8 *)(puVar23 + -8) = 0x6c9deb;
          iVar9 = strcmp(pcVar15,pcVar6);
          if (iVar9 == 0) {
            if ((iVar31 < *(int *)((long)ppcVar14 + 0x14)) ||
               ((*(int *)((long)ppcVar14 + 0x14) == iVar31 &&
                ((int)local_78 < *(int *)(ppcVar14 + 2))))) {
              ppcVar14[3] = pcVar21;
              ppcVar14[4] = (char *)local_70;
              ppcVar14 = local_d0;
              do {
                pcVar15 = ppcVar14[3];
                if (pcVar15 == (char *)0x0) {
                  ppcVar14 = (char **)ppcVar14[5];
                }
                else {
                  pcVar6 = ppcVar14[4];
                  iVar9 = *(int *)(pcVar15 + 0x10);
                  iVar31 = *(int *)(pcVar15 + 0x14);
                  lVar26 = *(long *)(pcVar6 + 0x18);
                  while (lVar26 != 0) {
                    pcVar6 = *(char **)(pcVar6 + 0x20);
                    iVar9 = iVar9 + (int)*(undefined8 *)(lVar26 + 0x10);
                    iVar31 = iVar31 + (int)((ulong)*(undefined8 *)(lVar26 + 0x10) >> 0x20);
                    lVar26 = *(long *)(pcVar6 + 0x18);
                  }
                  ppcVar14[2] = (char *)CONCAT44(iVar9,iVar31);
                  ppcVar14 = (char **)ppcVar14[5];
                }
                puVar18 = local_c0;
              } while (ppcVar14 != (char **)0x0);
              while (puVar18 != (undefined8 *)0x0) {
                iVar9 = (int)((ulong)*(undefined8 *)(puVar18[3] + 0x10) >> 0x20) +
                        (int)*(undefined8 *)(puVar18[4] + 0x10);
                iVar31 = (int)*(undefined8 *)(puVar18[3] + 0x10) +
                         (int)((ulong)*(undefined8 *)(puVar18[4] + 0x10) >> 0x20);
                puVar18[2] = CONCAT44(iVar31,iVar9);
                bVar30 = iVar20 == iVar31;
                puVar18 = (undefined8 *)puVar18[5];
                bVar8 = iVar31 < iVar20;
                if (iVar31 < iVar20) {
                  iVar20 = iVar31;
                }
                if (bVar30 && iVar9 < local_8c || bVar8) {
                  local_8c = iVar9;
                }
              }
            }
            goto LAB_006c9b10;
          }
          ppcVar1 = ppcVar14 + 5;
          ppcVar14 = (char **)*ppcVar1;
        } while ((char **)*ppcVar1 != (char **)0x0);
        *(undefined8 *)(puVar23 + -8) = *(undefined8 *)(puVar23 + -8);
        ppcVar14 = (char **)((ulong)(puVar23 + -0x31) & 0xfffffffffffffff0);
        *ppcVar14 = pcVar15;
        *(undefined8 *)(puVar23 + -0x48) = 0x6c9e37;
        pcVar15 = (char *)strlen(pcVar15);
        ppcVar14[5] = (char *)0x0;
        ppcVar14[1] = pcVar15;
        ppcVar14[3] = local_a8;
        ppcVar14[4] = (char *)ppcStack_a0;
        ppcVar14[2] = local_80;
        *local_f0 = ppcVar14;
        local_f0 = (char ***)(ppcVar14 + 5);
        puVar23 = puVar23 + -0x40;
      }
LAB_006c9b10:
      pcVar21 = *(char **)(pcVar21 + 0x28);
      iVar9 = local_8c;
    }
    local_8c = iVar9;
    ppcVar14 = local_70;
  } while (pcVar21 != (char *)0x0);
  ppcVar14 = (char **)local_70[5];
  if (ppcVar14 == (char **)0x0) goto LAB_006c9c11;
LAB_006c9a81:
  iVar9 = *(int *)((long)ppcVar14 + 0x14);
  goto LAB_006c9a85;
LAB_006c9c11:
  if (local_c0 == (undefined8 *)0x0) {
    *local_d8 = 0;
    *local_88 = 0;
    goto LAB_006ca1bc;
  }
  puVar18 = (undefined8 *)local_c0[5];
  puVar27 = local_c0;
  if ((((puVar18 != (undefined8 *)0x0) &&
       (puVar27 = puVar18, *(int *)((long)local_c0 + 0x14) <= *(int *)((long)puVar18 + 0x14))) &&
      (puVar27 = local_c0, *(int *)((long)puVar18 + 0x14) == *(int *)((long)local_c0 + 0x14))) &&
     (*(int *)(puVar18 + 2) < *(int *)(local_c0 + 2))) {
    puVar27 = puVar18;
  }
  lVar26 = puVar27[4];
  if (lVar26 == 0) {
    *(undefined8 *)(puVar23 + -8) = 0x6ca27f;
    pvVar19 = malloc(0);
    if (pvVar19 == (void *)0x0) goto LAB_006ca287;
    uVar29 = 0;
    *local_88 = 0;
  }
  else {
    uVar29 = 0;
    do {
      uVar25 = uVar29;
      lVar26 = *(long *)(lVar26 + 0x20);
      uVar29 = uVar25 + 1;
    } while (lVar26 != 0);
    *(undefined8 *)(puVar23 + -8) = 0x6c9c8c;
    pvVar12 = malloc(uVar29 * 0x68);
    if (pvVar12 == (void *)0x0) {
LAB_006ca287:
      pvVar19 = (void *)0x0;
      uVar29 = 0;
      *local_88 = 0;
      *local_d8 = 0;
      iVar9 = 3;
      goto LAB_006ca0ec;
    }
    *local_88 = uVar29;
    pvVar19 = pvVar12;
    if (uVar29 != 0) {
      puVar18 = (undefined8 *)((long)pvVar12 + (uVar29 * 0x68 - 0x68));
      local_80 = (char *)0x0;
      local_78 = (char *)0x0;
      do {
        uVar22 = uVar25;
        pcVar15 = local_c8;
        if (uVar22 == 0) {
          *(undefined8 *)(puVar23 + -8) = 0x6ca044;
          local_78 = strdup(pcVar15);
          *(char **)((long)pvVar12 + 0x18) = local_78;
          if (local_78 != (char *)0x0) goto LAB_006c9d08;
          uVar29 = 1;
LAB_006ca07e:
          iVar9 = 0;
          uVar25 = *local_88;
          if (uVar29 < uVar25) {
LAB_006ca1f5:
            plVar10 = (long *)((long)pvVar12 + uVar29 * 0x68);
            goto LAB_006ca253;
          }
          uVar29 = 0;
          pvVar19 = (void *)0x0;
          *(undefined8 *)(puVar23 + -8) = 0x6ca09f;
          free(pvVar12);
          pcVar15 = local_78;
          *(undefined8 *)(puVar23 + -8) = 0x6ca0a8;
          free(pcVar15);
          pcVar15 = local_80;
          *(undefined8 *)(puVar23 + -8) = 0x6ca0b1;
          free(pcVar15);
          *local_88 = 0;
          *local_d8 = 0;
          iVar9 = 1;
          goto LAB_006ca0ec;
        }
        puVar18[3] = *(undefined8 *)puVar27[4];
LAB_006c9d08:
        if (*local_88 == uVar29) {
          pcVar15 = (char *)*puVar27;
          *(undefined8 *)(puVar23 + -8) = 0x6ca068;
          local_80 = strdup(pcVar15);
          puVar18[4] = local_80;
          if (local_80 != (char *)0x0) goto LAB_006c9d29;
LAB_006ca07a:
          uVar29 = uVar22 + 1;
          goto LAB_006ca07e;
        }
        puVar18[4] = *(undefined8 *)((long)pvVar12 + uVar29 * 0x68 + 0x18);
LAB_006c9d29:
        *(undefined4 *)(puVar18 + 2) = 1;
        lVar26 = puVar27[3];
        puVar18[0xc] = 0;
        pcVar15 = *(char **)(lVar26 + 0x18);
        if (*pcVar15 == '/') {
          *(undefined8 *)(puVar23 + -8) = 0x6c9d4d;
          puVar13 = (undefined8 *)__gconv_find_shlib();
          if (puVar13 == (undefined8 *)0x0) goto LAB_006ca07a;
          uVar3 = *puVar13;
          *puVar18 = puVar13;
          puVar18[1] = uVar3;
          uVar25 = puVar13[4];
          uVar3 = puVar13[3];
          uVar7 = puVar13[5];
          puVar18[6] = 0;
          puVar18[7] = uVar25;
          puVar18[8] = uVar7;
          puVar18[5] = uVar3;
          ppcVar14 = (char **)((uVar25 >> 0x11 | uVar25 << 0x2f) ^ *(ulong *)(in_FS_OFFSET + 0x30));
          local_70 = ppcVar14;
          if (ppcVar14 == (char **)0x0) {
LAB_006c9dbe:
            uVar29 = (ulong)ppcVar14 ^ *(ulong *)(in_FS_OFFSET + 0x30);
            puVar18[6] = uVar29 << 0x11 | uVar29 >> 0x2f;
            goto LAB_006c9cd8;
          }
          *(undefined8 *)(puVar23 + -8) = 0x6c9da8;
          _dl_mcount_wrapper_check();
          ppcVar14 = local_70;
          *(undefined8 *)(puVar23 + -8) = 0x6c9db1;
          iVar9 = (*(code *)ppcVar14)(puVar18);
          if (iVar9 == 0) {
            ppcVar14 = (char **)puVar18[6];
            goto LAB_006c9dbe;
          }
          puVar18[8] = *(ulong *)(in_FS_OFFSET + 0x30) << 0x11 |
                       *(ulong *)(in_FS_OFFSET + 0x30) >> 0x2f;
          uVar29 = uVar29 - 1;
          uVar25 = *local_88;
          if (uVar29 < uVar25) goto LAB_006ca1f5;
          local_70 = (char **)CONCAT44(local_70._4_4_,iVar9);
          pvVar19 = (void *)0x0;
          uVar29 = 0;
          *(undefined8 *)(puVar23 + -8) = 0x6ca3cd;
          free(pvVar12);
          pcVar15 = local_78;
          *(undefined8 *)(puVar23 + -8) = 0x6ca3d6;
          free(pcVar15);
          pcVar15 = local_80;
          *(undefined8 *)(puVar23 + -8) = 0x6ca3df;
          free(pcVar15);
          *local_88 = 0;
          *local_d8 = 0;
          iVar9 = (int)local_70;
          goto LAB_006ca0ec;
        }
        *(undefined8 *)(puVar23 + -8) = 0x6c9cd8;
        __gconv_get_builtin_trans(pcVar15,puVar18);
LAB_006c9cd8:
        puVar27 = (undefined8 *)puVar27[4];
        puVar18 = puVar18 + -0xd;
        uVar25 = uVar22 - 1;
        uVar29 = uVar22;
      } while (uVar22 != 0);
      uVar29 = *local_88;
    }
  }
  *local_d8 = (long)pvVar19;
  iVar9 = 0;
  goto LAB_006ca0ec;
LAB_006ca253:
  do {
    lVar26 = *plVar10;
    if (lVar26 == 0) {
      if (plVar10[8] != 0) goto LAB_006ca387;
    }
    else {
      plVar2 = plVar10 + 2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      if ((int)*plVar2 == 0) {
        pcVar28 = (code *)(((ulong)plVar10[8] >> 0x11 | plVar10[8] << 0x2f) ^
                          *(ulong *)(in_FS_OFFSET + 0x30));
        if (pcVar28 != (code *)0x0) {
          *(undefined8 *)(puVar23 + -8) = 0x6ca22a;
          _dl_mcount_wrapper_check(pcVar28);
          *(undefined8 *)(puVar23 + -8) = 0x6ca230;
          (*pcVar28)(plVar10);
          lVar26 = *plVar10;
        }
        *(undefined8 *)(puVar23 + -8) = 0x6ca238;
        __gconv_release_shlib(lVar26);
        *plVar10 = 0;
        uVar25 = *local_88;
      }
    }
    uVar29 = uVar29 + 1;
    plVar10 = plVar10 + 0xd;
  } while (uVar29 < uVar25);
  local_70 = (char **)CONCAT44(local_70._4_4_,iVar9);
  pvVar19 = (void *)0x0;
  uVar29 = 0;
  *(undefined8 *)(puVar23 + -8) = 0x6ca2d6;
  free(pvVar12);
  pcVar15 = local_78;
  *(undefined8 *)(puVar23 + -8) = 0x6ca2df;
  free(pcVar15);
  pcVar15 = local_80;
  *(undefined8 *)(puVar23 + -8) = 0x6ca2e8;
  free(pcVar15);
  *local_88 = 0;
  *local_d8 = 0;
  iVar9 = (int)local_70;
  if ((int)local_70 == 0) {
LAB_006ca1bc:
    uVar29 = 0;
    pvVar19 = (void *)0x0;
    iVar9 = 1;
  }
LAB_006ca0ec:
  pcVar15 = local_c8;
  local_70 = (char **)CONCAT44(local_70._4_4_,iVar9);
  *(undefined8 *)(puVar23 + -8) = 0x6ca0fc;
  sVar16 = strlen(pcVar15);
  pcVar15 = local_b0;
  *(undefined8 *)(puVar23 + -8) = 0x6ca10c;
  sVar17 = strlen(pcVar15);
  *(undefined8 *)(puVar23 + -8) = 0x6ca11a;
  puVar18 = (undefined8 *)malloc(sVar16 + 0x22 + sVar17);
  pcVar15 = local_c8;
  uVar25 = (ulong)local_70 & 0xffffffff;
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = puVar18 + 4;
    *(undefined8 *)(puVar23 + -8) = 0x6ca140;
    pvVar12 = mempcpy(puVar18 + 4,pcVar15,sVar16 + 1);
    pcVar15 = local_b0;
    *(undefined8 *)(puVar23 + -8) = 0x6ca152;
    pvVar12 = memcpy(pvVar12,pcVar15,sVar17 + 1);
    __rootp = local_e0;
    __compar = local_e8;
    puVar18[3] = uVar29;
    puVar18[1] = pvVar12;
    puVar18[2] = pvVar19;
    *(undefined8 *)(puVar23 + -8) = 0x6ca17f;
    pvVar19 = tsearch(puVar18,__rootp,__compar);
    uVar25 = (ulong)local_70 & 0xffffffff;
    if (pvVar19 == (void *)0x0) {
      *(undefined8 *)(puVar23 + -8) = 0x6ca194;
      free(puVar18);
      uVar25 = (ulong)local_70 & 0xffffffff;
    }
  }
LAB_006c9890:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar23 + -8) = &UNK_006ca406;
    __stack_chk_fail_local();
  }
  return uVar25;
}

