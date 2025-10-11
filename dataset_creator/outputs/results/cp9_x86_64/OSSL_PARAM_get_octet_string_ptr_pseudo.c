
undefined8 OSSL_PARAM_get_octet_string_ptr(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = OSSL_PARAM_get_octet_ptr();
  if ((int)uVar1 == 0) {
    if (((param_2 != (undefined8 *)0x0) && (param_1 != 0)) && (*(int *)(param_1 + 8) == 5)) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = *(undefined8 *)(param_1 + 0x18);
      }
      *param_2 = *(undefined8 *)(param_1 + 0x10);
      return 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

