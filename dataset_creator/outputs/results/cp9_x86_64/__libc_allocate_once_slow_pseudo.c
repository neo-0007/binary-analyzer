
void * __libc_allocate_once_slow(long *param_1,code *param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  void *__ptr;
  void *pvVar2;
  
  __ptr = (void *)(*param_2)(param_4);
  pvVar2 = __ptr;
  if (__ptr != (void *)0x0) {
    do {
      LOCK();
      lVar1 = *param_1;
      if (lVar1 == 0) {
        *param_1 = (long)__ptr;
      }
      UNLOCK();
      if (lVar1 == 0) {
        return __ptr;
      }
      pvVar2 = (void *)*param_1;
    } while (pvVar2 == (void *)0x0);
    if (param_3 == (code *)0x0) {
      free(__ptr);
    }
    else {
      (*param_3)(param_4,__ptr);
    }
  }
  return pvVar2;
}

