
undefined4 OSSL_ENCODER_CTX_set_params(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    ERR_new();
    uVar6 = 0;
    ERR_set_debug("../crypto/encode_decode/encoder_meth.c",0x282,"OSSL_ENCODER_CTX_set_params");
    ERR_set_error(0x3b,0xc0102,0);
  }
  else {
    uVar6 = 1;
    if (*(long *)(param_1 + 0x18) != 0) {
      iVar1 = OSSL_ENCODER_CTX_get_num_encoders();
      if ((long)iVar1 != 0) {
        uVar7 = 0;
        do {
          uVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x18),uVar7 & 0xffffffff);
          lVar4 = OSSL_ENCODER_INSTANCE_get_encoder(uVar3);
          lVar5 = OSSL_ENCODER_INSTANCE_get_encoder_ctx(uVar3);
          if ((lVar5 != 0) && (*(code **)(lVar4 + 0x58) != (code *)0x0)) {
            iVar2 = (**(code **)(lVar4 + 0x58))(lVar5,param_2);
            if (iVar2 == 0) {
              uVar6 = 0;
            }
          }
          uVar7 = uVar7 + 1;
        } while ((long)iVar1 != uVar7);
      }
    }
  }
  return uVar6;
}

