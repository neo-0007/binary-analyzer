
void int_engine_module_finish(void)

{
  ENGINE *e;
  
  while( true ) {
    e = (ENGINE *)OPENSSL_sk_pop(initialized_engines);
    if (e == (ENGINE *)0x0) break;
    ENGINE_finish(e);
  }
  OPENSSL_sk_free(initialized_engines);
  initialized_engines = 0;
  return;
}

