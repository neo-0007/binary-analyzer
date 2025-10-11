
undefined8 OSSL_PARAM_set_octet_ptr(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((param_1 != 0) && (*(undefined8 *)(param_1 + 0x20) = param_3, *(int *)(param_1 + 8) == 7)) {
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x10) = param_2;
    }
    return 1;
  }
  return 0;
}

