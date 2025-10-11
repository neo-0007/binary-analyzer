
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004e5c80(undefined8 param_1,undefined8 param_2,long param_3,uint *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  byte bVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  int *piVar24;
  long lVar25;
  long lVar26;
  long in_FS_OFFSET;
  bool bVar27;
  long local_b18;
  undefined1 local_acc [4];
  int local_ac8 [10];
  int local_aa0 [2];
  undefined1 local_a98 [16];
  undefined1 local_a88 [16];
  undefined8 local_a78;
  int local_a70;
  undefined1 auStack_a6c [12];
  undefined1 local_a60 [16];
  undefined8 local_a50;
  undefined4 local_a48;
  undefined1 auStack_a44 [12];
  undefined1 local_a38 [16];
  undefined8 local_a28;
  int local_a18 [10];
  int local_9f0;
  int local_9ec;
  int local_9e8;
  int local_9e4;
  int local_9e0;
  int local_9dc;
  int local_9d8;
  int local_9d4;
  int local_9d0;
  int local_9cc;
  undefined4 local_9c8;
  undefined1 auStack_9c4 [12];
  undefined1 local_9b8 [16];
  undefined8 local_9a8;
  int local_9a0 [10];
  int local_978 [10];
  int local_950 [10];
  int local_928 [10];
  int local_900 [10];
  undefined1 local_8d8 [40];
  int local_8b0 [10];
  int local_888 [10];
  undefined1 local_860 [40];
  int local_838 [10];
  undefined1 local_810 [40];
  undefined1 local_7e8 [40];
  undefined1 local_7c0 [40];
  int local_798 [10];
  undefined1 auStack_770 [40];
  undefined1 auStack_748 [40];
  undefined1 auStack_720 [40];
  undefined1 local_6f8 [160];
  undefined1 local_658 [160];
  undefined1 local_5b8 [160];
  undefined1 local_518 [160];
  undefined1 local_478 [160];
  undefined1 local_3d8 [160];
  undefined1 local_338 [159];
  byte bStack_299;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [64];
  char local_248 [256];
  byte local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_298 = _DAT_007f8f30;
  uStack_290 = _UNK_007f8f38;
  if (*(byte *)(param_3 + 0x3f) < 0x11) {
    if (*(byte *)(param_3 + 0x3f) == 0x10) {
      if ((((*(long *)(param_3 + 0x30) != DAT_007f12a0) ||
           (*(int *)(param_3 + 0x38) != DAT_007f12a8)) ||
          (*(short *)(param_3 + 0x3c) != DAT_007f12ac)) ||
         (*(char *)(param_3 + 0x3e) != DAT_007f12ae)) goto LAB_004e5d01;
      lVar12 = 0xe;
      bVar17 = 0x14;
      while( true ) {
        bVar6 = *(byte *)(param_3 + 0x21 + lVar12);
        if (bVar6 < bVar17) break;
        if ((bVar6 >= bVar17 && bVar6 != bVar17) || (lVar12 == -1)) goto LAB_004e5d01;
        bVar17 = *(byte *)((long)&local_298 + lVar12);
        lVar12 = lVar12 + -1;
      }
    }
    lVar22 = ((ulong)*(byte *)((long)param_4 + 5) << 8 | (ulong)*(byte *)((long)param_4 + 6) << 0x10
             | (ulong)(byte)param_4[1]) * 0x40;
    lVar14 = ((ulong)*(byte *)((long)param_4 + 0xb) << 8 | (ulong)(byte)param_4[3] << 0x10 |
             (ulong)*(byte *)((long)param_4 + 10)) * 8;
    lVar8 = ((ulong)(byte)param_4[6] << 8 | (ulong)*(byte *)((long)param_4 + 0x19) << 0x10 |
            (ulong)*(byte *)((long)param_4 + 0x17)) * 0x20;
    uVar18 = ((uint)*(byte *)((long)param_4 + 0x1e) << 8 |
              (*(byte *)((long)param_4 + 0x1f) & 0x7f) << 0x10 |
             (uint)*(byte *)((long)param_4 + 0x1d)) * 4;
    lVar12 = (ulong)uVar18 + 0x1000000;
    lVar11 = lVar22 + 0x1000000;
    lVar13 = lVar14 + 0x1000000;
    lVar21 = (lVar12 >> 0x19) * 0x13 + (ulong)*param_4;
    lVar26 = ((ulong)(byte)param_4[2] << 8 | (ulong)*(byte *)((long)param_4 + 9) << 0x10 |
             (ulong)*(byte *)((long)param_4 + 7)) * 0x20 + (lVar11 >> 0x19);
    lVar19 = (ulong)param_4[4] + 0x1000000;
    lVar1 = lVar26 + 0x2000000;
    lVar2 = lVar8 + 0x1000000;
    lVar5 = (lVar13 >> 0x19) +
            ((ulong)*(byte *)((long)param_4 + 0xe) << 8 |
             (ulong)*(byte *)((long)param_4 + 0xf) << 0x10 | (ulong)*(byte *)((long)param_4 + 0xd))
            * 4;
    lVar3 = lVar21 + 0x2000000;
    lVar25 = ((ulong)*(byte *)((long)param_4 + 0x15) << 8 |
              (ulong)*(byte *)((long)param_4 + 0x16) << 0x10 | (ulong)(byte)param_4[5]) * 0x80 +
             (lVar19 >> 0x19);
    lVar4 = lVar25 + 0x2000000;
    local_9f0 = (int)lVar21 - ((uint)lVar3 & 0xfc000000);
    lVar15 = (lVar2 >> 0x19) +
             ((ulong)*(byte *)((long)param_4 + 0x1b) << 8 | (ulong)(byte)param_4[7] << 0x10 |
             (ulong)*(byte *)((long)param_4 + 0x1a)) * 0x10;
    lVar21 = lVar5 + 0x2000000;
    local_9ec = (int)(lVar3 >> 0x1a) + ((int)lVar22 - ((uint)lVar11 & 0xfe000000));
    lVar11 = lVar15 + 0x2000000;
    local_9e8 = (int)lVar26 - ((uint)lVar1 & 0xfc000000);
    local_9e4 = (int)(lVar1 >> 0x1a) + ((int)lVar14 - ((uint)lVar13 & 0xfe000000));
    local_9e0 = (int)lVar5 - ((uint)lVar21 & 0xfc000000);
    local_9dc = (int)(lVar21 >> 0x1a) + (param_4[4] - ((uint)lVar19 & 0xfe000000));
    local_9d4 = ((int)lVar8 - ((uint)lVar2 & 0xfe000000)) + (int)(lVar4 >> 0x1a);
    local_9d8 = (int)lVar25 - ((uint)lVar4 & 0xfc000000);
    local_9d0 = (int)lVar15 - ((uint)lVar11 & 0xfc000000);
    local_9cc = (uVar18 - ((uint)lVar12 & 0xfe000000)) + (int)(lVar11 >> 0x1a);
    local_9a8 = 0;
    auStack_9c4 = SUB1612((undefined1  [16])0x0,4);
    local_9c8 = 1;
    local_9b8 = (undefined1  [16])0x0;
    FUN_004e0ae0(local_ac8);
    FUN_004e02c0(local_a98,local_ac8,&DAT_007f8f00);
    piVar10 = (int *)auStack_9c4;
    iVar20 = 1;
    piVar9 = local_ac8;
    piVar16 = piVar10;
    while( true ) {
      *piVar9 = *piVar9 - iVar20;
      piVar9 = piVar9 + 1;
      if (piVar9 == local_aa0) break;
      iVar20 = *piVar16;
      piVar16 = piVar16 + 1;
    }
    iVar20 = 1;
    piVar9 = (int *)local_a98;
    while( true ) {
      *piVar9 = *piVar9 + iVar20;
      piVar9 = piVar9 + 1;
      if (piVar9 == &local_a70) break;
      iVar20 = *piVar10;
      piVar10 = piVar10 + 1;
    }
    FUN_004e0ae0(local_978,local_a98);
    FUN_004e02c0(local_978,local_978,local_a98);
    iVar20 = 4;
    FUN_004e0ae0(local_a18,local_978);
    FUN_004e02c0(local_a18,local_a18,local_a98);
    FUN_004e02c0(local_a18,local_a18,local_ac8);
    FUN_004e0ae0(local_8d8,local_a18);
    FUN_004e0ae0(local_838,local_8d8);
    FUN_004e0ae0(local_838,local_838);
    FUN_004e02c0(local_838,local_a18,local_838);
    FUN_004e02c0(local_8d8,local_8d8,local_838);
    FUN_004e0ae0(local_8d8,local_8d8);
    FUN_004e02c0(local_8d8,local_838,local_8d8);
    FUN_004e0ae0(local_838,local_8d8);
    do {
      FUN_004e0ae0(local_838,local_838);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    iVar20 = 9;
    FUN_004e02c0(local_8d8,local_838,local_8d8);
    FUN_004e0ae0(local_838,local_8d8);
    do {
      FUN_004e0ae0(local_838,local_838);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    iVar20 = 0x13;
    FUN_004e02c0(local_838,local_838,local_8d8);
    FUN_004e0ae0(local_798,local_838);
    do {
      FUN_004e0ae0(local_798,local_798);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    iVar20 = 9;
    FUN_004e02c0(local_838,local_798,local_838);
    FUN_004e0ae0(local_838,local_838);
    do {
      FUN_004e0ae0(local_838,local_838);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    iVar20 = 0x31;
    FUN_004e02c0(local_8d8,local_838,local_8d8);
    FUN_004e0ae0(local_838,local_8d8);
    do {
      FUN_004e0ae0(local_838,local_838);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    iVar20 = 99;
    FUN_004e02c0(local_838,local_838,local_8d8);
    FUN_004e0ae0(local_798,local_838);
    do {
      FUN_004e0ae0(local_798,local_798);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    iVar20 = 0x31;
    FUN_004e02c0(local_838,local_798,local_838);
    FUN_004e0ae0(local_838,local_838);
    do {
      FUN_004e0ae0(local_838,local_838);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    FUN_004e02c0(local_8d8,local_838,local_8d8);
    FUN_004e0ae0(local_8d8,local_8d8);
    FUN_004e0ae0(local_8d8,local_8d8);
    FUN_004e02c0(local_a18,local_8d8,local_a18);
    FUN_004e02c0(local_a18,local_a18,local_978);
    FUN_004e02c0(local_a18,local_a18,local_ac8);
    FUN_004e0ae0(local_838,local_a18);
    FUN_004e02c0(local_838,local_838,local_a98);
    lVar12 = 0;
    do {
      *(int *)((long)local_798 + lVar12) =
           *(int *)((long)local_838 + lVar12) - *(int *)(lVar12 + (long)local_ac8);
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0x28);
    FUN_004e0030(local_148,local_798);
    iVar20 = FUN_00422820(local_148,&DAT_007f1280,0x20);
    if (iVar20 != 0) {
      lVar12 = 0;
      do {
        *(int *)((long)local_798 + lVar12) =
             *(int *)(lVar12 + (long)local_ac8) + *(int *)((long)local_838 + lVar12);
        lVar12 = lVar12 + 4;
      } while (lVar12 != 0x28);
      FUN_004e0030(local_148,local_798);
      iVar20 = FUN_00422820(local_148,&DAT_007f1280,0x20);
      if (iVar20 != 0) goto LAB_004e5d01;
      FUN_004e02c0(local_a18,local_a18,&DAT_007f8ec0);
    }
    FUN_004e0030(local_148,local_a18);
    piVar10 = local_a18;
    if ((local_148[0] & 1) != *(byte *)((long)param_4 + 0x1f) >> 7) {
      do {
        *piVar10 = -*piVar10;
        piVar10 = piVar10 + 1;
      } while (piVar10 != &local_9f0);
    }
    piVar10 = local_9a0;
    FUN_004e02c0(piVar10,local_a18,&local_9f0);
    piVar9 = local_a18;
    do {
      *piVar9 = -*piVar9;
      piVar9 = piVar9 + 1;
    } while (piVar9 != &local_9f0);
    do {
      *piVar10 = -*piVar10;
      piVar10 = piVar10 + 1;
    } while (piVar10 != local_978);
    lVar12 = FUN_004069d0(param_5,"SHA512",param_6);
    if (lVar12 != 0) {
      lVar11 = FUN_00405f40();
      if (((lVar11 != 0) && (iVar20 = FUN_00407430(lVar11,lVar12,0), iVar20 != 0)) &&
         ((iVar20 = FUN_00405f60(lVar11,param_3,0x20), iVar20 != 0 &&
          ((iVar20 = FUN_00405f60(lVar11,param_4,0x20), iVar20 != 0 &&
           (iVar20 = FUN_00405f60(lVar11,param_1,param_2), iVar20 != 0)))))) {
        iVar20 = FUN_00406090(lVar11,local_288,local_acc);
        if (iVar20 != 0) {
          FUN_004e13e0(local_288);
          FUN_004e12b0(local_248,local_288);
          FUN_004e12b0(local_148,param_3 + 0x20);
          FUN_004e3290(local_798,local_a18);
          FUN_004e3900(local_978,local_a18);
          FUN_004e02c0(local_838,local_978,local_900);
          FUN_004e02c0(local_810,local_950,local_928);
          FUN_004e02c0(local_7e8,local_928,local_900);
          FUN_004e02c0(local_7c0,local_978,local_950);
          FUN_004e3af0(local_978,local_838,local_798);
          FUN_004e02c0(local_8d8,local_978,local_900);
          FUN_004e02c0(local_8b0,local_950,local_928);
          FUN_004e02c0(local_888,local_928,local_900);
          FUN_004e02c0(local_860,local_978,local_950);
          FUN_004e3290(local_6f8,local_8d8);
          FUN_004e3af0(local_978,local_838,local_6f8);
          FUN_004e02c0(local_8d8,local_978,local_900);
          FUN_004e02c0(local_8b0,local_950,local_928);
          FUN_004e02c0(local_888,local_928,local_900);
          FUN_004e02c0(local_860,local_978,local_950);
          FUN_004e3290(local_658,local_8d8);
          FUN_004e3af0(local_978,local_838,local_658);
          FUN_004e02c0(local_8d8,local_978,local_900);
          FUN_004e02c0(local_8b0,local_950,local_928);
          FUN_004e02c0(local_888,local_928,local_900);
          FUN_004e02c0(local_860,local_978,local_950);
          FUN_004e3290(local_5b8,local_8d8);
          FUN_004e3af0(local_978,local_838,local_5b8);
          FUN_004e02c0(local_8d8,local_978,local_900);
          FUN_004e02c0(local_8b0,local_950,local_928);
          FUN_004e02c0(local_888,local_928,local_900);
          FUN_004e02c0(local_860,local_978,local_950);
          FUN_004e3290(local_518,local_8d8);
          FUN_004e3af0(local_978,local_838,local_518);
          FUN_004e02c0(local_8d8,local_978,local_900);
          FUN_004e02c0(local_8b0,local_950,local_928);
          FUN_004e02c0(local_888,local_928,local_900);
          FUN_004e02c0(local_860,local_978,local_950);
          FUN_004e3290(local_478,local_8d8);
          FUN_004e3af0(local_978,local_838,local_478);
          FUN_004e02c0(local_8d8,local_978,local_900);
          FUN_004e02c0(local_8b0,local_950,local_928);
          FUN_004e02c0(local_888,local_928,local_900);
          FUN_004e02c0(local_860,local_978,local_950);
          FUN_004e3290(local_3d8,local_8d8);
          FUN_004e3af0(local_978,local_838,local_3d8);
          FUN_004e02c0(local_8d8,local_978,local_900);
          FUN_004e02c0(local_8b0,local_950,local_928);
          FUN_004e02c0(local_888,local_928,local_900);
          FUN_004e02c0(local_860,local_978,local_950);
          FUN_004e3290(local_338,local_8d8);
          lVar13 = 0xff;
          local_a78 = 0;
          local_a50 = 0;
          auStack_a6c = SUB1612((undefined1  [16])0x0,4);
          local_a70 = 1;
          local_a28 = 0;
          auStack_a44 = SUB1612((undefined1  [16])0x0,4);
          local_a48 = 1;
          local_a98 = (undefined1  [16])0x0;
          local_a88 = (undefined1  [16])0x0;
          local_a60 = (undefined1  [16])0x0;
          local_a38 = (undefined1  [16])0x0;
LAB_004e69ed:
          if ((local_248[lVar13] == '\0') && (local_148[lVar13] == 0)) goto code_r0x004e69e3;
          local_b18 = (long)(int)lVar13;
          do {
            FUN_004e3300(local_978,local_a98);
            cVar7 = local_248[local_b18];
            if (cVar7 < '\x01') {
              if (cVar7 != '\0') {
                FUN_004e02c0(local_8d8,local_978,local_900);
                FUN_004e02c0(local_8b0,local_950,local_928);
                FUN_004e02c0(local_888,local_928,local_900);
                piVar10 = local_950;
                FUN_004e02c0(local_860,local_978,local_950);
                piVar9 = local_978;
                piVar16 = local_8b0;
                do {
                  piVar24 = piVar16 + -10;
                  iVar20 = *piVar16;
                  piVar23 = piVar9 + 1;
                  piVar16 = piVar16 + 1;
                  *piVar9 = *piVar24 + iVar20;
                  piVar9 = piVar23;
                } while (piVar23 != piVar10);
                piVar9 = piVar10;
                piVar16 = local_8b0;
                do {
                  iVar20 = *piVar16;
                  piVar24 = piVar16 + -10;
                  piVar23 = piVar9 + 1;
                  piVar16 = piVar16 + 1;
                  *piVar9 = iVar20 - *piVar24;
                  piVar9 = piVar23;
                } while (piVar23 != local_928);
                lVar13 = (long)-((int)cVar7 / 2) * 0xa0;
                FUN_004e02c0(local_928,local_978,auStack_770 + lVar13);
                FUN_004e02c0(piVar10,piVar10,local_798 + (long)-((int)cVar7 / 2) * 0x28);
                FUN_004e02c0(local_900,auStack_720 + lVar13,local_860);
                FUN_004e02c0(local_978,local_888,auStack_748 + lVar13);
                lVar13 = 0;
                do {
                  lVar19 = lVar13 + 4;
                  *(int *)(lVar13 + (long)local_ac8) = *(int *)((long)local_978 + lVar13) * 2;
                  piVar9 = local_978;
                  lVar13 = lVar19;
                } while (lVar19 != 0x28);
                do {
                  piVar16 = piVar9 + 1;
                  *piVar9 = piVar9[0x14] - piVar9[10];
                  piVar9 = piVar16;
                } while (piVar16 != piVar10);
                do {
                  *piVar10 = *piVar10 + piVar10[10];
                  piVar10 = piVar10 + 1;
                  piVar9 = local_900;
                  piVar16 = local_ac8;
                } while (piVar10 != local_928);
                do {
                  piVar23 = piVar16 + 1;
                  piVar9[-10] = *piVar16 - *piVar9;
                  piVar9 = piVar9 + 1;
                  piVar16 = piVar23;
                  piVar10 = local_900;
                  piVar24 = local_ac8;
                } while (local_aa0 != piVar23);
                do {
                  iVar20 = *piVar24;
                  piVar24 = piVar24 + 1;
                  *piVar10 = *piVar10 + iVar20;
                  piVar10 = piVar10 + 1;
                } while (local_aa0 != piVar24);
              }
            }
            else {
              FUN_004e02c0(local_8d8,local_978,local_900);
              FUN_004e02c0(local_8b0,local_950,local_928);
              FUN_004e02c0(local_888,local_928,local_900);
              FUN_004e02c0(local_860,local_978,local_950);
              FUN_004e3af0(local_978,local_8d8,local_798 + (long)(cVar7 >> 1) * 0x28);
            }
            bVar17 = local_148[local_b18];
            if ((char)bVar17 < '\x01') {
              if (bVar17 != 0) {
                FUN_004e02c0(local_8d8,local_978,local_900);
                FUN_004e02c0(local_8b0,local_950,local_928);
                FUN_004e02c0(local_888,local_928,local_900);
                piVar10 = local_950;
                FUN_004e02c0(local_860,local_978,local_950);
                piVar9 = local_978;
                piVar16 = local_8b0;
                do {
                  piVar24 = piVar16 + -10;
                  iVar20 = *piVar16;
                  piVar23 = piVar9 + 1;
                  piVar16 = piVar16 + 1;
                  *piVar9 = *piVar24 + iVar20;
                  piVar9 = piVar23;
                } while (piVar10 != piVar23);
                piVar9 = piVar10;
                piVar16 = local_8b0;
                do {
                  iVar20 = *piVar16;
                  piVar24 = piVar16 + -10;
                  piVar23 = piVar9 + 1;
                  piVar16 = piVar16 + 1;
                  *piVar9 = iVar20 - *piVar24;
                  piVar9 = piVar23;
                } while (local_928 != piVar23);
                lVar13 = (long)-((int)(char)bVar17 / 2) * 0x78;
                FUN_004e02c0(local_928,local_978,&UNK_007f12e8 + lVar13);
                FUN_004e02c0(piVar10,piVar10,&DAT_007f12c0 + lVar13);
                FUN_004e02c0(local_900,&UNK_007f1310 + lVar13,local_860);
                lVar13 = 0;
                do {
                  lVar19 = lVar13 + 4;
                  *(int *)(lVar13 + (long)local_ac8) = *(int *)((long)local_888 + lVar13) * 2;
                  piVar9 = local_978;
                  lVar13 = lVar19;
                } while (lVar19 != 0x28);
                do {
                  piVar16 = piVar9 + 1;
                  *piVar9 = piVar9[0x14] - piVar9[10];
                  piVar9 = piVar16;
                } while (piVar10 != piVar16);
                do {
                  *piVar10 = *piVar10 + piVar10[10];
                  piVar10 = piVar10 + 1;
                  piVar9 = local_900;
                  piVar16 = local_ac8;
                } while (local_928 != piVar10);
                do {
                  piVar23 = piVar16 + 1;
                  piVar9[-10] = *piVar16 - *piVar9;
                  piVar9 = piVar9 + 1;
                  piVar16 = piVar23;
                  piVar10 = local_900;
                  piVar24 = local_ac8;
                } while (local_aa0 != piVar23);
                do {
                  iVar20 = *piVar24;
                  piVar24 = piVar24 + 1;
                  *piVar10 = *piVar10 + iVar20;
                  piVar10 = piVar10 + 1;
                } while (local_aa0 != piVar24);
              }
            }
            else {
              FUN_004e02c0(local_8d8,local_978,local_900);
              FUN_004e02c0(local_8b0,local_950,local_928);
              FUN_004e02c0(local_888,local_928,local_900);
              FUN_004e02c0(local_860,local_978,local_950);
              FUN_004e39a0(local_978,local_8d8,&DAT_007f12c0 + (long)((char)bVar17 >> 1) * 0x78);
            }
            FUN_004e02c0(local_a98,local_978,local_900);
            FUN_004e02c0(&local_a70,local_950,local_928);
            FUN_004e02c0(&local_a48,local_928,local_900);
            local_b18 = local_b18 + -1;
          } while ((int)local_b18 != -1);
LAB_004e6eaf:
          FUN_004e1200(local_148,local_a98);
          iVar20 = FUN_00422820(local_148,param_3,0x20);
          bVar27 = iVar20 == 0;
          goto LAB_004e64ba;
        }
      }
      bVar27 = false;
LAB_004e64ba:
      FUN_00406a50(lVar12);
      FUN_00406b90(lVar11);
      goto LAB_004e5d03;
    }
  }
LAB_004e5d01:
  bVar27 = false;
LAB_004e5d03:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar27;
code_r0x004e69e3:
  bVar27 = lVar13 == 0;
  lVar13 = lVar13 + -1;
  if (bVar27) goto LAB_004e6eaf;
  goto LAB_004e69ed;
}

