
void __ecp_nistz256_mul_by_2x(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong in_R8;
  ulong uVar5;
  ulong uVar6;
  ulong in_R9;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_R12;
  ulong unaff_R13;
  ulong uVar9;
  ulong unaff_R14;
  ulong unaff_R15;
  
  lVar3 = unaff_R12 * 2;
  uVar9 = unaff_R13 * 2 + (ulong)CARRY8(unaff_R12,unaff_R12);
  uVar8 = (ulong)(CARRY8(unaff_R13,unaff_R13) ||
                 CARRY8(unaff_R13 * 2,(ulong)CARRY8(unaff_R12,unaff_R12)));
  uVar5 = in_R8 * 2 + uVar8;
  uVar8 = (ulong)(CARRY8(in_R8,in_R8) || CARRY8(in_R8 * 2,uVar8));
  uVar7 = in_R9 * 2 + uVar8;
  uVar6 = (ulong)(uVar9 < unaff_R14 || uVar9 - unaff_R14 < (ulong)(lVar3 != -1));
  uVar1 = (ulong)(uVar5 < uVar6);
  bVar2 = (CARRY8(in_R9,in_R9) || CARRY8(in_R9 * 2,uVar8)) <
          (uVar7 < unaff_R15 || uVar7 - unaff_R15 < uVar1);
  uVar8 = (uVar9 - unaff_R14) - (ulong)(lVar3 != -1);
  lVar4 = lVar3 + 1;
  if (bVar2) {
    uVar8 = uVar9;
    lVar4 = lVar3;
  }
  *param_1 = lVar4;
  uVar6 = uVar5 - uVar6;
  if (bVar2) {
    uVar6 = uVar5;
  }
  param_1[1] = uVar8;
  uVar8 = (uVar7 - unaff_R15) - uVar1;
  if (bVar2) {
    uVar8 = uVar7;
  }
  param_1[2] = uVar6;
  param_1[3] = uVar8;
  return;
}

