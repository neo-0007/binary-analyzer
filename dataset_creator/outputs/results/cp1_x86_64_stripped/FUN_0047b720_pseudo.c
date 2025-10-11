
ulong FUN_0047b720(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (param_5 <= *(ulong *)(param_1 + 0x28)) {
    uVar1 = param_5;
  }
  return uVar1;
}

