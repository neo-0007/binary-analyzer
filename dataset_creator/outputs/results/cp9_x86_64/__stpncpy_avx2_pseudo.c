
undefined1 (*) [32]
__stpncpy_avx2(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulong param_3)

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
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  undefined1 (*pauVar20) [32];
  undefined1 (*pauVar21) [32];
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  bool bVar26;
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  
  if (param_3 == 0) {
    return param_1;
  }
  uVar17 = (uint)param_2;
  auVar27 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if ((uVar17 & 0x7f) < 0x41) {
    auVar29 = param_2[1];
    auVar28 = vpcmpeqb_avx2(auVar27,*param_2);
    uVar19 = (uint)(SUB321(auVar28 >> 7,0) & 1) | (uint)(SUB321(auVar28 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar28 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar28 >> 0x1f,0) & 1) << 3
             | (uint)(SUB321(auVar28 >> 0x27,0) & 1) << 4 |
             (uint)(SUB321(auVar28 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar28 >> 0x37,0) & 1) << 6
             | (uint)(SUB321(auVar28 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar28 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar28 >> 0x4f,0) & 1) << 9
             | (uint)(SUB321(auVar28 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar28 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar28 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar28 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar28 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar28 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar28 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar28 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar28 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar28 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar28 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar28 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar28 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar28 >> 0xbf,0) << 0x17
             | (uint)(SUB321(auVar28 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar28 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar28 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar28 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar28 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar28 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar28 >> 0xf7,0) & 1) << 0x1e |
             (uint)(byte)(auVar28[0x1f] >> 7) << 0x1f;
    if (param_3 < 0x21) {
LAB_0079db8c:
      if (uVar19 == 0) goto LAB_0079dfd4;
      uVar17 = 0;
      if (uVar19 != 0) {
        for (; (uVar19 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
        }
      }
      uVar22 = (ulong)uVar17;
      if ((uint)param_3 <= uVar17) goto LAB_0079dfd4;
    }
    else {
      if (uVar19 == 0) {
        *param_1 = *param_2;
        auVar29 = vpcmpeqb_avx2(auVar27,auVar29);
        uVar19 = (uint)(SUB321(auVar29 >> 7,0) & 1) | (uint)(SUB321(auVar29 >> 0xf,0) & 1) << 1 |
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
                 (uint)(SUB321(auVar29 >> 0x77,0) & 1) << 0xe |
                 (uint)SUB321(auVar29 >> 0x7f,0) << 0xf |
                 (uint)(SUB321(auVar29 >> 0x87,0) & 1) << 0x10 |
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
        if (param_3 < 0x41) {
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          param_3 = param_3 - 0x20;
          goto LAB_0079db8c;
        }
        if (uVar19 == 0) {
          uVar18 = (ulong)(uVar17 & 0x1f);
          goto LAB_0079d730;
        }
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        param_3 = param_3 - 0x20;
      }
LAB_0079d99b:
      uVar17 = 0;
      if (uVar19 != 0) {
        for (; (uVar19 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
        }
      }
      uVar22 = (ulong)uVar17;
    }
    goto LAB_0079d99e;
  }
  pauVar20 = (undefined1 (*) [32])((ulong)param_2 & 0xffffffffffffffe0);
  uVar17 = uVar17 & 0x1f;
  uVar18 = (ulong)uVar17;
  auVar29 = vpcmpeqb_avx2(auVar27,*pauVar20);
  uVar19 = ((uint)(SUB321(auVar29 >> 7,0) & 1) | (uint)(SUB321(auVar29 >> 0xf,0) & 1) << 1 |
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
            (uint)(SUB321(auVar29 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar29[0x1f] >> 7) << 0x1f
           ) >> (sbyte)uVar17;
  if (param_3 <= -uVar18 + 0x20) {
    if (uVar19 == 0) {
      param_2 = (undefined1 (*) [32])(*pauVar20 + uVar18);
      goto LAB_0079dfd4;
    }
    uVar17 = 0;
    if (uVar19 != 0) {
      for (; (uVar19 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
      }
    }
joined_r0x0079db22:
    uVar22 = (ulong)uVar17;
    param_2 = (undefined1 (*) [32])(*pauVar20 + uVar18);
    if ((uint)param_3 <= uVar17) {
LAB_0079dfd4:
      uVar17 = (uint)param_3;
      if (uVar17 == 0x41) {
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
        return (undefined1 (*) [32])(param_1[2] + 1);
      }
      if (0x20 < uVar17) {
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
        return (undefined1 (*) [32])(*param_1 + param_3);
      }
      if (0x10 < uVar17) {
        uVar5 = *(undefined8 *)(*param_2 + 8);
        uVar10 = *(undefined8 *)(param_2[-1] + param_3 + 0x10);
        uVar11 = *(undefined8 *)((long)(param_2[-1] + param_3 + 0x10) + 8);
        *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
        *(undefined8 *)(*param_1 + 8) = uVar5;
        *(undefined8 *)(param_1[-1] + param_3 + 0x10) = uVar10;
        *(undefined8 *)((long)(param_1[-1] + param_3 + 0x10) + 8) = uVar11;
        return (undefined1 (*) [32])(*param_1 + param_3);
      }
      if (8 < uVar17) {
        uVar5 = *(undefined8 *)(param_2[-1] + param_3 + 0x18);
        *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
        *(undefined8 *)(param_1[-1] + param_3 + 0x18) = uVar5;
        return (undefined1 (*) [32])(*param_1 + param_3);
      }
      if (4 < uVar17) {
        uVar4 = *(undefined4 *)(param_2[-1] + param_3 + 0x1c);
        *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
        *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar4;
        return (undefined1 (*) [32])(*param_1 + param_3);
      }
      if (2 < uVar17) {
        uVar3 = *(undefined2 *)(param_2[-1] + param_3 + 0x1e);
        *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
        *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar3;
        return (undefined1 (*) [32])(*param_1 + param_3);
      }
      if (1 < uVar17) {
        *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
        return (undefined1 (*) [32])(*param_1 + 2);
      }
      if (uVar17 != 1) {
        return param_1;
      }
      (*param_1)[0] = (*param_2)[0];
      return (undefined1 (*) [32])(*param_1 + 1);
    }
    goto LAB_0079d99e;
  }
  if (uVar19 != 0) {
    param_2 = (undefined1 (*) [32])(*pauVar20 + uVar18);
    goto LAB_0079d99b;
  }
  auVar29 = vpcmpeqb_avx2(auVar27,pauVar20[1]);
  uVar19 = (uint)(SUB321(auVar29 >> 7,0) & 1) | (uint)(SUB321(auVar29 >> 0xf,0) & 1) << 1 |
           (uint)(SUB321(auVar29 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar29 >> 0x1f,0) & 1) << 3 |
           (uint)(SUB321(auVar29 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar29 >> 0x2f,0) & 1) << 5 |
           (uint)(SUB321(auVar29 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar29 >> 0x3f,0) & 1) << 7 |
           (uint)(SUB321(auVar29 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar29 >> 0x4f,0) & 1) << 9 |
           (uint)(SUB321(auVar29 >> 0x57,0) & 1) << 10 |
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
           (uint)(SUB321(auVar29 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar29 >> 0xbf,0) << 0x17 |
           (uint)(SUB321(auVar29 >> 199,0) & 1) << 0x18 |
           (uint)(SUB321(auVar29 >> 0xcf,0) & 1) << 0x19 |
           (uint)(SUB321(auVar29 >> 0xd7,0) & 1) << 0x1a |
           (uint)(SUB321(auVar29 >> 0xdf,0) & 1) << 0x1b |
           (uint)(SUB321(auVar29 >> 0xe7,0) & 1) << 0x1c |
           (uint)(SUB321(auVar29 >> 0xef,0) & 1) << 0x1d |
           (uint)(SUB321(auVar29 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar29[0x1f] >> 7) << 0x1f;
  if (param_3 <= -uVar18 + 0x40) {
    if (uVar19 == 0) {
      param_2 = (undefined1 (*) [32])(*pauVar20 + uVar18);
      goto LAB_0079dfd4;
    }
    iVar6 = 0;
    if (uVar19 != 0) {
      for (; (uVar19 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
      }
    }
    uVar17 = (iVar6 + 0x20) - uVar17;
    goto joined_r0x0079db22;
  }
  if (uVar19 == 0) {
    puVar1 = (undefined8 *)(*pauVar20 + uVar18);
    uVar5 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    *(undefined8 *)*param_1 = *puVar1;
    *(undefined8 *)(*param_1 + 8) = uVar5;
    *(undefined8 *)(*param_1 + 0x10) = uVar10;
    *(undefined8 *)(*param_1 + 0x18) = uVar11;
LAB_0079d730:
    param_2 = (undefined1 (*) [32])((ulong)param_2 & 0xffffffffffffffe0);
    param_1 = (undefined1 (*) [32])((long)param_1 - uVar18);
    uVar22 = param_3 + uVar18 | -(ulong)CARRY8(param_3,uVar18);
    uVar5 = *(undefined8 *)(param_2[1] + 8);
    uVar10 = *(undefined8 *)(param_2[1] + 0x10);
    uVar11 = *(undefined8 *)(param_2[1] + 0x18);
    *(undefined8 *)param_1[1] = *(undefined8 *)param_2[1];
    *(undefined8 *)(param_1[1] + 8) = uVar5;
    *(undefined8 *)(param_1[1] + 0x10) = uVar10;
    *(undefined8 *)(param_1[1] + 0x18) = uVar11;
    auVar29 = param_2[2];
    auVar28 = vpcmpeqb_avx2(auVar27,auVar29);
    uVar17 = (uint)(SUB321(auVar28 >> 7,0) & 1) | (uint)(SUB321(auVar28 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar28 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar28 >> 0x1f,0) & 1) << 3
             | (uint)(SUB321(auVar28 >> 0x27,0) & 1) << 4 |
             (uint)(SUB321(auVar28 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar28 >> 0x37,0) & 1) << 6
             | (uint)(SUB321(auVar28 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar28 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar28 >> 0x4f,0) & 1) << 9
             | (uint)(SUB321(auVar28 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar28 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar28 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar28 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar28 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar28 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar28 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar28 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar28 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar28 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar28 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar28 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar28 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar28 >> 0xbf,0) << 0x17
             | (uint)(SUB321(auVar28 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar28 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar28 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar28 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar28 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar28 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar28 >> 0xf7,0) & 1) << 0x1e |
             (uint)(byte)(auVar28[0x1f] >> 7) << 0x1f;
    uVar18 = 0x40;
    param_3 = uVar22 - 0x60;
    pauVar20 = param_2;
    if (uVar22 < 0x60 || param_3 == 0) {
LAB_0079db40:
      if (uVar17 == 0) {
LAB_0079db45:
        param_3 = param_3 + 0x20;
        param_1 = (undefined1 (*) [32])(*param_1 + uVar18);
        param_2 = (undefined1 (*) [32])(*pauVar20 + uVar18);
        goto LAB_0079dfd4;
      }
      param_3 = param_3 + 0x20;
      param_1 = (undefined1 (*) [32])(*param_1 + uVar18);
      param_2 = (undefined1 (*) [32])(*pauVar20 + uVar18);
      uVar19 = 0;
      if (uVar17 != 0) {
        for (; (uVar17 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
        }
      }
      uVar22 = (ulong)uVar19;
      if ((uint)param_3 <= uVar19) goto LAB_0079dfd4;
      goto LAB_0079d99e;
    }
    if (uVar17 != 0) goto LAB_0079de00;
    param_1[2] = auVar29;
    auVar28 = param_2[3];
    auVar29 = vpcmpeqb_avx2(auVar27,auVar28);
    uVar17 = (uint)(SUB321(auVar29 >> 7,0) & 1) | (uint)(SUB321(auVar29 >> 0xf,0) & 1) << 1 |
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
    uVar18 = 0x60;
    bVar26 = param_3 < 0x20;
    param_3 = uVar22 - 0x80;
    if (bVar26 || param_3 == 0) goto LAB_0079db40;
    if (uVar17 != 0) {
LAB_0079dad0:
      *(undefined1 (*) [32])(*param_1 + uVar18) = auVar28;
      goto LAB_0079de10;
    }
    param_1[3] = auVar28;
    auVar29 = param_2[4];
    auVar28 = vpcmpeqb_avx2(auVar27,auVar29);
    uVar17 = (uint)(SUB321(auVar28 >> 7,0) & 1) | (uint)(SUB321(auVar28 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar28 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar28 >> 0x1f,0) & 1) << 3
             | (uint)(SUB321(auVar28 >> 0x27,0) & 1) << 4 |
             (uint)(SUB321(auVar28 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar28 >> 0x37,0) & 1) << 6
             | (uint)(SUB321(auVar28 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar28 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar28 >> 0x4f,0) & 1) << 9
             | (uint)(SUB321(auVar28 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar28 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar28 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar28 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar28 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar28 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar28 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar28 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar28 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar28 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar28 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar28 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar28 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar28 >> 0xbf,0) << 0x17
             | (uint)(SUB321(auVar28 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar28 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar28 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar28 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar28 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar28 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar28 >> 0xf7,0) & 1) << 0x1e |
             (uint)(byte)(auVar28[0x1f] >> 7) << 0x1f;
    uVar18 = 0x80;
    bVar26 = param_3 < 0x20;
    param_3 = uVar22 - 0xa0;
    if (bVar26 || param_3 == 0) goto LAB_0079db40;
    if (uVar17 != 0) {
LAB_0079dac0:
      *(undefined1 (*) [32])(*param_1 + uVar18) = auVar29;
      goto LAB_0079de10;
    }
    param_1[4] = auVar29;
    auVar29 = param_2[5];
    auVar28 = vpcmpeqb_avx2(auVar27,auVar29);
    uVar17 = (uint)(SUB321(auVar28 >> 7,0) & 1) | (uint)(SUB321(auVar28 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar28 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar28 >> 0x1f,0) & 1) << 3
             | (uint)(SUB321(auVar28 >> 0x27,0) & 1) << 4 |
             (uint)(SUB321(auVar28 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar28 >> 0x37,0) & 1) << 6
             | (uint)(SUB321(auVar28 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar28 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar28 >> 0x4f,0) & 1) << 9
             | (uint)(SUB321(auVar28 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar28 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar28 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar28 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar28 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar28 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar28 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar28 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar28 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar28 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar28 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar28 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar28 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar28 >> 0xbf,0) << 0x17
             | (uint)(SUB321(auVar28 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar28 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar28 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar28 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar28 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar28 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar28 >> 0xf7,0) & 1) << 0x1e |
             (uint)(byte)(auVar28[0x1f] >> 7) << 0x1f;
    uVar18 = 0xa0;
    bVar26 = param_3 < 0x20;
    param_3 = uVar22 - 0xc0;
    if (bVar26 || param_3 == 0) goto LAB_0079db40;
    if (uVar17 == 0) {
      param_1[5] = auVar29;
      auVar29 = param_2[6];
      auVar28 = vpcmpeqb_avx2(auVar27,auVar29);
      uVar17 = (uint)(SUB321(auVar28 >> 7,0) & 1) | (uint)(SUB321(auVar28 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar28 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar28 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar28 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar28 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar28 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar28 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar28 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar28 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar28 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar28 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar28 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar28 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar28 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar28 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar28 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar28 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar28 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar28 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar28 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar28 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar28 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar28 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar28 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar28 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar28 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar28 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar28 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar28 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar28 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar28[0x1f] >> 7) << 0x1f;
      uVar18 = 0xc0;
      bVar26 = param_3 < 0x20;
      param_3 = uVar22 - 0xe0;
      if (bVar26 || param_3 == 0) goto LAB_0079db40;
      if (uVar17 != 0) goto LAB_0079de00;
      auVar28 = param_2[7];
      param_1[6] = auVar29;
      auVar7 = vpcmpeqb_avx2(auVar27,auVar28);
      uVar17 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
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
      uVar18 = 0xe0;
      bVar26 = param_3 < 0x20;
      param_3 = uVar22 - 0x100;
      if (bVar26 || param_3 == 0) goto LAB_0079db40;
      if (uVar17 != 0) goto LAB_0079dad0;
      param_1[7] = auVar28;
      pauVar20 = (undefined1 (*) [32])((ulong)(param_2 + 8) & 0xffffffffffffff80);
      param_1 = (undefined1 (*) [32])((long)param_1 - ((long)param_2 - (long)pauVar20));
      uVar22 = uVar22 + ((long)param_2 - (long)pauVar20);
      auVar29 = *pauVar20;
      auVar28 = pauVar20[1];
      auVar30 = pauVar20[2];
      auVar31 = pauVar20[3];
      auVar8 = vpminub_avx2(auVar29,auVar28);
      auVar9 = vpminub_avx2(auVar30,auVar31);
      auVar8 = vpminub_avx2(auVar9,auVar8);
      auVar8 = vpcmpeqb_avx2(auVar8,auVar7);
      uVar17 = (uint)(SUB321(auVar8 >> 7,0) & 1) | (uint)(SUB321(auVar8 >> 0xf,0) & 1) << 1 |
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
      uVar23 = uVar22 - 0x80;
      pauVar16 = pauVar20;
      pauVar21 = param_1;
      if (0x7f < uVar22 && uVar23 != 0) {
joined_r0x0079d893:
        if (uVar17 == 0) goto LAB_0079d895;
        auVar7 = vpcmpeqb_avx2(auVar27,auVar29);
        uVar17 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
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
        if (uVar17 == 0) {
          auVar7 = vpcmpeqb_avx2(auVar27,auVar28);
          uVar17 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
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
          if (uVar17 == 0) {
            auVar7 = vpcmpeqb_avx2(auVar27,auVar30);
            uVar17 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
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
            if (uVar17 == 0) {
              auVar7 = vpcmpeqb_avx2(auVar27,auVar31);
              uVar19 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1
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
              uVar17 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                }
              }
              uVar22 = (ulong)uVar17;
              *pauVar21 = auVar29;
              pauVar21[1] = auVar28;
              pauVar21[2] = auVar30;
              pauVar21[3] = auVar31;
              param_3 = (uVar23 + 0x1f) - uVar22;
              pauVar20 = (undefined1 (*) [32])(pauVar21[3] + uVar22 + 1);
              pauVar16 = (undefined1 (*) [32])(pauVar21[3] + uVar22);
            }
            else {
              uVar19 = 0;
              if (uVar17 != 0) {
                for (; (uVar17 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
                }
              }
              uVar22 = (ulong)uVar19;
              *pauVar21 = auVar29;
              pauVar21[1] = auVar28;
              pauVar21[2] = auVar30;
              param_3 = (uVar23 + 0x3f) - uVar22;
              pauVar20 = (undefined1 (*) [32])(pauVar21[2] + uVar22 + 1);
              pauVar16 = (undefined1 (*) [32])(pauVar21[2] + uVar22);
            }
          }
          else {
            uVar19 = 0;
            if (uVar17 != 0) {
              for (; (uVar17 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
              }
            }
            uVar22 = (ulong)uVar19;
            *pauVar21 = auVar29;
            pauVar21[1] = auVar28;
            param_3 = (uVar23 + 0x5f) - uVar22;
            pauVar20 = (undefined1 (*) [32])(pauVar21[1] + uVar22 + 1);
            pauVar16 = (undefined1 (*) [32])(pauVar21[1] + uVar22);
          }
        }
        else {
          uVar19 = 0;
          if (uVar17 != 0) {
            for (; (uVar17 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
            }
          }
          uVar22 = (ulong)uVar19;
          *pauVar21 = auVar29;
          param_3 = (uVar23 + 0x7f) - uVar22;
          pauVar20 = (undefined1 (*) [32])(*pauVar21 + uVar22 + 1);
          pauVar16 = (undefined1 (*) [32])(*pauVar21 + uVar22);
        }
        goto LAB_0079de30;
      }
LAB_0079def0:
      if (uVar17 != 0) {
        uVar18 = 0;
        auVar7 = vpcmpeqb_avx2(auVar27,auVar29);
        uVar17 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
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
        param_3 = uVar23 + 0x60;
        if (param_3 == 0 || SCARRY8(uVar23,0x60) != (long)param_3 < 0) goto LAB_0079db40;
        if (uVar17 != 0) goto LAB_0079dac0;
        auVar7 = vpcmpeqb_avx2(auVar27,auVar28);
        uVar17 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
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
        *param_1 = auVar29;
        uVar18 = 0x20;
        bVar26 = param_3 < 0x20;
        param_3 = uVar23 + 0x40;
        if (bVar26 || param_3 == 0) goto LAB_0079db40;
        if (uVar17 == 0) {
          auVar29 = vpcmpeqb_avx2(auVar27,auVar30);
          uVar17 = (uint)(SUB321(auVar29 >> 7,0) & 1) | (uint)(SUB321(auVar29 >> 0xf,0) & 1) << 1 |
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
                   (uint)(SUB321(auVar29 >> 0x77,0) & 1) << 0xe |
                   (uint)SUB321(auVar29 >> 0x7f,0) << 0xf |
                   (uint)(SUB321(auVar29 >> 0x87,0) & 1) << 0x10 |
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
          param_1[1] = auVar28;
          uVar18 = 0x40;
          bVar26 = param_3 < 0x20;
          param_3 = uVar23 + 0x20;
          if (bVar26 || param_3 == 0) goto LAB_0079db40;
          if (uVar17 == 0) {
            auVar29 = vpcmpeqb_avx2(auVar27,auVar31);
            uVar19 = (uint)(SUB321(auVar29 >> 7,0) & 1) | (uint)(SUB321(auVar29 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar29 >> 0x17,0) & 1) << 2 |
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
                     (uint)(SUB321(auVar29 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar29 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar29 >> 0x87,0) & 1) << 0x10 |
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
            param_1[2] = auVar30;
            param_1 = param_1 + 3;
            param_2 = pauVar20 + 3;
            uVar17 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
              }
            }
            uVar22 = (ulong)uVar17;
            if ((uint)param_3 <= uVar17) goto LAB_0079dfd4;
            goto LAB_0079d99e;
          }
          param_1[2] = auVar30;
        }
        else {
          param_1[1] = auVar28;
        }
        goto LAB_0079de10;
      }
      uVar18 = uVar23 + 0x80 & 0xffffffffffffffe0;
      uVar22 = uVar23 + 0x60;
      param_3 = uVar22;
      if (SCARRY8(uVar23,0x60) == (long)uVar22 < 0) {
        *param_1 = auVar29;
        param_3 = uVar23 + 0x40;
        if (0x1f < uVar22) {
          param_1[1] = auVar28;
          param_3 = uVar23 + 0x20;
          if ((0x1f < uVar23 + 0x40) &&
             (param_1[2] = auVar30, param_3 = uVar23, 0x1f < uVar23 + 0x20)) {
            param_1[3] = auVar31;
            return param_1 + 4;
          }
        }
      }
      goto LAB_0079db45;
    }
LAB_0079de00:
    *(undefined1 (*) [32])(*param_1 + uVar18) = auVar29;
LAB_0079de10:
    uVar19 = 0;
    if (uVar17 != 0) {
      for (; (uVar17 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
      }
    }
    uVar22 = (ulong)uVar19;
    pauVar16 = (undefined1 (*) [32])(*param_1 + uVar22 + uVar18);
    param_3 = (param_3 + 0x1f) - uVar22;
    pauVar20 = (undefined1 (*) [32])(*param_1 + uVar22 + uVar18 + 1);
  }
  else {
    iVar6 = 0;
    if (uVar19 != 0) {
      for (; (uVar19 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
      }
    }
    param_2 = (undefined1 (*) [32])(*pauVar20 + uVar18);
    uVar22 = (ulong)((iVar6 + 0x20) - uVar17);
LAB_0079d99e:
    uVar17 = (uint)uVar22;
    if (uVar17 < 0x20) {
      if (uVar17 < 0x10) {
        if (uVar17 < 8) {
          if (uVar17 < 4) {
            if (uVar17 == 3) {
              *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
              pauVar16 = (undefined1 (*) [32])(*param_1 + 3);
              param_3 = param_3 - 4;
              pauVar20 = (undefined1 (*) [32])(*param_1 + 4);
              if (param_3 == 0) {
                return pauVar16;
              }
            }
            else if (uVar17 < 2) {
              if (uVar17 == 1) {
                *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
                pauVar16 = (undefined1 (*) [32])(*param_1 + 1);
                param_3 = param_3 - 2;
                pauVar20 = (undefined1 (*) [32])(*param_1 + 2);
                if (param_3 == 0) {
                  return pauVar16;
                }
              }
              else {
                (*param_1)[0] = 0;
                param_3 = param_3 - 1;
                pauVar20 = (undefined1 (*) [32])(*param_1 + 1);
                pauVar16 = param_1;
                if (param_3 == 0) {
                  return param_1;
                }
              }
            }
            else {
              *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
              (*param_1)[2] = 0;
              pauVar16 = (undefined1 (*) [32])(*param_1 + 2);
              param_3 = param_3 - 3;
              pauVar20 = (undefined1 (*) [32])(*param_1 + 3);
              if (param_3 == 0) {
                return pauVar16;
              }
            }
          }
          else {
            *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
            *(undefined4 *)(param_1[-1] + uVar22 + 0x1d) =
                 *(undefined4 *)(param_2[-1] + uVar22 + 0x1d);
            pauVar16 = (undefined1 (*) [32])(*param_1 + uVar22);
            param_3 = (param_3 - uVar22) - 1;
            pauVar20 = (undefined1 (*) [32])(*param_1 + uVar22 + 1);
            if (param_3 == 0) {
              return pauVar16;
            }
          }
        }
        else {
          uVar5 = *(undefined8 *)(param_2[-1] + uVar22 + 0x19);
          *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
          *(undefined8 *)(param_1[-1] + uVar22 + 0x19) = uVar5;
          pauVar16 = (undefined1 (*) [32])(*param_1 + uVar22);
          param_3 = (param_3 - uVar22) - 1;
          pauVar20 = (undefined1 (*) [32])(*param_1 + uVar22 + 1);
          if (param_3 == 0) {
            return pauVar16;
          }
        }
      }
      else {
        uVar5 = *(undefined8 *)(*param_2 + 8);
        uVar10 = *(undefined8 *)(param_2[-1] + uVar22 + 0x11);
        uVar11 = *(undefined8 *)((long)(param_2[-1] + uVar22 + 0x11) + 8);
        *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
        *(undefined8 *)(*param_1 + 8) = uVar5;
        *(undefined8 *)(param_1[-1] + uVar22 + 0x11) = uVar10;
        *(undefined8 *)((long)(param_1[-1] + uVar22 + 0x11) + 8) = uVar11;
        pauVar16 = (undefined1 (*) [32])(*param_1 + uVar22);
        param_3 = (param_3 - uVar22) - 1;
        pauVar20 = (undefined1 (*) [32])(*param_1 + uVar22 + 1);
        if (param_3 == 0) {
          return pauVar16;
        }
      }
    }
    else {
      uVar5 = *(undefined8 *)(*param_2 + 8);
      uVar10 = *(undefined8 *)(*param_2 + 0x10);
      uVar11 = *(undefined8 *)(*param_2 + 0x18);
      puVar1 = (undefined8 *)(param_2[-1] + uVar22 + 1);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
      *(undefined8 *)(*param_1 + 8) = uVar5;
      *(undefined8 *)(*param_1 + 0x10) = uVar10;
      *(undefined8 *)(*param_1 + 0x18) = uVar11;
      puVar1 = (undefined8 *)(param_1[-1] + uVar22 + 1);
      *puVar1 = uVar12;
      puVar1[1] = uVar13;
      puVar1[2] = uVar14;
      puVar1[3] = uVar15;
      pauVar16 = (undefined1 (*) [32])(*param_1 + uVar22);
      param_3 = (param_3 - uVar22) - 1;
      pauVar20 = (undefined1 (*) [32])(*param_1 + uVar22 + 1);
      if (param_3 == 0) {
        return pauVar16;
      }
    }
  }
LAB_0079de30:
  lVar24 = param_3 - 0x20;
  if (0x1f < param_3 && lVar24 != 0) {
    *pauVar20 = auVar27;
    uVar22 = (ulong)((uint)(pauVar20 + 1) & 0x1f);
    pauVar21 = (undefined1 (*) [32])((long)(pauVar20 + 1) - uVar22);
    uVar22 = lVar24 + uVar22;
    while (0x7f < uVar22) {
      *pauVar21 = auVar27;
      pauVar21[1] = auVar27;
      pauVar21[2] = auVar27;
      pauVar21[3] = auVar27;
      pauVar21 = pauVar21 + 4;
      uVar22 = uVar22 - 0x80;
    }
    lVar25 = uVar22 - 0x40;
    if (SCARRY8(uVar22 - 0x80,0x40) == lVar25 < 0) {
      *pauVar21 = auVar27;
      pauVar21[1] = auVar27;
      lVar24 = uVar22 - 0x60;
      pauVar20 = pauVar21 + 2;
      if (0x1f < lVar25) {
        pauVar21[2] = auVar27;
        pauVar20 = pauVar21 + 3;
        goto LAB_0079deb4;
      }
    }
    else {
      lVar24 = uVar22 - 0x20;
      pauVar20 = pauVar21;
      if (SCARRY8(lVar25,0x20) == lVar24 < 0) {
        *pauVar21 = auVar27;
        pauVar20 = pauVar21 + 1;
        goto LAB_0079deb4;
      }
    }
  }
  lVar24 = lVar24 + 0x20;
LAB_0079deb4:
  uVar17 = (uint)lVar24;
  if (0x10 < uVar17) {
    *(undefined1 (*) [16])*pauVar20 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pauVar20[-1] + lVar24 + 0x10) = (undefined1  [16])0x0;
    return pauVar16;
  }
  if (8 < uVar17) {
    *(undefined8 *)*pauVar20 = 0;
    *(undefined8 *)(pauVar20[-1] + lVar24 + 0x18) = 0;
    return pauVar16;
  }
  if (4 < uVar17) {
    *(undefined4 *)*pauVar20 = 0;
    *(undefined4 *)(pauVar20[-1] + lVar24 + 0x1c) = 0;
    return pauVar16;
  }
  if (uVar17 < 3) {
    if (1 < uVar17) {
      *(undefined2 *)*pauVar20 = 0;
      return pauVar16;
    }
    if (uVar17 != 1) {
      return pauVar16;
    }
    (*pauVar20)[0] = 0;
    return pauVar16;
  }
  *(undefined2 *)*pauVar20 = 0;
  *(undefined2 *)(pauVar20[-1] + lVar24 + 0x1e) = 0;
  return pauVar16;
LAB_0079d895:
  param_1 = pauVar21 + 4;
  pauVar20 = pauVar16 + 4;
  *pauVar21 = auVar29;
  auVar29 = *pauVar20;
  pauVar21[1] = auVar28;
  auVar28 = pauVar16[5];
  auVar8 = vpminub_avx2(auVar29,auVar28);
  pauVar21[2] = auVar30;
  auVar30 = pauVar16[6];
  pauVar21[3] = auVar31;
  auVar31 = pauVar16[7];
  auVar9 = vpminub_avx2(auVar30,auVar31);
  auVar8 = vpminub_avx2(auVar9,auVar8);
  auVar8 = vpcmpeqb_avx2(auVar8,auVar7);
  uVar17 = (uint)(SUB321(auVar8 >> 7,0) & 1) | (uint)(SUB321(auVar8 >> 0xf,0) & 1) << 1 |
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
  bVar26 = uVar23 < 0x80;
  uVar23 = uVar23 - 0x80;
  pauVar16 = pauVar20;
  pauVar21 = param_1;
  if (bVar26 || uVar23 == 0) goto LAB_0079def0;
  goto joined_r0x0079d893;
}

