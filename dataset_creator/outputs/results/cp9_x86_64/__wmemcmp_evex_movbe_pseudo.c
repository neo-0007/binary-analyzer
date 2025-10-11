
uint __wmemcmp_evex_movbe(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulong param_3)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  sbyte sVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [32];
  long lVar8;
  uint uVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  int in_XMM18_Da;
  int in_XMM18_Db;
  int in_XMM18_Dc;
  int in_XMM18_Dd;
  int in_YMM18_H;
  int in_register_00001694;
  int in_register_00001698;
  int in_register_0000169c;
  
  if (param_3 < 9) {
    sVar4 = ((byte)param_3 < 0x21) * (' ' - (byte)param_3);
    uVar6 = (uint)(-1 << sVar4) >> sVar4;
    auVar10 = vmovdqu32_avx512vl(*param_2);
    bVar1 = (bool)((byte)uVar6 & 1);
    auVar11._0_4_ = (uint)bVar1 * auVar10._0_4_ | (uint)!bVar1 * in_XMM18_Da;
    bVar1 = (bool)((byte)(uVar6 >> 1) & 1);
    auVar11._4_4_ = (uint)bVar1 * auVar10._4_4_ | (uint)!bVar1 * in_XMM18_Db;
    bVar1 = (bool)((byte)(uVar6 >> 2) & 1);
    auVar11._8_4_ = (uint)bVar1 * auVar10._8_4_ | (uint)!bVar1 * in_XMM18_Dc;
    bVar1 = (bool)((byte)(uVar6 >> 3) & 1);
    auVar11._12_4_ = (uint)bVar1 * auVar10._12_4_ | (uint)!bVar1 * in_XMM18_Dd;
    bVar1 = (bool)((byte)(uVar6 >> 4) & 1);
    auVar11._16_4_ = (uint)bVar1 * auVar10._16_4_ | (uint)!bVar1 * in_YMM18_H;
    bVar1 = (bool)((byte)(uVar6 >> 5) & 1);
    auVar11._20_4_ = (uint)bVar1 * auVar10._20_4_ | (uint)!bVar1 * in_register_00001694;
    bVar1 = (bool)((byte)(uVar6 >> 6) & 1);
    auVar11._24_4_ = (uint)bVar1 * auVar10._24_4_ | (uint)!bVar1 * in_register_00001698;
    bVar1 = (bool)((byte)(uVar6 >> 7) & 1);
    auVar11._28_4_ = (uint)bVar1 * auVar10._28_4_ | (uint)!bVar1 * in_register_0000169c;
    uVar2 = vpcmpd_avx512vl(auVar11,*param_1,4);
    uVar6 = uVar6 & 0xff & (uint)uVar2;
    if (uVar6 == 0) {
      return uVar6;
    }
    goto LAB_007566f0;
  }
  auVar11 = vmovdqu64_avx512vl(*param_2);
  uVar2 = vpcmpd_avx512vl(auVar11,*param_1,4);
  uVar6 = (uint)uVar2;
  if (uVar6 != 0) goto LAB_007566f0;
  if (param_3 < 0x11) {
LAB_007569a0:
    auVar11 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3 * 4));
    uVar2 = vpcmpd_avx512vl(auVar11,*(undefined1 (*) [32])(param_1[-1] + param_3 * 4),4);
    uVar6 = (uint)uVar2;
    if (uVar6 != 0) {
      iVar3 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        iVar3 = iVar3 + 1;
      }
      uVar5 = (ulong)(uint)(iVar3 + (int)param_3);
      bVar1 = *(int *)(param_2[-1] + uVar5 * 4) < *(int *)(param_1[-1] + uVar5 * 4);
      return (bVar1 - 1) + (uint)bVar1;
    }
    return uVar6;
  }
  auVar11 = vmovdqu64_avx512vl(param_2[1]);
  uVar2 = vpcmpd_avx512vl(auVar11,param_1[1],4);
  uVar6 = (uint)uVar2;
  if (uVar6 != 0) goto LAB_00756840;
  if (param_3 < 0x21) {
    auVar11 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + param_3 * 4));
    uVar2 = vpcmpd_avx512vl(auVar11,*(undefined1 (*) [32])(param_1[-2] + param_3 * 4),4);
    uVar6 = (uint)uVar2;
    if (uVar6 != 0) {
      iVar3 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
        }
      }
      uVar5 = (ulong)(uint)(iVar3 + (int)param_3);
      bVar1 = *(int *)(param_2[-2] + uVar5 * 4) < *(int *)(param_1[-2] + uVar5 * 4);
      return (bVar1 - 1) + (uint)bVar1;
    }
    goto LAB_007569a0;
  }
  auVar11 = vmovdqu64_avx512vl(param_2[2]);
  uVar2 = vpcmpd_avx512vl(auVar11,param_1[2],4);
  uVar6 = (uint)uVar2;
  if (uVar6 != 0) goto LAB_00756855;
  auVar11 = vmovdqu64_avx512vl(param_2[3]);
  uVar2 = vpcmpd_avx512vl(auVar11,param_1[3],4);
  uVar9 = (uint)uVar2;
  if (uVar9 != 0) goto LAB_00756824;
  if (0x40 < param_3) {
    pauVar7 = (undefined1 (*) [32])(param_1[-4] + param_3 * 4);
    lVar8 = (long)param_2 - (long)param_1;
    param_1 = (undefined1 (*) [32])(((ulong)param_1 & 0xffffffffffffffe0) + 0x80);
    do {
      auVar11 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(lVar8 + (long)param_1));
      auVar11 = vpxorq_avx512vl(auVar11,*param_1);
      auVar10 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(lVar8 + 0x20 + (long)param_1));
      auVar10 = vpxorq_avx512vl(auVar10,param_1[1]);
      auVar12 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(lVar8 + 0x40 + (long)param_1));
      auVar12 = vpxorq_avx512vl(auVar12,param_1[2]);
      auVar13 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(lVar8 + 0x60 + (long)param_1));
      auVar13 = vpternlogd_avx512vl(auVar13,auVar11,param_1[3],0xde);
      auVar13 = vpternlogd_avx512vl(auVar13,auVar12,auVar10,0xfe);
      uVar2 = vptestmd_avx512vl(auVar13,auVar13);
      uVar9 = (uint)uVar2;
      if (uVar9 != 0) goto LAB_007567f3;
      param_1 = param_1 + 4;
    } while (param_1 < pauVar7);
    uVar9 = (int)param_1 - (int)pauVar7;
    if (uVar9 < 0x60) {
      auVar11 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(lVar8 + 0x40 + (long)pauVar7));
      if (uVar9 < 0x40) {
        auVar12 = vpxorq_avx512vl(auVar11,pauVar7[2]);
        auVar11 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(lVar8 + (long)pauVar7));
        auVar11 = vpxorq_avx512vl(auVar11,*pauVar7);
        auVar10 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(lVar8 + 0x20 + (long)pauVar7));
        auVar10 = vpxorq_avx512vl(auVar10,pauVar7[1]);
        auVar13 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(lVar8 + 0x60 + (long)pauVar7));
        auVar13 = vpternlogd_avx512vl(auVar13,auVar11,pauVar7[3],0xde);
        auVar13 = vpternlogd_avx512vl(auVar13,auVar12,auVar10,0xfe);
        uVar2 = vptestmd_avx512vl(auVar13,auVar13);
        uVar9 = (uint)uVar2;
        param_1 = pauVar7;
        if (uVar9 == 0) {
          return uVar6;
        }
