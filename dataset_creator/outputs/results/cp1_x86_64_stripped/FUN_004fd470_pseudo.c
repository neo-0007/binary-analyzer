
void FUN_004fd470(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  FUN_004fcc90();
  puVar5 = param_1 + 3;
  uVar6 = 0;
  uVar7 = 0xffffffff00000001;
  uVar4 = 0xffffffffffffffff;
  uVar2 = 3;
  while( true ) {
    uVar3 = *puVar5;
    uVar2 = uVar2 - 1;
    puVar5 = puVar5 + -1;
    uVar1 = (uVar3 ^ uVar7) - 1;
    uVar6 = uVar6 | -(ulong)(uVar7 < uVar3) & uVar4;
    uVar1 = uVar1 << 0x20 & uVar1;
    uVar1 = uVar1 << 0x10 & uVar1;
    uVar1 = uVar1 << 8 & uVar1;
    uVar1 = uVar1 << 4 & uVar1;
    uVar1 = uVar1 * 4 & uVar1;
    uVar4 = uVar4 & (long)(uVar1 * 2 & uVar1) >> 0x3f;
    if (uVar2 == 0xffffffff) break;
    uVar7 = *(ulong *)(&DAT_00800780 + (ulong)uVar2 * 8);
  }
  uVar7 = *param_1;
  uVar4 = uVar4 | uVar6;
  *param_1 = uVar7 - uVar4;
  uVar3 = (ulong)(-(uint)(uVar7 < uVar4) & 1);
  uVar6 = param_1[1] - uVar3;
  uVar7 = param_1[2];
  uVar1 = (ulong)(-(uint)(param_1[1] < uVar3) & 1);
  uVar3 = uVar7 - uVar1;
  param_1[1] = uVar6 - (uVar4 & 0xffffffff);
  uVar6 = (ulong)(-(uint)(uVar6 < (uVar4 & 0xffffffff)) & 1);
  param_1[2] = uVar3 - uVar6;
  param_1[3] = ((param_1[3] - (uVar4 & 0xffffffff00000001)) - (ulong)(-(uint)(uVar7 < uVar1) & 1)) -
               (ulong)(-(uint)(uVar3 < uVar6) & 1);
  return;
}

