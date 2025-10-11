
uint __memcmp_evex_movbe(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulong param_3)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  sbyte sVar5;
  uint uVar6;
  undefined1 (*pauVar7) [32];
  long lVar8;
  uint uVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  char in_XMM18_Ba;
  char in_XMM18_Bb;
  char in_XMM18_Bc;
  char in_XMM18_Bd;
  char in_XMM18_Be;
  char in_XMM18_Bf;
  char in_XMM18_Bg;
  char in_XMM18_Bh;
  char in_XMM18_Bi;
  char in_XMM18_Bj;
  char in_XMM18_Bk;
  char in_XMM18_Bl;
  char in_XMM18_Bm;
  char in_XMM18_Bn;
  char in_XMM18_Bo;
  char in_XMM18_Bp;
  char in_YMM18_H;
  char in_register_00001691;
  char in_register_00001692;
  char in_register_00001693;
  char in_register_00001694;
  char in_register_00001695;
  char in_register_00001696;
  char in_register_00001697;
  char in_register_00001698;
  char in_register_00001699;
  char in_register_0000169a;
  char in_register_0000169b;
  char in_register_0000169c;
  char in_register_0000169d;
  
  if (param_3 < 0x21) {
    sVar5 = ((byte)param_3 < 0x21) * (' ' - (byte)param_3);
    uVar6 = (uint)(-1 << sVar5) >> sVar5;
    auVar10 = vmovdqu8_avx512vl(*param_2);
    bVar1 = (bool)((byte)uVar6 & 1);
    auVar11[0] = bVar1 * auVar10[0] | !bVar1 * in_XMM18_Ba;
    bVar1 = (bool)((byte)(uVar6 >> 1) & 1);
    auVar11[1] = bVar1 * auVar10[1] | !bVar1 * in_XMM18_Bb;
    bVar1 = (bool)((byte)(uVar6 >> 2) & 1);
    auVar11[2] = bVar1 * auVar10[2] | !bVar1 * in_XMM18_Bc;
    bVar1 = (bool)((byte)(uVar6 >> 3) & 1);
    auVar11[3] = bVar1 * auVar10[3] | !bVar1 * in_XMM18_Bd;
    bVar1 = (bool)((byte)(uVar6 >> 4) & 1);
    auVar11[4] = bVar1 * auVar10[4] | !bVar1 * in_XMM18_Be;
    bVar1 = (bool)((byte)(uVar6 >> 5) & 1);
    auVar11[5] = bVar1 * auVar10[5] | !bVar1 * in_XMM18_Bf;
    bVar1 = (bool)((byte)(uVar6 >> 6) & 1);
    auVar11[6] = bVar1 * auVar10[6] | !bVar1 * in_XMM18_Bg;
    bVar1 = (bool)((byte)(uVar6 >> 7) & 1);
    auVar11[7] = bVar1 * auVar10[7] | !bVar1 * in_XMM18_Bh;
    bVar1 = (bool)((byte)(uVar6 >> 8) & 1);
    auVar11[8] = bVar1 * auVar10[8] | !bVar1 * in_XMM18_Bi;
    bVar1 = (bool)((byte)(uVar6 >> 9) & 1);
    auVar11[9] = bVar1 * auVar10[9] | !bVar1 * in_XMM18_Bj;
    bVar1 = (bool)((byte)(uVar6 >> 10) & 1);
    auVar11[10] = bVar1 * auVar10[10] | !bVar1 * in_XMM18_Bk;
    bVar1 = (bool)((byte)(uVar6 >> 0xb) & 1);
    auVar11[0xb] = bVar1 * auVar10[0xb] | !bVar1 * in_XMM18_Bl;
    bVar1 = (bool)((byte)(uVar6 >> 0xc) & 1);
    auVar11[0xc] = bVar1 * auVar10[0xc] | !bVar1 * in_XMM18_Bm;
    bVar1 = (bool)((byte)(uVar6 >> 0xd) & 1);
    auVar11[0xd] = bVar1 * auVar10[0xd] | !bVar1 * in_XMM18_Bn;
    bVar1 = (bool)((byte)(uVar6 >> 0xe) & 1);
    auVar11[0xe] = bVar1 * auVar10[0xe] | !bVar1 * in_XMM18_Bo;
    bVar1 = (bool)((byte)(uVar6 >> 0xf) & 1);
    auVar11[0xf] = bVar1 * auVar10[0xf] | !bVar1 * in_XMM18_Bp;
    bVar1 = (bool)((byte)(uVar6 >> 0x10) & 1);
    auVar11[0x10] = bVar1 * auVar10[0x10] | !bVar1 * in_YMM18_H;
    bVar1 = (bool)((byte)(uVar6 >> 0x11) & 1);
    auVar11[0x11] = bVar1 * auVar10[0x11] | !bVar1 * in_register_00001691;
    bVar1 = (bool)((byte)(uVar6 >> 0x12) & 1);
    auVar11[0x12] = bVar1 * auVar10[0x12] | !bVar1 * in_register_00001692;
    bVar1 = (bool)((byte)(uVar6 >> 0x13) & 1);
    auVar11[0x13] = bVar1 * auVar10[0x13] | !bVar1 * in_register_00001693;
    bVar1 = (bool)((byte)(uVar6 >> 0x14) & 1);
    auVar11[0x14] = bVar1 * auVar10[0x14] | !bVar1 * in_register_00001694;
    bVar1 = (bool)((byte)(uVar6 >> 0x15) & 1);
    auVar11[0x15] = bVar1 * auVar10[0x15] | !bVar1 * in_register_00001695;
    bVar1 = (bool)((byte)(uVar6 >> 0x16) & 1);
    auVar11[0x16] = bVar1 * auVar10[0x16] | !bVar1 * in_register_00001696;
    bVar1 = (bool)((byte)(uVar6 >> 0x17) & 1);
    auVar11[0x17] = bVar1 * auVar10[0x17] | !bVar1 * in_register_00001697;
    bVar2 = (byte)(uVar6 >> 0x18);
    auVar11[0x18] = (bVar2 & 1) * auVar10[0x18] | !(bool)(bVar2 & 1) * in_register_00001698;
    bVar1 = (bool)(bVar2 >> 1 & 1);
    auVar11[0x19] = bVar1 * auVar10[0x19] | !bVar1 * in_register_00001699;
    bVar1 = (bool)(bVar2 >> 2 & 1);
    auVar11[0x1a] = bVar1 * auVar10[0x1a] | !bVar1 * in_register_0000169a;
    bVar1 = (bool)(bVar2 >> 3 & 1);
    auVar11[0x1b] = bVar1 * auVar10[0x1b] | !bVar1 * in_register_0000169b;
    bVar1 = (bool)(bVar2 >> 4 & 1);
    auVar11[0x1c] = bVar1 * auVar10[0x1c] | !bVar1 * in_register_0000169c;
    bVar1 = (bool)(bVar2 >> 5 & 1);
    auVar11._30_2_ = auVar10._30_2_;
    auVar11[0x1d] = bVar1 * auVar10[0x1d] | !bVar1 * in_register_0000169d;
    uVar3 = vpcmpub_avx512vl(auVar11,*param_1,4);
    uVar6 = uVar6 & (uint)uVar3;
    if (uVar6 == 0) {
      return uVar6;
    }
    goto LAB_00748730;
  }
  auVar11 = vmovdqu64_avx512vl(*param_2);
  uVar3 = vpcmpub_avx512vl(auVar11,*param_1,4);
  uVar6 = (uint)uVar3;
  if (uVar6 != 0) goto LAB_00748730;
  if (param_3 < 0x41) {
LAB_007489c0:
    auVar11 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
    uVar3 = vpcmpub_avx512vl(auVar11,*(undefined1 (*) [32])(param_1[-1] + param_3),4);
    uVar6 = (uint)uVar3;
    if (uVar6 != 0) {
      iVar4 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      uVar6 = iVar4 + (int)param_3;
      return (uint)(byte)param_1[-1][uVar6] - (uint)(byte)param_2[-1][uVar6];
    }
    return uVar6;
  }
  auVar11 = vmovdqu64_avx512vl(param_2[1]);
  uVar3 = vpcmpub_avx512vl(auVar11,param_1[1],4);
  uVar6 = (uint)uVar3;
  if (uVar6 != 0) goto LAB_00748870;
  if (param_3 < 0x81) {
    auVar11 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + param_3));
    uVar3 = vpcmpub_avx512vl(auVar11,*(undefined1 (*) [32])(param_1[-2] + param_3),4);
    uVar6 = (uint)uVar3;
    if (uVar6 != 0) {
      iVar4 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
        }
      }
      uVar6 = iVar4 + (int)param_3;
      return (uint)(byte)param_1[-2][uVar6] - (uint)(byte)param_2[-2][uVar6];
    }
    goto LAB_007489c0;
  }
  auVar11 = vmovdqu64_avx512vl(param_2[2]);
  uVar3 = vpcmpub_avx512vl(auVar11,param_1[2],4);
  uVar6 = (uint)uVar3;
  if (uVar6 != 0) goto LAB_00748880;
  auVar11 = vmovdqu64_avx512vl(param_2[3]);
  uVar3 = vpcmpub_avx512vl(auVar11,param_1[3],4);
  uVar9 = (uint)uVar3;
  if (uVar9 != 0) goto LAB_00748858;
  if (0x100 < param_3) {
    pauVar7 = (undefined1 (*) [32])(param_1[-4] + param_3);
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
      uVar3 = vptestmb_avx512vl(auVar13,auVar13);
      uVar9 = (uint)uVar3;
      if (uVar9 != 0) goto LAB_00748827;
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
        uVar3 = vptestmb_avx512vl(auVar13,auVar13);
        uVar9 = (uint)uVar3;
        param_1 = pauVar7;
        if (uVar9 == 0) {
          return uVar6;
        }
LAB_00748827:
        param_2 = (undefined1 (*) [32])(lVar8 + (long)param_1);
        goto LAB_0074882a;
      }
      uVar3 = vpcmpub_avx512vl(auVar11,pauVar7[2],4);
      uVar6 = (uint)uVar3;
      if (uVar6 != 0) {
        pauVar7 = pauVar7 + -1;
        goto LAB_0074898d;
      }
    }
    auVar11 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(lVar8 + 0x60 + (long)pauVar7));
    uVar3 = vpcmpub_avx512vl(auVar11,pauVar7[3],4);
    uVar6 = (uint)uVar3;
    if (uVar6 == 0) {
      return uVar6;
    }
