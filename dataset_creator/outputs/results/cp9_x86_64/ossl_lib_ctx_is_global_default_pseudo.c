
bool ossl_lib_ctx_is_global_default(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)ossl_lib_ctx_get_concrete();
  return puVar1 == default_context_int;
}

