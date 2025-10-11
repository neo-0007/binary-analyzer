
void FUN_004b8410(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (0 < *(int *)((long)param_1 + 0xc)) {
    uVar5 = 1;
    uVar3 = 0;
    do {
      lVar1 = *(long *)(*param_1 + -8 + uVar5 * 8);
      uVar4 = (uint)uVar5;
      uVar2 = (int)((uVar4 - (int)param_1[1]) - 1 &
                   ((uint)((ulong)-lVar1 >> 0x20) | (uint)((ulong)lVar1 >> 0x20))) >> 0x1f;
      uVar5 = uVar5 + 1;
      uVar3 = uVar2 & uVar4 | ~uVar2 & uVar3;
    } while (*(int *)((long)param_1 + 0xc) + 1 != uVar5);
    *(uint *)(param_1 + 1) = uVar3;
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & ~((int)(~uVar3 & uVar3 - 1) >> 0x1f);
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}

