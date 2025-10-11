
long * __resolv_conf_get_current(void)

{
  long *__ptr;
  int iVar1;
  char cVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  long *plVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined1 auStack_98 [48];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = __file_change_detection_for_path(auStack_98,"/etc/resolv.conf");
  if (cVar2 == '\0') {
LAB_007a5e48:
    plVar5 = (long *)0x0;
    goto LAB_007a5d6d;
  }
  LOCK();
  bVar6 = lock == 0;
  if (bVar6) {
    lock = 1;
  }
  UNLOCK();
  if (!bVar6) {
    __lll_lock_wait_private(&lock);
  }
  if (global == (undefined1 (*) [16])0x0) {
    pauVar4 = (undefined1 (*) [16])calloc(1,0x58);
    if (pauVar4 == (undefined1 (*) [16])0x0) goto LAB_007a5e48;
    global = pauVar4;
    *(undefined8 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
    if (*(long *)pauVar4[2] != 0) goto LAB_007a5d24;
LAB_007a5dd0:
    plVar5 = (long *)__resolv_conf_load(0,&local_68);
    if (plVar5 != (long *)0x0) {
      __ptr = *(long **)pauVar4[2];
      if (__ptr != (long *)0x0) {
        if (*__ptr == 0) {
                    /* WARNING: Subroutine does not return */
          conf_decrement_part_0();
        }
        lVar3 = *__ptr + -1;
        if (lVar3 == 0) {
          free(__ptr);
        }
        else {
          *__ptr = lVar3;
        }
      }
      *(long **)pauVar4[2] = plVar5;
      cVar2 = __file_is_unchanged(auStack_98,&local_68);
      if (cVar2 == '\0') {
        *(undefined8 *)(pauVar4[2] + 8) = 0xffffffffffffffff;
      }
      else {
        *(undefined8 *)(pauVar4[2] + 8) = local_68;
        *(undefined8 *)pauVar4[3] = uStack_60;
        *(undefined8 *)(pauVar4[3] + 8) = local_58;
        *(undefined8 *)pauVar4[4] = uStack_50;
        *(undefined8 *)(pauVar4[4] + 8) = local_48;
        *(undefined8 *)pauVar4[5] = uStack_40;
      }
      goto LAB_007a5d3c;
    }
  }
  else {
    pauVar4 = global;
    if (*(long *)global[2] == 0) goto LAB_007a5dd0;
LAB_007a5d24:
    cVar2 = __file_is_unchanged(auStack_98,pauVar4[2] + 8);
    if (cVar2 == '\0') goto LAB_007a5dd0;
    plVar5 = *(long **)pauVar4[2];
LAB_007a5d3c:
    if (plVar5 != (long *)0x0) {
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("conf->__refcount > 0","resolv_conf.c",0xa4,"__resolv_conf_get_current");
      }
      lVar3 = *plVar5 + 1;
      *plVar5 = lVar3;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("conf->__refcount > 0","resolv_conf.c",0xa6,"__resolv_conf_get_current");
      }
    }
  }
  iVar1 = lock;
  LOCK();
  lock = 0;
  UNLOCK();
  if (1 < iVar1) {
    __lll_lock_wake_private(&lock);
  }
LAB_007a5d6d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return plVar5;
}

