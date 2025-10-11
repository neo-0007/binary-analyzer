
void FUN_005f8040(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  ulong *unaff_RBX;
  ulong in_R8;
  ulong uVar5;
  ulong uVar6;
  ulong in_R9;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_R12;
  long lVar9;
  ulong unaff_R13;
  ulong uVar10;
  ulong unaff_R14;
  ulong unaff_R15;
  
  lVar9 = unaff_R12 + *unaff_RBX;
  uVar8 = unaff_R13 + unaff_RBX[1];
  uVar10 = uVar8 + CARRY8(unaff_R12,*unaff_RBX);
  uVar8 = (ulong)(CARRY8(unaff_R13,unaff_RBX[1]) ||
                 CARRY8(uVar8,(ulong)CARRY8(unaff_R12,*unaff_RBX)));
  uVar6 = in_R8 + unaff_RBX[2];
  uVar5 = uVar6 + uVar8;
  uVar8 = (ulong)(CARRY8(in_R8,unaff_RBX[2]) || CARRY8(uVar6,uVar8));
  uVar6 = in_R9 + unaff_RBX[3];
  uVar7 = uVar6 + uVar8;
  uVar1 = (ulong)(uVar10 < unaff_R14 || uVar10 - unaff_R14 < (ulong)(lVar9 != -1));
  uVar2 = (ulong)(uVar5 < uVar1);
  bVar3 = (CARRY8(in_R9,unaff_RBX[3]) || CARRY8(uVar6,uVar8)) <
          (uVar7 < unaff_R15 || uVar7 - unaff_R15 < uVar2);
  uVar8 = (uVar10 - unaff_R14) - (ulong)(lVar9 != -1);
  lVar4 = lVar9 + 1;
  if (bVar3) {
    uVar8 = uVar10;
    lVar4 = lVar9;
  }
  *param_1 = lVar4;
  uVar6 = uVar5 - uVar1;
  if (bVar3) {
    uVar6 = uVar5;
  }
  param_1[1] = uVar8;
  uVar8 = (uVar7 - unaff_R15) - uVar2;
  if (bVar3) {
    uVar8 = uVar7;
  }
  param_1[2] = uVar6;
  param_1[3] = uVar8;
  return;
}

