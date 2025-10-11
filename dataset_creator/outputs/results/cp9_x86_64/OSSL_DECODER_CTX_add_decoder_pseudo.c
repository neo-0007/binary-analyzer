
undefined4 OSSL_DECODER_CTX_add_decoder(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0x13e,"OSSL_DECODER_CTX_add_decoder");
    ERR_set_error(0x3c,0xc0102,0);
    return 0;
  }
  uVar3 = OSSL_DECODER_get0_provider(param_2);
  uVar3 = OSSL_PROVIDER_get0_provider_ctx(uVar3);
  lVar4 = (**(code **)(param_2 + 0x38))(uVar3);
  if (lVar4 == 0) {
    ossl_decoder_instance_free(0);
    uVar2 = 0;
  }
  else {
    lVar5 = ossl_decoder_instance_new(param_2,lVar4);
    if (lVar5 == 0) {
      ossl_decoder_instance_free(0);
      (**(code **)(param_2 + 0x40))(lVar4);
      return 0;
    }
    iVar1 = ossl_decoder_ctx_add_decoder_inst(param_1,lVar5);
    if (iVar1 == 0) {
      ossl_decoder_instance_free(lVar5);
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

