
long FUN_0061b500(long param_1,int param_2)

{
  if (((param_1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(param_1 + 0x18))) {
    return (long)param_2 * 0x20 + *(long *)(param_1 + 0x10);
  }
  return 0;
}

