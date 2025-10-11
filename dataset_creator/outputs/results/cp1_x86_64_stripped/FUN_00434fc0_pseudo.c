
undefined8 FUN_00434fc0(long param_1,undefined1 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = (800 - param_3) * 2;
  if (0x547 < uVar1) {
    return 0;
  }
  FUN_00434f70();
  *(ulong *)(param_1 + 200) = uVar1 >> 3;
  *(ulong *)(param_1 + 0xd0) = param_3 >> 3;
  *(undefined1 *)(param_1 + 0x188) = param_2;
  return 1;
}

