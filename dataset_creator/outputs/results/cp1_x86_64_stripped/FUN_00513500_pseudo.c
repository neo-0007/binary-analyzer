
void FUN_00513500(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = ((long)param_2[3] >> 0x3f & 0x13U) + 0x13;
  uVar4 = *param_2 + uVar7;
  uVar7 = (ulong)CARRY8(*param_2,uVar7);
  uVar5 = param_2[1] + uVar7;
  uVar7 = (ulong)CARRY8(param_2[1],uVar7);
  uVar6 = param_2[2] + uVar7;
  uVar2 = (param_2[3] & 0x7fffffffffffffff) + (ulong)CARRY8(param_2[2],uVar7);
  uVar3 = ~((long)uVar2 >> 0x3f) & 0x13;
  uVar7 = (ulong)(uVar4 < uVar3);
  uVar1 = (ulong)(uVar5 < uVar7);
  *param_1 = uVar4 - uVar3;
  param_1[1] = uVar5 - uVar7;
  param_1[2] = uVar6 - uVar1;
  param_1[3] = (uVar2 & 0x7fffffffffffffff) - (ulong)(uVar6 < uVar1);
  return;
}