LAB_007567f3:
        param_2 = (undefined1 (*) [32])(lVar8 + (long)param_1);
        goto LAB_007567f6;
      }
      uVar2 = vpcmpd_avx512vl(auVar11,pauVar7[2],4);
      uVar6 = (uint)uVar2;
      if (uVar6 != 0) {
        pauVar7 = pauVar7 + -1;
        goto LAB_0075696d;
      }
    }
    auVar11 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(lVar8 + 0x60 + (long)pauVar7));
    uVar2 = vpcmpd_avx512vl(auVar11,pauVar7[3],4);
    uVar6 = (uint)uVar2;
    if (uVar6 == 0) {
      return uVar6;
    }
LAB_0075696d:
    uVar9 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    bVar1 = *(int *)((long)pauVar7 + lVar8 + 0x60 + (ulong)uVar9 * 4) <
            *(int *)(pauVar7[3] + (ulong)uVar9 * 4);
    return (bVar1 - 1) + (uint)bVar1;
  }
  auVar11 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + param_3 * 4));
  auVar10 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + param_3 * 4));
  param_1 = (undefined1 (*) [32])(param_1[-4] + param_3 * 4);
  param_2 = (undefined1 (*) [32])(param_2[-4] + param_3 * 4);
  auVar11 = vpxorq_avx512vl(auVar11,*param_1);
  auVar10 = vpxorq_avx512vl(auVar10,param_1[1]);
  auVar12 = vmovdqu64_avx512vl(param_2[2]);
  auVar12 = vpxorq_avx512vl(auVar12,param_1[2]);
  auVar13 = vmovdqu64_avx512vl(param_2[3]);
  auVar13 = vpternlogd_avx512vl(auVar13,auVar11,param_1[3],0xde);
  auVar13 = vpternlogd_avx512vl(auVar13,auVar12,auVar10,0xfe);
  uVar2 = vptestmd_avx512vl(auVar13,auVar13);
  uVar9 = (uint)uVar2;
  if (uVar9 == 0) {
    return uVar6;
  }
LAB_007567f6:
  uVar2 = vptestmd_avx512vl(auVar11,auVar11);
  uVar6 = (uint)uVar2;
  if (uVar6 == 0) {
    uVar2 = vptestmd_avx512vl(auVar10,auVar10);
    uVar6 = (uint)uVar2;
    if (uVar6 == 0) {
      uVar2 = vptestmd_avx512vl(auVar12,auVar12);
      uVar6 = (uint)uVar2;
      if (uVar6 == 0) {
LAB_00756824:
        uVar6 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        bVar1 = *(int *)(param_2[3] + (ulong)uVar6 * 4) < *(int *)(param_1[3] + (ulong)uVar6 * 4);
        return (bVar1 - 1) + (uint)bVar1;
      }
LAB_00756855:
      uVar9 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
      bVar1 = *(int *)(param_2[2] + (ulong)uVar9 * 4) < *(int *)(param_1[2] + (ulong)uVar9 * 4);
      return (bVar1 - 1) + (uint)bVar1;
    }
LAB_00756840:
    uVar9 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    bVar1 = *(int *)(param_2[1] + (ulong)uVar9 * 4) < *(int *)(param_1[1] + (ulong)uVar9 * 4);
    return (bVar1 - 1) + (uint)bVar1;
  }
LAB_007566f0:
  uVar9 = 0;
  for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
    uVar9 = uVar9 + 1;
  }
  bVar1 = *(int *)(*param_2 + (ulong)uVar9 * 4) < *(int *)(*param_1 + (ulong)uVar9 * 4);
  return (bVar1 - 1) + (uint)bVar1;
}

