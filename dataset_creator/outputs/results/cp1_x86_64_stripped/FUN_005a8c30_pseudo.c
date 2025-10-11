
undefined8 FUN_005a8c30(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18) | param_2;
  if ((param_2 & 0x780) != 0) {
    uVar1 = uVar1 | 0x80;
  }
  *(ulong *)(param_1 + 0x18) = uVar1;
  return 1;
}

