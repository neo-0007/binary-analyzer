
long * functions_allocate(void)

{
  long *__ptr;
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  
  __ptr = (long *)malloc(0x18);
  if (__ptr == (long *)0x0) {
    return (long *)0x0;
  }
  lVar1 = __libc_dlopen_mode("libidn2.so.0",0x80000002);
  if (lVar1 != 0) {
    uVar2 = __libc_dlvsym(lVar1,"idn2_lookup_ul","IDN2_0.0.0");
    lVar3 = __libc_dlvsym(lVar1,"idn2_to_unicode_lzlz","IDN2_0.0.0");
    if ((uVar2 != 0) && (lVar3 != 0)) {
      __ptr[1] = uVar2;
      __ptr[2] = lVar3;
      uVar2 = uVar2 ^ *(ulong *)(in_FS_OFFSET + 0x30);
      uVar4 = __ptr[2] ^ *(ulong *)(in_FS_OFFSET + 0x30);
      *__ptr = lVar1;
      __ptr[1] = uVar2 << 0x11 | uVar2 >> 0x2f;
      __ptr[2] = uVar4 << 0x11 | uVar4 >> 0x2f;
      return __ptr;
    }
    __libc_dlclose(lVar1);
  }
  free(__ptr);
  return (long *)0x0;
}

