
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3840(long *param_1,ulong *param_2,undefined1 (*param_3) [16],ulong *param_4,
                 undefined8 param_5,long param_6)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
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
  long in_RAX;
  ulong uVar74;
  ulong uVar75;
  ulong *puVar76;
  ulong uVar77;
  ulong *puVar78;
  ulong *puVar79;
  ulong uVar80;
  ulong uVar81;
  ulong uVar82;
  long lVar83;
  long lVar84;
  ulong uVar85;
  ulong uVar86;
  ulong uVar87;
  bool bVar88;
  bool bVar89;
  int iVar90;
  int iVar93;
  int iVar94;
  int iVar95;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar96 [16];
  int iVar97;
  int iVar99;
  int iVar100;
  int iVar101;
  undefined1 auVar98 [16];
  int iVar102;
  int iVar103;
  int iVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  undefined1 auVar104 [16];
  long lStack0000000000000008;
  undefined1 (*pauStack0000000000000010) [16];
  undefined1 (*pauStack0000000000000018) [16];
  long lStack0000000000000020;
  long in_stack_00000028;
  long *plStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  lVar84 = -param_6;
  iVar4 = *(int *)(in_RAX + 8);
  lVar83 = ((ulong)(param_6 * -0x20) >> 10) - 1;
  pauStack0000000000000018 = param_3 + param_6 * -2 + 8;
  lStack0000000000000020 = lVar83;
  plStack0000000000000040 = param_1;
  iVar97 = _DAT_004c4e90 + _DAT_004c4e90 + _DAT_004c4e80;
  iVar99 = _UNK_004c4e94 + _UNK_004c4e94 + _UNK_004c4e84;
  iVar100 = _UNK_004c4e98 + _UNK_004c4e98 + _UNK_004c4e88;
  iVar101 = _UNK_004c4e9c + _UNK_004c4e9c + _UNK_004c4e8c;
  *(uint *)((long)&stack0x00000058 + lVar84) = -(uint)(_DAT_004c4e80 == iVar4);
  *(uint *)((undefined1 *)((long)register0x00000020 + 0x5c) + lVar84) =
       -(uint)(_UNK_004c4e84 == iVar4);
  *(uint *)(&stack0x00000060 + lVar84) = -(uint)(_UNK_004c4e88 == iVar4);
  *(uint *)(&stack0x00000064 + lVar84) = -(uint)(_UNK_004c4e8c == iVar4);
  iVar102 = _DAT_004c4e90 + iVar97;
  iVar105 = _UNK_004c4e94 + iVar99;
  iVar107 = _UNK_004c4e98 + iVar100;
  iVar109 = _UNK_004c4e9c + iVar101;
  *(uint *)(&stack0x00000068 + lVar84) = -(uint)(_DAT_004c4e90 + _DAT_004c4e80 == iVar4);
  *(uint *)(&stack0x0000006c + lVar84) = -(uint)(_UNK_004c4e94 + _UNK_004c4e84 == iVar4);
  *(uint *)(&stack0x00000070 + lVar84) = -(uint)(_UNK_004c4e98 + _UNK_004c4e88 == iVar4);
  *(uint *)(&stack0x00000074 + lVar84) = -(uint)(_UNK_004c4e9c + _UNK_004c4e8c == iVar4);
  iVar90 = _DAT_004c4e90 + iVar102;
  iVar93 = _UNK_004c4e94 + iVar105;
  iVar94 = _UNK_004c4e98 + iVar107;
  iVar95 = _UNK_004c4e9c + iVar109;
  *(uint *)(&stack0x00000078 + lVar84) = -(uint)(iVar97 == iVar4);
  *(uint *)(&stack0x0000007c + lVar84) = -(uint)(iVar99 == iVar4);
  *(uint *)(&stack0x00000080 + lVar84) = -(uint)(iVar100 == iVar4);
  *(uint *)(&stack0x00000084 + lVar84) = -(uint)(iVar101 == iVar4);
  iVar97 = _DAT_004c4e90 + iVar90;
  iVar99 = _UNK_004c4e94 + iVar93;
  iVar100 = _UNK_004c4e98 + iVar94;
  iVar101 = _UNK_004c4e9c + iVar95;
  *(uint *)(&stack0x00000088 + lVar84) = -(uint)(iVar102 == iVar4);
  *(uint *)(&stack0x0000008c + lVar84) = -(uint)(iVar105 == iVar4);
  *(uint *)(&stack0x00000090 + lVar84) = -(uint)(iVar107 == iVar4);
  *(uint *)(&stack0x00000094 + lVar84) = -(uint)(iVar109 == iVar4);
  iVar102 = _DAT_004c4e90 + iVar97;
  iVar105 = _UNK_004c4e94 + iVar99;
  iVar107 = _UNK_004c4e98 + iVar100;
  iVar109 = _UNK_004c4e9c + iVar101;
  *(uint *)(&stack0x00000098 + lVar84) = -(uint)(iVar90 == iVar4);
  *(uint *)(&stack0x0000009c + lVar84) = -(uint)(iVar93 == iVar4);
  *(uint *)(&stack0x000000a0 + lVar84) = -(uint)(iVar94 == iVar4);
  *(uint *)(&stack0x000000a4 + lVar84) = -(uint)(iVar95 == iVar4);
  iVar103 = _DAT_004c4e90 + iVar102;
  iVar106 = _UNK_004c4e94 + iVar105;
  iVar108 = _UNK_004c4e98 + iVar107;
  iVar110 = _UNK_004c4e9c + iVar109;
  *(uint *)(&stack0x000000a8 + lVar84) = -(uint)(iVar97 == iVar4);
  *(uint *)(&stack0x000000ac + lVar84) = -(uint)(iVar99 == iVar4);
  *(uint *)(&stack0x000000b0 + lVar84) = -(uint)(iVar100 == iVar4);
  *(uint *)(&stack0x000000b4 + lVar84) = -(uint)(iVar101 == iVar4);
  iVar90 = _DAT_004c4e90 + iVar103;
  iVar93 = _UNK_004c4e94 + iVar106;
  iVar94 = _UNK_004c4e98 + iVar108;
  iVar95 = _UNK_004c4e9c + iVar110;
  *(uint *)(&stack0x000000b8 + lVar84) = -(uint)(iVar102 == iVar4);
  *(uint *)(&stack0x000000bc + lVar84) = -(uint)(iVar105 == iVar4);
  *(uint *)(&stack0x000000c0 + lVar84) = -(uint)(iVar107 == iVar4);
  *(uint *)(&stack0x000000c4 + lVar84) = -(uint)(iVar109 == iVar4);
  iVar97 = _DAT_004c4e90 + iVar90;
  iVar99 = _UNK_004c4e94 + iVar93;
  iVar100 = _UNK_004c4e98 + iVar94;
  iVar101 = _UNK_004c4e9c + iVar95;
  *(uint *)(&stack0x000000c8 + lVar84) = -(uint)(iVar103 == iVar4);
  *(uint *)(&stack0x000000cc + lVar84) = -(uint)(iVar106 == iVar4);
  *(uint *)(&stack0x000000d0 + lVar84) = -(uint)(iVar108 == iVar4);
  *(uint *)(&stack0x000000d4 + lVar84) = -(uint)(iVar110 == iVar4);
  iVar102 = _DAT_004c4e90 + iVar97;
  iVar105 = _UNK_004c4e94 + iVar99;
  iVar107 = _UNK_004c4e98 + iVar100;
  iVar109 = _UNK_004c4e9c + iVar101;
  *(uint *)(&stack0x000000d8 + lVar84) = -(uint)(iVar90 == iVar4);
  *(uint *)(&stack0x000000dc + lVar84) = -(uint)(iVar93 == iVar4);
  *(uint *)(&stack0x000000e0 + lVar84) = -(uint)(iVar94 == iVar4);
  *(uint *)(&stack0x000000e4 + lVar84) = -(uint)(iVar95 == iVar4);
  iVar103 = _DAT_004c4e90 + iVar102;
  iVar106 = _UNK_004c4e94 + iVar105;
  iVar108 = _UNK_004c4e98 + iVar107;
  iVar110 = _UNK_004c4e9c + iVar109;
  *(uint *)(&stack0x000000e8 + lVar84) = -(uint)(iVar97 == iVar4);
  *(uint *)(&stack0x000000ec + lVar84) = -(uint)(iVar99 == iVar4);
  *(uint *)(&stack0x000000f0 + lVar84) = -(uint)(iVar100 == iVar4);
  *(uint *)(&stack0x000000f4 + lVar84) = -(uint)(iVar101 == iVar4);
  iVar90 = _DAT_004c4e90 + iVar103;
  iVar93 = _UNK_004c4e94 + iVar106;
  iVar94 = _UNK_004c4e98 + iVar108;
  iVar95 = _UNK_004c4e9c + iVar110;
  *(uint *)(&stack0x000000f8 + lVar84) = -(uint)(iVar102 == iVar4);
  *(uint *)(&stack0x000000fc + lVar84) = -(uint)(iVar105 == iVar4);
  *(uint *)(&stack0x00000100 + lVar84) = -(uint)(iVar107 == iVar4);
  *(uint *)(&stack0x00000104 + lVar84) = -(uint)(iVar109 == iVar4);
  iVar97 = _DAT_004c4e90 + iVar90;
  iVar99 = _UNK_004c4e94 + iVar93;
  iVar100 = _UNK_004c4e98 + iVar94;
  iVar101 = _UNK_004c4e9c + iVar95;
  auVar91._0_4_ = -(uint)(iVar90 == iVar4);
  auVar91._4_4_ = -(uint)(iVar93 == iVar4);
  auVar91._8_4_ = -(uint)(iVar94 == iVar4);
  auVar91._12_4_ = -(uint)(iVar95 == iVar4);
  *(uint *)(&stack0x00000108 + lVar84) = -(uint)(iVar103 == iVar4);
  *(uint *)(&stack0x0000010c + lVar84) = -(uint)(iVar106 == iVar4);
  *(uint *)(&stack0x00000110 + lVar84) = -(uint)(iVar108 == iVar4);
  *(uint *)(&stack0x00000114 + lVar84) = -(uint)(iVar110 == iVar4);
  iVar90 = _DAT_004c4e90 + iVar97;
  iVar93 = _UNK_004c4e94 + iVar99;
  iVar94 = _UNK_004c4e98 + iVar100;
  iVar95 = _UNK_004c4e9c + iVar101;
  auVar96._0_4_ = -(uint)(iVar97 == iVar4);
  auVar96._4_4_ = -(uint)(iVar99 == iVar4);
  auVar96._8_4_ = -(uint)(iVar100 == iVar4);
  auVar96._12_4_ = -(uint)(iVar101 == iVar4);
  *(undefined1 (*) [16])(&stack0x00000118 + lVar84) = auVar91;
  auVar98._0_4_ = -(uint)(iVar90 == iVar4);
  auVar98._4_4_ = -(uint)(iVar93 == iVar4);
  auVar98._8_4_ = -(uint)(iVar94 == iVar4);
  auVar98._12_4_ = -(uint)(iVar95 == iVar4);
  *(undefined1 (*) [16])(&stack0x00000128 + lVar84) = auVar96;
  auVar104._0_4_ = -(uint)(_DAT_004c4e90 + iVar90 == iVar4);
  auVar104._4_4_ = -(uint)(_UNK_004c4e94 + iVar93 == iVar4);
  auVar104._8_4_ = -(uint)(_UNK_004c4e98 + iVar94 == iVar4);
  auVar104._12_4_ = -(uint)(_UNK_004c4e9c + iVar95 == iVar4);
  *(undefined1 (*) [16])(&stack0x00000138 + lVar84) = auVar98;
  auVar92 = param_3[0xc];
  auVar2 = param_3[0xd];
  auVar3 = param_3[0xe];
  *(undefined1 (*) [16])(&stack0x00000148 + lVar84) = auVar104;
  auVar92 = (auVar91 & auVar92 | auVar98 & auVar3 |
             *param_3 & *(undefined1 (*) [16])((long)&stack0x00000058 + lVar84) |
             param_3[2] & *(undefined1 (*) [16])(&stack0x00000078 + lVar84) |
             param_3[4] & *(undefined1 (*) [16])(&stack0x00000098 + lVar84) |
             param_3[6] & *(undefined1 (*) [16])(&stack0x000000b8 + lVar84) |
             param_3[8] & *(undefined1 (*) [16])(&stack0x000000d8 + lVar84) |
            param_3[10] & *(undefined1 (*) [16])(&stack0x000000f8 + lVar84)) ^
            (auVar96 & auVar2 | auVar104 & param_3[0xf] |
             param_3[1] & *(undefined1 (*) [16])(&stack0x00000068 + lVar84) |
             param_3[3] & *(undefined1 (*) [16])(&stack0x00000088 + lVar84) |
             param_3[5] & *(undefined1 (*) [16])(&stack0x000000a8 + lVar84) |
             param_3[7] & *(undefined1 (*) [16])(&stack0x000000c8 + lVar84) |
             param_3[9] & *(undefined1 (*) [16])(&stack0x000000e8 + lVar84) |
            param_3[0xb] & *(undefined1 (*) [16])(&stack0x00000108 + lVar84));
  uVar77 = auVar92._0_8_ | auVar92._8_8_;
  auVar92._8_8_ = 0;
  auVar92._0_8_ = uVar77;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = *param_2;
  uVar80 = SUB168(auVar92 * auVar42,0);
  uVar74 = SUB168(auVar92 * auVar42,8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar77;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_2[1];
  uVar85 = SUB168(auVar2 * auVar43,0);
  uVar86 = SUB168(auVar2 * auVar43,8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar77;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_2[2];
  uVar75 = SUB168(auVar3 * auVar44,0);
  uVar87 = (ulong)CARRY8(uVar85,uVar74);
  uVar82 = uVar86 + uVar75;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar77;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_2[3];
  uVar81 = uVar80 * in_stack_00000028;
  pauStack0000000000000010 = param_3 + 0x18;
  param_2 = param_2 + 4;
  Var6 = (unkuint9)
         (SUB168(auVar3 * auVar44,8) + (ulong)(CARRY8(uVar86,uVar75) || CARRY8(uVar82,uVar87))) +
         (unkuint9)SUB168(auVar13 * auVar45,0) + (unkuint9)0;
  Var7 = (unkuint9)SUB168(auVar13 * auVar45,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar75 = (ulong)Var7;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar81;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = *param_4;
  Var11 = (unkuint9)SUB168(auVar14 * auVar46,8) + (unkuint9)(uVar85 + uVar74) + (unkuint9)0;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar81;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_4[1];
  Var7 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar15 * auVar47,0) +
         (unkuint9)
         ((char)((unkuint9)uVar80 + (unkuint9)SUB168(auVar14 * auVar46,0) +
                 (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0') >> 0x40) != '\0');
  Var11 = (unkuint9)SUB168(auVar15 * auVar47,8) + (unkuint9)(uVar82 + uVar87) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar81;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_4[2];
  uStack0000000000000048 = (long)Var7;
  Var7 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar16 * auVar48,0) +
         (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
  Var11 = (unkuint9)SUB168(auVar16 * auVar48,8) + (unkuint9)(ulong)Var6 +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar81;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_4[3];
  uStack0000000000000050 = (long)Var7;
  Var6 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar17 * auVar49,0) +
         (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
  bVar88 = (char)((unkuint9)Var6 >> 0x40) != '\0';
  Var7 = (unkuint9)SUB168(auVar17 * auVar49,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  bVar89 = (char)((unkuint9)Var7 >> 0x40) != '\0';
  uVar87 = (ulong)Var7;
  param_4 = param_4 + 4;
  uStack0000000000000058 = (long)Var6;
  puVar78 = (ulong *)&stack0x00000068;
  do {
    puVar76 = puVar78;
    Var6 = (unkuint9)uVar87 + (unkuint9)0 + (unkuint9)bVar88;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar77;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = *param_2;
    Var7 = (unkuint9)SUB168(auVar18 * auVar50,0) + (unkuint9)uVar75 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar77;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = param_2[1];
    Var11 = (unkuint9)SUB168(auVar19 * auVar51,0) + (unkuint9)SUB168(auVar18 * auVar50,8) +
            (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar77;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = param_2[2];
    Var8 = (unkuint9)SUB168(auVar20 * auVar52,0) + (unkuint9)SUB168(auVar19 * auVar51,8) +
           (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar77;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = param_2[3];
    Var9 = (unkuint9)SUB168(auVar21 * auVar53,0) + (unkuint9)SUB168(auVar20 * auVar52,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var10 = (unkuint9)SUB168(auVar21 * auVar53,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar75 = (ulong)Var10;
    param_2 = param_2 + 4;
    puVar78 = puVar76 + 4;
    Var7 = (unkuint9)(ulong)Var7 + (unkuint9)(ulong)Var6 + (unkuint9)bVar89;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar81;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = *param_4;
    Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar22 * auVar54,0) +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    Var11 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar22 * auVar54,8) +
            (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar81;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = param_4[1];
    Var7 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar23 * auVar55,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var11 = (unkuint9)(ulong)Var8 + (unkuint9)SUB168(auVar23 * auVar55,8) +
            (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar81;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = param_4[2];
    puVar76[-1] = (ulong)Var6;
    Var6 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar24 * auVar56,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    *puVar76 = (ulong)Var7;
    Var7 = (unkuint9)(ulong)Var9 + (unkuint9)SUB168(auVar24 * auVar56,8) +
           (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar81;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = param_4[3];
    puVar76[1] = (ulong)Var6;
    Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar25 * auVar57,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    bVar88 = (char)((unkuint9)Var6 >> 0x40) != '\0';
    uVar87 = SUB168(auVar25 * auVar57,8) + (ulong)((char)((unkuint9)Var7 >> 0x40) != '\0');
    param_4 = param_4 + 4;
    puVar76[2] = (ulong)Var6;
    bVar89 = SBORROW8(lVar83,1);
    lVar83 = lVar83 + -1;
  } while (lVar83 != 0);
  param_2 = (ulong *)((long)param_2 + param_6);
  bVar89 = CARRY8(uVar75,uVar87 + bVar88);
  puVar76[3] = uVar75 + uVar87 + bVar88;
  lStack0000000000000008 = param_6;
  do {
    lVar83 = lStack0000000000000008;
    uVar87 = *(ulong *)(pauStack0000000000000010[-8] + 8) & puVar78[3] |
             *(ulong *)(pauStack0000000000000010[-6] + 8) & puVar78[7] |
             *(ulong *)(pauStack0000000000000010[-4] + 8) & puVar78[0xb] |
             *(ulong *)(pauStack0000000000000010[-2] + 8) & puVar78[0xf] |
             *(ulong *)(*pauStack0000000000000010 + 8) & puVar78[0x13] |
             *(ulong *)(pauStack0000000000000010[2] + 8) & puVar78[0x17] |
             *(ulong *)(pauStack0000000000000010[4] + 8) & puVar78[0x1b] |
             *(ulong *)(pauStack0000000000000010[6] + 8) & puVar78[0x1f] |
             *(ulong *)(pauStack0000000000000010[-7] + 8) & puVar78[5] |
             *(ulong *)(pauStack0000000000000010[-5] + 8) & puVar78[9] |
             *(ulong *)(pauStack0000000000000010[-3] + 8) & puVar78[0xd] |
             *(ulong *)(pauStack0000000000000010[-1] + 8) & puVar78[0x11] |
             *(ulong *)(pauStack0000000000000010[1] + 8) & puVar78[0x15] |
             *(ulong *)(pauStack0000000000000010[3] + 8) & puVar78[0x19] |
             *(ulong *)(pauStack0000000000000010[5] + 8) & puVar78[0x1d] |
             *(ulong *)(pauStack0000000000000010[7] + 8) & puVar78[0x21] |
             *(ulong *)pauStack0000000000000010[-8] & puVar78[2] |
             *(ulong *)pauStack0000000000000010[-6] & puVar78[6] |
             *(ulong *)pauStack0000000000000010[-4] & puVar78[10] |
             *(ulong *)pauStack0000000000000010[-2] & puVar78[0xe] |
             *(ulong *)*pauStack0000000000000010 & puVar78[0x12] |
             *(ulong *)pauStack0000000000000010[2] & puVar78[0x16] |
             *(ulong *)pauStack0000000000000010[4] & puVar78[0x1a] |
             *(ulong *)pauStack0000000000000010[6] & puVar78[0x1e] |
             *(ulong *)pauStack0000000000000010[-7] & puVar78[4] |
             *(ulong *)pauStack0000000000000010[-5] & puVar78[8] |
             *(ulong *)pauStack0000000000000010[-3] & puVar78[0xc] |
             *(ulong *)pauStack0000000000000010[-1] & puVar78[0x10] |
             *(ulong *)pauStack0000000000000010[1] & puVar78[0x14] |
             *(ulong *)pauStack0000000000000010[3] & puVar78[0x18] |
             *(ulong *)pauStack0000000000000010[5] & puVar78[0x1c] |
             *(ulong *)pauStack0000000000000010[7] & puVar78[0x20];
    pauVar1 = pauStack0000000000000010 + 0x10;
    *puVar78 = (ulong)bVar89;
    puVar78 = (ulong *)((long)puVar78 + lVar83 + 0x20);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar87;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = *param_2;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar87;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = param_2[1];
    Var7 = (unkuint9)SUB168(auVar26 * auVar58,0) + (unkuint9)puVar78[-4] + (unkuint9)0;
    uVar82 = (ulong)Var7;
    Var6 = (unkuint9)SUB168(auVar26 * auVar58,8) + (unkuint9)SUB168(auVar27 * auVar59,0) +
           (unkuint9)0;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar87;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = param_2[2];
    Var7 = (unkuint9)(ulong)Var6 + (unkuint9)puVar78[-3] +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var6 = (unkuint9)SUB168(auVar27 * auVar59,8) + (unkuint9)SUB168(auVar28 * auVar60,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar87;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = param_2[3];
    Var11 = (unkuint9)(ulong)Var6 + (unkuint9)puVar78[-2] +
            (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var6 = (unkuint9)SUB168(auVar28 * auVar60,8) + (unkuint9)SUB168(auVar29 * auVar61,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    param_4 = (ulong *)((long)param_4 + lVar83);
    param_2 = param_2 + 4;
    Var8 = (unkuint9)(ulong)Var6 + (unkuint9)puVar78[-1] +
           (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    uVar75 = SUB168(auVar29 * auVar61,8) + (ulong)((char)((unkuint9)Var6 >> 0x40) != '\0') +
             (ulong)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar74 = uVar82 * in_stack_00000028;
    pauStack0000000000000010 = pauVar1;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar74;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = *param_4;
    Var7 = (unkuint9)SUB168(auVar30 * auVar62,8) + (unkuint9)(ulong)Var7 + (unkuint9)0;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar74;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = param_4[1];
    Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar31 * auVar63,0) +
           (unkuint9)
           ((char)((unkuint9)uVar82 + (unkuint9)SUB168(auVar30 * auVar62,0) + (unkuint9)0 >> 0x40)
           != '\0');
    Var11 = (unkuint9)SUB168(auVar31 * auVar63,8) + (unkuint9)(ulong)Var11 +
            (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar74;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = param_4[2];
    Var7 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar32 * auVar64,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var11 = (unkuint9)SUB168(auVar32 * auVar64,8) + (unkuint9)(ulong)Var8 +
            (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar74;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = param_4[3];
    puVar78[-4] = (ulong)Var6;
    Var6 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar33 * auVar65,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    bVar88 = (char)((unkuint9)Var6 >> 0x40) != '\0';
    puVar78[-3] = (ulong)Var7;
    Var7 = (unkuint9)SUB168(auVar33 * auVar65,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    bVar89 = (char)((unkuint9)Var7 >> 0x40) != '\0';
    uVar82 = (ulong)Var7;
    puVar78[-2] = (ulong)Var6;
    param_4 = param_4 + 4;
    lVar83 = lStack0000000000000020;
    do {
      puVar79 = puVar78;
      puVar76 = param_4;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar87;
      auVar66._8_8_ = 0;
      auVar66._0_8_ = *param_2;
      Var6 = (unkuint9)uVar82 + (unkuint9)0 + (unkuint9)bVar88;
      Var11 = (unkuint9)SUB168(auVar34 * auVar66,0) + (unkuint9)uVar75 + (unkuint9)bVar89;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar87;
      auVar67._8_8_ = 0;
      auVar67._0_8_ = param_2[1];
      Var7 = (unkuint9)(ulong)Var11 + (unkuint9)*puVar79 +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      Var8 = (unkuint9)SUB168(auVar35 * auVar67,0) + (unkuint9)SUB168(auVar34 * auVar66,8) +
             (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar87;
      auVar68._8_8_ = 0;
      auVar68._0_8_ = param_2[2];
      Var11 = (unkuint9)(ulong)Var8 + (unkuint9)puVar79[1] +
              (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      Var9 = (unkuint9)SUB168(auVar36 * auVar68,0) + (unkuint9)SUB168(auVar35 * auVar67,8) +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar87;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = param_2[3];
      Var8 = (unkuint9)(ulong)Var9 + (unkuint9)puVar79[2] +
             (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      Var10 = (unkuint9)SUB168(auVar37 * auVar69,0) + (unkuint9)SUB168(auVar36 * auVar68,8) +
              (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      Var9 = (unkuint9)(ulong)Var10 + (unkuint9)puVar79[3] +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      Var12 = (unkuint9)SUB168(auVar37 * auVar69,8) + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      param_2 = param_2 + 4;
      puVar78 = puVar79 + 4;
      Var10 = (unkuint9)(ulong)Var12 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      uVar75 = (ulong)Var10;
      Var7 = (unkuint9)(ulong)Var7 + (unkuint9)(ulong)Var6 +
             (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar74;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = *puVar76;
      Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar38 * auVar70,0) +
             (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      Var11 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar38 * auVar70,8) +
              (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar74;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = puVar76[1];
      Var7 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar39 * auVar71,0) +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      Var11 = (unkuint9)(ulong)Var8 + (unkuint9)SUB168(auVar39 * auVar71,8) +
              (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar74;
      auVar72._8_8_ = 0;
      auVar72._0_8_ = puVar76[2];
      puVar79[-1] = (ulong)Var6;
      Var6 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar40 * auVar72,0) +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      Var11 = (unkuint9)(ulong)Var9 + (unkuint9)SUB168(auVar40 * auVar72,8) +
              (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      *puVar79 = (ulong)Var7;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar74;
      auVar73._8_8_ = 0;
      auVar73._0_8_ = puVar76[3];
      param_4 = puVar76 + 4;
      puVar79[1] = (ulong)Var6;
      Var6 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar41 * auVar73,0) +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      bVar88 = (char)((unkuint9)Var6 >> 0x40) != '\0';
      uVar82 = SUB168(auVar41 * auVar73,8) + (ulong)((char)((unkuint9)Var11 >> 0x40) != '\0');
      puVar79[2] = (ulong)Var6;
      bVar89 = SBORROW8(lVar83,1);
      lVar83 = lVar83 + -1;
    } while (lVar83 != 0);
    uVar87 = uVar75 + uVar82 + bVar88;
    bVar89 = CARRY8(uVar75,uVar82 + bVar88) || CARRY8(uVar87,(ulong)(*puVar78 != 0));
    uVar87 = uVar87 + (*puVar78 != 0);
    param_2 = (ulong *)((long)param_2 + lStack0000000000000008);
    puVar79[3] = uVar87;
  } while (pauVar1 < pauStack0000000000000018);
  puVar79 = (ulong *)((long)param_4 + lStack0000000000000008);
  puVar78 = (ulong *)((long)puVar78 + lStack0000000000000008);
  lVar84 = lStack0000000000000008 >> 5;
  uVar77 = -(ulong)(bVar89 || puVar76[3] < uVar87);
  uVar75 = *(long *)((long)param_4 + lStack0000000000000008) - 1;
  uVar87 = puVar79[1];
  lVar83 = 0;
  uVar82 = puVar79[2];
  uVar74 = puVar79[3];
  while( true ) {
    uVar81 = (~uVar75 & uVar77) + *puVar78;
    uVar75 = (ulong)(CARRY8(~uVar75 & uVar77,*puVar78) || CARRY8(uVar81,(ulong)(lVar83 != 0)));
    uVar85 = (~uVar87 & uVar77) + puVar78[1];
    uVar80 = (ulong)(CARRY8(~uVar87 & uVar77,puVar78[1]) || CARRY8(uVar85,uVar75));
    uVar86 = (~uVar82 & uVar77) + puVar78[2];
    uVar82 = (ulong)(CARRY8(~uVar82 & uVar77,puVar78[2]) || CARRY8(uVar86,uVar80));
    uVar87 = puVar78[3];
    uVar5 = (~uVar74 & uVar77) + puVar78[3];
    *plStack0000000000000040 = uVar81 + (lVar83 != 0);
    puVar78 = puVar78 + 4;
    plStack0000000000000040[1] = uVar85 + uVar75;
    lVar83 = -(ulong)(CARRY8(~uVar74 & uVar77,uVar87) || CARRY8(uVar5,uVar82));
    plStack0000000000000040[2] = uVar86 + uVar80;
    plStack0000000000000040[3] = uVar5 + uVar82;
    plStack0000000000000040 = plStack0000000000000040 + 4;
    lVar84 = lVar84 + 1;
    if (lVar84 == 0) break;
    uVar75 = puVar79[4];
    uVar87 = puVar79[5];
    uVar82 = puVar79[6];
    uVar74 = puVar79[7];
    puVar79 = puVar79 + 4;
  }
  return;
}

