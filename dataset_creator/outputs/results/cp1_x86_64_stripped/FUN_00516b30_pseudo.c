
undefined8 FUN_00516b30(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x30) = param_2;
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/encode_decode/encoder_lib.c",0x155,"OSSL_ENCODER_CTX_set_construct_data");
  FUN_0051f8f0(0x3b,0xc0102,0);
  return 0;
}

