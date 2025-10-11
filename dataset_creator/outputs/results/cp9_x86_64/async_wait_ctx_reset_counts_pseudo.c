
void async_wait_ctx_reset_counts(long *param_1)

{
  void *pvVar1;
  void *ptr;
  
  param_1[1] = 0;
  param_1[2] = 0;
  ptr = (void *)*param_1;
  if (ptr == (void *)0x0) {
    return;
  }
  pvVar1 = (void *)0x0;
  do {
    while (*(int *)((long)ptr + 0x24) == 0) {
LAB_004a7950:
      pvVar1 = ptr;
      if (*(int *)((long)pvVar1 + 0x20) != 0) {
        *(undefined4 *)((long)pvVar1 + 0x20) = 0;
      }
      ptr = *(void **)((long)pvVar1 + 0x28);
      if (ptr == (void *)0x0) {
        return;
      }
    }
    if (pvVar1 == (void *)0x0) {
      do {
        *param_1 = *(long *)((long)ptr + 0x28);
        CRYPTO_free(ptr);
        ptr = (void *)*param_1;
        if (ptr == (void *)0x0) {
          return;
        }
      } while (*(int *)((long)ptr + 0x24) != 0);
      goto LAB_004a7950;
    }
    *(undefined8 *)((long)pvVar1 + 0x28) = *(undefined8 *)((long)ptr + 0x28);
    CRYPTO_free(ptr);
    ptr = *(void **)((long)pvVar1 + 0x28);
    if (ptr == (void *)0x0) {
      return;
    }
  } while( true );
}

