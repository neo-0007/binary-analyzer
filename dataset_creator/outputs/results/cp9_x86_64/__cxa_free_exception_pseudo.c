
void __cxa_free_exception(long param_1)

{
  void *__ptr;
  
  __ptr = (void *)(param_1 + -0x80);
  if (((ulong)(anonymous_namespace)::emergency_pool._48_8_ < __ptr) &&
     (__ptr < (void *)((anonymous_namespace)::emergency_pool._48_8_ +
                      (anonymous_namespace)::emergency_pool._56_8_))) {
    (anonymous_namespace)::pool::free(__ptr);
    return;
  }
  free(__ptr);
  return;
}

