
void impl_cache_flush_alg(undefined8 param_1,long param_2)

{
  OPENSSL_LH_doall(*(undefined8 *)(param_2 + 0x10),impl_cache_free);
  OPENSSL_LH_flush(*(undefined8 *)(param_2 + 0x10));
  return;
}

