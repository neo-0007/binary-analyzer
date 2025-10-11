
void _dl_mcount_wrapper(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  _dl_mcount(unaff_retaddr,param_1);
  return;
}

