
/* __gnu_cxx::__freeres() */

void __gnu_cxx::__freeres(void)

{
  if ((anonymous_namespace)::emergency_pool._48_8_ != 0) {
    free((void *)(anonymous_namespace)::emergency_pool._48_8_);
    (anonymous_namespace)::emergency_pool._48_8_ = 0;
    return;
  }
  return;
}

