
void _dl_tunable_set_stack_cache_size(undefined8 *param_1)

{
  __nptl_stack_cache_maxsize = *param_1;
  return;
}

