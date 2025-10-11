
undefined8 ossl_decoder_store_remove_all_provided(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_provider_libctx();
  lVar2 = ossl_lib_ctx_get_data(uVar1,0xb,decoder_store_method);
  if (lVar2 == 0) {
    return 1;
  }
  uVar1 = ossl_method_store_remove_all_provided(lVar2,param_1);
  return uVar1;
}

