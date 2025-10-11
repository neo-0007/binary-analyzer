
undefined8 SipHash_set_hash_size(long param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    uVar2 = *(uint *)(param_1 + 0x2c);
    uVar1 = (ulong)uVar2;
    param_2 = 0x10;
    if (uVar1 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0x10;
      return 1;
    }
  }
  else {
    if ((param_2 - 8 & 0xfffffffffffffff7) != 0) {
      return 0;
    }
    uVar2 = *(uint *)(param_1 + 0x2c);
    uVar1 = (ulong)uVar2;
    if (uVar1 == 0) {
      uVar2 = 0x10;
      uVar1 = 0x10;
    }
  }
  *(uint *)(param_1 + 0x2c) = uVar2;
  if (uVar1 == param_2) {
    return 1;
  }
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ 0xee;
  *(int *)(param_1 + 0x2c) = (int)param_2;
  return 1;
}

