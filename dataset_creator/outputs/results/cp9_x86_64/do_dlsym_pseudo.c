
undefined1  [16] do_dlsym(long *param_1)

{
  long lVar1;
  
  param_1[3] = 0;
  lVar1 = _dl_lookup_symbol_x(param_1[1],*param_1,param_1 + 3,*param_1 + 0x3a0,0,0);
  param_1[2] = lVar1;
  return ZEXT816(2);
}

