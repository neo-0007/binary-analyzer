
void FUN_0041f680(long param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  if ((int)uVar2 < 0) {
    FUN_0051f640(2,uVar2 & 0x7fffffff);
    return;
  }
  uVar1 = (param_2 & 0xffffffff) >> 0x17;
  if ((uVar1 & 0xff) != 0) {
    FUN_0051f640((uint)uVar1 & 0xff,uVar2 & 0x7fffff);
    return;
  }
  FUN_0051f640(*(undefined4 *)(param_1 + 0x60));
  return;
}

