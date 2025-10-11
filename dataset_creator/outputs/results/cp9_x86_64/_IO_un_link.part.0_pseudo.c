
void _IO_un_link_part_0(uint *param_1)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  long in_FS_OFFSET;
  bool bVar10;
  code *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = flush_cleanup;
  __libc_cleanup_push_defer(&local_58);
  lVar1 = *(long *)(in_FS_OFFSET + 0x10);
  lVar2 = DAT_00939938;
  if (lVar1 != DAT_00939938) {
    LOCK();
    bVar10 = list_all_lock == 0;
    if (bVar10) {
      list_all_lock = 1;
    }
    UNLOCK();
    lVar2 = lVar1;
    if (!bVar10) {
      __lll_lock_wait_private(&list_all_lock);
    }
  }
  DAT_00939938 = lVar2;
  puVar6 = (uint *)_IO_list_all;
  uVar8 = *param_1;
  iVar4 = DAT_00939934 + 1;
  uVar5 = uVar8 & 0x8000;
  run_fp = param_1;
  if (uVar5 == 0) {
    lVar1 = *(long *)(in_FS_OFFSET + 0x10);
    piVar9 = *(int **)(param_1 + 0x22);
    DAT_00939934 = iVar4;
    if (lVar1 != *(long *)(piVar9 + 2)) {
      LOCK();
      iVar4 = *piVar9;
      if (iVar4 == 0) {
        *piVar9 = 1;
      }
      UNLOCK();
      if (iVar4 != 0) {
        __lll_lock_wait_private();
      }
      puVar6 = (uint *)_IO_list_all;
      uVar8 = *param_1;
      lVar2 = *(long *)(param_1 + 0x22);
      piVar9 = (int *)(lVar2 + 4);
      *piVar9 = *piVar9 + 1;
      *(long *)(lVar2 + 8) = lVar1;
      uVar5 = uVar8 & 0x8000;
      puVar3 = (uint *)_IO_list_all;
      iVar4 = DAT_00939934;
      if (puVar6 != (uint *)0x0) goto LAB_006fc653;
      goto LAB_006fc667;
    }
    piVar9[1] = piVar9[1] + 1;
    iVar4 = DAT_00939934;
    if (puVar6 != (uint *)0x0) goto LAB_006fc653;
    *param_1 = uVar8 & 0xffffff7f;
LAB_006fc678:
    iVar4 = piVar9[1];
    piVar9[1] = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      piVar9[2] = 0;
      piVar9[3] = 0;
      LOCK();
      iVar4 = *piVar9;
      *piVar9 = 0;
      UNLOCK();
      if (1 < iVar4) {
        __lll_lock_wake_private();
      }
    }
  }
  else {
    if (_IO_list_all == (undefined *)0x0) {
      *param_1 = uVar8 & 0xffffff7f;
      goto LAB_006fc69f;
    }
LAB_006fc653:
    DAT_00939934 = iVar4;
    puVar7 = *(uint **)(puVar6 + 0x1a);
    puVar3 = *(uint **)(puVar6 + 0x1a);
    if (param_1 != puVar6) {
      for (; puVar3 = (uint *)_IO_list_all, puVar7 != (uint *)0x0;
          puVar7 = *(uint **)(puVar7 + 0x1a)) {
        if (param_1 == puVar7) {
          *(undefined8 *)(puVar6 + 0x1a) = *(undefined8 *)(param_1 + 0x1a);
          *param_1 = uVar8 & 0xffffff7f;
          if (uVar5 != 0) goto LAB_006fc696;
          goto LAB_006fc671;
        }
        puVar6 = puVar7;
      }
    }
LAB_006fc667:
    _IO_list_all = (undefined *)puVar3;
    *param_1 = uVar8 & 0xffffff7f;
    if (uVar5 == 0) {
LAB_006fc671:
      piVar9 = *(int **)(param_1 + 0x22);
      goto LAB_006fc678;
    }
  }
LAB_006fc696:
  DAT_00939934 = DAT_00939934 + -1;
LAB_006fc69f:
  run_fp = (uint *)0x0;
  if (DAT_00939934 == 0) {
    DAT_00939938 = 0;
    LOCK();
    UNLOCK();
    bVar10 = 1 < list_all_lock;
    list_all_lock = DAT_00939934;
    if (bVar10) {
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

