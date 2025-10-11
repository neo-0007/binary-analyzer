
undefined8 ossl_property_get_number_value(long param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 4) == 1)) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  return 0;
}

