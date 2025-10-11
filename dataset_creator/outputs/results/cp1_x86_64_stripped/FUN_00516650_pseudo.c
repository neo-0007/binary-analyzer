
undefined8 FUN_00516650(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(long *)(param_1 + 8) = param_2;
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/encode_decode/encoder_lib.c",0xa2,"OSSL_ENCODER_CTX_set_output_type");
  FUN_0051f8f0(0x3b,0xc0102,0);
  return 0;
}

