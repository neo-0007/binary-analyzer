
undefined8 FUN_004b3600(long *param_1,int param_2,ulong *param_3,uint param_4,int param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  ulong *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong *puVar11;
  ulong *puVar12;
  uint uVar13;
  uint uVar14;
  ulong *local_70;
  ulong *local_68;
  ulong *local_60;
  
  uVar14 = 1 << ((byte)param_5 & 0x1f);
  lVar4 = FUN_004b8240();
  if (lVar4 != 0) {
    if (param_5 < 4) {
      if (0 < param_2) {
        puVar1 = (ulong *)*param_1 + 1;
        puVar6 = puVar1;
        puVar12 = (ulong *)*param_1;
        while( true ) {
          puVar11 = puVar6;
          uVar9 = 0;
          uVar7 = 0;
          puVar6 = param_3;
          do {
            uVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            uVar13 = param_4 ^ uVar7;
            uVar7 = uVar7 + 1;
            uVar9 = uVar9 | -(ulong)((uVar13 - 1 & ~uVar13) >> 0x1f) & uVar3;
          } while (uVar14 != uVar7);
          *puVar12 = uVar9;
          param_3 = param_3 + (int)uVar14;
          if (puVar1 + (param_2 - 1) == puVar11) break;
          puVar6 = puVar11 + 1;
          puVar12 = puVar11;
        }
      }
    }
    else {
      bVar5 = (byte)param_5 - 2;
      uVar13 = 1 << (bVar5 & 0x1f);
      uVar7 = (int)param_4 >> (bVar5 & 0x1f);
      if (0 < param_2) {
        local_68 = (ulong *)*param_1;
        local_60 = local_68 + 1;
        puVar1 = local_60 + (param_2 - 1);
        local_70 = param_3;
        while( true ) {
          uVar9 = 0;
          uVar10 = 0;
          puVar6 = local_70;
          do {
            puVar12 = puVar6 + (int)uVar13;
            uVar3 = *puVar6;
            puVar11 = puVar6 + (3 << (bVar5 & 0x1f));
            puVar2 = puVar6 + (2 << (bVar5 & 0x1f));
            puVar6 = puVar6 + 1;
            uVar8 = uVar13 - 1 & param_4 ^ uVar10;
            uVar10 = uVar10 + 1;
            uVar9 = uVar9 | (uVar3 & -(ulong)((~uVar7 & uVar7 - 1) >> 0x1f) |
                             *puVar2 & -(ulong)(((uVar7 ^ 2) - 1 & (uVar7 ^ 0xfffffffd)) >> 0x1f) |
                             *puVar12 & -(ulong)(((uVar7 ^ 1) - 1 & (uVar7 ^ 0xfffffffe)) >> 0x1f) |
                            *puVar11 & -(ulong)(((uVar7 ^ 3) - 1 & (uVar7 ^ 0xfffffffc)) >> 0x1f)) &
                            -(ulong)((~uVar8 & uVar8 - 1) >> 0x1f);
          } while (uVar13 != uVar10);
          local_70 = local_70 + (int)uVar14;
          *local_68 = uVar9;
          local_68 = local_60;
          if (puVar1 == local_60) break;
          local_60 = local_60 + 1;
        }
      }
    }
    *(int *)(param_1 + 1) = param_2;
    return 1;
  }
  return 0;
}

