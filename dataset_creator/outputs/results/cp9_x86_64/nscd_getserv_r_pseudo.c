
int nscd_getserv_r(void *param_1,size_t param_2,char *param_3,undefined4 param_4,long *param_5,
                  long param_6,ulong param_7,undefined8 *param_8)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  size_t sVar7;
  undefined1 *puVar8;
  long lVar9;
  void *pvVar10;
  size_t sVar11;
  void *pvVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 **ppuVar16;
  undefined1 **ppuVar18;
  undefined1 **ppuVar19;
  long lVar20;
  void *__dest;
  void *__n;
  void *pvVar21;
  int iVar22;
  long lVar23;
  void *__ptr;
  long in_FS_OFFSET;
  undefined1 *local_118;
  ulong local_110;
  void *local_108;
  void *local_100;
  void *local_f8;
  int local_f0;
  int local_ec;
  ulong local_e8;
  long *local_e0;
  void *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  void *local_b8;
  undefined8 *local_b0;
  ulong local_a8;
  undefined4 local_a0;
  int local_9c;
  uint local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  void *local_68;
  void *local_60;
  void *local_58;
  size_t local_50;
  long local_40;
  undefined1 **ppuVar17;
  
  sVar7 = 0;
  ppuVar17 = &local_118;
  ppuVar16 = &local_118;
  ppuVar19 = &local_118;
  ppuVar18 = &local_118;
  local_b0 = param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = param_5;
  local_d0 = param_6;
  local_a0 = param_4;
  plVar6 = (long *)__nscd_get_map_ref(0x12,"services",__serv_map_handle,&local_8c);
  if (param_3 != (char *)0x0) {
    sVar7 = strlen(param_3);
  }
  local_a8 = sVar7 + 2 + param_2;
  iVar4 = __libc_alloca_cutoff(local_a8);
  if ((local_a8 < 0x1001) || (iVar4 != 0)) {
    ppuVar18 = &local_118;
    while (ppuVar17 != (undefined1 **)((long)&local_118 - (local_a8 + 0x17 & 0xfffffffffffff000))) {
      ppuVar16 = (undefined1 **)((long)ppuVar18 + -0x1000);
      *(undefined8 *)((long)ppuVar18 + -8) = *(undefined8 *)((long)ppuVar18 + -8);
      ppuVar17 = (undefined1 **)((long)ppuVar18 + -0x1000);
      ppuVar18 = (undefined1 **)((long)ppuVar18 + -0x1000);
    }
    uVar15 = (ulong)((uint)(local_a8 + 0x17) & 0xff0);
    lVar9 = -uVar15;
    ppuVar19 = (undefined1 **)((long)ppuVar16 + lVar9);
    if (uVar15 != 0) {
      *(undefined8 *)((long)ppuVar16 + -8) = *(undefined8 *)((long)ppuVar16 + -8);
    }
    local_b8 = (void *)((ulong)((long)ppuVar16 + lVar9 + 0xf) & 0xfffffffffffffff0);
    local_118 = (undefined1 *)((long)&local_118 - ((long)ppuVar16 + lVar9));
    local_f0 = 1;
  }
  else {
    local_b8 = malloc(local_a8);
    if (local_b8 == (void *)0x0) {
      iVar4 = -1;
LAB_00778136:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar4;
      }
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)ppuVar18 + -8) = 0x7787e7;
      __stack_chk_fail_local();
    }
    local_f0 = 0;
    local_118 = (undefined1 *)0x0;
  }
  if (param_3 == (char *)0x0) {
    param_3 = "";
  }
  *(undefined8 *)((long)ppuVar19 + -8) = 0x777fb9;
  puVar8 = (undefined1 *)mempcpy(local_b8,param_1,param_2);
  *puVar8 = 0x2f;
  *(undefined8 *)((long)ppuVar19 + -8) = 0x777fcb;
  memcpy(puVar8 + 1,param_3,sVar7 + 1);
  local_9c = 0;
  local_e8 = (ulong)(-(int)local_d0 & 7);
  local_110 = local_d0 + param_7;
  local_c8 = local_d0 + local_e8;
