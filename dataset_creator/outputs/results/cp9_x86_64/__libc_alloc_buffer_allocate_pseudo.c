
undefined1  [16] __libc_alloc_buffer_allocate(size_t param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  pvVar1 = malloc(param_1);
  *param_2 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + (long)pvVar1;
    if (CARRY8(param_1,(ulong)pvVar1)) {
      __libc_alloc_buffer_create_failure(pvVar1,param_1);
    }
  }
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = pvVar1;
  return auVar3;
}

