
void _dl_mcount_wrapper_check(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  if (_dl_profile_map != 0) {
    _dl_mcount(unaff_retaddr,param_1);
    return;
  }
  return;
}

