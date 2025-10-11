
undefined8 __cxa_atexit(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("func != NULL","cxa_atexit.c",0x29,"__internal_atexit");
  }
  LOCK();
  bVar3 = __exit_funcs_lock == 0;
  if (bVar3) {
    __exit_funcs_lock = 1;
  }
  UNLOCK();
  if (!bVar3) {
    __lll_lock_wait_private(&__exit_funcs_lock);
  }
  puVar1 = (undefined8 *)__new_exitfn(&__exit_funcs);
  if (puVar1 == (undefined8 *)0x0) {
    LOCK();
    UNLOCK();
    uVar2 = 0xffffffff;
  }
  else {
    *puVar1 = 4;
    param_1 = param_1 ^ *(ulong *)(in_FS_OFFSET + 0x30);
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[1] = param_1 << 0x11 | param_1 >> 0x2f;
    LOCK();
    UNLOCK();
    uVar2 = 0;
  }
  bVar3 = 1 < __exit_funcs_lock;
  __exit_funcs_lock = 0;
  if (bVar3) {
    __exit_funcs_lock = 0;
    __lll_lock_wake_private(&__exit_funcs_lock);
  }
  return uVar2;
}

