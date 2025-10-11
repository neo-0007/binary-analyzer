
undefined8 FUN_0041e220(long param_1,long param_2,ulong param_3)

{
  if (param_1 != 0) {
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      return 0;
    }
    *(ulong *)(param_1 + 0x20) = param_3;
    if (*(long *)(param_1 + 0x10) == 0) {
      return 1;
    }
    if ((*(int *)(param_1 + 8) == 5) && (param_3 <= *(ulong *)(param_1 + 0x18))) {
      thunk_FUN_00713a50(*(long *)(param_1 + 0x10));
      return 1;
    }
  }
  return 0;
}

