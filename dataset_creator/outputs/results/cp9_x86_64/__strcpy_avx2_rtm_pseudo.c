
undefined1 (*) [32] __strcpy_avx2_rtm(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 (*pauVar13) [32];
  uint uVar14;
  ulong uVar16;
  uint uVar17;
  undefined1 (*pauVar18) [32];
  ulong uVar19;
  undefined1 (*pauVar20) [32];
  bool bVar21;
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  ulong uVar15;
  
  pauVar13 = param_1;
  uVar14 = (uint)param_2;
  auVar22 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if ((uVar14 & 0x7f) < 0x41) {
    auVar23 = param_2[1];
    auVar4 = vpcmpeqb_avx2(auVar22,*param_2);
    uVar17 = (uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 |
             (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f;
    if (uVar17 == 0) {
      *param_1 = *param_2;
      auVar23 = vpcmpeqb_avx2(auVar22,auVar23);
      uVar17 = (uint)(SUB321(auVar23 >> 7,0) & 1) | (uint)(SUB321(auVar23 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar23 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar23 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar23 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar23 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar23 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar23 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar23 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar23 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar23 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar23 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar23 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar23 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar23 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar23 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar23 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar23 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar23 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar23 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar23 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar23 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar23 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar23 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar23 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar23 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar23 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar23 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar23 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar23 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar23 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar23[0x1f] >> 7) << 0x1f;
      if (uVar17 == 0) {
        uVar15 = (ulong)(uVar14 & 0x1f);
        goto LAB_00746b90;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  else {
    pauVar18 = (undefined1 (*) [32])((ulong)param_2 & 0xffffffffffffffe0);
    uVar14 = uVar14 & 0x1f;
    uVar15 = (ulong)uVar14;
    auVar23 = vpcmpeqb_avx2(auVar22,*pauVar18);
    uVar17 = ((uint)(SUB321(auVar23 >> 7,0) & 1) | (uint)(SUB321(auVar23 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar23 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar23 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar23 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar23 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar23 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar23 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar23 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar23 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar23 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar23 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar23 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar23 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar23 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar23 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar23 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar23 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar23 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar23 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar23 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar23 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar23 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar23 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar23 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar23 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar23 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar23 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar23 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar23 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar23 >> 0xf7,0) & 1) << 0x1e |
             (uint)(byte)(auVar23[0x1f] >> 7) << 0x1f) >> (sbyte)uVar14;
    uVar16 = uVar15;
    if (uVar17 == 0) {
      auVar23 = vpcmpeqb_avx2(auVar22,pauVar18[1]);
      uVar17 = (uint)(SUB321(auVar23 >> 7,0) & 1) | (uint)(SUB321(auVar23 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar23 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar23 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar23 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar23 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar23 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar23 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar23 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar23 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar23 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar23 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar23 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar23 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar23 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar23 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar23 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar23 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar23 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar23 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar23 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar23 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar23 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar23 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar23 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar23 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar23 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar23 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar23 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar23 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar23 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar23[0x1f] >> 7) << 0x1f;
      if (uVar17 != 0) {
        iVar3 = 0;
        if (uVar17 != 0) {
          for (; (uVar17 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        param_2 = (undefined1 (*) [32])(*pauVar18 + uVar15);
        uVar15 = (ulong)((iVar3 + 0x20) - uVar14);
        goto LAB_00746d79;
      }
      puVar1 = (undefined8 *)(*pauVar18 + uVar15);
      uVar2 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      *(undefined8 *)*param_1 = *puVar1;
      *(undefined8 *)(*param_1 + 8) = uVar2;
      *(undefined8 *)(*param_1 + 0x10) = uVar7;
      *(undefined8 *)(*param_1 + 0x18) = uVar8;
LAB_00746b90:
      uVar19 = (ulong)param_2 & 0xffffffffffffffe0;
      uVar2 = *(undefined8 *)(uVar19 + 0x28);
      uVar7 = *(undefined8 *)(uVar19 + 0x30);
      uVar8 = *(undefined8 *)(uVar19 + 0x38);
      *(undefined8 *)((long)param_1 + (0x20 - uVar15)) = *(undefined8 *)(uVar19 + 0x20);
      *(undefined8 *)((long)param_1 + (0x28 - uVar15)) = uVar2;
      *(undefined8 *)((long)param_1 + (0x30 - uVar15)) = uVar7;
      *(undefined8 *)((long)param_1 + (0x38 - uVar15)) = uVar8;
      auVar23 = vpcmpeqb_avx2(auVar22,*(undefined1 (*) [32])(uVar19 + 0x40));
      uVar17 = (uint)(SUB321(auVar23 >> 7,0) & 1) | (uint)(SUB321(auVar23 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar23 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar23 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar23 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar23 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar23 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar23 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar23 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar23 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar23 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar23 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar23 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar23 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar23 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar23 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar23 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar23 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar23 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar23 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar23 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar23 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar23 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar23 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar23 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar23 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar23 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar23 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar23 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar23 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar23 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar23[0x1f] >> 7) << 0x1f;
      uVar16 = 0x40;
      if (uVar17 == 0) {
        *(undefined1 (*) [32])((long)param_1 + (0x40 - uVar15)) =
             *(undefined1 (*) [32])(uVar19 + 0x40);
        auVar23 = vpcmpeqb_avx2(auVar22,*(undefined1 (*) [32])(uVar19 + 0x60));
        uVar17 = (uint)(SUB321(auVar23 >> 7,0) & 1) | (uint)(SUB321(auVar23 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar23 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar23 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar23 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar23 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar23 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar23 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar23 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar23 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar23 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar23 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar23 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar23 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar23 >> 0x77,0) & 1) << 0xe |
                 (uint)SUB321(auVar23 >> 0x7f,0) << 0xf |
                 (uint)(SUB321(auVar23 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar23 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar23 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar23 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar23 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar23 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar23 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar23 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar23 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar23 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar23 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar23 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar23 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar23 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar23 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar23[0x1f] >> 7) << 0x1f;
        uVar16 = 0x60;
        if (uVar17 == 0) {
          *(undefined1 (*) [32])((long)param_1 + (0x60 - uVar15)) =
               *(undefined1 (*) [32])(uVar19 + 0x60);
          auVar23 = vpcmpeqb_avx2(auVar22,*(undefined1 (*) [32])(uVar19 + 0x80));
          uVar17 = (uint)(SUB321(auVar23 >> 7,0) & 1) | (uint)(SUB321(auVar23 >> 0xf,0) & 1) << 1 |
                   (uint)(SUB321(auVar23 >> 0x17,0) & 1) << 2 |
                   (uint)(SUB321(auVar23 >> 0x1f,0) & 1) << 3 |
                   (uint)(SUB321(auVar23 >> 0x27,0) & 1) << 4 |
                   (uint)(SUB321(auVar23 >> 0x2f,0) & 1) << 5 |
                   (uint)(SUB321(auVar23 >> 0x37,0) & 1) << 6 |
                   (uint)(SUB321(auVar23 >> 0x3f,0) & 1) << 7 |
                   (uint)(SUB321(auVar23 >> 0x47,0) & 1) << 8 |
                   (uint)(SUB321(auVar23 >> 0x4f,0) & 1) << 9 |
                   (uint)(SUB321(auVar23 >> 0x57,0) & 1) << 10 |
                   (uint)(SUB321(auVar23 >> 0x5f,0) & 1) << 0xb |
                   (uint)(SUB321(auVar23 >> 0x67,0) & 1) << 0xc |
                   (uint)(SUB321(auVar23 >> 0x6f,0) & 1) << 0xd |
                   (uint)(SUB321(auVar23 >> 0x77,0) & 1) << 0xe |
                   (uint)SUB321(auVar23 >> 0x7f,0) << 0xf |
                   (uint)(SUB321(auVar23 >> 0x87,0) & 1) << 0x10 |
                   (uint)(SUB321(auVar23 >> 0x8f,0) & 1) << 0x11 |
                   (uint)(SUB321(auVar23 >> 0x97,0) & 1) << 0x12 |
                   (uint)(SUB321(auVar23 >> 0x9f,0) & 1) << 0x13 |
                   (uint)(SUB321(auVar23 >> 0xa7,0) & 1) << 0x14 |
                   (uint)(SUB321(auVar23 >> 0xaf,0) & 1) << 0x15 |
                   (uint)(SUB321(auVar23 >> 0xb7,0) & 1) << 0x16 |
                   (uint)SUB321(auVar23 >> 0xbf,0) << 0x17 |
                   (uint)(SUB321(auVar23 >> 199,0) & 1) << 0x18 |
                   (uint)(SUB321(auVar23 >> 0xcf,0) & 1) << 0x19 |
                   (uint)(SUB321(auVar23 >> 0xd7,0) & 1) << 0x1a |
                   (uint)(SUB321(auVar23 >> 0xdf,0) & 1) << 0x1b |
                   (uint)(SUB321(auVar23 >> 0xe7,0) & 1) << 0x1c |
                   (uint)(SUB321(auVar23 >> 0xef,0) & 1) << 0x1d |
                   (uint)(SUB321(auVar23 >> 0xf7,0) & 1) << 0x1e |
                   (uint)(byte)(auVar23[0x1f] >> 7) << 0x1f;
          uVar16 = 0x80;
          if (uVar17 == 0) {
            *(undefined1 (*) [32])((long)param_1 + (0x80 - uVar15)) =
                 *(undefined1 (*) [32])(uVar19 + 0x80);
            auVar23 = vpcmpeqb_avx2(auVar22,*(undefined1 (*) [32])(uVar19 + 0xa0));
            uVar17 = (uint)(SUB321(auVar23 >> 7,0) & 1) | (uint)(SUB321(auVar23 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar23 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar23 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar23 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar23 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar23 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar23 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar23 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar23 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar23 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar23 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar23 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar23 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar23 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar23 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar23 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar23 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar23 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar23 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar23 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar23 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar23 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar23 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar23 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar23 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar23 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar23 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar23 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar23 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar23 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar23[0x1f] >> 7) << 0x1f;
            uVar16 = 0xa0;
            if (uVar17 == 0) {
              *(undefined1 (*) [32])((long)param_1 + (0xa0 - uVar15)) =
                   *(undefined1 (*) [32])(uVar19 + 0xa0);
              auVar23 = vpcmpeqb_avx2(auVar22,*(undefined1 (*) [32])(uVar19 + 0xc0));
              uVar17 = (uint)(SUB321(auVar23 >> 7,0) & 1) |
                       (uint)(SUB321(auVar23 >> 0xf,0) & 1) << 1 |
                       (uint)(SUB321(auVar23 >> 0x17,0) & 1) << 2 |
                       (uint)(SUB321(auVar23 >> 0x1f,0) & 1) << 3 |
                       (uint)(SUB321(auVar23 >> 0x27,0) & 1) << 4 |
                       (uint)(SUB321(auVar23 >> 0x2f,0) & 1) << 5 |
                       (uint)(SUB321(auVar23 >> 0x37,0) & 1) << 6 |
                       (uint)(SUB321(auVar23 >> 0x3f,0) & 1) << 7 |
                       (uint)(SUB321(auVar23 >> 0x47,0) & 1) << 8 |
                       (uint)(SUB321(auVar23 >> 0x4f,0) & 1) << 9 |
                       (uint)(SUB321(auVar23 >> 0x57,0) & 1) << 10 |
                       (uint)(SUB321(auVar23 >> 0x5f,0) & 1) << 0xb |
                       (uint)(SUB321(auVar23 >> 0x67,0) & 1) << 0xc |
                       (uint)(SUB321(auVar23 >> 0x6f,0) & 1) << 0xd |
                       (uint)(SUB321(auVar23 >> 0x77,0) & 1) << 0xe |
                       (uint)SUB321(auVar23 >> 0x7f,0) << 0xf |
                       (uint)(SUB321(auVar23 >> 0x87,0) & 1) << 0x10 |
                       (uint)(SUB321(auVar23 >> 0x8f,0) & 1) << 0x11 |
                       (uint)(SUB321(auVar23 >> 0x97,0) & 1) << 0x12 |
                       (uint)(SUB321(auVar23 >> 0x9f,0) & 1) << 0x13 |
                       (uint)(SUB321(auVar23 >> 0xa7,0) & 1) << 0x14 |
                       (uint)(SUB321(auVar23 >> 0xaf,0) & 1) << 0x15 |
                       (uint)(SUB321(auVar23 >> 0xb7,0) & 1) << 0x16 |
                       (uint)SUB321(auVar23 >> 0xbf,0) << 0x17 |
                       (uint)(SUB321(auVar23 >> 199,0) & 1) << 0x18 |
                       (uint)(SUB321(auVar23 >> 0xcf,0) & 1) << 0x19 |
                       (uint)(SUB321(auVar23 >> 0xd7,0) & 1) << 0x1a |
                       (uint)(SUB321(auVar23 >> 0xdf,0) & 1) << 0x1b |
                       (uint)(SUB321(auVar23 >> 0xe7,0) & 1) << 0x1c |
                       (uint)(SUB321(auVar23 >> 0xef,0) & 1) << 0x1d |
                       (uint)(SUB321(auVar23 >> 0xf7,0) & 1) << 0x1e |
                       (uint)(byte)(auVar23[0x1f] >> 7) << 0x1f;
              uVar16 = 0xc0;
              if (uVar17 == 0) {
                auVar23 = *(undefined1 (*) [32])(uVar19 + 0xe0);
                *(undefined1 (*) [32])((long)param_1 + (0xc0 - uVar15)) =
                     *(undefined1 (*) [32])(uVar19 + 0xc0);
                auVar4 = vpcmpeqb_avx2(auVar22,auVar23);
                uVar17 = (uint)(SUB321(auVar4 >> 7,0) & 1) |
                         (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                         (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                         (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                         (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                         (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                         (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                         (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                         (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                         (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                         (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                         (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                         (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                         (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                         (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe |
                         (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
                         (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                         (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                         (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                         (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                         (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                         (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                         (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                         (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 |
                         (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
                         (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                         (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                         (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                         (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                         (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                         (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
                         (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f;
                uVar16 = 0xe0;
                if (uVar17 == 0) {
                  *(undefined1 (*) [32])((long)param_1 + (0xe0 - uVar15)) = auVar23;
                  param_2 = (undefined1 (*) [32])(uVar19 + 0x100 & 0xffffffffffffff80);
                  param_1 = (undefined1 (*) [32])
                            ((long)param_1 + (-(uVar19 - (long)param_2) - uVar15));
                  auVar23 = *param_2;
                  auVar24 = param_2[1];
                  auVar25 = param_2[2];
                  auVar26 = param_2[3];
                  auVar5 = vpminub_avx2(auVar23,auVar24);
                  auVar6 = vpminub_avx2(auVar25,auVar26);
                  auVar5 = vpminub_avx2(auVar6,auVar5);
                  auVar5 = vpcmpeqb_avx2(auVar5,auVar4);
                  pauVar18 = param_2;
                  pauVar20 = param_1;
                  if ((((((((((((((((((((((((((((((((auVar5 >> 7 & (undefined1  [32])0x1) ==
                                                    (undefined1  [32])0x0 &&
                                                   (auVar5 >> 0xf & (undefined1  [32])0x1) ==
                                                   (undefined1  [32])0x0) &&
                                                  (auVar5 >> 0x17 & (undefined1  [32])0x1) ==
                                                  (undefined1  [32])0x0) &&
                                                 (auVar5 >> 0x1f & (undefined1  [32])0x1) ==
                                                 (undefined1  [32])0x0) &&
                                                (auVar5 >> 0x27 & (undefined1  [32])0x1) ==
                                                (undefined1  [32])0x0) &&
                                               (auVar5 >> 0x2f & (undefined1  [32])0x1) ==
                                               (undefined1  [32])0x0) &&
                                              (auVar5 >> 0x37 & (undefined1  [32])0x1) ==
                                              (undefined1  [32])0x0) &&
                                             (auVar5 >> 0x3f & (undefined1  [32])0x1) ==
                                             (undefined1  [32])0x0) &&
                                            (auVar5 >> 0x47 & (undefined1  [32])0x1) ==
                                            (undefined1  [32])0x0) &&
                                           (auVar5 >> 0x4f & (undefined1  [32])0x1) ==
                                           (undefined1  [32])0x0) &&
                                          (auVar5 >> 0x57 & (undefined1  [32])0x1) ==
                                          (undefined1  [32])0x0) &&
                                         (auVar5 >> 0x5f & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0) &&
                                        (auVar5 >> 0x67 & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar5 >> 0x6f & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar5 >> 0x77 & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) && SUB321(auVar5 >> 0x7f,0) == '\0') &&
                                    (auVar5 >> 0x87 & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                                   (auVar5 >> 0x8f & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                   ) && (auVar5 >> 0x97 & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                 (auVar5 >> 0x9f & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                                && (auVar5 >> 0xa7 & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                ) && (auVar5 >> 0xaf & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                              (auVar5 >> 0xb7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                             SUB321(auVar5 >> 0xbf,0) == '\0') &&
                            (auVar5 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                           (auVar5 >> 0xcf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                          (auVar5 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                         (auVar5 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                        (auVar5 >> 0xe7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                       (auVar5 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      (auVar5 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      -1 < auVar5[0x1f]) {
                    do {
                      param_1 = pauVar20 + 4;
                      param_2 = pauVar18 + 4;
                      *pauVar20 = auVar23;
                      auVar23 = *param_2;
                      pauVar20[1] = auVar24;
                      auVar24 = pauVar18[5];
                      auVar5 = vpminub_avx2(auVar23,auVar24);
                      pauVar20[2] = auVar25;
                      auVar25 = pauVar18[6];
                      pauVar20[3] = auVar26;
                      auVar26 = pauVar18[7];
                      auVar6 = vpminub_avx2(auVar25,auVar26);
                      auVar5 = vpminub_avx2(auVar6,auVar5);
                      auVar5 = vpcmpeqb_avx2(auVar5,auVar4);
                      pauVar18 = param_2;
                      pauVar20 = param_1;
                    } while ((((((((((((((((((((((((((((((((auVar5 >> 7 & (undefined1  [32])0x1) ==
                                                           (undefined1  [32])0x0 &&
                                                          (auVar5 >> 0xf & (undefined1  [32])0x1) ==
                                                          (undefined1  [32])0x0) &&
                                                         (auVar5 >> 0x17 & (undefined1  [32])0x1) ==
                                                         (undefined1  [32])0x0) &&
                                                        (auVar5 >> 0x1f & (undefined1  [32])0x1) ==
                                                        (undefined1  [32])0x0) &&
                                                       (auVar5 >> 0x27 & (undefined1  [32])0x1) ==
                                                       (undefined1  [32])0x0) &&
                                                      (auVar5 >> 0x2f & (undefined1  [32])0x1) ==
                                                      (undefined1  [32])0x0) &&
                                                     (auVar5 >> 0x37 & (undefined1  [32])0x1) ==
                                                     (undefined1  [32])0x0) &&
                                                    (auVar5 >> 0x3f & (undefined1  [32])0x1) ==
                                                    (undefined1  [32])0x0) &&
                                                   (auVar5 >> 0x47 & (undefined1  [32])0x1) ==
                                                   (undefined1  [32])0x0) &&
                                                  (auVar5 >> 0x4f & (undefined1  [32])0x1) ==
                                                  (undefined1  [32])0x0) &&
                                                 (auVar5 >> 0x57 & (undefined1  [32])0x1) ==
                                                 (undefined1  [32])0x0) &&
                                                (auVar5 >> 0x5f & (undefined1  [32])0x1) ==
                                                (undefined1  [32])0x0) &&
                                               (auVar5 >> 0x67 & (undefined1  [32])0x1) ==
                                               (undefined1  [32])0x0) &&
                                              (auVar5 >> 0x6f & (undefined1  [32])0x1) ==
                                              (undefined1  [32])0x0) &&
                                             (auVar5 >> 0x77 & (undefined1  [32])0x1) ==
                                             (undefined1  [32])0x0) &&
                                            SUB321(auVar5 >> 0x7f,0) == '\0') &&
                                           (auVar5 >> 0x87 & (undefined1  [32])0x1) ==
                                           (undefined1  [32])0x0) &&
                                          (auVar5 >> 0x8f & (undefined1  [32])0x1) ==
                                          (undefined1  [32])0x0) &&
                                         (auVar5 >> 0x97 & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0) &&
                                        (auVar5 >> 0x9f & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar5 >> 0xa7 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar5 >> 0xaf & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) &&
                                     (auVar5 >> 0xb7 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) && SUB321(auVar5 >> 0xbf,0) == '\0') &&
                                   (auVar5 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                                  && (auVar5 >> 0xcf & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                                 (auVar5 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                                && (auVar5 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                ) && (auVar5 >> 0xe7 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                              (auVar5 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                             (auVar5 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                             -1 < auVar5[0x1f]);
                  }
                  auVar4 = vpcmpeqb_avx2(auVar22,auVar23);
                  uVar14 = (uint)(SUB321(auVar4 >> 7,0) & 1) |
                           (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                           (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                           (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                           (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                           (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                           (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                           (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                           (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                           (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                           (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                           (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                           (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                           (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                           (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe |
                           (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
                           (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                           (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                           (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                           (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                           (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                           (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                           (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                           (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 |
                           (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
                           (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                           (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                           (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                           (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                           (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                           (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
                           (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f;
                  if (uVar14 == 0) {
                    auVar4 = vpcmpeqb_avx2(auVar22,auVar24);
                    uVar14 = (uint)(SUB321(auVar4 >> 7,0) & 1) |
                             (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                             (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                             (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                             (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                             (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                             (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                             (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                             (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                             (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                             (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                             (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                             (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                             (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                             (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe |
                             (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
                             (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                             (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                             (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                             (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                             (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                             (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                             (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                             (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 |
                             (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
                             (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                             (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                             (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                             (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                             (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                             (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
                             (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f;
                    if (uVar14 == 0) {
                      auVar4 = vpcmpeqb_avx2(auVar22,auVar25);
                      uVar14 = (uint)(SUB321(auVar4 >> 7,0) & 1) |
                               (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                               (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                               (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                               (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                               (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                               (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                               (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                               (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                               (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                               (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                               (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                               (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                               (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                               (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe |
                               (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
                               (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                               (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                               (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                               (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                               (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                               (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                               (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                               (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 |
                               (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
                               (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                               (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                               (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                               (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                               (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                               (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
                               (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f;
                      if (uVar14 == 0) {
                        auVar22 = vpcmpeqb_avx2(auVar22,auVar26);
                        uVar17 = (uint)(SUB321(auVar22 >> 7,0) & 1) |
                                 (uint)(SUB321(auVar22 >> 0xf,0) & 1) << 1 |
                                 (uint)(SUB321(auVar22 >> 0x17,0) & 1) << 2 |
                                 (uint)(SUB321(auVar22 >> 0x1f,0) & 1) << 3 |
                                 (uint)(SUB321(auVar22 >> 0x27,0) & 1) << 4 |
                                 (uint)(SUB321(auVar22 >> 0x2f,0) & 1) << 5 |
                                 (uint)(SUB321(auVar22 >> 0x37,0) & 1) << 6 |
                                 (uint)(SUB321(auVar22 >> 0x3f,0) & 1) << 7 |
                                 (uint)(SUB321(auVar22 >> 0x47,0) & 1) << 8 |
                                 (uint)(SUB321(auVar22 >> 0x4f,0) & 1) << 9 |
                                 (uint)(SUB321(auVar22 >> 0x57,0) & 1) << 10 |
                                 (uint)(SUB321(auVar22 >> 0x5f,0) & 1) << 0xb |
                                 (uint)(SUB321(auVar22 >> 0x67,0) & 1) << 0xc |
                                 (uint)(SUB321(auVar22 >> 0x6f,0) & 1) << 0xd |
                                 (uint)(SUB321(auVar22 >> 0x77,0) & 1) << 0xe |
                                 (uint)SUB321(auVar22 >> 0x7f,0) << 0xf |
                                 (uint)(SUB321(auVar22 >> 0x87,0) & 1) << 0x10 |
                                 (uint)(SUB321(auVar22 >> 0x8f,0) & 1) << 0x11 |
                                 (uint)(SUB321(auVar22 >> 0x97,0) & 1) << 0x12 |
                                 (uint)(SUB321(auVar22 >> 0x9f,0) & 1) << 0x13 |
                                 (uint)(SUB321(auVar22 >> 0xa7,0) & 1) << 0x14 |
                                 (uint)(SUB321(auVar22 >> 0xaf,0) & 1) << 0x15 |
                                 (uint)(SUB321(auVar22 >> 0xb7,0) & 1) << 0x16 |
                                 (uint)SUB321(auVar22 >> 0xbf,0) << 0x17 |
                                 (uint)(SUB321(auVar22 >> 199,0) & 1) << 0x18 |
                                 (uint)(SUB321(auVar22 >> 0xcf,0) & 1) << 0x19 |
                                 (uint)(SUB321(auVar22 >> 0xd7,0) & 1) << 0x1a |
                                 (uint)(SUB321(auVar22 >> 0xdf,0) & 1) << 0x1b |
                                 (uint)(SUB321(auVar22 >> 0xe7,0) & 1) << 0x1c |
                                 (uint)(SUB321(auVar22 >> 0xef,0) & 1) << 0x1d |
                                 (uint)(SUB321(auVar22 >> 0xf7,0) & 1) << 0x1e |
                                 (uint)(byte)(auVar22[0x1f] >> 7) << 0x1f;
                        uVar14 = 0;
                        if (uVar17 != 0) {
                          for (; (uVar17 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
                          }
                        }
                        uVar15 = (ulong)uVar14;
                        *param_1 = auVar23;
                        param_1[1] = auVar24;
                        param_1[2] = auVar25;
                        param_2 = param_2 + 3;
                        param_1 = param_1 + 3;
                      }
                      else {
                        uVar17 = 0;
                        if (uVar14 != 0) {
                          for (; (uVar14 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                          }
                        }
                        uVar15 = (ulong)uVar17;
                        *param_1 = auVar23;
                        param_1[1] = auVar24;
                        param_2 = param_2 + 2;
                        param_1 = param_1 + 2;
                      }
                    }
                    else {
                      uVar17 = 0;
                      if (uVar14 != 0) {
                        for (; (uVar14 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                        }
                      }
                      uVar15 = (ulong)uVar17;
                      *param_1 = auVar23;
                      param_2 = param_2 + 1;
                      param_1 = param_1 + 1;
                    }
                  }
                  else {
                    uVar17 = 0;
                    if (uVar14 != 0) {
                      for (; (uVar14 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                      }
                    }
                    uVar15 = (ulong)uVar17;
                  }
                  goto LAB_00746d79;
                }
              }
            }
          }
        }
      }
      param_1 = (undefined1 (*) [32])((long)param_1 + (uVar16 - uVar15));
    }
    param_2 = (undefined1 (*) [32])(((ulong)param_2 & 0xffffffffffffffe0) + uVar16);
  }
  uVar14 = 0;
  if (uVar17 != 0) {
    for (; (uVar17 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
    }
  }
  uVar15 = (ulong)uVar14;
LAB_00746d79:
  uVar14 = (uint)uVar15;
  if (uVar14 < 0x20) {
    if (uVar14 < 0x10) {
      if (uVar14 < 8) {
        if (uVar14 < 4) {
          if (uVar14 == 3) {
            *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
          }
          else if (uVar14 < 2) {
            if (uVar14 == 1) {
              *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
            }
            else {
              (*param_1)[0] = 0;
            }
          }
          else {
            *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
            (*param_1)[2] = 0;
          }
        }
        else {
          *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
          *(undefined4 *)(param_1[-1] + uVar15 + 0x1d) =
               *(undefined4 *)(param_2[-1] + uVar15 + 0x1d);
        }
      }
      else {
        uVar2 = *(undefined8 *)(param_2[-1] + uVar15 + 0x19);
        *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
        *(undefined8 *)(param_1[-1] + uVar15 + 0x19) = uVar2;
      }
    }
    else {
      uVar2 = *(undefined8 *)(*param_2 + 8);
      uVar7 = *(undefined8 *)(param_2[-1] + uVar15 + 0x11);
      uVar8 = *(undefined8 *)((long)(param_2[-1] + uVar15 + 0x11) + 8);
      *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
      *(undefined8 *)(*param_1 + 8) = uVar2;
      *(undefined8 *)(param_1[-1] + uVar15 + 0x11) = uVar7;
      *(undefined8 *)((long)(param_1[-1] + uVar15 + 0x11) + 8) = uVar8;
    }
  }
  else {
    uVar2 = *(undefined8 *)(*param_2 + 8);
    uVar7 = *(undefined8 *)(*param_2 + 0x10);
    uVar8 = *(undefined8 *)(*param_2 + 0x18);
    puVar1 = (undefined8 *)(param_2[-1] + uVar15 + 1);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    uVar11 = puVar1[2];
    uVar12 = puVar1[3];
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined8 *)(*param_1 + 8) = uVar2;
    *(undefined8 *)(*param_1 + 0x10) = uVar7;
    *(undefined8 *)(*param_1 + 0x18) = uVar8;
    puVar1 = (undefined8 *)(param_1[-1] + uVar15 + 1);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    puVar1[2] = uVar11;
    puVar1[3] = uVar12;
  }
  bVar21 = (bool)xtest();
  if (!bVar21) {
    return pauVar13;
  }
  return pauVar13;
}

