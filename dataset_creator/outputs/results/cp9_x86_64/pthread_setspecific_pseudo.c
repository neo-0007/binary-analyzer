
int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  ulong *puVar1;
  void *pvVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  
  if (__key < 0x20) {
    uVar3 = (&__pthread_keys)[(ulong)__key * 2] & 0xffffffff;
    if (((&__pthread_keys)[(ulong)__key * 2] & 1) == 0) {
      return 0x16;
    }
    puVar1 = (ulong *)((ulong)(__key + 0x31) * 0x10 + *(long *)(in_FS_OFFSET + 0x10));
    if (__pointer == (void *)0x0) goto LAB_00701cc8;
  }
  else {
    if (0x3ff < __key) {
      return 0x16;
    }
    uVar3 = (&__pthread_keys)[(ulong)__key * 2] & 0xffffffff;
    if (((&__pthread_keys)[(ulong)__key * 2] & 1) == 0) {
      return 0x16;
    }
    pvVar2 = *(void **)(in_FS_OFFSET + (ulong)(__key >> 5) * 8 + 0x510);
    if (pvVar2 == (void *)0x0) {
      if (__pointer == (void *)0x0) {
        return 0;
      }
      pvVar2 = calloc(0x20,0x10);
      if (pvVar2 == (void *)0x0) {
        return 0xc;
      }
      *(void **)(in_FS_OFFSET + (ulong)(__key >> 5) * 8 + 0x510) = pvVar2;
    }
    puVar1 = (ulong *)((long)pvVar2 + (ulong)(__key & 0x1f) * 0x10);
  }
  *(undefined1 *)(in_FS_OFFSET + 0x610) = 1;
LAB_00701cc8:
  puVar1[1] = (ulong)__pointer;
  *puVar1 = uVar3;
  return 0;
}

