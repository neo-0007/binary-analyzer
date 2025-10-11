
undefined8 FUN_00513650(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = param_2;
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0xb8,"OSSL_DECODER_CTX_set_input_type");
  FUN_0051f8f0(0x3c,0xc0102,0);
  return 0;
}

