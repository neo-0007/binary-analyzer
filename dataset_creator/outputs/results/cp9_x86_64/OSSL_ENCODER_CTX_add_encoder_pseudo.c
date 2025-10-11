
undefined8 OSSL_ENCODER_CTX_add_encoder(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/encode_decode/encoder_lib.c",0x120,"OSSL_ENCODER_CTX_add_encoder");
    ERR_set_error(0x3b,0xc0102,0);
    return 0;
  }
  uVar2 = OSSL_ENCODER_get0_provider(param_2);
  uVar2 = OSSL_PROVIDER_get0_provider_ctx(uVar2);
  lVar3 = (**(code **)(param_2 + 0x38))(uVar2);
  if (lVar3 == 0) {
    ossl_encoder_instance_free(0);
    return 0;
  }
  plVar4 = (long *)CRYPTO_zalloc(0x20,"../crypto/encode_decode/encoder_lib.c",0xc4);
  if (plVar4 == (long *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/encode_decode/encoder_lib.c",0xc5,"ossl_encoder_instance_new");
    ERR_set_error(0x3b,0xc0100,0);
  }
  else {
    iVar1 = OSSL_ENCODER_up_ref(param_2);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/encode_decode/encoder_lib.c",0xca,"ossl_encoder_instance_new");
      ERR_set_error(0x3b,0xc0103,0);
    }
    else {
      uVar2 = OSSL_ENCODER_get0_provider(param_2);
      uVar2 = ossl_provider_libctx(uVar2);
      lVar5 = ossl_encoder_parsed_properties(param_2);
      if (lVar5 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/encode_decode/encoder_lib.c",0xd2,"ossl_encoder_instance_new");
        uVar2 = OSSL_ENCODER_get0_name(param_2);
        ERR_set_error(0x3c,0x8010e,"there are no property definitions with encoder %s",uVar2);
      }
      else {
        uVar6 = ossl_property_find_property(lVar5,uVar2,"output");
        lVar7 = ossl_property_get_string_value(uVar2,uVar6);
        plVar4[2] = lVar7;
        if (lVar7 != 0) {
          lVar5 = ossl_property_find_property(lVar5,uVar2,"structure");
          if (lVar5 != 0) {
            lVar5 = ossl_property_get_string_value(uVar2,lVar5);
            plVar4[3] = lVar5;
          }
          lVar5 = *(long *)(param_1 + 0x18);
          *plVar4 = param_2;
          plVar4[1] = lVar3;
          if (lVar5 == 0) {
            lVar5 = OPENSSL_sk_new_null();
            *(long *)(param_1 + 0x18) = lVar5;
            if (lVar5 == 0) {
              ERR_new(0);
              ERR_set_debug("../crypto/encode_decode/encoder_lib.c",0x106,
                            "ossl_encoder_ctx_add_encoder_inst");
              ERR_set_error(0x3b,0xc0100,0);
              goto LAB_005ef649;
            }
          }
          iVar1 = OPENSSL_sk_push(lVar5,plVar4);
          if (0 < iVar1) {
            return 1;
          }
LAB_005ef649:
          ossl_encoder_instance_free(plVar4);
          return 0;
        }
        ERR_new();
        ERR_set_debug("../crypto/encode_decode/encoder_lib.c",0xdc,"ossl_encoder_instance_new");
        uVar2 = OSSL_ENCODER_get0_properties(param_2);
        uVar6 = OSSL_ENCODER_get0_name(param_2);
        ERR_set_error(0x3c,0x8010e,
                      "the mandatory \'output\' property is missing for encoder %s (properties: %s)"
                      ,uVar6,uVar2);
      }
    }
    ossl_encoder_instance_free(plVar4);
  }
  ossl_encoder_instance_free(0);
  (**(code **)(param_2 + 0x40))(lVar3);
  return 0;
}

