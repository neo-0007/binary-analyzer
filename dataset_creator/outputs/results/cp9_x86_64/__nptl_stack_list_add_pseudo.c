
void __nptl_stack_list_add(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[1] = (long)param_2;
  *(long **)(lVar1 + 8) = param_1;
  *param_2 = (long)param_1;
  _dl_in_flight_stack = 0;
  return;
}

