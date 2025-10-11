
undefined4 _IO_flush_all_lockp(int param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  code *local_68;
  undefined8 local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = flush_cleanup;
  __libc_cleanup_push_defer(&local_68);
  lVar2 = *(long *)(in_FS_OFFSET + 0x10);
  lVar3 = DAT_00939938;
  if (DAT_00939938 != lVar2) {
    LOCK();
    bVar8 = list_all_lock == 0;
    if (bVar8) {
      list_all_lock = 1;
    }
    UNLOCK();
    lVar3 = lVar2;
    if (!bVar8) {
      __lll_lock_wait_private(&list_all_lock);
    }
  }
  DAT_00939938 = lVar3;
  uVar7 = 0;
  puVar5 = (uint *)_IO_list_all;
  iVar4 = DAT_00939934 + 1;
  if (_IO_list_all != (undefined *)0x0) {
    do {
      DAT_00939934 = iVar4;
      run_fp = puVar5;
      if ((param_1 != 0) && ((*puVar5 & 0x8000) == 0)) {
        lVar2 = *(long *)(in_FS_OFFSET + 0x10);
        piVar6 = *(int **)(puVar5 + 0x22);
        if (*(long *)(piVar6 + 2) != lVar2) {
          LOCK();
          iVar4 = *piVar6;
          if (iVar4 == 0) {
            *piVar6 = 1;
          }
          UNLOCK();
          if (iVar4 != 0) {
            __lll_lock_wait_private();
          }
          piVar6 = *(int **)(puVar5 + 0x22);
          *(long *)(piVar6 + 2) = lVar2;
        }
        piVar6[1] = piVar6[1] + 1;
      }
      if ((int)puVar5[0x30] < 1) {
        if (*(ulong *)(puVar5 + 8) < *(ulong *)(puVar5 + 10)) {
LAB_006fddd1:
          lVar2 = *(long *)(puVar5 + 0x36);
          if (0x827 < lVar2 - 0x932180U) {
            _IO_vtable_check();
          }
          iVar4 = (**(code **)(lVar2 + 0x18))(puVar5,0xffffffff);
          if (iVar4 == -1) {
            uVar7 = 0xffffffff;
          }
        }
      }
      else if (*(ulong *)(*(long *)(puVar5 + 0x28) + 0x18) <
               *(ulong *)(*(long *)(puVar5 + 0x28) + 0x20)) goto LAB_006fddd1;
      if ((param_1 != 0) && ((*puVar5 & 0x8000) == 0)) {
        piVar6 = *(int **)(puVar5 + 0x22);
        iVar4 = piVar6[1];
        piVar6[1] = iVar4 + -1;
        if (iVar4 + -1 == 0) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          LOCK();
          iVar4 = *piVar6;
          *piVar6 = 0;
          UNLOCK();
          if (1 < iVar4) {
            __lll_lock_wake_private();
          }
        }
      }
      run_fp = (uint *)0x0;
      puVar1 = puVar5 + 0x1a;
      puVar5 = *(uint **)puVar1;
      iVar4 = DAT_00939934;
    } while (*(uint **)puVar1 != (uint *)0x0);
    DAT_00939934 = DAT_00939934 + -1;
  }
  if (DAT_00939934 == 0) {
    DAT_00939938 = 0;
    LOCK();
    UNLOCK();
    bVar8 = 1 < list_all_lock;
    list_all_lock = DAT_00939934;
    if (bVar8) {
      __lll_lock_wake_private(&list_all_lock);
    }
  }
  __libc_cleanup_pop_restore(&local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar7;
}

