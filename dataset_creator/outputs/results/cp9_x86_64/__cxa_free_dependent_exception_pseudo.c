
void __cxa_free_dependent_exception(void *param_1)

{
  if (((ulong)(anonymous_namespace)::emergency_pool._48_8_ < param_1) &&
     (param_1 < (void *)((anonymous_namespace)::emergency_pool._48_8_ +
                        (anonymous_namespace)::emergency_pool._56_8_))) {
    (anonymous_namespace)::pool::free(param_1);
    return;
  }
  free(param_1);
  return;
}

