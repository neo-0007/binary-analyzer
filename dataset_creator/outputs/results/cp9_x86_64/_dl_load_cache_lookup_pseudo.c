
char * _dl_load_cache_lookup(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  size_t sVar7;
  long *plVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar12;
  uint uVar13;
  char *pcVar14;
  uint *puVar15;
  long *plVar16;
  int *piVar17;
  int iVar18;
  ulong local_68;
  ulong local_60;
  char *local_58;
  uint local_4c;
  ulong local_40 [2];
  ulong *puVar11;
  
  puVar11 = &local_68;
  puVar10 = &local_68;
  if (((byte)_dl_debug_mask & 1) != 0) {
    _dl_debug_printf(" search cache=%s\n","/etc/ld.so.cache");
  }
  if (cache == (long *)0x0) {
    plVar8 = (long *)_dl_sysdep_read_whole_file("/etc/ld.so.cache",&cachesize,1);
    if (plVar8 == (long *)0xffffffffffffffff) {
      cache = (long *)0xffffffffffffffff;
      return (char *)0x0;
    }
    if (cachesize < 0x31) {
      if (cachesize < 0x11) goto LAB_00782c43;
LAB_00782c30:
      if (((*plVar8 != 0x2e312d6f732e646c) || ((short)plVar8[1] != 0x2e37)) ||
         ((*(char *)((long)plVar8 + 10) != '0' ||
          ((cachesize - 0x10) / 0xc < (ulong)*(uint *)((long)plVar8 + 0xc))))) {
LAB_00782c43:
        munmap(plVar8,cachesize);
        cache = (long *)0xffffffffffffffff;
        return (char *)0x0;
      }
      uVar9 = (ulong)*(uint *)((long)plVar8 + 0xc) * 0xc + 0x17 & 0xfffffffffffffff8;
      plVar16 = (long *)((long)plVar8 + uVar9);
      if (((cachesize < uVar9 + 0x30) ||
          (plVar16[1] != 0x686361632e6f732e || *plVar16 != 0x646c2d6362696c67)) ||
         ((int)plVar16[2] != 0x312e3165)) {
        cache_new = (long *)0xffffffffffffffff;
        plVar16 = cache_new;
      }
      else if ((*(byte *)((long)plVar16 + 0x1c) != 0) &&
              ((*(byte *)((long)plVar16 + 0x1c) & 3) != 2)) {
        cache = (long *)0xffffffffffffffff;
        cache_new = (long *)0xffffffffffffffff;
        munmap(plVar8,cachesize);
        if (cache == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("cache != NULL","dl-cache.c",0x1e7,"_dl_load_cache_lookup");
        }
        goto LAB_007827a5;
      }
    }
    else {
      if (((plVar8[1] != 0x686361632e6f732e || *plVar8 != 0x646c2d6362696c67) ||
          ((int)plVar8[2] != 0x312e3165)) ||
         ((cachesize - 0x30) / 0x18 < (ulong)*(uint *)((long)plVar8 + 0x14))) goto LAB_00782c30;
      plVar16 = plVar8;
      if ((*(byte *)((long)plVar8 + 0x1c) != 0) && ((*(byte *)((long)plVar8 + 0x1c) & 3) != 2)) {
        munmap(plVar8,cachesize);
        cache_new = (long *)0xffffffffffffffff;
        cache = (long *)0xffffffffffffffff;
        return (char *)0x0;
      }
    }
  }
  else {
LAB_007827a5:
    plVar16 = cache_new;
    plVar8 = cache;
    if (cache == (long *)0xffffffffffffffff) {
      return (char *)0x0;
    }
  }
  cache = plVar8;
  cache_new = plVar16;
  plVar16 = cache;
  plVar8 = cache_new;
  local_4c = (uint)cachesize;
  if (cache_new != (long *)0xffffffffffffffff) {
    iVar18 = *(int *)((long)cache_new + 0x14);
    if (_dl_platform == (char *)0x0) {
      local_60 = 0xffffffffffffffff;
    }
    else {
      local_58 = _dl_platform;
      iVar4 = strcmp(_dl_platform,"haswell");
      local_60 = 0x4000000000000;
      if (iVar4 != 0) {
        iVar4 = strcmp(local_58,"xeon_phi");
        local_60 = 0x8000000000000;
        if (iVar4 != 0) {
          local_60 = 0xffffffffffffffff;
        }
      }
    }
    __tunable_get_val(0x13,local_40,0);
    local_68 = local_40[0];
    iVar18 = iVar18 + -1;
    if (iVar18 < 0) {
      return (char *)0x0;
    }
    iVar4 = 0;
    while( true ) {
      local_58 = (char *)CONCAT44(local_58._4_4_,iVar4);
      uVar13 = iVar4 + iVar18 >> 1;
      pcVar14 = (char *)(ulong)uVar13;
      lVar1 = (long)(int)uVar13 * 0x18;
      uVar13 = *(uint *)((long)plVar8 + lVar1 + 0x34);
      if (local_4c <= uVar13) {
        return (char *)0x0;
      }
      iVar4 = _dl_cache_libcmp(param_1,(ulong)uVar13 + (long)plVar8);
      if (iVar4 == 0) break;
      if (iVar4 < 0) {
        iVar4 = (int)pcVar14 + 1;
        if (iVar18 < iVar4) {
          return (char *)0x0;
        }
      }
      else {
        iVar18 = (int)pcVar14 + -1;
        iVar4 = (int)local_58;
        if (iVar18 < (int)local_58) {
          return (char *)0x0;
        }
      }
    }
    puVar15 = (uint *)((long)plVar8 + lVar1 + 0x1c);
    pcVar2 = pcVar14;
    do {
      uVar9 = (ulong)pcVar2 & 0xffffffff;
      iVar4 = (int)pcVar2;
      if (iVar4 == 0) break;
      uVar13 = *puVar15;
      local_58 = (char *)CONCAT44(local_58._4_4_,iVar4 + -1);
      if (local_4c <= uVar13) break;
      puVar15 = puVar15 + -6;
      iVar5 = _dl_cache_libcmp(param_1,(ulong)uVar13 + (long)plVar8);
      pcVar2 = local_58;
    } while (iVar5 == 0);
    local_58 = (char *)~(local_68 & _dl_hwcap | 0x800f000000000000);
    local_68 = CONCAT44(local_68._4_4_,_dl_osversion);
    plVar16 = plVar8 + (long)iVar4 * 3 + 6;
    if (_dl_osversion == 0) {
      do {
        if ((int)pcVar14 < (int)uVar9) {
          if (local_4c <= *(uint *)((long)plVar16 + 4)) {
            return (char *)0x0;
          }
          iVar4 = _dl_cache_libcmp(param_1,(ulong)*(uint *)((long)plVar16 + 4) + (long)plVar8);
          if (iVar4 != 0) {
            return (char *)0x0;
          }
        }
        if ((((int)*plVar16 == 0x303) &&
            (uVar6 = (ulong)*(uint *)(plVar16 + 1), *(uint *)(plVar16 + 1) < local_4c)) &&
           ((((ulong)local_58 & plVar16[2]) == 0 &&
            ((uVar12 = plVar16[2] & 0xf000000000000, uVar12 == 0 || (local_60 == uVar12))))))
        goto LAB_00782af0;
        uVar13 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar13;
        plVar16 = plVar16 + 3;
      } while ((int)uVar13 <= iVar18);
    }
    else {
      do {
        if ((int)pcVar14 < (int)uVar9) {
          if (local_4c <= *(uint *)((long)plVar16 + 4)) {
            return (char *)0x0;
          }
          iVar4 = _dl_cache_libcmp(param_1,(ulong)*(uint *)((long)plVar16 + 4) + (long)plVar8);
          if (iVar4 != 0) {
            return (char *)0x0;
          }
        }
        if ((((((int)*plVar16 == 0x303) &&
              (uVar6 = (ulong)*(uint *)(plVar16 + 1), *(uint *)(plVar16 + 1) < local_4c)) &&
             (((ulong)local_58 & plVar16[2]) == 0)) &&
            (*(uint *)((long)plVar16 + 0xc) <= (uint)local_68)) &&
           ((uVar12 = plVar16[2] & 0xf000000000000, uVar12 == local_60 || (uVar12 == 0))))
        goto LAB_00782af0;
        uVar13 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar13;
        plVar16 = plVar16 + 3;
      } while ((int)uVar13 <= iVar18);
    }
    return (char *)0x0;
  }
  uVar13 = *(uint *)((long)cache + 0xc);
  lVar1 = (ulong)uVar13 * 0xc + 0x10;
  local_4c = local_4c - (int)lVar1;
  __tunable_get_val(0x13,local_40,0);
  iVar18 = uVar13 - 1;
  if (iVar18 < 0) {
    return (char *)0x0;
  }
  iVar4 = 0;
  while( true ) {
    local_60 = CONCAT44(local_60._4_4_,iVar4);
    uVar13 = iVar4 + iVar18 >> 1;
    uVar9 = (ulong)uVar13;
    local_58 = (char *)((long)(int)uVar13 * 0xc);
    uVar13 = *(uint *)((long)plVar16 + (long)local_58 + 0x14U);
    if (local_4c <= uVar13) {
      return (char *)0x0;
    }
    iVar4 = _dl_cache_libcmp(param_1,(long)plVar16 + (ulong)uVar13 + lVar1);
    if (iVar4 == 0) break;
    if (iVar4 < 0) {
      iVar4 = (int)uVar9 + 1;
      if (iVar18 < iVar4) {
        return (char *)0x0;
      }
    }
    else {
      iVar18 = (int)uVar9 + -1;
      iVar4 = (int)local_60;
      if (iVar18 < (int)local_60) {
        return (char *)0x0;
      }
    }
  }
  puVar15 = (uint *)((long)plVar16 + (long)local_58 + 8U);
  pcVar14 = (char *)uVar9;
  do {
    uVar6 = (ulong)pcVar14 & 0xffffffff;
    iVar4 = (int)pcVar14;
    if (iVar4 == 0) break;
    uVar13 = *puVar15;
    local_58 = (char *)CONCAT44(local_58._4_4_,iVar4 + -1);
    if (local_4c <= uVar13) break;
    local_60 = CONCAT44(local_60._4_4_,iVar4);
    puVar15 = puVar15 + -3;
    iVar4 = _dl_cache_libcmp(param_1,(long)plVar16 + (ulong)uVar13 + lVar1);
    uVar6 = local_60 & 0xffffffff;
    pcVar14 = local_58;
  } while (iVar4 == 0);
  piVar17 = (int *)((long)plVar16 + (long)(int)uVar6 * 0xc + 0x10);
  while( true ) {
    iVar4 = (int)uVar6;
    if ((int)uVar9 < iVar4) {
      local_58 = (char *)CONCAT44(local_58._4_4_,iVar4);
      if (local_4c <= (uint)piVar17[1]) {
        return (char *)0x0;
      }
      iVar5 = _dl_cache_libcmp(param_1,(long)plVar16 + (ulong)(uint)piVar17[1] + lVar1);
      iVar4 = (int)local_58;
      if (iVar5 != 0) {
        return (char *)0x0;
      }
    }
    if ((*piVar17 == 0x303) && ((uint)piVar17[2] < local_4c)) break;
    uVar6 = (ulong)(iVar4 + 1U);
    piVar17 = piVar17 + 3;
    if (iVar18 < (int)(iVar4 + 1U)) {
      return (char *)0x0;
    }
  }
  pcVar14 = (char *)((long)plVar16 + (ulong)(uint)piVar17[2] + lVar1);
joined_r0x00782d04:
  if (((byte)_dl_debug_mask & 1) != 0) {
    _dl_debug_printf("  trying file=%s\n",pcVar14);
  }
  sVar7 = strlen(pcVar14);
  puVar3 = &local_68;
  while (puVar11 != (ulong *)((long)&local_68 - (sVar7 + 0x18 & 0xfffffffffffff000))) {
    puVar10 = (ulong *)((long)puVar3 + -0x1000);
    *(undefined8 *)((long)puVar3 + -8) = *(undefined8 *)((long)puVar3 + -8);
    puVar11 = (ulong *)((long)puVar3 + -0x1000);
    puVar3 = (ulong *)((long)puVar3 + -0x1000);
  }
  uVar9 = (ulong)((uint)(sVar7 + 0x18) & 0xff0);
  lVar1 = -uVar9;
  if (uVar9 != 0) {
    *(undefined8 *)((long)puVar10 + -8) = *(undefined8 *)((long)puVar10 + -8);
  }
  *(undefined8 *)((long)puVar10 + lVar1 + -8) = 0x782b63;
  pcVar14 = (char *)memcpy((void *)((ulong)((long)puVar10 + lVar1 + 0xf) & 0xfffffffffffffff0),
                           pcVar14,sVar7 + 1);
  *(undefined8 *)((long)puVar10 + lVar1 + -8) = 0x782b6b;
  pcVar14 = strdup(pcVar14);
  return pcVar14;
LAB_00782af0:
  pcVar14 = (char *)((long)plVar8 + uVar6);
  goto joined_r0x00782d04;
}

