
ulong __mpn_rshift(ulong *param_1,ulong *param_2,ulong param_3,byte param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  
  uVar1 = (uint)param_3 & 3;
  if ((param_3 & 3) == 0) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    uVar2 = 0UL >> (param_4 & 0x3f) | uVar6 << 0x40 - (param_4 & 0x3f);
    uVar4 = param_2[2];
    param_2 = param_2 + 1;
    param_1 = param_1 + -3;
    uVar3 = param_3 - 4;
    while( true ) {
      uVar5 = param_2[2];
      param_1[3] = uVar6 >> (param_4 & 0x3f) | uVar7 << 0x40 - (param_4 & 0x3f);
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
      bVar8 = uVar3 < 4;
      uVar3 = uVar3 - 4;
      if (bVar8) break;
LAB_006e96e0:
      uVar6 = param_2[-1];
      *param_1 = uVar7 >> (param_4 & 0x3f) | uVar4 << 0x40 - (param_4 & 0x3f);
LAB_006e96eb:
      uVar7 = *param_2;
      param_1[1] = uVar4 >> (param_4 & 0x3f) | uVar5 << 0x40 - (param_4 & 0x3f);
LAB_006e96f6:
      uVar4 = param_2[1];
      param_1[2] = uVar5 >> (param_4 & 0x3f) | uVar6 << 0x40 - (param_4 & 0x3f);
    }
  }
  else {
    if (uVar1 < 2) {
      uVar5 = *param_2;
      uVar2 = 0UL >> (param_4 & 0x3f) | uVar5 << 0x40 - (param_4 & 0x3f);
      uVar3 = param_3 - 2;
      if (param_3 < 2) {
        *param_1 = uVar5 >> (param_4 & 0x3f);
        return uVar2;
      }
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      param_2 = param_2 + 2;
      param_1 = param_1 + -2;
      goto LAB_006e96f6;
    }
    if (uVar1 == 2) {
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar2 = 0UL >> (param_4 & 0x3f) | uVar4 << 0x40 - (param_4 & 0x3f);
      uVar3 = param_3 - 3;
      if (param_3 < 3) {
        *param_1 = uVar4 >> (param_4 & 0x3f) | uVar5 << 0x40 - (param_4 & 0x3f);
        param_1[1] = uVar5 >> (param_4 & 0x3f);
        return uVar2;
      }
      uVar6 = param_2[2];
      param_2 = param_2 + 3;
      param_1 = param_1 + -1;
      goto LAB_006e96eb;
    }
    uVar7 = *param_2;
    uVar4 = param_2[1];
    uVar2 = 0UL >> (param_4 & 0x3f) | uVar7 << 0x40 - (param_4 & 0x3f);
    uVar5 = param_2[2];
    param_2 = param_2 + 4;
    uVar3 = param_3 - 4;
    if (3 < param_3) goto LAB_006e96e0;
  }
  *param_1 = uVar7 >> (param_4 & 0x3f) | uVar4 << 0x40 - (param_4 & 0x3f);
  param_1[1] = uVar4 >> (param_4 & 0x3f) | uVar5 << 0x40 - (param_4 & 0x3f);
  param_1[2] = uVar5 >> (param_4 & 0x3f);
  return uVar2;
}

