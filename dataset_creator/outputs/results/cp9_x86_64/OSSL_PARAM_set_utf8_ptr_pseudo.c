
undefined8 OSSL_PARAM_set_utf8_ptr(long param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    sVar1 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (param_2 != (char *)0x0) {
      sVar1 = strlen(param_2);
    }
    *(size_t *)(param_1 + 0x20) = sVar1;
    uVar2 = 0;
    if (*(int *)(param_1 + 8) == 6) {
      uVar2 = 1;
      if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = param_2;
      }
    }
    return uVar2;
  }
  return 0;
}

