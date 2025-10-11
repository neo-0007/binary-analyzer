
void FUN_0058eb10(long *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar9 = *(uint *)(param_1 + 5);
  *param_1 = *param_1 + param_3;
  uVar10 = param_1[1];
  uVar8 = param_1[2];
  uVar11 = param_1[3];
  uVar5 = param_1[4];
  if (uVar9 != 0) {
    lVar2 = (long)param_1 + (ulong)uVar9 + 0x38;
    uVar6 = (ulong)(8 - uVar9);
    if (param_3 < uVar6) {
      thunk_FUN_00713a50(lVar2,param_2,param_3);
      *(int *)(param_1 + 5) = (int)param_1[5] + (int)param_3;
      return;
    }
    thunk_FUN_00713a50(lVar2);
    param_3 = param_3 - uVar6;
    param_2 = (ulong *)((long)param_2 + uVar6);
    uVar5 = uVar5 ^ param_1[7];
    if ((int)param_1[6] != 0) {
      iVar3 = 0;
      do {
        uVar10 = uVar10 + uVar8;
        iVar3 = iVar3 + 1;
        uVar8 = (uVar8 << 0xd | uVar8 >> 0x33) ^ uVar10;
        uVar6 = (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar11 + uVar5;
        uVar11 = uVar11 + uVar5 + uVar8;
        uVar10 = (uVar10 << 0x20 | uVar10 >> 0x20) + uVar6;
        uVar8 = (uVar8 << 0x11 | uVar8 >> 0x2f) ^ uVar11;
        uVar5 = (uVar6 << 0x15 | uVar6 >> 0x2b) ^ uVar10;
        uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
      } while (iVar3 != (int)param_1[6]);
    }
    uVar10 = uVar10 ^ param_1[7];
  }
  puVar1 = (ulong *)((long)param_2 + (param_3 & 0xfffffffffffffff8));
  uVar9 = (uint)param_3 & 7;
  if (param_2 != puVar1) {
    do {
      uVar6 = *param_2;
      uVar5 = uVar5 ^ uVar6;
      if ((int)param_1[6] != 0) {
        iVar3 = 0;
        do {
          uVar10 = uVar10 + uVar8;
          iVar3 = iVar3 + 1;
          uVar8 = (uVar8 << 0xd | uVar8 >> 0x33) ^ uVar10;
          uVar7 = (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar11 + uVar5;
          uVar11 = uVar11 + uVar5 + uVar8;
          uVar10 = (uVar10 << 0x20 | uVar10 >> 0x20) + uVar7;
          uVar8 = (uVar8 << 0x11 | uVar8 >> 0x2f) ^ uVar11;
          uVar5 = (uVar7 << 0x15 | uVar7 >> 0x2b) ^ uVar10;
          uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
        } while ((int)param_1[6] != iVar3);
      }
      param_2 = param_2 + 1;
      uVar10 = uVar10 ^ uVar6;
    } while (puVar1 != param_2);
  }
  if ((param_3 & 7) != 0) {
    uVar4 = 0;
    do {
      uVar6 = (ulong)uVar4;
      uVar4 = uVar4 + 1;
      *(undefined1 *)((long)param_1 + uVar6 + 0x38) = *(undefined1 *)((long)puVar1 + uVar6);
    } while (uVar4 < uVar9);
  }
  param_1[1] = uVar10;
  param_1[2] = uVar8;
  param_1[3] = uVar11;
  param_1[4] = uVar5;
  *(uint *)(param_1 + 5) = uVar9;
  return;
}

