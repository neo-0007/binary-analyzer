
void FUN_005f91e0(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong *unaff_RBX;
  ulong in_R8;
  ulong uVar4;
  ulong in_R9;
  long lVar5;
  long lVar6;
  ulong unaff_R12;
  ulong unaff_R13;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_R14;
  long unaff_R15;
  bool bVar9;
  
  lVar6 = unaff_R12 - *unaff_RBX;
  uVar1 = unaff_R13 - unaff_RBX[1];
  uVar7 = uVar1 - (unaff_R12 < *unaff_RBX);
  uVar1 = (ulong)(unaff_R13 < unaff_RBX[1] || uVar1 < (unaff_R12 < *unaff_RBX));
  uVar8 = in_R8 - unaff_RBX[2];
  uVar4 = uVar8 - uVar1;
  uVar1 = (ulong)(in_R8 < unaff_RBX[2] || uVar8 < uVar1);
  bVar9 = unaff_RBX[3] <= in_R9;
  in_R9 = in_R9 - unaff_RBX[3];
  bVar2 = uVar1 <= in_R9;
  lVar5 = in_R9 - uVar1;
  uVar1 = (ulong)(CARRY8(uVar7,unaff_R14) || CARRY8(uVar7 + unaff_R14,(ulong)(lVar6 != 0)));
  uVar8 = uVar7 + unaff_R14 + (ulong)(lVar6 != 0);
  lVar3 = lVar6 + -1;
  if (bVar9 && bVar2) {
    uVar8 = uVar7;
    lVar3 = lVar6;
  }
  *param_1 = lVar3;
  uVar7 = uVar4 + uVar1;
  if (bVar9 && bVar2) {
    uVar7 = uVar4;
  }
  param_1[1] = uVar8;
  lVar6 = lVar5 + unaff_R15 + (ulong)CARRY8(uVar4,uVar1);
  if (bVar9 && bVar2) {
    lVar6 = lVar5;
  }
  param_1[2] = uVar7;
  param_1[3] = lVar6;
  return;
}

