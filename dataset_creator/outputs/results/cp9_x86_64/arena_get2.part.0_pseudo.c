
/* WARNING: Instruction at (ram,0x007044f8) overlaps instruction at (ram,0x007044f7)
    */
/* WARNING: Removing unreachable block (ram,0x0070429b) */
/* WARNING: Removing unreachable block (ram,0x0070429a) */
/* WARNING: Removing unreachable block (ram,0x007042a8) */

int * arena_get2_part_0(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long extraout_RDX;
  int *piVar9;
  long in_FS_OFFSET;
  bool bVar10;
  
  lVar3 = narenas_limit_2;
  if (narenas_limit_2 == 0) {
    lVar3 = DAT_00931100;
    if (DAT_00931100 == 0) {
      if (DAT_009310f8 < narenas) {
        iVar2 = __get_nprocs_sched();
        if (iVar2 < 1) {
          narenas_limit_2 = 0x10;
          lVar3 = 0x10;
        }
        else {
          lVar3 = (long)(iVar2 << 3);
          narenas_limit_2 = lVar3;
        }
      }
    }
    else {
      narenas_limit_2 = DAT_00931100;
    }
  }
  piVar9 = DAT_009310e8;
  if (narenas <= lVar3 - 1U) {
    narenas = narenas + 1;
    if (*(int *)(in_FS_OFFSET + 0x18) != 0) {
      LOCK();
      UNLOCK();
    }
    if ((DAT_00931110 != 0) &&
       (puVar5 = (undefined8 *)
                 alloc_new_heap(param_1 + 0x8d8,DAT_009310e8,DAT_00931110,DAT_00931118),
       puVar5 != (undefined8 *)0x0)) goto LAB_00704359;
    puVar5 = (undefined8 *)alloc_new_heap(param_1 + 0x8d8,piVar9,_dl_pagesize,0x4000);
    if (puVar5 != (undefined8 *)0x0) goto LAB_00704359;
    lVar3 = DAT_00931110;
    piVar9 = DAT_009310e8;
    if (DAT_00931110 != 0) goto LAB_0070453a;
    goto LAB_007044c7;
  }
  piVar9 = next_to_use_5;
  if (next_to_use_5 == (int *)0x0) {
    next_to_use_5 = &main_arena;
    piVar9 = next_to_use_5;
  }
  do {
    LOCK();
    iVar2 = *piVar9;
    if (iVar2 == 0) {
      *piVar9 = 1;
    }
    UNLOCK();
    if (iVar2 == 0) goto LAB_0070412c;
    piVar9 = *(int **)(piVar9 + 0x21c);
  } while (piVar9 != next_to_use_5);
  if (param_2 == piVar9) {
    piVar9 = *(int **)(param_2 + 0x21c);
  }
  LOCK();
  iVar2 = *piVar9;
  if (iVar2 == 0) {
    *piVar9 = 1;
  }
  UNLOCK();
  if (iVar2 != 0) {
    __lll_lock_wait_private(piVar9);
  }
LAB_0070412c:
  lVar3 = *(long *)(in_FS_OFFSET + -0x20);
  LOCK();
  bVar10 = free_list_lock == 0;
  if (bVar10) {
    free_list_lock = 1;
  }
  UNLOCK();
  if (!bVar10) {
    __lll_lock_wait_private(&free_list_lock);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x880) == 0) {
      do {
        detach_arena_part_0();
        lVar3 = extraout_RDX;
LAB_0070453a:
        puVar5 = (undefined8 *)alloc_new_heap(0x8d8,piVar9,lVar3,DAT_00931118);
        if (puVar5 == (undefined8 *)0x0) {
LAB_007044c7:
          puVar5 = (undefined8 *)alloc_new_heap(0x8d8,piVar9,_dl_pagesize,0x4000);
          if (puVar5 == (undefined8 *)0x0) {
            if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
              narenas = narenas - 1;
            }
            LOCK();
            narenas = narenas - 1;
            UNLOCK();
            return (int *)0x0;
          }
        }
LAB_00704359:
        piVar9 = (int *)(puVar5 + 6);
        *puVar5 = piVar9;
        puVar8 = puVar5 + 0x12;
        do {
          puVar4 = puVar8 + 2;
          *puVar4 = puVar8;
          puVar8[3] = puVar8;
          puVar8 = puVar4;
        } while (puVar4 != puVar5 + 0x110);
        if (piVar9 == &main_arena) {
          global_max_fast = 0x80;
        }
        else {
          *(uint *)((long)puVar5 + 0x34) = *(uint *)((long)puVar5 + 0x34) | 2;
        }
        *(undefined4 *)(puVar5 + 7) = 0;
        puVar8 = puVar5 + 0x119;
        puVar5[0x116] = 1;
        lVar3 = puVar5[2];
        puVar5[0x118] = lVar3;
        puVar5[0x117] = lVar3;
        uVar6 = (int)puVar5 + 0x8d8U & 0xf;
        if (uVar6 != 0) {
          puVar8 = (undefined8 *)((long)puVar8 + (0x10 - (ulong)uVar6));
        }
        puVar5[0x12] = puVar8;
        puVar8[1] = (long)puVar5 + (lVar3 - (long)puVar8) | 1;
        lVar3 = *(long *)(in_FS_OFFSET + -0x20);
        *(int **)(in_FS_OFFSET + -0x20) = piVar9;
        *(undefined4 *)(puVar5 + 6) = 0;
        LOCK();
        bVar10 = list_lock == 0;
        if (bVar10) {
          list_lock = 1;
        }
        UNLOCK();
        if (!bVar10) {
          __lll_lock_wait_private(&list_lock);
        }
        puVar5[0x114] = PTR_main_arena_009319f0;
        iVar2 = list_lock;
        LOCK();
        list_lock = 0;
        UNLOCK();
        PTR_main_arena_009319f0 = (undefined *)piVar9;
        if (1 < iVar2) {
          __lll_lock_wake_private(&list_lock);
        }
        LOCK();
        bVar10 = free_list_lock == 0;
        if (bVar10) {
          free_list_lock = 1;
        }
        UNLOCK();
        if (!bVar10) {
          __lll_lock_wait_private(&free_list_lock);
        }
        if (lVar3 == 0) goto LAB_00704473;
      } while (*(long *)(lVar3 + 0x880) == 0);
      *(long *)(lVar3 + 0x880) = *(long *)(lVar3 + 0x880) + -1;
