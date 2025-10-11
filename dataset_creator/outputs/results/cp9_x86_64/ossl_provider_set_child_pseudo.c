
undefined8 ossl_provider_set_child(long param_1,undefined8 param_2)

{
  *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) | 1;
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  return 1;
}

