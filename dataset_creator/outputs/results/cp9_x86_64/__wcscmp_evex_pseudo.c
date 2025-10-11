
uint __wcscmp_evex(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 in_ZMM16 [64];
  ulong uVar12;
  
  uVar11 = 0;
  auVar16 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  uVar5 = ((uint)param_1 | (uint)param_2) & 0xfff;
  if (uVar5 < 0xf81) {
    auVar18 = vmovdqu64_avx512vl(*param_1);
    uVar2 = vptestmd_avx512vl(auVar18,auVar18);
    uVar1 = vpcmpd_avx512vl(auVar18,*param_2,0);
    uVar5 = ((uint)uVar2 & (uint)uVar1) - 0xff;
    if (uVar5 != 0) {
      iVar9 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        iVar9 = iVar9 + 1;
      }
      iVar7 = *(int *)(*param_1 + (uint)(iVar9 << 2));
      iVar9 = *(int *)(*param_2 + (uint)(iVar9 << 2));
      bVar15 = SBORROW4(iVar7,iVar9);
      bVar14 = iVar7 - iVar9 < 0;
      if (iVar7 == iVar9) {
        return 0;
      }
      goto LAB_00755a90;
    }
    auVar18 = vmovdqu64_avx512vl(param_1[1]);
    uVar2 = vptestmd_avx512vl(auVar18,auVar18);
    uVar1 = vpcmpd_avx512vl(auVar18,param_2[1],0);
    uVar5 = ((uint)uVar2 & (uint)uVar1) - 0xff;
    if (uVar5 != 0) {
      iVar9 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        iVar9 = iVar9 + 1;
      }
      iVar7 = *(int *)(param_1[1] + (uint)(iVar9 << 2));
      iVar9 = *(int *)(param_2[1] + (uint)(iVar9 << 2));
      bVar15 = SBORROW4(iVar7,iVar9);
      bVar14 = iVar7 - iVar9 < 0;
      if (iVar7 == iVar9) {
        return 0;
      }
      goto LAB_00755a90;
    }
    auVar18 = vmovdqu64_avx512vl(param_1[2]);
    uVar2 = vptestmd_avx512vl(auVar18,auVar18);
    uVar1 = vpcmpd_avx512vl(auVar18,param_2[2],0);
    uVar5 = ((uint)uVar2 & (uint)uVar1) - 0xff;
    if (uVar5 != 0) {
      iVar9 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        iVar9 = iVar9 + 1;
      }
      iVar7 = *(int *)(param_1[2] + (uint)(iVar9 << 2));
      iVar9 = *(int *)(param_2[2] + (uint)(iVar9 << 2));
      bVar15 = SBORROW4(iVar7,iVar9);
      bVar14 = iVar7 - iVar9 < 0;
      if (iVar7 == iVar9) {
        return 0;
      }
      goto LAB_00755a90;
    }
    auVar18 = vmovdqu64_avx512vl(param_1[3]);
    uVar2 = vptestmd_avx512vl(auVar18,auVar18);
    uVar1 = vpcmpd_avx512vl(auVar18,param_2[3],0);
    uVar5 = ((uint)uVar2 & (uint)uVar1) - 0xff;
    if (uVar5 != 0) {
      iVar9 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        iVar9 = iVar9 + 1;
      }
      iVar7 = *(int *)(param_1[3] + (uint)(iVar9 << 2));
      iVar9 = *(int *)(param_2[3] + (uint)(iVar9 << 2));
      bVar15 = SBORROW4(iVar7,iVar9);
      bVar14 = iVar7 - iVar9 < 0;
      if (iVar7 == iVar9) {
        return 0;
      }
      goto LAB_00755a90;
    }
  }
  else {
    if (uVar5 < 0xfe1) {
      do {
        auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(*param_1 + uVar11));
        uVar2 = vptestmd_avx512vl(auVar18,auVar18);
        uVar1 = vpcmpd_avx512vl(auVar18,*(undefined1 (*) [32])(*param_2 + uVar11),0);
        uVar6 = ((uint)uVar2 & (uint)uVar1) - 0xff;
        if (uVar6 != 0) goto LAB_00755e60;
        uVar11 = (ulong)((int)uVar11 + 0x20);
        uVar5 = uVar5 + 0x20;
      } while ((int)uVar5 < 0xfe1);
    }
    if ((int)uVar5 < 0xff1) {
      auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [16])(*param_1 + uVar11));
      uVar2 = vptestmd_avx512vl(ZEXT1632(auVar17),ZEXT1632(auVar17));
      uVar1 = vpcmpd_avx512vl(auVar17,*(undefined1 (*) [16])(*param_2 + uVar11),0);
      uVar6 = ((uint)((byte)uVar2 & 0xf) & (uint)uVar1) - 0xf;
      if (uVar6 != 0) {
LAB_00755e60:
        iVar9 = 0;
        for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          iVar9 = iVar9 + 1;
        }
        iVar7 = *(int *)(*param_1 + (uint)(iVar9 << 2) + uVar11);
        iVar9 = *(int *)(*param_2 + (uint)(iVar9 << 2) + uVar11);
        bVar15 = SBORROW4(iVar7,iVar9);
        bVar14 = iVar7 - iVar9 < 0;
        if (iVar7 == iVar9) {
          return 0;
        }
        goto LAB_00755a90;
      }
      uVar11 = (ulong)((int)uVar11 + 0x10);
    }
    iVar9 = *(int *)(*param_1 + uVar11);
    iVar7 = *(int *)(*param_2 + uVar11);
    if (iVar9 == 0) {
      return -iVar7;
    }
    while( true ) {
      if (iVar9 != iVar7) {
        return -(uint)(iVar9 < iVar7) | 1;
      }
      uVar5 = (int)uVar11 + 4;
      uVar11 = (ulong)uVar5;
      if (uVar5 == 0x80) break;
      iVar9 = *(int *)(*param_1 + uVar11);
      iVar7 = *(int *)(*param_2 + uVar11);
      if (iVar9 == 0) {
        return -iVar7;
      }
    }
  }
  lVar8 = ((ulong)(param_1 + 4) & 0xffffffffffffff80) - (long)param_1;
  param_1 = (undefined1 (*) [32])((long)param_1 + lVar8);
  param_2 = (undefined1 (*) [32])(lVar8 + (long)param_2);
  uVar11 = 0x1000 - (ulong)((uint)param_2 & 0xfff) >> 7 & 0xffffffff;
  while( true ) {
    iVar9 = (int)uVar11;
    uVar11 = (ulong)(iVar9 - 1);
    if (iVar9 == 0) {
      uVar5 = (uint)param_2 & 0x7f;
      lVar8 = -(ulong)uVar5;
      if (uVar5 < 0x40) {
        auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])((long)param_1 + lVar8));
        auVar19 = vmovdqu64_avx512vl(*(undefined1 (*) [32])((long)param_1 + lVar8 + 0x20));
        uVar3 = vptestmd_avx512vl(auVar18,auVar18);
        uVar1 = vpcmpd_avx512vl(auVar18,*(undefined1 (*) [32])((long)param_2 + lVar8),0);
        uVar4 = vptestmd_avx512vl(auVar19,auVar19);
        uVar2 = vpcmpd_avx512vl(auVar19,*(undefined1 (*) [32])((long)param_2 + lVar8 + 0x20),0);
        uVar11 = (ulong)(((~((uint)uVar4 & (uint)uVar2) & 0xff) << 8 |
                         ~((uint)uVar3 & (uint)uVar1) & 0xff) >> ((int)uVar5 >> 2));
        if (uVar11 != 0) {
          iVar9 = 0;
          for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x8000000000000000) {
            iVar9 = iVar9 + 1;
          }
          iVar7 = *(int *)(*param_1 + (uint)(iVar9 << 2));
          iVar9 = *(int *)(*param_2 + (uint)(iVar9 << 2));
          bVar15 = SBORROW4(iVar7,iVar9);
          bVar14 = iVar7 - iVar9 < 0;
          if (iVar7 == iVar9) {
            return 0;
          }
          goto LAB_00755a90;
        }
      }
      auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])((long)param_1 + lVar8 + 0x40));
      auVar19 = vmovdqu64_avx512vl(*(undefined1 (*) [32])((long)param_1 + lVar8 + 0x60));
      uVar3 = vptestmd_avx512vl(auVar18,auVar18);
      uVar1 = vpcmpd_avx512vl(auVar18,*(undefined1 (*) [32])((long)param_2 + lVar8 + 0x40),0);
      uVar4 = vptestmd_avx512vl(auVar19,auVar19);
      uVar2 = vpcmpd_avx512vl(auVar19,*(undefined1 (*) [32])((long)param_2 + lVar8 + 0x60),0);
      uVar10 = (~((uint)uVar4 & (uint)uVar2) & 0xff) << 8 | ~((uint)uVar3 & (uint)uVar1) & 0xff;
      uVar13 = 0;
      uVar6 = uVar5 - 0x40;
      if (uVar6 != 0 && 0x3f < uVar5) {
        uVar13 = (ulong)uVar6;
        uVar10 = uVar10 >> ((byte)((int)uVar6 >> 2) & 0x1f);
      }
      uVar12 = (ulong)uVar10;
      uVar11 = 0x1f;
      if (uVar12 != 0) {
        iVar9 = 0;
        for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
          iVar9 = iVar9 + 1;
        }
        lVar8 = (ulong)(uint)(iVar9 << 2) + lVar8 + uVar13;
        iVar7 = *(int *)((long)param_1 + lVar8 + 0x40);
        iVar9 = *(int *)((long)param_2 + lVar8 + 0x40);
        bVar15 = SBORROW4(iVar7,iVar9);
        bVar14 = iVar7 - iVar9 < 0;
        if (iVar7 == iVar9) {
          return 0;
        }
        goto LAB_00755a90;
      }
    }
    auVar18 = vmovdqa64_avx512vl(*param_1);
    auVar19 = vmovdqa64_avx512vl(param_1[1]);
    auVar20 = vmovdqa64_avx512vl(param_1[2]);
    auVar21 = vmovdqa64_avx512vl(param_1[3]);
    auVar22 = vpminud_avx512vl(auVar19,auVar18);
    auVar23 = vpminud_avx512vl(auVar21,auVar20);
    auVar22 = vpminud_avx512vl(auVar23,auVar22);
    uVar2 = vptestmd_avx512vl(auVar22,auVar22);
    auVar22 = vpxorq_avx512vl(auVar18,*param_2);
    auVar23 = vpxorq_avx512vl(auVar19,param_2[1]);
    auVar24 = vpxorq_avx512vl(auVar20,param_2[2]);
    auVar25 = vpxorq_avx512vl(auVar21,param_2[3]);
    auVar26 = vporq_avx512vl(auVar23,auVar22);
    auVar27 = vporq_avx512vl(auVar25,auVar24);
    auVar26 = vporq_avx512vl(auVar27,auVar26);
    uVar1 = vpcmpd_avx512vl(auVar26,ZEXT1632(auVar16),0);
    if (((uint)uVar2 & (uint)uVar1) != 0xff) break;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  }
  uVar2 = vptestmd_avx512vl(auVar18,auVar18);
  uVar1 = vpcmpd_avx512vl(auVar22,ZEXT1632(auVar16),0);
  uVar5 = ((uint)uVar2 & (uint)uVar1) - 0xff;
  if (uVar5 == 0) {
    uVar2 = vptestmd_avx512vl(auVar19,auVar19);
    auVar18 = ZEXT1632(auVar16);
    uVar1 = vpcmpd_avx512vl(auVar23,auVar18,0);
    uVar5 = ((uint)uVar2 & (uint)uVar1) - 0xff;
    if (uVar5 == 0) {
      uVar2 = vptestmd_avx512vl(auVar20,auVar20);
      uVar1 = vpcmpd_avx512vl(auVar24,auVar18,0);
      uVar5 = ((uint)uVar2 & (uint)uVar1) - 0xff;
      if (uVar5 == 0) {
        uVar2 = vptestmd_avx512vl(auVar21,auVar21);
        uVar1 = vpcmpd_avx512vl(auVar25,auVar18,0);
        iVar9 = 0;
        for (uVar5 = ((uint)uVar2 & (uint)uVar1) - 0xff; (uVar5 & 1) == 0;
            uVar5 = uVar5 >> 1 | 0x80000000) {
          iVar9 = iVar9 + 1;
        }
        iVar7 = *(int *)(param_1[3] + (uint)(iVar9 << 2));
        iVar9 = *(int *)(param_2[3] + (uint)(iVar9 << 2));
        bVar15 = SBORROW4(iVar7,iVar9);
        bVar14 = iVar7 - iVar9 < 0;
        if (iVar7 == iVar9) {
          return 0;
        }
      }
      else {
        iVar9 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          iVar9 = iVar9 + 1;
        }
        iVar7 = *(int *)(param_1[2] + (uint)(iVar9 << 2));
        iVar9 = *(int *)(param_2[2] + (uint)(iVar9 << 2));
        bVar15 = SBORROW4(iVar7,iVar9);
        bVar14 = iVar7 - iVar9 < 0;
        if (iVar7 == iVar9) {
          return 0;
        }
      }
    }
    else {
      iVar9 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        iVar9 = iVar9 + 1;
      }
      iVar7 = *(int *)(param_1[1] + (uint)(iVar9 << 2));
      iVar9 = *(int *)(param_2[1] + (uint)(iVar9 << 2));
      bVar15 = SBORROW4(iVar7,iVar9);
      bVar14 = iVar7 - iVar9 < 0;
      if (iVar7 == iVar9) {
        return 0;
      }
    }
  }
  else {
    iVar9 = 0;
    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      iVar9 = iVar9 + 1;
    }
    iVar7 = *(int *)(*param_1 + (uint)(iVar9 << 2));
    iVar9 = *(int *)(*param_2 + (uint)(iVar9 << 2));
    bVar15 = SBORROW4(iVar7,iVar9);
    bVar14 = iVar7 - iVar9 < 0;
    if (iVar7 == iVar9) {
      return 0;
    }
  }
LAB_00755a90:
  return -(uint)(bVar15 != bVar14) | 1;
}

