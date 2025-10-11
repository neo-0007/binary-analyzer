
undefined8 FUN_005136b0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/encode_decode/decoder_lib.c",200,"OSSL_DECODER_CTX_set_input_structure");
  FUN_0051f8f0(0x3c,0xc0102,0);
  return 0;
}

