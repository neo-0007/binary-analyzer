
void _dl_tls_static_surplus_init(ulong param_1)

{
  long lVar1;
  long local_20;
  
  __tunable_get_val(0,&local_20,0);
  lVar1 = local_20;
  __tunable_get_val(0x20,&local_20,0);
  if (lVar1 != 0) {
    lVar1 = 1;
  }
  if (param_1 <= 1U - lVar1) {
    _dl_tls_static_optional = local_20;
    _dl_tls_static_surplus = (long)(((int)lVar1 + (int)param_1) * 0x120 + (int)local_20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _dl_fatal_printf("Failed loading %lu audit modules, %lu are supported.\n",param_1);
}

