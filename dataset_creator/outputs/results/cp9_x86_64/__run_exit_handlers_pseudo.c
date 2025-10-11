
void __run_exit_handlers(int param_1,long *param_2,char param_3,char param_4)

{
  long *__ptr;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined **ppuVar6;
  long in_FS_OFFSET;
  bool bVar7;
  
  if ((PTR_0092dfd8 != (undefined *)0x0) && (param_4 != '\0')) {
    func_0x00000000();
  }
  LOCK();
  bVar7 = __exit_funcs_lock == 0;
  if (bVar7) {
    __exit_funcs_lock = 1;
  }
  UNLOCK();
  if (!bVar7) {
    __lll_lock_wait_private(&__exit_funcs_lock);
  }
LAB_006df579:
  __ptr = (long *)*param_2;
  if (__ptr == (long *)0x0) {
LAB_006df6cf:
    iVar4 = __exit_funcs_lock;
    __exit_funcs_done = 1;
    LOCK();
    __exit_funcs_lock = 0;
    UNLOCK();
    if (1 < iVar4) {
      __lll_lock_wake_private(&__exit_funcs_lock);
    }
    if (param_3 != '\0') {
      ppuVar6 = &__elf_set___libc_atexit_element__IO_cleanup__;
      do {
        (*(code *)*ppuVar6)();
        ppuVar6 = ppuVar6 + 1;
      } while (ppuVar6 < &__bss_start);
    }
                    /* WARNING: Subroutine does not return */
    _exit(param_1);
  }
LAB_006df588:
  do {
    lVar5 = __ptr[1];
    do {
      if (lVar5 == 0) {
        lVar5 = *__ptr;
        *param_2 = lVar5;
        if (lVar5 == 0) goto LAB_006df6cf;
        free(__ptr);
        goto LAB_006df579;
      }
      lVar5 = lVar5 + -1;
      __ptr[1] = lVar5;
      iVar4 = __exit_funcs_lock;
      lVar1 = __ptr[lVar5 * 4 + 2];
      if (lVar1 == 3) {
        uVar2 = __ptr[lVar5 * 4 + 3];
        uVar3 = *(ulong *)(in_FS_OFFSET + 0x30);
        LOCK();
        __exit_funcs_lock = 0;
        UNLOCK();
        if (1 < iVar4) {
          __lll_lock_wake_private(&__exit_funcs_lock);
        }
        (*(code *)((uVar2 >> 0x11 | uVar2 << 0x2f) ^ uVar3))();
        LOCK();
        bVar7 = __exit_funcs_lock == 0;
        if (bVar7) {
          __exit_funcs_lock = 1;
        }
        UNLOCK();
        if (!bVar7) {
          __lll_lock_wait_private(&__exit_funcs_lock);
        }
        goto LAB_006df588;
      }
      if (lVar1 == 4) {
        uVar2 = __ptr[lVar5 * 4 + 3];
        lVar1 = __ptr[lVar5 * 4 + 4];
        __ptr[lVar5 * 4 + 2] = 0;
        iVar4 = __exit_funcs_lock;
        uVar3 = *(ulong *)(in_FS_OFFSET + 0x30);
        LOCK();
        __exit_funcs_lock = 0;
        UNLOCK();
        if (1 < iVar4) {
          __lll_lock_wake_private(&__exit_funcs_lock);
        }
        (*(code *)((uVar2 >> 0x11 | uVar2 << 0x2f) ^ uVar3))(lVar1,param_1);
        LOCK();
        bVar7 = __exit_funcs_lock == 0;
        if (bVar7) {
          __exit_funcs_lock = 1;
        }
        UNLOCK();
        if (!bVar7) {
          __lll_lock_wait_private(&__exit_funcs_lock);
        }
        goto LAB_006df588;
      }
    } while (lVar1 != 2);
    uVar2 = __ptr[lVar5 * 4 + 3];
    lVar5 = __ptr[lVar5 * 4 + 4];
    uVar3 = *(ulong *)(in_FS_OFFSET + 0x30);
    LOCK();
    __exit_funcs_lock = 0;
    UNLOCK();
    if (1 < iVar4) {
      __lll_lock_wake_private(&__exit_funcs_lock);
    }
    (*(code *)((uVar2 >> 0x11 | uVar2 << 0x2f) ^ uVar3))(param_1,lVar5);
    LOCK();
    bVar7 = __exit_funcs_lock == 0;
    if (bVar7) {
      __exit_funcs_lock = 1;
    }
    UNLOCK();
    if (!bVar7) {
      __lll_lock_wait_private(&__exit_funcs_lock);
    }
  } while( true );
}

