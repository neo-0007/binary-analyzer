
undefined4 call_dl_lookup(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[3];
  lVar2 = _dl_lookup_symbol_x(param_1[1],*param_1,param_1[5],*(undefined8 *)(*param_1 + 0x398),
                              param_1[2],0);
  *param_1 = lVar2;
  return (int)lVar1;
}

