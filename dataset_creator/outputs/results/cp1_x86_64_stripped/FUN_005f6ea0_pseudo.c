
long FUN_005f6ea0(ulong *param_1,ulong *param_2,long param_3)

{
  unkint9 Var1;
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
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  ulong uVar59;
  ulong uVar60;
  ulong uVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  
  uVar60 = *param_2;
  uVar63 = param_2[1];
  uVar69 = param_2[2];
  uVar68 = param_2[3];
  do {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar60;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar63;
    uVar62 = SUB168(auVar7 * auVar33,0);
    uVar64 = SUB168(auVar7 * auVar33,8);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar60;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar69;
    uVar59 = SUB168(auVar8 * auVar34,0);
    uVar66 = SUB168(auVar8 * auVar34,8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar60;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar68;
    uVar61 = SUB168(auVar9 * auVar35,0);
    uVar65 = uVar64 + uVar59;
    uVar59 = (ulong)CARRY8(uVar64,uVar59);
    uVar64 = uVar66 + uVar61;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar63;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar69;
    Var1 = (unkuint9)(uVar64 + uVar59) + (unkuint9)SUB168(auVar10 * auVar36,0) + (unkuint9)0;
    uVar67 = (ulong)Var1;
    Var3 = (unkuint9)
           (SUB168(auVar9 * auVar35,8) + (ulong)(CARRY8(uVar66,uVar61) || CARRY8(uVar64,uVar59))) +
           (unkuint9)SUB168(auVar10 * auVar36,8) + (unkuint9)0;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar63;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar68;
    Var1 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar11 * auVar37,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    uVar64 = (ulong)Var1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar69;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar68;
    Var2 = (unkuint9)uVar62 + (unkuint9)uVar62 + (unkuint9)0;
    Var3 = (unkuint9)
           (SUB168(auVar11 * auVar37,8) + (ulong)((char)((unkuint9)Var3 >> 0x40) != '\0') +
           (ulong)((char)((unkuint9)Var1 >> 0x40) != '\0')) + (unkuint9)SUB168(auVar12 * auVar38,0)
           + (unkuint9)0;
    uVar61 = (ulong)Var3;
    Var1 = (unkuint9)uVar65 + (unkuint9)uVar65 + (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var4 = (unkuint9)SUB168(auVar12 * auVar38,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar62 = (ulong)Var4;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar60;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar60;
    uVar59 = SUB168(auVar13 * auVar39,0);
    Var3 = (unkuint9)uVar67 + (unkuint9)uVar67 + (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var5 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar13 * auVar39,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var2 = (unkuint9)uVar64 + (unkuint9)uVar64 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar63;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar63;
    Var4 = (unkuint9)uVar61 + (unkuint9)uVar61 + (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var6 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar14 * auVar40,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var1 = (unkuint9)uVar62 + (unkuint9)uVar62 + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar69;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar69;
    Var3 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar14 * auVar40,8) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var2 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar15 * auVar41,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar69 = (ulong)Var2;
    Var2 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar15 * auVar41,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    uVar62 = (ulong)Var2;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar68;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = uVar68;
    Var2 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar16 * auVar42,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    uVar65 = (ulong)Var2;
    uVar66 = (ulong)((char)((unkuint9)Var1 >> 0x40) != '\0') + SUB168(auVar16 * auVar42,8) +
             (ulong)((char)((unkuint9)Var2 >> 0x40) != '\0');
    uVar60 = uVar59 * DAT_005f60e0;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar60;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = DAT_005f60c0;
    Var1 = (unkuint9)uVar59 + (unkuint9)SUB168(auVar17 * auVar43,0) + (unkuint9)0;
    Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar17 * auVar43,8) + (unkuint9)0;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar60;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = DAT_005f60c8;
    Var2 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar18 * auVar44,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    uVar63 = (ulong)Var2;
    Var4 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar18 * auVar44,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar60;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = DAT_005f60d0;
    Var2 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar19 * auVar45,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar19 * auVar45,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar60;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = DAT_005f60d8;
    Var3 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar20 * auVar46,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar20 * auVar46,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var1 = (unkuint9)(ulong)Var4 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar60 = uVar63 * DAT_005f60e0;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar60;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = DAT_005f60c0;
    Var4 = (unkuint9)uVar63 + (unkuint9)SUB168(auVar21 * auVar47,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var2 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar21 * auVar47,8) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar60;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = DAT_005f60c8;
    Var5 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar22 * auVar48,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar63 = (ulong)Var5;
    Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar22 * auVar48,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar60;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = DAT_005f60d0;
    Var3 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar23 * auVar49,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var1 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar23 * auVar49,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar60;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = DAT_005f60d8;
    Var5 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar24 * auVar50,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    Var1 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar24 * auVar50,8) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulong)Var1 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar60 = uVar63 * DAT_005f60e0;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar60;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = DAT_005f60c0;
    Var1 = (unkuint9)uVar63 + (unkuint9)SUB168(auVar25 * auVar51,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar25 * auVar51,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar60;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = DAT_005f60c8;
    Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar26 * auVar52,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    uVar63 = (ulong)Var2;
    Var3 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar26 * auVar52,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar60;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = DAT_005f60d0;
    Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar27 * auVar53,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar27 * auVar53,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar60;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = DAT_005f60d8;
    Var3 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar28 * auVar54,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar28 * auVar54,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var1 = (unkuint9)(ulong)Var4 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar60 = uVar63 * DAT_005f60e0;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar60;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = DAT_005f60c0;
    Var4 = (unkuint9)uVar63 + (unkuint9)SUB168(auVar29 * auVar55,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var2 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar29 * auVar55,8) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar60;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = DAT_005f60c8;
    Var5 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar30 * auVar56,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar63 = (ulong)Var5;
    Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar30 * auVar56,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar60;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = DAT_005f60d0;
    Var3 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar31 * auVar57,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar59 = (ulong)Var3;
    Var1 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar31 * auVar57,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar60;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = DAT_005f60d8;
    Var2 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar32 * auVar58,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar64 = (ulong)Var2;
    uVar61 = (long)Var4 + SUB168(auVar32 * auVar58,8) +
             (ulong)((char)((unkuint9)Var1 >> 0x40) != '\0') +
             (ulong)((char)((unkuint9)Var2 >> 0x40) != '\0');
    uVar60 = uVar69 + uVar63;
    uVar69 = (ulong)CARRY8(uVar69,uVar63);
    uVar68 = uVar59 + uVar62;
    uVar63 = uVar68 + uVar69;
    uVar68 = (ulong)(CARRY8(uVar59,uVar62) || CARRY8(uVar68,uVar69));
    uVar59 = uVar64 + uVar65;
    uVar69 = uVar59 + uVar68;
    uVar59 = (ulong)(CARRY8(uVar64,uVar65) || CARRY8(uVar59,uVar68));
    uVar64 = uVar61 + uVar66;
    uVar68 = uVar64 + uVar59;
    uVar59 = (ulong)(CARRY8(uVar61,uVar66) || CARRY8(uVar64,uVar59));
    uVar64 = (ulong)(uVar63 < DAT_005f60c8 || uVar63 - DAT_005f60c8 < (ulong)(uVar60 < DAT_005f60c0)
                    );
    uVar61 = (ulong)(uVar69 < DAT_005f60d0 || uVar69 - DAT_005f60d0 < uVar64);
    uVar62 = (ulong)(uVar68 < DAT_005f60d8 || uVar68 - DAT_005f60d8 < uVar61);
    if (uVar62 <= uVar59) {
      uVar68 = (uVar68 - DAT_005f60d8) - uVar61;
      uVar63 = (uVar63 - DAT_005f60c8) - (ulong)(uVar60 < DAT_005f60c0);
      uVar60 = uVar60 - DAT_005f60c0;
      uVar69 = (uVar69 - DAT_005f60d0) - uVar64;
    }
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  *param_1 = uVar60;
  param_1[1] = uVar63;
  param_1[2] = uVar69;
  param_1[3] = uVar68;
  return uVar59 - uVar62;
}

