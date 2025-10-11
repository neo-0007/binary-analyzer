
undefined8 register_printf_specifier(uint param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  
  if (0xff < param_1) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    return 0xffffffff;
  }
  LOCK();
  bVar4 = lock == 0;
  if (bVar4) {
    lock = 1;
  }
  UNLOCK();
  if (!bVar4) {
    __lll_lock_wait_private(&lock);
  }
  if (__printf_function_table == 0) {
    __printf_arginfo_table = calloc(0x100,0x10);
    if (__printf_arginfo_table == (void *)0x0) {
      uVar3 = 0xffffffff;
      goto LAB_007b4290;
    }
    __printf_function_table = (long)__printf_arginfo_table + 0x800;
  }
  pvVar2 = __printf_arginfo_table;
  *(undefined8 *)(__printf_function_table + (long)(int)param_1 * 8) = param_2;
  uVar3 = 0;
  *(undefined8 *)((long)pvVar2 + (long)(int)param_1 * 8) = param_3;
LAB_007b4290:
  iVar1 = lock;
  LOCK();
  lock = 0;
  UNLOCK();
  if (1 < iVar1) {
    __lll_lock_wake_private(&lock);
  }
  return uVar3;
}

