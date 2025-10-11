
void __nptl_stack_list_del(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  plVar2 = (long *)param_1[1];
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  _dl_in_flight_stack = 0;
  return;
}

