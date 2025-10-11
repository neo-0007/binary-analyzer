
void init_thread_destructor(void *param_1)

{
  if (param_1 != (void *)0x0) {
    init_thread_stop_part_0(0,param_1);
  }
  init_thread_remove_handlers(param_1);
  CRYPTO_free(param_1);
  return;
}

