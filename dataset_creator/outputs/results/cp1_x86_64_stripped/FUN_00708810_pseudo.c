
long FUN_00708810(uint *param_1,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  
  uVar5 = *(ulong *)(param_1 + 10);
  uVar1 = *param_1;
  uVar2 = *(ulong *)(param_1 + 8);
  if (param_4 == 0) {
    if ((uVar1 & 0x400) == 0) {
      param_4 = 0;
      if ((uVar5 <= uVar2) && ((uVar1 & 0x800) == 0)) {
        lVar7 = *(long *)(param_1 + 6);
        goto LAB_00708916;
      }
LAB_007088f8:
      if ((uVar1 & 0x100) == 0) {
        lVar7 = *(long *)(param_1 + 0xe);
      }
      else {
        lVar7 = *(long *)(param_1 + 0x14);
      }
      *(long *)(param_1 + 6) = lVar7;
      *param_1 = uVar1 & 0xfffff7ff;
      *(ulong *)(param_1 + 2) = uVar5;
      *(ulong *)(param_1 + 4) = uVar5;
      if (param_4 == 0) {
LAB_00708916:
        return *(long *)(param_1 + 2) - lVar7;
      }
      goto LAB_0070893e;
    }
    if ((uVar1 & 0x800) != 0) {
      param_4 = 2;
      goto LAB_007088f8;
    }
    if (uVar2 < uVar5) {
      param_4 = 1;
      goto LAB_007088f8;
    }
    lVar7 = *(long *)(param_1 + 6);
    param_4 = 0;
    if (uVar5 < *(ulong *)(param_1 + 4)) {
      uVar5 = *(ulong *)(param_1 + 4);
    }
    lVar8 = uVar5 - lVar7;
LAB_00708886:
    if (param_3 == 0) {
      lVar6 = param_2;
      if (param_2 < 0) goto LAB_00708ad0;
    }
    else {
      lVar6 = lVar8;
      if (param_3 == 1) {
        lVar6 = *(long *)(param_1 + 2) - lVar7;
      }
      if ((-param_2 != lVar6 && param_2 <= -lVar6) || (0x7fffffffffffffff - lVar6 < param_2))
      goto LAB_00708ad0;
      lVar6 = lVar6 + param_2;
    }
    if (lVar8 < lVar6) {
      iVar4 = FUN_00708610(param_1,lVar6,1);
      if (iVar4 != 0) {
        return -1;
      }
      lVar7 = *(long *)(param_1 + 6);
      uVar5 = lVar7 + lVar8;
    }
    *(long *)(param_1 + 2) = lVar7 + lVar6;
    *(ulong *)(param_1 + 4) = uVar5;
  }
  else {
    if ((uVar2 < uVar5) || ((uVar1 & 0x800) != 0)) goto LAB_007088f8;
    lVar7 = *(long *)(param_1 + 6);
LAB_0070893e:
    lVar6 = -1;
    if (uVar5 < *(ulong *)(param_1 + 4)) {
      uVar5 = *(ulong *)(param_1 + 4);
    }
    lVar8 = uVar5 - lVar7;
    if ((param_4 & 1) != 0) goto LAB_00708886;
  }
  if ((param_4 & 2) == 0) {
    return lVar6;
  }
  if (param_3 == 0) {
    bVar3 = false;
    lVar6 = 0;
    lVar7 = 0;
  }
  else if (param_3 == 1) {
    lVar7 = *(long *)(param_1 + 10) - *(long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 8) - *(long *)(param_1 + 10);
    bVar3 = 0x7fffffffffffffff - lVar7 < param_2;
  }
  else {
    lVar6 = -lVar8;
    bVar3 = 0x7fffffffffffffff - lVar8 < param_2;
    lVar7 = lVar8;
  }
  if ((lVar6 <= param_2) && (!bVar3)) {
    lVar7 = lVar7 + param_2;
    if ((lVar8 < lVar7) && (iVar4 = FUN_00708610(param_1,lVar7,0), iVar4 != 0)) {
      return -1;
    }
    *(long *)(param_1 + 10) = *(long *)(param_1 + 8) + lVar7;
    return lVar7;
  }
LAB_00708ad0:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  return -1;
}

