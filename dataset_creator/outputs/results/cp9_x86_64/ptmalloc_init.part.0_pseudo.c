
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptmalloc_init_part_0(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long in_FS_OFFSET;
  timespec local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __malloc_initialized = 1;
  lVar1 = getrandom(&tcache_key,8,1);
  if (lVar1 != 8) {
    clock_gettime(1,&local_38);
    uVar4 = (uint)local_38.tv_sec ^ (uint)local_38.tv_nsec;
    uVar4 = uVar4 ^ (uVar4 >> 8 | uVar4 << 0x18);
    tcache_key = (ulong)uVar4;
    clock_gettime(1,&local_38);
    local_38.tv_sec._0_4_ = (uint)local_38.tv_sec ^ (uint)local_38.tv_nsec;
    tcache_key = CONCAT44(uVar4,(uint)local_38.tv_sec ^
                                ((uint)local_38.tv_sec >> 8 | (uint)local_38.tv_sec << 0x18));
  }
  *(undefined4 **)(in_FS_OFFSET + -0x20) = &main_arena;
  puVar2 = &DAT_009311e0;
  do {
    puVar3 = puVar2 + 2;
    *puVar3 = puVar2;
    puVar2[3] = puVar2;
    puVar2 = puVar3;
  } while (puVar3 != (undefined8 *)&DAT_009319d0);
  global_max_fast = 0x80;
  _DAT_00931188 = 0;
  DAT_009311e0 = &DAT_009311e0;
  __tunable_get_val(0xe,&local_38,_dl_tunable_set_top_pad);
  __tunable_get_val(3,&local_38,_dl_tunable_set_perturb_byte);
  __tunable_get_val(0x1b,&local_38,_dl_tunable_set_mmap_threshold);
  __tunable_get_val(2,&local_38,_dl_tunable_set_trim_threshold);
  __tunable_get_val(0x14,&local_38,_dl_tunable_set_mmaps_max);
  __tunable_get_val(0x1a,&local_38,_dl_tunable_set_arena_max);
  __tunable_get_val(0x1e,&local_38,_dl_tunable_set_arena_test);
  __tunable_get_val(0x21,&local_38,_dl_tunable_set_tcache_max);
  __tunable_get_val(0x1d,&local_38,_dl_tunable_set_tcache_count);
  __tunable_get_val(0x16,&local_38,_dl_tunable_set_tcache_unsorted_limit);
  __tunable_get_val(0xb,&local_38,_dl_tunable_set_mxfast);
  __tunable_get_val(9,&local_38,_dl_tunable_set_hugetlb);
  if (DAT_00931110 != 0) {
    __always_fail_morecore = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

