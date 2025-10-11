
undefined8 OSSL_DECODER_CTX_get_construct_data(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x30);
  }
  return 0;
}

