
void __libc_dlerror_result_free(void)

{
  void *__ptr;
  long in_FS_OFFSET;
  
  __ptr = *(void **)(in_FS_OFFSET + -0x38);
  if (__ptr != (void *)0x0) {
    if (__ptr != (void *)0xffffffffffffffff) {
      if (*(char *)((long)__ptr + 4) == '\x01') {
        _dl_error_free(*(undefined8 *)((long)__ptr + 0x10));
        free(*(void **)(in_FS_OFFSET + -0x38));
      }
      else if (*(char *)((long)__ptr + 4) == '\x02') {
        free(*(void **)((long)__ptr + 0x10));
        free(*(void **)(in_FS_OFFSET + -0x38));
      }
      else {
        free(__ptr);
      }
    }
    *(undefined8 *)(in_FS_OFFSET + -0x38) = 0;
  }
  return;
}

