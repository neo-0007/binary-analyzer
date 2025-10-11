
undefined8 _nl_get_alt_digit(uint param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (99 < param_1) {
    return 0;
  }
  if (**(char **)(param_2 + 0x1b8) == '\0') {
    return 0;
  }
  pthread_rwlock_wrlock((pthread_rwlock_t *)__libc_setlocale_lock);
  lVar1 = *(long *)(param_2 + 0x28);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x28) == 0)) {
    _nl_init_alt_digit(param_2);
    lVar1 = *(long *)(param_2 + 0x28);
    if (lVar1 != 0) goto LAB_0075eab0;
  }
  else {
LAB_0075eab0:
    if (*(long *)(lVar1 + 0x18) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x18) + (ulong)param_1 * 8);
      goto LAB_0075ea9a;
    }
  }
  uVar2 = 0;
LAB_0075ea9a:
  pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
  return uVar2;
}

