
void * pthread_getspecific(pthread_key_t __key)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  
  if (__key < 0x20) {
    plVar2 = (long *)((ulong)(__key + 0x31) * 0x10 + *(long *)(in_FS_OFFSET + 0x10));
  }
  else {
    if (0x3ff < __key) {
      return (void *)0x0;
    }
    lVar1 = *(long *)(in_FS_OFFSET + (ulong)(__key >> 5) * 8 + 0x510);
    if (lVar1 == 0) {
      return (void *)0x0;
    }
    plVar2 = (long *)(lVar1 + (ulong)(__key & 0x1f) * 0x10);
  }
  pvVar3 = (void *)plVar2[1];
  if ((pvVar3 != (void *)0x0) && ((&__pthread_keys)[(ulong)__key * 2] != *plVar2)) {
    plVar2[1] = 0;
    pvVar3 = (void *)0x0;
  }
  return pvVar3;
}

