
void FUN_00565340(ulong *param_1,long *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_1[1] >> 0x14;
  uVar2 = param_1[1] << 0x2c;
  uVar3 = param_1[2] * 0x1000000;
  uVar4 = *param_1 + uVar2;
  uVar2 = (ulong)CARRY8(*param_1,uVar2);
  uVar1 = uVar5 + uVar3;
  uVar6 = uVar1 + uVar2;
  if ((param_1[2] >> 0x28) + (ulong)(CARRY8(uVar5,uVar3) || CARRY8(uVar1,uVar2)) +
      (ulong)CARRY8(uVar6,(ulong)(0xfffffffffffffffa < uVar4)) >> 2 != 0) {
    uVar6 = uVar6 + (0xfffffffffffffffa < uVar4);
    uVar4 = uVar4 + 5;
  }
  uVar2 = *param_3;
  uVar1 = param_3[1];
  *param_2 = uVar4 + *param_3;
  param_2[1] = uVar6 + uVar1 + (ulong)CARRY8(uVar4,uVar2);
  return;
}

