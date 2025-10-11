
void FUN_005f7960(long *param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  unkint9 Var2;
  unkint9 Var3;
  unkint9 Var4;
  unkint9 Var5;
  unkint9 Var6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  long lVar47;
  ulong uVar48;
  ulong unaff_R14;
  ulong uVar49;
  ulong uVar50;
  ulong unaff_R15;
  ulong uVar51;
  
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = unaff_R14;
  uVar38 = SUB168(auVar7 * auVar21,0);
  uVar39 = SUB168(auVar7 * auVar21,8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = unaff_R15;
  uVar36 = SUB168(auVar8 * auVar22,0);
  uVar41 = SUB168(auVar8 * auVar22,8);
  uVar49 = uVar39 + uVar36;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_5;
  uVar37 = SUB168(auVar9 * auVar23,0);
  uVar36 = (ulong)CARRY8(uVar39,uVar36);
  uVar39 = uVar41 + uVar37;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = unaff_R14;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = unaff_R15;
  Var2 = (unkuint9)(uVar39 + uVar36) + (unkuint9)SUB168(auVar10 * auVar24,0) + (unkuint9)0;
  uVar42 = (ulong)Var2;
  Var4 = (unkuint9)
         (SUB168(auVar9 * auVar23,8) + (ulong)(CARRY8(uVar41,uVar37) || CARRY8(uVar39,uVar36))) +
         (unkuint9)SUB168(auVar10 * auVar24,8) + (unkuint9)0;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = unaff_R14;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_5;
  Var2 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar11 * auVar25,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  uVar36 = (ulong)Var2;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = unaff_R15;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_5;
  Var3 = (unkuint9)uVar38 + (unkuint9)uVar38 + (unkuint9)0;
  Var4 = (unkuint9)
         (SUB168(auVar11 * auVar25,8) + (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0') +
         (ulong)((char)((unkuint9)Var2 >> 0x40) != '\0')) + (unkuint9)SUB168(auVar12 * auVar26,0) +
         (unkuint9)0;
  uVar39 = (ulong)Var4;
  Var2 = (unkuint9)uVar49 + (unkuint9)uVar49 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  Var5 = (unkuint9)SUB168(auVar12 * auVar26,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  uVar49 = (ulong)Var5;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = *(ulong *)(param_2 + 0x80);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = *(ulong *)(param_2 + 0x80);
  uVar37 = SUB168(auVar13 * auVar27,0);
  Var4 = (unkuint9)uVar42 + (unkuint9)uVar42 + (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var6 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar13 * auVar27,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar41 = (ulong)Var6;
  Var3 = (unkuint9)uVar36 + (unkuint9)uVar36 + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *(ulong *)(param_2 + 0x88);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = *(ulong *)(param_2 + 0x88);
  Var5 = (unkuint9)uVar39 + (unkuint9)uVar39 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  Var6 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar14 * auVar28,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar38 = (ulong)Var6;
  Var2 = (unkuint9)uVar49 + (unkuint9)uVar49 + (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *(ulong *)(param_2 + 0x90);
  auVar29._8_8_ = 0;
  auVar29._0_8_ = *(ulong *)(param_2 + 0x90);
  Var4 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar14 * auVar28,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar43 = (ulong)Var4;
  Var3 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar15 * auVar29,0) +
         (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  uVar46 = (ulong)Var3;
  Var3 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar15 * auVar29,8) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar48 = (ulong)Var3;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *(ulong *)(param_2 + 0x98);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = *(ulong *)(param_2 + 0x98);
  Var3 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar16 * auVar30,0) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar50 = (ulong)Var3;
  uVar51 = (ulong)((char)((unkuint9)Var2 >> 0x40) != '\0') + SUB168(auVar16 * auVar30,8) +
           (ulong)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar42 = uVar41 + (uVar37 << 0x20);
  uVar36 = (ulong)CARRY8(uVar41,uVar37 << 0x20);
  uVar49 = uVar38 + (uVar37 >> 0x20);
  uVar40 = uVar49 + uVar36;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = DAT_005f6018;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar37;
  uVar39 = SUB168(auVar17 * auVar31,0);
  uVar36 = (ulong)(CARRY8(uVar38,uVar37 >> 0x20) || CARRY8(uVar49,uVar36));
  uVar49 = uVar43 + uVar39;
  uVar44 = uVar49 + uVar36;
  uVar38 = SUB168(auVar17 * auVar31,8) + (ulong)(CARRY8(uVar43,uVar39) || CARRY8(uVar49,uVar36));
  uVar39 = uVar42 >> 0x20;
  uVar43 = uVar40 + (uVar41 << 0x20);
  uVar36 = (ulong)CARRY8(uVar40,uVar41 << 0x20);
  uVar49 = uVar44 + uVar39;
  uVar45 = uVar49 + uVar36;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = DAT_005f6018;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar42;
  uVar37 = SUB168(auVar18 * auVar32,0);
  uVar36 = (ulong)(CARRY8(uVar44,uVar39) || CARRY8(uVar49,uVar36));
  uVar49 = uVar38 + uVar37;
  uVar41 = uVar49 + uVar36;
  uVar42 = SUB168(auVar18 * auVar32,8) + (ulong)(CARRY8(uVar38,uVar37) || CARRY8(uVar49,uVar36));
  uVar39 = uVar43 >> 0x20;
  uVar44 = uVar45 + (uVar40 << 0x20);
  uVar36 = (ulong)CARRY8(uVar45,uVar40 << 0x20);
  uVar49 = uVar41 + uVar39;
  uVar38 = uVar49 + uVar36;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = DAT_005f6018;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar43;
  uVar37 = SUB168(auVar19 * auVar33,0);
  uVar36 = (ulong)(CARRY8(uVar41,uVar39) || CARRY8(uVar49,uVar36));
  uVar49 = uVar42 + uVar37;
  uVar40 = uVar49 + uVar36;
  uVar42 = SUB168(auVar19 * auVar33,8) + (ulong)(CARRY8(uVar42,uVar37) || CARRY8(uVar49,uVar36));
  uVar39 = uVar44 >> 0x20;
  uVar41 = uVar38 + (uVar45 << 0x20);
  uVar36 = (ulong)CARRY8(uVar38,uVar45 << 0x20);
  uVar49 = uVar40 + uVar39;
  uVar38 = uVar49 + uVar36;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = DAT_005f6018;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar44;
  uVar37 = SUB168(auVar20 * auVar34,0);
  uVar36 = (ulong)(CARRY8(uVar40,uVar39) || CARRY8(uVar49,uVar36));
  uVar49 = uVar42 + uVar37;
  uVar39 = uVar49 + uVar36;
  uVar42 = SUB168(auVar20 * auVar34,8) + (ulong)(CARRY8(uVar42,uVar37) || CARRY8(uVar49,uVar36));
  lVar47 = uVar46 + uVar41;
  uVar36 = (ulong)CARRY8(uVar46,uVar41);
  uVar49 = uVar48 + uVar38;
  uVar41 = uVar49 + uVar36;
  uVar36 = (ulong)(CARRY8(uVar48,uVar38) || CARRY8(uVar49,uVar36));
  uVar49 = uVar50 + uVar39;
  uVar40 = uVar49 + uVar36;
  uVar36 = (ulong)(CARRY8(uVar50,uVar39) || CARRY8(uVar49,uVar36));
  uVar49 = uVar51 + uVar42;
  uVar43 = uVar49 + uVar36;
  uVar39 = (ulong)(uVar41 < DAT_005f6008 || uVar41 - DAT_005f6008 < (ulong)(lVar47 != -1));
  uVar37 = (ulong)(uVar40 < uVar39);
  uVar38 = uVar43 - DAT_005f6018;
  bVar1 = (CARRY8(uVar51,uVar42) || CARRY8(uVar49,uVar36)) <
          (uVar43 < DAT_005f6018 || uVar38 < uVar37);
  uVar36 = (uVar41 - DAT_005f6008) - (ulong)(lVar47 != -1);
  lVar35 = lVar47 + 1;
  if (bVar1) {
    uVar36 = uVar41;
    lVar35 = lVar47;
  }
  *param_1 = lVar35;
  uVar49 = uVar40 - uVar39;
  if (bVar1) {
    uVar49 = uVar40;
  }
  param_1[1] = uVar36;
  uVar36 = uVar38 - uVar37;
  if (bVar1) {
    uVar36 = uVar43;
  }
  param_1[2] = uVar49;
  param_1[3] = uVar36;
  return;
}

