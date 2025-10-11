
void _IO_link_in(uint *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  int *piVar6;
  long in_FS_OFFSET;
  bool bVar7;
  code *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_1 & 0x80) != 0) goto LAB_006fc7fc;
  *param_1 = *param_1 | 0x80;
  local_50 = 0;
  local_58 = flush_cleanup;
  __libc_cleanup_push_defer(&local_58);
  lVar3 = *(long *)(in_FS_OFFSET + 0x10);
  lVar5 = DAT_00939938;
  if (DAT_00939938 != lVar3) {
    LOCK();
    bVar7 = list_all_lock == 0;
    if (bVar7) {
      list_all_lock = 1;
    }
    UNLOCK();
    lVar5 = lVar3;
    if (!bVar7) {
      __lll_lock_wait_private(&list_all_lock);
    }
  }
  DAT_00939938 = lVar5;
  DAT_00939934 = DAT_00939934 + 1;
  if ((*param_1 & 0x8000) == 0) {
    lVar3 = *(long *)(in_FS_OFFSET + 0x10);
    piVar6 = *(int **)(param_1 + 0x22);
    run_fp = param_1;
    if (*(long *)(piVar6 + 2) == lVar3) {
      piVar6[1] = piVar6[1] + 1;
      puVar4 = param_1;
      *(undefined **)(param_1 + 0x1a) = _IO_list_all;
      _IO_list_all = (undefined *)puVar4;
    }
    else {
      LOCK();
      iVar1 = *piVar6;
      if (iVar1 == 0) {
        *piVar6 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
        __lll_lock_wait_private();
      }
      piVar6 = *(int **)(param_1 + 0x22);
      uVar2 = *param_1;
      piVar6[1] = piVar6[1] + 1;
      *(long *)(piVar6 + 2) = lVar3;
      puVar4 = param_1;
      *(undefined **)(param_1 + 0x1a) = _IO_list_all;
      _IO_list_all = (undefined *)puVar4;
      if ((uVar2 & 0x8000) != 0) goto LAB_006fc93a;
    }
    iVar1 = piVar6[1];
    piVar6[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar6[2] = 0;
      piVar6[3] = 0;
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = 0;
      UNLOCK();
      if (1 < iVar1) {
        __lll_lock_wake_private();
      }
    }
  }
  else {
    puVar4 = param_1;
    *(undefined **)(param_1 + 0x1a) = _IO_list_all;
    _IO_list_all = (undefined *)puVar4;
  }
LAB_006fc93a:
  run_fp = (uint *)0x0;
  DAT_00939934 = DAT_00939934 + -1;
  if (DAT_00939934 == 0) {
    DAT_00939938 = 0;
    LOCK();
    UNLOCK();
    bVar7 = 1 < list_all_lock;
    list_all_lock = DAT_00939934;
    if (bVar7) {
      __lll_lock_wake_private(&list_all_lock);
    }
  }
  __libc_cleanup_pop_restore(&local_58);
LAB_006fc7fc:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

