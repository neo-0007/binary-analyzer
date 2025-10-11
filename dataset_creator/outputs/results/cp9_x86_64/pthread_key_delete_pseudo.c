
int pthread_key_delete(pthread_key_t __key)

{
  ulong uVar1;
  ulong *puVar2;
  bool bVar3;
  
  if (__key < 0x400) {
    puVar2 = &__pthread_keys + (ulong)__key * 2;
    uVar1 = *puVar2;
    if ((uVar1 & 1) != 0) {
      LOCK();
      bVar3 = (uVar1 & 0xffffffff) == *puVar2;
      if (bVar3) {
        *puVar2 = (ulong)((int)uVar1 + 1);
      }
      UNLOCK();
      if (bVar3) {
        return 0;
      }
    }
  }
  return 0x16;
}

