
void felem_reduce_(ulong *param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar3 = *(ulong *)(param_2 + 0x50) << 0x20;
  uVar4 = uVar3 + *(ulong *)(param_2 + 0x40);
  lVar5 = (*(long *)(param_2 + 0x58) << 0x20 | *(ulong *)(param_2 + 0x50) >> 0x20) +
          *(long *)(param_2 + 0x48) + (ulong)CARRY8(uVar3,*(ulong *)(param_2 + 0x40));
  uVar6 = uVar4 + *param_1;
  uVar7 = lVar5 + param_1[1] + (ulong)CARRY8(uVar4,*param_1);
  uVar12 = param_1[6] - uVar4;
  *param_1 = uVar6;
  uVar14 = (param_1[7] - lVar5) - (ulong)(param_1[6] < uVar4);
  param_1[1] = uVar7;
  param_1[6] = uVar12;
  param_1[7] = uVar14;
  uVar3 = *(ulong *)(param_2 + 0x50);
  lVar5 = *(long *)(param_2 + 0x58);
  uVar4 = *(ulong *)(param_2 + 0x70);
  lVar1 = *(long *)(param_2 + 0x78);
  uVar8 = uVar3 + param_1[2];
  uVar9 = uVar8 - uVar4;
  uVar8 = ((lVar5 + param_1[3] + (ulong)CARRY8(uVar3,param_1[2])) - lVar1) - (ulong)(uVar8 < uVar4);
  uVar10 = uVar4 + param_1[4];
  param_1[2] = uVar9;
  uVar11 = uVar10 - uVar3;
  param_1[3] = uVar8;
  uVar4 = ((lVar1 + param_1[5] + (ulong)CARRY8(uVar4,param_1[4])) - lVar5) - (ulong)(uVar10 < uVar3)
  ;
  param_1[4] = uVar11;
  param_1[5] = uVar4;
  uVar3 = *(ulong *)(param_2 + 0x40) << 0x20;
  uVar10 = uVar9 - uVar3;
  uVar9 = (uVar8 - (*(long *)(param_2 + 0x48) << 0x20 | *(ulong *)(param_2 + 0x40) >> 0x20)) -
          (ulong)(uVar9 < uVar3);
  param_1[2] = uVar10;
  param_1[3] = uVar9;
  uVar3 = *(ulong *)(param_2 + 0x40) << 0x20;
  uVar13 = uVar12 + uVar3;
  uVar14 = uVar14 + (*(long *)(param_2 + 0x48) << 0x20 | *(ulong *)(param_2 + 0x40) >> 0x20) +
           (ulong)CARRY8(uVar12,uVar3);
  param_1[6] = uVar13;
  param_1[7] = uVar14;
  uVar3 = *(ulong *)(param_2 + 0x50) << 0x20;
  uVar12 = uVar11 - uVar3;
  uVar11 = (uVar4 - (*(long *)(param_2 + 0x58) << 0x20 | *(ulong *)(param_2 + 0x50) >> 0x20)) -
           (ulong)(uVar11 < uVar3);
  param_1[4] = uVar12;
  param_1[5] = uVar11;
  uVar4 = uVar6 - *(ulong *)(param_2 + 0x60);
  uVar7 = (uVar7 - *(long *)(param_2 + 0x68)) - (ulong)(uVar6 < *(ulong *)(param_2 + 0x60));
  *param_1 = uVar4;
  param_1[1] = uVar7;
  uVar3 = *(ulong *)(param_2 + 0x60) << 0x20;
  uVar6 = uVar4 - uVar3;
  uVar8 = (uVar7 - (*(long *)(param_2 + 0x68) << 0x20 | *(ulong *)(param_2 + 0x60) >> 0x20)) -
          (ulong)(uVar4 < uVar3);
  *param_1 = uVar6;
  param_1[1] = uVar8;
  uVar3 = *(ulong *)(param_2 + 0x60);
  lVar5 = *(long *)(param_2 + 0x68);
  uVar4 = uVar3 << 0x21;
  param_1[2] = uVar4 + uVar10;
  param_1[3] = (lVar5 << 0x21 | uVar3 >> 0x1f) + uVar9 + (ulong)CARRY8(uVar4,uVar10);
  uVar3 = *(ulong *)(param_2 + 0x60) * 2;
  uVar9 = uVar12 + uVar3;
  uVar10 = uVar11 + (*(long *)(param_2 + 0x68) << 1 | *(ulong *)(param_2 + 0x60) >> 0x3f) +
           (ulong)CARRY8(uVar12,uVar3);
  param_1[4] = uVar9;
  param_1[5] = uVar10;
  uVar3 = *(ulong *)(param_2 + 0x60) << 0x20;
  uVar11 = uVar13 - uVar3;
  uVar12 = (uVar14 - (*(long *)(param_2 + 0x68) << 0x20 | *(ulong *)(param_2 + 0x60) >> 0x20)) -
           (ulong)(uVar13 < uVar3);
  param_1[6] = uVar11;
  param_1[7] = uVar12;
  uVar7 = uVar6 - *(ulong *)(param_2 + 0x70);
  uVar6 = (uVar8 - *(long *)(param_2 + 0x78)) - (ulong)(uVar6 < *(ulong *)(param_2 + 0x70));
  *param_1 = uVar7;
  param_1[1] = uVar6;
  uVar3 = *(ulong *)(param_2 + 0x70);
  lVar5 = *(long *)(param_2 + 0x78);
  uVar4 = uVar3 << 0x20;
  *param_1 = uVar7 - uVar4;
  param_1[1] = (uVar6 - (lVar5 << 0x20 | uVar3 >> 0x20)) - (ulong)(uVar7 < uVar4);
  uVar3 = *(ulong *)(param_2 + 0x70);
  lVar5 = *(long *)(param_2 + 0x78);
  uVar4 = uVar3 << 0x21;
  param_1[4] = uVar4 + uVar9;
  param_1[5] = (lVar5 << 0x21 | uVar3 >> 0x1f) + uVar10 + (ulong)CARRY8(uVar4,uVar9);
  lVar5 = *(long *)(param_2 + 0x78);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulong *)(param_2 + 0x70);
  uVar3 = SUB168(ZEXT816(3) * auVar2,0);
  param_1[6] = uVar3 + uVar11;
  param_1[7] = SUB168(ZEXT816(3) * auVar2,8) + lVar5 * 3 + uVar12 + (ulong)CARRY8(uVar3,uVar11);
  return;
}

