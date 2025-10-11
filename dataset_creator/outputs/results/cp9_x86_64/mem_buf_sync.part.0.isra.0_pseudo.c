
void mem_buf_sync_part_0_isra_0(long *param_1)

{
  void *__src;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (long *)0x0) {
    __src = (void *)((size_t *)param_1[1])[1];
    if (__src != *(void **)(*param_1 + 8)) {
      memmove(*(void **)(*param_1 + 8),__src,*(size_t *)param_1[1]);
      puVar1 = (undefined8 *)param_1[1];
      puVar2 = (undefined8 *)*param_1;
      *puVar2 = *puVar1;
      puVar1[1] = puVar2[1];
    }
    return;
  }
  return;
}

