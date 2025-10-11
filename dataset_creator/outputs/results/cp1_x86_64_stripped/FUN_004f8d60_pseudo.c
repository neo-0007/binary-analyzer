
void FUN_004f8d60(ulong *param_1,ulong *param_2)

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
  
  uVar5 = param_2[0xd];
  uVar6 = param_2[0xc];
  uVar10 = param_2[10];
  uVar14 = param_2[0xb];
  uVar1 = uVar6 >> 0x10 | uVar5 << 0x30;
  uVar2 = uVar1 + param_2[8];
  uVar7 = (uVar5 >> 0x10) + param_2[9] + (ulong)CARRY8(uVar1,param_2[8]);
  uVar1 = param_2[4] - uVar6;
  uVar15 = (uVar10 & 0xffff) << 0x28;
  uVar3 = uVar1 + uVar15;
  uVar8 = uVar2 >> 0x10 | uVar7 << 0x30;
  uVar4 = uVar3 + uVar8;
  uVar1 = (((param_2[5] + 0x7fffffffffffff80) - uVar5) - (ulong)(param_2[4] < uVar6)) +
          (ulong)CARRY8(uVar1,uVar15) + (uVar7 >> 0x10) + (ulong)CARRY8(uVar3,uVar8);
  uVar3 = uVar10 >> 0x10 | uVar14 << 0x30;
  uVar8 = uVar3 + param_2[6];
  uVar5 = (uVar6 & 0xffff) << 0x28;
  uVar15 = uVar8 + uVar5;
  uVar6 = uVar4 >> 0x38 | uVar1 * 0x100;
  uVar9 = uVar15 + uVar6;
  uVar15 = (uVar14 >> 0x10) + param_2[7] + (ulong)CARRY8(uVar3,param_2[6]) +
           (ulong)CARRY8(uVar8,uVar5) + (uVar1 >> 0x38) + (ulong)CARRY8(uVar15,uVar6);
  uVar5 = uVar9 >> 0x38;
  uVar3 = uVar5 | uVar15 * 0x100;
  uVar1 = (*param_2 + 0x8000) - uVar2;
  uVar6 = uVar1 - uVar3;
  uVar1 = ((((param_2[1] + 0x8000000000000000 + (ulong)(0xffffffffffff7fff < *param_2)) - uVar7) -
           (ulong)(*param_2 + 0x8000 < uVar2)) - (uVar15 >> 0x38)) - (ulong)(uVar1 < uVar3);
  uVar3 = param_2[2] + 0xff80000000000000;
  uVar7 = uVar3 - uVar10;
  uVar2 = (uVar2 & 0xffff) << 0x28;
  uVar11 = uVar2 + uVar7;
  uVar5 = (uVar5 | uVar15 * 0x100 & 0xffff) << 0x28;
  uVar12 = uVar11 + uVar5;
  uVar8 = uVar6 >> 0x38 | uVar1 * 0x100;
  uVar13 = uVar12 + uVar8;
  uVar14 = (((param_2[3] + 0x7fffffffffffff7f + (ulong)(0x7fffffffffffff < param_2[2])) - uVar14) -
           (ulong)(uVar3 < uVar10)) + (ulong)CARRY8(uVar2,uVar7) + (ulong)CARRY8(uVar11,uVar5) +
           (uVar1 >> 0x38) + (ulong)CARRY8(uVar12,uVar8);
  uVar4 = uVar4 & 0xffffffffffffff;
  *param_1 = uVar6 & 0xffffffffffffff;
  uVar6 = uVar4 + (uVar15 >> 8);
  uVar5 = uVar13 >> 0x38 | uVar14 * 0x100;
  uVar10 = uVar6 + uVar5;
  param_1[1] = uVar13 & 0xffffffffffffff;
  param_1[2] = uVar10 & 0xffffffffffffff;
  param_1[3] = (uVar9 & 0xffffffffffffff) +
               (uVar10 >> 0x38 |
               ((ulong)CARRY8(uVar4,uVar15 >> 8) + (uVar14 >> 0x38) + (ulong)CARRY8(uVar6,uVar5)) *
               0x100);
  return;
}

