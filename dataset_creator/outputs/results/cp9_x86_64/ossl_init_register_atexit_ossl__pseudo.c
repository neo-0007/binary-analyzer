
void ossl_init_register_atexit_ossl_(void)

{
  int iVar1;
  
  iVar1 = atexit(OPENSSL_cleanup);
  ossl_init_register_atexit_ossl_ret_ = (uint)(iVar1 == 0);
  return;
}

