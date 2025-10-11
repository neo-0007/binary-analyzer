
void SipHash_Update(long *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  void *__dest;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = *(uint *)(param_1 + 5);
  *param_1 = *param_1 + param_3;
  uVar9 = param_1[1];
  uVar7 = param_1[2];
  uVar10 = param_1[3];
  uVar4 = param_1[4];
  if (uVar8 != 0) {
    __dest = (void *)((long)param_1 + (ulong)uVar8 + 0x38);
    uVar5 = (ulong)(8 - uVar8);
    if (param_3 < uVar5) {
      memcpy(__dest,param_2,param_3);
      *(int *)(param_1 + 5) = (int)param_1[5] + (int)param_3;
      return;
    }
    memcpy(__dest,param_2,uVar5);
    param_3 = param_3 - uVar5;
    param_2 = (ulong *)((long)param_2 + uVar5);
    uVar4 = uVar4 ^ param_1[7];
    if ((int)param_1[6] != 0) {
      iVar2 = 0;
      do {
        uVar9 = uVar9 + uVar7;
        iVar2 = iVar2 + 1;
        uVar7 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar9;
        uVar5 = (uVar4 << 0x10 | uVar4 >> 0x30) ^ uVar10 + uVar4;
        uVar10 = uVar10 + uVar4 + uVar7;
        uVar9 = (uVar9 << 0x20 | uVar9 >> 0x20) + uVar5;
        uVar7 = (uVar7 << 0x11 | uVar7 >> 0x2f) ^ uVar10;
        uVar4 = (uVar5 << 0x15 | uVar5 >> 0x2b) ^ uVar9;
        uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
      } while (iVar2 != (int)param_1[6]);
    }
    uVar9 = uVar9 ^ param_1[7];
  }
  puVar1 = (ulong *)((long)param_2 + (param_3 & 0xfffffffffffffff8));
  uVar8 = (uint)param_3 & 7;
  if (param_2 != puVar1) {
    do {
      uVar5 = *param_2;
      uVar4 = uVar4 ^ uVar5;
      if ((int)param_1[6] != 0) {
        iVar2 = 0;
        do {
          uVar9 = uVar9 + uVar7;
          iVar2 = iVar2 + 1;
          uVar7 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar9;
          uVar6 = (uVar4 << 0x10 | uVar4 >> 0x30) ^ uVar10 + uVar4;
          uVar10 = uVar10 + uVar4 + uVar7;
          uVar9 = (uVar9 << 0x20 | uVar9 >> 0x20) + uVar6;
          uVar7 = (uVar7 << 0x11 | uVar7 >> 0x2f) ^ uVar10;
          uVar4 = (uVar6 << 0x15 | uVar6 >> 0x2b) ^ uVar9;
          uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
        } while ((int)param_1[6] != iVar2);
      }
      param_2 = param_2 + 1;
      uVar9 = uVar9 ^ uVar5;
    } while (puVar1 != param_2);
  }
  if ((param_3 & 7) != 0) {
    uVar3 = 0;
    do {
      uVar5 = (ulong)uVar3;
      uVar3 = uVar3 + 1;
      *(undefined1 *)((long)param_1 + uVar5 + 0x38) = *(undefined1 *)((long)puVar1 + uVar5);
    } while (uVar3 < uVar8);
  }
  param_1[1] = uVar9;
  param_1[2] = uVar7;
  param_1[3] = uVar10;
  param_1[4] = uVar4;
  *(uint *)(param_1 + 5) = uVar8;
  return;
}

