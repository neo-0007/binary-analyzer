
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_sqr(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  unkint9 Var1;
  unkint9 Var2;
  unkint9 Var3;
  unkint9 Var4;
  unkint9 Var5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
  unkint9 Var11;
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
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  ulong uVar66;
  ulong uVar67;
  long lVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong uVar72;
  
  uVar69 = *param_2;
  uVar72 = param_2[1];
  if ((_DAT_0093e5a0 & 0x80100) == 0x80100) {
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar69;
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar72;
      uVar67 = SUB168(auVar12 * auVar39,0);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar69;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = param_2[2];
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar69;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = param_2[3];
      Var1 = (unkuint9)SUB168(auVar12 * auVar39,8) + (unkuint9)SUB168(auVar13 * auVar40,0) +
             (unkuint9)0;
      uVar70 = (ulong)Var1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar69;
      auVar42._8_8_ = 0;
      auVar42._0_8_ = param_2[4];
      Var1 = (unkuint9)SUB168(auVar13 * auVar40,8) + (unkuint9)SUB168(auVar14 * auVar41,0) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar69;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = param_2[5];
      Var2 = (unkuint9)SUB168(auVar14 * auVar41,8) + (unkuint9)SUB168(auVar15 * auVar42,0) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar69;
      auVar44._8_8_ = 0;
      auVar44._0_8_ = param_2[6];
      Var3 = (unkuint9)SUB168(auVar15 * auVar42,8) + (unkuint9)SUB168(auVar16 * auVar43,0) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      Var4 = (unkuint9)SUB168(auVar16 * auVar43,8) + (unkuint9)SUB168(auVar17 * auVar44,0) +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar69;
      auVar45._8_8_ = 0;
      auVar45._0_8_ = param_2[7];
      Var5 = (unkuint9)SUB168(auVar17 * auVar44,8) + (unkuint9)SUB168(auVar18 * auVar45,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar69;
      auVar46._8_8_ = 0;
      auVar46._0_8_ = uVar69;
      uVar66 = SUB168(auVar19 * auVar46,0);
      Var7 = (unkuint9)uVar67 + (unkuint9)uVar67 + (unkuint9)0;
      Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar19 * auVar46,8) + (unkuint9)0;
      lVar68 = (long)Var6;
      Var7 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      Var6 = (unkuint9)(ulong)Var7 + (unkuint9)0 +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar72;
      auVar47._8_8_ = 0;
      auVar47._0_8_ = param_2[2];
      Var7 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar20 * auVar47,0) +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      uVar67 = (ulong)Var7;
      Var1 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar20 * auVar47,8) +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar72;
      auVar48._8_8_ = 0;
      auVar48._0_8_ = param_2[3];
      Var2 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar21 * auVar48,0) +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      uVar71 = (ulong)Var2;
      writeToShadowStack(SUB164(auVar21 * auVar48,8),(int)Var3);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar72;
      auVar49._8_8_ = 0;
      auVar49._0_8_ = param_2[4];
      Var3 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar22 * auVar49,0) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      Var1 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar22 * auVar49,8) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar72;
      auVar50._8_8_ = 0;
      auVar50._0_8_ = param_2[5];
      Var4 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar23 * auVar50,0) +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      Var1 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar23 * auVar50,8) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar72;
      auVar51._8_8_ = 0;
      auVar51._0_8_ = param_2[6];
      Var7 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar24 * auVar51,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      Var1 = (unkuint9)
             (ulong)((unkuint9)SUB168(auVar18 * auVar45,8) + (unkuint9)0 +
                    (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0')) +
             (unkuint9)SUB168(auVar24 * auVar51,8) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar72;
      auVar52._8_8_ = 0;
      auVar52._0_8_ = param_2[7];
      Var5 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar25 * auVar52,0) +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar72;
      auVar53._8_8_ = 0;
      auVar53._0_8_ = uVar72;
      uVar69 = param_2[2];
      Var8 = (unkuint9)uVar70 + (unkuint9)uVar70 + (unkuint9)0;
      Var2 = (unkuint9)SUB168(auVar26 * auVar53,0) + (unkuint9)(ulong)Var6 + (unkuint9)0;
      Var6 = (unkuint9)uVar67 + (unkuint9)uVar67 +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      Var9 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      Var2 = (unkuint9)(ulong)Var9 + (unkuint9)0 +
             (unkuint9)
             ((char)((unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar26 * auVar53,8) +
                     (unkuint9)
                     ((char)((unkuint9)(ulong)Var8 + (unkuint9)(ulong)Var2 +
                             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0') >> 0x40) != '\0') >>
                    0x40) != '\0');
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar69;
      auVar54._8_8_ = 0;
      auVar54._0_8_ = param_2[3];
      Var6 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar27 * auVar54,0) +
             (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      uVar72 = (ulong)Var6;
      Var3 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar27 * auVar54,8) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar69;
      auVar55._8_8_ = 0;
      auVar55._0_8_ = param_2[4];
      Var4 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar28 * auVar55,0) +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      uVar67 = (ulong)Var4;
      Var3 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar28 * auVar55,8) +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar69;
      auVar56._8_8_ = 0;
      auVar56._0_8_ = param_2[5];
      Var4 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar29 * auVar56,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      Var3 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar29 * auVar56,8) +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar69;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = param_2[6];
      Var6 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar30 * auVar57,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar69;
      auVar58._8_8_ = 0;
      auVar58._0_8_ = param_2[7];
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar69;
      auVar59._8_8_ = 0;
      auVar59._0_8_ = uVar69;
      uVar69 = param_2[3];
      Var7 = (unkuint9)uVar71 + (unkuint9)uVar71 + (unkuint9)0;
      Var2 = (unkuint9)SUB168(auVar32 * auVar59,0) + (unkuint9)(ulong)Var2 + (unkuint9)0;
      Var8 = (unkuint9)uVar72 + (unkuint9)uVar72 +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      Var9 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      Var2 = (unkuint9)(ulong)Var9 + (unkuint9)0 +
             (unkuint9)
             ((char)((unkuint9)(ulong)Var8 + (unkuint9)SUB168(auVar32 * auVar59,8) +
                     (unkuint9)
                     ((char)((unkuint9)(ulong)Var7 + (unkuint9)(ulong)Var2 +
                             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0') >> 0x40) != '\0') >>
                    0x40) != '\0');
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar69;
      auVar60._8_8_ = 0;
      auVar60._0_8_ = param_2[4];
      Var7 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar33 * auVar60,0) +
             (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      uVar72 = (ulong)Var7;
      Var4 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar33 * auVar60,8) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar69;
      auVar61._8_8_ = 0;
      auVar61._0_8_ = param_2[5];
      Var7 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar34 * auVar61,0) +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      uVar70 = (ulong)Var7;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar69;
      auVar62._8_8_ = 0;
      auVar62._0_8_ = param_2[6];
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar69;
      auVar63._8_8_ = 0;
      auVar63._0_8_ = uVar69;
      uVar69 = param_2[4];
      Var8 = (unkuint9)uVar67 + (unkuint9)uVar67 + (unkuint9)0;
      Var2 = (unkuint9)SUB168(auVar36 * auVar63,0) + (unkuint9)(ulong)Var2 + (unkuint9)0;
      Var9 = (unkuint9)uVar72 + (unkuint9)uVar72 +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      Var10 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar69;
      auVar64._8_8_ = 0;
      auVar64._0_8_ = param_2[5];
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar69;
      auVar65._8_8_ = 0;
      auVar65._0_8_ = uVar69;
      Var11 = (unkuint9)uVar70 + (unkuint9)uVar70 + (unkuint9)0;
      Var2 = (unkuint9)SUB168(auVar38 * auVar65,0) +
             (unkuint9)
             (ulong)((unkuint9)(ulong)Var10 + (unkuint9)0 +
                    (unkuint9)
                    ((char)((unkuint9)(ulong)Var9 + (unkuint9)SUB168(auVar36 * auVar63,8) +
                            (unkuint9)
                            ((char)((unkuint9)(ulong)Var8 + (unkuint9)(ulong)Var2 +
                                    (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0') >> 0x40) !=
                            '\0') >> 0x40) != '\0')) + (unkuint9)0;
      Var2 = (unkuint9)(ulong)Var11 + (unkuint9)(ulong)Var2 +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      uVar72 = (ulong)Var2;
      __rsaz_512_reducex(param_1,param_2,param_4);
      uVar69 = uVar66 + uVar72;
      uVar72 = lVar68 + (SUB168(auVar25 * auVar52,8) +
                         (ulong)((char)((unkuint9)Var1 >> 0x40) != '\0') +
                         (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0') +
                         SUB168(auVar30 * auVar57,8) +
                         (ulong)((char)((unkuint9)Var3 >> 0x40) != '\0') +
                         SUB168(auVar31 * auVar58,0) +
                         (ulong)((char)((unkuint9)Var6 >> 0x40) != '\0') +
                         SUB168(auVar34 * auVar61,8) +
                         (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0') +
                         SUB168(auVar35 * auVar62,0) +
                         (ulong)((char)((unkuint9)Var7 >> 0x40) != '\0') +
                         SUB168(auVar37 * auVar64,0) +
                        (ulong)((char)((unkuint9)Var10 >> 0x40) != '\0')) * 2 +
                        (ulong)((char)((unkuint9)Var11 >> 0x40) != '\0') +
                        SUB168(auVar38 * auVar65,8) +
                        (ulong)((char)((unkuint9)Var2 >> 0x40) != '\0') +
               (ulong)CARRY8(uVar66,uVar72);
      param_2 = param_1;
      __rsaz_512_subtract();
      param_5 = param_5 + -1;
      param_1 = param_2;
    } while (param_5 != 0);
  }
  else {
    do {
      __rsaz_512_reduce();
      __rsaz_512_subtract();
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