LAB_0074898d:
    uVar9 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    return (uint)(byte)pauVar7[3][uVar9] -
           (uint)*(byte *)((long)pauVar7 + lVar8 + 0x60 + (ulong)uVar9);
  }
  auVar11 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + param_3));
  auVar10 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + param_3));
  param_1 = (undefined1 (*) [32])(param_1[-4] + param_3);
  param_2 = (undefined1 (*) [32])(param_2[-4] + param_3);
  auVar11 = vpxorq_avx512vl(auVar11,*param_1);
  auVar10 = vpxorq_avx512vl(auVar10,param_1[1]);
  auVar12 = vmovdqu64_avx512vl(param_2[2]);
  auVar12 = vpxorq_avx512vl(auVar12,param_1[2]);
  auVar13 = vmovdqu64_avx512vl(param_2[3]);
  auVar13 = vpternlogd_avx512vl(auVar13,auVar11,param_1[3],0xde);
  auVar13 = vpternlogd_avx512vl(auVar13,auVar12,auVar10,0xfe);
  uVar3 = vptestmb_avx512vl(auVar13,auVar13);
  uVar9 = (uint)uVar3;
  if (uVar9 == 0) {
    return uVar6;
  }
LAB_0074882a:
  uVar3 = vptestmb_avx512vl(auVar11,auVar11);
  uVar6 = (uint)uVar3;
  if (uVar6 == 0) {
    uVar3 = vptestmb_avx512vl(auVar10,auVar10);
    uVar6 = (uint)uVar3;
    if (uVar6 == 0) {
      uVar3 = vptestmb_avx512vl(auVar12,auVar12);
      uVar6 = (uint)uVar3;
      if (uVar6 == 0) {
LAB_00748858:
        uVar6 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        return (uint)(byte)param_1[3][uVar6] - (uint)(byte)param_2[3][uVar6];
      }
LAB_00748880:
      uVar9 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
      return (uint)(byte)param_1[2][uVar9] - (uint)(byte)param_2[2][uVar9];
    }
LAB_00748870:
    uVar9 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    return (uint)(byte)param_1[1][uVar9] - (uint)(byte)param_2[1][uVar9];
  }
LAB_00748730:
  uVar9 = 0;
  for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
    uVar9 = uVar9 + 1;
  }
  return (uint)(byte)(*param_1)[uVar9] - (uint)(byte)(*param_2)[uVar9];
}

