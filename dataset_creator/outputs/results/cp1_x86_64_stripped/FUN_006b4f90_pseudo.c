
undefined8 * FUN_006b4f90(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (*(char *)(param_1 + 1) == '\0') {
    lVar1 = (**(code **)(*(long *)*param_1 + 0x60))();
    if (param_3 != lVar1) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return param_1;
}

