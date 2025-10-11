
ulong __mpn_lshift(long param_1,long param_2,ulong param_3,byte param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  
  puVar5 = (ulong *)(param_1 + -8 + param_3 * 8);
  puVar4 = (ulong *)(param_2 + -8 + param_3 * 8);
  uVar1 = (uint)param_3 & 3;
  if ((param_3 & 3) == 0) {
    uVar8 = *puVar4;
    uVar9 = puVar4[-1];
    uVar2 = 0L << (param_4 & 0x3f) | uVar8 >> 0x40 - (param_4 & 0x3f);
    uVar6 = puVar4[-2];
    puVar5 = puVar5 + 3;
    uVar3 = param_3 - 4;
    while( true ) {
      uVar7 = puVar4[-3];
      puVar5[-3] = uVar8 << (param_4 & 0x3f) | uVar9 >> 0x40 - (param_4 & 0x3f);
      puVar4 = puVar4 + -4;
      puVar5 = puVar5 + -4;
      bVar10 = uVar3 < 4;
      uVar3 = uVar3 - 4;
      if (bVar10) break;
LAB_006e95d0:
      uVar8 = *puVar4;
      *puVar5 = uVar9 << (param_4 & 0x3f) | uVar6 >> 0x40 - (param_4 & 0x3f);
LAB_006e95da:
      uVar9 = puVar4[-1];
      puVar5[-1] = uVar6 << (param_4 & 0x3f) | uVar7 >> 0x40 - (param_4 & 0x3f);
LAB_006e95e6:
      uVar6 = puVar4[-2];
      puVar5[-2] = uVar7 << (param_4 & 0x3f) | uVar8 >> 0x40 - (param_4 & 0x3f);
    }
  }
  else {
    if (uVar1 < 2) {
      uVar7 = *puVar4;
      uVar2 = 0L << (param_4 & 0x3f) | uVar7 >> 0x40 - (param_4 & 0x3f);
      uVar3 = param_3 - 2;
      if (param_3 < 2) {
        *puVar5 = uVar7 << (param_4 & 0x3f);
        return uVar2;
      }
      uVar8 = puVar4[-1];
      uVar9 = puVar4[-2];
      puVar4 = puVar4 + -1;
      puVar5 = puVar5 + 2;
      goto LAB_006e95e6;
    }
    if (uVar1 == 2) {
      uVar6 = *puVar4;
      uVar7 = puVar4[-1];
      uVar2 = 0L << (param_4 & 0x3f) | uVar6 >> 0x40 - (param_4 & 0x3f);
      uVar3 = param_3 - 3;
      if (param_3 < 3) {
        *puVar5 = uVar6 << (param_4 & 0x3f) | uVar7 >> 0x40 - (param_4 & 0x3f);
        puVar5[-1] = uVar7 << (param_4 & 0x3f);
        return uVar2;
      }
      uVar8 = puVar4[-2];
      puVar4 = puVar4 + -2;
      puVar5 = puVar5 + 1;
      goto LAB_006e95da;
    }
    uVar9 = *puVar4;
    uVar6 = puVar4[-1];
    uVar2 = 0L << (param_4 & 0x3f) | uVar9 >> 0x40 - (param_4 & 0x3f);
    uVar7 = puVar4[-2];
    puVar4 = puVar4 + -3;
    uVar3 = param_3 - 4;
    if (3 < param_3) goto LAB_006e95d0;
  }
  *puVar5 = uVar9 << (param_4 & 0x3f) | uVar6 >> 0x40 - (param_4 & 0x3f);
  puVar5[-1] = uVar6 << (param_4 & 0x3f) | uVar7 >> 0x40 - (param_4 & 0x3f);
  puVar5[-2] = uVar7 << (param_4 & 0x3f);
  return uVar2;
}

