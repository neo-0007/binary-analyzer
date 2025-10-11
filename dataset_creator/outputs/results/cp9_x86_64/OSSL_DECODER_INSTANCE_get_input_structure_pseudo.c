
undefined8 OSSL_DECODER_INSTANCE_get_input_structure(long param_1,uint *param_2)

{
  if (param_1 != 0) {
    *param_2 = *(byte *)(param_1 + 0x20) & 1;
    return *(undefined8 *)(param_1 + 0x18);
  }
  return 0;
}

