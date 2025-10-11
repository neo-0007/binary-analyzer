
undefined8 FUN_0054cc70(byte *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  ulong *puVar12;
  ulong *puVar13;
  long in_FS_OFFSET;
  ulong *local_88;
  ulong *local_80;
  ulong local_78;
  ulong *local_70;
  ulong local_58 [5];
  
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  pcVar3 = *(code **)(param_1 + 0x28);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = *param_1;
  if ((bVar2 & 0x40) == 0) {
    (*pcVar3)(param_1,param_1 + 0x10,uVar7);
  }
  bVar4 = bVar2 & 7;
  *param_1 = bVar4;
  uVar5 = 0;
  for (uVar8 = 0xf - bVar4; uVar8 != 0xf; uVar8 = uVar8 + 1) {
    bVar9 = param_1[uVar8];
    param_1[uVar8] = 0;
    uVar5 = (uVar5 | bVar9) << 8;
  }
  bVar9 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar5 | bVar9) == param_4) {
    local_80 = param_2;
    local_78 = param_4;
    local_70 = param_3;
    if (0xf < param_4) {
      lVar6 = (param_4 - 0x10 & 0xfffffffffffffff0) + 0x10;
      local_80 = (ulong *)(lVar6 + (long)param_2);
      puVar12 = param_3;
      do {
        (*pcVar3)(param_1,local_58,uVar7);
        uVar5 = 8;
        do {
          uVar8 = (int)uVar5 - 1;
          uVar5 = (ulong)uVar8;
          pbVar11 = param_1 + uVar5 + 8;
          *pbVar11 = *pbVar11 + 1;
          if (*pbVar11 != 0) break;
        } while (uVar8 != 0);
        uVar5 = *param_2;
        *puVar12 = local_58[0] ^ uVar5;
        puVar13 = param_2 + 2;
        *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ local_58[0] ^ uVar5;
        uVar5 = param_2[1];
        puVar12[1] = local_58[1] ^ uVar5;
        *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ local_58[1] ^ uVar5;
        (*pcVar3)(param_1 + 0x10,param_1 + 0x10,uVar7);
        puVar12 = puVar12 + 2;
        param_2 = puVar13;
      } while (local_80 != puVar13);
      local_78 = param_4 & 0xf;
      local_70 = (ulong *)((long)param_3 + lVar6);
    }
    local_88 = local_58;
    if (local_78 != 0) {
      (*pcVar3)(param_1,local_88,uVar7);
      uVar5 = 0;
      do {
        bVar9 = *(byte *)((long)local_88 + uVar5) ^ *(byte *)((long)local_80 + uVar5);
        *(byte *)((long)local_70 + uVar5) = bVar9;
        param_1[uVar5 + 0x10] = param_1[uVar5 + 0x10] ^ bVar9;
        uVar5 = uVar5 + 1;
      } while (local_78 != uVar5);
      (*pcVar3)(param_1 + 0x10,param_1 + 0x10,uVar7);
    }
    bVar9 = bVar4 + 1;
    pbVar11 = param_1 + (0xf - bVar4);
    if (bVar9 < 8) {
      if ((bVar9 & 4) == 0) {
        if ((bVar9 != 0) && (*pbVar11 = 0, (bVar9 & 2) != 0)) {
          (pbVar11 + ((ulong)bVar9 - 2))[0] = 0;
          (pbVar11 + ((ulong)bVar9 - 2))[1] = 0;
        }
      }
      else {
        pbVar11[0] = 0;
        pbVar11[1] = 0;
        pbVar11[2] = 0;
        pbVar11[3] = 0;
        pbVar11 = pbVar11 + ((ulong)bVar9 - 4);
        pbVar11[0] = 0;
        pbVar11[1] = 0;
        pbVar11[2] = 0;
        pbVar11[3] = 0;
      }
    }
    else {
      pbVar11[0] = 0;
      pbVar11[1] = 0;
      pbVar11[2] = 0;
      pbVar11[3] = 0;
      pbVar11[4] = 0;
      pbVar11[5] = 0;
      pbVar11[6] = 0;
      pbVar11[7] = 0;
      pbVar1 = pbVar11 + ((ulong)bVar9 - 8);
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      uVar8 = (uint)bVar9 + ((int)pbVar11 - (int)((ulong)(pbVar11 + 8) & 0xfffffffffffffff8)) &
              0xfffffff8;
      if (7 < uVar8) {
        uVar10 = 0;
        do {
          uVar5 = (ulong)uVar10;
          uVar10 = uVar10 + 8;
          *(undefined8 *)(((ulong)(pbVar11 + 8) & 0xfffffffffffffff8) + uVar5) = 0;
        } while (uVar10 < uVar8);
      }
    }
    (*pcVar3)(param_1,local_88,uVar7);
    *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ local_58[0];
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ local_58[1];
    *param_1 = bVar2;
    uVar7 = 0;
  }
  else {
    uVar7 = 0xffffffff;
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

