
byte ossl_lib_ctx_is_child(void)

{
  long lVar1;
  
  lVar1 = ossl_lib_ctx_get_concrete();
  if (lVar1 != 0) {
    return *(byte *)(lVar1 + 0x1c0) & 1;
  }
  return 0;
}

