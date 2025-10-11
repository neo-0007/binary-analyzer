
void malloc_stats(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  int iVar5;
  long in_FS_OFFSET;
  uint local_a4;
  uint local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a4 = (uint)DAT_00931130;
  if (__malloc_initialized == '\0') {
    ptmalloc_init_part_0();
  }
  uVar3 = 0;
  piVar4 = &main_arena;
  uVar1 = *(uint *)(stderr + 0x74);
  *(uint *)(stderr + 0x74) = uVar1 | 2;
  local_a0 = local_a4;
  do {
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    LOCK();
    iVar5 = *piVar4;
    if (iVar5 == 0) {
      *piVar4 = 1;
    }
    UNLOCK();
    if (iVar5 != 0) {
      __lll_lock_wait_private(piVar4);
    }
    int_mallinfo(piVar4,local_98);
    fprintf((FILE *)stderr,"Arena %d:\n",uVar3);
    auVar2 = local_98;
    fprintf((FILE *)stderr,"system bytes     = %10u\n",local_98._0_8_ & 0xffffffff);
    iVar5 = local_68._8_4_;
    fprintf((FILE *)stderr,"in use bytes     = %10u\n",local_68._8_8_ & 0xffffffff);
    local_a4 = local_a4 + iVar5;
    local_a0 = local_a0 + auVar2._0_4_;
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = 0;
    UNLOCK();
    if (iVar5 < 2) {
      piVar4 = *(int **)(piVar4 + 0x21c);
      if (piVar4 == &main_arena) goto LAB_00708530;
    }
    else {
      __lll_lock_wake_private(piVar4);
      piVar4 = *(int **)(piVar4 + 0x21c);
      if (piVar4 == &main_arena) {
LAB_00708530:
        fwrite("Total (incl. mmap):\n",1,0x14,(FILE *)stderr);
        fprintf((FILE *)stderr,"system bytes     = %10u\n",(ulong)local_a0);
        fprintf((FILE *)stderr,"in use bytes     = %10u\n",(ulong)local_a4);
        fprintf((FILE *)stderr,"max mmap regions = %10u\n",(ulong)DAT_00931124);
        fprintf((FILE *)stderr,"max mmap bytes   = %10lu\n",DAT_00931138);
        *(uint *)(stderr + 0x74) = uVar1;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail_local();
        }
        return;
      }
    }
    uVar3 = (ulong)((int)uVar3 + 1);
  } while( true );
}

