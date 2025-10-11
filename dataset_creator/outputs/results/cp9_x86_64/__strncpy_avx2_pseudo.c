
undefined1 (*) [32]
__strncpy_avx2(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulong param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 (*pauVar16) [32];
  undefined1 (*pauVar17) [32];
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  undefined1 (*pauVar21) [32];
  undefined1 (*pauVar22) [32];
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  bool bVar27;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  
  if (param_3 == 0) {
    return param_1;
  }
  pauVar17 = param_1;
  uVar18 = (uint)param_2;
  auVar28 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if ((uVar18 & 0x7f) < 0x41) {
    auVar30 = param_2[1];
    auVar29 = vpcmpeqb_avx2(auVar28,*param_2);
    uVar20 = (uint)(SUB321(auVar29 >> 7,0) & 1) | (uint)(SUB321(auVar29 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar29 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar29 >> 0x1f,0) & 1) << 3
             | (uint)(SUB321(auVar29 >> 0x27,0) & 1) << 4 |
             (uint)(SUB321(auVar29 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar29 >> 0x37,0) & 1) << 6
             | (uint)(SUB321(auVar29 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar29 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar29 >> 0x4f,0) & 1) << 9
             | (uint)(SUB321(auVar29 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar29 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar29 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar29 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar29 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar29 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar29 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar29 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar29 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar29 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar29 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar29 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar29 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar29 >> 0xbf,0) << 0x17
             | (uint)(SUB321(auVar29 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar29 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar29 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar29 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar29 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar29 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar29 >> 0xf7,0) & 1) << 0x1e |
             (uint)(byte)(auVar29[0x1f] >> 7) << 0x1f;
    if (param_3 < 0x22) {
LAB_007377ac:
      if (uVar20 == 0) goto LAB_00737be4;
      uVar18 = 0;
      if (uVar20 != 0) {
        for (; (uVar20 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
        }
      }
      uVar23 = (ulong)uVar18;
      if ((uint)param_3 <= uVar18) goto LAB_00737be4;
    }
    else {
      if (uVar20 == 0) {
        *param_1 = *param_2;
        auVar30 = vpcmpeqb_avx2(auVar28,auVar30);
        uVar20 = (uint)(SUB321(auVar30 >> 7,0) & 1) | (uint)(SUB321(auVar30 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar30 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar30 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar30 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar30 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar30 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar30 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar30 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar30 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar30 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar30 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar30 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar30 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar30 >> 0x77,0) & 1) << 0xe |
                 (uint)SUB321(auVar30 >> 0x7f,0) << 0xf |
                 (uint)(SUB321(auVar30 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar30 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar30 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar30 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar30 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar30 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar30 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar30 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar30 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar30 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar30 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar30 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar30 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar30 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar30 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar30[0x1f] >> 7) << 0x1f;
        if (param_3 < 0x42) {
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          param_3 = param_3 - 0x20;
          goto LAB_007377ac;
        }
        if (uVar20 == 0) {
          uVar19 = (ulong)(uVar18 & 0x1f);
          goto LAB_00737370;
        }
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        param_3 = param_3 - 0x20;
      }
LAB_007375d6:
      uVar18 = 0;
      if (uVar20 != 0) {
        for (; (uVar20 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
        }
      }
      uVar23 = (ulong)uVar18;
    }
    goto LAB_007375d9;
  }
  pauVar21 = (undefined1 (*) [32])((ulong)param_2 & 0xffffffffffffffe0);
  uVar18 = uVar18 & 0x1f;
  uVar19 = (ulong)uVar18;
  auVar30 = vpcmpeqb_avx2(auVar28,*pauVar21);
  uVar20 = ((uint)(SUB321(auVar30 >> 7,0) & 1) | (uint)(SUB321(auVar30 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar30 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar30 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auVar30 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auVar30 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar30 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auVar30 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar30 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar30 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auVar30 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auVar30 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auVar30 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar30 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar30 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar30 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar30 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar30 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar30 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar30 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar30 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar30 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar30 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar30 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auVar30 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar30 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar30 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar30 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar30 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar30 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar30 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar30[0x1f] >> 7) << 0x1f
           ) >> (sbyte)uVar18;
  if (param_3 <= -uVar19 + 0x21) {
    if (uVar20 == 0) {
      param_2 = (undefined1 (*) [32])(*pauVar21 + uVar19);
      goto LAB_00737be4;
    }
    uVar18 = 0;
    if (uVar20 != 0) {
      for (; (uVar20 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
      }
    }
joined_r0x00737742:
    uVar23 = (ulong)uVar18;
    param_2 = (undefined1 (*) [32])(*pauVar21 + uVar19);
    if ((uint)param_3 <= uVar18) {
LAB_00737be4:
      uVar18 = (uint)param_3;
      if (uVar18 == 0x41) {
        uVar5 = *(undefined8 *)(*param_2 + 8);
        uVar10 = *(undefined8 *)(*param_2 + 0x10);
        uVar11 = *(undefined8 *)(*param_2 + 0x18);
        uVar12 = *(undefined8 *)param_2[1];
        uVar13 = *(undefined8 *)(param_2[1] + 8);
        uVar14 = *(undefined8 *)(param_2[1] + 0x10);
        uVar15 = *(undefined8 *)(param_2[1] + 0x18);
        uVar2 = param_2[2][0];
        *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
        *(undefined8 *)(*param_1 + 8) = uVar5;
        *(undefined8 *)(*param_1 + 0x10) = uVar10;
        *(undefined8 *)(*param_1 + 0x18) = uVar11;
        *(undefined8 *)param_1[1] = uVar12;
        *(undefined8 *)(param_1[1] + 8) = uVar13;
        *(undefined8 *)(param_1[1] + 0x10) = uVar14;
        *(undefined8 *)(param_1[1] + 0x18) = uVar15;
        param_1[2][0] = uVar2;
        return pauVar17;
      }
      if (0x20 < uVar18) {
        uVar5 = *(undefined8 *)(*param_2 + 8);
        uVar10 = *(undefined8 *)(*param_2 + 0x10);
        uVar11 = *(undefined8 *)(*param_2 + 0x18);
        puVar1 = (undefined8 *)(param_2[-1] + param_3);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar14 = puVar1[2];
        uVar15 = puVar1[3];
        *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
        *(undefined8 *)(*param_1 + 8) = uVar5;
        *(undefined8 *)(*param_1 + 0x10) = uVar10;
        *(undefined8 *)(*param_1 + 0x18) = uVar11;
        puVar1 = (undefined8 *)(param_1[-1] + param_3);
        *puVar1 = uVar12;
        puVar1[1] = uVar13;
        puVar1[2] = uVar14;
        puVar1[3] = uVar15;
        return pauVar17;
      }
      if (0x10 < uVar18) {
        uVar5 = *(undefined8 *)(*param_2 + 8);
        uVar10 = *(undefined8 *)(param_2[-1] + param_3 + 0x10);
        uVar11 = *(undefined8 *)((long)(param_2[-1] + param_3 + 0x10) + 8);
        *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
        *(undefined8 *)(*param_1 + 8) = uVar5;
        *(undefined8 *)(param_1[-1] + param_3 + 0x10) = uVar10;
        *(undefined8 *)((long)(param_1[-1] + param_3 + 0x10) + 8) = uVar11;
        return pauVar17;
      }
      if (8 < uVar18) {
        uVar5 = *(undefined8 *)(param_2[-1] + param_3 + 0x18);
        *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
        *(undefined8 *)(param_1[-1] + param_3 + 0x18) = uVar5;
        return pauVar17;
      }
      if (4 < uVar18) {
        uVar4 = *(undefined4 *)(param_2[-1] + param_3 + 0x1c);
        *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
        *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar4;
        return pauVar17;
      }
      if (2 < uVar18) {
        uVar3 = *(undefined2 *)(param_2[-1] + param_3 + 0x1e);
        *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
        *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar3;
        return pauVar17;
      }
      if (1 < uVar18) {
        *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
        return pauVar17;
      }
      if (uVar18 != 1) {
        return pauVar17;
      }
      (*param_1)[0] = (*param_2)[0];
      return pauVar17;
    }
    goto LAB_007375d9;
  }
  if (uVar20 != 0) {
    param_2 = (undefined1 (*) [32])(*pauVar21 + uVar19);
    goto LAB_007375d6;
  }
  auVar30 = vpcmpeqb_avx2(auVar28,pauVar21[1]);
  uVar20 = (uint)(SUB321(auVar30 >> 7,0) & 1) | (uint)(SUB321(auVar30 >> 0xf,0) & 1) << 1 |
           (uint)(SUB321(auVar30 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar30 >> 0x1f,0) & 1) << 3 |
           (uint)(SUB321(auVar30 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar30 >> 0x2f,0) & 1) << 5 |
           (uint)(SUB321(auVar30 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar30 >> 0x3f,0) & 1) << 7 |
           (uint)(SUB321(auVar30 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar30 >> 0x4f,0) & 1) << 9 |
           (uint)(SUB321(auVar30 >> 0x57,0) & 1) << 10 |
           (uint)(SUB321(auVar30 >> 0x5f,0) & 1) << 0xb |
           (uint)(SUB321(auVar30 >> 0x67,0) & 1) << 0xc |
           (uint)(SUB321(auVar30 >> 0x6f,0) & 1) << 0xd |
           (uint)(SUB321(auVar30 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar30 >> 0x7f,0) << 0xf |
           (uint)(SUB321(auVar30 >> 0x87,0) & 1) << 0x10 |
           (uint)(SUB321(auVar30 >> 0x8f,0) & 1) << 0x11 |
           (uint)(SUB321(auVar30 >> 0x97,0) & 1) << 0x12 |
           (uint)(SUB321(auVar30 >> 0x9f,0) & 1) << 0x13 |
           (uint)(SUB321(auVar30 >> 0xa7,0) & 1) << 0x14 |
           (uint)(SUB321(auVar30 >> 0xaf,0) & 1) << 0x15 |
           (uint)(SUB321(auVar30 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar30 >> 0xbf,0) << 0x17 |
           (uint)(SUB321(auVar30 >> 199,0) & 1) << 0x18 |
           (uint)(SUB321(auVar30 >> 0xcf,0) & 1) << 0x19 |
           (uint)(SUB321(auVar30 >> 0xd7,0) & 1) << 0x1a |
           (uint)(SUB321(auVar30 >> 0xdf,0) & 1) << 0x1b |
           (uint)(SUB321(auVar30 >> 0xe7,0) & 1) << 0x1c |
           (uint)(SUB321(auVar30 >> 0xef,0) & 1) << 0x1d |
           (uint)(SUB321(auVar30 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar30[0x1f] >> 7) << 0x1f;
  if (param_3 <= -uVar19 + 0x41) {
    if (uVar20 == 0) {
      param_2 = (undefined1 (*) [32])(*pauVar21 + uVar19);
      goto LAB_00737be4;
    }
    iVar6 = 0;
    if (uVar20 != 0) {
      for (; (uVar20 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
      }
    }
    uVar18 = (iVar6 + 0x20) - uVar18;
    goto joined_r0x00737742;
  }
  if (uVar20 == 0) {
    puVar1 = (undefined8 *)(*pauVar21 + uVar19);
    uVar5 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    *(undefined8 *)*param_1 = *puVar1;
    *(undefined8 *)(*param_1 + 8) = uVar5;
    *(undefined8 *)(*param_1 + 0x10) = uVar10;
    *(undefined8 *)(*param_1 + 0x18) = uVar11;
LAB_00737370:
    param_2 = (undefined1 (*) [32])((ulong)param_2 & 0xffffffffffffffe0);
    param_1 = (undefined1 (*) [32])((long)param_1 - uVar19);
    uVar23 = param_3 + uVar19 | -(ulong)CARRY8(param_3,uVar19);
    uVar5 = *(undefined8 *)(param_2[1] + 8);
    uVar10 = *(undefined8 *)(param_2[1] + 0x10);
    uVar11 = *(undefined8 *)(param_2[1] + 0x18);
    *(undefined8 *)param_1[1] = *(undefined8 *)param_2[1];
    *(undefined8 *)(param_1[1] + 8) = uVar5;
    *(undefined8 *)(param_1[1] + 0x10) = uVar10;
    *(undefined8 *)(param_1[1] + 0x18) = uVar11;
    auVar30 = param_2[2];
    auVar29 = vpcmpeqb_avx2(auVar28,auVar30);
    uVar18 = (uint)(SUB321(auVar29 >> 7,0) & 1) | (uint)(SUB321(auVar29 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar29 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar29 >> 0x1f,0) & 1) << 3
             | (uint)(SUB321(auVar29 >> 0x27,0) & 1) << 4 |
             (uint)(SUB321(auVar29 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar29 >> 0x37,0) & 1) << 6
             | (uint)(SUB321(auVar29 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar29 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar29 >> 0x4f,0) & 1) << 9
             | (uint)(SUB321(auVar29 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar29 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar29 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar29 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar29 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar29 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar29 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar29 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar29 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar29 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar29 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar29 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar29 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar29 >> 0xbf,0) << 0x17
             | (uint)(SUB321(auVar29 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar29 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar29 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar29 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar29 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar29 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar29 >> 0xf7,0) & 1) << 0x1e |
             (uint)(byte)(auVar29[0x1f] >> 7) << 0x1f;
    uVar19 = 0x40;
    param_3 = uVar23 - 0x60;
    pauVar21 = param_2;
    if (uVar23 < 0x60 || param_3 == 0) {
LAB_00737760:
      if (uVar18 == 0) {
LAB_00737765:
        param_3 = param_3 + 0x20;
        param_1 = (undefined1 (*) [32])(*param_1 + uVar19);
        param_2 = (undefined1 (*) [32])(*pauVar21 + uVar19);
        goto LAB_00737be4;
      }
      param_3 = param_3 + 0x20;
      param_1 = (undefined1 (*) [32])(*param_1 + uVar19);
      param_2 = (undefined1 (*) [32])(*pauVar21 + uVar19);
      uVar20 = 0;
      if (uVar18 != 0) {
        for (; (uVar18 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
        }
      }
      uVar23 = (ulong)uVar20;
      if ((uint)param_3 <= uVar20) goto LAB_00737be4;
      goto LAB_007375d9;
    }
    if (uVar18 != 0) goto LAB_00737a20;
    param_1[2] = auVar30;
    auVar29 = param_2[3];
    auVar30 = vpcmpeqb_avx2(auVar28,auVar29);
    uVar18 = (uint)(SUB321(auVar30 >> 7,0) & 1) | (uint)(SUB321(auVar30 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar30 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar30 >> 0x1f,0) & 1) << 3
             | (uint)(SUB321(auVar30 >> 0x27,0) & 1) << 4 |
             (uint)(SUB321(auVar30 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar30 >> 0x37,0) & 1) << 6
             | (uint)(SUB321(auVar30 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar30 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar30 >> 0x4f,0) & 1) << 9
             | (uint)(SUB321(auVar30 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar30 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar30 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar30 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar30 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar30 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar30 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar30 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar30 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar30 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar30 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar30 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar30 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar30 >> 0xbf,0) << 0x17
             | (uint)(SUB321(auVar30 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar30 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar30 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar30 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar30 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar30 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar30 >> 0xf7,0) & 1) << 0x1e |
             (uint)(byte)(auVar30[0x1f] >> 7) << 0x1f;
    uVar19 = 0x60;
    bVar27 = param_3 < 0x20;
    param_3 = uVar23 - 0x80;
    if (bVar27 || param_3 == 0) goto LAB_00737760;
    if (uVar18 != 0) {
LAB_007376f0:
      *(undefined1 (*) [32])(*param_1 + uVar19) = auVar29;
      goto LAB_00737a30;
    }
    param_1[3] = auVar29;
    auVar30 = param_2[4];
    auVar29 = vpcmpeqb_avx2(auVar28,auVar30);
    uVar18 = (uint)(SUB321(auVar29 >> 7,0) & 1) | (uint)(SUB321(auVar29 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar29 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar29 >> 0x1f,0) & 1) << 3
             | (uint)(SUB321(auVar29 >> 0x27,0) & 1) << 4 |
             (uint)(SUB321(auVar29 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar29 >> 0x37,0) & 1) << 6
             | (uint)(SUB321(auVar29 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar29 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar29 >> 0x4f,0) & 1) << 9
             | (uint)(SUB321(auVar29 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar29 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar29 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar29 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar29 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar29 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar29 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar29 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar29 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar29 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar29 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar29 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar29 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar29 >> 0xbf,0) << 0x17
             | (uint)(SUB321(auVar29 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar29 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar29 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar29 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar29 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar29 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar29 >> 0xf7,0) & 1) << 0x1e |
             (uint)(byte)(auVar29[0x1f] >> 7) << 0x1f;
    uVar19 = 0x80;
    bVar27 = param_3 < 0x20;
    param_3 = uVar23 - 0xa0;
    if (bVar27 || param_3 == 0) goto LAB_00737760;
    if (uVar18 != 0) {
LAB_007376e0:
      *(undefined1 (*) [32])(*param_1 + uVar19) = auVar30;
      goto LAB_00737a30;
    }
    param_1[4] = auVar30;
    auVar30 = param_2[5];
    auVar29 = vpcmpeqb_avx2(auVar28,auVar30);
    uVar18 = (uint)(SUB321(auVar29 >> 7,0) & 1) | (uint)(SUB321(auVar29 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar29 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar29 >> 0x1f,0) & 1) << 3
             | (uint)(SUB321(auVar29 >> 0x27,0) & 1) << 4 |
             (uint)(SUB321(auVar29 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar29 >> 0x37,0) & 1) << 6
             | (uint)(SUB321(auVar29 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar29 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar29 >> 0x4f,0) & 1) << 9
             | (uint)(SUB321(auVar29 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar29 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar29 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar29 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar29 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar29 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar29 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar29 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar29 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar29 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar29 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar29 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar29 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar29 >> 0xbf,0) << 0x17
             | (uint)(SUB321(auVar29 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar29 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar29 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar29 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar29 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar29 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar29 >> 0xf7,0) & 1) << 0x1e |
             (uint)(byte)(auVar29[0x1f] >> 7) << 0x1f;
    uVar19 = 0xa0;
    bVar27 = param_3 < 0x20;
    param_3 = uVar23 - 0xc0;
    if (bVar27 || param_3 == 0) goto LAB_00737760;
    if (uVar18 == 0) {
      param_1[5] = auVar30;
      auVar30 = param_2[6];
      auVar29 = vpcmpeqb_avx2(auVar28,auVar30);
      uVar18 = (uint)(SUB321(auVar29 >> 7,0) & 1) | (uint)(SUB321(auVar29 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar29 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar29 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar29 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar29 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar29 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar29 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar29 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar29 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar29 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar29 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar29 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar29 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar29 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar29 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar29 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar29 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar29 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar29 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar29 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar29 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar29 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar29 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar29 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar29 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar29 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar29 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar29 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar29 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar29 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar29[0x1f] >> 7) << 0x1f;
      uVar19 = 0xc0;
      bVar27 = param_3 < 0x20;
      param_3 = uVar23 - 0xe0;
      if (bVar27 || param_3 == 0) goto LAB_00737760;
      if (uVar18 != 0) goto LAB_00737a20;
      auVar29 = param_2[7];
      param_1[6] = auVar30;
      auVar7 = vpcmpeqb_avx2(auVar28,auVar29);
      uVar18 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar7 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar7 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar7 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar7 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar7 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar7 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar7 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar7 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar7 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar7 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar7 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar7 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar7 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar7 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar7 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar7 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar7 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar7 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar7 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar7 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar7 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar7 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar7 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar7 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar7 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar7 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar7 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar7 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar7 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar7[0x1f] >> 7) << 0x1f;
      uVar19 = 0xe0;
      bVar27 = param_3 < 0x20;
      param_3 = uVar23 - 0x100;
      if (bVar27 || param_3 == 0) goto LAB_00737760;
      if (uVar18 != 0) goto LAB_007376f0;
      param_1[7] = auVar29;
      pauVar21 = (undefined1 (*) [32])((ulong)(param_2 + 8) & 0xffffffffffffff80);
      param_1 = (undefined1 (*) [32])((long)param_1 - ((long)param_2 - (long)pauVar21));
      uVar23 = uVar23 + ((long)param_2 - (long)pauVar21);
      auVar30 = *pauVar21;
      auVar29 = pauVar21[1];
      auVar31 = pauVar21[2];
      auVar32 = pauVar21[3];
      auVar8 = vpminub_avx2(auVar30,auVar29);
      auVar9 = vpminub_avx2(auVar31,auVar32);
      auVar8 = vpminub_avx2(auVar9,auVar8);
      auVar8 = vpcmpeqb_avx2(auVar8,auVar7);
      uVar18 = (uint)(SUB321(auVar8 >> 7,0) & 1) | (uint)(SUB321(auVar8 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar8 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar8 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar8 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar8 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar8 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar8 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar8 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar8 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar8 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar8 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar8 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar8 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar8 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar8 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar8 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar8 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar8 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar8 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar8 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar8 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar8 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar8 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar8 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar8 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar8 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar8 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar8[0x1f] >> 7) << 0x1f;
      uVar24 = uVar23 - 0x80;
      pauVar22 = pauVar21;
      pauVar16 = param_1;
      if (0x7f < uVar23 && uVar24 != 0) {
joined_r0x007374d3:
        if (uVar18 == 0) goto LAB_007374d5;
        auVar7 = vpcmpeqb_avx2(auVar28,auVar30);
        uVar18 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar7 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar7 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar7 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar7 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar7 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar7 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar7 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar7 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar7 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar7 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar7 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar7 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar7 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar7 >> 0x7f,0) << 0xf
                 | (uint)(SUB321(auVar7 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar7 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar7 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar7 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar7 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar7 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar7 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar7 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar7 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar7 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar7 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar7 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar7 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar7 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar7 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar7[0x1f] >> 7) << 0x1f;
        if (uVar18 == 0) {
          auVar7 = vpcmpeqb_avx2(auVar28,auVar29);
          uVar18 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
                   (uint)(SUB321(auVar7 >> 0x17,0) & 1) << 2 |
                   (uint)(SUB321(auVar7 >> 0x1f,0) & 1) << 3 |
                   (uint)(SUB321(auVar7 >> 0x27,0) & 1) << 4 |
                   (uint)(SUB321(auVar7 >> 0x2f,0) & 1) << 5 |
                   (uint)(SUB321(auVar7 >> 0x37,0) & 1) << 6 |
                   (uint)(SUB321(auVar7 >> 0x3f,0) & 1) << 7 |
                   (uint)(SUB321(auVar7 >> 0x47,0) & 1) << 8 |
                   (uint)(SUB321(auVar7 >> 0x4f,0) & 1) << 9 |
                   (uint)(SUB321(auVar7 >> 0x57,0) & 1) << 10 |
                   (uint)(SUB321(auVar7 >> 0x5f,0) & 1) << 0xb |
                   (uint)(SUB321(auVar7 >> 0x67,0) & 1) << 0xc |
                   (uint)(SUB321(auVar7 >> 0x6f,0) & 1) << 0xd |
                   (uint)(SUB321(auVar7 >> 0x77,0) & 1) << 0xe |
                   (uint)SUB321(auVar7 >> 0x7f,0) << 0xf |
                   (uint)(SUB321(auVar7 >> 0x87,0) & 1) << 0x10 |
                   (uint)(SUB321(auVar7 >> 0x8f,0) & 1) << 0x11 |
                   (uint)(SUB321(auVar7 >> 0x97,0) & 1) << 0x12 |
                   (uint)(SUB321(auVar7 >> 0x9f,0) & 1) << 0x13 |
                   (uint)(SUB321(auVar7 >> 0xa7,0) & 1) << 0x14 |
                   (uint)(SUB321(auVar7 >> 0xaf,0) & 1) << 0x15 |
                   (uint)(SUB321(auVar7 >> 0xb7,0) & 1) << 0x16 |
                   (uint)SUB321(auVar7 >> 0xbf,0) << 0x17 |
                   (uint)(SUB321(auVar7 >> 199,0) & 1) << 0x18 |
                   (uint)(SUB321(auVar7 >> 0xcf,0) & 1) << 0x19 |
                   (uint)(SUB321(auVar7 >> 0xd7,0) & 1) << 0x1a |
                   (uint)(SUB321(auVar7 >> 0xdf,0) & 1) << 0x1b |
                   (uint)(SUB321(auVar7 >> 0xe7,0) & 1) << 0x1c |
                   (uint)(SUB321(auVar7 >> 0xef,0) & 1) << 0x1d |
                   (uint)(SUB321(auVar7 >> 0xf7,0) & 1) << 0x1e |
                   (uint)(byte)(auVar7[0x1f] >> 7) << 0x1f;
          if (uVar18 == 0) {
            auVar7 = vpcmpeqb_avx2(auVar28,auVar31);
            uVar18 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
                     (uint)(SUB321(auVar7 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar7 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar7 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar7 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar7 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar7 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar7 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar7 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar7 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar7 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar7 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar7 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar7 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar7 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar7 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar7 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar7 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar7 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar7 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar7 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar7 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar7 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar7 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar7 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar7 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar7 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar7 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar7 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar7 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar7[0x1f] >> 7) << 0x1f;
            if (uVar18 == 0) {
              auVar7 = vpcmpeqb_avx2(auVar28,auVar32);
              uVar20 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1
                       | (uint)(SUB321(auVar7 >> 0x17,0) & 1) << 2 |
                       (uint)(SUB321(auVar7 >> 0x1f,0) & 1) << 3 |
                       (uint)(SUB321(auVar7 >> 0x27,0) & 1) << 4 |
                       (uint)(SUB321(auVar7 >> 0x2f,0) & 1) << 5 |
                       (uint)(SUB321(auVar7 >> 0x37,0) & 1) << 6 |
                       (uint)(SUB321(auVar7 >> 0x3f,0) & 1) << 7 |
                       (uint)(SUB321(auVar7 >> 0x47,0) & 1) << 8 |
                       (uint)(SUB321(auVar7 >> 0x4f,0) & 1) << 9 |
                       (uint)(SUB321(auVar7 >> 0x57,0) & 1) << 10 |
                       (uint)(SUB321(auVar7 >> 0x5f,0) & 1) << 0xb |
                       (uint)(SUB321(auVar7 >> 0x67,0) & 1) << 0xc |
                       (uint)(SUB321(auVar7 >> 0x6f,0) & 1) << 0xd |
                       (uint)(SUB321(auVar7 >> 0x77,0) & 1) << 0xe |
                       (uint)SUB321(auVar7 >> 0x7f,0) << 0xf |
                       (uint)(SUB321(auVar7 >> 0x87,0) & 1) << 0x10 |
                       (uint)(SUB321(auVar7 >> 0x8f,0) & 1) << 0x11 |
                       (uint)(SUB321(auVar7 >> 0x97,0) & 1) << 0x12 |
                       (uint)(SUB321(auVar7 >> 0x9f,0) & 1) << 0x13 |
                       (uint)(SUB321(auVar7 >> 0xa7,0) & 1) << 0x14 |
                       (uint)(SUB321(auVar7 >> 0xaf,0) & 1) << 0x15 |
                       (uint)(SUB321(auVar7 >> 0xb7,0) & 1) << 0x16 |
                       (uint)SUB321(auVar7 >> 0xbf,0) << 0x17 |
                       (uint)(SUB321(auVar7 >> 199,0) & 1) << 0x18 |
                       (uint)(SUB321(auVar7 >> 0xcf,0) & 1) << 0x19 |
                       (uint)(SUB321(auVar7 >> 0xd7,0) & 1) << 0x1a |
                       (uint)(SUB321(auVar7 >> 0xdf,0) & 1) << 0x1b |
                       (uint)(SUB321(auVar7 >> 0xe7,0) & 1) << 0x1c |
                       (uint)(SUB321(auVar7 >> 0xef,0) & 1) << 0x1d |
                       (uint)(SUB321(auVar7 >> 0xf7,0) & 1) << 0x1e |
                       (uint)(byte)(auVar7[0x1f] >> 7) << 0x1f;
              uVar18 = 0;
              if (uVar20 != 0) {
                for (; (uVar20 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                }
              }
              *pauVar16 = auVar30;
              pauVar16[1] = auVar29;
              pauVar16[2] = auVar31;
              pauVar16[3] = auVar32;
              param_3 = (uVar24 + 0x1f) - (ulong)uVar18;
              pauVar21 = (undefined1 (*) [32])(pauVar16[3] + (ulong)uVar18 + 1);
            }
            else {
              uVar20 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
                }
              }
              *pauVar16 = auVar30;
              pauVar16[1] = auVar29;
              pauVar16[2] = auVar31;
              param_3 = (uVar24 + 0x3f) - (ulong)uVar20;
              pauVar21 = (undefined1 (*) [32])(pauVar16[2] + (ulong)uVar20 + 1);
            }
          }
          else {
            uVar20 = 0;
            if (uVar18 != 0) {
              for (; (uVar18 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
              }
            }
            *pauVar16 = auVar30;
            pauVar16[1] = auVar29;
            param_3 = (uVar24 + 0x5f) - (ulong)uVar20;
            pauVar21 = (undefined1 (*) [32])(pauVar16[1] + (ulong)uVar20 + 1);
          }
        }
        else {
          uVar20 = 0;
          if (uVar18 != 0) {
            for (; (uVar18 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
            }
          }
          *pauVar16 = auVar30;
          param_3 = (uVar24 + 0x7f) - (ulong)uVar20;
          pauVar21 = (undefined1 (*) [32])(*pauVar16 + (ulong)uVar20 + 1);
        }
        goto LAB_00737a50;
      }
LAB_00737b10:
      if (uVar18 != 0) {
        uVar19 = 0;
        auVar7 = vpcmpeqb_avx2(auVar28,auVar30);
        uVar18 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar7 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar7 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar7 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar7 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar7 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar7 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar7 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar7 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar7 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar7 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar7 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar7 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar7 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar7 >> 0x7f,0) << 0xf
                 | (uint)(SUB321(auVar7 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar7 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar7 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar7 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar7 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar7 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar7 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar7 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar7 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar7 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar7 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar7 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar7 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar7 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar7 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar7[0x1f] >> 7) << 0x1f;
        param_3 = uVar24 + 0x60;
        if (param_3 == 0 || SCARRY8(uVar24,0x60) != (long)param_3 < 0) goto LAB_00737760;
        if (uVar18 != 0) goto LAB_007376e0;
        auVar7 = vpcmpeqb_avx2(auVar28,auVar29);
        uVar18 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar7 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar7 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar7 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar7 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar7 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar7 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar7 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar7 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar7 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar7 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar7 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar7 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar7 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar7 >> 0x7f,0) << 0xf
                 | (uint)(SUB321(auVar7 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar7 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar7 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar7 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar7 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar7 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar7 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar7 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar7 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar7 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar7 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar7 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar7 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar7 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar7 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar7[0x1f] >> 7) << 0x1f;
        *param_1 = auVar30;
        uVar19 = 0x20;
        bVar27 = param_3 < 0x20;
        param_3 = uVar24 + 0x40;
        if (bVar27 || param_3 == 0) goto LAB_00737760;
        if (uVar18 == 0) {
          auVar30 = vpcmpeqb_avx2(auVar28,auVar31);
          uVar18 = (uint)(SUB321(auVar30 >> 7,0) & 1) | (uint)(SUB321(auVar30 >> 0xf,0) & 1) << 1 |
                   (uint)(SUB321(auVar30 >> 0x17,0) & 1) << 2 |
                   (uint)(SUB321(auVar30 >> 0x1f,0) & 1) << 3 |
                   (uint)(SUB321(auVar30 >> 0x27,0) & 1) << 4 |
                   (uint)(SUB321(auVar30 >> 0x2f,0) & 1) << 5 |
                   (uint)(SUB321(auVar30 >> 0x37,0) & 1) << 6 |
                   (uint)(SUB321(auVar30 >> 0x3f,0) & 1) << 7 |
                   (uint)(SUB321(auVar30 >> 0x47,0) & 1) << 8 |
                   (uint)(SUB321(auVar30 >> 0x4f,0) & 1) << 9 |
                   (uint)(SUB321(auVar30 >> 0x57,0) & 1) << 10 |
                   (uint)(SUB321(auVar30 >> 0x5f,0) & 1) << 0xb |
                   (uint)(SUB321(auVar30 >> 0x67,0) & 1) << 0xc |
                   (uint)(SUB321(auVar30 >> 0x6f,0) & 1) << 0xd |
                   (uint)(SUB321(auVar30 >> 0x77,0) & 1) << 0xe |
                   (uint)SUB321(auVar30 >> 0x7f,0) << 0xf |
                   (uint)(SUB321(auVar30 >> 0x87,0) & 1) << 0x10 |
                   (uint)(SUB321(auVar30 >> 0x8f,0) & 1) << 0x11 |
                   (uint)(SUB321(auVar30 >> 0x97,0) & 1) << 0x12 |
                   (uint)(SUB321(auVar30 >> 0x9f,0) & 1) << 0x13 |
                   (uint)(SUB321(auVar30 >> 0xa7,0) & 1) << 0x14 |
                   (uint)(SUB321(auVar30 >> 0xaf,0) & 1) << 0x15 |
                   (uint)(SUB321(auVar30 >> 0xb7,0) & 1) << 0x16 |
                   (uint)SUB321(auVar30 >> 0xbf,0) << 0x17 |
                   (uint)(SUB321(auVar30 >> 199,0) & 1) << 0x18 |
                   (uint)(SUB321(auVar30 >> 0xcf,0) & 1) << 0x19 |
                   (uint)(SUB321(auVar30 >> 0xd7,0) & 1) << 0x1a |
                   (uint)(SUB321(auVar30 >> 0xdf,0) & 1) << 0x1b |
                   (uint)(SUB321(auVar30 >> 0xe7,0) & 1) << 0x1c |
                   (uint)(SUB321(auVar30 >> 0xef,0) & 1) << 0x1d |
                   (uint)(SUB321(auVar30 >> 0xf7,0) & 1) << 0x1e |
                   (uint)(byte)(auVar30[0x1f] >> 7) << 0x1f;
          param_1[1] = auVar29;
          uVar19 = 0x40;
          bVar27 = param_3 < 0x20;
          param_3 = uVar24 + 0x20;
          if (bVar27 || param_3 == 0) goto LAB_00737760;
          if (uVar18 == 0) {
            auVar30 = vpcmpeqb_avx2(auVar28,auVar32);
            uVar20 = (uint)(SUB321(auVar30 >> 7,0) & 1) | (uint)(SUB321(auVar30 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar30 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar30 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar30 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar30 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar30 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar30 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar30 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar30 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar30 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar30 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar30 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar30 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar30 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar30 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar30 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar30 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar30 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar30 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar30 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar30 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar30 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar30 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar30 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar30 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar30 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar30 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar30 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar30 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar30 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar30[0x1f] >> 7) << 0x1f;
            param_1[2] = auVar31;
            param_1 = param_1 + 3;
            param_2 = pauVar21 + 3;
            uVar18 = 0;
            if (uVar20 != 0) {
              for (; (uVar20 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
              }
            }
            uVar23 = (ulong)uVar18;
            if ((uint)param_3 <= uVar18) goto LAB_00737be4;
            goto LAB_007375d9;
          }
          param_1[2] = auVar31;
        }
        else {
          param_1[1] = auVar29;
        }
        goto LAB_00737a30;
      }
      uVar19 = uVar24 + 0x80 & 0xffffffffffffffe0;
      uVar23 = uVar24 + 0x60;
      param_3 = uVar23;
      if (SCARRY8(uVar24,0x60) == (long)uVar23 < 0) {
        *param_1 = auVar30;
        param_3 = uVar24 + 0x40;
        if (0x1f < uVar23) {
          param_1[1] = auVar29;
          param_3 = uVar24 + 0x20;
          if ((0x1f < uVar24 + 0x40) &&
             (param_1[2] = auVar31, param_3 = uVar24, 0x1f < uVar24 + 0x20)) {
            param_1[3] = auVar32;
            return pauVar17;
          }
        }
      }
      goto LAB_00737765;
    }
LAB_00737a20:
    *(undefined1 (*) [32])(*param_1 + uVar19) = auVar30;
LAB_00737a30:
    uVar20 = 0;
    if (uVar18 != 0) {
      for (; (uVar18 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
      }
    }
    param_3 = (param_3 + 0x1f) - (ulong)uVar20;
    pauVar21 = (undefined1 (*) [32])(*param_1 + (ulong)uVar20 + uVar19 + 1);
  }
  else {
    iVar6 = 0;
    if (uVar20 != 0) {
      for (; (uVar20 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
      }
    }
    param_2 = (undefined1 (*) [32])(*pauVar21 + uVar19);
    uVar23 = (ulong)((iVar6 + 0x20) - uVar18);
LAB_007375d9:
    uVar18 = (uint)uVar23;
    if (uVar18 < 0x20) {
      if (uVar18 < 0x10) {
        if (uVar18 < 8) {
          if (uVar18 < 4) {
            if (uVar18 == 3) {
              *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
              param_3 = param_3 - 4;
              pauVar21 = (undefined1 (*) [32])(*param_1 + 4);
              if (param_3 == 0) {
                return pauVar17;
              }
            }
            else if (uVar18 < 2) {
              if (uVar18 == 1) {
                *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
                param_3 = param_3 - 2;
                pauVar21 = (undefined1 (*) [32])(*param_1 + 2);
                if (param_3 == 0) {
                  return pauVar17;
                }
              }
              else {
                (*param_1)[0] = 0;
                param_3 = param_3 - 1;
                pauVar21 = (undefined1 (*) [32])(*param_1 + 1);
                if (param_3 == 0) {
                  return pauVar17;
                }
              }
            }
            else {
              *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
              (*param_1)[2] = 0;
              param_3 = param_3 - 3;
              pauVar21 = (undefined1 (*) [32])(*param_1 + 3);
              if (param_3 == 0) {
                return pauVar17;
              }
            }
          }
          else {
            *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
            *(undefined4 *)(param_1[-1] + uVar23 + 0x1d) =
                 *(undefined4 *)(param_2[-1] + uVar23 + 0x1d);
            param_3 = (param_3 - uVar23) - 1;
            pauVar21 = (undefined1 (*) [32])(*param_1 + uVar23 + 1);
            if (param_3 == 0) {
              return pauVar17;
            }
          }
        }
        else {
          uVar5 = *(undefined8 *)(param_2[-1] + uVar23 + 0x19);
          *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
          *(undefined8 *)(param_1[-1] + uVar23 + 0x19) = uVar5;
          param_3 = (param_3 - uVar23) - 1;
          pauVar21 = (undefined1 (*) [32])(*param_1 + uVar23 + 1);
          if (param_3 == 0) {
            return pauVar17;
          }
        }
      }
      else {
        uVar5 = *(undefined8 *)(*param_2 + 8);
        uVar10 = *(undefined8 *)(param_2[-1] + uVar23 + 0x11);
        uVar11 = *(undefined8 *)((long)(param_2[-1] + uVar23 + 0x11) + 8);
        *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
        *(undefined8 *)(*param_1 + 8) = uVar5;
        *(undefined8 *)(param_1[-1] + uVar23 + 0x11) = uVar10;
        *(undefined8 *)((long)(param_1[-1] + uVar23 + 0x11) + 8) = uVar11;
        param_3 = (param_3 - uVar23) - 1;
        pauVar21 = (undefined1 (*) [32])(*param_1 + uVar23 + 1);
        if (param_3 == 0) {
          return pauVar17;
        }
      }
    }
    else {
      uVar5 = *(undefined8 *)(*param_2 + 8);
      uVar10 = *(undefined8 *)(*param_2 + 0x10);
      uVar11 = *(undefined8 *)(*param_2 + 0x18);
      puVar1 = (undefined8 *)(param_2[-1] + uVar23 + 1);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
      *(undefined8 *)(*param_1 + 8) = uVar5;
      *(undefined8 *)(*param_1 + 0x10) = uVar10;
      *(undefined8 *)(*param_1 + 0x18) = uVar11;
      puVar1 = (undefined8 *)(param_1[-1] + uVar23 + 1);
      *puVar1 = uVar12;
      puVar1[1] = uVar13;
      puVar1[2] = uVar14;
      puVar1[3] = uVar15;
      param_3 = (param_3 - uVar23) - 1;
      pauVar21 = (undefined1 (*) [32])(*param_1 + uVar23 + 1);
      if (param_3 == 0) {
        return pauVar17;
      }
    }
  }
LAB_00737a50:
  lVar25 = param_3 - 0x20;
  if (0x1f < param_3 && lVar25 != 0) {
    *pauVar21 = auVar28;
    uVar23 = (ulong)((uint)(pauVar21 + 1) & 0x1f);
    pauVar22 = (undefined1 (*) [32])((long)(pauVar21 + 1) - uVar23);
    uVar23 = lVar25 + uVar23;
    while (0x7f < uVar23) {
      *pauVar22 = auVar28;
      pauVar22[1] = auVar28;
      pauVar22[2] = auVar28;
      pauVar22[3] = auVar28;
      pauVar22 = pauVar22 + 4;
      uVar23 = uVar23 - 0x80;
    }
    lVar26 = uVar23 - 0x40;
    if (SCARRY8(uVar23 - 0x80,0x40) == lVar26 < 0) {
      *pauVar22 = auVar28;
      pauVar22[1] = auVar28;
      lVar25 = uVar23 - 0x60;
      pauVar21 = pauVar22 + 2;
      if (0x1f < lVar26) {
        pauVar22[2] = auVar28;
        pauVar21 = pauVar22 + 3;
        goto LAB_00737ad4;
      }
    }
    else {
      lVar25 = uVar23 - 0x20;
      pauVar21 = pauVar22;
      if (SCARRY8(lVar26,0x20) == lVar25 < 0) {
        *pauVar22 = auVar28;
        pauVar21 = pauVar22 + 1;
        goto LAB_00737ad4;
      }
    }
  }
  lVar25 = lVar25 + 0x20;
LAB_00737ad4:
  uVar18 = (uint)lVar25;
  if (0x10 < uVar18) {
    *(undefined1 (*) [16])*pauVar21 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pauVar21[-1] + lVar25 + 0x10) = (undefined1  [16])0x0;
    return pauVar17;
  }
  if (8 < uVar18) {
    *(undefined8 *)*pauVar21 = 0;
    *(undefined8 *)(pauVar21[-1] + lVar25 + 0x18) = 0;
    return pauVar17;
  }
  if (4 < uVar18) {
    *(undefined4 *)*pauVar21 = 0;
    *(undefined4 *)(pauVar21[-1] + lVar25 + 0x1c) = 0;
    return pauVar17;
  }
  if (uVar18 < 3) {
    if (1 < uVar18) {
      *(undefined2 *)*pauVar21 = 0;
      return pauVar17;
    }
    if (uVar18 != 1) {
      return pauVar17;
    }
    (*pauVar21)[0] = 0;
    return pauVar17;
  }
  *(undefined2 *)*pauVar21 = 0;
  *(undefined2 *)(pauVar21[-1] + lVar25 + 0x1e) = 0;
  return pauVar17;
LAB_007374d5:
  param_1 = pauVar16 + 4;
  pauVar21 = pauVar22 + 4;
  *pauVar16 = auVar30;
  auVar30 = *pauVar21;
  pauVar16[1] = auVar29;
  auVar29 = pauVar22[5];
  auVar8 = vpminub_avx2(auVar30,auVar29);
  pauVar16[2] = auVar31;
  auVar31 = pauVar22[6];
  pauVar16[3] = auVar32;
  auVar32 = pauVar22[7];
  auVar9 = vpminub_avx2(auVar31,auVar32);
  auVar8 = vpminub_avx2(auVar9,auVar8);
  auVar8 = vpcmpeqb_avx2(auVar8,auVar7);
  uVar18 = (uint)(SUB321(auVar8 >> 7,0) & 1) | (uint)(SUB321(auVar8 >> 0xf,0) & 1) << 1 |
           (uint)(SUB321(auVar8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar8 >> 0x1f,0) & 1) << 3 |
           (uint)(SUB321(auVar8 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar8 >> 0x2f,0) & 1) << 5 |
           (uint)(SUB321(auVar8 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar8 >> 0x3f,0) & 1) << 7 |
           (uint)(SUB321(auVar8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar8 >> 0x4f,0) & 1) << 9 |
           (uint)(SUB321(auVar8 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar8 >> 0x5f,0) & 1) << 0xb
           | (uint)(SUB321(auVar8 >> 0x67,0) & 1) << 0xc |
           (uint)(SUB321(auVar8 >> 0x6f,0) & 1) << 0xd | (uint)(SUB321(auVar8 >> 0x77,0) & 1) << 0xe
           | (uint)SUB321(auVar8 >> 0x7f,0) << 0xf | (uint)(SUB321(auVar8 >> 0x87,0) & 1) << 0x10 |
           (uint)(SUB321(auVar8 >> 0x8f,0) & 1) << 0x11 |
           (uint)(SUB321(auVar8 >> 0x97,0) & 1) << 0x12 |
           (uint)(SUB321(auVar8 >> 0x9f,0) & 1) << 0x13 |
           (uint)(SUB321(auVar8 >> 0xa7,0) & 1) << 0x14 |
           (uint)(SUB321(auVar8 >> 0xaf,0) & 1) << 0x15 |
           (uint)(SUB321(auVar8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar8 >> 0xbf,0) << 0x17 |
           (uint)(SUB321(auVar8 >> 199,0) & 1) << 0x18 |
           (uint)(SUB321(auVar8 >> 0xcf,0) & 1) << 0x19 |
           (uint)(SUB321(auVar8 >> 0xd7,0) & 1) << 0x1a |
           (uint)(SUB321(auVar8 >> 0xdf,0) & 1) << 0x1b |
           (uint)(SUB321(auVar8 >> 0xe7,0) & 1) << 0x1c |
           (uint)(SUB321(auVar8 >> 0xef,0) & 1) << 0x1d |
           (uint)(SUB321(auVar8 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar8[0x1f] >> 7) << 0x1f;
  bVar27 = uVar24 < 0x80;
  uVar24 = uVar24 - 0x80;
  pauVar22 = pauVar21;
  pauVar16 = param_1;
  if (bVar27 || uVar24 == 0) goto LAB_00737b10;
  goto joined_r0x007374d3;
}

