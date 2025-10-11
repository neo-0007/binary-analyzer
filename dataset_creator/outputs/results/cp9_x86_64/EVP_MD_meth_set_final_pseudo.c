
undefined8 EVP_MD_meth_set_final(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return 1;
}

