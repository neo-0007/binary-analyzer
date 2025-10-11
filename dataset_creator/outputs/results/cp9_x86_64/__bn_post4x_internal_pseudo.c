
void __bn_post4x_internal(undefined8 param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_RAX;
  ulong uVar6;
  ulong *puVar7;
  ulong *unaff_RBP;
  long in_R9;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  puVar7 = (ulong *)(param_3 + in_R9);
  uVar6 = -in_RAX;
  in_R9 = in_R9 >> 5;
  uVar9 = *unaff_RBP - 1;
  lVar8 = 0;
  uVar10 = unaff_RBP[1];
  uVar11 = unaff_RBP[2];
  uVar12 = unaff_RBP[3];
  while( true ) {
    uVar2 = (~uVar9 & uVar6) + *puVar7;
    uVar9 = (ulong)(CARRY8(~uVar9 & uVar6,*puVar7) || CARRY8(uVar2,(ulong)(lVar8 != 0)));
    uVar3 = (~uVar10 & uVar6) + puVar7[1];
    uVar1 = (ulong)(CARRY8(~uVar10 & uVar6,puVar7[1]) || CARRY8(uVar3,uVar9));
    uVar4 = (~uVar11 & uVar6) + puVar7[2];
    uVar11 = (ulong)(CARRY8(~uVar11 & uVar6,puVar7[2]) || CARRY8(uVar4,uVar1));
    uVar10 = puVar7[3];
    uVar5 = (~uVar12 & uVar6) + puVar7[3];
    *param_2 = uVar2 + (lVar8 != 0);
    puVar7 = puVar7 + 4;
    param_2[1] = uVar3 + uVar9;
    lVar8 = -(ulong)(CARRY8(~uVar12 & uVar6,uVar10) || CARRY8(uVar5,uVar11));
    param_2[2] = uVar4 + uVar1;
    param_2[3] = uVar5 + uVar11;
    param_2 = param_2 + 4;
    in_R9 = in_R9 + 1;
    if (in_R9 == 0) break;
    uVar9 = unaff_RBP[4];
    uVar10 = unaff_RBP[5];
    uVar11 = unaff_RBP[6];
    uVar12 = unaff_RBP[7];
    unaff_RBP = unaff_RBP + 4;
  }
  return;
}

