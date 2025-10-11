
undefined1 * __memset_erms(undefined1 *param_1,undefined1 param_2,long param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  if (param_3 != 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *puVar1 = param_2;
      puVar1 = puVar1 + 1;
    }
    return param_1;
  }
  return param_1;
}

