
void __bn_sqrx8x_reduction
               (undefined8 param_1,undefined8 param_2,ulong *param_3,long param_4,ulong *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
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
  ulong uVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  ulong *unaff_RBP;
  ulong *puVar43;
  undefined8 *puVar44;
  ulong *puVar45;
  ulong uVar46;
  long in_R9;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
  bool bVar61;
  bool bVar62;
  long lStack0000000000000018;
  long in_stack_00000028;
  ulong in_stack_00000038;
  
  uVar39 = 0;
  puVar1 = (ulong *)((long)unaff_RBP + in_R9 + -0x40);
  puVar44 = &stack0x00000038;
  uVar46 = in_stack_00000038;
  do {
    uVar47 = puVar44[1];
    uVar49 = puVar44[2];
    uVar51 = puVar44[3];
    uVar53 = puVar44[4];
    uVar55 = puVar44[5];
    uVar57 = puVar44[6];
    uVar59 = puVar44[7];
    puVar45 = puVar44 + 8;
    bVar61 = false;
    bVar62 = false;
    lVar40 = -8;
    do {
      uVar42 = uVar46 * in_stack_00000028;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = *unaff_RBP;
      Var5 = (unkuint9)SUB168(auVar7 * auVar23,8) + (unkuint9)uVar47 + (unkuint9)bVar62;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar42;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = unaff_RBP[1];
      Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar8 * auVar24,0) +
             (unkuint9)
             ((char)((unkuint9)SUB168(auVar7 * auVar23,0) + (unkuint9)uVar46 + (unkuint9)bVar61 >>
                    0x40) != '\0');
      uVar46 = (ulong)Var4;
      Var5 = (unkuint9)SUB168(auVar8 * auVar24,8) + (unkuint9)uVar49 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar42;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = unaff_RBP[2];
      Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar9 * auVar25,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar47 = (ulong)Var4;
      Var5 = (unkuint9)SUB168(auVar9 * auVar25,8) + (unkuint9)uVar51 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar42;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = unaff_RBP[3];
      Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar10 * auVar26,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar49 = (ulong)Var4;
      Var5 = (unkuint9)SUB168(auVar10 * auVar26,8) + (unkuint9)uVar53 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar42;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = unaff_RBP[4];
      Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar11 * auVar27,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar51 = (ulong)Var4;
      Var5 = (unkuint9)SUB168(auVar11 * auVar27,8) + (unkuint9)uVar55 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      *(ulong *)(&stack0x00000078 + lVar40 * 8) = uVar42;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar42;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = unaff_RBP[5];
      Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar12 * auVar28,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar53 = (ulong)Var4;
      Var5 = (unkuint9)SUB168(auVar12 * auVar28,8) + (unkuint9)uVar57 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar42;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = unaff_RBP[6];
      Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar13 * auVar29,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar55 = (ulong)Var4;
      Var5 = (unkuint9)SUB168(auVar13 * auVar29,8) + (unkuint9)uVar59 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar42;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = unaff_RBP[7];
      Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar14 * auVar30,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar57 = (ulong)Var4;
      Var4 = (unkuint9)
             (ulong)((unkuint9)SUB168(auVar14 * auVar30,8) + (unkuint9)0 +
                    (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0')) + (unkuint9)0 +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      bVar61 = (char)((unkuint9)Var4 >> 0x40) != '\0';
      uVar59 = (ulong)Var4;
      bVar62 = SCARRY8(lVar40,1);
      lVar40 = lVar40 + 1;
    } while (lVar40 != 0);
    uVar42 = 0;
    bVar61 = unaff_RBP < puVar1;
    if (bVar61) {
      uVar42 = uVar46 + *puVar45;
      puVar43 = unaff_RBP + 8;
      Var4 = (unkuint9)uVar47 + (unkuint9)(ulong)puVar44[9] + (unkuint9)CARRY8(uVar46,*puVar45);
      uVar48 = (ulong)Var4;
      Var4 = (unkuint9)uVar49 + (unkuint9)(ulong)puVar44[10] +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar50 = (ulong)Var4;
      uVar46 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar47 = uVar51 + puVar44[0xb];
      uVar52 = uVar47 + uVar46;
      uVar46 = (ulong)(CARRY8(uVar51,puVar44[0xb]) || CARRY8(uVar47,uVar46));
      uVar47 = uVar53 + puVar44[0xc];
      uVar54 = uVar47 + uVar46;
      uVar46 = (ulong)(CARRY8(uVar53,puVar44[0xc]) || CARRY8(uVar47,uVar46));
      uVar47 = uVar55 + puVar44[0xd];
      uVar56 = uVar47 + uVar46;
      uVar46 = (ulong)(CARRY8(uVar55,puVar44[0xd]) || CARRY8(uVar47,uVar46));
      uVar47 = uVar57 + puVar44[0xe];
      uVar58 = uVar47 + uVar46;
      uVar46 = (ulong)(CARRY8(uVar57,puVar44[0xe]) || CARRY8(uVar47,uVar46));
      uVar47 = uVar59 + puVar44[0xf];
      uVar60 = uVar47 + uVar46;
      puVar45 = puVar44 + 0x10;
      lStack0000000000000018 = -(ulong)(CARRY8(uVar59,puVar44[0xf]) || CARRY8(uVar47,uVar46));
      bVar61 = false;
      bVar62 = false;
      lVar40 = -8;
      uVar46 = in_stack_00000038;
      while( true ) {
        do {
          lVar41 = lVar40;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar46;
          auVar31._8_8_ = 0;
          auVar31._0_8_ = *puVar43;
          Var4 = (unkuint9)uVar42 + (unkuint9)SUB168(auVar15 * auVar31,0) + (unkuint9)bVar61;
          Var6 = (unkuint9)SUB168(auVar15 * auVar31,8) + (unkuint9)uVar48 + (unkuint9)bVar62;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar46;
          auVar32._8_8_ = 0;
          auVar32._0_8_ = puVar43[1];
          Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar16 * auVar32,0) +
                 (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
          uVar42 = (ulong)Var5;
          Var6 = (unkuint9)SUB168(auVar16 * auVar32,8) + (unkuint9)uVar50 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar46;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = puVar43[2];
          Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar17 * auVar33,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar48 = (ulong)Var5;
          Var6 = (unkuint9)SUB168(auVar17 * auVar33,8) + (unkuint9)uVar52 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar46;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = puVar43[3];
          Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar18 * auVar34,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar50 = (ulong)Var5;
          Var6 = (unkuint9)SUB168(auVar18 * auVar34,8) + (unkuint9)uVar54 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar46;
          auVar35._8_8_ = 0;
          auVar35._0_8_ = puVar43[4];
          Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar19 * auVar35,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar52 = (ulong)Var5;
          Var6 = (unkuint9)SUB168(auVar19 * auVar35,8) + (unkuint9)uVar56 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar46;
          auVar36._8_8_ = 0;
          auVar36._0_8_ = puVar43[5];
          Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar20 * auVar36,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar54 = (ulong)Var5;
          Var6 = (unkuint9)SUB168(auVar20 * auVar36,8) + (unkuint9)uVar58 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar46;
          auVar37._8_8_ = 0;
          auVar37._0_8_ = puVar43[6];
          Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar21 * auVar37,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar56 = (ulong)Var5;
          Var6 = (unkuint9)SUB168(auVar21 * auVar37,8) + (unkuint9)uVar60 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar46;
          auVar38._8_8_ = 0;
          auVar38._0_8_ = puVar43[7];
          uVar46 = *(ulong *)(&stack0x00000080 + lVar41 * 8);
          Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar22 * auVar38,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar58 = (ulong)Var5;
          puVar45[lVar41] = (ulong)Var4;
          Var4 = (unkuint9)
                 (ulong)((unkuint9)SUB168(auVar22 * auVar38,8) + (unkuint9)0 +
                        (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0')) + (unkuint9)0 +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          bVar61 = (char)((unkuint9)Var4 >> 0x40) != '\0';
          uVar60 = (ulong)Var4;
          bVar62 = SCARRY8(lVar41,1);
          lVar40 = lVar41 + 1;
        } while (lVar41 + 1 != 0);
        if (puVar1 <= puVar43) break;
        puVar43 = puVar43 + 8;
        bVar61 = CARRY8(uVar42,*puVar45);
        uVar46 = uVar42 + *puVar45;
        uVar42 = uVar46 + (lStack0000000000000018 != 0);
        uVar46 = (ulong)(bVar61 || CARRY8(uVar46,(ulong)(lStack0000000000000018 != 0)));
        bVar61 = CARRY8(uVar48,puVar45[1]);
        uVar47 = uVar48 + puVar45[1];
        uVar48 = uVar47 + uVar46;
        uVar46 = (ulong)(bVar61 || CARRY8(uVar47,uVar46));
        bVar61 = CARRY8(uVar50,puVar45[2]);
        uVar47 = uVar50 + puVar45[2];
        uVar50 = uVar47 + uVar46;
        uVar46 = (ulong)(bVar61 || CARRY8(uVar47,uVar46));
        bVar61 = CARRY8(uVar52,puVar45[3]);
        uVar47 = uVar52 + puVar45[3];
        uVar52 = uVar47 + uVar46;
        uVar46 = (ulong)(bVar61 || CARRY8(uVar47,uVar46));
        bVar61 = CARRY8(uVar54,puVar45[4]);
        uVar47 = uVar54 + puVar45[4];
        uVar54 = uVar47 + uVar46;
        uVar46 = (ulong)(bVar61 || CARRY8(uVar47,uVar46));
        bVar61 = CARRY8(uVar56,puVar45[5]);
        uVar47 = uVar56 + puVar45[5];
        uVar56 = uVar47 + uVar46;
        uVar46 = (ulong)(bVar61 || CARRY8(uVar47,uVar46));
        bVar61 = CARRY8(uVar58,puVar45[6]);
        uVar47 = uVar58 + puVar45[6];
        uVar58 = uVar47 + uVar46;
        uVar46 = (ulong)(bVar61 || CARRY8(uVar47,uVar46));
        bVar61 = CARRY8(uVar60,puVar45[7]);
        uVar47 = uVar60 + puVar45[7];
        uVar60 = uVar47 + uVar46;
        puVar45 = puVar45 + 8;
        lStack0000000000000018 = -(ulong)(bVar61 || CARRY8(uVar47,uVar46));
        bVar61 = false;
        bVar62 = false;
        lVar40 = lVar41 + -7;
        uVar46 = in_stack_00000038;
      }
      uVar46 = uVar42 + uVar39;
      uVar47 = uVar48 + CARRY8(uVar42,uVar39);
      uVar39 = (ulong)CARRY8(uVar48,(ulong)CARRY8(uVar42,uVar39));
      uVar49 = uVar50 + uVar39;
      uVar39 = (ulong)CARRY8(uVar50,uVar39);
      uVar51 = uVar52 + uVar39;
      uVar39 = (ulong)CARRY8(uVar52,uVar39);
      uVar53 = uVar54 + uVar39;
      uVar39 = (ulong)CARRY8(uVar54,uVar39);
      uVar55 = uVar56 + uVar39;
      uVar39 = (ulong)CARRY8(uVar56,uVar39);
      uVar57 = uVar58 + uVar39;
      uVar39 = (ulong)CARRY8(uVar58,uVar39);
      uVar59 = uVar60 + uVar39;
      uVar42 = (ulong)CARRY8(uVar60,uVar39);
      bVar61 = lStack0000000000000018 != 0;
    }
    uVar50 = uVar46 + *puVar45;
    uVar48 = (ulong)(CARRY8(uVar46,*puVar45) || CARRY8(uVar50,(ulong)bVar61));
    uVar52 = uVar47 + puVar45[1];
    uVar47 = (ulong)(CARRY8(uVar47,puVar45[1]) || CARRY8(uVar52,uVar48));
    uVar54 = uVar49 + puVar45[2];
    uVar49 = (ulong)(CARRY8(uVar49,puVar45[2]) || CARRY8(uVar54,uVar47));
    uVar56 = uVar51 + puVar45[3];
    uVar51 = (ulong)(CARRY8(uVar51,puVar45[3]) || CARRY8(uVar56,uVar49));
    uVar58 = uVar53 + puVar45[4];
    uVar53 = (ulong)(CARRY8(uVar53,puVar45[4]) || CARRY8(uVar58,uVar51));
    uVar60 = uVar55 + puVar45[5];
    uVar55 = (ulong)(CARRY8(uVar55,puVar45[5]) || CARRY8(uVar60,uVar53));
    uVar2 = uVar57 + puVar45[6];
    uVar57 = (ulong)(CARRY8(uVar57,puVar45[6]) || CARRY8(uVar2,uVar55));
    uVar3 = uVar59 + puVar45[7];
    uVar39 = uVar42 + (CARRY8(uVar59,puVar45[7]) || CARRY8(uVar3,uVar57));
    uVar46 = *(ulong *)((long)puVar45 + param_4 + 0x40);
    *puVar45 = uVar50 + bVar61;
    puVar45[1] = uVar52 + uVar48;
    puVar45[2] = uVar54 + uVar47;
    puVar45[3] = uVar56 + uVar49;
    puVar45[4] = uVar58 + uVar51;
    puVar45[5] = uVar60 + uVar53;
    puVar45[6] = uVar2 + uVar55;
    puVar45[7] = uVar3 + uVar57;
    puVar44 = (undefined8 *)((long)puVar45 + param_4 + 0x40);
    unaff_RBP = param_3;
  } while (puVar45 + 8 < param_5);
  return;
}

