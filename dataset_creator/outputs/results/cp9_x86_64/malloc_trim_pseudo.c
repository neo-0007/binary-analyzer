
uint malloc_trim(undefined8 param_1)

{
  ulong uVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int *__addr;
  int *piVar8;
  int iVar9;
  int *local_50;
  uint local_48;
  uint local_44;
  
  if (__malloc_initialized == '\0') {
    ptmalloc_init_part_0();
  }
  local_44 = 0;
  local_50 = &main_arena;
  do {
    LOCK();
    iVar9 = *local_50;
    if (iVar9 == 0) {
      *local_50 = 1;
    }
    UNLOCK();
    if (iVar9 != 0) {
      __lll_lock_wait_private(local_50);
    }
    malloc_consolidate(local_50);
    if (_dl_pagesize < 0x400) {
      local_48 = (uint)(_dl_pagesize >> 4) & 0xfffffff;
    }
    else if (_dl_pagesize < 0xc40) {
      local_48 = (int)(_dl_pagesize >> 6) + 0x30;
    }
    else if (_dl_pagesize < 0x2a00) {
      local_48 = (int)(_dl_pagesize >> 9) + 0x5b;
    }
    else if (_dl_pagesize < 0xb000) {
      local_48 = (int)(_dl_pagesize >> 0xc) + 0x6e;
    }
    else if (_dl_pagesize < 0x28000) {
      local_48 = (int)(_dl_pagesize >> 0xf) + 0x77;
    }
    else {
      uVar6 = _dl_pagesize >> 0x12;
      if (2 < uVar6) {
        uVar6 = 2;
      }
      local_48 = (int)uVar6 + 0x7c;
    }
    uVar6 = _dl_pagesize - 1;
    uVar1 = _dl_pagesize + 0x2f;
    uVar5 = -_dl_pagesize;
    uVar7 = 0;
    iVar9 = 1;
    piVar8 = local_50 + 0x18;
    do {
      if ((iVar9 == 1) || ((int)local_48 <= iVar9)) {
        for (piVar2 = *(int **)(piVar8 + 6); piVar2 != piVar8; piVar2 = *(int **)(piVar2 + 6)) {
          uVar4 = *(ulong *)(piVar2 + 2) & 0xfffffffffffffff8;
          if (uVar1 < uVar4) {
            __addr = (int *)((long)piVar2 + uVar1 & uVar5);
            if (__addr < piVar2 + 0xc) {
                    /* WARNING: Subroutine does not return */
              __malloc_assert("(char *) chunk2mem (p) + 2 * CHUNK_HDR_SZ <= paligned_mem","malloc.c"
                              ,0x13c8,"mtrim");
            }
            if ((int *)((long)piVar2 + uVar4) <= __addr) {
                    /* WARNING: Subroutine does not return */
              __malloc_assert("(char *) p + size > paligned_mem","malloc.c",0x13ca,"mtrim");
            }
            uVar4 = uVar4 - ((long)__addr - (long)piVar2);
            if (uVar6 < uVar4) {
              madvise(__addr,uVar4 & uVar5,4);
              uVar7 = 1;
            }
          }
        }
      }
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 4;
    } while (iVar9 != 0x80);
    if (local_50 == &main_arena) {
      uVar3 = systrim_constprop_0(param_1);
      uVar7 = uVar7 | uVar3;
    }
    local_44 = local_44 | uVar7;
    LOCK();
    iVar9 = *local_50;
    *local_50 = 0;
    UNLOCK();
    if (1 < iVar9) {
      __lll_lock_wake_private(local_50);
    }
    local_50 = *(int **)(local_50 + 0x21c);
    if (local_50 == &main_arena) {
      return local_44;
    }
  } while( true );
}

