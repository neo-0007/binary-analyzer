
void _flushlbf(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  int *piVar7;
  long in_FS_OFFSET;
  bool bVar8;
  code *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = flush_cleanup;
  __libc_cleanup_push_defer(&local_58);
  lVar4 = *(long *)(in_FS_OFFSET + 0x10);
  lVar5 = DAT_00939938;
  if (DAT_00939938 != lVar4) {
    LOCK();
    bVar8 = list_all_lock == 0;
    if (bVar8) {
      list_all_lock = 1;
    }
    UNLOCK();
    lVar5 = lVar4;
    if (!bVar8) {
      __lll_lock_wait_private(&list_all_lock);
    }
  }
  DAT_00939938 = lVar5;
  puVar6 = (uint *)_IO_list_all;
  iVar3 = DAT_00939934 + 1;
  if (_IO_list_all != (undefined *)0x0) {
    do {
      DAT_00939934 = iVar3;
      run_fp = puVar6;
      if ((*puVar6 & 0x8000) == 0) {
        lVar4 = *(long *)(in_FS_OFFSET + 0x10);
        piVar7 = *(int **)(puVar6 + 0x22);
        if (*(long *)(piVar7 + 2) != lVar4) {
          LOCK();
          iVar3 = *piVar7;
          if (iVar3 == 0) {
            *piVar7 = 1;
          }
          UNLOCK();
          if (iVar3 != 0) {
            __lll_lock_wait_private();
          }
          piVar7 = *(int **)(puVar6 + 0x22);
          *(long *)(piVar7 + 2) = lVar4;
        }
        uVar2 = *puVar6;
        piVar7[1] = piVar7[1] + 1;
        if ((uVar2 & 0x208) == 0x200) goto LAB_006fe382;
LAB_006fe31d:
        if ((*puVar6 & 0x8000) == 0) {
          piVar7 = *(int **)(puVar6 + 0x22);
          iVar3 = piVar7[1];
          piVar7[1] = iVar3 + -1;
          if (iVar3 + -1 == 0) {
            piVar7[2] = 0;
            piVar7[3] = 0;
            LOCK();
            iVar3 = *piVar7;
            *piVar7 = 0;
            UNLOCK();
            if (1 < iVar3) {
              __lll_lock_wake_private();
            }
          }
        }
      }
      else if ((*puVar6 & 0x208) == 0x200) {
LAB_006fe382:
        lVar4 = *(long *)(puVar6 + 0x36);
        if (0x827 < lVar4 - 0x932180U) {
          _IO_vtable_check();
        }
        (**(code **)(lVar4 + 0x18))(puVar6,0xffffffff);
        goto LAB_006fe31d;
      }
      run_fp = (uint *)0x0;
      puVar1 = puVar6 + 0x1a;
      puVar6 = *(uint **)puVar1;
      iVar3 = DAT_00939934;
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
  __libc_cleanup_pop_restore(&local_58);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

