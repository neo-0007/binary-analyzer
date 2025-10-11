
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c4be0(ulong *param_1,int param_2,long param_3,int param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong *puVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong uVar31;
  ulong *puVar32;
  ulong *puVar33;
  ulong *puVar34;
  ulong *puVar35;
  ulong *puVar36;
  ulong *puVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  
  puVar37 = (ulong *)(param_3 + 0x80);
  iVar50 = _DAT_004c4e90 + _DAT_004c4e80;
  iVar54 = _UNK_004c4e94 + _UNK_004c4e84;
  iVar58 = _UNK_004c4e98 + _UNK_004c4e88;
  iVar62 = _UNK_004c4e9c + _UNK_004c4e8c;
  bVar16 = _DAT_004c4e80 == param_4;
  bVar17 = _UNK_004c4e84 == param_4;
  bVar18 = _UNK_004c4e88 == param_4;
  bVar19 = _UNK_004c4e8c == param_4;
  iVar66 = _DAT_004c4e90 + iVar50;
  iVar70 = _UNK_004c4e94 + iVar54;
  iVar74 = _UNK_004c4e98 + iVar58;
  iVar78 = _UNK_004c4e9c + iVar62;
  iVar82 = _DAT_004c4e90 + iVar66;
  iVar86 = _UNK_004c4e94 + iVar70;
  iVar90 = _UNK_004c4e98 + iVar74;
  iVar94 = _UNK_004c4e9c + iVar78;
  iVar38 = _DAT_004c4e90 + iVar82;
  iVar41 = _UNK_004c4e94 + iVar86;
  iVar44 = _UNK_004c4e98 + iVar90;
  iVar47 = _UNK_004c4e9c + iVar94;
  iVar51 = _DAT_004c4e90 + iVar38;
  iVar55 = _UNK_004c4e94 + iVar41;
  iVar59 = _UNK_004c4e98 + iVar44;
  iVar63 = _UNK_004c4e9c + iVar47;
  iVar67 = _DAT_004c4e90 + iVar51;
  iVar71 = _UNK_004c4e94 + iVar55;
  iVar75 = _UNK_004c4e98 + iVar59;
  iVar79 = _UNK_004c4e9c + iVar63;
  iVar83 = _DAT_004c4e90 + iVar67;
  iVar87 = _UNK_004c4e94 + iVar71;
  iVar91 = _UNK_004c4e98 + iVar75;
  iVar95 = _UNK_004c4e9c + iVar79;
  iVar39 = _DAT_004c4e90 + iVar83;
  iVar42 = _UNK_004c4e94 + iVar87;
  iVar45 = _UNK_004c4e98 + iVar91;
  iVar48 = _UNK_004c4e9c + iVar95;
  iVar52 = _DAT_004c4e90 + iVar39;
  iVar56 = _UNK_004c4e94 + iVar42;
  iVar60 = _UNK_004c4e98 + iVar45;
  iVar64 = _UNK_004c4e9c + iVar48;
  iVar68 = _DAT_004c4e90 + iVar52;
  iVar72 = _UNK_004c4e94 + iVar56;
  iVar76 = _UNK_004c4e98 + iVar60;
  iVar80 = _UNK_004c4e9c + iVar64;
  iVar84 = _DAT_004c4e90 + iVar68;
  iVar88 = _UNK_004c4e94 + iVar72;
  iVar92 = _UNK_004c4e98 + iVar76;
  iVar96 = _UNK_004c4e9c + iVar80;
  iVar40 = _DAT_004c4e90 + iVar84;
  iVar43 = _UNK_004c4e94 + iVar88;
  iVar46 = _UNK_004c4e98 + iVar92;
  iVar49 = _UNK_004c4e9c + iVar96;
  iVar53 = _DAT_004c4e90 + iVar40;
  iVar57 = _UNK_004c4e94 + iVar43;
  iVar61 = _UNK_004c4e98 + iVar46;
  iVar65 = _UNK_004c4e9c + iVar49;
  iVar69 = _DAT_004c4e90 + iVar53;
  iVar73 = _UNK_004c4e94 + iVar57;
  iVar77 = _UNK_004c4e98 + iVar61;
  iVar81 = _UNK_004c4e9c + iVar65;
  iVar85 = _DAT_004c4e90 + iVar69;
  iVar89 = _UNK_004c4e94 + iVar73;
  iVar93 = _UNK_004c4e98 + iVar77;
  iVar97 = _UNK_004c4e9c + iVar81;
  do {
    puVar1 = puVar37 + -0x10;
    puVar36 = puVar37 + -0xf;
    puVar2 = puVar37 + -0xe;
    puVar27 = puVar37 + -0xd;
    puVar3 = puVar37 + -0xc;
    puVar35 = puVar37 + -0xb;
    puVar4 = puVar37 + -10;
    puVar26 = puVar37 + -9;
    puVar5 = puVar37 + -8;
    puVar34 = puVar37 + -7;
    puVar6 = puVar37 + -6;
    puVar25 = puVar37 + -5;
    puVar7 = puVar37 + -4;
    puVar33 = puVar37 + -3;
    puVar8 = puVar37 + -2;
    puVar24 = puVar37 + -1;
    uVar31 = *puVar37;
    puVar32 = puVar37 + 1;
    puVar9 = puVar37 + 2;
    puVar23 = puVar37 + 3;
    puVar10 = puVar37 + 4;
    puVar30 = puVar37 + 5;
    puVar11 = puVar37 + 6;
    puVar22 = puVar37 + 7;
    puVar12 = puVar37 + 8;
    puVar29 = puVar37 + 9;
    puVar13 = puVar37 + 10;
    puVar21 = puVar37 + 0xb;
    puVar14 = puVar37 + 0xc;
    puVar28 = puVar37 + 0xd;
    puVar15 = puVar37 + 0xe;
    puVar20 = puVar37 + 0xf;
    puVar37 = puVar37 + 0x20;
    *param_1 = *puVar36 & CONCAT44(-(uint)bVar19,-(uint)bVar18) |
               *puVar35 & CONCAT44(-(uint)(iVar78 == param_4),-(uint)(iVar74 == param_4)) |
               *puVar34 & CONCAT44(-(uint)(iVar47 == param_4),-(uint)(iVar44 == param_4)) |
               *puVar33 & CONCAT44(-(uint)(iVar79 == param_4),-(uint)(iVar75 == param_4)) |
               *puVar32 & CONCAT44(-(uint)(iVar48 == param_4),-(uint)(iVar45 == param_4)) |
               *puVar30 & CONCAT44(-(uint)(iVar80 == param_4),-(uint)(iVar76 == param_4)) |
               *puVar29 & CONCAT44(-(uint)(iVar49 == param_4),-(uint)(iVar46 == param_4)) |
               *puVar28 & CONCAT44(-(uint)(iVar81 == param_4),-(uint)(iVar77 == param_4)) |
               *puVar27 & CONCAT44(-(uint)(iVar62 == param_4),-(uint)(iVar58 == param_4)) |
               *puVar26 & CONCAT44(-(uint)(iVar94 == param_4),-(uint)(iVar90 == param_4)) |
               *puVar25 & CONCAT44(-(uint)(iVar63 == param_4),-(uint)(iVar59 == param_4)) |
               *puVar24 & CONCAT44(-(uint)(iVar95 == param_4),-(uint)(iVar91 == param_4)) |
               *puVar23 & CONCAT44(-(uint)(iVar64 == param_4),-(uint)(iVar60 == param_4)) |
               *puVar22 & CONCAT44(-(uint)(iVar96 == param_4),-(uint)(iVar92 == param_4)) |
               *puVar21 & CONCAT44(-(uint)(iVar65 == param_4),-(uint)(iVar61 == param_4)) |
               *puVar20 & CONCAT44(-(uint)(iVar97 == param_4),-(uint)(iVar93 == param_4)) |
               *puVar1 & CONCAT44(-(uint)bVar17,-(uint)bVar16) |
               *puVar3 & CONCAT44(-(uint)(iVar70 == param_4),-(uint)(iVar66 == param_4)) |
               *puVar5 & CONCAT44(-(uint)(iVar41 == param_4),-(uint)(iVar38 == param_4)) |
               *puVar7 & CONCAT44(-(uint)(iVar71 == param_4),-(uint)(iVar67 == param_4)) |
               uVar31 & CONCAT44(-(uint)(iVar42 == param_4),-(uint)(iVar39 == param_4)) |
               *puVar10 & CONCAT44(-(uint)(iVar72 == param_4),-(uint)(iVar68 == param_4)) |
               *puVar12 & CONCAT44(-(uint)(iVar43 == param_4),-(uint)(iVar40 == param_4)) |
               *puVar14 & CONCAT44(-(uint)(iVar73 == param_4),-(uint)(iVar69 == param_4)) |
               *puVar2 & CONCAT44(-(uint)(iVar54 == param_4),-(uint)(iVar50 == param_4)) |
               *puVar4 & CONCAT44(-(uint)(iVar86 == param_4),-(uint)(iVar82 == param_4)) |
               *puVar6 & CONCAT44(-(uint)(iVar55 == param_4),-(uint)(iVar51 == param_4)) |
               *puVar8 & CONCAT44(-(uint)(iVar87 == param_4),-(uint)(iVar83 == param_4)) |
               *puVar9 & CONCAT44(-(uint)(iVar56 == param_4),-(uint)(iVar52 == param_4)) |
               *puVar11 & CONCAT44(-(uint)(iVar88 == param_4),-(uint)(iVar84 == param_4)) |
               *puVar13 & CONCAT44(-(uint)(iVar57 == param_4),-(uint)(iVar53 == param_4)) |
               *puVar15 & CONCAT44(-(uint)(iVar89 == param_4),-(uint)(iVar85 == param_4));
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

