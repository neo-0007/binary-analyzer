
void engine_cleanup_add_first(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if (cleanup_stack == 0) {
    cleanup_stack = OPENSSL_sk_new_null();
    if (cleanup_stack == 0) {
      return;
    }
  }
  puVar1 = (undefined8 *)CRYPTO_malloc(8,"../crypto/engine/eng_lib.c",0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    OPENSSL_sk_insert(cleanup_stack,puVar1,0);
    return;
  }
  ERR_new();
  ERR_set_debug("../crypto/engine/eng_lib.c",0x81,"int_cleanup_item");
  ERR_set_error(0x26,0xc0100,0);
  return;
}

