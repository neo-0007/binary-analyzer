
undefined8 * mallinfo2(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (__malloc_initialized == '\0') {
    ptmalloc_init_part_0();
  }
  local_88 = (undefined1  [16])0x0;
  piVar2 = &main_arena;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  do {
    while( true ) {
      LOCK();
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        *piVar2 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
        __lll_lock_wait_private(piVar2);
      }
      int_mallinfo(piVar2,local_88);
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = 0;
      UNLOCK();
      if (1 < iVar1) break;
      piVar2 = *(int **)(piVar2 + 0x21c);
      if (piVar2 == &main_arena) goto LAB_007082d8;
    }
    __lll_lock_wake_private(piVar2);
    piVar2 = *(int **)(piVar2 + 0x21c);
  } while (piVar2 != &main_arena);
LAB_007082d8:
  *param_1 = local_88._0_8_;
  param_1[1] = local_88._8_8_;
  param_1[2] = local_78._0_8_;
  param_1[3] = local_78._8_8_;
  param_1[4] = local_68._0_8_;
  param_1[5] = local_68._8_8_;
  param_1[6] = local_58._0_8_;
  param_1[7] = local_58._8_8_;
  param_1[8] = local_48._0_8_;
  param_1[9] = local_48._8_8_;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return param_1;
}