LAB_00778007:
  if (plVar6 == (long *)0xffffffffffffffff) goto LAB_007781c7;
  *(undefined8 *)((long)ppuVar19 + -8) = 0x778033;
  lVar9 = __nscd_cache_search(local_a0,local_b8,local_a8,plVar6,0x18);
  if (lVar9 == 0) goto LAB_007781c7;
  local_88 = *(undefined8 *)(lVar9 + 0x18);
  uVar13 = *(undefined8 *)(lVar9 + 0x20);
  pvVar10 = (void *)(lVar9 + 0x30);
  local_78 = *(undefined8 *)(lVar9 + 0x28);
  lVar20 = *plVar6;
  uStack_80._0_4_ = (int)uVar13;
  uStack_80._4_4_ = (int)((ulong)uVar13 >> 0x20);
  __ptr = (void *)((long)(int)uStack_80 + (long)uStack_80._4_4_ + (long)pvVar10);
  uStack_80 = uVar13;
  if (*(uint *)(lVar20 + 8) != local_8c) {
    iVar4 = -2;
    iVar22 = 1;
    goto LAB_00778108;
  }
  local_d8 = (void *)(lVar9 + 0x18 + (long)*(int *)(lVar9 + 4));
  pvVar21 = (void *)((long)__ptr + (long)(int)local_78 * 4);
  if (local_d8 < pvVar21) {
    iVar4 = -1;
    iVar22 = 1;
    goto LAB_00778108;
  }
  iVar22 = 1;
  iVar5 = -1;
