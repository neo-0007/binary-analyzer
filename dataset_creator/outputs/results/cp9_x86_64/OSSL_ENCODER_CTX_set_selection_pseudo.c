
undefined8 OSSL_ENCODER_CTX_set_selection(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/encode_decode/encoder_lib.c",0x91,"OSSL_ENCODER_CTX_set_selection");
    ERR_set_error(0x3b,0xc0102,0);
    uVar1 = 0;
  }
  else {
    if (param_2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/encode_decode/encoder_lib.c",0x96,"OSSL_ENCODER_CTX_set_selection");
      ERR_set_error(0x3b,0x80106,0);
      return 0;
    }
    *param_1 = param_2;
    uVar1 = 1;
  }
  return uVar1;
}

