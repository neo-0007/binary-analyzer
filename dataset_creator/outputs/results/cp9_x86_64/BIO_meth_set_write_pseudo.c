
undefined8 BIO_meth_set_write(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(code **)(param_1 + 0x10) = bwrite_conv;
  return 1;
}

