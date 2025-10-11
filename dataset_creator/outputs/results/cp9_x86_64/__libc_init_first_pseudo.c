
void __libc_init_first(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  environ = param_3;
  __libc_argv = param_2;
  __libc_argc = param_1;
  _dl_non_dynamic_init();
  __init_misc(param_1,param_2,param_3);
  return;
}

