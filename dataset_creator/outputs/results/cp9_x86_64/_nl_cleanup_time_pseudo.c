
void _nl_cleanup_time(long param_1)

{
  undefined8 *__ptr;
  
  __ptr = *(undefined8 **)(param_1 + 0x28);
  if (__ptr != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    free((void *)*__ptr);
    free((void *)__ptr[3]);
    free((void *)__ptr[4]);
    free(__ptr);
    return;
  }
  return;
}

