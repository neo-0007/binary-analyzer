
undefined8 FUN_0041dc20(long param_1,long *param_2)

{
  long lVar1;
  
  if (((param_2 != (long *)0x0) && (param_1 != 0)) && (*(int *)(param_1 + 8) == 2)) {
    lVar1 = thunk_FUN_004b8810(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                               *param_2);
    if (lVar1 != 0) {
      *param_2 = lVar1;
      return 1;
    }
    return 0;
  }
  return 0;
}

