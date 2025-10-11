
void felem_shrink(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar3 = param_2[6] - 0x100000000;
  uVar1 = param_2[4];
  uVar4 = uVar3 + param_2[5];
  uVar3 = param_2[7] + (ulong)(0xffffffff < (ulong)param_2[6]) + (ulong)CARRY8(uVar3,param_2[5]);
  uVar5 = (uVar3 << 0x20) - uVar3;
  uVar6 = uVar5 + uVar4;
  uVar8 = ((uVar3 >> 0x20) - (ulong)(uVar3 << 0x20 < uVar3)) + (ulong)CARRY8(uVar5,uVar4);
  uVar3 = uVar3 + uVar8;
  uVar4 = (uVar8 << 0x20) - uVar8;
  uVar5 = uVar4 + uVar6;
  uVar6 = (long)(0x7fffffff00000000 - (uVar5 & 0x7fffffffffffffff) & uVar5) >> 0x3f |
          -(((uVar8 >> 0x20) - (ulong)(uVar8 << 0x20 < uVar8)) + (ulong)CARRY8(uVar4,uVar6));
  uVar4 = *param_2 - 1;
  uVar9 = uVar4 + uVar3;
  uVar10 = (param_2[1] + (ulong)(*param_2 != 0) + (ulong)CARRY8(uVar4,uVar3)) -
           (ulong)(uVar9 < uVar6);
  uVar4 = param_2[2];
  uVar8 = param_2[2] + 0xffffffff;
  lVar2 = param_2[3];
  *param_1 = uVar9 - uVar6;
  uVar9 = uVar8 - (uVar3 << 0x20);
  uVar7 = uVar9 - (uVar6 & 0xffffffff);
  uVar3 = ((((lVar2 + 0x400000000000 + (ulong)(0xffffffff00000000 < uVar4)) - (uVar3 >> 0x20)) -
           (ulong)(uVar8 < uVar3 << 0x20)) - (ulong)(uVar9 < (uVar6 & 0xffffffff))) +
          (ulong)CARRY8(uVar7,uVar10);
  uVar4 = uVar1 - 0x400000000000;
  param_1[1] = uVar7 + uVar10;
  param_1[2] = uVar3 + uVar4;
  param_1[3] = (uVar5 - (uVar6 & 0xffffffff00000001)) +
               (ulong)(0x3fffffffffff < uVar1) + (ulong)CARRY8(uVar3,uVar4);
  return;
}

