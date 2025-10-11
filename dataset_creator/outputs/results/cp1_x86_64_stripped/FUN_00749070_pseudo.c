
undefined1 (*) [32] FUN_00749070(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

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
  uint uVar13;
  ulong uVar15;
  uint uVar16;
  undefined1 (*pauVar17) [32];
  ulong uVar18;
  undefined1 (*pauVar19) [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  ulong uVar14;
  
  uVar13 = (uint)param_2;
  auVar20 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if ((uVar13 & 0x7f) < 0x41) {
    auVar21 = param_2[1];
    auVar4 = vpcmpeqb_avx2(auVar20,*param_2);
    uVar16 = (uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
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
    if (uVar16 == 0) {
      *param_1 = *param_2;
      auVar21 = vpcmpeqb_avx2(auVar20,auVar21);
      uVar16 = (uint)(SUB321(auVar21 >> 7,0) & 1) | (uint)(SUB321(auVar21 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar21 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar21 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar21 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar21 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar21 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar21 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar21 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar21 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar21 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar21 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar21 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar21 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar21 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar21 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar21 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar21 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar21 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar21 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar21 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar21 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar21 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar21 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar21 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar21 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar21 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar21 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar21 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar21 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar21 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar21[0x1f] >> 7) << 0x1f;
      if (uVar16 == 0) {
        uVar14 = (ulong)(uVar13 & 0x1f);
        goto LAB_007490c0;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  else {
    pauVar17 = (undefined1 (*) [32])((ulong)param_2 & 0xffffffffffffffe0);
    uVar13 = uVar13 & 0x1f;
    uVar14 = (ulong)uVar13;
    auVar21 = vpcmpeqb_avx2(auVar20,*pauVar17);
    uVar16 = ((uint)(SUB321(auVar21 >> 7,0) & 1) | (uint)(SUB321(auVar21 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar21 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar21 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar21 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar21 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar21 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar21 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar21 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar21 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar21 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar21 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar21 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar21 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar21 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar21 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar21 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar21 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar21 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar21 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar21 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar21 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar21 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar21 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar21 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar21 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar21 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar21 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar21 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar21 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar21 >> 0xf7,0) & 1) << 0x1e |
             (uint)(byte)(auVar21[0x1f] >> 7) << 0x1f) >> (sbyte)uVar13;
    uVar15 = uVar14;
    if (uVar16 == 0) {
      auVar21 = vpcmpeqb_avx2(auVar20,pauVar17[1]);
      uVar16 = (uint)(SUB321(auVar21 >> 7,0) & 1) | (uint)(SUB321(auVar21 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar21 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar21 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar21 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar21 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar21 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar21 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar21 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar21 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar21 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar21 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar21 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar21 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar21 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar21 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar21 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar21 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar21 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar21 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar21 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar21 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar21 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar21 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar21 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar21 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar21 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar21 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar21 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar21 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar21 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar21[0x1f] >> 7) << 0x1f;
      if (uVar16 != 0) {
        iVar3 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        param_2 = (undefined1 (*) [32])(*pauVar17 + uVar14);
        uVar14 = (ulong)((iVar3 + 0x20) - uVar13);
        goto LAB_007492a9;
      }
      puVar1 = (undefined8 *)(*pauVar17 + uVar14);
      uVar2 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      *(undefined8 *)*param_1 = *puVar1;
      *(undefined8 *)(*param_1 + 8) = uVar2;
      *(undefined8 *)(*param_1 + 0x10) = uVar7;
      *(undefined8 *)(*param_1 + 0x18) = uVar8;
LAB_007490c0:
      uVar18 = (ulong)param_2 & 0xffffffffffffffe0;
      uVar2 = *(undefined8 *)(uVar18 + 0x28);
      uVar7 = *(undefined8 *)(uVar18 + 0x30);
      uVar8 = *(undefined8 *)(uVar18 + 0x38);
      *(undefined8 *)((long)param_1 + (0x20 - uVar14)) = *(undefined8 *)(uVar18 + 0x20);
      *(undefined8 *)((long)param_1 + (0x28 - uVar14)) = uVar2;
      *(undefined8 *)((long)param_1 + (0x30 - uVar14)) = uVar7;
      *(undefined8 *)((long)param_1 + (0x38 - uVar14)) = uVar8;
      auVar21 = vpcmpeqb_avx2(auVar20,*(undefined1 (*) [32])(uVar18 + 0x40));
      uVar16 = (uint)(SUB321(auVar21 >> 7,0) & 1) | (uint)(SUB321(auVar21 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar21 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar21 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar21 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar21 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar21 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar21 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar21 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar21 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar21 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar21 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar21 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar21 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar21 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar21 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar21 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar21 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar21 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar21 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar21 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar21 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar21 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar21 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar21 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar21 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar21 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar21 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar21 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar21 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar21 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar21[0x1f] >> 7) << 0x1f;
      uVar15 = 0x40;
      if (uVar16 == 0) {
        *(undefined1 (*) [32])((long)param_1 + (0x40 - uVar14)) =
             *(undefined1 (*) [32])(uVar18 + 0x40);
        auVar21 = vpcmpeqb_avx2(auVar20,*(undefined1 (*) [32])(uVar18 + 0x60));
        uVar16 = (uint)(SUB321(auVar21 >> 7,0) & 1) | (uint)(SUB321(auVar21 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar21 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar21 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar21 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar21 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar21 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar21 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar21 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar21 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar21 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar21 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar21 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar21 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar21 >> 0x77,0) & 1) << 0xe |
                 (uint)SUB321(auVar21 >> 0x7f,0) << 0xf |
                 (uint)(SUB321(auVar21 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar21 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar21 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar21 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar21 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar21 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar21 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar21 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar21 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar21 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar21 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar21 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar21 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar21 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar21 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar21[0x1f] >> 7) << 0x1f;
        uVar15 = 0x60;
        if (uVar16 == 0) {
          *(undefined1 (*) [32])((long)param_1 + (0x60 - uVar14)) =
               *(undefined1 (*) [32])(uVar18 + 0x60);
          auVar21 = vpcmpeqb_avx2(auVar20,*(undefined1 (*) [32])(uVar18 + 0x80));
          uVar16 = (uint)(SUB321(auVar21 >> 7,0) & 1) | (uint)(SUB321(auVar21 >> 0xf,0) & 1) << 1 |
                   (uint)(SUB321(auVar21 >> 0x17,0) & 1) << 2 |
                   (uint)(SUB321(auVar21 >> 0x1f,0) & 1) << 3 |
                   (uint)(SUB321(auVar21 >> 0x27,0) & 1) << 4 |
                   (uint)(SUB321(auVar21 >> 0x2f,0) & 1) << 5 |
                   (uint)(SUB321(auVar21 >> 0x37,0) & 1) << 6 |
                   (uint)(SUB321(auVar21 >> 0x3f,0) & 1) << 7 |
                   (uint)(SUB321(auVar21 >> 0x47,0) & 1) << 8 |
                   (uint)(SUB321(auVar21 >> 0x4f,0) & 1) << 9 |
                   (uint)(SUB321(auVar21 >> 0x57,0) & 1) << 10 |
                   (uint)(SUB321(auVar21 >> 0x5f,0) & 1) << 0xb |
                   (uint)(SUB321(auVar21 >> 0x67,0) & 1) << 0xc |
                   (uint)(SUB321(auVar21 >> 0x6f,0) & 1) << 0xd |
                   (uint)(SUB321(auVar21 >> 0x77,0) & 1) << 0xe |
                   (uint)SUB321(auVar21 >> 0x7f,0) << 0xf |
                   (uint)(SUB321(auVar21 >> 0x87,0) & 1) << 0x10 |
                   (uint)(SUB321(auVar21 >> 0x8f,0) & 1) << 0x11 |
                   (uint)(SUB321(auVar21 >> 0x97,0) & 1) << 0x12 |
                   (uint)(SUB321(auVar21 >> 0x9f,0) & 1) << 0x13 |
                   (uint)(SUB321(auVar21 >> 0xa7,0) & 1) << 0x14 |
                   (uint)(SUB321(auVar21 >> 0xaf,0) & 1) << 0x15 |
                   (uint)(SUB321(auVar21 >> 0xb7,0) & 1) << 0x16 |
                   (uint)SUB321(auVar21 >> 0xbf,0) << 0x17 |
                   (uint)(SUB321(auVar21 >> 199,0) & 1) << 0x18 |
                   (uint)(SUB321(auVar21 >> 0xcf,0) & 1) << 0x19 |
                   (uint)(SUB321(auVar21 >> 0xd7,0) & 1) << 0x1a |
                   (uint)(SUB321(auVar21 >> 0xdf,0) & 1) << 0x1b |
                   (uint)(SUB321(auVar21 >> 0xe7,0) & 1) << 0x1c |
                   (uint)(SUB321(auVar21 >> 0xef,0) & 1) << 0x1d |
                   (uint)(SUB321(auVar21 >> 0xf7,0) & 1) << 0x1e |
                   (uint)(byte)(auVar21[0x1f] >> 7) << 0x1f;
          uVar15 = 0x80;
          if (uVar16 == 0) {
            *(undefined1 (*) [32])((long)param_1 + (0x80 - uVar14)) =
                 *(undefined1 (*) [32])(uVar18 + 0x80);
            auVar21 = vpcmpeqb_avx2(auVar20,*(undefined1 (*) [32])(uVar18 + 0xa0));
            uVar16 = (uint)(SUB321(auVar21 >> 7,0) & 1) | (uint)(SUB321(auVar21 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar21 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar21 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar21 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar21 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar21 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar21 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar21 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar21 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar21 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar21 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar21 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar21 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar21 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar21 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar21 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar21 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar21 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar21 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar21 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar21 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar21 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar21 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar21 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar21 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar21 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar21 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar21 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar21 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar21 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar21[0x1f] >> 7) << 0x1f;
            uVar15 = 0xa0;
            if (uVar16 == 0) {
              *(undefined1 (*) [32])((long)param_1 + (0xa0 - uVar14)) =
                   *(undefined1 (*) [32])(uVar18 + 0xa0);
              auVar21 = vpcmpeqb_avx2(auVar20,*(undefined1 (*) [32])(uVar18 + 0xc0));
              uVar16 = (uint)(SUB321(auVar21 >> 7,0) & 1) |
                       (uint)(SUB321(auVar21 >> 0xf,0) & 1) << 1 |
                       (uint)(SUB321(auVar21 >> 0x17,0) & 1) << 2 |
                       (uint)(SUB321(auVar21 >> 0x1f,0) & 1) << 3 |
                       (uint)(SUB321(auVar21 >> 0x27,0) & 1) << 4 |
                       (uint)(SUB321(auVar21 >> 0x2f,0) & 1) << 5 |
                       (uint)(SUB321(auVar21 >> 0x37,0) & 1) << 6 |
                       (uint)(SUB321(auVar21 >> 0x3f,0) & 1) << 7 |
                       (uint)(SUB321(auVar21 >> 0x47,0) & 1) << 8 |
                       (uint)(SUB321(auVar21 >> 0x4f,0) & 1) << 9 |
                       (uint)(SUB321(auVar21 >> 0x57,0) & 1) << 10 |
                       (uint)(SUB321(auVar21 >> 0x5f,0) & 1) << 0xb |
                       (uint)(SUB321(auVar21 >> 0x67,0) & 1) << 0xc |
                       (uint)(SUB321(auVar21 >> 0x6f,0) & 1) << 0xd |
                       (uint)(SUB321(auVar21 >> 0x77,0) & 1) << 0xe |
                       (uint)SUB321(auVar21 >> 0x7f,0) << 0xf |
                       (uint)(SUB321(auVar21 >> 0x87,0) & 1) << 0x10 |
                       (uint)(SUB321(auVar21 >> 0x8f,0) & 1) << 0x11 |
                       (uint)(SUB321(auVar21 >> 0x97,0) & 1) << 0x12 |
                       (uint)(SUB321(auVar21 >> 0x9f,0) & 1) << 0x13 |
                       (uint)(SUB321(auVar21 >> 0xa7,0) & 1) << 0x14 |
                       (uint)(SUB321(auVar21 >> 0xaf,0) & 1) << 0x15 |
                       (uint)(SUB321(auVar21 >> 0xb7,0) & 1) << 0x16 |
                       (uint)SUB321(auVar21 >> 0xbf,0) << 0x17 |
                       (uint)(SUB321(auVar21 >> 199,0) & 1) << 0x18 |
                       (uint)(SUB321(auVar21 >> 0xcf,0) & 1) << 0x19 |
                       (uint)(SUB321(auVar21 >> 0xd7,0) & 1) << 0x1a |
                       (uint)(SUB321(auVar21 >> 0xdf,0) & 1) << 0x1b |
                       (uint)(SUB321(auVar21 >> 0xe7,0) & 1) << 0x1c |
                       (uint)(SUB321(auVar21 >> 0xef,0) & 1) << 0x1d |
                       (uint)(SUB321(auVar21 >> 0xf7,0) & 1) << 0x1e |
                       (uint)(byte)(auVar21[0x1f] >> 7) << 0x1f;
              uVar15 = 0xc0;
              if (uVar16 == 0) {
                auVar21 = *(undefined1 (*) [32])(uVar18 + 0xe0);
                *(undefined1 (*) [32])((long)param_1 + (0xc0 - uVar14)) =
                     *(undefined1 (*) [32])(uVar18 + 0xc0);
                auVar4 = vpcmpeqb_avx2(auVar20,auVar21);
                uVar16 = (uint)(SUB321(auVar4 >> 7,0) & 1) |
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
                uVar15 = 0xe0;
                if (uVar16 == 0) {
                  *(undefined1 (*) [32])((long)param_1 + (0xe0 - uVar14)) = auVar21;
                  param_2 = (undefined1 (*) [32])(uVar18 + 0x100 & 0xffffffffffffff80);
                  param_1 = (undefined1 (*) [32])
                            ((long)param_1 + (-(uVar18 - (long)param_2) - uVar14));
                  auVar21 = *param_2;
                  auVar22 = param_2[1];
                  auVar23 = param_2[2];
                  auVar24 = param_2[3];
                  auVar5 = vpminub_avx2(auVar21,auVar22);
                  auVar6 = vpminub_avx2(auVar23,auVar24);
                  auVar5 = vpminub_avx2(auVar6,auVar5);
                  auVar5 = vpcmpeqb_avx2(auVar5,auVar4);
                  pauVar17 = param_2;
                  pauVar19 = param_1;
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
                      param_1 = pauVar19 + 4;
                      param_2 = pauVar17 + 4;
                      *pauVar19 = auVar21;
                      auVar21 = *param_2;
                      pauVar19[1] = auVar22;
                      auVar22 = pauVar17[5];
                      auVar5 = vpminub_avx2(auVar21,auVar22);
                      pauVar19[2] = auVar23;
                      auVar23 = pauVar17[6];
                      pauVar19[3] = auVar24;
                      auVar24 = pauVar17[7];
                      auVar6 = vpminub_avx2(auVar23,auVar24);
                      auVar5 = vpminub_avx2(auVar6,auVar5);
                      auVar5 = vpcmpeqb_avx2(auVar5,auVar4);
                      pauVar17 = param_2;
                      pauVar19 = param_1;
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
                  auVar4 = vpcmpeqb_avx2(auVar20,auVar21);
                  uVar13 = (uint)(SUB321(auVar4 >> 7,0) & 1) |
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
                  if (uVar13 == 0) {
                    auVar4 = vpcmpeqb_avx2(auVar20,auVar22);
                    uVar13 = (uint)(SUB321(auVar4 >> 7,0) & 1) |
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
                    if (uVar13 == 0) {
                      auVar4 = vpcmpeqb_avx2(auVar20,auVar23);
                      uVar13 = (uint)(SUB321(auVar4 >> 7,0) & 1) |
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
                      if (uVar13 == 0) {
                        auVar20 = vpcmpeqb_avx2(auVar20,auVar24);
                        uVar16 = (uint)(SUB321(auVar20 >> 7,0) & 1) |
                                 (uint)(SUB321(auVar20 >> 0xf,0) & 1) << 1 |
                                 (uint)(SUB321(auVar20 >> 0x17,0) & 1) << 2 |
                                 (uint)(SUB321(auVar20 >> 0x1f,0) & 1) << 3 |
                                 (uint)(SUB321(auVar20 >> 0x27,0) & 1) << 4 |
                                 (uint)(SUB321(auVar20 >> 0x2f,0) & 1) << 5 |
                                 (uint)(SUB321(auVar20 >> 0x37,0) & 1) << 6 |
                                 (uint)(SUB321(auVar20 >> 0x3f,0) & 1) << 7 |
                                 (uint)(SUB321(auVar20 >> 0x47,0) & 1) << 8 |
                                 (uint)(SUB321(auVar20 >> 0x4f,0) & 1) << 9 |
                                 (uint)(SUB321(auVar20 >> 0x57,0) & 1) << 10 |
                                 (uint)(SUB321(auVar20 >> 0x5f,0) & 1) << 0xb |
                                 (uint)(SUB321(auVar20 >> 0x67,0) & 1) << 0xc |
                                 (uint)(SUB321(auVar20 >> 0x6f,0) & 1) << 0xd |
                                 (uint)(SUB321(auVar20 >> 0x77,0) & 1) << 0xe |
                                 (uint)SUB321(auVar20 >> 0x7f,0) << 0xf |
                                 (uint)(SUB321(auVar20 >> 0x87,0) & 1) << 0x10 |
                                 (uint)(SUB321(auVar20 >> 0x8f,0) & 1) << 0x11 |
                                 (uint)(SUB321(auVar20 >> 0x97,0) & 1) << 0x12 |
                                 (uint)(SUB321(auVar20 >> 0x9f,0) & 1) << 0x13 |
                                 (uint)(SUB321(auVar20 >> 0xa7,0) & 1) << 0x14 |
                                 (uint)(SUB321(auVar20 >> 0xaf,0) & 1) << 0x15 |
                                 (uint)(SUB321(auVar20 >> 0xb7,0) & 1) << 0x16 |
                                 (uint)SUB321(auVar20 >> 0xbf,0) << 0x17 |
                                 (uint)(SUB321(auVar20 >> 199,0) & 1) << 0x18 |
                                 (uint)(SUB321(auVar20 >> 0xcf,0) & 1) << 0x19 |
                                 (uint)(SUB321(auVar20 >> 0xd7,0) & 1) << 0x1a |
                                 (uint)(SUB321(auVar20 >> 0xdf,0) & 1) << 0x1b |
                                 (uint)(SUB321(auVar20 >> 0xe7,0) & 1) << 0x1c |
                                 (uint)(SUB321(auVar20 >> 0xef,0) & 1) << 0x1d |
                                 (uint)(SUB321(auVar20 >> 0xf7,0) & 1) << 0x1e |
                                 (uint)(byte)(auVar20[0x1f] >> 7) << 0x1f;
                        uVar13 = 0;
                        if (uVar16 != 0) {
                          for (; (uVar16 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                          }
                        }
                        uVar14 = (ulong)uVar13;
                        *param_1 = auVar21;
                        param_1[1] = auVar22;
                        param_1[2] = auVar23;
                        param_2 = param_2 + 3;
                        param_1 = param_1 + 3;
                      }
                      else {
                        uVar16 = 0;
                        if (uVar13 != 0) {
                          for (; (uVar13 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                          }
                        }
                        uVar14 = (ulong)uVar16;
                        *param_1 = auVar21;
                        param_1[1] = auVar22;
                        param_2 = param_2 + 2;
                        param_1 = param_1 + 2;
                      }
                    }
                    else {
                      uVar16 = 0;
                      if (uVar13 != 0) {
                        for (; (uVar13 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                        }
                      }
                      uVar14 = (ulong)uVar16;
                      *param_1 = auVar21;
                      param_2 = param_2 + 1;
                      param_1 = param_1 + 1;
                    }
                  }
                  else {
                    uVar16 = 0;
                    if (uVar13 != 0) {
                      for (; (uVar13 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                      }
                    }
                    uVar14 = (ulong)uVar16;
                  }
                  goto LAB_007492a9;
                }
              }
            }
          }
        }
      }
      param_1 = (undefined1 (*) [32])((long)param_1 + (uVar15 - uVar14));
    }
    param_2 = (undefined1 (*) [32])(((ulong)param_2 & 0xffffffffffffffe0) + uVar15);
  }
  uVar13 = 0;
  if (uVar16 != 0) {
    for (; (uVar16 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
    }
  }
  uVar14 = (ulong)uVar13;
LAB_007492a9:
  uVar13 = (uint)uVar14;
  if (0x1f < uVar13) {
    uVar2 = *(undefined8 *)(*param_2 + 8);
    uVar7 = *(undefined8 *)(*param_2 + 0x10);
    uVar8 = *(undefined8 *)(*param_2 + 0x18);
    puVar1 = (undefined8 *)(param_2[-1] + uVar14 + 1);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    uVar11 = puVar1[2];
    uVar12 = puVar1[3];
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined8 *)(*param_1 + 8) = uVar2;
    *(undefined8 *)(*param_1 + 0x10) = uVar7;
    *(undefined8 *)(*param_1 + 0x18) = uVar8;
    puVar1 = (undefined8 *)(param_1[-1] + uVar14 + 1);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    puVar1[2] = uVar11;
    puVar1[3] = uVar12;
    return (undefined1 (*) [32])(*param_1 + uVar14);
  }
  if (0xf < uVar13) {
    uVar2 = *(undefined8 *)(*param_2 + 8);
    uVar7 = *(undefined8 *)(param_2[-1] + uVar14 + 0x11);
    uVar8 = *(undefined8 *)((long)(param_2[-1] + uVar14 + 0x11) + 8);
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined8 *)(*param_1 + 8) = uVar2;
    *(undefined8 *)(param_1[-1] + uVar14 + 0x11) = uVar7;
    *(undefined8 *)((long)(param_1[-1] + uVar14 + 0x11) + 8) = uVar8;
    return (undefined1 (*) [32])(*param_1 + uVar14);
  }
  if (7 < uVar13) {
    uVar2 = *(undefined8 *)(param_2[-1] + uVar14 + 0x19);
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined8 *)(param_1[-1] + uVar14 + 0x19) = uVar2;
    return (undefined1 (*) [32])(*param_1 + uVar14);
  }
  if (uVar13 < 4) {
    if (uVar13 == 3) {
      *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
      return (undefined1 (*) [32])(*param_1 + 3);
    }
    if (uVar13 < 2) {
      if (uVar13 != 1) {
        (*param_1)[0] = 0;
        return param_1;
      }
      *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
      return (undefined1 (*) [32])(*param_1 + 1);
    }
    *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
    (*param_1)[2] = 0;
    return (undefined1 (*) [32])(*param_1 + 2);
  }
  *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
  *(undefined4 *)(param_1[-1] + uVar14 + 0x1d) = *(undefined4 *)(param_2[-1] + uVar14 + 0x1d);
  return (undefined1 (*) [32])(*param_1 + uVar14);
}

