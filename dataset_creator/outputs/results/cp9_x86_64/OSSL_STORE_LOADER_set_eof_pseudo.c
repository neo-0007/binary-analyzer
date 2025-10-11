
undefined8 OSSL_STORE_LOADER_set_eof(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}

