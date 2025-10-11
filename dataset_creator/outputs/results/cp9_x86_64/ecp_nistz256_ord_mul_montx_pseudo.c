
undefined8 ecp_nistz256_ord_mul_montx(ulong *param_1,ulong *param_2,ulong *param_3)

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
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  ulong uVar73;
  ulong uVar74;
  ulong uVar75;
  ulong uVar76;
  ulong uVar77;
  ulong uVar78;
  ulong uVar79;
  ulong uVar80;
  ulong uVar81;
  ulong uVar82;
  ulong uVar83;
  ulong uVar84;
  
  uVar76 = *param_3;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar76;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = *param_2;
  uVar78 = SUB168(auVar7 * auVar40,0);
  uVar79 = SUB168(auVar7 * auVar40,8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar76;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_2[1];
  uVar73 = SUB168(auVar8 * auVar41,0);
  uVar80 = SUB168(auVar8 * auVar41,8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar76;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_2[2];
  uVar77 = SUB168(auVar9 * auVar42,0);
  uVar81 = SUB168(auVar9 * auVar42,8);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar76;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_2[3];
  uVar74 = SUB168(auVar10 * auVar43,0);
  uVar75 = uVar78 * DAT_005eb0e0;
  uVar76 = (ulong)CARRY8(uVar79,uVar73);
  uVar83 = uVar80 + uVar77;
  uVar77 = (ulong)(CARRY8(uVar80,uVar77) || CARRY8(uVar83,uVar76));
  uVar80 = uVar81 + uVar74;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar75;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = DAT_005eb0c0;
  Var1 = (unkuint9)uVar78 + (unkuint9)SUB168(auVar11 * auVar44,0) + (unkuint9)0;
  uVar78 = (ulong)Var1;
  Var2 = (unkuint9)(uVar79 + uVar73) + (unkuint9)SUB168(auVar11 * auVar44,8) + (unkuint9)0;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar75;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = DAT_005eb0c8;
  Var1 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar12 * auVar45,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var3 = (unkuint9)(uVar83 + uVar76) + (unkuint9)SUB168(auVar12 * auVar45,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar75;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = DAT_005eb0d0;
  Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar13 * auVar46,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var4 = (unkuint9)(uVar80 + uVar77) + (unkuint9)SUB168(auVar13 * auVar46,8) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar75;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = DAT_005eb0d8;
  uVar76 = param_3[1];
  Var3 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar14 * auVar47,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var5 = (unkuint9)
         (SUB168(auVar10 * auVar43,8) + (ulong)(CARRY8(uVar81,uVar74) || CARRY8(uVar80,uVar77))) +
         (unkuint9)SUB168(auVar14 * auVar47,8) + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)uVar78 +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar83 = uVar78 + ((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar77 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar76;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = *param_2;
  Var1 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar15 * auVar48,0) +
         (unkuint9)CARRY8(uVar83,uVar77);
  uVar80 = (ulong)Var1;
  Var2 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar15 * auVar48,8) +
         (unkuint9)(SCARRY8(uVar83,0) != SCARRY8(uVar83,uVar77));
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar76;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_2[1];
  Var1 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar16 * auVar49,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var3 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar16 * auVar49,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar76;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_2[2];
  Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar17 * auVar50,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar17 * auVar50,8) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar76;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_2[3];
  uVar76 = uVar80 * DAT_005eb0e0;
  Var3 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar18 * auVar51,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var5 = (unkuint9)(uVar83 + uVar77) + (unkuint9)SUB168(auVar18 * auVar51,8) +
         (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)uVar78 +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar83 = uVar78 * 2 + (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar77 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar76;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = DAT_005eb0c0;
  Var5 = (unkuint9)uVar80 + (unkuint9)SUB168(auVar19 * auVar52,0) + (unkuint9)CARRY8(uVar83,uVar77);
  uVar80 = (ulong)Var5;
  Var6 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar19 * auVar52,8) +
         (unkuint9)(SCARRY8(uVar83,0) != SCARRY8(uVar83,uVar77));
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar76;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = DAT_005eb0c8;
  Var1 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar20 * auVar53,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar20 * auVar53,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar76;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = DAT_005eb0d0;
  Var2 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar21 * auVar54,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar21 * auVar54,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar76;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = DAT_005eb0d8;
  uVar76 = param_3[2];
  Var3 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar22 * auVar55,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar22 * auVar55,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)uVar80 +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar83 = uVar83 + uVar77 + uVar80 + (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar77 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar76;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = *param_2;
  Var1 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar23 * auVar56,0) +
         (unkuint9)CARRY8(uVar83,uVar77);
  uVar73 = (ulong)Var1;
  Var2 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar23 * auVar56,8) +
         (unkuint9)(SCARRY8(uVar83,0) != SCARRY8(uVar83,uVar77));
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar76;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_2[1];
  Var1 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar24 * auVar57,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var3 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar24 * auVar57,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar76;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_2[2];
  Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar25 * auVar58,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar25 * auVar58,8) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar76;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_2[3];
  uVar76 = uVar73 * DAT_005eb0e0;
  Var3 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar26 * auVar59,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var5 = (unkuint9)(uVar83 + uVar77) + (unkuint9)SUB168(auVar26 * auVar59,8) +
         (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)uVar80 +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar83 = uVar80 * 2 + (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar77 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar76;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = DAT_005eb0c0;
  Var5 = (unkuint9)uVar73 + (unkuint9)SUB168(auVar27 * auVar60,0) + (unkuint9)CARRY8(uVar83,uVar77);
  uVar73 = (ulong)Var5;
  Var6 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar27 * auVar60,8) +
         (unkuint9)(SCARRY8(uVar83,0) != SCARRY8(uVar83,uVar77));
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar76;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = DAT_005eb0c8;
  Var1 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar28 * auVar61,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar28 * auVar61,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar76;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = DAT_005eb0d0;
  Var2 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar29 * auVar62,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar29 * auVar62,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar76;
  auVar63._8_8_ = 0;
  auVar63._0_8_ = DAT_005eb0d8;
  uVar76 = param_3[3];
  Var3 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar30 * auVar63,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar30 * auVar63,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)uVar73 +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar80 = uVar83 + uVar77 + uVar73 + (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar77 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar76;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = *param_2;
  Var1 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar31 * auVar64,0) +
         (unkuint9)CARRY8(uVar80,uVar77);
  uVar74 = (ulong)Var1;
  Var2 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar31 * auVar64,8) +
         (unkuint9)(SCARRY8(uVar80,0) != SCARRY8(uVar80,uVar77));
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar76;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = param_2[1];
  Var1 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar32 * auVar65,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var3 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar32 * auVar65,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar76;
  auVar66._8_8_ = 0;
  auVar66._0_8_ = param_2[2];
  Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar33 * auVar66,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar33 * auVar66,8) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar76;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = param_2[3];
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar74;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = DAT_005eb0e0;
  uVar83 = SUB168(auVar35 * auVar68,0);
  Var3 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar34 * auVar67,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var5 = (unkuint9)(uVar80 + uVar77) + (unkuint9)SUB168(auVar34 * auVar67,8) +
         (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)uVar73 +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar79 = uVar73 * 2 + (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar76 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar83;
  auVar69._8_8_ = 0;
  auVar69._0_8_ = DAT_005eb0c0;
  Var5 = (unkuint9)uVar74 + (unkuint9)SUB168(auVar36 * auVar69,0) + (unkuint9)CARRY8(uVar79,uVar76);
  uVar81 = (ulong)Var5;
  Var6 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar36 * auVar69,8) +
         (unkuint9)(SCARRY8(uVar79,0) != SCARRY8(uVar79,uVar76));
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar83;
  auVar70._8_8_ = 0;
  auVar70._0_8_ = DAT_005eb0c8;
  Var1 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar37 * auVar70,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar82 = (ulong)Var1;
  Var2 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar37 * auVar70,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar83;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = DAT_005eb0d0;
  Var1 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar38 * auVar71,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  uVar84 = (ulong)Var1;
  Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar38 * auVar71,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar83;
  auVar72._8_8_ = 0;
  auVar72._0_8_ = DAT_005eb0d8;
  Var1 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar39 * auVar72,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  uVar75 = (ulong)Var1;
  Var2 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar39 * auVar72,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var1 = (unkuint9)(ulong)Var2 + (unkuint9)uVar81 +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  uVar78 = (ulong)Var1;
  uVar77 = (ulong)(uVar84 < DAT_005eb0c8 || uVar84 - DAT_005eb0c8 < (ulong)(uVar82 < DAT_005eb0c0));
  uVar83 = (ulong)(uVar75 < DAT_005eb0d0 || uVar75 - DAT_005eb0d0 < uVar77);
  uVar74 = (uVar78 - DAT_005eb0d8) - uVar83;
  uVar80 = (uVar84 - DAT_005eb0c8) - (ulong)(uVar82 < DAT_005eb0c0);
  uVar73 = uVar82 - DAT_005eb0c0;
  uVar77 = (uVar75 - DAT_005eb0d0) - uVar77;
  if (uVar79 + uVar76 + uVar81 + (ulong)((char)((unkuint9)Var2 >> 0x40) != '\0') +
      (ulong)((char)((unkuint9)Var1 >> 0x40) != '\0') <
      (ulong)(uVar78 < DAT_005eb0d8 || uVar78 - DAT_005eb0d8 < uVar83)) {
    uVar74 = uVar78;
    uVar80 = uVar84;
    uVar73 = uVar82;
    uVar77 = uVar75;
  }
  *param_1 = uVar73;
  param_1[1] = uVar80;
  param_1[2] = uVar77;
  param_1[3] = uVar74;
  return SUB168(auVar35 * auVar68,8);
}

