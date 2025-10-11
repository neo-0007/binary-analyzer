
void FUN_005623c0(ulong *param_1,long *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  if (param_1[2] + (ulong)CARRY8(uVar4,(ulong)(0xfffffffffffffffa < uVar1)) >> 2 != 0) {
    uVar4 = uVar4 + (0xfffffffffffffffa < uVar1);
    uVar1 = uVar1 + 5;
  }
  uVar2 = *param_3;
  uVar3 = param_3[1];
  *param_2 = uVar1 + *param_3;
  param_2[1] = uVar4 + uVar3 + (ulong)CARRY8(uVar1,uVar2);
  return;
}

