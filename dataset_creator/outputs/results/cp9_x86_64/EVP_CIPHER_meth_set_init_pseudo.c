
undefined8 EVP_CIPHER_meth_set_init(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}

