
undefined8 FUN_0054d290(byte *param_1,long param_2,long param_3,ulong param_4,code *param_5)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  byte *pbVar14;
  long in_FS_OFFSET;
  ulong local_58 [5];
  
  pcVar2 = *(code **)(param_1 + 0x28);
  bVar1 = *param_1;
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar1 & 0x40) == 0) {
    (*pcVar2)(param_1,param_1 + 0x10,uVar4);
  }
  bVar12 = bVar1 & 7;
  *param_1 = bVar12;
  uVar13 = 0xf - bVar12;
  if (uVar13 == 0xf) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar3 = uVar13;
    do {
      uVar11 = uVar3 + 1;
      bVar5 = param_1[uVar3];
      param_1[uVar3] = 0;
      uVar7 = (uVar7 | bVar5) << 8;
      uVar3 = uVar11;
    } while (uVar11 != 0xf);
  }
  bVar5 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar7 | bVar5) != param_4) {
    uVar4 = 0xffffffff;
    goto LAB_0054d41b;
  }
  if (param_4 < 0x10) {
    uVar7 = param_4;
    if (param_4 != 0) goto LAB_0054d452;
  }
  else {
    (*param_5)(param_2,param_3,param_4 >> 4,uVar4,param_1);
    uVar7 = param_4 & 0xfffffffffffffff0;
    param_2 = param_2 + uVar7;
    param_3 = param_3 + uVar7;
    uVar7 = param_4 - uVar7;
    if (uVar7 != 0) {
      uVar9 = param_4 >> 0xc;
      uVar8 = (param_4 >> 4 & 0xff) + (ulong)param_1[0xf];
      param_1[0xf] = (byte)uVar8;
      pbVar14 = param_1 + 0xe;
      do {
        if (uVar9 == 0 && uVar8 >> 8 == 0) break;
        uVar6 = uVar9 & 0xff;
        pbVar10 = pbVar14 + -1;
        uVar9 = uVar9 >> 8;
        uVar8 = (ulong)*pbVar14 + uVar6 + (uVar8 >> 8);
        *pbVar14 = (byte)uVar8;
        pbVar14 = pbVar10;
      } while (pbVar10 != param_1 + 7);
LAB_0054d452:
      (*pcVar2)(param_1,local_58,uVar4);
      uVar8 = 0;
      do {
        bVar5 = *(byte *)((long)local_58 + uVar8) ^ *(byte *)(param_2 + uVar8);
        *(byte *)(param_3 + uVar8) = bVar5;
        param_1[uVar8 + 0x10] = param_1[uVar8 + 0x10] ^ bVar5;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
      (*pcVar2)(param_1 + 0x10,param_1 + 0x10,uVar4);
    }
  }
  bVar12 = bVar12 + 1;
  pbVar14 = param_1 + uVar13;
  if (bVar12 < 8) {
    if ((bVar12 & 4) == 0) {
      if ((bVar12 != 0) && (*pbVar14 = 0, (bVar12 & 2) != 0)) {
        (pbVar14 + ((ulong)bVar12 - 2))[0] = 0;
        (pbVar14 + ((ulong)bVar12 - 2))[1] = 0;
      }
    }
    else {
      pbVar14[0] = 0;
      pbVar14[1] = 0;
      pbVar14[2] = 0;
      pbVar14[3] = 0;
      pbVar14 = pbVar14 + ((ulong)bVar12 - 4);
      pbVar14[0] = 0;
      pbVar14[1] = 0;
      pbVar14[2] = 0;
      pbVar14[3] = 0;
    }
  }
  else {
    pbVar14[0] = 0;
    pbVar14[1] = 0;
    pbVar14[2] = 0;
    pbVar14[3] = 0;
    pbVar14[4] = 0;
    pbVar14[5] = 0;
    pbVar14[6] = 0;
    pbVar14[7] = 0;
    pbVar10 = pbVar14 + ((ulong)bVar12 - 8);
    pbVar10[0] = 0;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10[4] = 0;
    pbVar10[5] = 0;
    pbVar10[6] = 0;
    pbVar10[7] = 0;
    uVar13 = (uint)bVar12 + ((int)pbVar14 - (int)((ulong)(pbVar14 + 8) & 0xfffffffffffffff8)) &
             0xfffffff8;
    if (7 < uVar13) {
      uVar3 = 0;
      do {
        uVar7 = (ulong)uVar3;
        uVar3 = uVar3 + 8;
        *(undefined8 *)(((ulong)(pbVar14 + 8) & 0xfffffffffffffff8) + uVar7) = 0;
      } while (uVar3 < uVar13);
    }
  }
  (*pcVar2)(param_1,local_58,uVar4);
  *param_1 = bVar1;
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ local_58[0];
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ local_58[1];
  uVar4 = 0;
LAB_0054d41b:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

