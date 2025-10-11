
ulong FUN_0070d7c0(ulong param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (DAT_0093e0f0 == 0) {
    uVar7 = 0x8000;
    uVar8 = 0x4000000;
  }
  else {
    uVar8 = DAT_0093e0f0 * 4;
    uVar7 = DAT_0093e0f0;
  }
  uVar9 = param_2 + param_1;
  if (((uVar7 <= uVar9) && (uVar7 = uVar9, uVar8 < uVar9)) && (uVar7 = uVar8, uVar8 < param_1)) {
    return 0;
  }
  param_4 = param_4 | 0x22;
  uVar7 = -param_3 & (uVar7 - 1) + param_3;
  if (DAT_0094a9a0 == 0) {
LAB_0070d868:
    lVar3 = FUN_0076f020(0,uVar8 * 2,0,param_4,0xffffffff,0);
    if (lVar3 == -1) {
      uVar9 = FUN_0076f020(0,uVar8,0,param_4,0xffffffff,0);
      if (uVar9 == 0xffffffffffffffff) {
        return 0;
      }
      if ((uVar9 & uVar8 - 1) != 0) goto LAB_0070d998;
    }
    else {
      uVar9 = lVar3 + -1 + uVar8 & -uVar8;
      lVar5 = uVar9 - lVar3;
      lVar1 = uVar9 + uVar8;
      if (lVar5 != 0) {
        FUN_0076f080(lVar3,lVar5);
        lVar1 = DAT_0094a9a0;
      }
      DAT_0094a9a0 = lVar1;
      FUN_0076f080(uVar9 + uVar8,uVar8 - lVar5);
    }
  }
  else {
    uVar9 = FUN_0076f020(DAT_0094a9a0,uVar8,0,param_4,0xffffffff,0);
    DAT_0094a9a0 = 0;
    if (uVar9 == 0xffffffffffffffff) goto LAB_0070d868;
    if ((uVar9 & uVar8 - 1) != 0) {
      FUN_0076f080(uVar9,uVar8);
      goto LAB_0070d868;
    }
  }
  iVar2 = FUN_0076f0b0(uVar9,uVar7,3);
  if (iVar2 == 0) {
    if (DAT_0093e0e8 - 1U < uVar7) {
      uVar4 = DAT_0093eb18 - 1U & uVar9;
      uVar8 = uVar7;
      uVar6 = uVar9;
      if (uVar4 != 0) {
        uVar8 = uVar7 + uVar4;
        uVar6 = -DAT_0093eb18 & uVar9;
      }
      FUN_0076f0e0(uVar6,uVar8,0xe);
    }
    *(long *)(uVar9 + 0x20) = param_3;
    *(ulong *)(uVar9 + 0x10) = uVar7;
    *(ulong *)(uVar9 + 0x18) = uVar7;
    return uVar9;
  }
LAB_0070d998:
  FUN_0076f080(uVar9,uVar8);
  return 0;
}

