
bool ossl_decoder_ctx_add_decoder_inst(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *(long *)(param_1 + 0x18) = lVar2;
    if (lVar2 == 0) {
      ERR_new(0,param_2);
      ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0x124,
                    "ossl_decoder_ctx_add_decoder_inst");
      ERR_set_error(0x3c,0xc0100,0);
      return false;
    }
  }
  iVar1 = OPENSSL_sk_push();
  return 0 < iVar1;
}

