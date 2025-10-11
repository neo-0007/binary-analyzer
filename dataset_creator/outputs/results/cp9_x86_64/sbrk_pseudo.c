
void * sbrk(intptr_t __delta)

{
  void *pvVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  if ((__curbrk == (void *)0x0) && (iVar2 = brk((void *)0x0), iVar2 < 0)) {
    return (void *)0xffffffffffffffff;
  }
  pvVar1 = __curbrk;
  if (__delta == 0) {
    return __curbrk;
  }
  if (__delta < 1) {
    if ((void *)-__delta < __curbrk || -(long)__curbrk == __delta) goto LAB_0076517f;
  }
  else if (!CARRY8(__delta,(ulong)__curbrk)) {
LAB_0076517f:
    iVar2 = brk((void *)(__delta + (long)__curbrk));
    if (iVar2 < 0) {
      return (void *)0xffffffffffffffff;
    }
    return pvVar1;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
  return (void *)0xffffffffffffffff;
}

