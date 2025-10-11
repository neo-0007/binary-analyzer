
void FUN_004c4ae0(undefined8 param_1,long *param_2,ulong *param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_RAX;
  ulong uVar6;
  ulong *unaff_RBP;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar6 = -in_RAX;
  param_6 = param_6 >> 5;
  uVar8 = *unaff_RBP - 1;
  uVar9 = unaff_RBP[1];
  lVar7 = 0;
  uVar10 = unaff_RBP[2];
  uVar11 = unaff_RBP[3];
  while( true ) {
    uVar2 = (~uVar8 & uVar6) + *param_3;
    uVar8 = (ulong)(CARRY8(~uVar8 & uVar6,*param_3) || CARRY8(uVar2,(ulong)(lVar7 != 0)));
    uVar3 = (~uVar9 & uVar6) + param_3[1];
    uVar1 = (ulong)(CARRY8(~uVar9 & uVar6,param_3[1]) || CARRY8(uVar3,uVar8));
    uVar4 = (~uVar10 & uVar6) + param_3[2];
    uVar10 = (ulong)(CARRY8(~uVar10 & uVar6,param_3[2]) || CARRY8(uVar4,uVar1));
    uVar9 = param_3[3];
    uVar5 = (~uVar11 & uVar6) + param_3[3];
    *param_2 = uVar2 + (lVar7 != 0);
    param_3 = param_3 + 4;
    param_2[1] = uVar3 + uVar8;
    lVar7 = -(ulong)(CARRY8(~uVar11 & uVar6,uVar9) || CARRY8(uVar5,uVar10));
    param_2[2] = uVar4 + uVar1;
    param_2[3] = uVar5 + uVar10;
    param_2 = param_2 + 4;
    param_6 = param_6 + 1;
    if (param_6 == 0) break;
    uVar8 = unaff_RBP[4];
    uVar9 = unaff_RBP[5];
    uVar10 = unaff_RBP[6];
    uVar11 = unaff_RBP[7];
    unaff_RBP = unaff_RBP + 4;
  }
  return;
}

