
undefined8 _nl_get_walt_digit(uint param_1,long param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (99 < param_1) {
    return 0;
  }
  if (**(int **)(param_2 + 0x350) == 0) {
    return 0;
  }
  pthread_rwlock_wrlock((pthread_rwlock_t *)__libc_setlocale_lock);
  pvVar1 = *(void **)(param_2 + 0x28);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = calloc(0x30,1);
    *(void **)(param_2 + 0x28) = pvVar1;
    if (pvVar1 != (void *)0x0) {
      *(code **)(param_2 + 0x20) = _nl_cleanup_time;
      goto LAB_0075eb84;
    }
LAB_0075ebe0:
    uVar4 = 0;
  }
  else {
    if (*(int *)((long)pvVar1 + 0x2c) == 0) {
LAB_0075eb84:
      pwVar3 = *(wchar_t **)(param_2 + 0x350);
      *(undefined4 *)((long)pvVar1 + 0x2c) = 1;
      if (pwVar3 == (wchar_t *)0x0) goto LAB_0075eb32;
      puVar2 = (undefined8 *)malloc(800);
      *(undefined8 **)((long)pvVar1 + 0x20) = puVar2;
      if (puVar2 == (undefined8 *)0x0) goto LAB_0075ebe0;
      puVar5 = puVar2;
      do {
        *puVar5 = pwVar3;
        puVar5 = puVar5 + 1;
        pwVar3 = wcschr(pwVar3,L'\0');
        pwVar3 = pwVar3 + 1;
      } while (puVar2 + 100 != puVar5);
    }
    else {
LAB_0075eb32:
      puVar2 = *(undefined8 **)((long)pvVar1 + 0x20);
      if (puVar2 == (undefined8 *)0x0) goto LAB_0075ebe0;
    }
    uVar4 = puVar2[param_1];
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
  return uVar4;
}

