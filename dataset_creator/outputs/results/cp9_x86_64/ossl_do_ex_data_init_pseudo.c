
bool ossl_do_ex_data_init(void)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  plVar1 = (long *)ossl_lib_ctx_get_ex_data_global();
  bVar3 = false;
  if (plVar1 != (long *)0x0) {
    lVar2 = CRYPTO_THREAD_lock_new();
    bVar3 = lVar2 != 0;
    *plVar1 = lVar2;
  }
  return bVar3;
}

