
ulong FUN_005f6800(ulong *param_1,ulong *param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  undefined1 auVar36 [16];
  unkint9 Var37;
  unkint9 Var38;
  unkint9 Var39;
  unkint9 Var40;
  unkint9 Var41;
  unkint9 Var42;
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
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  ulong uVar103;
  ulong uVar104;
  long lVar105;
  ulong uVar106;
  ulong uVar107;
  ulong uVar108;
  ulong uVar109;
  ulong uVar110;
  ulong uVar111;
  ulong uVar112;
  ulong uVar113;
  ulong uVar114;
  ulong uVar115;
  ulong uVar116;
  ulong uVar117;
  ulong uVar118;
  
  if ((DAT_0094b5a0 & 0x80100) != 0x80100) {
    uVar110 = *param_2;
    uVar107 = param_2[1];
    uVar106 = param_2[2];
    uVar111 = param_2[3];
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar107;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar110;
      auVar99._8_8_ = 0;
      auVar99._0_8_ = SUB168(auVar1 * auVar19,8);
      uVar103 = SUB168(auVar1 * auVar19,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar106;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar110;
      auVar99 = auVar2 * auVar20 + auVar99;
      uVar112 = auVar99._0_8_;
      auVar100._8_8_ = 0;
      auVar100._0_8_ = auVar99._8_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar111;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar110;
      auVar100 = auVar3 * auVar21 + auVar100;
      auVar101._8_8_ = 0;
      auVar101._0_8_ = auVar100._0_8_;
      auVar102._8_8_ = 0;
      auVar102._0_8_ = auVar100._8_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar111;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar106;
      uVar104 = SUB168(auVar4 * auVar22,0);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar106;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar107;
      auVar101 = auVar5 * auVar23 + auVar101;
      uVar113 = auVar101._0_8_;
      uVar108 = auVar101._8_8_;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar111;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar107;
      auVar102 = auVar6 * auVar24 + auVar102;
      uVar114 = auVar102._0_8_;
      uVar109 = auVar102._8_8_;
      uVar115 = uVar114 + uVar108;
      uVar108 = (ulong)CARRY8(uVar114,uVar108);
      uVar114 = uVar104 + uVar109;
      uVar116 = uVar114 + uVar108;
      uVar118 = SUB168(auVar4 * auVar22,8) +
                (ulong)(CARRY8(uVar104,uVar109) || CARRY8(uVar114,uVar108));
      uVar109 = uVar112 * 2 + (ulong)CARRY8(uVar103,uVar103);
      uVar108 = (ulong)(CARRY8(uVar112,uVar112) ||
                       CARRY8(uVar112 * 2,(ulong)CARRY8(uVar103,uVar103)));
      uVar112 = uVar113 * 2 + uVar108;
      uVar108 = (ulong)(CARRY8(uVar113,uVar113) || CARRY8(uVar113 * 2,uVar108));
      uVar113 = uVar115 * 2 + uVar108;
      uVar108 = (ulong)(CARRY8(uVar115,uVar115) || CARRY8(uVar115 * 2,uVar108));
      uVar117 = uVar116 * 2 + uVar108;
      uVar108 = (ulong)(CARRY8(uVar116,uVar116) || CARRY8(uVar116 * 2,uVar108));
      uVar116 = uVar118 * 2 + uVar108;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar110;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar110;
      uVar110 = SUB168(auVar7 * auVar25,8);
      lVar105 = SUB168(auVar7 * auVar25,0);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar107;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar107;
      uVar114 = SUB168(auVar8 * auVar26,0);
      uVar104 = uVar103 * 2 + uVar110;
      uVar110 = (ulong)CARRY8(uVar103 * 2,uVar110);
      uVar107 = uVar109 + uVar114;
      uVar103 = uVar107 + uVar110;
      uVar110 = SUB168(auVar8 * auVar26,8) +
                (ulong)(CARRY8(uVar109,uVar114) || CARRY8(uVar107,uVar110));
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar106;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar106;
      uVar106 = SUB168(auVar9 * auVar27,0);
      uVar109 = uVar112 + uVar110;
      uVar110 = (ulong)CARRY8(uVar112,uVar110);
      uVar107 = uVar113 + uVar106;
      uVar115 = uVar107 + uVar110;
      uVar110 = SUB168(auVar9 * auVar27,8) +
                (ulong)(CARRY8(uVar113,uVar106) || CARRY8(uVar107,uVar110));
      uVar114 = lVar105 * DAT_005f60e0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar111;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar111;
      uVar106 = SUB168(auVar10 * auVar28,0);
      uVar113 = uVar117 + uVar110;
      uVar110 = (ulong)CARRY8(uVar117,uVar110);
      uVar107 = uVar116 + uVar106;
      uVar117 = uVar107 + uVar110;
      uVar116 = (ulong)(CARRY8(uVar118,uVar118) || CARRY8(uVar118 * 2,uVar108)) +
                SUB168(auVar10 * auVar28,8) +
                (ulong)(CARRY8(uVar116,uVar106) || CARRY8(uVar107,uVar110));
      auVar11._8_8_ = 0;
      auVar11._0_8_ = DAT_005f60c0;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar114;
      auVar43 = auVar11 * auVar29 + auVar95;
      auVar95._8_8_ = auVar43._0_8_;
      auVar95._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar108 = uVar103 - uVar114;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = DAT_005f60c8;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar114;
      uVar110 = SUB168(auVar12 * auVar30,0);
      uVar111 = uVar104 + uVar107;
      uVar106 = SUB168(auVar12 * auVar30,8) + (ulong)CARRY8(uVar104,uVar107);
      lVar105 = uVar111 + uVar110;
      uVar110 = (ulong)CARRY8(uVar111,uVar110);
      uVar107 = uVar108 + uVar106;
      uVar104 = uVar107 + uVar110;
      uVar110 = (uVar114 - (uVar103 < uVar114)) +
                (ulong)(CARRY8(uVar108,uVar106) || CARRY8(uVar107,uVar110));
      uVar103 = lVar105 * DAT_005f60e0;
      uVar107 = uVar109 - (uVar114 << 0x20);
      uVar112 = uVar107 + uVar110;
      uVar111 = ((uVar114 - (uVar114 >> 0x20)) - (ulong)(uVar109 < uVar114 << 0x20)) +
                (ulong)CARRY8(uVar107,uVar110);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = DAT_005f60c0;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar103;
      auVar43 = auVar13 * auVar31 + auVar96;
      auVar96._8_8_ = auVar43._0_8_;
      auVar96._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar114 = uVar112 - uVar103;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = DAT_005f60c8;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar103;
      uVar110 = SUB168(auVar14 * auVar32,0);
      uVar108 = uVar104 + uVar107;
      uVar106 = SUB168(auVar14 * auVar32,8) + (ulong)CARRY8(uVar104,uVar107);
      lVar105 = uVar108 + uVar110;
      uVar110 = (ulong)CARRY8(uVar108,uVar110);
      uVar107 = uVar114 + uVar106;
      uVar104 = uVar107 + uVar110;
      uVar110 = (uVar103 - (uVar112 < uVar103)) +
                (ulong)(CARRY8(uVar114,uVar106) || CARRY8(uVar107,uVar110));
      uVar109 = lVar105 * DAT_005f60e0;
      uVar107 = uVar111 - (uVar103 << 0x20);
      uVar108 = uVar107 + uVar110;
      uVar103 = ((uVar103 - (uVar103 >> 0x20)) - (ulong)(uVar111 < uVar103 << 0x20)) +
                (ulong)CARRY8(uVar107,uVar110);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = DAT_005f60c0;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar109;
      auVar43 = auVar15 * auVar33 + auVar97;
      auVar97._8_8_ = auVar43._0_8_;
      auVar97._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar111 = uVar108 - uVar109;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = DAT_005f60c8;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar109;
      uVar110 = SUB168(auVar16 * auVar34,0);
      uVar114 = uVar104 + uVar107;
      uVar106 = SUB168(auVar16 * auVar34,8) + (ulong)CARRY8(uVar104,uVar107);
      lVar105 = uVar114 + uVar110;
      uVar110 = (ulong)CARRY8(uVar114,uVar110);
      uVar107 = uVar111 + uVar106;
      uVar114 = uVar107 + uVar110;
      uVar110 = (uVar109 - (uVar108 < uVar109)) +
                (ulong)(CARRY8(uVar111,uVar106) || CARRY8(uVar107,uVar110));
      uVar112 = lVar105 * DAT_005f60e0;
      uVar107 = uVar103 - (uVar109 << 0x20);
      uVar104 = uVar107 + uVar110;
      uVar109 = ((uVar109 - (uVar109 >> 0x20)) - (ulong)(uVar103 < uVar109 << 0x20)) +
                (ulong)CARRY8(uVar107,uVar110);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = DAT_005f60c0;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar112;
      auVar43 = auVar17 * auVar35 + auVar98;
      auVar98._8_8_ = auVar43._0_8_;
      auVar98._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar103 = uVar104 - uVar112;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = DAT_005f60c8;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar112;
      uVar110 = SUB168(auVar18 * auVar36,0);
      uVar111 = uVar114 + uVar107;
      uVar106 = SUB168(auVar18 * auVar36,8) + (ulong)CARRY8(uVar114,uVar107);
      uVar108 = uVar111 + uVar110;
      uVar110 = (ulong)CARRY8(uVar111,uVar110);
      uVar107 = uVar103 + uVar106;
      uVar114 = uVar107 + uVar110;
      uVar110 = (uVar112 - (uVar104 < uVar112)) +
                (ulong)(CARRY8(uVar103,uVar106) || CARRY8(uVar107,uVar110));
      uVar107 = uVar109 - (uVar112 << 0x20);
      uVar103 = uVar107 + uVar110;
      uVar109 = ((uVar112 - (uVar112 >> 0x20)) - (ulong)(uVar109 < uVar112 << 0x20)) +
                (ulong)CARRY8(uVar107,uVar110);
      uVar110 = uVar108 + uVar115;
      uVar106 = (ulong)CARRY8(uVar108,uVar115);
      uVar111 = uVar114 + uVar113;
      uVar107 = uVar111 + uVar106;
      uVar111 = (ulong)(CARRY8(uVar114,uVar113) || CARRY8(uVar111,uVar106));
      uVar108 = uVar103 + uVar117;
      uVar106 = uVar108 + uVar111;
      uVar108 = (ulong)(CARRY8(uVar103,uVar117) || CARRY8(uVar108,uVar111));
      uVar114 = uVar109 + uVar116;
      uVar111 = uVar114 + uVar108;
      uVar103 = (ulong)(uVar107 < DAT_005f60c8 ||
                       uVar107 - DAT_005f60c8 < (ulong)(uVar110 < DAT_005f60c0));
      uVar104 = (ulong)(uVar106 < DAT_005f60d0 || uVar106 - DAT_005f60d0 < uVar103);
      if ((uVar111 < DAT_005f60d8 || uVar111 - DAT_005f60d8 < uVar104) <=
          (CARRY8(uVar109,uVar116) || CARRY8(uVar114,uVar108))) {
        uVar111 = (uVar111 - DAT_005f60d8) - uVar104;
        uVar107 = (uVar107 - DAT_005f60c8) - (ulong)(uVar110 < DAT_005f60c0);
        uVar106 = (uVar106 - DAT_005f60d0) - uVar103;
        uVar110 = uVar110 - DAT_005f60c0;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    *param_1 = uVar110;
    param_1[1] = uVar107;
    param_1[2] = uVar106;
    param_1[3] = uVar111;
    return uVar107;
  }
  uVar110 = *param_2;
  uVar107 = param_2[1];
  uVar106 = param_2[2];
  uVar111 = param_2[3];
  do {
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar110;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = uVar107;
    uVar104 = SUB168(auVar43 * auVar69,0);
    uVar114 = SUB168(auVar43 * auVar69,8);
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar110;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = uVar106;
    uVar108 = SUB168(auVar44 * auVar70,0);
    uVar112 = SUB168(auVar44 * auVar70,8);
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar110;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = uVar111;
    uVar103 = SUB168(auVar45 * auVar71,0);
    uVar109 = uVar114 + uVar108;
    uVar108 = (ulong)CARRY8(uVar114,uVar108);
    uVar114 = uVar112 + uVar103;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar107;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = uVar106;
    Var37 = (unkuint9)(uVar114 + uVar108) + (unkuint9)SUB168(auVar46 * auVar72,0) + (unkuint9)0;
    uVar113 = (ulong)Var37;
    Var39 = (unkuint9)
            (SUB168(auVar45 * auVar71,8) +
            (ulong)(CARRY8(uVar112,uVar103) || CARRY8(uVar114,uVar108))) +
            (unkuint9)SUB168(auVar46 * auVar72,8) + (unkuint9)0;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar107;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = uVar111;
    Var37 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar47 * auVar73,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    uVar114 = (ulong)Var37;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uVar106;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = uVar111;
    Var38 = (unkuint9)uVar104 + (unkuint9)uVar104 + (unkuint9)0;
    Var39 = (unkuint9)
            (SUB168(auVar47 * auVar73,8) + (ulong)((char)((unkuint9)Var39 >> 0x40) != '\0') +
            (ulong)((char)((unkuint9)Var37 >> 0x40) != '\0')) +
            (unkuint9)SUB168(auVar48 * auVar74,0) + (unkuint9)0;
    uVar103 = (ulong)Var39;
    Var37 = (unkuint9)uVar109 + (unkuint9)uVar109 +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)SUB168(auVar48 * auVar74,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar104 = (ulong)Var40;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uVar110;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = uVar110;
    uVar108 = SUB168(auVar49 * auVar75,0);
    Var39 = (unkuint9)uVar113 + (unkuint9)uVar113 +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    Var41 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar49 * auVar75,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var38 = (unkuint9)uVar114 + (unkuint9)uVar114 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar107;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = uVar107;
    Var40 = (unkuint9)uVar103 + (unkuint9)uVar103 +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var42 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar50 * auVar76,0) +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    Var37 = (unkuint9)uVar104 + (unkuint9)uVar104 +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar51._8_8_ = 0;
    auVar51._0_8_ = uVar106;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = uVar106;
    Var39 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar50 * auVar76,8) +
            (unkuint9)((char)((unkuint9)Var42 >> 0x40) != '\0');
    Var38 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar51 * auVar77,0) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar106 = (ulong)Var38;
    Var38 = (unkuint9)(ulong)Var40 + (unkuint9)SUB168(auVar51 * auVar77,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar104 = (ulong)Var38;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = uVar111;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = uVar111;
    Var38 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar52 * auVar78,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar109 = (ulong)Var38;
    uVar112 = (ulong)((char)((unkuint9)Var37 >> 0x40) != '\0') + SUB168(auVar52 * auVar78,8) +
              (ulong)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar110 = uVar108 * DAT_005f60e0;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = uVar110;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = DAT_005f60c0;
    Var37 = (unkuint9)uVar108 + (unkuint9)SUB168(auVar53 * auVar79,0) + (unkuint9)0;
    Var40 = (unkuint9)(ulong)Var41 + (unkuint9)SUB168(auVar53 * auVar79,8) + (unkuint9)0;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = uVar110;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = DAT_005f60c8;
    Var38 = (unkuint9)(ulong)Var40 + (unkuint9)SUB168(auVar54 * auVar80,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    uVar107 = (ulong)Var38;
    Var40 = (unkuint9)(ulong)Var42 + (unkuint9)SUB168(auVar54 * auVar80,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar55._8_8_ = 0;
    auVar55._0_8_ = uVar110;
    auVar81._8_8_ = 0;
    auVar81._0_8_ = DAT_005f60d0;
    Var38 = (unkuint9)(ulong)Var40 + (unkuint9)SUB168(auVar55 * auVar81,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar55 * auVar81,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar110;
    auVar82._8_8_ = 0;
    auVar82._0_8_ = DAT_005f60d8;
    Var39 = (unkuint9)(ulong)Var40 + (unkuint9)SUB168(auVar56 * auVar82,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar56 * auVar82,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulong)Var40 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar110 = uVar107 * DAT_005f60e0;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = uVar110;
    auVar83._8_8_ = 0;
    auVar83._0_8_ = DAT_005f60c0;
    Var40 = (unkuint9)uVar107 + (unkuint9)SUB168(auVar57 * auVar83,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var38 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar57 * auVar83,8) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    auVar58._8_8_ = 0;
    auVar58._0_8_ = uVar110;
    auVar84._8_8_ = 0;
    auVar84._0_8_ = DAT_005f60c8;
    Var41 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar58 * auVar84,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    uVar107 = (ulong)Var41;
    Var38 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar58 * auVar84,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar59._8_8_ = 0;
    auVar59._0_8_ = uVar110;
    auVar85._8_8_ = 0;
    auVar85._0_8_ = DAT_005f60d0;
    Var39 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar59 * auVar85,0) +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar59 * auVar85,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar60._8_8_ = 0;
    auVar60._0_8_ = uVar110;
    auVar86._8_8_ = 0;
    auVar86._0_8_ = DAT_005f60d8;
    Var41 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar60 * auVar86,0) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulong)Var40 + (unkuint9)SUB168(auVar60 * auVar86,8) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulong)Var37 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    uVar110 = uVar107 * DAT_005f60e0;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = uVar110;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = DAT_005f60c0;
    Var37 = (unkuint9)uVar107 + (unkuint9)SUB168(auVar61 * auVar87,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    Var39 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar61 * auVar87,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar62._8_8_ = 0;
    auVar62._0_8_ = uVar110;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = DAT_005f60c8;
    Var38 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar62 * auVar88,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    uVar107 = (ulong)Var38;
    Var39 = (unkuint9)(ulong)Var41 + (unkuint9)SUB168(auVar62 * auVar88,8) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    auVar63._8_8_ = 0;
    auVar63._0_8_ = uVar110;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = DAT_005f60d0;
    Var38 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar63 * auVar89,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulong)Var40 + (unkuint9)SUB168(auVar63 * auVar89,8) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    auVar64._8_8_ = 0;
    auVar64._0_8_ = uVar110;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = DAT_005f60d8;
    Var39 = (unkuint9)(ulong)Var40 + (unkuint9)SUB168(auVar64 * auVar90,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar64 * auVar90,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulong)Var40 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar110 = uVar107 * DAT_005f60e0;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar110;
    auVar91._8_8_ = 0;
    auVar91._0_8_ = DAT_005f60c0;
    Var40 = (unkuint9)uVar107 + (unkuint9)SUB168(auVar65 * auVar91,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var38 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar65 * auVar91,8) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    auVar66._8_8_ = 0;
    auVar66._0_8_ = uVar110;
    auVar92._8_8_ = 0;
    auVar92._0_8_ = DAT_005f60c8;
    Var41 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar66 * auVar92,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    uVar107 = (ulong)Var41;
    Var38 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar66 * auVar92,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar67._8_8_ = 0;
    auVar67._0_8_ = uVar110;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = DAT_005f60d0;
    Var39 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar67 * auVar93,0) +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    uVar108 = (ulong)Var39;
    Var37 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar67 * auVar93,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uVar110;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = DAT_005f60d8;
    Var38 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar68 * auVar94,0) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar114 = (ulong)Var38;
    uVar103 = (long)Var40 + SUB168(auVar68 * auVar94,8) +
              (ulong)((char)((unkuint9)Var37 >> 0x40) != '\0') +
              (ulong)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar110 = uVar106 + uVar107;
    uVar106 = (ulong)CARRY8(uVar106,uVar107);
    uVar111 = uVar108 + uVar104;
    uVar107 = uVar111 + uVar106;
    uVar111 = (ulong)(CARRY8(uVar108,uVar104) || CARRY8(uVar111,uVar106));
    uVar108 = uVar114 + uVar109;
    uVar106 = uVar108 + uVar111;
    uVar108 = (ulong)(CARRY8(uVar114,uVar109) || CARRY8(uVar108,uVar111));
    uVar114 = uVar103 + uVar112;
    uVar111 = uVar114 + uVar108;
    uVar108 = (ulong)(CARRY8(uVar103,uVar112) || CARRY8(uVar114,uVar108));
    uVar114 = (ulong)(uVar107 < DAT_005f60c8 ||
                     uVar107 - DAT_005f60c8 < (ulong)(uVar110 < DAT_005f60c0));
    uVar103 = (ulong)(uVar106 < DAT_005f60d0 || uVar106 - DAT_005f60d0 < uVar114);
    uVar104 = (ulong)(uVar111 < DAT_005f60d8 || uVar111 - DAT_005f60d8 < uVar103);
    if (uVar104 <= uVar108) {
      uVar111 = (uVar111 - DAT_005f60d8) - uVar103;
      uVar107 = (uVar107 - DAT_005f60c8) - (ulong)(uVar110 < DAT_005f60c0);
      uVar110 = uVar110 - DAT_005f60c0;
      uVar106 = (uVar106 - DAT_005f60d0) - uVar114;
    }
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  *param_1 = uVar110;
  param_1[1] = uVar107;
  param_1[2] = uVar106;
  param_1[3] = uVar111;
  return uVar108 - uVar104;
}

