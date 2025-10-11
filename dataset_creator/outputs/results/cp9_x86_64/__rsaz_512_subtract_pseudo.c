
void __rsaz_512_subtract(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                        ulong param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *unaff_RBP;
  ulong in_R10;
  ulong in_R11;
  ulong unaff_R12;
  ulong unaff_R13;
  ulong unaff_R14;
  ulong unaff_R15;
  
  *param_1 = param_5;
  param_1[1] = param_6;
  param_1[2] = in_R10;
  param_1[3] = in_R11;
  param_1[4] = unaff_R12;
  param_1[5] = unaff_R13;
  param_1[6] = unaff_R14;
  param_1[7] = unaff_R15;
  uVar1 = unaff_RBP[6];
  uVar2 = unaff_RBP[7];
  uVar4 = (ulong)CARRY8(-*unaff_RBP & param_4,*param_1);
  uVar10 = (~unaff_RBP[1] & param_4) + param_1[1];
  uVar5 = (ulong)(CARRY8(~unaff_RBP[1] & param_4,param_1[1]) || CARRY8(uVar10,uVar4));
  uVar11 = (~unaff_RBP[2] & param_4) + param_1[2];
  uVar6 = (ulong)(CARRY8(~unaff_RBP[2] & param_4,param_1[2]) || CARRY8(uVar11,uVar5));
  uVar12 = (~unaff_RBP[3] & param_4) + param_1[3];
  uVar7 = (ulong)(CARRY8(~unaff_RBP[3] & param_4,param_1[3]) || CARRY8(uVar12,uVar6));
  uVar13 = (~unaff_RBP[4] & param_4) + param_1[4];
  uVar8 = (ulong)(CARRY8(~unaff_RBP[4] & param_4,param_1[4]) || CARRY8(uVar13,uVar7));
  uVar14 = (~unaff_RBP[5] & param_4) + param_1[5];
  uVar9 = (ulong)(CARRY8(~unaff_RBP[5] & param_4,param_1[5]) || CARRY8(uVar14,uVar8));
  uVar3 = param_1[6];
  uVar15 = (~uVar1 & param_4) + param_1[6];
  *param_1 = (-*unaff_RBP & param_4) + *param_1;
  param_1[1] = uVar10 + uVar4;
  param_1[2] = uVar11 + uVar5;
  param_1[3] = uVar12 + uVar6;
  param_1[4] = uVar13 + uVar7;
  param_1[5] = uVar14 + uVar8;
  param_1[6] = uVar15 + uVar9;
  param_1[7] = (~uVar2 & param_4) + param_1[7] +
               (ulong)(CARRY8(~uVar1 & param_4,uVar3) || CARRY8(uVar15,uVar9));
  return;
}

