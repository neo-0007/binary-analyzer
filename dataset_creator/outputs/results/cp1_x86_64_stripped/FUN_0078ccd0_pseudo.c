
void FUN_0078ccd0(uint param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = (ulong)param_1;
  if ((&DAT_00939ed0)[uVar8 * 0x1c] == 3) {
    uVar1 = *param_2;
    (&DAT_00939ef0)[uVar8 * 0x70] = 1;
    (&DAT_00939ee8)[uVar8 * 0xe] = uVar1;
    return;
  }
  uVar1 = *param_2;
  uVar2 = *(ulong *)(&DAT_00939ed8 + uVar8 * 0x1c);
  uVar4 = uVar2;
  if (param_3 != (ulong *)0x0) {
    uVar4 = *param_3;
  }
  uVar3 = *(ulong *)(&DAT_00939ee0 + uVar8 * 0x1c);
  uVar6 = uVar3;
  if (param_4 != (ulong *)0x0) {
    uVar6 = *param_4;
  }
  uVar5 = uVar2;
  if ((&DAT_00939ed0)[uVar8 * 0x1c] == 0) {
    if ((long)uVar4 < (long)uVar2) {
      uVar4 = uVar2;
    }
    if ((long)uVar3 < (long)uVar6) {
      uVar6 = uVar3;
    }
    uVar7 = uVar3;
    if ((long)uVar4 <= (long)uVar6) {
      uVar5 = uVar4;
      uVar7 = uVar6;
    }
    if ((long)uVar1 < (long)uVar5) {
      return;
    }
    if ((long)uVar7 < (long)uVar1) {
      return;
    }
  }
  else {
    if (uVar2 <= uVar4) {
      uVar5 = uVar4;
    }
    if (uVar3 < uVar6) {
      uVar6 = uVar3;
    }
    uVar7 = uVar6;
    if (uVar6 < uVar5) {
      uVar7 = uVar3;
      uVar5 = uVar2;
    }
    if (uVar1 < uVar5) {
      return;
    }
    if (uVar7 < uVar1) {
      return;
    }
  }
  (&DAT_00939ee8)[uVar8 * 0xe] = uVar1;
  *(ulong *)(&DAT_00939ed8 + uVar8 * 0x1c) = uVar5;
  *(ulong *)(&DAT_00939ee0 + uVar8 * 0x1c) = uVar7;
  (&DAT_00939ef0)[uVar8 * 0x70] = 1;
  return;
}

