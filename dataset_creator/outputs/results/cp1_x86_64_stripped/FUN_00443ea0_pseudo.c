
undefined8 FUN_00443ea0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  if (param_4 < *(ulong *)(param_1 + 0x28)) {
    return 1;
  }
  FUN_00495600(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),
               *(byte *)(param_1 + 0x3c) >> 1 & 1);
  return 1;
}

