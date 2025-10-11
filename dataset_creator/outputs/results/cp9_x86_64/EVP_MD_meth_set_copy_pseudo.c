
undefined8 EVP_MD_meth_set_copy(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return 1;
}

