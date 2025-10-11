
undefined8 BIO_meth_set_write_ex(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}

