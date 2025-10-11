
undefined4
open_path_isra_0(void *param_1,size_t param_2,uint param_3,long *param_4,undefined8 *param_5,
                undefined8 param_6,long param_7,undefined8 param_8)

{
  ulong *puVar1;
  size_t sVar2;
  long lVar3;
  bool bVar4;
  char **ppcVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  void *pvVar10;
  void *pvVar11;
  size_t __size;
  undefined1 *puVar12;
  ulong uVar13;
  ulong *puVar14;
  char **ppcVar15;
  undefined1 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  long in_FS_OFFSET;
  char *local_128;
  undefined8 local_120;
  undefined1 *local_118;
  long *local_110;
  undefined8 *local_108;
  char *local_100;
  long local_f8;
  uint local_f0;
  uint local_ec;
  ulong *local_e8;
  undefined8 local_e0;
  void *local_d8;
  size_t local_d0;
  stat local_c8;
  char **ppcVar16;
  
  ppcVar15 = &local_128;
  ppcVar16 = &local_128;
  local_e8 = (ulong *)*param_4;
  if (local_e8 == (ulong *)0x0) {
    return 0xffffffff;
  }
  uVar8 = max_dirnamelen + param_2 + 0x17;
  ppcVar5 = &local_128;
  while (ppcVar16 != (char **)((long)&local_128 - (uVar8 & 0xfffffffffffff000))) {
    ppcVar15 = (char **)((long)ppcVar5 + -0x1000);
    *(undefined8 *)((long)ppcVar5 + -8) = *(undefined8 *)((long)ppcVar5 + -8);
    ppcVar16 = (char **)((long)ppcVar5 + -0x1000);
    ppcVar5 = (char **)((long)ppcVar5 + -0x1000);
  }
  uVar8 = (ulong)((uint)uVar8 & 0xff0);
  lVar3 = -uVar8;
  puVar12 = (undefined1 *)((long)ppcVar15 + lVar3);
  if (uVar8 != 0) {
    *(undefined8 *)((long)ppcVar15 + -8) = *(undefined8 *)((long)ppcVar15 + -8);
  }
  local_ec = param_3 & 0x4000000;
  local_f0 = 0;
  pcVar9 = (char *)((ulong)((long)ppcVar15 + lVar3 + 0xf) & 0xfffffffffffffff0);
  local_100 = (char *)0x0;
  local_110 = param_4;
  local_108 = param_5;
  local_e0 = param_6;
  local_d8 = param_1;
  local_d0 = param_2;
LAB_007aa4d8:
  uVar8 = *local_e8;
  if (((_dl_debug_mask & 1) != 0) &&
     (local_f8 = *(long *)(uVar8 + 8), (char *)local_f8 != local_100)) {
    local_100 = *(char **)(uVar8 + 0x10);
    for (puVar17 = puVar12; puVar17 != puVar12 + -(max_dirnamelen + 0xfU & 0xfffffffffffff000);
        puVar17 = puVar17 + -0x1000) {
      *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
    }
    uVar13 = (ulong)((uint)(max_dirnamelen + 0xfU) & 0xff0);
    lVar3 = -uVar13;
    if (uVar13 != 0) {
      *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
    }
    local_120 = CONCAT44(local_120._4_4_,_dl_debug_mask) & 0xffffffff00000001;
    *(undefined8 *)(puVar17 + lVar3 + -8) = 0x7aa83d;
    local_118 = puVar12;
    _dl_debug_printf(" search path=");
    uVar13 = *local_e8;
    iVar6 = (int)local_120;
    puVar14 = local_e8;
    while ((uVar13 != 0 &&
           (local_128 = pcVar9, local_120 = uVar8, local_f8 == *(long *)(uVar13 + 8)))) {
      sVar2 = *(size_t *)(uVar13 + 0x20);
      pvVar10 = *(void **)(uVar13 + 0x18);
      *(undefined8 *)(puVar17 + lVar3 + -8) = 0x7aa890;
      puVar12 = (undefined1 *)mempcpy(puVar17 + lVar3,pvVar10,sVar2);
      if (*(int *)(*puVar14 + 0x28) != 1) {
        *puVar12 = 0;
        pcVar9 = "%s";
        if (iVar6 == 0) {
          pcVar9 = ":%s";
        }
        iVar6 = 0;
        *(undefined8 *)(puVar17 + lVar3 + -8) = 0x7aa8b3;
        _dl_debug_printf_c(pcVar9,(long)puVar17 + lVar3);
      }
      puVar1 = puVar14 + 1;
      puVar14 = puVar14 + 1;
      uVar8 = local_120;
      pcVar9 = local_128;
      uVar13 = *puVar1;
    }
    if (local_100 == (char *)0x0) {
      *(undefined8 *)(puVar17 + lVar3 + -8) = 0x7aa966;
      _dl_debug_printf_c("\t\t(%s)\n",local_f8);
    }
    else {
      if (*local_100 == '\0') {
        local_100 = "<main program>";
        if (*(char **)_dl_argv != (char *)0x0) {
          local_100 = *(char **)_dl_argv;
        }
      }
      *(undefined8 *)(puVar17 + lVar3 + -8) = 0x7aa92c;
      _dl_debug_printf_c("\t\t(%s from file %s)\n",local_f8,local_100);
    }
    local_100 = (char *)local_f8;
    puVar12 = local_118;
  }
  sVar2 = *(size_t *)(uVar8 + 0x20);
  pvVar10 = *(void **)(uVar8 + 0x18);
  uVar19 = 0;
  __size = 0;
  *(undefined8 *)(puVar12 + -8) = 0x7aa507;
  pvVar10 = mempcpy(pcVar9,pvVar10,sVar2);
  bVar4 = false;
  do {
    iVar6 = -1;
    while( true ) {
      if (bVar4) {
        if (iVar6 != -1) goto LAB_007aa5b4;
        if (((uVar19 != 0) && (*(int *)(in_FS_OFFSET + -0x58) != 2)) &&
           (*(int *)(in_FS_OFFSET + -0x58) != 0xd)) {
          return 0xffffffff;
        }
        local_e8 = local_e8 + 1;
        local_f0 = local_f0 | uVar19;
        if (*local_e8 == 0) {
          if (local_f0 != 0) {
            return 0xffffffff;
          }
          uVar18 = 0xffffffff;
          if ((int)local_110[1] != 0) {
            pvVar10 = (void *)*local_110;
            local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
            *(undefined8 *)(puVar12 + -8) = 0x7aa9b8;
            free(pvVar10);
            uVar18 = (undefined4)local_d0;
          }
          if (local_110 == &__rtld_env_path_list) {
            return 0xffffffff;
          }
          if (local_110 == &__rtld_search_dirs) {
            return 0xffffffff;
          }
          *local_110 = -1;
          return uVar18;
        }
        goto LAB_007aa4d8;
      }
      bVar4 = true;
      if (*(int *)(uVar8 + 0x28) == 1) break;
      *(undefined8 *)(puVar12 + -8) = 0x7aa54c;
      pvVar11 = mempcpy(pvVar10,local_d8,local_d0);
      __size = (long)pvVar11 - (long)pcVar9;
      if ((_dl_debug_mask & 1) != 0) {
        *(undefined8 *)(puVar12 + -8) = 0x7aa799;
        _dl_debug_printf("  trying file=%s\n",pcVar9);
      }
      *(undefined8 *)(puVar12 + -8) = 0x7aa572;
      iVar6 = open_verify_constprop_0(pcVar9,local_e0,param_8);
      if (*(int *)(uVar8 + 0x28) == 0) {
        if (iVar6 == -1) {
          if ((param_7 == 0) || (-1 < (char)(&_dl_ns)[*(long *)(param_7 + 0x30) * 0x14][0x31d])) {
            pcVar9[(__size - local_d0) + -1] = '\0';
            local_f8 = CONCAT44(local_f8._4_4_,0xffffffff);
            *(undefined8 *)(puVar12 + -8) = 0x7aa73d;
            iVar6 = stat64(pcVar9,(stat64 *)&local_c8);
            iVar7 = 1;
            if ((iVar6 == 0) &&
               (iVar7 = ((local_c8.st_mode & 0xf000) == 0x4000) + 1,
               (local_c8.st_mode & 0xf000) == 0x4000)) {
              uVar19 = 1;
            }
            *(int *)(uVar8 + 0x28) = iVar7;
            iVar6 = (int)local_f8;
          }
          else {
            uVar19 = 1;
          }
        }
        else {
          *(undefined4 *)(uVar8 + 0x28) = 2;
          uVar19 = 1;
joined_r0x007aa67e:
          if ((local_ec != 0) && (__libc_enable_secure != 0)) {
            local_f8 = CONCAT44(local_f8._4_4_,iVar6);
            *(undefined8 *)(puVar12 + -8) = 0x7aa6a8;
            iVar6 = fstat(iVar6,&local_c8);
            if ((iVar6 != 0) || (iVar6 = (int)local_f8, (local_c8.st_mode & 0x800) == 0)) {
              *(undefined8 *)(puVar12 + -8) = 0x7aa6c8;
              __close_nocancel((int)local_f8);
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
              iVar6 = -1;
            }
          }
        }
      }
      else {
        uVar19 = uVar19 | *(int *)(uVar8 + 0x28) != 1;
        if (iVar6 != -1) goto joined_r0x007aa67e;
      }
      bVar4 = true;
      if (iVar6 != -1) {
LAB_007aa5b4:
        local_d0 = CONCAT44(local_d0._4_4_,iVar6);
        *(undefined8 *)(puVar12 + -8) = 0x7aa5c3;
        pvVar10 = malloc(__size);
        *local_108 = pvVar10;
        if (pvVar10 == (void *)0x0) {
          *(undefined8 *)(puVar12 + -8) = 0x7aa9c9;
          __close_nocancel(local_d0 & 0xffffffff);
          return 0xffffffff;
        }
        *(undefined8 *)(puVar12 + -8) = 0x7aa5eb;
        memcpy(pvVar10,pcVar9,__size);
        return (undefined4)local_d0;
      }
    }
  } while( true );
}