LAB_00704473:
      iVar2 = free_list_lock;
      LOCK();
      free_list_lock = 0;
      UNLOCK();
      if (1 < iVar2) {
        __lll_lock_wake_private(&free_list_lock);
      }
      LOCK();
      iVar2 = *piVar9;
      if (iVar2 == 0) {
        *piVar9 = 1;
      }
      UNLOCK();
      if (iVar2 == 0) {
        return piVar9;
      }
      __lll_lock_wait_private(piVar9);
      return piVar9;
    }
    *(long *)(lVar3 + 0x880) = *(long *)(lVar3 + 0x880) + -1;
  }
  piVar7 = (int *)&free_list;
  piVar1 = free_list;
  do {
    if (piVar1 == (int *)0x0) {
LAB_007041b4:
      *(long *)(piVar9 + 0x220) = *(long *)(piVar9 + 0x220) + 1;
      iVar2 = free_list_lock;
      LOCK();
      free_list_lock = 0;
      UNLOCK();
      if (1 < iVar2) {
        __lll_lock_wake_private(&free_list_lock);
      }
      *(int **)(in_FS_OFFSET + -0x20) = piVar9;
      next_to_use_5 = (int *)*(undefined8 *)(piVar9 + 0x21c);
      return piVar9;
    }
    if (*(long *)(piVar1 + 0x220) != 0) {
                    /* WARNING: Subroutine does not return */
      __malloc_assert("p->attached_threads == 0","arena.c",0x34f,"remove_from_free_list");
    }
    if (piVar9 == piVar1) {
      *(int **)piVar7 = *(int **)(piVar1 + 0x21e);
      goto LAB_007041b4;
    }
    piVar7 = piVar1 + 0x21e;
    piVar1 = *(int **)(piVar1 + 0x21e);
  } while( true );
}

