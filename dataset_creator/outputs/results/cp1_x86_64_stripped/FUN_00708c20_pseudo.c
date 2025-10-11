
void FUN_00708c20(long param_1,ulong param_2,int param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_3 < 0) {
    param_3 = -1;
  }
  if ((long)param_3 == 0) {
    uVar1 = FUN_00401230(param_2,0);
  }
  else {
    uVar2 = (long)param_3 + param_2;
    uVar1 = 0xffffffffffffffff;
    if (param_2 < uVar2) {
      uVar1 = uVar2;
    }
  }
  FUN_007069a0(param_1,param_2,uVar1,0);
  uVar2 = param_2;
  uVar3 = param_2;
  if (param_4 != 0) {
    uVar2 = uVar1;
    uVar1 = param_4;
    uVar3 = param_4;
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(ulong *)(param_1 + 8) = param_2;
  *(ulong *)(param_1 + 0x10) = uVar1;
  *(ulong *)(param_1 + 0x18) = param_2;
  *(ulong *)(param_1 + 0x20) = param_2;
  *(ulong *)(param_1 + 0x28) = uVar3;
  *(ulong *)(param_1 + 0x30) = uVar2;
  return;
}

