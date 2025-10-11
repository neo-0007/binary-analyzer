
int register_printf_type(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  bool bVar4;
  
  LOCK();
  bVar4 = lock == 0;
  if (bVar4) {
    lock = 1;
  }
  UNLOCK();
  if (!bVar4) {
    __lll_lock_wait_private(&lock);
  }
  if ((__printf_va_arg_table == (void *)0x0) &&
     (__printf_va_arg_table = calloc(0xf8,8), __printf_va_arg_table == (void *)0x0)) {
    iVar3 = -1;
  }
  else {
    iVar3 = pa_next_type;
    if (pa_next_type == 0x100) {
      iVar3 = -1;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x1c;
    }
    else {
      lVar2 = (long)pa_next_type;
      pa_next_type = pa_next_type + 1;
      *(undefined8 *)((long)__printf_va_arg_table + lVar2 * 8 + -0x40) = param_1;
    }
  }
  iVar1 = lock;
  LOCK();
  lock = 0;
  UNLOCK();
  if (1 < iVar1) {
    __lll_lock_wake_private(&lock);
    return iVar3;
  }
  return iVar3;
}

