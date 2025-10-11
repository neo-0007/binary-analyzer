
void FUN_00513440(long *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *param_2 + *param_3;
  uVar1 = (ulong)CARRY8(*param_2,*param_3);
  uVar2 = param_2[1] + param_3[1];
  uVar5 = uVar2 + uVar1;
  uVar1 = (ulong)(CARRY8(param_2[1],param_3[1]) || CARRY8(uVar2,uVar1));
  uVar2 = param_2[2] + param_3[2];
  uVar6 = uVar2 + uVar1;
  uVar1 = (ulong)(CARRY8(param_2[2],param_3[2]) || CARRY8(uVar2,uVar1));
  uVar2 = param_2[3] + param_3[3];
  uVar7 = uVar2 + uVar1;
  uVar3 = -(ulong)(CARRY8(param_2[3],param_3[3]) || CARRY8(uVar2,uVar1)) & 0x26;
  uVar1 = (ulong)CARRY8(uVar4,uVar3);
  uVar2 = (ulong)CARRY8(uVar5,uVar1);
  param_1[1] = uVar5 + uVar1;
  uVar1 = (ulong)CARRY8(uVar6,uVar2);
  param_1[2] = uVar6 + uVar2;
  param_1[3] = uVar7 + uVar1;
  *param_1 = uVar4 + uVar3 + (-(ulong)CARRY8(uVar7,uVar1) & 0x26);
  return;
}

