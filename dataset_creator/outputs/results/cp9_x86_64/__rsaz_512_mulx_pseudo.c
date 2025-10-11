
void __rsaz_512_mulx(undefined8 param_1,ulong *param_2,ulong param_3)

{
  unkint9 Var1;
  unkint9 Var2;
  unkint9 Var3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  undefined1 auVar35 [16];
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  long unaff_RBP;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  byte in_CF;
  bool bVar51;
  bool bVar52;
  
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = *param_2;
  uVar41 = SUB168(auVar4 * auVar20,8);
  lVar38 = -6;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[1];
  uVar36 = SUB168(auVar5 * auVar21,0);
  uVar43 = SUB168(auVar5 * auVar21,8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_2[2];
  uVar40 = SUB168(auVar6 * auVar22,0);
  uVar45 = SUB168(auVar6 * auVar22,8);
  uVar39 = uVar41 + uVar36;
  uVar42 = uVar39 + in_CF;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_2[3];
  uVar37 = SUB168(auVar7 * auVar23,0);
  uVar47 = SUB168(auVar7 * auVar23,8);
  uVar39 = (ulong)(CARRY8(uVar41,uVar36) || CARRY8(uVar39,(ulong)in_CF));
  uVar36 = uVar43 + uVar40;
  uVar44 = uVar36 + uVar39;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_2[4];
  uVar41 = SUB168(auVar8 * auVar24,0);
  uVar48 = SUB168(auVar8 * auVar24,8);
  uVar39 = (ulong)(CARRY8(uVar43,uVar40) || CARRY8(uVar36,uVar39));
  uVar36 = uVar45 + uVar37;
  uVar46 = uVar36 + uVar39;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_2[5];
  uVar40 = SUB168(auVar9 * auVar25,0);
  uVar49 = SUB168(auVar9 * auVar25,8);
  uVar39 = (ulong)(CARRY8(uVar45,uVar37) || CARRY8(uVar36,uVar39));
  uVar36 = uVar47 + uVar41;
  uVar45 = uVar36 + uVar39;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_3;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[6];
  uVar43 = SUB168(auVar10 * auVar26,0);
  uVar50 = SUB168(auVar10 * auVar26,8);
  uVar36 = (ulong)(CARRY8(uVar47,uVar41) || CARRY8(uVar36,uVar39));
  uVar37 = uVar48 + uVar40;
  uVar47 = uVar37 + uVar36;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_3;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[7];
  uVar41 = SUB168(auVar11 * auVar27,0);
  uVar39 = *(ulong *)(unaff_RBP + 8);
  uVar36 = (ulong)(CARRY8(uVar48,uVar40) || CARRY8(uVar37,uVar36));
  uVar37 = uVar49 + uVar43;
  uVar40 = uVar37 + uVar36;
  uVar36 = (ulong)(CARRY8(uVar49,uVar43) || CARRY8(uVar37,uVar36));
  uVar37 = uVar50 + uVar41;
  uVar43 = uVar37 + uVar36;
  uVar36 = SUB168(auVar11 * auVar27,8) + (ulong)(CARRY8(uVar50,uVar41) || CARRY8(uVar37,uVar36));
  bVar51 = false;
  bVar52 = false;
  do {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar39;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = *param_2;
    Var1 = (unkuint9)uVar42 + (unkuint9)SUB168(auVar12 * auVar28,0) + (unkuint9)bVar51;
    Var3 = (unkuint9)SUB168(auVar12 * auVar28,8) + (unkuint9)uVar44 + (unkuint9)bVar52;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar39;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = param_2[1];
    Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar13 * auVar29,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    uVar42 = (ulong)Var2;
    Var3 = (unkuint9)SUB168(auVar13 * auVar29,8) + (unkuint9)uVar46 +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar39;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = param_2[2];
    Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar14 * auVar30,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    uVar44 = (ulong)Var2;
    Var3 = (unkuint9)SUB168(auVar14 * auVar30,8) + (unkuint9)uVar45 +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar39;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = param_2[3];
    Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar15 * auVar31,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    uVar46 = (ulong)Var2;
    Var3 = (unkuint9)SUB168(auVar15 * auVar31,8) + (unkuint9)uVar47 +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar39;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = param_2[4];
    Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar16 * auVar32,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    uVar45 = (ulong)Var2;
    Var3 = (unkuint9)SUB168(auVar16 * auVar32,8) + (unkuint9)uVar40 +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar39;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = param_2[5];
    Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar17 * auVar33,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    uVar47 = (ulong)Var2;
    Var3 = (unkuint9)SUB168(auVar17 * auVar33,8) + (unkuint9)uVar43 +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar39;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = param_2[6];
    Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar18 * auVar34,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    uVar40 = (ulong)Var2;
    Var3 = (unkuint9)SUB168(auVar18 * auVar34,8) + (unkuint9)uVar36 +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar39;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = param_2[7];
    uVar39 = *(ulong *)(unaff_RBP + 0x40 + lVar38 * 8);
    *(long *)(&stack0x00000040 + lVar38 * 8) = (long)Var1;
    Var1 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar19 * auVar35,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    uVar43 = (ulong)Var1;
    Var1 = (unkuint9)
           (ulong)((unkuint9)SUB168(auVar19 * auVar35,8) + (unkuint9)0 +
                  (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0')) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    bVar51 = (char)((unkuint9)Var1 >> 0x40) != '\0';
    uVar36 = (ulong)Var1;
    bVar52 = SCARRY8(lVar38,1);
    lVar38 = lVar38 + 1;
  } while (lVar38 != 0);
  return;
}

