
undefined8 _dl_scope_free(void *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  
  puVar2 = _dl_scope_free_list;
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    free(param_1);
    return 0;
  }
  if (_dl_scope_free_list == (ulong *)0x0) {
    puVar2 = (ulong *)malloc(0x198);
    _dl_scope_free_list = puVar2;
    if (puVar2 != (ulong *)0x0) {
      puVar2[1] = (ulong)param_1;
      *puVar2 = 1;
      return 0;
    }
    __thread_gscope_wait();
    uVar3 = 1;
    free(param_1);
  }
  else {
    uVar1 = *_dl_scope_free_list;
    if (0x31 < uVar1) {
      __thread_gscope_wait();
      uVar1 = *puVar2;
      while (uVar1 != 0) {
        *puVar2 = uVar1 - 1;
        free((void *)puVar2[uVar1]);
        uVar1 = *puVar2;
      }
      return 1;
    }
    *_dl_scope_free_list = uVar1 + 1;
    puVar2[uVar1 + 1] = (ulong)param_1;
    uVar3 = 0;
  }
  return uVar3;
}

