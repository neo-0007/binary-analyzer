
undefined8 BIO_meth_set_read_ex(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}

