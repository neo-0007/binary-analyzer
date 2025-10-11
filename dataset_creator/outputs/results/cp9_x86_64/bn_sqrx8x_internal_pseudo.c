
void bn_sqrx8x_internal(undefined8 param_1,undefined8 param_2,ulong *param_3,long param_4,
                       undefined8 param_5,ulong *param_6)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  unkint9 Var4;
  unkint9 Var5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
  unkint9 Var11;
  char cVar12;
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
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined8 uVar125;
  long lVar126;
  ulong *puVar127;
  ulong *puVar128;
  ulong *puVar129;
  ulong *puVar130;
  ulong *puVar131;
  undefined8 *puVar132;
  undefined8 *puVar133;
  ulong uVar134;
  long in_R9;
  long lVar135;
  ulong uVar136;
  ulong uVar137;
  ulong uVar138;
  ulong uVar139;
  ulong uVar140;
  ulong uVar141;
  ulong uVar142;
  ulong uVar143;
  ulong uVar144;
  ulong uVar145;
  ulong uVar146;
  ulong uVar147;
  ulong uVar148;
  ulong uVar149;
  ulong uVar150;
  ulong uVar151;
  bool bVar152;
  bool bVar153;
  undefined8 in_XMM0_Qb;
  long lStack0000000000000018;
  long in_stack_00000028;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  
  puVar132 = &stack0x00000038;
  lVar135 = in_R9;
  while( true ) {
    puVar132[8] = param_1;
    puVar132[9] = in_XMM0_Qb;
    puVar132[10] = param_1;
    puVar132[0xb] = in_XMM0_Qb;
    puVar132[0xc] = param_1;
    puVar132[0xd] = in_XMM0_Qb;
    puVar132[0xe] = param_1;
    puVar132[0xf] = in_XMM0_Qb;
    lVar135 = lVar135 + -0x40;
    if (lVar135 == 0) break;
    puVar132[0x10] = param_1;
    puVar132[0x11] = in_XMM0_Qb;
    puVar132[0x12] = param_1;
    puVar132[0x13] = in_XMM0_Qb;
    puVar132[0x14] = param_1;
    puVar132[0x15] = in_XMM0_Qb;
    puVar132[0x16] = param_1;
    puVar132[0x17] = in_XMM0_Qb;
    puVar132 = puVar132 + 0x10;
  }
  uVar140 = *param_6;
  uVar137 = 0;
  uVar139 = 0;
  uVar141 = 0;
  uVar143 = 0;
  uVar146 = 0;
  uVar149 = 0;
  bVar152 = false;
  bVar153 = false;
  uVar136 = 0;
  puVar129 = param_6;
  puVar131 = &stack0x00000038;
  while( true ) {
    puVar130 = puVar131;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar140;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = puVar129[1];
    Var4 = (unkuint9)SUB168(auVar13 * auVar69,0) + (unkuint9)uVar136 + (unkuint9)bVar152;
    Var6 = (unkuint9)uVar137 + (unkuint9)SUB168(auVar13 * auVar69,8) + (unkuint9)bVar153;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar140;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = puVar129[2];
    Var5 = (unkuint9)SUB168(auVar14 * auVar70,0) + (unkuint9)(ulong)Var6 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var7 = (unkuint9)uVar139 + (unkuint9)SUB168(auVar14 * auVar70,8) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar140;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = puVar129[3];
    Var6 = (unkuint9)SUB168(auVar15 * auVar71,0) + (unkuint9)(ulong)Var7 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var8 = (unkuint9)uVar141 + (unkuint9)SUB168(auVar15 * auVar71,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar140;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = puVar129[4];
    Var7 = (unkuint9)SUB168(auVar16 * auVar72,0) + (unkuint9)(ulong)Var8 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var9 = (unkuint9)uVar143 + (unkuint9)SUB168(auVar16 * auVar72,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar140;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = puVar129[5];
    Var8 = (unkuint9)SUB168(auVar17 * auVar73,0) + (unkuint9)(ulong)Var9 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var10 = (unkuint9)uVar146 + (unkuint9)SUB168(auVar17 * auVar73,8) +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar140;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = puVar129[6];
    Var9 = (unkuint9)SUB168(auVar18 * auVar74,0) + (unkuint9)(ulong)Var10 +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var11 = (unkuint9)SUB168(auVar18 * auVar74,8) + (unkuint9)uVar149 +
            (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar140;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = puVar129[7];
    uVar140 = puVar129[1];
    Var10 = (unkuint9)SUB168(auVar19 * auVar75,0) + (unkuint9)(ulong)Var11 +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar150 = SUB168(auVar19 * auVar75,8) + (ulong)((char)((unkuint9)Var11 >> 0x40) != '\0');
    uVar143 = (ulong)((char)((unkuint9)Var10 >> 0x40) != '\0');
    uVar136 = puVar130[8];
    uVar146 = uVar150 + puVar130[8];
    puVar130[1] = (ulong)Var4;
    puVar130[2] = (ulong)Var5;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar140;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = puVar129[2];
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar140;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = puVar129[3];
    Var4 = (unkuint9)SUB168(auVar20 * auVar76,0) + (unkuint9)(ulong)Var6 + (unkuint9)0;
    Var6 = (unkuint9)SUB168(auVar21 * auVar77,0) + (unkuint9)SUB168(auVar20 * auVar76,8) +
           (unkuint9)0;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar140;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = puVar129[4];
    Var5 = (unkuint9)(ulong)Var6 + (unkuint9)(ulong)Var7 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var7 = (unkuint9)SUB168(auVar22 * auVar78,0) + (unkuint9)SUB168(auVar21 * auVar77,8) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar140;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = puVar129[5];
    Var6 = (unkuint9)(ulong)Var7 + (unkuint9)(ulong)Var8 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var8 = (unkuint9)SUB168(auVar23 * auVar79,0) + (unkuint9)SUB168(auVar22 * auVar78,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar140;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = puVar129[6];
    Var7 = (unkuint9)(ulong)Var8 + (unkuint9)(ulong)Var9 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var9 = (unkuint9)SUB168(auVar24 * auVar80,0) + (unkuint9)(ulong)Var10 +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar140;
    auVar81._8_8_ = 0;
    auVar81._0_8_ = puVar129[7];
    uVar140 = puVar129[2];
    Var8 = (unkuint9)(ulong)Var9 + (unkuint9)SUB168(auVar23 * auVar79,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var10 = (unkuint9)SUB168(auVar25 * auVar81,0) + (unkuint9)SUB168(auVar24 * auVar80,8) +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var9 = (unkuint9)(ulong)Var10 + (unkuint9)(uVar146 + uVar143) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var11 = (unkuint9)SUB168(auVar25 * auVar81,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    Var10 = (unkuint9)(ulong)Var11 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    puVar130[3] = (ulong)Var4;
    puVar130[4] = (ulong)Var5;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar140;
    auVar82._8_8_ = 0;
    auVar82._0_8_ = puVar129[3];
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar140;
    auVar83._8_8_ = 0;
    auVar83._0_8_ = puVar129[4];
    Var4 = (unkuint9)SUB168(auVar26 * auVar82,0) + (unkuint9)(ulong)Var6 +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    Var6 = (unkuint9)SUB168(auVar27 * auVar83,0) + (unkuint9)SUB168(auVar26 * auVar82,8) +
           (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar140;
    auVar84._8_8_ = 0;
    auVar84._0_8_ = puVar129[5];
    Var5 = (unkuint9)(ulong)Var6 + (unkuint9)(ulong)Var7 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var7 = (unkuint9)SUB168(auVar28 * auVar84,0) + (unkuint9)SUB168(auVar27 * auVar83,8) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar140;
    auVar85._8_8_ = 0;
    auVar85._0_8_ = puVar129[6];
    Var6 = (unkuint9)(ulong)Var7 + (unkuint9)(ulong)Var8 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var8 = (unkuint9)SUB168(auVar29 * auVar85,0) + (unkuint9)(ulong)Var9 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar140;
    auVar86._8_8_ = 0;
    auVar86._0_8_ = puVar129[7];
    uVar140 = puVar129[3];
    Var7 = (unkuint9)(ulong)Var8 + (unkuint9)SUB168(auVar28 * auVar84,8) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var9 = (unkuint9)SUB168(auVar30 * auVar86,0) + (unkuint9)SUB168(auVar29 * auVar85,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulong)Var9 + (unkuint9)(ulong)Var10 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    puVar130[5] = (ulong)Var4;
    puVar130[6] = (ulong)Var5;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar140;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = puVar129[4];
    Var9 = (unkuint9)SUB168(auVar30 * auVar86,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulong)Var9 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar140;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = puVar129[5];
    Var5 = (unkuint9)SUB168(auVar31 * auVar87,0) + (unkuint9)(ulong)Var6 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var9 = (unkuint9)SUB168(auVar32 * auVar88,0) + (unkuint9)SUB168(auVar31 * auVar87,8) +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar140;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = puVar129[6];
    Var6 = (unkuint9)(ulong)Var9 + (unkuint9)(ulong)Var7 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var8 = (unkuint9)SUB168(auVar33 * auVar89,0) + (unkuint9)(ulong)Var8 +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar140;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = puVar129[7];
    uVar140 = puVar129[4];
    uVar137 = puVar129[5];
    Var7 = (unkuint9)(ulong)Var8 + (unkuint9)SUB168(auVar32 * auVar88,8) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var8 = (unkuint9)SUB168(auVar34 * auVar90,0) + (unkuint9)SUB168(auVar33 * auVar89,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar139 = puVar129[6];
    Var4 = (unkuint9)(ulong)Var8 + (unkuint9)(ulong)Var4 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var9 = (unkuint9)SUB168(auVar34 * auVar90,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulong)Var9 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    puVar130[7] = (ulong)Var5;
    puVar130[8] = (ulong)Var6;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar140;
    auVar91._8_8_ = 0;
    auVar91._0_8_ = uVar137;
    uVar141 = puVar129[7];
    Var5 = (unkuint9)SUB168(auVar35 * auVar91,0) + (unkuint9)(ulong)Var7 +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar149 = (ulong)Var5;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar140;
    auVar92._8_8_ = 0;
    auVar92._0_8_ = uVar139;
    Var6 = (unkuint9)SUB168(auVar36 * auVar92,0) + (unkuint9)SUB168(auVar35 * auVar91,8) +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulong)Var6 + (unkuint9)(ulong)Var4 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar138 = (ulong)Var4;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar140;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = uVar141;
    Var6 = (unkuint9)SUB168(auVar37 * auVar93,0) + (unkuint9)SUB168(auVar36 * auVar92,8) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulong)Var6 + (unkuint9)(ulong)Var8 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var5 = (unkuint9)SUB168(auVar37 * auVar93,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar137;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = uVar139;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar137;
    auVar95._8_8_ = 0;
    auVar95._0_8_ = uVar141;
    puVar128 = puVar129 + 8;
    Var4 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar38 * auVar94,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar140 = (ulong)Var4;
    Var6 = (unkuint9)SUB168(auVar39 * auVar95,0) + (unkuint9)SUB168(auVar38 * auVar94,8) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulong)Var6 + (unkuint9)(ulong)Var5 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar137 = (ulong)Var4;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar139;
    auVar96._8_8_ = 0;
    auVar96._0_8_ = uVar141;
    Var4 = (unkuint9)
           (ulong)((unkuint9)SUB168(auVar39 * auVar95,8) + (unkuint9)0 +
                  (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0')) +
           (unkuint9)SUB168(auVar40 * auVar96,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar139 = (ulong)Var4;
    uVar141 = SUB168(auVar40 * auVar96,8) + (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
    if (puVar128 == (ulong *)((long)param_6 + in_R9)) break;
    lVar135 = -8;
    uVar134 = puVar130[8];
    Var4 = (unkuint9)uVar149 + (unkuint9)puVar130[9] +
           (unkuint9)(CARRY8(uVar150,uVar136) || CARRY8(uVar146,uVar143));
    uVar143 = (ulong)Var4;
    Var4 = (unkuint9)uVar138 + (unkuint9)puVar130[10] +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar146 = (ulong)Var4;
    Var4 = (unkuint9)uVar140 + (unkuint9)puVar130[0xb] +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar138 = (ulong)Var4;
    uVar140 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar136 = uVar137 + puVar130[0xc];
    uVar150 = uVar136 + uVar140;
    uVar140 = (ulong)(CARRY8(uVar137,puVar130[0xc]) || CARRY8(uVar136,uVar140));
    uVar136 = uVar139 + puVar130[0xd];
    uVar144 = uVar136 + uVar140;
    uVar140 = (ulong)(CARRY8(uVar139,puVar130[0xd]) || CARRY8(uVar136,uVar140));
    uVar136 = uVar141 + puVar130[0xe];
    uVar147 = uVar136 + uVar140;
    uVar140 = (ulong)(CARRY8(uVar141,puVar130[0xe]) || CARRY8(uVar136,uVar140));
    uVar149 = puVar130[0xf] + uVar140;
    puVar1 = puVar130 + 0x10;
    lStack0000000000000018 = -(ulong)CARRY8(puVar130[0xf],uVar140);
    uVar140 = *puVar129;
    bVar152 = false;
    bVar153 = false;
    puVar127 = puVar128;
    puVar131 = puVar1;
    while( true ) {
      do {
        auVar41._8_8_ = 0;
        auVar41._0_8_ = uVar140;
        auVar97._8_8_ = 0;
        auVar97._0_8_ = *puVar127;
        Var4 = (unkuint9)uVar134 + (unkuint9)SUB168(auVar41 * auVar97,0) + (unkuint9)bVar152;
        Var6 = (unkuint9)SUB168(auVar41 * auVar97,8) + (unkuint9)uVar143 + (unkuint9)bVar153;
        auVar42._8_8_ = 0;
        auVar42._0_8_ = uVar140;
        auVar98._8_8_ = 0;
        auVar98._0_8_ = puVar127[1];
        Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar42 * auVar98,0) +
               (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
        uVar134 = (ulong)Var5;
        Var6 = (unkuint9)SUB168(auVar42 * auVar98,8) + (unkuint9)uVar146 +
               (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
        auVar43._8_8_ = 0;
        auVar43._0_8_ = uVar140;
        auVar99._8_8_ = 0;
        auVar99._0_8_ = puVar127[2];
        Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar43 * auVar99,0) +
               (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
        uVar143 = (ulong)Var5;
        Var6 = (unkuint9)SUB168(auVar43 * auVar99,8) + (unkuint9)uVar138 +
               (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
        auVar44._8_8_ = 0;
        auVar44._0_8_ = uVar140;
        auVar100._8_8_ = 0;
        auVar100._0_8_ = puVar127[3];
        Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar44 * auVar100,0) +
               (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
        uVar146 = (ulong)Var5;
        Var6 = (unkuint9)SUB168(auVar44 * auVar100,8) + (unkuint9)uVar150 +
               (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
        auVar45._8_8_ = 0;
        auVar45._0_8_ = uVar140;
        auVar101._8_8_ = 0;
        auVar101._0_8_ = puVar127[4];
        Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar45 * auVar101,0) +
               (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
        uVar138 = (ulong)Var5;
        Var6 = (unkuint9)SUB168(auVar45 * auVar101,8) + (unkuint9)uVar144 +
               (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
        auVar46._8_8_ = 0;
        auVar46._0_8_ = uVar140;
        auVar102._8_8_ = 0;
        auVar102._0_8_ = puVar127[5];
        Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar46 * auVar102,0) +
               (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
        uVar150 = (ulong)Var5;
        Var6 = (unkuint9)SUB168(auVar46 * auVar102,8) + (unkuint9)uVar147 +
               (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
        auVar47._8_8_ = 0;
        auVar47._0_8_ = uVar140;
        auVar103._8_8_ = 0;
        auVar103._0_8_ = puVar127[6];
        puVar131[lVar135] = (ulong)Var4;
        Var4 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar47 * auVar103,0) +
               (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
        uVar144 = (ulong)Var4;
        Var5 = (unkuint9)SUB168(auVar47 * auVar103,8) + (unkuint9)uVar149 +
               (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
        auVar48._8_8_ = 0;
        auVar48._0_8_ = uVar140;
        auVar104._8_8_ = 0;
        auVar104._0_8_ = puVar127[7];
        uVar140 = puVar129[lVar135 + 9];
        Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar48 * auVar104,0) +
               (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
        uVar147 = (ulong)Var4;
        Var4 = (unkuint9)
               (ulong)((unkuint9)SUB168(auVar48 * auVar104,8) + (unkuint9)0 +
                      (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0')) + (unkuint9)0 +
               (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
        bVar152 = (char)((unkuint9)Var4 >> 0x40) != '\0';
        uVar149 = (ulong)Var4;
        bVar153 = SCARRY8(lVar135,1);
        lVar135 = lVar135 + 1;
      } while (lVar135 != 0);
      puVar127 = puVar127 + 8;
      lVar135 = -8;
      if (puVar127 == (ulong *)((long)param_6 + in_R9)) break;
      uVar140 = *puVar129;
      Var4 = (unkuint9)uVar134 + (unkuint9)*puVar131 + (unkuint9)(lStack0000000000000018 != 0);
      uVar134 = (ulong)Var4;
      Var4 = (unkuint9)uVar143 + (unkuint9)puVar131[1] +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar143 = (ulong)Var4;
      uVar136 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
      bVar152 = CARRY8(uVar146,puVar131[2]);
      uVar137 = uVar146 + puVar131[2];
      uVar146 = uVar137 + uVar136;
      uVar136 = (ulong)(bVar152 || CARRY8(uVar137,uVar136));
      bVar152 = CARRY8(uVar138,puVar131[3]);
      uVar137 = uVar138 + puVar131[3];
      uVar138 = uVar137 + uVar136;
      uVar136 = (ulong)(bVar152 || CARRY8(uVar137,uVar136));
      bVar152 = CARRY8(uVar150,puVar131[4]);
      uVar137 = uVar150 + puVar131[4];
      uVar150 = uVar137 + uVar136;
      uVar136 = (ulong)(bVar152 || CARRY8(uVar137,uVar136));
      bVar152 = CARRY8(uVar144,puVar131[5]);
      uVar137 = uVar144 + puVar131[5];
      uVar144 = uVar137 + uVar136;
      uVar136 = (ulong)(bVar152 || CARRY8(uVar137,uVar136));
      bVar152 = CARRY8(uVar147,puVar131[6]);
      uVar137 = uVar147 + puVar131[6];
      uVar147 = uVar137 + uVar136;
      uVar136 = (ulong)(bVar152 || CARRY8(uVar137,uVar136));
      bVar152 = CARRY8(uVar149,puVar131[7]);
      uVar137 = uVar149 + puVar131[7];
      uVar149 = uVar137 + uVar136;
      puVar131 = puVar131 + 8;
      lStack0000000000000018 = -(ulong)(bVar152 || CARRY8(uVar137,uVar136));
      bVar152 = false;
      bVar153 = false;
    }
    Var4 = (unkuint9)uVar134 + (unkuint9)0 + (unkuint9)(lStack0000000000000018 != 0);
    Var5 = (unkuint9)uVar143 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar136 = (ulong)Var5;
    uVar140 = *puVar128;
    uVar139 = (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar137 = uVar146 + uVar139;
    *puVar131 = (ulong)Var4;
    uVar141 = (ulong)CARRY8(uVar146,uVar139);
    uVar139 = uVar138 + uVar141;
    uVar143 = (ulong)CARRY8(uVar138,uVar141);
    uVar141 = uVar150 + uVar143;
    uVar146 = (ulong)CARRY8(uVar150,uVar143);
    uVar143 = uVar144 + uVar146;
    uVar138 = (ulong)CARRY8(uVar144,uVar146);
    uVar146 = uVar147 + uVar138;
    uVar149 = uVar149 + CARRY8(uVar147,uVar138);
    bVar152 = puVar131 < puVar1;
    bVar153 = SBORROW8((long)puVar131,(long)puVar1);
    puVar129 = puVar128;
    if (puVar131 != puVar1) {
      puVar131[1] = uVar136;
      uVar136 = puVar130[0x11];
      puVar131[2] = uVar137;
      uVar137 = puVar130[0x12];
      puVar131[3] = uVar139;
      uVar139 = puVar130[0x13];
      puVar131[4] = uVar141;
      uVar141 = puVar130[0x14];
      puVar131[5] = uVar143;
      uVar143 = puVar130[0x15];
      puVar131[6] = uVar146;
      uVar146 = puVar130[0x16];
      puVar131[7] = uVar149;
      uVar149 = puVar130[0x17];
      puVar131 = puVar1;
    }
  }
  puVar130[9] = uVar149;
  puVar130[10] = uVar138;
  puVar130[0xb] = uVar140;
  puVar130[0xc] = uVar137;
  puVar130[0xd] = uVar139;
  puVar130[0xe] = uVar141;
  puVar132 = &stack0x00000038;
  uVar140 = *(ulong *)((long)puVar128 + param_4);
  bVar152 = false;
  uVar136 = 0;
  Var4 = (unkuint9)in_stack_00000040 + (unkuint9)in_stack_00000040 + (unkuint9)0;
  cVar12 = (char)((unkuint9)Var4 >> 0x40);
  uVar137 = (ulong)Var4;
  lVar135 = param_4;
  while( true ) {
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uVar140;
    auVar105._8_8_ = 0;
    auVar105._0_8_ = uVar140;
    Var6 = (unkuint9)in_stack_00000048 + (unkuint9)in_stack_00000048 + (unkuint9)(cVar12 != '\0');
    Var4 = (unkuint9)SUB168(auVar49 * auVar105,0) + (unkuint9)uVar136 + (unkuint9)bVar152;
    uVar140 = *(ulong *)((long)puVar129 + lVar135 + 0x48);
    Var7 = (unkuint9)in_stack_00000050 + (unkuint9)in_stack_00000050 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var5 = (unkuint9)SUB168(auVar49 * auVar105,8) + (unkuint9)uVar137 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    *puVar132 = (long)Var4;
    puVar132[1] = (long)Var5;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar140;
    auVar106._8_8_ = 0;
    auVar106._0_8_ = uVar140;
    Var8 = (unkuint9)(ulong)puVar132[4] + (unkuint9)(ulong)puVar132[4] +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var4 = (unkuint9)SUB168(auVar50 * auVar106,0) + (unkuint9)(ulong)Var6 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar140 = *(ulong *)((long)puVar129 + lVar135 + 0x50);
    Var6 = (unkuint9)(ulong)puVar132[5] + (unkuint9)(ulong)puVar132[5] +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var5 = (unkuint9)SUB168(auVar50 * auVar106,8) + (unkuint9)(ulong)Var7 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    puVar132[2] = (long)Var4;
    puVar132[3] = (long)Var5;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = uVar140;
    auVar107._8_8_ = 0;
    auVar107._0_8_ = uVar140;
    Var7 = (unkuint9)(ulong)puVar132[6] + (unkuint9)(ulong)puVar132[6] +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var4 = (unkuint9)SUB168(auVar51 * auVar107,0) + (unkuint9)(ulong)Var8 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar140 = *(ulong *)((long)puVar129 + lVar135 + 0x58);
    lVar135 = lVar135 + 0x20;
    Var8 = (unkuint9)(ulong)puVar132[7] + (unkuint9)(ulong)puVar132[7] +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar141 = (ulong)Var8;
    Var5 = (unkuint9)SUB168(auVar51 * auVar107,8) + (unkuint9)(ulong)Var6 +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    puVar132[4] = (long)Var4;
    puVar132[5] = (long)Var5;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = uVar140;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = uVar140;
    uVar139 = SUB168(auVar52 * auVar108,8);
    Var6 = (unkuint9)(ulong)puVar132[8] + (unkuint9)(ulong)puVar132[8] +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar136 = (ulong)Var6;
    Var4 = (unkuint9)SUB168(auVar52 * auVar108,0) + (unkuint9)(ulong)Var7 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    bVar152 = (char)((unkuint9)Var4 >> 0x40) != '\0';
    uVar125 = (undefined8)Var4;
    if (lVar135 == 0) break;
    uVar140 = *(ulong *)((long)puVar128 + lVar135);
    Var4 = (unkuint9)(ulong)puVar132[9] + (unkuint9)(ulong)puVar132[9] +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    cVar12 = (char)((unkuint9)Var4 >> 0x40);
    uVar137 = (ulong)Var4;
    Var4 = (unkuint9)uVar139 + (unkuint9)uVar141 + (unkuint9)bVar152;
    bVar152 = (char)((unkuint9)Var4 >> 0x40) != '\0';
    in_stack_00000048 = puVar132[10];
    in_stack_00000050 = puVar132[0xb];
    puVar132[6] = uVar125;
    puVar132[7] = (long)Var4;
    puVar132 = puVar132 + 8;
  }
  puVar132[6] = uVar125;
  puVar132[7] = uVar139 + uVar141 + (ulong)bVar152;
  uVar136 = 0;
  puVar131 = (ulong *)((long)param_3 + in_R9 + -0x40);
  puVar133 = &stack0x00000038;
  uVar140 = in_stack_00000038;
  do {
    uVar137 = puVar133[1];
    uVar139 = puVar133[2];
    uVar141 = puVar133[3];
    uVar143 = puVar133[4];
    uVar146 = puVar133[5];
    uVar149 = puVar133[6];
    uVar138 = puVar133[7];
    puVar129 = puVar133 + 8;
    bVar152 = false;
    bVar153 = false;
    lVar135 = -8;
    do {
      uVar150 = uVar140 * in_stack_00000028;
      auVar53._8_8_ = 0;
      auVar53._0_8_ = uVar150;
      auVar109._8_8_ = 0;
      auVar109._0_8_ = *param_3;
      Var5 = (unkuint9)SUB168(auVar53 * auVar109,8) + (unkuint9)uVar137 + (unkuint9)bVar153;
      auVar54._8_8_ = 0;
      auVar54._0_8_ = uVar150;
      auVar110._8_8_ = 0;
      auVar110._0_8_ = param_3[1];
      Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar54 * auVar110,0) +
             (unkuint9)
             ((char)((unkuint9)SUB168(auVar53 * auVar109,0) + (unkuint9)uVar140 + (unkuint9)bVar152
                    >> 0x40) != '\0');
      uVar140 = (ulong)Var4;
      Var5 = (unkuint9)SUB168(auVar54 * auVar110,8) + (unkuint9)uVar139 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      auVar55._8_8_ = 0;
      auVar55._0_8_ = uVar150;
      auVar111._8_8_ = 0;
      auVar111._0_8_ = param_3[2];
      Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar55 * auVar111,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar137 = (ulong)Var4;
      Var5 = (unkuint9)SUB168(auVar55 * auVar111,8) + (unkuint9)uVar141 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar150;
      auVar112._8_8_ = 0;
      auVar112._0_8_ = param_3[3];
      Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar56 * auVar112,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar139 = (ulong)Var4;
      Var5 = (unkuint9)SUB168(auVar56 * auVar112,8) + (unkuint9)uVar143 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar150;
      auVar113._8_8_ = 0;
      auVar113._0_8_ = param_3[4];
      Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar57 * auVar113,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar141 = (ulong)Var4;
      Var5 = (unkuint9)SUB168(auVar57 * auVar113,8) + (unkuint9)uVar146 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      *(ulong *)(&stack0x00000078 + lVar135 * 8) = uVar150;
      auVar58._8_8_ = 0;
      auVar58._0_8_ = uVar150;
      auVar114._8_8_ = 0;
      auVar114._0_8_ = param_3[5];
      Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar58 * auVar114,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar143 = (ulong)Var4;
      Var5 = (unkuint9)SUB168(auVar58 * auVar114,8) + (unkuint9)uVar149 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      auVar59._8_8_ = 0;
      auVar59._0_8_ = uVar150;
      auVar115._8_8_ = 0;
      auVar115._0_8_ = param_3[6];
      Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar59 * auVar115,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar146 = (ulong)Var4;
      Var5 = (unkuint9)SUB168(auVar59 * auVar115,8) + (unkuint9)uVar138 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      auVar60._8_8_ = 0;
      auVar60._0_8_ = uVar150;
      auVar116._8_8_ = 0;
      auVar116._0_8_ = param_3[7];
      Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar60 * auVar116,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar149 = (ulong)Var4;
      Var4 = (unkuint9)
             (ulong)((unkuint9)SUB168(auVar60 * auVar116,8) + (unkuint9)0 +
                    (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0')) + (unkuint9)0 +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      bVar152 = (char)((unkuint9)Var4 >> 0x40) != '\0';
      uVar138 = (ulong)Var4;
      bVar153 = SCARRY8(lVar135,1);
      lVar135 = lVar135 + 1;
    } while (lVar135 != 0);
    uVar150 = 0;
    bVar152 = param_3 < puVar131;
    if (bVar152) {
      uVar150 = uVar140 + *puVar129;
      puVar128 = param_3 + 8;
      Var4 = (unkuint9)uVar137 + (unkuint9)(ulong)puVar133[9] + (unkuint9)CARRY8(uVar140,*puVar129);
      uVar134 = (ulong)Var4;
      Var4 = (unkuint9)uVar139 + (unkuint9)(ulong)puVar133[10] +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar144 = (ulong)Var4;
      uVar140 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar137 = uVar141 + puVar133[0xb];
      uVar147 = uVar137 + uVar140;
      uVar140 = (ulong)(CARRY8(uVar141,puVar133[0xb]) || CARRY8(uVar137,uVar140));
      uVar137 = uVar143 + puVar133[0xc];
      uVar142 = uVar137 + uVar140;
      uVar140 = (ulong)(CARRY8(uVar143,puVar133[0xc]) || CARRY8(uVar137,uVar140));
      uVar137 = uVar146 + puVar133[0xd];
      uVar145 = uVar137 + uVar140;
      uVar140 = (ulong)(CARRY8(uVar146,puVar133[0xd]) || CARRY8(uVar137,uVar140));
      uVar137 = uVar149 + puVar133[0xe];
      uVar148 = uVar137 + uVar140;
      uVar140 = (ulong)(CARRY8(uVar149,puVar133[0xe]) || CARRY8(uVar137,uVar140));
      uVar137 = uVar138 + puVar133[0xf];
      uVar151 = uVar137 + uVar140;
      puVar129 = puVar133 + 0x10;
      lStack0000000000000018 = -(ulong)(CARRY8(uVar138,puVar133[0xf]) || CARRY8(uVar137,uVar140));
      bVar152 = false;
      bVar153 = false;
      lVar135 = -8;
      uVar140 = in_stack_00000038;
      while( true ) {
        do {
          lVar126 = lVar135;
          auVar61._8_8_ = 0;
          auVar61._0_8_ = uVar140;
          auVar117._8_8_ = 0;
          auVar117._0_8_ = *puVar128;
          Var4 = (unkuint9)uVar150 + (unkuint9)SUB168(auVar61 * auVar117,0) + (unkuint9)bVar152;
          Var6 = (unkuint9)SUB168(auVar61 * auVar117,8) + (unkuint9)uVar134 + (unkuint9)bVar153;
          auVar62._8_8_ = 0;
          auVar62._0_8_ = uVar140;
          auVar118._8_8_ = 0;
          auVar118._0_8_ = puVar128[1];
          Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar62 * auVar118,0) +
                 (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
          uVar150 = (ulong)Var5;
          Var6 = (unkuint9)SUB168(auVar62 * auVar118,8) + (unkuint9)uVar144 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar63._8_8_ = 0;
          auVar63._0_8_ = uVar140;
          auVar119._8_8_ = 0;
          auVar119._0_8_ = puVar128[2];
          Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar63 * auVar119,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar134 = (ulong)Var5;
          Var6 = (unkuint9)SUB168(auVar63 * auVar119,8) + (unkuint9)uVar147 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar64._8_8_ = 0;
          auVar64._0_8_ = uVar140;
          auVar120._8_8_ = 0;
          auVar120._0_8_ = puVar128[3];
          Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar64 * auVar120,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar144 = (ulong)Var5;
          Var6 = (unkuint9)SUB168(auVar64 * auVar120,8) + (unkuint9)uVar142 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar65._8_8_ = 0;
          auVar65._0_8_ = uVar140;
          auVar121._8_8_ = 0;
          auVar121._0_8_ = puVar128[4];
          Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar65 * auVar121,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar147 = (ulong)Var5;
          Var6 = (unkuint9)SUB168(auVar65 * auVar121,8) + (unkuint9)uVar145 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar66._8_8_ = 0;
          auVar66._0_8_ = uVar140;
          auVar122._8_8_ = 0;
          auVar122._0_8_ = puVar128[5];
          Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar66 * auVar122,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar142 = (ulong)Var5;
          Var6 = (unkuint9)SUB168(auVar66 * auVar122,8) + (unkuint9)uVar148 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar67._8_8_ = 0;
          auVar67._0_8_ = uVar140;
          auVar123._8_8_ = 0;
          auVar123._0_8_ = puVar128[6];
          Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar67 * auVar123,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar145 = (ulong)Var5;
          Var6 = (unkuint9)SUB168(auVar67 * auVar123,8) + (unkuint9)uVar151 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar68._8_8_ = 0;
          auVar68._0_8_ = uVar140;
          auVar124._8_8_ = 0;
          auVar124._0_8_ = puVar128[7];
          uVar140 = *(ulong *)(&stack0x00000080 + lVar126 * 8);
          Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar68 * auVar124,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar148 = (ulong)Var5;
          puVar129[lVar126] = (ulong)Var4;
          Var4 = (unkuint9)
                 (ulong)((unkuint9)SUB168(auVar68 * auVar124,8) + (unkuint9)0 +
                        (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0')) + (unkuint9)0 +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          bVar152 = (char)((unkuint9)Var4 >> 0x40) != '\0';
          uVar151 = (ulong)Var4;
          bVar153 = SCARRY8(lVar126,1);
          lVar135 = lVar126 + 1;
        } while (lVar126 + 1 != 0);
        if (puVar131 <= puVar128) break;
        puVar128 = puVar128 + 8;
        bVar152 = CARRY8(uVar150,*puVar129);
        uVar140 = uVar150 + *puVar129;
        uVar150 = uVar140 + (lStack0000000000000018 != 0);
        uVar140 = (ulong)(bVar152 || CARRY8(uVar140,(ulong)(lStack0000000000000018 != 0)));
        bVar152 = CARRY8(uVar134,puVar129[1]);
        uVar137 = uVar134 + puVar129[1];
        uVar134 = uVar137 + uVar140;
        uVar140 = (ulong)(bVar152 || CARRY8(uVar137,uVar140));
        bVar152 = CARRY8(uVar144,puVar129[2]);
        uVar137 = uVar144 + puVar129[2];
        uVar144 = uVar137 + uVar140;
        uVar140 = (ulong)(bVar152 || CARRY8(uVar137,uVar140));
        bVar152 = CARRY8(uVar147,puVar129[3]);
        uVar137 = uVar147 + puVar129[3];
        uVar147 = uVar137 + uVar140;
        uVar140 = (ulong)(bVar152 || CARRY8(uVar137,uVar140));
        bVar152 = CARRY8(uVar142,puVar129[4]);
        uVar137 = uVar142 + puVar129[4];
        uVar142 = uVar137 + uVar140;
        uVar140 = (ulong)(bVar152 || CARRY8(uVar137,uVar140));
        bVar152 = CARRY8(uVar145,puVar129[5]);
        uVar137 = uVar145 + puVar129[5];
        uVar145 = uVar137 + uVar140;
        uVar140 = (ulong)(bVar152 || CARRY8(uVar137,uVar140));
        bVar152 = CARRY8(uVar148,puVar129[6]);
        uVar137 = uVar148 + puVar129[6];
        uVar148 = uVar137 + uVar140;
        uVar140 = (ulong)(bVar152 || CARRY8(uVar137,uVar140));
        bVar152 = CARRY8(uVar151,puVar129[7]);
        uVar137 = uVar151 + puVar129[7];
        uVar151 = uVar137 + uVar140;
        puVar129 = puVar129 + 8;
        lStack0000000000000018 = -(ulong)(bVar152 || CARRY8(uVar137,uVar140));
        bVar152 = false;
        bVar153 = false;
        lVar135 = lVar126 + -7;
        uVar140 = in_stack_00000038;
      }
      uVar140 = uVar150 + uVar136;
      uVar137 = uVar134 + CARRY8(uVar150,uVar136);
      uVar136 = (ulong)CARRY8(uVar134,(ulong)CARRY8(uVar150,uVar136));
      uVar139 = uVar144 + uVar136;
      uVar136 = (ulong)CARRY8(uVar144,uVar136);
      uVar141 = uVar147 + uVar136;
      uVar136 = (ulong)CARRY8(uVar147,uVar136);
      uVar143 = uVar142 + uVar136;
      uVar136 = (ulong)CARRY8(uVar142,uVar136);
      uVar146 = uVar145 + uVar136;
      uVar136 = (ulong)CARRY8(uVar145,uVar136);
      uVar149 = uVar148 + uVar136;
      uVar136 = (ulong)CARRY8(uVar148,uVar136);
      uVar138 = uVar151 + uVar136;
      uVar150 = (ulong)CARRY8(uVar151,uVar136);
      bVar152 = lStack0000000000000018 != 0;
    }
    uVar144 = uVar140 + *puVar129;
    uVar134 = (ulong)(CARRY8(uVar140,*puVar129) || CARRY8(uVar144,(ulong)bVar152));
    uVar147 = uVar137 + puVar129[1];
    uVar137 = (ulong)(CARRY8(uVar137,puVar129[1]) || CARRY8(uVar147,uVar134));
    uVar142 = uVar139 + puVar129[2];
    uVar139 = (ulong)(CARRY8(uVar139,puVar129[2]) || CARRY8(uVar142,uVar137));
    uVar145 = uVar141 + puVar129[3];
    uVar141 = (ulong)(CARRY8(uVar141,puVar129[3]) || CARRY8(uVar145,uVar139));
    uVar148 = uVar143 + puVar129[4];
    uVar143 = (ulong)(CARRY8(uVar143,puVar129[4]) || CARRY8(uVar148,uVar141));
    uVar151 = uVar146 + puVar129[5];
    uVar146 = (ulong)(CARRY8(uVar146,puVar129[5]) || CARRY8(uVar151,uVar143));
    uVar2 = uVar149 + puVar129[6];
    uVar149 = (ulong)(CARRY8(uVar149,puVar129[6]) || CARRY8(uVar2,uVar146));
    uVar3 = uVar138 + puVar129[7];
    uVar136 = uVar150 + (CARRY8(uVar138,puVar129[7]) || CARRY8(uVar3,uVar149));
    uVar140 = *(ulong *)((long)puVar129 + param_4 + 0x40);
    *puVar129 = uVar144 + bVar152;
    puVar129[1] = uVar147 + uVar134;
    puVar129[2] = uVar142 + uVar137;
    puVar129[3] = uVar145 + uVar139;
    puVar129[4] = uVar148 + uVar141;
    puVar129[5] = uVar151 + uVar143;
    puVar129[6] = uVar2 + uVar146;
    puVar129[7] = uVar3 + uVar149;
    puVar133 = (undefined8 *)((long)puVar129 + param_4 + 0x40);
  } while (puVar129 + 8 < puVar132 + 8);
  return;
}

