
ulong * _nl_find_msg(long param_1,long param_2,ulong *param_3,int param_4,ulong *param_5)

{
  uint *puVar1;
  long *plVar2;
  undefined8 uVar3;
  pthread_rwlock_t *ppVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  size_t sVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  void *pvVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 *puVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  undefined8 *puVar32;
  long in_FS_OFFSET;
  bool bVar33;
  undefined1 auStack_c8 [8];
  ulong *local_c0;
  long local_b8;
  int local_ac;
  void *local_a8;
  long local_a0;
  long local_98;
  ulong *local_90;
  pthread_rwlock_t *local_88;
  ulong *local_80;
  ulong local_78;
  ulong *local_70;
  ulong *local_68;
  long *local_60;
  ulong local_58 [2];
  undefined1 local_48;
  long local_40;
  undefined1 *puVar27;
  
  puVar16 = auStack_c8;
  puVar27 = auStack_c8;
  puVar26 = auStack_c8;
  puVar28 = auStack_c8;
  puVar25 = auStack_c8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = param_5;
  local_b8 = param_2;
  local_ac = param_4;
  local_98 = param_1;
  if (*(int *)(param_1 + 8) < 1) {
    _nl_load_domain();
  }
  plVar2 = *(long **)(local_98 + 0x10);
  puVar24 = auStack_c8;
  if (plVar2 != (long *)0x0) {
    local_70 = (ulong *)CONCAT44(local_70._4_4_,*(uint *)(plVar2 + 5));
    if (plVar2[0xc] != 0) {
      sVar9 = strlen((char *)param_3);
      local_80 = (ulong *)CONCAT44(local_80._4_4_,(int)sVar9);
      uVar6 = __hash_string(param_3);
      uVar30 = *(uint *)(plVar2 + 0xb);
      lVar29 = plVar2[0xd];
      uVar19 = (ulong)uVar6 % (ulong)uVar30;
      lVar23 = plVar2[0xc];
      local_88 = (pthread_rwlock_t *)(sVar9 & 0xffffffff);
      iVar20 = uVar6 % (uVar30 - 2) + 1;
      iVar21 = iVar20 - uVar30;
      local_78 = CONCAT44(local_78._4_4_,uVar30 - iVar20);
      local_90 = param_3;
      do {
        uVar30 = *(uint *)(lVar23 + uVar19 * 4);
        if ((int)lVar29 != 0) {
          uVar30 = uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 |
                   uVar30 << 0x18;
        }
        puVar24 = auStack_c8;
        if (uVar30 == 0) goto LAB_006d928f;
        uVar30 = uVar30 - 1;
        uVar22 = (ulong)uVar30;
        if (uVar30 < (uint)local_70) {
          puVar1 = (uint *)(plVar2[6] + uVar22 * 8);
          uVar30 = *puVar1;
          if ((int)plVar2[3] == 0) {
            if ((uint)local_80 <= uVar30) {
              lVar10 = *plVar2;
              uVar30 = puVar1[1];
              goto LAB_006d91a0;
            }
          }
          else if ((uint)local_80 <=
                   (uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 |
                   uVar30 << 0x18)) {
            uVar30 = puVar1[1];
            lVar10 = *plVar2;
            uVar30 = uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 |
                     uVar30 << 0x18;
LAB_006d91a0:
            pcVar14 = (char *)((ulong)uVar30 + lVar10);
            goto LAB_006d91b1;
          }
        }
        else {
          puVar11 = (ulong *)((ulong)(uVar30 - (uint)local_70) * 0x10 + plVar2[9]);
          if ((pthread_rwlock_t *)*puVar11 <= local_88) goto LAB_006d91d3;
          pcVar14 = (char *)puVar11[1];
LAB_006d91b1:
          local_a8 = (void *)CONCAT44(local_a8._4_4_,iVar21);
          local_a0 = lVar23;
          iVar7 = strcmp((char *)local_90,pcVar14);
          lVar23 = local_a0;
          iVar21 = (int)local_a8;
          if (iVar7 == 0) goto LAB_006d92e0;
        }
LAB_006d91d3:
        iVar7 = iVar21;
        if ((uint)uVar19 < (uint)local_78) {
          iVar7 = iVar20;
        }
        uVar19 = (ulong)((uint)uVar19 + iVar7);
      } while( true );
    }
    local_78 = (ulong)*(uint *)(plVar2 + 5);
    uVar19 = 0;
    uVar22 = local_78;
    while (uVar31 = uVar22, puVar24 = auStack_c8, uVar19 < uVar31) {
      while( true ) {
        uVar22 = uVar31 + uVar19 >> 1;
        uVar30 = *(uint *)(plVar2[6] + 4 + uVar22 * 8);
        if ((int)plVar2[3] != 0) {
          uVar30 = uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 |
                   uVar30 << 0x18;
        }
        iVar21 = strcmp((char *)param_3,(char *)(*plVar2 + (ulong)uVar30));
        if (iVar21 < 0) break;
        if (iVar21 == 0) goto LAB_006d92ea;
        uVar19 = uVar22 + 1;
        puVar24 = auStack_c8;
        if (uVar31 <= uVar19) goto LAB_006d928f;
      }
    }
  }
LAB_006d928f:
  puVar11 = (ulong *)0x0;
  puVar25 = puVar24;
  goto LAB_006d9292;
LAB_006d9467:
  puVar32 = puVar5;
  puVar12 = local_80;
  puVar11 = local_90;
  if (lVar23 != 0) goto LAB_006d9448;
  if (local_a8 == (void *)0x0) {
    pvVar13 = malloc(local_a0 + 0x18U);
  }
  else {
    pvVar13 = realloc(local_a8,local_a0 + 0x18U);
  }
  if (pvVar13 == (void *)0x0) {
LAB_006d98eb:
    puVar11 = (ulong *)0xffffffffffffffff;
    pthread_rwlock_unlock(local_88);
    goto LAB_006d9292;
  }
  plVar2[0xe] = (long)pvVar13;
  pcVar14 = strdup(pcVar14);
  if (pcVar14 == (char *)0x0) goto LAB_006d98eb;
  puVar32 = (undefined8 *)((long)pvVar13 + local_a0);
  *puVar32 = pcVar14;
  puVar32[1] = 0xffffffffffffffff;
  pcVar15 = (char *)_nl_find_msg(local_98,local_b8,&DAT_008343a2,0,&local_60);
  if (pcVar15 == (char *)0xffffffffffffffff) goto LAB_006d985a;
  puVar16 = auStack_c8;
  if ((pcVar15 != (char *)0x0) &&
     (pcVar15 = strstr(pcVar15,"charset="), puVar16 = auStack_c8, pcVar15 != (char *)0x0)) {
    local_80 = (ulong *)(pcVar15 + 8);
    sVar9 = strcspn((char *)local_80," \t\n");
    puVar17 = local_80;
    puVar16 = auStack_c8;
    while (puVar27 != auStack_c8 + -(sVar9 + 0x18 & 0xfffffffffffff000)) {
      puVar26 = puVar16 + -0x1000;
      *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + -8);
      puVar27 = puVar16 + -0x1000;
      puVar16 = puVar16 + -0x1000;
    }
    uVar19 = (ulong)((uint)(sVar9 + 0x18) & 0xff0);
    lVar23 = -uVar19;
    if (uVar19 != 0) {
      *(undefined8 *)(puVar26 + -8) = *(undefined8 *)(puVar26 + -8);
    }
    local_80 = (ulong *)((ulong)(puVar26 + lVar23 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar26 + lVar23 + -8) = 0x6d9598;
    puVar16 = (undefined1 *)mempcpy(local_80,puVar17,sVar9);
    puVar17 = local_80;
    local_80 = local_58;
    *puVar16 = 0;
    *(undefined8 *)(puVar26 + lVar23 + -8) = 0x6d95af;
    __gconv_create_spec(local_80,puVar17,pcVar14);
    local_48 = 1;
    local_90 = local_80;
    *(undefined8 *)(puVar26 + lVar23 + -8) = 0x6d95cd;
    uVar8 = __gconv_open(local_80,puVar32 + 1,1);
    local_80 = (ulong *)CONCAT44(local_80._4_4_,uVar8);
    *(undefined8 *)(puVar26 + lVar23 + -8) = 0x6d95dc;
    __gconv_destroy_spec(local_90);
    puVar16 = puVar26 + lVar23;
    if ((uint)local_80 != 0) {
      if ((uint)local_80 == -1) {
        puVar32[1] = 0xffffffffffffffff;
        puVar16 = puVar26 + lVar23;
        goto LAB_006d95e7;
      }
      *(undefined8 *)(puVar26 + lVar23 + -8) = 0x6d99e9;
      pthread_rwlock_unlock(local_88);
      *(undefined8 *)(puVar26 + lVar23 + -8) = 0x6d99f1;
      free(pcVar14);
      puVar24 = puVar26 + lVar23;
      goto LAB_006d928f;
    }
  }
LAB_006d95e7:
  puVar32[2] = 0;
  plVar2[0xf] = plVar2[0xf] + 1;
LAB_006d95f5:
  ppVar4 = local_88;
  *(undefined8 *)(puVar16 + -8) = 0x6d95fe;
  pthread_rwlock_unlock(ppVar4);
  puVar28 = puVar16;
  goto LAB_006d9669;
LAB_006d9448:
  lVar23 = lVar23 + -1;
  iVar21 = strcmp((char *)*puVar32,pcVar14);
  puVar12 = local_80;
  puVar11 = local_90;
  puVar5 = puVar32 + -3;
  if (iVar21 == 0) goto LAB_006d95f5;
  goto LAB_006d9467;
LAB_006d92e0:
  local_78 = (ulong)local_70 & 0xffffffff;
LAB_006d92ea:
  if (uVar22 < local_78) {
    puVar1 = (uint *)(plVar2[7] + uVar22 * 8);
    uVar30 = puVar1[1];
    uVar6 = *puVar1;
    if ((int)plVar2[3] == 0) {
      puVar11 = (ulong *)(*plVar2 + (ulong)uVar30);
      local_78 = (ulong)(uVar6 + 1);
    }
    else {
      puVar11 = (ulong *)(*plVar2 +
                         (ulong)(uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8
                                | uVar30 << 0x18));
      local_78 = (ulong)((uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                         uVar6 << 0x18) + 1);
    }
  }
  else {
    puVar12 = (ulong *)((uVar22 - local_78) * 0x10 + plVar2[10]);
    puVar11 = (ulong *)puVar12[1];
    local_78 = *puVar12;
  }
  puVar24 = auStack_c8;
  if (local_ac != 0) {
    if ((local_b8 == 0) ||
       (pcVar14 = *(char **)(local_b8 + 0x10), *(char **)(local_b8 + 0x10) == (char *)0x0)) {
      if (output_charset_cached_1 == 0) {
        pcVar15 = getenv("OUTPUT_CHARSET");
        pcVar14 = output_charset_cache_0;
        if ((pcVar15 != (char *)0x0) && (*pcVar15 != '\0')) {
          sVar9 = strlen(pcVar15);
          local_80 = (ulong *)(sVar9 + 1);
          pcVar14 = (char *)malloc((size_t)local_80);
          if (pcVar14 != (char *)0x0) {
            memcpy(pcVar14,pcVar15,(size_t)local_80);
          }
        }
        output_charset_cache_0 = pcVar14;
        output_charset_cached_1 = 1;
      }
      pcVar14 = output_charset_cache_0;
      if (output_charset_cache_0 == (char *)0x0) {
        pcVar14 = *(char **)(**(long **)(in_FS_OFFSET + -0xd8) + 0xb0);
      }
    }
    local_88 = (pthread_rwlock_t *)(plVar2 + 0x10);
    pthread_rwlock_rdlock(local_88);
    lVar23 = plVar2[0xf];
    local_80 = (ulong *)uVar22;
    do {
      puVar12 = local_80;
      ppVar4 = local_88;
      if (lVar23 == 0) {
        pthread_rwlock_unlock(local_88);
        pthread_rwlock_wrlock(ppVar4);
        lVar23 = plVar2[0xf];
        local_a8 = (void *)plVar2[0xe];
        local_a0 = lVar23 * 0x18;
        puVar5 = (undefined8 *)((long)local_a8 + local_a0 + -0x18);
        local_90 = puVar11;
        local_80 = puVar12;
        goto LAB_006d9467;
      }
      lVar23 = lVar23 + -1;
      puVar32 = (undefined8 *)(plVar2[0xe] + lVar23 * 0x18);
      iVar21 = strcmp((char *)*puVar32,pcVar14);
      puVar12 = local_80;
    } while (iVar21 != 0);
    pthread_rwlock_unlock(local_88);
    puVar28 = auStack_c8;
LAB_006d9669:
    puVar24 = puVar28;
    if (puVar32[1] != -1) {
      lVar23 = puVar32[2];
      if (lVar23 == 0) {
        LOCK();
        bVar33 = lock_4 == 0;
        if (bVar33) {
          lock_4 = 1;
        }
        UNLOCK();
        if (!bVar33) {
          *(undefined8 *)(puVar28 + -8) = 0x6d99d6;
          __lll_lock_wait_private(&lock_4);
        }
        if (puVar32[2] != 0) {
LAB_006d9885:
          uVar30 = lock_4;
          LOCK();
          lock_4 = 0;
          UNLOCK();
          if (1 < (int)uVar30) {
            *(undefined8 *)(puVar28 + -8) = 0x6d9a07;
            __lll_lock_wake_private(&lock_4);
          }
          lVar23 = puVar32[2];
          goto LAB_006d9683;
        }
        uVar30 = (uint)local_70 + (int)plVar2[8];
        *(undefined8 *)(puVar28 + -8) = 0x6d99ae;
        pvVar13 = calloc((ulong)uVar30,8);
        puVar32[2] = pvVar13;
        if (pvVar13 == (void *)0x0) {
          puVar32[2] = 0xffffffffffffffff;
          goto LAB_006d9885;
        }
      }
      else {
LAB_006d9683:
        if (lVar23 == -1) {
LAB_006d985a:
          puVar11 = (ulong *)0xffffffffffffffff;
          puVar25 = puVar28;
          goto LAB_006d9292;
        }
        puVar17 = *(ulong **)(lVar23 + (long)puVar12 * 8);
        if (puVar17 != (ulong *)0x0) {
LAB_006d9696:
          puVar11 = puVar17 + 1;
          local_78 = *puVar17;
          goto LAB_006d9314;
        }
        LOCK();
        bVar33 = lock_4 == 0;
        if (bVar33) {
          lock_4 = 1;
        }
        UNLOCK();
        if (!bVar33) {
          *(undefined8 *)(puVar28 + -8) = 0x6d9998;
          __lll_lock_wait_private(&lock_4);
        }
      }
      iVar21 = 0;
      local_60 = freemem_3 + 1;
      local_80 = puVar12;
      local_70 = puVar11;
      local_68 = puVar11;
LAB_006d9775:
      if (7 < freemem_size_2) {
        uVar3 = puVar32[1];
        lVar29 = local_78 + (long)local_68;
        lVar23 = (long)local_60 + (freemem_size_2 - 8);
        *(undefined8 *)(puVar28 + -8) = 0x6d97a0;
        uVar30 = __gconv(uVar3,&local_68,lVar29,&local_60,lVar23,local_58);
        uVar6 = uVar30 & 0xfffffffb;
        if (uVar6 == 0) {
          lVar23 = (long)local_80 * 8;
          *freemem_3 = ((long)local_60 - (long)freemem_3) + -8;
          lVar29 = puVar32[2];
          *(long **)(lVar29 + (long)local_80 * 8) = freemem_3;
          uVar19 = freemem_size_2 - ((long)local_60 - (long)freemem_3);
          freemem_size_2 = uVar19 & 0xfffffffffffffff8;
          freemem_3 = (long *)((long)local_60 + (ulong)((uint)uVar19 & 7));
          LOCK();
          UNLOCK();
          bVar33 = 1 < (int)lock_4;
          lock_4 = uVar6;
          if (bVar33) {
            *(undefined8 *)(puVar28 + -8) = 0x6d9a26;
            __lll_lock_wake_private(&lock_4);
            lVar29 = puVar32[2];
          }
          puVar17 = *(ulong **)(lVar29 + lVar23);
          goto LAB_006d9696;
        }
        if (uVar30 != 5) {
          LOCK();
          UNLOCK();
          puVar11 = (ulong *)0x0;
          goto joined_r0x006d990e;
        }
        local_68 = local_70;
      }
      puVar5 = transmem_list;
      if (iVar21 == 0) {
        freemem_size_2 = 0xff0;
        *(undefined8 *)(puVar28 + -8) = 0x6d97da;
        puVar18 = (undefined8 *)malloc(0xff0);
        if (puVar18 == (undefined8 *)0x0) goto LAB_006d981b;
        iVar21 = 1;
        *puVar18 = transmem_list;
        freemem_size_2 = 0xfe8;
LAB_006d9754:
        freemem_3 = puVar18 + 1;
        local_60 = puVar18 + 2;
        transmem_list = puVar18;
        goto LAB_006d9775;
      }
      iVar21 = iVar21 + 1;
      sVar9 = (size_t)(iVar21 * 0xff0);
      *(undefined8 *)(puVar28 + -8) = 0x6d9747;
      freemem_size_2 = sVar9;
      puVar18 = (undefined8 *)realloc(transmem_list,sVar9);
      if (puVar18 != (undefined8 *)0x0) {
        freemem_size_2 = sVar9 - 8;
        goto LAB_006d9754;
      }
      transmem_list = (undefined8 *)*puVar5;
      *(undefined8 *)(puVar28 + -8) = 0x6d981b;
      free(puVar5);
LAB_006d981b:
      freemem_3 = (long *)0x0;
      freemem_size_2 = 0;
      LOCK();
      UNLOCK();
      puVar11 = (ulong *)0xffffffffffffffff;
joined_r0x006d990e:
      bVar33 = 1 < (int)lock_4;
      lock_4 = 0;
      puVar25 = puVar28;
      if (bVar33) {
        lock_4 = 0;
        *(undefined8 *)(puVar28 + -8) = 0x6d9855;
        __lll_lock_wake_private(&lock_4);
      }
      goto LAB_006d9292;
    }
  }
LAB_006d9314:
  *local_c0 = local_78;
  puVar25 = puVar24;
LAB_006d9292:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar25 + -8) = 0x6d99fb;
    __stack_chk_fail_local();
  }
  return puVar11;
}

