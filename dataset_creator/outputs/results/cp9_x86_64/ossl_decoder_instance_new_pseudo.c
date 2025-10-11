
long * ossl_decoder_instance_new(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0xde,"ossl_decoder_instance_new");
    ERR_set_error(0x3c,0xc0102,0);
  }
  else {
    plVar2 = (long *)CRYPTO_zalloc(0x28,"../crypto/encode_decode/decoder_lib.c",0xe2);
    if (plVar2 == (long *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0xe3,"ossl_decoder_instance_new");
      ERR_set_error(0x3c,0xc0100,0);
    }
    else {
      iVar1 = OSSL_DECODER_up_ref(param_1);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0xe7,"ossl_decoder_instance_new");
        ERR_set_error(0x3c,0xc0103,0);
      }
      else {
        uVar3 = OSSL_DECODER_get0_provider(param_1);
        uVar3 = ossl_provider_libctx(uVar3);
        lVar4 = ossl_decoder_parsed_properties(param_1);
        if (lVar4 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0xef,"ossl_decoder_instance_new");
          uVar3 = OSSL_DECODER_get0_name(param_1);
          ERR_set_error(0x3c,0x8010e,"there are no property definitions with decoder %s",uVar3);
        }
        else {
          uVar5 = ossl_property_find_property(lVar4,uVar3,"input");
          lVar6 = ossl_property_get_string_value(uVar3,uVar5);
          plVar2[2] = lVar6;
          if (lVar6 != 0) {
            lVar4 = ossl_property_find_property(lVar4,uVar3,"structure");
            if (lVar4 != 0) {
              lVar4 = ossl_property_get_string_value(uVar3,lVar4);
              plVar2[3] = lVar4;
            }
            *plVar2 = param_1;
            plVar2[1] = param_2;
            return plVar2;
          }
          ERR_new();
          ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0xf9,"ossl_decoder_instance_new");
          uVar3 = OSSL_DECODER_get0_properties(param_1);
          uVar5 = OSSL_DECODER_get0_name(param_1);
          ERR_set_error(0x3c,0x8010e,
                        "the mandatory \'input\' property is missing for decoder %s (properties: %s)"
                        ,uVar5,uVar3);
        }
      }
      ossl_decoder_instance_free(plVar2);
    }
  }
  return (long *)0x0;
}

