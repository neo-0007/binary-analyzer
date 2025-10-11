
ulong FUN_00768600(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar1 = *param_1;
  if (**(int **)(param_2 + 0x350) == 0) {
    return 0xffffffff;
  }
  FUN_0070b2d0(&DAT_00946120);
  lVar4 = *(long *)(param_2 + 0x28);
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x28) == 0)) {
    FUN_007683a0(param_2);
    lVar4 = *(long *)(param_2 + 0x28);
    if (lVar4 == 0) goto LAB_0076865f;
  }
  lVar4 = *(long *)(lVar4 + 0x18);
  if (lVar4 != 0) {
    uVar6 = 0;
    uVar8 = 0;
    uVar7 = 0xffffffff;
    do {
      uVar2 = *(undefined8 *)(lVar4 + uVar8 * 8);
      uVar5 = thunk_FUN_007129d0(uVar2);
      if ((uVar6 < uVar5) && (iVar3 = thunk_FUN_00712ab0(uVar2,lVar1,uVar5), iVar3 == 0)) {
        uVar7 = uVar8 & 0xffffffff;
        uVar6 = uVar5;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 100);
    FUN_0070b100(&DAT_00946120);
    if ((int)uVar7 == -1) {
      return uVar7;
    }
    *param_1 = *param_1 + uVar6;
    return uVar7;
  }
LAB_0076865f:
  FUN_0070b100(&DAT_00946120);
  return 0xffffffff;
}

