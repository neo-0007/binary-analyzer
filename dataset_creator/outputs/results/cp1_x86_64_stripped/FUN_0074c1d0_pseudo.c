
undefined1 (*) [64]
FUN_0074c1d0(undefined1 (*param_1) [64],ulong param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  undefined1 auVar2 [64];
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  ulong uVar6;
  byte bVar7;
  int extraout_EDX;
  uint uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [64];
  undefined1 (*pauVar11) [64];
  char *pcVar12;
  int *piVar13;
  long in_FS_OFFSET;
  undefined1 auVar14 [64];
  
  if (param_4 < param_3) {
    pcVar12 = "buffer overflow detected";
    FUN_00771f80();
    if (extraout_EDX < 1) {
      pauVar10 = (undefined1 (*) [64])0x0;
    }
    else {
      uVar8 = *param_4;
      if ((uVar8 & 0x8000) == 0) {
        lVar3 = *(long *)(in_FS_OFFSET + 0x10);
        piVar13 = *(int **)(param_4 + 0x22);
        if (*(long *)(piVar13 + 2) != lVar3) {
          LOCK();
          iVar1 = *piVar13;
          if (iVar1 == 0) {
            *piVar13 = 1;
          }
          UNLOCK();
          if (iVar1 != 0) {
            FUN_00709590();
          }
          piVar13 = *(int **)(param_4 + 0x22);
          uVar8 = *param_4;
          *(long *)(piVar13 + 2) = lVar3;
        }
        piVar13[1] = piVar13[1] + 1;
      }
      *param_4 = uVar8 & 0xffffffdf;
      uVar6 = (long)extraout_EDX - 1U;
      if (param_2 < (long)extraout_EDX - 1U) {
        uVar6 = param_2;
      }
      uVar6 = FUN_006fe490(param_4,pcVar12,uVar6,10,1);
      uVar9 = *param_4;
      if (uVar6 == 0) {
        pauVar10 = (undefined1 (*) [64])0x0;
      }
      else if (((uVar9 & 0x20) == 0) ||
              (pauVar10 = (undefined1 (*) [64])0x0, *(int *)(in_FS_OFFSET + -0x58) == 0xb)) {
        if (param_2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00771d30();
        }
        (*(undefined1 (*) [64])pcVar12)[uVar6] = '\0';
        uVar9 = *param_4;
        pauVar10 = (undefined1 (*) [64])pcVar12;
      }
      *param_4 = uVar8 & 0x20 | uVar9;
      if ((uVar9 & 0x8000) == 0) {
        piVar13 = *(int **)(param_4 + 0x22);
        iVar1 = piVar13[1];
        piVar13[1] = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          piVar13[2] = 0;
          piVar13[3] = 0;
          LOCK();
          iVar1 = *piVar13;
          *piVar13 = 0;
          UNLOCK();
          if (1 < iVar1) {
            FUN_00709660();
          }
        }
      }
    }
    return pauVar10;
  }
  puVar5 = *param_1;
  auVar4 = vpshufb_avx(ZEXT416((uint)param_2),(undefined1  [16])0x0);
  bVar7 = (byte)param_3;
  if (param_3 < &DAT_00000010) {
    if (7 < bVar7) {
      *(long *)*param_1 = auVar4._0_8_;
      *(long *)((long)param_3 + (long)puVar5 + -8) = auVar4._0_8_;
      return param_1;
    }
    if (bVar7 < 4) {
      if (bVar7 < 2) {
        if (bVar7 != 0) {
          (*param_1)[0] = auVar4[0];
        }
        return param_1;
      }
      *(short *)*param_1 = auVar4._0_2_;
      *(short *)((long)param_3 + (long)puVar5 + -2) = auVar4._0_2_;
      return param_1;
    }
    *(int *)*param_1 = auVar4._0_4_;
    *(int *)((long)param_3 + (long)puVar5 + -4) = auVar4._0_4_;
    return param_1;
  }
  auVar14 = vbroadcastss_avx512f(auVar4);
  if ((uint *)0x200 < param_3) {
    if (DAT_0093d708 < param_3) {
      pauVar11 = (undefined1 (*) [64])(((ulong)param_1 & 0xffffffffffffff80) + 0x80);
      *param_1 = auVar14;
      param_1[1] = auVar14;
      pauVar10 = (undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x200);
      do {
        auVar2 = vmovntdq_avx512f(auVar14);
        *pauVar11 = auVar2;
        auVar2 = vmovntdq_avx512f(auVar14);
        pauVar11[1] = auVar2;
        auVar2 = vmovntdq_avx512f(auVar14);
        pauVar11[2] = auVar2;
        auVar2 = vmovntdq_avx512f(auVar14);
        pauVar11[3] = auVar2;
        auVar2 = vmovntdq_avx512f(auVar14);
        pauVar11[4] = auVar2;
        auVar2 = vmovntdq_avx512f(auVar14);
        pauVar11[5] = auVar2;
        auVar2 = vmovntdq_avx512f(auVar14);
        pauVar11[6] = auVar2;
        auVar2 = vmovntdq_avx512f(auVar14);
        pauVar11[7] = auVar2;
        pauVar11 = pauVar11 + 8;
      } while (pauVar11 < pauVar10);
      *pauVar10 = auVar14;
      *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x1c0) = auVar14;
      *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x180) = auVar14;
      *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x140) = auVar14;
      *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x100) = auVar14;
      *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0xc0) = auVar14;
      *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x80) = auVar14;
      *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x40) = auVar14;
      return param_1;
    }
    if ((uint *)0x400 < param_3) {
      pauVar10 = (undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x100);
      *param_1 = auVar14;
      pauVar11 = (undefined1 (*) [64])(((ulong)param_1 & 0xffffffffffffffc0) + 0x40);
      do {
        *pauVar11 = auVar14;
        pauVar11[1] = auVar14;
        pauVar11[2] = auVar14;
        pauVar11[3] = auVar14;
        pauVar11 = pauVar11 + 4;
      } while (pauVar11 < pauVar10);
      *pauVar10 = auVar14;
      *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0xc0) = auVar14;
      *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x80) = auVar14;
      *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x40) = auVar14;
      return param_1;
    }
    *param_1 = auVar14;
    param_1[1] = auVar14;
    param_1[2] = auVar14;
    param_1[3] = auVar14;
    param_1[4] = auVar14;
    param_1[5] = auVar14;
    param_1[6] = auVar14;
    param_1[7] = auVar14;
    *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x200) = auVar14;
    *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x1c0) = auVar14;
    *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x180) = auVar14;
    *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x140) = auVar14;
    *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x100) = auVar14;
    *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0xc0) = auVar14;
    *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x80) = auVar14;
    *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x40) = auVar14;
    return param_1;
  }
  if ((uint *)0xff < param_3) {
    *param_1 = auVar14;
    param_1[1] = auVar14;
    param_1[2] = auVar14;
    param_1[3] = auVar14;
    *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x100) = auVar14;
    *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0xc0) = auVar14;
    *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x80) = auVar14;
    *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x40) = auVar14;
    return param_1;
  }
  if (0x7f < bVar7) {
    *param_1 = auVar14;
    param_1[1] = auVar14;
    *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x80) = auVar14;
    *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x40) = auVar14;
    return param_1;
  }
  if (0x3f < bVar7) {
    *param_1 = auVar14;
    *(undefined1 (*) [64])((long)param_3 + (long)puVar5 + -0x40) = auVar14;
    return param_1;
  }
  if (bVar7 < 0x20) {
    *(undefined1 (*) [16])*param_1 = auVar4;
    *(undefined1 (*) [16])((long)param_3 + (long)puVar5 + -0x10) = auVar4;
    return param_1;
  }
  *(undefined1 (*) [32])*param_1 = auVar14._0_32_;
  *(undefined1 (*) [32])((long)param_3 + (long)puVar5 + -0x20) = auVar14._0_32_;
  return param_1;
}

