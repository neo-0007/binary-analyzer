
undefined8 EVP_MD_meth_set_cleanup(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}

