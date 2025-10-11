
void err_delete_thread_state(void)

{
  void *ptr;
  void *ptr_00;
  long lVar1;
  
  ptr_00 = (void *)CRYPTO_THREAD_get_local(&err_thread_local);
  if (ptr_00 != (void *)0x0) {
    lVar1 = 0;
    CRYPTO_THREAD_set_local(&err_thread_local,0);
    do {
      if ((*(byte *)((long)ptr_00 + lVar1 * 4 + 0x200) & 1) != 0) {
        CRYPTO_free(*(void **)((long)ptr_00 + lVar1 * 8 + 0x100));
      }
      ptr = *(void **)((long)ptr_00 + lVar1 * 8 + 0x240);
      *(undefined8 *)((long)ptr_00 + lVar1 * 8 + 0x100) = 0;
      *(undefined8 *)((long)ptr_00 + lVar1 * 8 + 0x180) = 0;
      *(undefined4 *)((long)ptr_00 + lVar1 * 4 + 0x200) = 0;
      *(undefined4 *)((long)ptr_00 + lVar1 * 4 + 0x40) = 0;
      *(undefined4 *)((long)ptr_00 + lVar1 * 4) = 0;
      *(undefined8 *)((long)ptr_00 + lVar1 * 8 + 0x80) = 0;
      *(undefined4 *)((long)ptr_00 + lVar1 * 4 + 0x2c0) = 0xffffffff;
      CRYPTO_free(ptr);
      *(undefined8 *)((long)ptr_00 + lVar1 * 8 + 0x240) = 0;
      CRYPTO_free(*(void **)((long)ptr_00 + lVar1 * 8 + 0x300));
      *(undefined8 *)((long)ptr_00 + lVar1 * 8 + 0x300) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x10);
    CRYPTO_free(ptr_00);
    return;
  }
  return;
}

