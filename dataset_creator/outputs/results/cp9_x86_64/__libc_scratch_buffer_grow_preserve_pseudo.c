
undefined8 __libc_scratch_buffer_grow_preserve(long *param_1)

{
  size_t __n;
  ulong __size;
  void *pvVar1;
  undefined8 uVar2;
  void *__dest;
  long in_FS_OFFSET;
  
  __n = param_1[1];
  pvVar1 = (void *)*param_1;
  __size = __n * 2;
  if ((long *)pvVar1 == param_1 + 2) {
    __dest = malloc(__size);
    if (__dest == (void *)0x0) {
      return 0;
    }
    pvVar1 = memcpy(__dest,pvVar1,__n);
LAB_00708b4c:
    *param_1 = (long)pvVar1;
    uVar2 = 1;
    param_1[1] = __size;
  }
  else {
    if (__size < __n) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    }
    else {
      pvVar1 = realloc(pvVar1,__size);
      if (pvVar1 != (void *)0x0) goto LAB_00708b4c;
      pvVar1 = (void *)*param_1;
    }
    free(pvVar1);
    *param_1 = (long)(param_1 + 2);
    uVar2 = 0;
    param_1[1] = 0x400;
  }
  return uVar2;
}

