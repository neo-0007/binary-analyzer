
void __tls_pre_init_tp(void)

{
  _dl_stack_used = &_dl_stack_used;
  puRam000000000093de48 = &_dl_stack_used;
  _dl_stack_user = &_dl_stack_user;
  puRam000000000093de38 = &_dl_stack_user;
  _dl_stack_cache = &_dl_stack_cache;
  DAT_0093de28 = &_dl_stack_cache;
  return;
}

