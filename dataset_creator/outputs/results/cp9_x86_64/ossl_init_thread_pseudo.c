
bool ossl_init_thread(void)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_init_local(&destructor_key,init_thread_destructor);
  return iVar1 != 0;
}

