
void ecp_nistz256_from_mont(long *param_1,ulong *param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;
  
  uVar18 = *param_2;
  uVar1 = param_2[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar18;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = DAT_005eb018;
  uVar12 = SUB168(auVar3 * auVar7,0);
  uVar15 = uVar1 + (uVar18 << 0x20);
  uVar13 = (ulong)CARRY8(uVar1,uVar18 << 0x20);
  uVar17 = param_2[2] + (uVar18 >> 0x20);
  uVar16 = uVar17 + uVar13;
  uVar18 = (ulong)(CARRY8(param_2[2],uVar18 >> 0x20) || CARRY8(uVar17,uVar13));
  uVar13 = param_2[3] + uVar12;
  uVar19 = uVar13 + uVar18;
  uVar12 = SUB168(auVar3 * auVar7,8) + (ulong)(CARRY8(param_2[3],uVar12) || CARRY8(uVar13,uVar18));
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar15;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = DAT_005eb018;
  uVar13 = SUB168(auVar4 * auVar8,0);
  uVar15 = uVar15 >> 0x20;
  uVar17 = uVar16 + (uVar1 << 0x20);
  uVar18 = (ulong)CARRY8(uVar16,uVar1 << 0x20);
  uVar1 = uVar19 + uVar15;
  uVar20 = uVar1 + uVar18;
  uVar18 = (ulong)(CARRY8(uVar19,uVar15) || CARRY8(uVar1,uVar18));
  uVar1 = uVar12 + uVar13;
  uVar19 = uVar1 + uVar18;
  uVar15 = SUB168(auVar4 * auVar8,8) + (ulong)(CARRY8(uVar12,uVar13) || CARRY8(uVar1,uVar18));
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar17;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = DAT_005eb018;
  uVar13 = SUB168(auVar5 * auVar9,0);
  uVar17 = uVar17 >> 0x20;
  uVar12 = uVar20 + (uVar16 << 0x20);
  uVar18 = (ulong)CARRY8(uVar20,uVar16 << 0x20);
  uVar1 = uVar19 + uVar17;
  uVar16 = uVar1 + uVar18;
  uVar18 = (ulong)(CARRY8(uVar19,uVar17) || CARRY8(uVar1,uVar18));
  uVar1 = uVar15 + uVar13;
  uVar19 = uVar1 + uVar18;
  uVar17 = SUB168(auVar5 * auVar9,8) + (ulong)(CARRY8(uVar15,uVar13) || CARRY8(uVar1,uVar18));
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = DAT_005eb018;
  uVar13 = SUB168(auVar6 * auVar10,0);
  uVar12 = uVar12 >> 0x20;
  lVar14 = uVar16 + (uVar20 << 0x20);
  uVar18 = (ulong)CARRY8(uVar16,uVar20 << 0x20);
  uVar1 = uVar19 + uVar12;
  uVar15 = uVar1 + uVar18;
  uVar18 = (ulong)(CARRY8(uVar19,uVar12) || CARRY8(uVar1,uVar18));
  uVar1 = uVar17 + uVar13;
  uVar19 = uVar1 + uVar18;
  uVar12 = SUB168(auVar6 * auVar10,8) + (ulong)(CARRY8(uVar17,uVar13) || CARRY8(uVar1,uVar18));
  uVar18 = (ulong)(uVar15 < DAT_005eb008 || uVar15 - DAT_005eb008 < (ulong)(lVar14 != -1));
  uVar1 = (ulong)(uVar19 < uVar18);
  bVar21 = DAT_005eb018 <= uVar12;
  uVar13 = uVar12 - DAT_005eb018;
  bVar2 = uVar1 <= uVar13;
  uVar17 = (uVar15 - DAT_005eb008) - (ulong)(lVar14 != -1);
  lVar11 = lVar14 + 1;
  if (!bVar21 || !bVar2) {
    uVar17 = uVar15;
    lVar11 = lVar14;
  }
  *param_1 = lVar11;
  uVar18 = uVar19 - uVar18;
  if (!bVar21 || !bVar2) {
    uVar18 = uVar19;
  }
  param_1[1] = uVar17;
  if (bVar21 && bVar2) {
    uVar12 = uVar13 - uVar1;
  }
  param_1[2] = uVar18;
  param_1[3] = uVar12;
  return;
}

