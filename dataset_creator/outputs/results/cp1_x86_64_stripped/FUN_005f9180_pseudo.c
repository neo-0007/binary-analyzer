
void FUN_005f9180(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  ulong *unaff_RBX;
  ulong in_R8;
  ulong uVar6;
  ulong uVar7;
  ulong in_R9;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_R12;
  ulong unaff_R13;
  ulong uVar10;
  ulong unaff_R14;
  ulong unaff_R15;
  
  lVar1 = unaff_R12 + *unaff_RBX;
  uVar9 = unaff_R13 + unaff_RBX[1];
  uVar10 = uVar9 + CARRY8(unaff_R12,*unaff_RBX);
  uVar9 = (ulong)(CARRY8(unaff_R13,unaff_RBX[1]) ||
                 CARRY8(uVar9,(ulong)CARRY8(unaff_R12,*unaff_RBX)));
  uVar7 = in_R8 + unaff_RBX[2];
  uVar6 = uVar7 + uVar9;
  uVar9 = (ulong)(CARRY8(in_R8,unaff_RBX[2]) || CARRY8(uVar7,uVar9));
  uVar7 = in_R9 + unaff_RBX[3];
  uVar8 = uVar7 + uVar9;
  uVar2 = (ulong)(uVar10 < unaff_R14 || uVar10 - unaff_R14 < (ulong)(lVar1 != -1));
  uVar3 = (ulong)(uVar6 < uVar2);
  bVar4 = (CARRY8(in_R9,unaff_RBX[3]) || CARRY8(uVar7,uVar9)) <
          (uVar8 < unaff_R15 || uVar8 - unaff_R15 < uVar3);
  uVar9 = (uVar10 - unaff_R14) - (ulong)(lVar1 != -1);
  lVar5 = lVar1 + 1;
  if (bVar4) {
    uVar9 = uVar10;
    lVar5 = lVar1;
  }
  *param_1 = lVar5;
  uVar7 = uVar6 - uVar2;
  if (bVar4) {
    uVar7 = uVar6;
  }
  param_1[1] = uVar9;
  uVar9 = (uVar8 - unaff_R15) - uVar3;
  if (bVar4) {
    uVar9 = uVar8;
  }
  param_1[2] = uVar7;
  param_1[3] = uVar9;
  return;
}

