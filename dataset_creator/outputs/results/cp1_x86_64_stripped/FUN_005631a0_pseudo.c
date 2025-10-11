
void FUN_005631a0(ulong *param_1,long *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(uint *)((long)param_1 + 0x14) == 0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if (param_1[2] + (ulong)CARRY8(uVar2,(ulong)(0xfffffffffffffffa < uVar1)) >> 2 != 0) {
      uVar2 = uVar2 + (0xfffffffffffffffa < uVar1);
      uVar1 = uVar1 + 5;
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    *param_2 = uVar1 + *param_3;
    param_2[1] = uVar2 + uVar4 + (ulong)CARRY8(uVar1,uVar3);
    return;
  }
  uVar2 = (ulong)(uint)param_1[1] << 0x34;
  uVar1 = (ulong)(uint)*param_1 + (ulong)*(uint *)((long)param_1 + 4) * 0x4000000;
  uVar3 = uVar2 + uVar1;
  uVar2 = (ulong)((uint)param_1[1] >> 0xc) + (ulong)CARRY8(uVar2,uVar1) +
          (ulong)*(uint *)((long)param_1 + 0xc) * 0x4000;
  uVar1 = (ulong)(uint)param_1[2] << 0x28;
  uVar4 = uVar2 + uVar1;
  uVar5 = (ulong)((uint)param_1[2] >> 0x18) + (ulong)CARRY8(uVar2,uVar1);
  uVar1 = (uVar5 >> 2) + (uVar5 & 0xfffffffffffffffc);
  uVar2 = uVar3 + uVar1;
  uVar1 = (ulong)CARRY8(uVar3,uVar1);
  uVar3 = uVar4 + uVar1;
  if ((uVar5 & 3) + (ulong)CARRY8(uVar4,uVar1) +
      (ulong)CARRY8(uVar3,(ulong)(0xfffffffffffffffa < uVar2)) >> 2 != 0) {
    uVar3 = uVar3 + (0xfffffffffffffffa < uVar2);
    uVar2 = uVar2 + 5;
  }
  uVar1 = *param_3;
  uVar4 = param_3[1];
  *param_2 = uVar2 + *param_3;
  param_2[1] = uVar3 + uVar4 + (ulong)CARRY8(uVar2,uVar1);
  return;
}

