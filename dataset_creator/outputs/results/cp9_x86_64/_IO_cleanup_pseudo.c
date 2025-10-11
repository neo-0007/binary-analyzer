
undefined4 _IO_cleanup(void)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  long in_FS_OFFSET;
  bool bVar9;
  code *local_68;
  undefined8 local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = _IO_flush_all_lockp(0);
  local_60 = 0;
  local_68 = flush_cleanup;
  __libc_cleanup_push_defer(&local_68);
  lVar3 = *(long *)(in_FS_OFFSET + 0x10);
  lVar5 = DAT_00939938;
  if (lVar3 != DAT_00939938) {
    LOCK();
    bVar9 = list_all_lock == 0;
    if (bVar9) {
      list_all_lock = 1;
    }
    UNLOCK();
    lVar5 = lVar3;
    if (!bVar9) {
      __lll_lock_wait_private(&list_all_lock);
    }
  }
  DAT_00939938 = lVar5;
  puVar7 = (uint *)_IO_list_all;
  iVar8 = DAT_00939934 + 1;
  if (_IO_list_all != (undefined *)0x0) {
    do {
      DAT_00939934 = iVar8;
      if (((*puVar7 & 2) == 0) && (iVar8 = 0, puVar7[0x30] != 0)) {
        while (piVar4 = *(int **)(puVar7 + 0x22), piVar4 != (int *)0x0) {
          lVar3 = *(long *)(in_FS_OFFSET + 0x10);
          if (lVar3 == *(long *)(piVar4 + 2)) {
            piVar4[1] = piVar4[1] + 1;
            break;
          }
          LOCK();
          iVar2 = *piVar4;
          if (iVar2 == 0) {
            *piVar4 = 1;
          }
          UNLOCK();
          if (iVar2 == 0) {
            lVar5 = *(long *)(puVar7 + 0x22);
            *(long *)(lVar5 + 8) = lVar3;
            *(undefined4 *)(lVar5 + 4) = 1;
            break;
          }
          sched_yield();
          if (iVar8 == 1) {
            iVar8 = 2;
            break;
          }
          iVar8 = 1;
        }
        puVar1 = freeres_list;
        if ((dealloc_buffers == '\0') && ((*puVar7 & 1) == 0)) {
          freeres_list = puVar7;
          *puVar7 = *puVar7 | 1;
          *(uint **)(puVar7 + 0x2a) = puVar1;
          *(undefined8 *)(puVar7 + 0x2c) = *(undefined8 *)(puVar7 + 0xe);
        }
        lVar3 = *(long *)(puVar7 + 0x36);
        if (0x827 < lVar3 - 0x932180U) {
          _IO_vtable_check();
        }
        (**(code **)(lVar3 + 0x58))(puVar7,0,0);
        if (0 < (int)puVar7[0x30]) {
          _IO_wsetb(puVar7,0,0,0);
        }
        if (((iVar8 != 2) && (piVar4 = *(int **)(puVar7 + 0x22), piVar4 != (int *)0x0)) &&
           (iVar8 = piVar4[1], piVar4[1] = iVar8 + -1, iVar8 + -1 == 0)) {
          piVar4[2] = 0;
          piVar4[3] = 0;
          LOCK();
          iVar8 = *piVar4;
          *piVar4 = 0;
          UNLOCK();
          if (1 < iVar8) {
            __lll_lock_wake_private();
          }
        }
      }
      puVar7[0x30] = 0xffffffff;
      puVar1 = puVar7 + 0x1a;
      puVar7 = *(uint **)puVar1;
      iVar8 = DAT_00939934;
    } while (*(uint **)puVar1 != (uint *)0x0);
    DAT_00939934 = DAT_00939934 + -1;
  }
  if (DAT_00939934 == 0) {
    DAT_00939938 = 0;
    LOCK();
    UNLOCK();
    bVar9 = 1 < list_all_lock;
    list_all_lock = DAT_00939934;
    if (bVar9) {
      __lll_lock_wake_private(&list_all_lock);
    }
  }
  __libc_cleanup_pop_restore(&local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar6;
}

