
long FUN_0061b5c0(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((int)param_2 == 0) {
      return *(long *)(param_1 + 0x10);
    }
    param_2 = (ulong)((int)param_2 - 1);
  }
  lVar1 = FUN_004364a0(*(undefined8 *)(param_1 + 8),param_2);
  return lVar1;
}

