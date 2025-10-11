
bool FUN_00618820(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  bool bVar19;
  
  FUN_004b2c00(param_4);
  plVar15 = (long *)FUN_004b2df0(param_4);
  if (plVar15 != (long *)0x0) {
    lVar16 = FUN_004b8240(plVar15,(int)param_2[1] * 2);
    if (lVar16 != 0) {
      lVar16 = param_2[1];
      iVar14 = (int)lVar16 + -1;
      if (-1 < iVar14) {
        lVar18 = (long)iVar14;
        lVar1 = *param_2;
        puVar17 = (ulong *)(*plVar15 + (long)(iVar14 * 2) * 8);
        do {
          uVar2 = *(undefined8 *)(lVar1 + lVar18 * 8);
          uVar4 = (uint)((ulong)uVar2 >> 0x20);
          bVar5 = (byte)((ulong)uVar2 >> 0x38);
          uVar6 = (ushort)((ulong)uVar2 >> 0x30);
          puVar17[1] = (ulong)((uVar4 >> 4) * 8 & 0x40 | (uVar4 >> 4) * 4 & 0x10 | uVar4 >> 4 & 1 |
                              (uVar4 >> 4) * 2 & 4) << 8 |
                       (ulong)((uint)uVar6 * 8 & 0x40 | (uint)uVar6 * 4 & 0x10 | uVar6 & 1 |
                              (uint)uVar6 * 2 & 4) << 0x20 |
                       (ulong)((uVar4 >> 0x1c) * 8 & 0x40 | (uVar4 >> 0x1c) * 4 & 0x10 |
                               uVar4 >> 0x1c & 1 | (uVar4 >> 0x1c) * 2 & 4) << 0x38 |
                       (ulong)(uVar4 * 8 & 0x40 | uVar4 * 4 & 0x10 | uVar4 & 1 | uVar4 * 2 & 4) |
                       (ulong)((uint)bVar5 * 8 & 0x40 | (uint)bVar5 * 4 & 0x10 | bVar5 & 1 |
                              (uint)bVar5 * 2 & 4) << 0x30 |
                       (ulong)((uVar4 >> 0x14) * 8 & 0x40 | (uVar4 >> 0x14) * 4 & 0x10 |
                               uVar4 >> 0x14 & 1 | (uVar4 >> 0x14) * 2 & 4) << 0x28 |
                       (ulong)((uVar4 >> 0xc) * 8 & 0x40 | (uVar4 >> 0xc) * 4 & 0x10 |
                               uVar4 >> 0xc & 1 | (uVar4 >> 0xc) * 2 & 4) << 0x18 |
                       (ulong)((uVar4 >> 8) * 8 & 0x40 | (uVar4 >> 8) * 4 & 0x10 | uVar4 >> 8 & 1 |
                              (uVar4 >> 8) * 2 & 4) << 0x10;
          uVar3 = *(ulong *)(lVar1 + lVar18 * 8);
          uVar4 = (uint)(uVar3 >> 0x1c);
          uVar7 = (uint)uVar3;
          uVar8 = (uint)(uVar3 >> 0x18);
          uVar9 = (uint)(uVar3 >> 0x14);
          uVar10 = (uint)(uVar3 >> 0x10);
          uVar11 = (uint)(uVar3 >> 0xc);
          uVar12 = (uint)(uVar3 >> 8);
          uVar13 = (uint)(uVar3 >> 4);
          lVar18 = lVar18 + -1;
          *puVar17 = (ulong)(uVar13 * 8 & 0x40 | uVar13 * 4 & 0x10 | uVar13 & 1 | uVar13 * 2 & 4) <<
                     8 | (ulong)(uVar10 * 8 & 0x40 | uVar10 * 4 & 0x10 | uVar10 & 1 | uVar10 * 2 & 4
                                ) << 0x20 |
                         (ulong)(uVar7 * 8 & 0x40 | uVar7 * 4 & 0x10 | uVar7 & 1 | uVar7 * 2 & 4) |
                         (ulong)(uVar4 * 8 & 0x40 | uVar4 * 4 & 0x10 | uVar4 & 1 | uVar4 * 2 & 4) <<
                         0x38 | (ulong)(uVar8 * 2 & 4 |
                                       uVar8 * 8 & 0x40 | uVar8 * 4 & 0x10 | uVar8 & 1) << 0x30 |
                         (ulong)(uVar9 * 2 & 4 | uVar9 * 8 & 0x40 | uVar9 * 4 & 0x10 | uVar9 & 1) <<
                         0x28 | (ulong)(uVar11 * 2 & 4 |
                                       uVar11 * 8 & 0x40 | uVar11 * 4 & 0x10 | uVar11 & 1) << 0x18 |
                         (ulong)(uVar12 * 8 & 0x40 | uVar12 * 4 & 0x10 | uVar12 & 1 | uVar12 * 2 & 4
                                ) << 0x10;
          puVar17 = puVar17 + -2;
        } while (-1 < (int)lVar18);
      }
      *(int *)(plVar15 + 1) = (int)lVar16 * 2;
      FUN_004b8490(plVar15);
      iVar14 = FUN_00618590(param_1,plVar15,param_3);
      bVar19 = iVar14 != 0;
      goto LAB_00618c82;
    }
  }
  bVar19 = false;
LAB_00618c82:
  FUN_004b2d50(param_4);
  return bVar19;
}

