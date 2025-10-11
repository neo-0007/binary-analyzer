
void FUN_0052a460(long param_1,long param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((ulong)*(uint *)(param_1 + 0x5c) == 0) {
    uVar4 = (uint)param_3;
    param_3 = param_3 & 0xffffffffffffffc0;
  }
  else {
    uVar5 = 0x40 - (ulong)*(uint *)(param_1 + 0x5c);
    if (param_3 < uVar5) {
      uVar5 = param_3;
    }
    FUN_00434550(param_1,param_2,uVar5);
    uVar4 = (uint)(param_3 - uVar5);
    param_3 = param_3 - uVar5 & 0xffffffffffffffc0;
    param_2 = param_2 + uVar5;
  }
  if (param_3 != 0) {
    FUN_00578400(param_1,param_2,param_3 >> 6);
    puVar1 = (uint *)(param_1 + 0x14);
    uVar2 = *puVar1;
    uVar3 = (uint)(param_3 << 3);
    *puVar1 = *puVar1 + uVar3;
    *(int *)(param_1 + 0x18) =
         *(int *)(param_1 + 0x18) + (int)(param_3 >> 0x1d) + (uint)CARRY4(uVar2,uVar3);
    param_2 = param_2 + param_3;
  }
  if ((uVar4 & 0x3f) != 0) {
    FUN_00434550(param_1,param_2,uVar4 & 0x3f);
    return;
  }
  return;
}

