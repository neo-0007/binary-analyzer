
undefined8 FUN_005a8c60(long param_1,ulong param_2)

{
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) & ~param_2;
  return 1;
}

