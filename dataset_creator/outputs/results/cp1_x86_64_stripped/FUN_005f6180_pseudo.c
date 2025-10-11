
void FUN_005f6180(ulong *param_1,ulong *param_2)

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
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = (ulong)(CARRY8(uVar2,DAT_005f6008) ||
                 CARRY8(uVar2 + DAT_005f6008,(ulong)CARRY8(uVar1,DAT_005f6000)));
  uVar6 = (ulong)(CARRY8(uVar3,DAT_005f6010) || CARRY8(uVar3 + DAT_005f6010,uVar5));
  uVar9 = (ulong)(CARRY8(uVar4,DAT_005f6018) || CARRY8(uVar4 + DAT_005f6018,uVar6));
  uVar5 = uVar3 + DAT_005f6010 + uVar5;
  uVar7 = uVar1 + DAT_005f6000;
  uVar8 = uVar2 + DAT_005f6008 + (ulong)CARRY8(uVar1,DAT_005f6000);
  uVar6 = uVar4 + DAT_005f6018 + uVar6;
  if ((uVar1 & 1) == 0) {
    uVar9 = 0;
    uVar5 = uVar3;
    uVar7 = uVar1;
    uVar8 = uVar2;
    uVar6 = uVar4;
  }
  *param_1 = uVar7 >> 1 | uVar8 << 0x3f;
  param_1[1] = uVar8 >> 1 | uVar5 << 0x3f;
  param_1[2] = uVar5 >> 1 | uVar6 << 0x3f;
  param_1[3] = uVar6 >> 1 | uVar9 << 0x3f;
  return;
}

