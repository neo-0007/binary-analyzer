
ulong _nl_parse_alt_digit(long *param_1,long param_2)

{
  char *__s2;
  char *__s;
  int iVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  __s2 = (char *)*param_1;
  if (**(int **)(param_2 + 0x350) == 0) {
    return 0xffffffff;
  }
  pthread_rwlock_wrlock((pthread_rwlock_t *)__libc_setlocale_lock);
  lVar2 = *(long *)(param_2 + 0x28);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x28) == 0)) {
    _nl_init_alt_digit(param_2);
    lVar2 = *(long *)(param_2 + 0x28);
    if (lVar2 == 0) goto LAB_0075ec5f;
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  if (lVar2 != 0) {
    uVar3 = 0;
    uVar5 = 0;
    uVar4 = 0xffffffff;
    do {
      __s = *(char **)(lVar2 + uVar5 * 8);
      __n = strlen(__s);
      if ((uVar3 < __n) && (iVar1 = strncmp(__s,__s2,__n), iVar1 == 0)) {
        uVar4 = uVar5 & 0xffffffff;
        uVar3 = __n;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 100);
    pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
    if ((int)uVar4 == -1) {
      return uVar4;
    }
    *param_1 = *param_1 + uVar3;
    return uVar4;
  }
LAB_0075ec5f:
  pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
  return 0xffffffff;
}

