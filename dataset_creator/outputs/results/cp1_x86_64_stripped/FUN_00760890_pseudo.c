
void FUN_00760890(long param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  
  if (param_2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x28) == param_2) {
      return;
    }
    if (0x7b2 < (int)param_2) {
      uVar3 = param_2 - 1;
      iVar4 = *(int *)(param_1 + 8);
      lVar5 = (long)(int)((((param_2 - 0x7b2) * 0x16d + ((int)uVar3 >> 2)) - uVar3 / 100) + -0x1dd +
                         uVar3 / 400) * 0x15180;
      goto joined_r0x00760928;
    }
  }
  iVar4 = *(int *)(param_1 + 8);
  lVar5 = 0;
joined_r0x00760928:
  if (iVar4 == 1) {
    lVar5 = lVar5 + (long)(int)(*(ushort *)(param_1 + 0x10) - 1) * 0x15180;
    if (((0x3b < *(ushort *)(param_1 + 0x10)) && ((param_2 & 3) == 0)) &&
       ((uVar3 = param_2 * -0x3d70a3d7 + 0x51eb850, 0x28f5c28 < (uVar3 >> 2 | param_2 * 0x40000000)
        || ((uVar3 >> 4 | param_2 * -0x70000000) < 0xa3d70b)))) {
      lVar5 = lVar5 + 0x15180;
    }
  }
  else if (iVar4 == 2) {
    if ((param_2 & 3) == 0) {
      if (param_2 == ((int)param_2 / 100) * 100) {
        uVar3 = param_2 * -0x3d70a3d7 + 0x51eb850 >> 4 | param_2 * -0x70000000;
        uVar9 = (ulong)(-(uint)(uVar3 < 0xa3d70b) & 0xd);
        uVar6 = (ulong)(uVar3 < 0xa3d70b);
      }
      else {
        uVar9 = 0xd;
        uVar6 = 1;
      }
    }
    else {
      uVar9 = 0;
      uVar6 = 0;
    }
    uVar1 = *(ushort *)(param_1 + 0xc);
    lVar5 = (ulong)*(ushort *)(&DAT_00840afe + (uVar1 + uVar9) * 2) * 0x15180 + lVar5;
    iVar11 = param_2 - (uVar1 < 3);
    iVar10 = iVar11 >> 0x1f;
    iVar7 = iVar11 / 100 + iVar10;
    iVar8 = iVar11 + (iVar7 - iVar10) * -100;
    iVar4 = iVar8;
    if (iVar8 < 0) {
      iVar4 = iVar8 + 3;
    }
    iVar4 = (int)(iVar8 + 1 + (((uVar1 + 9) % 0xc + 1) * 0x1a - 2) / 10 + (iVar4 >> 2) +
                  iVar11 / 400 + iVar10 * 2 + iVar7 * -2) % 7;
    uVar2 = *(ushort *)(param_1 + 0xe);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 7;
    }
    iVar4 = (uint)*(ushort *)(param_1 + 0x10) - iVar4;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 7;
    }
    if (1 < uVar2) {
      iVar7 = iVar4 + -7;
      iVar8 = iVar4;
      do {
        iVar4 = iVar8 + 7;
        if ((int)((uint)*(ushort *)(&DAT_00840b00 + (uVar6 * 0xd + (long)(int)(uint)uVar1) * 2) -
                 (uint)*(ushort *)(&DAT_00840afe + (uVar1 + uVar9) * 2)) <= iVar4) {
          lVar5 = (long)iVar8 * 0x15180 + lVar5;
          goto LAB_00760902;
        }
        iVar8 = iVar4;
      } while (iVar4 != iVar7 + ((uint)uVar2 * 8 - (uint)uVar2));
    }
    lVar5 = (long)iVar4 * 0x15180 + lVar5;
  }
  else if (iVar4 == 0) {
    lVar5 = lVar5 + (ulong)*(ushort *)(param_1 + 0x10) * 0x15180;
  }
LAB_00760902:
  *(uint *)(param_1 + 0x28) = param_2;
  *(long *)(param_1 + 0x20) = (lVar5 - *(int *)(param_1 + 0x18)) + (long)*(int *)(param_1 + 0x14);
  return;
}

