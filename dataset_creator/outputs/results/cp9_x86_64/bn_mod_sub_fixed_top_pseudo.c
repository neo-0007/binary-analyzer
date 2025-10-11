
undefined8 bn_mod_sub_fixed_top(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  bool bVar21;
  
  lVar5 = param_4[1];
  lVar20 = (long)(int)lVar5;
  lVar6 = bn_wexpand(param_1,lVar20);
  if (lVar6 != 0) {
    lVar6 = *param_1;
    lVar12 = *param_2;
    if (*param_2 == 0) {
      lVar12 = lVar6;
    }
    lVar13 = *param_3;
    if (*param_3 == 0) {
      lVar13 = lVar6;
    }
    if (lVar20 != 0) {
      lVar19 = (long)(int)param_2[1];
      iVar3 = *(int *)((long)param_3 + 0xc);
      lVar15 = param_3[1];
      iVar4 = *(int *)((long)param_2 + 0xc);
      lVar18 = 0;
      lVar17 = 0;
      uVar16 = 0;
      lVar7 = -lVar19;
      do {
        uVar14 = lVar7 >> 0x3f & *(ulong *)(lVar12 + lVar17 * 8);
        uVar10 = (lVar19 - (int)lVar15) + lVar7 >> 0x3f & *(ulong *)(lVar13 + lVar18 * 8);
        *(ulong *)(lVar6 + lVar19 * 8 + lVar7 * 8) = (uVar14 - uVar16) - uVar10;
        if (uVar14 != uVar10) {
          uVar16 = (ulong)(uVar14 < uVar10);
        }
        lVar17 = lVar17 - (((lVar19 + 1) - (long)iVar4) + lVar7 >> 0x3f);
        lVar1 = (lVar19 - iVar3) + 1 + lVar7;
        lVar7 = lVar7 + 1;
        lVar18 = lVar18 - (lVar1 >> 0x3f);
      } while (lVar20 - lVar19 != lVar7);
      lVar12 = *param_4;
      uVar10 = 0;
      lVar13 = 0;
      do {
        lVar15 = lVar13;
        uVar8 = *(ulong *)(lVar12 + lVar15 * 8) & -uVar16;
        uVar9 = uVar8 + uVar10;
        puVar2 = (ulong *)(lVar6 + lVar15 * 8);
        uVar14 = *puVar2;
        *puVar2 = *puVar2 + uVar9;
        uVar10 = (ulong)CARRY8(uVar8,uVar10) + (ulong)CARRY8(uVar14,uVar9);
        lVar13 = lVar15 + 1;
      } while (lVar20 != lVar15 + 1);
      uVar14 = 0;
      lVar20 = 0;
      do {
        uVar9 = *(ulong *)(lVar12 + lVar20 * 8) & uVar10 - uVar16;
        uVar11 = uVar9 + uVar14;
        puVar2 = (ulong *)(lVar6 + lVar20 * 8);
        uVar8 = *puVar2;
        *puVar2 = *puVar2 + uVar11;
        uVar14 = (ulong)CARRY8(uVar9,uVar14) + (ulong)CARRY8(uVar8,uVar11);
        bVar21 = lVar15 != lVar20;
        lVar20 = lVar20 + 1;
      } while (bVar21);
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *(int *)(param_1 + 1) = (int)lVar5;
    return 1;
  }
  return 0;
}

