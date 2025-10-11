
void _nl_init_alt_digit(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  size_t sVar4;
  char *__s;
  
  pvVar2 = *(void **)(param_1 + 0x28);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = calloc(0x30,1);
    *(void **)(param_1 + 0x28) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return;
    }
    *(code **)(param_1 + 0x20) = _nl_cleanup_time;
  }
  else if (*(int *)((long)pvVar2 + 0x28) != 0) {
    return;
  }
  __s = *(char **)(param_1 + 0x1b8);
  *(undefined4 *)((long)pvVar2 + 0x28) = 1;
  if (__s != (char *)0x0) {
    puVar3 = (undefined8 *)malloc(800);
    *(undefined8 **)((long)pvVar2 + 0x18) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      puVar1 = puVar3 + 100;
      do {
        *puVar3 = __s;
        puVar3 = puVar3 + 1;
        sVar4 = strlen(__s);
        __s = __s + sVar4 + 1;
      } while (puVar3 != puVar1);
      return;
    }
  }
  return;
}

