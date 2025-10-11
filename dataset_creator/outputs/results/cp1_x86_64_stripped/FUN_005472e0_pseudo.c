
undefined8 FUN_005472e0(long param_1,long *param_2)

{
  if ((*(long *)(param_1 + 0x28) != 0) && (param_2 != (long *)0x0)) {
    *param_2 = *(long *)(param_1 + 0x18) - *(long *)(*(long *)(param_1 + 0x28) + 0x18);
    return 1;
  }
  return 0;
}