LAB_007780a5:
  *local_b0 = 0;
  if (local_88._4_4_ == -1) {
    __nss_not_use_nscd_services = 1;
    iVar4 = -1;
    goto LAB_007780dc;
  }
  if (local_88._4_4_ != 1) {
    iVar4 = 0;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
    goto LAB_007780dc;
  }
  lVar9 = (long)uStack_80._4_4_;
  lVar23 = (long)(int)local_78;
  __n = (void *)((int)uStack_80 + lVar9);
  lVar20 = (long)((int)local_78 + 1) * 8;
  pvVar12 = (void *)(ulong)(-((int)local_d0 + (int)(local_e8 + (long)__n)) & 7);
  if (param_7 < local_e8 + (long)__n + lVar20 + (long)pvVar12) {
LAB_00778498:
    iVar4 = 0x22;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
  }
  else {
    __dest = (void *)(lVar20 + local_c8);
    local_c0 = (long)(int)uStack_80 + (long)__dest;
    *local_e0 = (long)__dest;
    local_e0[1] = local_c8;
    local_e0[3] = local_c0;
    *(undefined4 *)(local_e0 + 2) = local_78._4_4_;
    if (pvVar10 == (void *)0x0) {
      local_68 = __dest;
      local_60 = __n;
      if ((int)local_78 < 1) {
        uVar13 = 1;
        local_ec = iVar5;
      }
      else {
        if (iVar22 != 0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)ppuVar19 + -8) = 0x7787d7;
          __assert_fail("alloca_aliases_len == 0","nscd_getserv_r.c",0xf8,"nscd_getserv_r");
        }
        sVar7 = lVar23 * 4;
        puVar8 = local_118 + sVar7;
        *(undefined8 *)((long)ppuVar19 + -8) = 0x7782ef;
        local_108 = pvVar12;
        local_100 = pvVar21;
        local_f8 = __n;
        local_ec = iVar5;
        iVar4 = __libc_alloca_cutoff(puVar8);
        if ((puVar8 < (undefined1 *)0x1001) || (iVar4 != 0)) {
          for (puVar8 = (undefined1 *)ppuVar19;
              puVar8 != (undefined1 *)((long)ppuVar19 + -(sVar7 + 0x17 & 0xfffffffffffff000));
              puVar8 = puVar8 + -0x1000) {
            *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
          }
          uVar15 = (ulong)((uint)(sVar7 + 0x17) & 0xff0);
          lVar20 = -uVar15;
          if (uVar15 != 0) {
            *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
          }
          __ptr = (void *)((ulong)(puVar8 + lVar20 + 0xf) & 0xfffffffffffffff0);
          local_118 = (undefined1 *)((long)ppuVar19 + ((long)local_118 - ((long)puVar8 + lVar20)));
          iVar22 = 1;
          ppuVar19 = (undefined1 **)(puVar8 + lVar20);
        }
        else {
          iVar22 = 0;
          *(undefined8 *)((long)ppuVar19 + -8) = 0x77878f;
          __ptr = malloc(sVar7);
          if (__ptr == (void *)0x0) {
            iVar4 = 0xc;
            iVar5 = local_ec;
            goto LAB_007780dc;
          }
        }
        __n = (void *)((long)local_f8 + sVar7);
        uVar13 = 2;
        pvVar12 = local_108;
        pvVar21 = local_100;
        local_58 = __ptr;
        local_50 = sVar7;
      }
      iVar4 = -1;
      *(undefined8 *)((long)ppuVar19 + -8) = 0x7783b3;
      local_108 = pvVar12;
      local_100 = pvVar21;
      local_f8 = __n;
      pvVar10 = (void *)__readvall(local_ec,&local_68,uVar13);
      iVar5 = local_ec;
      if (pvVar10 != local_f8) goto LAB_007780dc;
      lVar23 = (long)(int)local_78;
      pvVar10 = local_108;
      pvVar21 = local_100;
    }
    else {
      local_108 = (void *)CONCAT44(local_108._4_4_,iVar22);
      *(undefined8 *)((long)ppuVar19 + -8) = 0x7784f4;
      local_100 = pvVar12;
      local_f8 = pvVar21;
      local_ec = iVar5;
      memcpy(__dest,pvVar10,(size_t)__n);
      pvVar10 = local_100;
      pvVar21 = local_f8;
      iVar22 = (int)local_108;
    }
    uVar15 = (long)pvVar10 + local_c0 + lVar9;
    puVar3 = (undefined8 *)local_e0[1];
    iVar5 = local_ec;
    if (lVar23 < 1) {
      sVar7 = 0;
      *puVar3 = 0;
      if (local_d8 < pvVar21) goto LAB_0077871e;
LAB_0077856b:
      if (local_110 < uVar15) {
        if ((pvVar21 != (void *)0x0) && (iVar4 = -2, *(uint *)(*plVar6 + 8) != local_8c))
        goto LAB_007780dc;
        goto LAB_00778498;
      }
      if (pvVar21 == (void *)0x0) {
        if (sVar7 != 0) {
          uVar13 = *puVar3;
          local_d8 = (void *)CONCAT44(local_d8._4_4_,iVar22);
          local_c0 = CONCAT44(local_c0._4_4_,local_ec);
          iVar4 = -1;
          *(undefined8 *)((long)ppuVar19 + -8) = 0x7786e5;
          sVar11 = __readall(local_ec,uVar13,sVar7);
          iVar5 = (int)local_c0;
          iVar22 = (int)local_d8;
          if (sVar11 != sVar7) goto LAB_007780dc;
        }
        iVar4 = 0;
        *local_b0 = local_e0;
        goto LAB_007780dc;
      }
      pvVar10 = (void *)*puVar3;
      local_d8 = (void *)CONCAT44(local_d8._4_4_,iVar22);
      local_c0 = CONCAT44(local_c0._4_4_,local_ec);
      *(undefined8 *)((long)ppuVar19 + -8) = 0x77859d;
      memcpy(pvVar10,pvVar21,sVar7);
      iVar5 = (int)local_c0;
      iVar22 = (int)local_d8;
      if ((*(char *)(*local_e0 + -1 + (long)(int)uStack_80) == '\0') &&
         (*(char *)(local_e0[3] + -1 + (long)uStack_80._4_4_) == '\0')) {
        if (0 < (long)(int)local_78) {
          lVar9 = 0;
          do {
            if (*(char *)(*(long *)(local_e0[1] + lVar9 * 8) +
                         (ulong)(*(int *)((long)__ptr + lVar9 * 4) - 1)) != '\0') goto LAB_007785d3;
            lVar9 = lVar9 + 1;
          } while (lVar9 != (int)local_78);
        }
        iVar4 = 0;
        *local_b0 = local_e0;
        goto LAB_007780dc;
      }
    }
    else {
      lVar9 = 0;
      sVar7 = 0;
      do {
        uVar14 = (ulong)*(uint *)((long)__ptr + lVar9 * 4);
        puVar3[lVar9] = uVar15;
        lVar9 = lVar9 + 1;
        uVar15 = uVar15 + uVar14;
        sVar7 = sVar7 + uVar14;
      } while (lVar9 != lVar23);
      puVar3[lVar9] = 0;
      if ((void *)((long)pvVar21 + sVar7) <= local_d8) goto LAB_0077856b;
LAB_0077871e:
      iVar4 = -1;
      if (pvVar21 == (void *)0x0) goto LAB_007780dc;
    }
