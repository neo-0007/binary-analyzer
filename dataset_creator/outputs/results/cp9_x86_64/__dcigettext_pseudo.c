
long * __dcigettext(char *param_1,long *param_2,long *param_3,int param_4,long param_5,uint param_6)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  char *pcVar8;
  size_t sVar9;
  char *pcVar10;
  undefined4 *puVar11;
  long *plVar12;
  ulong uVar13;
  void *pvVar14;
  size_t sVar15;
  size_t sVar16;
  undefined8 *puVar17;
  char *pcVar18;
  long *plVar19;
  char **ppcVar20;
  undefined1 *puVar22;
  char **ppcVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  long in_FS_OFFSET;
  bool bVar28;
  char *local_108;
  char *local_100;
  char *local_f8;
  long *local_f0;
  size_t local_e8;
  char *local_e0;
  long *local_d8;
  undefined4 local_cc;
  long *local_c8;
  long *plStack_c0;
  long local_b8;
  long *local_b0;
  uint local_a8;
  int local_a4;
  long *local_a0;
  long *local_98;
  long local_90;
  char *local_88;
  uint local_80;
  char *local_78;
  undefined8 local_68;
  long *local_50;
  long local_40;
  char **ppcVar21;
  undefined1 *puVar23;
  
  ppcVar21 = &local_108;
  ppcVar20 = &local_108;
  ppcVar24 = &local_108;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (long *)0x0;
  local_d8 = param_3;
  local_b8 = param_5;
  local_a8 = param_6;
  local_a4 = param_4;
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
  }
  else {
    ppcVar24 = &local_108;
    if ((param_6 < 0xd) && (ppcVar24 = &local_108, param_6 != 6)) {
      local_cc = *(undefined4 *)(in_FS_OFFSET + -0x58);
      pthread_rwlock_rdlock((pthread_rwlock_t *)__libc_setlocale_lock);
      pthread_rwlock_rdlock((pthread_rwlock_t *)_nl_state_lock);
      if (param_1 == (char *)0x0) {
        param_1 = _nl_current_default_domain;
      }
      local_68 = 0;
      local_80 = local_a8;
      local_88 = param_1;
      local_50 = param_2;
      local_f8 = (char *)__current_locale_name(local_a8);
      local_78 = local_f8;
      pthread_rwlock_rdlock((pthread_rwlock_t *)tree_lock);
      plVar7 = (long *)tfind(&local_88,(void **)&root,transcmp);
      local_f0 = plVar7;
      pthread_rwlock_unlock((pthread_rwlock_t *)tree_lock);
      puVar17 = _nl_domain_bindings;
      if ((plVar7 != (long *)0x0) && (lVar2 = *plVar7, *(int *)(lVar2 + 0x18) == _nl_msg_cat_cntr))
      {
        local_a0 = *(long **)(lVar2 + 0x28);
        plVar7 = local_a0;
        if (local_a4 != 0) {
          lVar25 = *(long *)(lVar2 + 0x30);
          lVar2 = *(long *)(*(long *)(lVar2 + 0x20) + 0x10);
          uVar13 = plural_eval(*(undefined8 *)(lVar2 + 0xb8));
          plVar26 = local_a0;
          plVar7 = plVar26;
          if (uVar13 < *(ulong *)(lVar2 + 0xc0)) {
            plVar19 = (long *)((long)local_a0 + lVar25);
            plVar12 = local_a0;
            do {
              bVar28 = uVar13 == 0;
              uVar13 = uVar13 - 1;
              plVar7 = plVar12;
              if (bVar28) break;
              pvVar14 = rawmemchr(plVar12,0);
              plVar12 = (long *)((long)pvVar14 + 1);
              plVar7 = plVar26;
            } while (plVar12 < plVar19);
          }
        }
        local_a0 = plVar7;
        pthread_rwlock_unlock((pthread_rwlock_t *)_nl_state_lock);
        pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
        *(undefined4 *)(in_FS_OFFSET + -0x58) = local_cc;
        ppcVar24 = &local_108;
        param_2 = local_a0;
        goto LAB_006d9e40;
      }
      for (; puVar17 != (undefined8 *)0x0; puVar17 = (undefined8 *)*puVar17) {
        iVar6 = strcmp(param_1,(char *)(puVar17 + 3));
        if (iVar6 == 0) {
          local_a0 = (long *)puVar17[1];
          if ((char)*local_a0 == '/') goto LAB_006d9b99;
          pcVar8 = getcwd((char *)0x0,0);
          ppcVar24 = &local_108;
          if (pcVar8 == (char *)0x0) goto LAB_006d9ed0;
          iVar6 = asprintf((char **)&local_98,"%s/%s",pcVar8,local_a0);
          free(pcVar8);
          ppcVar24 = &local_108;
          if (iVar6 < 0) goto LAB_006d9ed0;
          local_a0 = local_98;
          goto LAB_006d9b99;
        }
        if (iVar6 < 0) {
          puVar17 = (undefined8 *)0x0;
          break;
        }
      }
      local_a0 = (long *)0x81a1e0;
LAB_006d9b99:
      bVar1 = (&_nl_category_name_idxs)[(int)local_a8];
      pcVar8 = (char *)__current_locale_name((long)(int)local_a8);
      if ((((*pcVar8 != 'C') || (pcVar8[1] != '\0')) &&
          (pcVar10 = getenv("LANGUAGE"), pcVar10 != (char *)0x0)) && (*pcVar10 != '\0')) {
        pcVar8 = pcVar10;
      }
      local_e8 = strlen(param_1);
      sVar9 = strlen("LC_COLLATE" + bVar1);
      uVar13 = local_e8 + 0x1c + sVar9;
      ppcVar24 = &local_108;
      while (ppcVar21 != (char **)((long)&local_108 - (uVar13 & 0xfffffffffffff000))) {
        ppcVar20 = (char **)((long)ppcVar24 + -0x1000);
        *(undefined8 *)((long)ppcVar24 + -8) = *(undefined8 *)((long)ppcVar24 + -8);
        ppcVar21 = (char **)((long)ppcVar24 + -0x1000);
        ppcVar24 = (char **)((long)ppcVar24 + -0x1000);
      }
      uVar13 = (ulong)((uint)uVar13 & 0xff0);
      lVar2 = -uVar13;
      puVar22 = (undefined1 *)((long)ppcVar20 + lVar2);
      puVar23 = (undefined1 *)((long)ppcVar20 + lVar2);
      if (uVar13 != 0) {
        *(undefined8 *)((long)ppcVar20 + -8) = *(undefined8 *)((long)ppcVar20 + -8);
      }
      local_c8 = (long *)((ulong)((long)ppcVar20 + lVar2 + 0xf) & 0xfffffffffffffff0);
      *(undefined8 *)((long)ppcVar20 + lVar2 + -8) = 0x6d9c51;
      pcVar10 = stpcpy((char *)local_c8,"LC_COLLATE" + bVar1);
      *pcVar10 = '/';
      *(undefined8 *)((long)ppcVar20 + lVar2 + -8) = 0x6d9c67;
      puVar11 = (undefined4 *)mempcpy(pcVar10 + 1,param_1,local_e8);
      *puVar11 = 0x6f6d2e;
      *(undefined8 *)((long)ppcVar20 + lVar2 + -8) = 0x6d9c75;
      sVar9 = strlen(pcVar8);
      puVar4 = (undefined1 *)((long)ppcVar20 + lVar2);
      while (puVar22 !=
             (undefined1 *)((long)ppcVar20 + (lVar2 - (sVar9 + 0x18 & 0xfffffffffffff000)))) {
        puVar23 = puVar4 + -0x1000;
        *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
        puVar22 = puVar4 + -0x1000;
        puVar4 = puVar4 + -0x1000;
      }
      uVar13 = (ulong)((uint)(sVar9 + 0x18) & 0xff0);
      lVar2 = -uVar13;
      if (uVar13 != 0) {
        *(undefined8 *)(puVar23 + -8) = *(undefined8 *)(puVar23 + -8);
      }
      pcVar10 = (char *)((ulong)(puVar23 + lVar2 + 0xf) & 0xfffffffffffffff0);
      local_e0 = param_1;
LAB_006d9cd0:
      do {
        do {
          for (; cVar5 = *pcVar8, cVar5 == ':'; pcVar8 = pcVar8 + 1) {
          }
          pcVar18 = pcVar10;
          if (cVar5 == '\0') {
            pcVar10[0] = 'C';
            pcVar10[1] = '\0';
            break;
          }
          do {
            pcVar8 = pcVar8 + 1;
            *pcVar18 = cVar5;
            iVar6 = __libc_enable_secure;
            pcVar18 = pcVar18 + 1;
            cVar5 = *pcVar8;
            if (cVar5 == '\0') break;
          } while (cVar5 != ':');
          *pcVar18 = '\0';
          if (iVar6 == 0) break;
          *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6da0f3;
          pcVar18 = strchr(pcVar10,0x2f);
        } while (pcVar18 != (char *)0x0);
        if ((*pcVar10 == 'C') && (ppcVar24 = (char **)(puVar23 + lVar2), pcVar10[1] == '\0'))
        goto LAB_006d9ed0;
        *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6d9d0c;
        iVar6 = strcmp(pcVar10,"POSIX");
        ppcVar24 = (char **)(puVar23 + lVar2);
        if (iVar6 == 0) goto LAB_006d9ed0;
        *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6d9d2d;
        plVar7 = (long *)_nl_find_domain(local_a0,pcVar10,local_c8,puVar17);
      } while (plVar7 == (long *)0x0);
      local_b0 = &local_90;
      *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6d9d56;
      plVar12 = (long *)_nl_find_msg(plVar7,puVar17,param_2,1);
      plVar26 = local_b0;
      if (plVar12 == (long *)0x0) {
        lVar25 = plVar7[4];
        if (lVar25 != 0) {
          lVar27 = 0;
          local_108 = pcVar10;
          local_100 = pcVar8;
          do {
            local_b0 = (long *)CONCAT44(local_b0._4_4_,(int)lVar27);
            *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6d9ec5;
            plVar12 = (long *)_nl_find_msg(lVar25,puVar17,param_2,1,plVar26);
            ppcVar24 = (char **)(puVar23 + lVar2);
            if (plVar12 == (long *)0xffffffffffffffff) goto LAB_006d9ed0;
            if (plVar12 != (long *)0x0) {
              plVar7 = (long *)plVar7[(long)(int)local_b0 + 4];
              goto LAB_006d9d7d;
            }
            lVar25 = plVar7[lVar27 + 5];
            pcVar8 = local_100;
            pcVar10 = local_108;
            lVar27 = lVar27 + 1;
          } while (lVar25 != 0);
        }
        goto LAB_006d9cd0;
      }
      ppcVar24 = (char **)(puVar23 + lVar2);
      if (plVar12 != (long *)0xffffffffffffffff) {
LAB_006d9d7d:
        pcVar8 = local_e0;
        *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6d9dac;
        local_c8 = plVar7;
        plStack_c0 = plVar12;
        local_b0 = plVar7;
        local_a0 = plVar12;
        free(local_98);
        plVar7 = local_b0;
        if (local_f0 == (long *)0x0) {
          local_b0 = local_a0;
          local_a0 = plVar7;
          *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6da1b8;
          sVar15 = strlen((char *)param_2);
          *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6da1c8;
          sVar16 = strlen(local_f8);
          sVar9 = local_e8;
          *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6da1dc;
          puVar17 = (undefined8 *)malloc(local_e8 + 0x3a + sVar16 + sVar15 + 1);
          plVar7 = local_a0;
          plVar26 = local_b0;
          if (puVar17 != (undefined8 *)0x0) {
            local_c8 = local_b0;
            *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6da210;
            pvVar14 = mempcpy(puVar17 + 7,param_2,sVar15 + 1);
            *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6da221;
            memcpy(pvVar14,pcVar8,sVar9 + 1);
            pcVar8 = (char *)(sVar9 + 1 + (long)pvVar14);
            *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6da233;
            strcpy(pcVar8,local_f8);
            puVar17[2] = pcVar8;
            *puVar17 = pvVar14;
            *(uint *)(puVar17 + 1) = local_a8;
            iVar6 = _nl_msg_cat_cntr;
            puVar17[4] = local_a0;
            *(int *)(puVar17 + 3) = iVar6;
            puVar17[5] = local_c8;
            puVar17[6] = local_90;
            local_b0 = local_a0;
            local_a0 = local_c8;
            *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6da290;
            pthread_rwlock_wrlock((pthread_rwlock_t *)tree_lock);
            *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6da2a6;
            plVar12 = (long *)tsearch(puVar17,(void **)&root,transcmp);
            *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6da2b5;
            pthread_rwlock_unlock((pthread_rwlock_t *)tree_lock);
            plVar7 = local_b0;
            if ((plVar12 == (long *)0x0) || (plVar26 = local_a0, (undefined8 *)*plVar12 != puVar17))
            {
              local_b0 = local_a0;
              local_a0 = plVar7;
              *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6da2e7;
              free(puVar17);
              plVar7 = local_a0;
              plVar26 = local_b0;
            }
          }
        }
        else {
          lVar25 = *local_f0;
          *(int *)(lVar25 + 0x18) = _nl_msg_cat_cntr;
          *(long **)(lVar25 + 0x20) = local_c8;
          *(long **)(lVar25 + 0x28) = plStack_c0;
          *(long *)(lVar25 + 0x30) = local_90;
          plVar26 = local_a0;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = local_cc;
        if (local_a4 == 0) goto LAB_006d9e10;
        lVar25 = plVar7[2];
        uVar3 = *(undefined8 *)(lVar25 + 0xb8);
        *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6da157;
        local_a0 = plVar26;
        uVar13 = plural_eval(uVar3);
        plVar7 = local_a0;
        plVar26 = plVar7;
        if (*(ulong *)(lVar25 + 0xc0) <= uVar13) goto LAB_006d9e10;
        plVar19 = (long *)((long)local_a0 + local_90);
        plVar12 = local_a0;
        goto LAB_006da180;
      }
LAB_006d9ed0:
      *(undefined8 *)((long)ppcVar24 + -8) = 0x6d9edc;
      free(local_98);
      *(undefined8 *)((long)ppcVar24 + -8) = 0x6d9ee8;
      pthread_rwlock_unlock((pthread_rwlock_t *)_nl_state_lock);
      *(undefined8 *)((long)ppcVar24 + -8) = 0x6d9ef4;
      pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
      *(undefined4 *)(in_FS_OFFSET + -0x58) = local_cc;
    }
    if ((local_a4 != 0) && (local_b8 != 1)) {
      param_2 = local_d8;
    }
  }
  goto LAB_006d9e40;
  while( true ) {
    *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6da191;
    pvVar14 = rawmemchr(plVar12,0);
    plVar12 = (long *)((long)pvVar14 + 1);
    plVar26 = plVar7;
    if (plVar19 <= plVar12) break;
LAB_006da180:
    bVar28 = uVar13 == 0;
    uVar13 = uVar13 - 1;
    plVar26 = plVar12;
    if (bVar28) break;
  }
LAB_006d9e10:
  *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6d9e23;
  local_a0 = plVar26;
  pthread_rwlock_unlock((pthread_rwlock_t *)_nl_state_lock);
  *(undefined8 *)(puVar23 + lVar2 + -8) = 0x6d9e2f;
  pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
  ppcVar24 = (char **)(puVar23 + lVar2);
  param_2 = local_a0;
LAB_006d9e40:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppcVar24 + -8) = 0x6da2ff;
  __stack_chk_fail_local();
}

