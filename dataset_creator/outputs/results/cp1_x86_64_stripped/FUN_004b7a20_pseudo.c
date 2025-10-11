
void FUN_004b7a20(ulong param_1,long *param_2,long *param_3,int param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 != param_3) {
    uVar10 = 0xffffffffffffffff - ((long)(param_1 - 1 & ~param_1) >> 0x3f);
    uVar8 = (uint)uVar10;
    uVar7 = (*(uint *)(param_3 + 1) ^ *(uint *)(param_2 + 1)) & uVar8;
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) ^ uVar7;
    uVar2 = *(uint *)(param_2 + 2);
    *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) ^ uVar7;
    uVar7 = (*(uint *)(param_3 + 2) ^ uVar2) & uVar8;
    *(uint *)(param_2 + 2) = uVar2 ^ uVar7;
    uVar2 = *(uint *)((long)param_2 + 0x14);
    *(uint *)(param_3 + 2) = *(uint *)(param_3 + 2) ^ uVar7;
    uVar8 = (*(uint *)((long)param_3 + 0x14) ^ uVar2) & uVar8 & 4;
    *(uint *)((long)param_2 + 0x14) = uVar2 ^ uVar8;
    *(uint *)((long)param_3 + 0x14) = *(uint *)((long)param_3 + 0x14) ^ uVar8;
    if (0 < param_4) {
      lVar3 = *param_2;
      lVar4 = *param_3;
      lVar6 = 0;
      do {
        uVar5 = *(ulong *)(lVar3 + lVar6 * 8);
        uVar9 = (*(ulong *)(lVar4 + lVar6 * 8) ^ uVar5) & uVar10;
        *(ulong *)(lVar3 + lVar6 * 8) = uVar5 ^ uVar9;
        puVar1 = (ulong *)(lVar4 + lVar6 * 8);
        *puVar1 = *puVar1 ^ uVar9;
        lVar6 = lVar6 + 1;
      } while (param_4 != lVar6);
    }
  }
  return;
}

