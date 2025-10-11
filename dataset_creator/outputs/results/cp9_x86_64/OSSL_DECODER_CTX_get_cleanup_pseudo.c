
undefined8 OSSL_DECODER_CTX_get_cleanup(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x28);
  }
  return 0;
}

