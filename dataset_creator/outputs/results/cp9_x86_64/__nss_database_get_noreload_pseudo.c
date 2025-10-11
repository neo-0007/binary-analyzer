
undefined8 __nss_database_get_noreload(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = global_database_state;
  if (global_database_state == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("local != NULL","nss_database.c",0x1e1,"__nss_database_get_noreload");
  }
  piVar1 = (int *)(global_database_state + 0xc0);
  LOCK();
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    *piVar1 = 1;
  }
  UNLOCK();
  if (iVar3 != 0) {
    __lll_lock_wait_private(piVar1);
  }
  uVar4 = *(undefined8 *)(lVar5 + 0x30 + (ulong)param_1 * 8);
  LOCK();
  piVar2 = (int *)(lVar5 + 0xc0);
  iVar3 = *piVar2;
  *piVar2 = 0;
  UNLOCK();
  if (1 < iVar3) {
    __lll_lock_wake_private(piVar1);
  }
  return uVar4;
}

