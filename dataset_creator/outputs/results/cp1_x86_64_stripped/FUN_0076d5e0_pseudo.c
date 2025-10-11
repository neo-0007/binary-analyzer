
void FUN_0076d5e0(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  do {
    lVar1 = *(long *)(param_1 + 0x28);
    FUN_007104f0(*(undefined8 *)(param_1 + 0x20));
    FUN_007104f0(param_1);
    param_1 = lVar1;
  } while (lVar1 != 0);
  return;
}

