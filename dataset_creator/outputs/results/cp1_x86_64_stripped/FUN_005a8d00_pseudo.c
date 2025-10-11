
void FUN_005a8d00(long param_1,undefined8 param_2)

{
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 2;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}

