
undefined8 FUN_0041e380(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (param_2 != 0) {
      uVar1 = thunk_FUN_007129d0(param_2);
    }
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    uVar1 = 0;
    if (*(int *)(param_1 + 8) == 6) {
      uVar1 = 1;
      if (*(long **)(param_1 + 0x10) != (long *)0x0) {
        **(long **)(param_1 + 0x10) = param_2;
      }
    }
    return uVar1;
  }
  return 0;
}