LAB_007785d3:
    iVar4 = (*(uint *)(*plVar6 + 8) == local_8c) - 2;
  }
LAB_007780dc:
  if (iVar5 != -1) {
    local_c0 = CONCAT44(local_c0._4_4_,iVar22);
    *(undefined8 *)((long)ppuVar19 + -8) = 0x7780f1;
    __close_nocancel(iVar5);
    iVar22 = (int)local_c0;
  }
  do {
    ppuVar18 = ppuVar19;
    if (plVar6 == (long *)0xffffffffffffffff) goto joined_r0x00778449;
    lVar20 = *plVar6;
LAB_00778108:
    uVar2 = *(uint *)(lVar20 + 8);
    ppuVar18 = ppuVar19;
    if (uVar2 == local_8c) {
LAB_0077810f:
      LOCK();
      plVar1 = plVar6 + 3;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        *(undefined8 *)((long)ppuVar19 + -8) = 0x77843f;
        local_9c = iVar22;
        __nscd_unmap(plVar6);
        iVar22 = local_9c;
      }
joined_r0x00778449:
      if (iVar22 == 0) {
        *(undefined8 *)((long)ppuVar18 + -8) = 0x778457;
        free(__ptr);
      }
      if (local_f0 == 0) {
        *(undefined8 *)((long)ppuVar18 + -8) = 0x778471;
        free(local_b8);
      }
      goto LAB_00778136;
    }
    local_8c = uVar2;
    if (((uVar2 & 1) == 0) && (local_9c = local_9c + 1, local_9c != 5)) {
      if (iVar4 == -1) goto LAB_0077810f;
      if (iVar22 == 0) {
        *(undefined8 *)((long)ppuVar19 + -8) = 0x778194;
        free(__ptr);
      }
      goto LAB_00778007;
    }
    LOCK();
    plVar1 = plVar6 + 3;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      local_c0 = CONCAT44(local_c0._4_4_,iVar22);
      *(undefined8 *)((long)ppuVar19 + -8) = 0x778417;
      __nscd_unmap(plVar6);
      iVar22 = (int)local_c0;
      if (iVar4 != -1) goto LAB_007781b7;
      goto joined_r0x00778449;
    }
    if (iVar4 == -1) goto joined_r0x00778449;
LAB_007781b7:
    plVar6 = (long *)0xffffffffffffffff;
    if (iVar22 == 0) {
      *(undefined8 *)((long)ppuVar19 + -8) = 0x7783e8;
      free(__ptr);
    }
LAB_007781c7:
    *(undefined8 *)((long)ppuVar19 + -8) = 0x7781ea;
    iVar5 = __nscd_open_socket(local_b8,local_a8,local_a0,&local_88,0x18);
    if (iVar5 != -1) break;
    __nss_not_use_nscd_services = 1;
    iVar4 = -1;
    __ptr = (void *)0x0;
    iVar22 = 0;
  } while( true );
  pvVar21 = (void *)0x0;
  __ptr = (void *)0x0;
  iVar22 = 0;
  pvVar10 = (void *)0x0;
  local_d8 = (void *)0xffffffffffffffff;
  goto LAB_007780a5;
}

