
long ossl_lib_ctx_get_ex_data_global(void)

{
  long lVar1;
  
  lVar1 = ossl_lib_ctx_get_concrete();
  if (lVar1 != 0) {
    lVar1 = lVar1 + 0x18;
  }
  return lVar1;
}

