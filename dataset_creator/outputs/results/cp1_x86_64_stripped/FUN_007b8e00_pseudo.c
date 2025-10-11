
uint * FUN_007b8e00(long *param_1,byte *param_2,uint param_3,undefined8 param_4,int param_5)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  uint *puVar13;
  
  if (param_1[0x60] == 0) {
    uVar10 = (ulong)*param_2;
    uVar11 = 0;
    if ((uVar10 != 0) && (uVar11 = uVar10, param_2[1] != 0)) {
      uVar11 = uVar10 * 0x10 + (ulong)param_2[1];
      if (param_2[2] != 0) {
        uVar11 = (ulong)param_2[2] + uVar11 * 0x10;
        if (param_2[3] != 0) {
          uVar11 = (ulong)param_2[3] + uVar11 * 0x10;
          if (param_2[4] != 0) {
            pbVar12 = param_2 + 5;
            uVar11 = (ulong)param_2[4] + uVar11 * 0x10;
            uVar7 = (uint)uVar11;
            bVar4 = param_2[5];
            while (bVar4 != 0) {
              pbVar12 = pbVar12 + 1;
              uVar11 = uVar11 * 0x10 + (ulong)bVar4;
              uVar11 = uVar11 ^ (uint)(uVar11 >> 0x18) & 0xf0;
              uVar7 = (uint)uVar11;
              bVar4 = *pbVar12;
            }
            uVar11 = (ulong)(uVar7 & 0xfffffff);
          }
        }
      }
    }
    uVar7 = *(uint *)(param_1[0x62] + (uVar11 % (ulong)*(uint *)((long)param_1 + 0x2f4)) * 4);
    if (uVar7 != 0) {
      bVar4 = *(byte *)((long)param_1 + 0x31e);
      lVar3 = *(long *)(param_1[0xe] + 8);
      do {
        uVar11 = (ulong)uVar7;
        if ((bVar4 & 0x20) == 0) {
          lVar8 = 0;
          lVar9 = lVar3;
        }
        else {
          lVar8 = *param_1;
          lVar9 = lVar3 + lVar8;
        }
        puVar13 = (uint *)(lVar9 + uVar11 * 0x18);
        bVar5 = (byte)puVar13[1] & 0xf;
        if ((((*(long *)(puVar13 + 2) != 0) || (*(short *)((long)puVar13 + 6) == -0xf)) ||
            (bVar5 == 6)) &&
           ((((0xfffffb98U >> bVar5 & 1) == 0 &&
             (iVar6 = thunk_FUN_00712780(lVar8 + *(long *)(param_1[0xd] + 8) + (ulong)*puVar13,
                                         param_2), iVar6 == 0)) &&
            ((puVar2 = (undefined8 *)
                       (param_1[0x5d] +
                       (ulong)(*(ushort *)(param_1[0x69] + uVar11 * 2) & 0x7fff) * 0x18),
             param_5 == *(int *)(puVar2 + 1) &&
             (iVar6 = thunk_FUN_00712780(*puVar2,param_4), iVar6 == 0)))))) {
          return puVar13;
        }
        uVar7 = *(uint *)(param_1[0x61] + uVar11 * 4);
      } while (uVar7 != 0);
    }
  }
  else {
    uVar7 = *(uint *)(param_1[0x61] + ((ulong)param_3 % (ulong)*(uint *)((long)param_1 + 0x2f4)) * 4
                     );
    if (uVar7 == 0) {
      return (uint *)0x0;
    }
    lVar3 = param_1[0x62];
    puVar13 = (uint *)(lVar3 + (ulong)uVar7 * 4);
    do {
      uVar7 = *puVar13;
      if ((uVar7 ^ param_3) >> 1 == 0) {
        lVar9 = 0;
        lVar8 = *(long *)(param_1[0xe] + 8);
        if ((*(byte *)((long)param_1 + 0x31e) & 0x20) != 0) {
          lVar9 = *param_1;
          lVar8 = lVar8 + lVar9;
        }
        uVar11 = (long)puVar13 - lVar3 >> 2 & 0xffffffff;
        puVar1 = (uint *)(lVar8 + uVar11 * 0x18);
        bVar4 = (byte)puVar1[1] & 0xf;
        if (((((*(long *)(puVar1 + 2) != 0) || (*(short *)((long)puVar1 + 6) == -0xf)) ||
             (bVar4 == 6)) &&
            ((((0xfffffb98U >> bVar4 & 1) == 0 &&
              (iVar6 = thunk_FUN_00712780(lVar9 + *(long *)(param_1[0xd] + 8) + (ulong)*puVar1,
                                          param_2), iVar6 == 0)) &&
             (puVar2 = (undefined8 *)
                       (param_1[0x5d] +
                       (ulong)(*(ushort *)(param_1[0x69] + uVar11 * 2) & 0x7fff) * 0x18),
             param_5 == *(int *)(puVar2 + 1))))) &&
           (iVar6 = thunk_FUN_00712780(*puVar2,param_4), iVar6 == 0)) {
          return puVar1;
        }
      }
      puVar13 = puVar13 + 1;
    } while ((uVar7 & 1) == 0);
  }
  return (uint *)0x0;
}

