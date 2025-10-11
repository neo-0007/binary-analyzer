
void engine_cleanup_add_last(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  
  if ((cleanup_stack != 0) || (cleanup_stack = OPENSSL_sk_new_null(), cleanup_stack != 0)) {
    ptr = (undefined8 *)CRYPTO_malloc(8,"../crypto/engine/eng_lib.c",0x80);
    if (ptr == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/engine/eng_lib.c",0x81,"int_cleanup_item");
      ERR_set_error(0x26,0xc0100,0);
      return;
    }
    *ptr = param_1;
    iVar1 = OPENSSL_sk_push(cleanup_stack,ptr);
    if (iVar1 < 1) {
      CRYPTO_free(ptr);
      return;
    }
  }
  return;
}

