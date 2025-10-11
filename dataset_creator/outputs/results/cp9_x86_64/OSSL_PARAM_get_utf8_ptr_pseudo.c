
undefined8 OSSL_PARAM_get_utf8_ptr(long param_1,undefined8 *param_2)

{
  if (((param_2 != (undefined8 *)0x0) && (param_1 != 0)) && (*(int *)(param_1 + 8) == 6)) {
    *param_2 = **(undefined8 **)(param_1 + 0x10);
    return 1;
  }
  return 0;
}

