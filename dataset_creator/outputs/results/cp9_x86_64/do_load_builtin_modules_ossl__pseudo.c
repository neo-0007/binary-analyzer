
void do_load_builtin_modules_ossl_(void)

{
  OPENSSL_load_builtin_modules();
  ENGINE_load_builtin_engines();
  do_load_builtin_modules_ossl_ret_ = 1;
  return;
}

