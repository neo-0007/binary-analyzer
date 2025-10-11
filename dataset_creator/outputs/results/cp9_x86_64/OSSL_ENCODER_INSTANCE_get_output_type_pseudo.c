
undefined8 OSSL_ENCODER_INSTANCE_get_output_type(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  return 0;
}

