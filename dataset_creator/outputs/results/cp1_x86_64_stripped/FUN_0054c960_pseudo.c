
undefined8 FUN_0054c960(byte *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  ulong *puVar12;
  ulong *puVar13;
  long in_FS_OFFSET;
  ulong *local_80;
  ulong local_78;
  ulong *local_70;
  ulong local_58 [5];
  
  pcVar3 = *(code **)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = *param_1;
  if ((bVar2 & 0x40) == 0) {
    (*pcVar3)(param_1,param_1 + 0x10,uVar8);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  bVar4 = bVar2 & 7;
  *param_1 = bVar4;
  uVar6 = 0;
  for (uVar11 = 0xf - bVar4; uVar11 != 0xf; uVar11 = uVar11 + 1) {
    bVar5 = param_1[uVar11];
    param_1[uVar11] = 0;
    uVar6 = (uVar6 | bVar5) << 8;
  }
  bVar5 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar6 | bVar5) == param_4) {
    uVar6 = (param_4 + 0xf >> 3 | 1) + *(long *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = uVar6;
    if (uVar6 < 0x2000000000000001) {
      local_80 = param_3;
      local_78 = param_4;
      local_70 = param_2;
      if (0xf < param_4) {
        lVar7 = (param_4 - 0x10 & 0xfffffffffffffff0) + 0x10;
        local_80 = (ulong *)(lVar7 + (long)param_3);
        puVar13 = param_2;
        do {
          *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ *puVar13;
          *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ puVar13[1];
          (*pcVar3)(param_1 + 0x10,param_1 + 0x10,uVar8);
          (*pcVar3)(param_1,local_58,uVar8);
          uVar6 = 8;
          do {
            uVar11 = (int)uVar6 - 1;
            uVar6 = (ulong)uVar11;
            pbVar10 = param_1 + uVar6 + 8;
            *pbVar10 = *pbVar10 + 1;
            if (*pbVar10 != 0) break;
          } while (uVar11 != 0);
          puVar12 = param_3 + 2;
          *param_3 = local_58[0] ^ *puVar13;
          param_3[1] = local_58[1] ^ puVar13[1];
          param_3 = puVar12;
          puVar13 = puVar13 + 2;
        } while (puVar12 != local_80);
        local_78 = param_4 & 0xf;
        local_70 = (ulong *)((long)param_2 + lVar7);
      }
      if (local_78 != 0) {
        uVar6 = 0;
        do {
          param_1[uVar6 + 0x10] = param_1[uVar6 + 0x10] ^ *(byte *)((long)local_70 + uVar6);
          uVar6 = uVar6 + 1;
        } while (uVar6 != local_78);
        (*pcVar3)(param_1 + 0x10,param_1 + 0x10,uVar8);
        (*pcVar3)(param_1,local_58,uVar8);
        uVar6 = 0;
        do {
          *(byte *)((long)local_80 + uVar6) =
               *(byte *)((long)local_58 + uVar6) ^ *(byte *)((long)local_70 + uVar6);
          uVar6 = uVar6 + 1;
        } while (local_78 != uVar6);
      }
      bVar5 = bVar4 + 1;
      pbVar10 = param_1 + (0xf - bVar4);
      if (bVar5 < 8) {
        if ((bVar5 & 4) == 0) {
          if ((bVar5 != 0) && (*pbVar10 = 0, (bVar5 & 2) != 0)) {
            (pbVar10 + ((ulong)bVar5 - 2))[0] = 0;
            (pbVar10 + ((ulong)bVar5 - 2))[1] = 0;
          }
        }
        else {
          pbVar10[0] = 0;
          pbVar10[1] = 0;
          pbVar10[2] = 0;
          pbVar10[3] = 0;
          pbVar10 = pbVar10 + ((ulong)bVar5 - 4);
          pbVar10[0] = 0;
          pbVar10[1] = 0;
          pbVar10[2] = 0;
          pbVar10[3] = 0;
        }
      }
      else {
        pbVar10[0] = 0;
        pbVar10[1] = 0;
        pbVar10[2] = 0;
        pbVar10[3] = 0;
        pbVar10[4] = 0;
        pbVar10[5] = 0;
        pbVar10[6] = 0;
        pbVar10[7] = 0;
        pbVar1 = pbVar10 + ((ulong)bVar5 - 8);
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        uVar11 = (uint)bVar5 + ((int)pbVar10 - (int)((ulong)(pbVar10 + 8) & 0xfffffffffffffff8)) &
                 0xfffffff8;
        if (7 < uVar11) {
          uVar6 = 0;
          do {
            uVar9 = (int)uVar6 + 8;
            *(undefined8 *)(((ulong)(pbVar10 + 8) & 0xfffffffffffffff8) + uVar6) = 0;
            uVar6 = (ulong)uVar9;
          } while (uVar9 < uVar11);
        }
      }
      (*pcVar3)(param_1,local_58,uVar8);
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ local_58[0];
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ local_58[1];
      *param_1 = bVar2;
      uVar8 = 0;
    }
    else {
      uVar8 = 0xfffffffe;
    }
  }
  else {
    uVar8 = 0xffffffff;
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

