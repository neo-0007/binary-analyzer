
int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  
  lVar3 = 0;
  puVar4 = &__pthread_keys;
  do {
    uVar2 = *puVar4;
    if (((uVar2 & 1) == 0) && (uVar2 != 0xfffffffffffffffe)) {
      LOCK();
      uVar1 = *puVar4;
      if (uVar2 == uVar1) {
        *puVar4 = uVar2 + 1;
      }
      UNLOCK();
      if (uVar2 == uVar1) {
        (&DAT_00939988)[lVar3 * 2] = __destr_function;
        *__key = (pthread_key_t)lVar3;
        return 0;
      }
    }
    lVar3 = lVar3 + 1;
    puVar4 = puVar4 + 2;
    if (lVar3 == 0x400) {
      return 0xb;
    }
  } while( true );
}

