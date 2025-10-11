
undefined8
bn_mulx4x_mont(ulong param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,int param_6
              )

{
  ulong *puVar1;
  undefined1 (*pauVar2) [16];
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
  unkint9 Var11;
  unkint9 Var12;
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
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  ulong uVar92;
  ulong *puVar93;
  undefined1 (*pauVar94) [16];
  ulong *puVar95;
  ulong uVar96;
  ulong *puVar97;
  long *plVar98;
  uint *puVar99;
  ulong uVar100;
  ulong uVar101;
  ulong uVar102;
  ulong uVar103;
  ulong uVar104;
  ulong uVar105;
  ulong uVar106;
  bool bVar107;
  bool bVar108;
  uint uVar109;
  undefined1 auStack_78 [72];
  
  uVar96 = (ulong)(uint)(param_6 << 3);
  uVar102 = *param_5;
  puVar95 = (ulong *)((ulong)(auStack_78 + -uVar96) & 0xffffffffffffff80);
  for (puVar3 = (ulong *)((long)puVar95 +
                         ((ulong)(&stack0xffffffffffffffd0 + -(long)puVar95) & 0xfffffffffffff000));
      puVar95 < puVar3; puVar3 = puVar3 + -0x200) {
  }
  *puVar3 = uVar96;
  puVar3[2] = (long)param_3 + uVar96;
  puVar3[3] = uVar102;
  puVar3[4] = param_1;
  puVar3[5] = (ulong)register0x00000020;
  puVar3[6] = (ulong)((uint)(param_6 << 3) >> 5) - 1;
  uVar102 = *param_3;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar102;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = *param_2;
  uVar100 = SUB168(auVar13 * auVar45,0);
  uVar92 = SUB168(auVar13 * auVar45,8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar102;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_2[1];
  uVar103 = SUB168(auVar14 * auVar46,0);
  uVar105 = SUB168(auVar14 * auVar46,8);
  puVar3[1] = (ulong)(param_3 + 1);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar102;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_2[2];
  uVar104 = SUB168(auVar15 * auVar47,0);
  uVar96 = (ulong)CARRY8(uVar103,uVar92);
  uVar106 = uVar104 + uVar105;
  uVar101 = uVar100 * puVar3[3];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar102;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_2[3];
  param_2 = param_2 + 4;
  Var6 = (unkuint9)
         (SUB168(auVar15 * auVar47,8) + (ulong)(CARRY8(uVar104,uVar105) || CARRY8(uVar106,uVar96)))
         + (unkuint9)SUB168(auVar16 * auVar48,0) + (unkuint9)0;
  Var7 = (unkuint9)SUB168(auVar16 * auVar48,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar104 = (ulong)Var7;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar101;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = *param_4;
  Var11 = (unkuint9)SUB168(auVar17 * auVar49,8) + (unkuint9)(uVar103 + uVar92) + (unkuint9)0;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar101;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_4[1];
  Var7 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar18 * auVar50,0) +
         (unkuint9)
         ((char)((unkuint9)uVar100 + (unkuint9)SUB168(auVar17 * auVar49,0) +
                 (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0') >> 0x40) != '\0');
  Var11 = (unkuint9)SUB168(auVar18 * auVar50,8) + (unkuint9)(uVar106 + uVar96) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar101;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_4[2];
  uVar96 = puVar3[6];
  puVar3[8] = (ulong)Var7;
  Var7 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar19 * auVar51,0) +
         (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
  Var11 = (unkuint9)SUB168(auVar19 * auVar51,8) + (unkuint9)(ulong)Var6 +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar101;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_4[3];
  puVar3[9] = (ulong)Var7;
  Var6 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar20 * auVar52,0) +
         (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
  bVar107 = (char)((unkuint9)Var6 >> 0x40) != '\0';
  Var7 = (unkuint9)SUB168(auVar20 * auVar52,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  bVar108 = (char)((unkuint9)Var7 >> 0x40) != '\0';
  uVar106 = (ulong)Var7;
  param_4 = param_4 + 4;
  puVar3[10] = (ulong)Var6;
  puVar95 = puVar3 + 0xc;
  do {
    puVar93 = puVar95;
    Var6 = (unkuint9)uVar106 + (unkuint9)0 + (unkuint9)bVar107;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar102;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = *param_2;
    Var7 = (unkuint9)SUB168(auVar21 * auVar53,0) + (unkuint9)uVar104 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar102;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = param_2[1];
    Var11 = (unkuint9)SUB168(auVar22 * auVar54,0) + (unkuint9)SUB168(auVar21 * auVar53,8) +
            (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar102;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = param_2[2];
    Var8 = (unkuint9)SUB168(auVar23 * auVar55,0) + (unkuint9)SUB168(auVar22 * auVar54,8) +
           (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar102;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = param_2[3];
    Var9 = (unkuint9)SUB168(auVar24 * auVar56,0) + (unkuint9)SUB168(auVar23 * auVar55,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var10 = (unkuint9)SUB168(auVar24 * auVar56,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar104 = (ulong)Var10;
    param_2 = param_2 + 4;
    puVar95 = puVar93 + 4;
    Var7 = (unkuint9)(ulong)Var7 + (unkuint9)(ulong)Var6 + (unkuint9)bVar108;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar101;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = *param_4;
    Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar25 * auVar57,0) +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    Var11 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar25 * auVar57,8) +
            (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar101;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = param_4[1];
    Var7 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar26 * auVar58,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var11 = (unkuint9)(ulong)Var8 + (unkuint9)SUB168(auVar26 * auVar58,8) +
            (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar101;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = param_4[2];
    puVar93[-1] = (ulong)Var6;
    Var6 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar27 * auVar59,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    *puVar93 = (ulong)Var7;
    Var7 = (unkuint9)(ulong)Var9 + (unkuint9)SUB168(auVar27 * auVar59,8) +
           (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar101;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = param_4[3];
    puVar93[1] = (ulong)Var6;
    Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar28 * auVar60,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    bVar107 = (char)((unkuint9)Var6 >> 0x40) != '\0';
    uVar106 = SUB168(auVar28 * auVar60,8) + (ulong)((char)((unkuint9)Var7 >> 0x40) != '\0');
    param_4 = param_4 + 4;
    puVar93[2] = (ulong)Var6;
    bVar108 = SBORROW8(uVar96,1);
    uVar96 = uVar96 - 1;
  } while (uVar96 != 0);
  uVar102 = *puVar3;
  puVar97 = (ulong *)puVar3[1];
  uVar96 = (ulong)CARRY8(uVar104,uVar106 + bVar107);
  puVar93[3] = uVar104 + uVar106 + bVar107;
  do {
    uVar106 = *puVar97;
    param_2 = (ulong *)((long)param_2 - uVar102);
    *puVar95 = -uVar96;
    param_4 = (ulong *)((long)param_4 - uVar102);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar106;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = *param_2;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar106;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = param_2[1];
    Var7 = (unkuint9)SUB168(auVar29 * auVar61,0) + (unkuint9)puVar3[8] + (unkuint9)0;
    uVar102 = (ulong)Var7;
    Var6 = (unkuint9)SUB168(auVar29 * auVar61,8) + (unkuint9)SUB168(auVar30 * auVar62,0) +
           (unkuint9)0;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar106;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = param_2[2];
    Var7 = (unkuint9)(ulong)Var6 + (unkuint9)puVar3[9] +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var6 = (unkuint9)SUB168(auVar30 * auVar62,8) + (unkuint9)SUB168(auVar31 * auVar63,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var11 = (unkuint9)(ulong)Var6 + (unkuint9)puVar3[10] +
            (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    puVar3[1] = (ulong)(puVar97 + 1);
    uVar96 = uVar102 * puVar3[3];
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar106;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = param_2[3];
    Var6 = (unkuint9)
           (ulong)((unkuint9)
                   (ulong)((unkuint9)SUB168(auVar31 * auVar63,8) + (unkuint9)0 +
                          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0')) + (unkuint9)0 +
                  (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0')) +
           (unkuint9)SUB168(auVar32 * auVar64,0) + (unkuint9)0;
    Var8 = (unkuint9)(ulong)Var6 + (unkuint9)puVar3[0xb] + (unkuint9)0;
    Var6 = (unkuint9)SUB168(auVar32 * auVar64,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    param_2 = param_2 + 4;
    Var9 = (unkuint9)(ulong)Var6 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar92 = (ulong)Var9;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar96;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = *param_4;
    Var7 = (unkuint9)SUB168(auVar33 * auVar65,8) + (unkuint9)(ulong)Var7 +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar96;
    auVar66._8_8_ = 0;
    auVar66._0_8_ = param_4[1];
    Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar34 * auVar66,0) +
           (unkuint9)
           ((char)((unkuint9)uVar102 + (unkuint9)SUB168(auVar33 * auVar65,0) +
                   (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0') >> 0x40) != '\0');
    Var7 = (unkuint9)SUB168(auVar34 * auVar66,8) + (unkuint9)(ulong)Var11 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar96;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = param_4[2];
    puVar3[8] = (ulong)Var6;
    Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar35 * auVar67,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var7 = (unkuint9)SUB168(auVar35 * auVar67,8) + (unkuint9)(ulong)Var8 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar96;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = param_4[3];
    puVar3[9] = (ulong)Var6;
    param_4 = param_4 + 4;
    Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar36 * auVar68,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    bVar107 = (char)((unkuint9)Var6 >> 0x40) != '\0';
    Var7 = (unkuint9)SUB168(auVar36 * auVar68,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    bVar108 = (char)((unkuint9)Var7 >> 0x40) != '\0';
    uVar100 = (ulong)Var7;
    uVar102 = puVar3[6];
    puVar3[10] = (ulong)Var6;
    puVar95 = puVar3 + 0xc;
    do {
      puVar93 = puVar95;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar106;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = *param_2;
      Var6 = (unkuint9)uVar100 + (unkuint9)0 + (unkuint9)bVar107;
      Var11 = (unkuint9)SUB168(auVar37 * auVar69,0) + (unkuint9)uVar92 + (unkuint9)bVar108;
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar106;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = param_2[1];
      Var7 = (unkuint9)(ulong)Var11 + (unkuint9)*puVar93 +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      Var8 = (unkuint9)SUB168(auVar38 * auVar70,0) + (unkuint9)SUB168(auVar37 * auVar69,8) +
             (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar106;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = param_2[2];
      Var11 = (unkuint9)(ulong)Var8 + (unkuint9)puVar93[1] +
              (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      Var9 = (unkuint9)SUB168(auVar39 * auVar71,0) + (unkuint9)SUB168(auVar38 * auVar70,8) +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar106;
      auVar72._8_8_ = 0;
      auVar72._0_8_ = param_2[3];
      Var8 = (unkuint9)(ulong)Var9 + (unkuint9)puVar93[2] +
             (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      Var10 = (unkuint9)SUB168(auVar40 * auVar72,0) + (unkuint9)SUB168(auVar39 * auVar71,8) +
              (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      Var9 = (unkuint9)(ulong)Var10 + (unkuint9)puVar93[3] +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      Var12 = (unkuint9)SUB168(auVar40 * auVar72,8) + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      param_2 = param_2 + 4;
      puVar95 = puVar93 + 4;
      Var10 = (unkuint9)(ulong)Var12 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      uVar92 = (ulong)Var10;
      Var7 = (unkuint9)(ulong)Var7 + (unkuint9)(ulong)Var6 +
             (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar96;
      auVar73._8_8_ = 0;
      auVar73._0_8_ = *param_4;
      Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar41 * auVar73,0) +
             (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      Var11 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar41 * auVar73,8) +
              (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      auVar42._8_8_ = 0;
      auVar42._0_8_ = uVar96;
      auVar74._8_8_ = 0;
      auVar74._0_8_ = param_4[1];
      Var7 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar42 * auVar74,0) +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      Var11 = (unkuint9)(ulong)Var8 + (unkuint9)SUB168(auVar42 * auVar74,8) +
              (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar96;
      auVar75._8_8_ = 0;
      auVar75._0_8_ = param_4[2];
      puVar93[-1] = (ulong)Var6;
      Var6 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar43 * auVar75,0) +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      Var11 = (unkuint9)(ulong)Var9 + (unkuint9)SUB168(auVar43 * auVar75,8) +
              (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      auVar44._8_8_ = 0;
      auVar44._0_8_ = uVar96;
      auVar76._8_8_ = 0;
      auVar76._0_8_ = param_4[3];
      *puVar93 = (ulong)Var7;
      puVar93[1] = (ulong)Var6;
      Var6 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar44 * auVar76,0) +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      bVar107 = (char)((unkuint9)Var6 >> 0x40) != '\0';
      uVar100 = SUB168(auVar44 * auVar76,8) + (ulong)((char)((unkuint9)Var11 >> 0x40) != '\0');
      param_4 = param_4 + 4;
      puVar93[2] = (ulong)Var6;
      bVar108 = SBORROW8(uVar102,1);
      uVar102 = uVar102 - 1;
    } while (uVar102 != 0);
    uVar102 = *puVar3;
    puVar97 = (ulong *)puVar3[1];
    uVar106 = uVar92 + uVar100 + bVar107;
    uVar96 = (ulong)(CARRY8(uVar92,uVar100 + bVar107) || CARRY8(uVar106,(ulong)(*puVar95 != 0)));
    puVar93[3] = uVar106 + (*puVar95 != 0);
  } while (puVar97 != (ulong *)puVar3[2]);
  puVar95 = puVar3 + 8;
  param_4 = (ulong *)((long)param_4 - uVar102);
  uVar106 = uVar102 >> 5;
  bVar107 = (uVar102 >> 4 & 1) != 0;
  plVar98 = (long *)puVar3[4];
  do {
    uVar92 = *puVar95;
    puVar93 = puVar95 + 1;
    puVar97 = puVar95 + 2;
    puVar1 = puVar95 + 3;
    puVar95 = puVar95 + 4;
    uVar100 = (ulong)bVar107;
    uVar104 = uVar92 - *param_4;
    uVar92 = (ulong)(uVar92 < *param_4 || uVar104 < uVar100);
    uVar105 = *puVar93 - param_4[1];
    uVar101 = (ulong)(*puVar93 < param_4[1] || uVar105 < uVar92);
    uVar4 = *puVar97 - param_4[2];
    uVar103 = (ulong)(*puVar97 < param_4[2] || uVar4 < uVar101);
    uVar5 = *puVar1 - param_4[3];
    bVar107 = *puVar1 < param_4[3] || uVar5 < uVar103;
    param_4 = param_4 + 4;
    *plVar98 = uVar104 - uVar100;
    plVar98[1] = uVar105 - uVar92;
    plVar98[2] = uVar4 - uVar101;
    plVar98[3] = uVar5 - uVar103;
    plVar98 = plVar98 + 4;
    uVar106 = uVar106 - 1;
  } while (uVar106 != 0);
  uVar109 = (uint)(uVar96 - bVar107);
  pauVar94 = (undefined1 (*) [16])(puVar3 + 8);
  puVar99 = (uint *)((long)plVar98 - uVar102);
  do {
    uVar77 = *(uint *)(*pauVar94 + 4);
    uVar78 = *(uint *)(*pauVar94 + 8);
    uVar79 = *(uint *)(*pauVar94 + 0xc);
    uVar80 = *(uint *)pauVar94[1];
    uVar81 = *(uint *)(pauVar94[1] + 4);
    uVar82 = *(uint *)(pauVar94[1] + 8);
    uVar83 = *(uint *)(pauVar94[1] + 0xc);
    pauVar2 = pauVar94 + 2;
    uVar88 = *puVar99;
    uVar89 = puVar99[1];
    uVar90 = puVar99[2];
    uVar91 = puVar99[3];
    uVar84 = puVar99[4];
    uVar85 = puVar99[5];
    uVar86 = puVar99[6];
    uVar87 = puVar99[7];
    *pauVar94 = (undefined1  [16])0x0;
    pauVar94[1] = (undefined1  [16])0x0;
    *puVar99 = uVar88 & -(uint)(uVar109 == 0) | *(uint *)*pauVar94 & uVar109;
    puVar99[1] = uVar89 & -(uint)(uVar109 == 0) | uVar77 & uVar109;
    puVar99[2] = uVar90 & -(uint)(uVar109 == 0) | uVar78 & uVar109;
    puVar99[3] = uVar91 & -(uint)(uVar109 == 0) | uVar79 & uVar109;
    puVar99[4] = uVar84 & -(uint)(uVar109 == 0) | uVar80 & uVar109;
    puVar99[5] = uVar85 & -(uint)(uVar109 == 0) | uVar81 & uVar109;
    puVar99[6] = uVar86 & -(uint)(uVar109 == 0) | uVar82 & uVar109;
    puVar99[7] = uVar87 & -(uint)(uVar109 == 0) | uVar83 & uVar109;
    uVar102 = uVar102 - 0x20;
    pauVar94 = pauVar2;
    puVar99 = puVar99 + 8;
  } while (uVar102 != 0);
  *(undefined8 *)*pauVar2 = 0;
  return 1;
}

