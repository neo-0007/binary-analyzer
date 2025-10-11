
undefined8
FUN_005f7700(long *param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
            ulong param_6)

{
  bool bVar1;
  unkint9 Var2;
  unkint9 Var3;
  unkint9 Var4;
  unkint9 Var5;
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
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  long unaff_RBX;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong in_R10;
  ulong uVar54;
  ulong uVar55;
  ulong in_R11;
  ulong uVar56;
  ulong uVar57;
  ulong unaff_R12;
  ulong uVar58;
  long lVar59;
  
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_6;
  uVar51 = SUB168(auVar6 * auVar26,0);
  uVar53 = SUB168(auVar6 * auVar26,8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = in_R10;
  uVar47 = SUB168(auVar7 * auVar27,0);
  uVar54 = SUB168(auVar7 * auVar27,8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = in_R11;
  uVar49 = SUB168(auVar8 * auVar28,0);
  uVar56 = SUB168(auVar8 * auVar28,8);
  uVar52 = uVar53 + uVar47;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = unaff_R12;
  uVar48 = SUB168(auVar9 * auVar29,0);
  uVar47 = (ulong)CARRY8(uVar53,uVar47);
  uVar53 = uVar54 + uVar49;
  uVar55 = uVar53 + uVar47;
  uVar47 = (ulong)(CARRY8(uVar54,uVar49) || CARRY8(uVar53,uVar47));
  uVar53 = uVar56 + uVar48;
  uVar57 = uVar53 + uVar47;
  uVar58 = SUB168(auVar9 * auVar29,8) + (ulong)(CARRY8(uVar56,uVar48) || CARRY8(uVar53,uVar47));
  uVar53 = (ulong)CARRY8(uVar52,uVar51 << 0x20);
  uVar54 = uVar55 + (uVar51 >> 0x20);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar51;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = DAT_005f6018;
  uVar49 = SUB168(auVar10 * auVar30,0);
  uVar50 = SUB168(auVar10 * auVar30,8);
  uVar47 = *(ulong *)(unaff_RBX + 8);
  uVar48 = (ulong)(CARRY8(uVar55,uVar51 >> 0x20) || CARRY8(uVar54,uVar53));
  uVar55 = uVar57 + uVar49;
  uVar49 = (ulong)(CARRY8(uVar57,uVar49) || CARRY8(uVar55,uVar48));
  uVar56 = uVar58 + uVar50;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar47;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = *(ulong *)(param_2 + 0x80);
  Var2 = (unkuint9)(uVar52 + (uVar51 << 0x20)) + (unkuint9)SUB168(auVar11 * auVar31,0) + (unkuint9)0
  ;
  uVar51 = (ulong)Var2;
  Var3 = (unkuint9)(uVar54 + uVar53) + (unkuint9)SUB168(auVar11 * auVar31,8) + (unkuint9)0;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar47;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = *(ulong *)(param_2 + 0x88);
  Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar12 * auVar32,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  uVar57 = (ulong)Var2;
  Var3 = (unkuint9)(uVar55 + uVar48) + (unkuint9)SUB168(auVar12 * auVar32,8) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar47;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = *(ulong *)(param_2 + 0x90);
  Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar13 * auVar33,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  uVar48 = (ulong)Var2;
  Var3 = (unkuint9)(uVar56 + uVar49) + (unkuint9)SUB168(auVar13 * auVar33,8) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar47;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = *(ulong *)(param_2 + 0x98);
  Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar14 * auVar34,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  uVar55 = (ulong)Var2;
  Var4 = (unkuint9)(CARRY8(uVar58,uVar50) || CARRY8(uVar56,uVar49)) +
         (unkuint9)SUB168(auVar14 * auVar34,8) + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  Var2 = (unkuint9)(ulong)Var4 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  uVar50 = (ulong)Var2;
  uVar53 = (ulong)CARRY8(uVar57,uVar51 << 0x20);
  uVar52 = uVar48 + (uVar51 >> 0x20);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar51;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = DAT_005f6018;
  uVar49 = SUB168(auVar15 * auVar35,0);
  uVar56 = SUB168(auVar15 * auVar35,8);
  uVar47 = *(ulong *)(unaff_RBX + 0x10);
  uVar48 = (ulong)(CARRY8(uVar48,uVar51 >> 0x20) || CARRY8(uVar52,uVar53));
  uVar54 = uVar55 + uVar49;
  uVar49 = (ulong)(CARRY8(uVar55,uVar49) || CARRY8(uVar54,uVar48));
  uVar55 = uVar50 + uVar56;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar47;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = *(ulong *)(param_2 + 0x80);
  Var3 = (unkuint9)(uVar57 + (uVar51 << 0x20)) + (unkuint9)SUB168(auVar16 * auVar36,0) + (unkuint9)0
  ;
  uVar51 = (ulong)Var3;
  Var5 = (unkuint9)(uVar52 + uVar53) + (unkuint9)SUB168(auVar16 * auVar36,8) + (unkuint9)0;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar47;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *(ulong *)(param_2 + 0x88);
  Var3 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar17 * auVar37,0) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar57 = (ulong)Var3;
  Var5 = (unkuint9)(uVar54 + uVar48) + (unkuint9)SUB168(auVar17 * auVar37,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar47;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = *(ulong *)(param_2 + 0x90);
  Var3 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar18 * auVar38,0) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar48 = (ulong)Var3;
  Var5 = (unkuint9)(uVar55 + uVar49) + (unkuint9)SUB168(auVar18 * auVar38,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar47;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = *(ulong *)(param_2 + 0x98);
  Var3 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar19 * auVar39,0) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar58 = (ulong)Var3;
  Var4 = (unkuint9)
         ((ulong)((char)((unkuint9)Var4 >> 0x40) != '\0') +
          (ulong)((char)((unkuint9)Var2 >> 0x40) != '\0') +
         (ulong)(CARRY8(uVar50,uVar56) || CARRY8(uVar55,uVar49))) +
         (unkuint9)SUB168(auVar19 * auVar39,8) + (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  Var2 = (unkuint9)(ulong)Var4 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar50 = (ulong)Var2;
  uVar53 = (ulong)CARRY8(uVar57,uVar51 << 0x20);
  uVar52 = uVar48 + (uVar51 >> 0x20);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar51;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = DAT_005f6018;
  uVar49 = SUB168(auVar20 * auVar40,0);
  uVar56 = SUB168(auVar20 * auVar40,8);
  uVar47 = *(ulong *)(unaff_RBX + 0x18);
  uVar48 = (ulong)(CARRY8(uVar48,uVar51 >> 0x20) || CARRY8(uVar52,uVar53));
  uVar54 = uVar58 + uVar49;
  uVar49 = (ulong)(CARRY8(uVar58,uVar49) || CARRY8(uVar54,uVar48));
  uVar55 = uVar50 + uVar56;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar47;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = *(ulong *)(param_2 + 0x80);
  Var3 = (unkuint9)(uVar57 + (uVar51 << 0x20)) + (unkuint9)SUB168(auVar21 * auVar41,0) + (unkuint9)0
  ;
  uVar51 = (ulong)Var3;
  Var5 = (unkuint9)(uVar52 + uVar53) + (unkuint9)SUB168(auVar21 * auVar41,8) + (unkuint9)0;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar47;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = *(ulong *)(param_2 + 0x88);
  Var3 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar22 * auVar42,0) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar53 = (ulong)Var3;
  Var5 = (unkuint9)(uVar54 + uVar48) + (unkuint9)SUB168(auVar22 * auVar42,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar47;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = *(ulong *)(param_2 + 0x90);
  Var3 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar23 * auVar43,0) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar57 = (ulong)Var3;
  Var5 = (unkuint9)(uVar55 + uVar49) + (unkuint9)SUB168(auVar23 * auVar43,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar47;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = *(ulong *)(param_2 + 0x98);
  Var3 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar24 * auVar44,0) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar52 = (ulong)Var3;
  Var4 = (unkuint9)
         ((ulong)((char)((unkuint9)Var4 >> 0x40) != '\0') +
          (ulong)((char)((unkuint9)Var2 >> 0x40) != '\0') +
         (ulong)(CARRY8(uVar50,uVar56) || CARRY8(uVar55,uVar49))) +
         (unkuint9)SUB168(auVar24 * auVar44,8) + (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  Var2 = (unkuint9)(ulong)Var4 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar56 = (ulong)Var2;
  lVar59 = uVar53 + (uVar51 << 0x20);
  uVar47 = (ulong)CARRY8(uVar53,uVar51 << 0x20);
  uVar53 = uVar57 + (uVar51 >> 0x20);
  uVar58 = uVar53 + uVar47;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar51;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = DAT_005f6018;
  uVar48 = SUB168(auVar25 * auVar45,0);
  uVar54 = SUB168(auVar25 * auVar45,8);
  uVar47 = (ulong)(CARRY8(uVar57,uVar51 >> 0x20) || CARRY8(uVar53,uVar47));
  uVar53 = uVar52 + uVar48;
  uVar55 = uVar53 + uVar47;
  uVar47 = (ulong)(CARRY8(uVar52,uVar48) || CARRY8(uVar53,uVar47));
  uVar53 = uVar56 + uVar54;
  uVar50 = uVar53 + uVar47;
  uVar48 = (ulong)(uVar58 < DAT_005f6008 || uVar58 - DAT_005f6008 < (ulong)(lVar59 != -1));
  uVar49 = (ulong)(uVar55 < uVar48);
  uVar52 = uVar50 - DAT_005f6018;
  bVar1 = (byte)(((char)((unkuint9)Var4 >> 0x40) != '\0') + ((char)((unkuint9)Var2 >> 0x40) != '\0')
                + (CARRY8(uVar56,uVar54) || CARRY8(uVar53,uVar47))) <
          (uVar50 < DAT_005f6018 || uVar52 < uVar49);
  uVar47 = (uVar58 - DAT_005f6008) - (ulong)(lVar59 != -1);
  lVar46 = lVar59 + 1;
  if (bVar1) {
    uVar47 = uVar58;
    lVar46 = lVar59;
  }
  *param_1 = lVar46;
  uVar53 = uVar55 - uVar48;
  if (bVar1) {
    uVar53 = uVar55;
  }
  param_1[1] = uVar47;
  uVar47 = uVar52 - uVar49;
  if (bVar1) {
    uVar47 = uVar50;
  }
  param_1[2] = uVar53;
  param_1[3] = uVar47;
  return 0;
}

