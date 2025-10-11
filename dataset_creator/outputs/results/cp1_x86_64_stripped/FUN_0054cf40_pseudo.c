
undefined8 FUN_0054cf40(byte *param_1,long param_2,long param_3,ulong param_4,code *param_5)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  byte bVar14;
  long in_FS_OFFSET;
  ulong local_58 [5];
  
  bVar1 = *param_1;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = *(code **)(param_1 + 0x28);
  if ((bVar1 & 0x40) == 0) {
    (*pcVar3)(param_1,param_1 + 0x10,uVar7);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  bVar14 = bVar1 & 7;
  *param_1 = bVar14;
  uVar4 = 0xf - bVar14;
  if (uVar4 == 0xf) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    uVar5 = uVar4;
    do {
      uVar13 = uVar5 + 1;
      bVar2 = param_1[uVar5];
      param_1[uVar5] = 0;
      uVar9 = (uVar9 | bVar2) << 8;
      uVar5 = uVar13;
    } while (uVar13 != 0xf);
  }
  bVar2 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar9 | bVar2) != param_4) {
    uVar7 = 0xffffffff;
    goto LAB_0054d0e6;
  }
  uVar9 = (param_4 + 0xf >> 3 | 1) + *(long *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x20) = uVar9;
  if (0x2000000000000000 < uVar9) {
    uVar7 = 0xfffffffe;
    goto LAB_0054d0e6;
  }
  if (param_4 < 0x10) {
    uVar9 = param_4;
    if (param_4 != 0) goto LAB_0054d122;
  }
  else {
    (*param_5)(param_2,param_3,param_4 >> 4,uVar7,param_1);
    uVar9 = param_4 & 0xfffffffffffffff0;
    param_2 = param_2 + uVar9;
    param_3 = param_3 + uVar9;
    uVar9 = param_4 - uVar9;
    if (uVar9 != 0) {
      uVar11 = param_4 >> 0xc;
      uVar10 = (param_4 >> 4 & 0xff) + (ulong)param_1[0xf];
      param_1[0xf] = (byte)uVar10;
      pbVar6 = param_1 + 0xe;
      do {
        if (uVar10 >> 8 == 0 && uVar11 == 0) break;
        uVar8 = uVar11 & 0xff;
        pbVar12 = pbVar6 + -1;
        uVar11 = uVar11 >> 8;
        uVar10 = (ulong)*pbVar6 + uVar8 + (uVar10 >> 8);
        *pbVar6 = (byte)uVar10;
        pbVar6 = pbVar12;
      } while (param_1 + 7 != pbVar12);
LAB_0054d122:
      uVar10 = 0;
      do {
        param_1[uVar10 + 0x10] = param_1[uVar10 + 0x10] ^ *(byte *)(param_2 + uVar10);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar9);
      (*pcVar3)(param_1 + 0x10,param_1 + 0x10,uVar7);
      (*pcVar3)(param_1,local_58,uVar7);
      uVar10 = 0;
      do {
        *(byte *)(param_3 + uVar10) =
             *(byte *)((long)local_58 + uVar10) ^ *(byte *)(param_2 + uVar10);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar9);
    }
  }
  bVar14 = bVar14 + 1;
  pbVar6 = param_1 + uVar4;
  if (bVar14 < 8) {
    if ((bVar14 & 4) == 0) {
      if ((bVar14 != 0) && (*pbVar6 = 0, (bVar14 & 2) != 0)) {
        (pbVar6 + ((ulong)bVar14 - 2))[0] = 0;
        (pbVar6 + ((ulong)bVar14 - 2))[1] = 0;
      }
    }
    else {
      pbVar6[0] = 0;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      pbVar6[3] = 0;
      pbVar6 = pbVar6 + ((ulong)bVar14 - 4);
      pbVar6[0] = 0;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      pbVar6[3] = 0;
    }
  }
  else {
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6[4] = 0;
    pbVar6[5] = 0;
    pbVar6[6] = 0;
    pbVar6[7] = 0;
    pbVar12 = pbVar6 + ((ulong)bVar14 - 8);
    pbVar12[0] = 0;
    pbVar12[1] = 0;
    pbVar12[2] = 0;
    pbVar12[3] = 0;
    pbVar12[4] = 0;
    pbVar12[5] = 0;
    pbVar12[6] = 0;
    pbVar12[7] = 0;
    uVar4 = (uint)bVar14 + ((int)pbVar6 - (int)((ulong)(pbVar6 + 8) & 0xfffffffffffffff8)) &
            0xfffffff8;
    if (7 < uVar4) {
      uVar5 = 0;
      do {
        uVar9 = (ulong)uVar5;
        uVar5 = uVar5 + 8;
        *(undefined8 *)(((ulong)(pbVar6 + 8) & 0xfffffffffffffff8) + uVar9) = 0;
      } while (uVar5 < uVar4);
    }
  }
  (*pcVar3)(param_1,local_58,uVar7);
  *param_1 = bVar1;
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ local_58[0];
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ local_58[1];
  uVar7 = 0;
LAB_0054d0e6:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar7;
}

