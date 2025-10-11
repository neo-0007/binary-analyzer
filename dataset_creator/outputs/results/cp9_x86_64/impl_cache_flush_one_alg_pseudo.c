
void impl_cache_flush_one_alg(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *param_3 = uVar1;
  OPENSSL_LH_doall_arg(uVar1,impl_cache_flush_cache);
  return;
}

