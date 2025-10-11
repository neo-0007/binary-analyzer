
char * FUN_00724ca0(char *param_1,char *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  char *pcVar20;
  char *pcVar21;
  ulong uVar22;
  int extraout_EDX;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  char *pcVar26;
  long lVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long lVar31;
  long lVar32;
  int *piVar33;
  ulong uVar34;
  long lVar35;
  code *UNRECOVERED_JUMPTABLE_00;
  long in_FS_OFFSET;
  
  uVar34 = DAT_0093d708;
  if (param_4 < param_3) {
    pcVar20 = "buffer overflow detected";
    FUN_00771f80();
    if (extraout_EDX < 1) {
      pcVar26 = (char *)0x0;
    }
    else {
      uVar23 = *param_4;
      if ((uVar23 & 0x8000) == 0) {
        lVar35 = *(long *)(in_FS_OFFSET + 0x10);
        piVar33 = *(int **)(param_4 + 0x22);
        if (*(long *)(piVar33 + 2) != lVar35) {
          LOCK();
          iVar1 = *piVar33;
          if (iVar1 == 0) {
            *piVar33 = 1;
          }
          UNLOCK();
          if (iVar1 != 0) {
            FUN_00709590();
          }
          piVar33 = *(int **)(param_4 + 0x22);
          uVar23 = *param_4;
          *(long *)(piVar33 + 2) = lVar35;
        }
        piVar33[1] = piVar33[1] + 1;
      }
      *param_4 = uVar23 & 0xffffffdf;
      pcVar26 = (char *)((long)extraout_EDX + -1);
      if (param_2 < (char *)((long)extraout_EDX + -1)) {
        pcVar26 = param_2;
      }
      pcVar21 = (char *)FUN_006fe490(param_4,pcVar20,pcVar26,10,1);
      uVar24 = *param_4;
      if (pcVar21 == (char *)0x0) {
        pcVar26 = (char *)0x0;
      }
      else if (((uVar24 & 0x20) == 0) ||
              (pcVar26 = (char *)0x0, *(int *)(in_FS_OFFSET + -0x58) == 0xb)) {
        if (param_2 <= pcVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_00771d30();
        }
        pcVar20[(long)pcVar21] = '\0';
        uVar24 = *param_4;
        pcVar26 = pcVar20;
      }
      *param_4 = uVar23 & 0x20 | uVar24;
      if ((uVar24 & 0x8000) == 0) {
        piVar33 = *(int **)(param_4 + 0x22);
        iVar1 = piVar33[1];
        piVar33[1] = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          piVar33[2] = 0;
          piVar33[3] = 0;
          LOCK();
          iVar1 = *piVar33;
          *piVar33 = 0;
          UNLOCK();
          if (1 < iVar1) {
            FUN_00709660();
          }
        }
      }
    }
    return pcVar26;
  }
  if (param_2 <= param_1) {
    if (param_1 == param_2) {
      return param_1;
    }
    if ((uint *)0x4f < param_3) {
      uVar5 = *(undefined8 *)(param_2 + -0x10 + (long)param_3);
      uVar6 = *(undefined8 *)(param_2 + -0x10 + (long)param_3 + 8);
      pcVar20 = param_1 + -0x10 + (long)param_3;
      uVar22 = (ulong)(param_1 + (long)param_3) & 0xf;
      uVar29 = (ulong)(param_1 + (long)param_3) ^ uVar22;
      uVar25 = (long)param_3 - uVar22;
      uVar22 = (long)(param_2 + (long)param_3) - uVar22;
      if (DAT_0093d708 < uVar25) {
        uVar7 = *(undefined8 *)(uVar22 - 0x10);
        uVar8 = *(undefined8 *)(uVar22 - 8);
        lVar35 = uVar22 - 0x10;
        *(undefined8 *)pcVar20 = uVar5;
        *(undefined8 *)(pcVar20 + 8) = uVar6;
        *(undefined8 *)(uVar29 - 0x10) = uVar7;
        *(undefined8 *)(uVar29 - 8) = uVar8;
        lVar31 = uVar29 - 0x10;
        uVar25 = uVar25 - 0x90;
        if (((ulong)(lVar31 - lVar35) < uVar25) && ((ulong)(lVar31 - lVar35) < uVar34)) {
          do {
            lVar32 = lVar31;
            lVar27 = lVar35;
            uVar34 = uVar25;
            uVar5 = *(undefined8 *)(lVar27 + -8);
            uVar6 = *(undefined8 *)(lVar27 + -0x20);
            uVar7 = *(undefined8 *)(lVar27 + -0x18);
            uVar8 = *(undefined8 *)(lVar27 + -0x30);
            uVar9 = *(undefined8 *)(lVar27 + -0x28);
            uVar10 = *(undefined8 *)(lVar27 + -0x40);
            uVar11 = *(undefined8 *)(lVar27 + -0x38);
            uVar12 = *(undefined8 *)(lVar27 + -0x50);
            uVar13 = *(undefined8 *)(lVar27 + -0x48);
            uVar14 = *(undefined8 *)(lVar27 + -0x60);
            uVar15 = *(undefined8 *)(lVar27 + -0x58);
            uVar16 = *(undefined8 *)(lVar27 + -0x70);
            uVar17 = *(undefined8 *)(lVar27 + -0x68);
            uVar18 = *(undefined8 *)(lVar27 + -0x80);
            uVar19 = *(undefined8 *)(lVar27 + -0x78);
            lVar35 = lVar27 + -0x80;
            *(undefined8 *)(lVar32 + -0x10) = *(undefined8 *)(lVar27 + -0x10);
            *(undefined8 *)(lVar32 + -8) = uVar5;
            *(undefined8 *)(lVar32 + -0x20) = uVar6;
            *(undefined8 *)(lVar32 + -0x18) = uVar7;
            *(undefined8 *)(lVar32 + -0x30) = uVar8;
            *(undefined8 *)(lVar32 + -0x28) = uVar9;
            *(undefined8 *)(lVar32 + -0x40) = uVar10;
            *(undefined8 *)(lVar32 + -0x38) = uVar11;
            *(undefined8 *)(lVar32 + -0x50) = uVar12;
            *(undefined8 *)(lVar32 + -0x48) = uVar13;
            *(undefined8 *)(lVar32 + -0x60) = uVar14;
            *(undefined8 *)(lVar32 + -0x58) = uVar15;
            *(undefined8 *)(lVar32 + -0x70) = uVar16;
            *(undefined8 *)(lVar32 + -0x68) = uVar17;
            *(undefined8 *)(lVar32 + -0x80) = uVar18;
            *(undefined8 *)(lVar32 + -0x78) = uVar19;
            lVar31 = lVar32 + -0x80;
            uVar25 = uVar34 - 0x80;
          } while (0x7f < uVar34);
          if (-0x41 < (long)(uVar34 - 0x80)) {
            uVar5 = *(undefined8 *)(lVar27 + -0x88);
            uVar6 = *(undefined8 *)(lVar27 + -0xa0);
            uVar7 = *(undefined8 *)(lVar27 + -0x98);
            uVar8 = *(undefined8 *)(lVar27 + -0xb0);
            uVar9 = *(undefined8 *)(lVar27 + -0xa8);
            uVar10 = *(undefined8 *)(lVar27 + -0xc0);
            uVar11 = *(undefined8 *)(lVar27 + -0xb8);
            lVar35 = lVar27 + -0xc0;
            *(undefined8 *)(lVar32 + -0x90) = *(undefined8 *)(lVar27 + -0x90);
            *(undefined8 *)(lVar32 + -0x88) = uVar5;
            *(undefined8 *)(lVar32 + -0xa0) = uVar6;
            *(undefined8 *)(lVar32 + -0x98) = uVar7;
            *(undefined8 *)(lVar32 + -0xb0) = uVar8;
            *(undefined8 *)(lVar32 + -0xa8) = uVar9;
            *(undefined8 *)(lVar32 + -0xc0) = uVar10;
            *(undefined8 *)(lVar32 + -0xb8) = uVar11;
            lVar31 = lVar32 + -0xc0;
            uVar34 = uVar34 - 0x40;
          }
                    /* WARNING: Could not recover jumptable at 0x00727823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar20 = (char *)(*(code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                      (long)(int)(&switchD_00724ce4::switchdataD_0082b030)[uVar34]))
                                      (lVar31,lVar35,
                                       (code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                               (long)(int)(&switchD_00724ce4::switchdataD_0082b030)
                                                          [uVar34]));
          return pcVar20;
        }
        do {
          lVar32 = lVar31;
          lVar27 = lVar35;
          uVar34 = uVar25;
          uVar5 = *(undefined8 *)(lVar27 + -8);
          uVar6 = *(undefined8 *)(lVar27 + -0x20);
          uVar7 = *(undefined8 *)(lVar27 + -0x18);
          uVar8 = *(undefined8 *)(lVar27 + -0x30);
          uVar9 = *(undefined8 *)(lVar27 + -0x28);
          uVar10 = *(undefined8 *)(lVar27 + -0x40);
          uVar11 = *(undefined8 *)(lVar27 + -0x38);
          uVar12 = *(undefined8 *)(lVar27 + -0x50);
          uVar13 = *(undefined8 *)(lVar27 + -0x48);
          uVar14 = *(undefined8 *)(lVar27 + -0x60);
          uVar15 = *(undefined8 *)(lVar27 + -0x58);
          uVar16 = *(undefined8 *)(lVar27 + -0x70);
          uVar17 = *(undefined8 *)(lVar27 + -0x68);
          uVar18 = *(undefined8 *)(lVar27 + -0x80);
          uVar19 = *(undefined8 *)(lVar27 + -0x78);
          lVar35 = lVar27 + -0x80;
          *(undefined8 *)(lVar32 + -0x10) = *(undefined8 *)(lVar27 + -0x10);
          *(undefined8 *)(lVar32 + -8) = uVar5;
          *(undefined8 *)(lVar32 + -0x20) = uVar6;
          *(undefined8 *)(lVar32 + -0x18) = uVar7;
          *(undefined8 *)(lVar32 + -0x30) = uVar8;
          *(undefined8 *)(lVar32 + -0x28) = uVar9;
          *(undefined8 *)(lVar32 + -0x40) = uVar10;
          *(undefined8 *)(lVar32 + -0x38) = uVar11;
          *(undefined8 *)(lVar32 + -0x50) = uVar12;
          *(undefined8 *)(lVar32 + -0x48) = uVar13;
          *(undefined8 *)(lVar32 + -0x60) = uVar14;
          *(undefined8 *)(lVar32 + -0x58) = uVar15;
          *(undefined8 *)(lVar32 + -0x70) = uVar16;
          *(undefined8 *)(lVar32 + -0x68) = uVar17;
          *(undefined8 *)(lVar32 + -0x80) = uVar18;
          *(undefined8 *)(lVar32 + -0x78) = uVar19;
          lVar31 = lVar32 + -0x80;
          uVar25 = uVar34 - 0x80;
        } while (0x7f < uVar34);
        if (-0x41 < (long)(uVar34 - 0x80)) {
          uVar5 = *(undefined8 *)(lVar27 + -0x88);
          uVar6 = *(undefined8 *)(lVar27 + -0xa0);
          uVar7 = *(undefined8 *)(lVar27 + -0x98);
          uVar8 = *(undefined8 *)(lVar27 + -0xb0);
          uVar9 = *(undefined8 *)(lVar27 + -0xa8);
          uVar10 = *(undefined8 *)(lVar27 + -0xc0);
          uVar11 = *(undefined8 *)(lVar27 + -0xb8);
          lVar35 = lVar27 + -0xc0;
          *(undefined8 *)(lVar32 + -0x90) = *(undefined8 *)(lVar27 + -0x90);
          *(undefined8 *)(lVar32 + -0x88) = uVar5;
          *(undefined8 *)(lVar32 + -0xa0) = uVar6;
          *(undefined8 *)(lVar32 + -0x98) = uVar7;
          *(undefined8 *)(lVar32 + -0xb0) = uVar8;
          *(undefined8 *)(lVar32 + -0xa8) = uVar9;
          *(undefined8 *)(lVar32 + -0xc0) = uVar10;
          *(undefined8 *)(lVar32 + -0xb8) = uVar11;
          lVar31 = lVar32 + -0xc0;
          uVar34 = uVar34 - 0x40;
        }
                    /* WARNING: Could not recover jumptable at 0x00727766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*(code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                    (long)(int)(&switchD_00724ce4::switchdataD_0082b030)[uVar34]))
                                    (lVar31,lVar35,
                                     (code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                             (long)(int)(&switchD_00724ce4::switchdataD_0082b030)
                                                        [uVar34]));
        return pcVar20;
      }
      uVar34 = uVar22 & 0xf;
      if (uVar34 != 0) {
        lVar35 = (long)*(int *)(&DAT_0082b1b0 + uVar34 * 4);
        switch(uVar34) {
        case 1:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d8 + lVar35);
          if (DAT_0093d718 <= uVar25) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d0 + lVar35 + 1);
          }
          break;
        case 2:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d8 + lVar35);
          if (DAT_0093d718 <= uVar25) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d0 + lVar35 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0072540b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                      (uVar29,uVar22,uVar25 - 0x40,DAT_0093d718,pcVar20,
                                       UNRECOVERED_JUMPTABLE_00);
          return pcVar20;
        case 3:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d8 + lVar35);
          if (DAT_0093d718 <= uVar25) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d0 + lVar35 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0072555b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                      (uVar29,uVar22,uVar25 - 0x40,DAT_0093d718,pcVar20,
                                       UNRECOVERED_JUMPTABLE_00);
          return pcVar20;
        case 4:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d8 + lVar35);
          if (DAT_0093d718 <= uVar25) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d0 + lVar35 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x007256ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                      (uVar29,uVar22,uVar25 - 0x40,DAT_0093d718,pcVar20,
                                       UNRECOVERED_JUMPTABLE_00);
          return pcVar20;
        case 5:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d8 + lVar35);
          if (DAT_0093d718 <= uVar25) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d0 + lVar35 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x007257fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                      (uVar29,uVar22,uVar25 - 0x40,DAT_0093d718,pcVar20,
                                       UNRECOVERED_JUMPTABLE_00);
          return pcVar20;
        case 6:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d8 + lVar35);
          if (DAT_0093d718 <= uVar25) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d0 + lVar35 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0072594b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                      (uVar29,uVar22,uVar25 - 0x40,DAT_0093d718,pcVar20,
                                       UNRECOVERED_JUMPTABLE_00);
          return pcVar20;
        case 7:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d8 + lVar35);
          if (DAT_0093d718 <= uVar25) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d0 + lVar35 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x00725a9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                      (uVar29,uVar22,uVar25 - 0x40,DAT_0093d718,pcVar20,
                                       UNRECOVERED_JUMPTABLE_00);
          return pcVar20;
        case 8:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d8 + lVar35);
          if (DAT_0093d718 <= uVar25) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d0 + lVar35 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x00725beb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                      (uVar29,uVar22,uVar25 - 0x40,DAT_0093d718,pcVar20,
                                       UNRECOVERED_JUMPTABLE_00);
          return pcVar20;
        case 9:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d8 + lVar35);
          if (DAT_0093d718 <= uVar25) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d0 + lVar35 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x00725d3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                      (uVar29,uVar22,uVar25 - 0x40,DAT_0093d718,pcVar20,
                                       UNRECOVERED_JUMPTABLE_00);
          return pcVar20;
        case 10:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d8 + lVar35);
          if (DAT_0093d718 <= uVar25) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d0 + lVar35 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x00725e8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                      (uVar29,uVar22,uVar25 - 0x40,DAT_0093d718,pcVar20,
                                       UNRECOVERED_JUMPTABLE_00);
          return pcVar20;
        case 0xb:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d8 + lVar35);
          if (DAT_0093d718 <= uVar25) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d0 + lVar35 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x00725fdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                      (uVar29,uVar22,uVar25 - 0x40,DAT_0093d718,pcVar20,
                                       UNRECOVERED_JUMPTABLE_00);
          return pcVar20;
        case 0xc:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d8 + lVar35);
          if (DAT_0093d718 <= uVar25) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d0 + lVar35 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0072612b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                      (uVar29,uVar22,uVar25 - 0x40,DAT_0093d718,pcVar20,
                                       UNRECOVERED_JUMPTABLE_00);
          return pcVar20;
        case 0xd:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d8 + lVar35);
          if (DAT_0093d718 <= uVar25) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d0 + lVar35 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0072627b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                      (uVar29,uVar22,uVar25 - 0x40,DAT_0093d718,pcVar20,
                                       UNRECOVERED_JUMPTABLE_00);
          return pcVar20;
        case 0xe:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d8 + lVar35);
          if (DAT_0093d718 <= uVar25) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d0 + lVar35 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x007263cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                      (uVar29,uVar22,uVar25 - 0x40,DAT_0093d718,pcVar20,
                                       UNRECOVERED_JUMPTABLE_00);
          return pcVar20;
        case 0xf:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d8 + lVar35);
          if (DAT_0093d718 <= uVar25) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b1d0 + lVar35 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0072651b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                      (uVar29,uVar22,uVar25 - 0x40,DAT_0093d718,pcVar20,
                                       UNRECOVERED_JUMPTABLE_00);
          return pcVar20;
        }
                    /* WARNING: Could not recover jumptable at 0x007252bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                    (uVar29,uVar22,uVar25 - 0x40,DAT_0093d718,pcVar20,
                                     UNRECOVERED_JUMPTABLE_00);
        return pcVar20;
      }
      uVar34 = uVar25 - 0x10;
      uVar7 = *(undefined8 *)(uVar22 - 8);
      lVar35 = uVar22 - 0x10;
      *(undefined8 *)(uVar29 - 0x10) = *(undefined8 *)(uVar22 - 0x10);
      *(undefined8 *)(uVar29 - 8) = uVar7;
      lVar31 = uVar29 - 0x10;
      *(undefined8 *)pcVar20 = uVar5;
      *(undefined8 *)(pcVar20 + 8) = uVar6;
      if (uVar34 < 0x81) {
        if (0x3f < uVar34) {
          uVar5 = *(undefined8 *)(uVar22 - 0x18);
          uVar6 = *(undefined8 *)(uVar22 - 0x30);
          uVar7 = *(undefined8 *)(uVar22 - 0x28);
          uVar8 = *(undefined8 *)(uVar22 - 0x40);
          uVar9 = *(undefined8 *)(uVar22 - 0x38);
          uVar10 = *(undefined8 *)(uVar22 - 0x50);
          uVar11 = *(undefined8 *)(uVar22 - 0x48);
          *(undefined8 *)(uVar29 - 0x20) = *(undefined8 *)(uVar22 - 0x20);
          *(undefined8 *)(uVar29 - 0x18) = uVar5;
          *(undefined8 *)(uVar29 - 0x30) = uVar6;
          *(undefined8 *)(uVar29 - 0x28) = uVar7;
          *(undefined8 *)(uVar29 - 0x40) = uVar8;
          *(undefined8 *)(uVar29 - 0x38) = uVar9;
          *(undefined8 *)(uVar29 - 0x50) = uVar10;
          *(undefined8 *)(uVar29 - 0x48) = uVar11;
          uVar34 = uVar25 - 0x50;
          lVar35 = uVar22 - 0x50;
          lVar31 = uVar29 - 0x50;
        }
                    /* WARNING: Could not recover jumptable at 0x00725035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*(code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                    (long)(int)(&switchD_00724ce4::switchdataD_0082b030)[uVar34]))
                                    (lVar31,lVar35,
                                     (code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                             (long)(int)(&switchD_00724ce4::switchdataD_0082b030)
                                                        [uVar34]));
        return pcVar20;
      }
      uVar22 = uVar25 - 0x90;
      uVar25 = uVar25 - 0x90;
      if (uVar34 < DAT_0093d718) {
        do {
          lVar32 = lVar31;
          lVar27 = lVar35;
          uVar34 = uVar25;
          uVar5 = *(undefined8 *)(lVar27 + -8);
          uVar6 = *(undefined8 *)(lVar27 + -0x20);
          uVar7 = *(undefined8 *)(lVar27 + -0x18);
          uVar8 = *(undefined8 *)(lVar27 + -0x30);
          uVar9 = *(undefined8 *)(lVar27 + -0x28);
          uVar10 = *(undefined8 *)(lVar27 + -0x40);
          uVar11 = *(undefined8 *)(lVar27 + -0x38);
          *(undefined8 *)(lVar32 + -0x10) = *(undefined8 *)(lVar27 + -0x10);
          *(undefined8 *)(lVar32 + -8) = uVar5;
          *(undefined8 *)(lVar32 + -0x20) = uVar6;
          *(undefined8 *)(lVar32 + -0x18) = uVar7;
          *(undefined8 *)(lVar32 + -0x30) = uVar8;
          *(undefined8 *)(lVar32 + -0x28) = uVar9;
          *(undefined8 *)(lVar32 + -0x40) = uVar10;
          *(undefined8 *)(lVar32 + -0x38) = uVar11;
          uVar5 = *(undefined8 *)(lVar27 + -0x48);
          uVar6 = *(undefined8 *)(lVar27 + -0x60);
          uVar7 = *(undefined8 *)(lVar27 + -0x58);
          uVar8 = *(undefined8 *)(lVar27 + -0x70);
          uVar9 = *(undefined8 *)(lVar27 + -0x68);
          uVar10 = *(undefined8 *)(lVar27 + -0x80);
          uVar11 = *(undefined8 *)(lVar27 + -0x78);
          lVar35 = lVar27 + -0x80;
          *(undefined8 *)(lVar32 + -0x50) = *(undefined8 *)(lVar27 + -0x50);
          *(undefined8 *)(lVar32 + -0x48) = uVar5;
          *(undefined8 *)(lVar32 + -0x60) = uVar6;
          *(undefined8 *)(lVar32 + -0x58) = uVar7;
          *(undefined8 *)(lVar32 + -0x70) = uVar8;
          *(undefined8 *)(lVar32 + -0x68) = uVar9;
          *(undefined8 *)(lVar32 + -0x80) = uVar10;
          *(undefined8 *)(lVar32 + -0x78) = uVar11;
          lVar31 = lVar32 + -0x80;
          uVar25 = uVar34 - 0x80;
        } while (0x7f < uVar34);
        if (-0x41 < (long)(uVar34 - 0x80)) {
          uVar5 = *(undefined8 *)(lVar27 + -0x88);
          uVar34 = uVar34 - 0x40;
          uVar6 = *(undefined8 *)(lVar27 + -0xa0);
          uVar7 = *(undefined8 *)(lVar27 + -0x98);
          *(undefined8 *)(lVar32 + -0x90) = *(undefined8 *)(lVar27 + -0x90);
          *(undefined8 *)(lVar32 + -0x88) = uVar5;
          *(undefined8 *)(lVar32 + -0xa0) = uVar6;
          *(undefined8 *)(lVar32 + -0x98) = uVar7;
          uVar5 = *(undefined8 *)(lVar27 + -0xa8);
          uVar6 = *(undefined8 *)(lVar27 + -0xc0);
          uVar7 = *(undefined8 *)(lVar27 + -0xb8);
          lVar35 = lVar27 + -0xc0;
          *(undefined8 *)(lVar32 + -0xb0) = *(undefined8 *)(lVar27 + -0xb0);
          *(undefined8 *)(lVar32 + -0xa8) = uVar5;
          *(undefined8 *)(lVar32 + -0xc0) = uVar6;
          *(undefined8 *)(lVar32 + -0xb8) = uVar7;
          lVar31 = lVar32 + -0xc0;
        }
                    /* WARNING: Could not recover jumptable at 0x007250f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar20 = (char *)(*(code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                    (long)(int)(&switchD_00724ce4::switchdataD_0082b030)[uVar34]))
                                    (lVar31,lVar35,
                                     (code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                             (long)(int)(&switchD_00724ce4::switchdataD_0082b030)
                                                        [uVar34]));
        return pcVar20;
      }
      do {
        lVar32 = lVar31;
        lVar27 = lVar35;
        uVar34 = uVar22;
        uVar5 = *(undefined8 *)(lVar27 + -8);
        uVar6 = *(undefined8 *)(lVar27 + -0x20);
        uVar7 = *(undefined8 *)(lVar27 + -0x18);
        uVar8 = *(undefined8 *)(lVar27 + -0x30);
        uVar9 = *(undefined8 *)(lVar27 + -0x28);
        uVar10 = *(undefined8 *)(lVar27 + -0x40);
        uVar11 = *(undefined8 *)(lVar27 + -0x38);
        uVar12 = *(undefined8 *)(lVar27 + -0x50);
        uVar13 = *(undefined8 *)(lVar27 + -0x48);
        uVar14 = *(undefined8 *)(lVar27 + -0x60);
        uVar15 = *(undefined8 *)(lVar27 + -0x58);
        uVar16 = *(undefined8 *)(lVar27 + -0x70);
        uVar17 = *(undefined8 *)(lVar27 + -0x68);
        uVar18 = *(undefined8 *)(lVar27 + -0x80);
        uVar19 = *(undefined8 *)(lVar27 + -0x78);
        lVar35 = lVar27 + -0x80;
        *(undefined8 *)(lVar32 + -0x10) = *(undefined8 *)(lVar27 + -0x10);
        *(undefined8 *)(lVar32 + -8) = uVar5;
        *(undefined8 *)(lVar32 + -0x20) = uVar6;
        *(undefined8 *)(lVar32 + -0x18) = uVar7;
        *(undefined8 *)(lVar32 + -0x30) = uVar8;
        *(undefined8 *)(lVar32 + -0x28) = uVar9;
        *(undefined8 *)(lVar32 + -0x40) = uVar10;
        *(undefined8 *)(lVar32 + -0x38) = uVar11;
        *(undefined8 *)(lVar32 + -0x50) = uVar12;
        *(undefined8 *)(lVar32 + -0x48) = uVar13;
        *(undefined8 *)(lVar32 + -0x60) = uVar14;
        *(undefined8 *)(lVar32 + -0x58) = uVar15;
        *(undefined8 *)(lVar32 + -0x70) = uVar16;
        *(undefined8 *)(lVar32 + -0x68) = uVar17;
        *(undefined8 *)(lVar32 + -0x80) = uVar18;
        *(undefined8 *)(lVar32 + -0x78) = uVar19;
        lVar31 = lVar32 + -0x80;
        uVar22 = uVar34 - 0x80;
      } while (0x7f < uVar34);
      if (-0x41 < (long)(uVar34 - 0x80)) {
        uVar5 = *(undefined8 *)(lVar27 + -0x88);
        uVar34 = uVar34 - 0x40;
        uVar6 = *(undefined8 *)(lVar27 + -0xa0);
        uVar7 = *(undefined8 *)(lVar27 + -0x98);
        *(undefined8 *)(lVar32 + -0x90) = *(undefined8 *)(lVar27 + -0x90);
        *(undefined8 *)(lVar32 + -0x88) = uVar5;
        *(undefined8 *)(lVar32 + -0xa0) = uVar6;
        *(undefined8 *)(lVar32 + -0x98) = uVar7;
        uVar5 = *(undefined8 *)(lVar27 + -0xa8);
        uVar6 = *(undefined8 *)(lVar27 + -0xc0);
        uVar7 = *(undefined8 *)(lVar27 + -0xb8);
        lVar35 = lVar27 + -0xc0;
        *(undefined8 *)(lVar32 + -0xb0) = *(undefined8 *)(lVar27 + -0xb0);
        *(undefined8 *)(lVar32 + -0xa8) = uVar5;
        *(undefined8 *)(lVar32 + -0xc0) = uVar6;
        *(undefined8 *)(lVar32 + -0xb8) = uVar7;
        lVar31 = lVar32 + -0xc0;
      }
      if (0x1f < uVar34) {
        puVar28 = (undefined8 *)(lVar35 + -0x10);
        uVar5 = *(undefined8 *)(lVar35 + -8);
        uVar34 = uVar34 - 0x20;
        uVar6 = *(undefined8 *)(lVar35 + -0x20);
        uVar7 = *(undefined8 *)(lVar35 + -0x18);
        lVar35 = lVar35 + -0x20;
        *(undefined8 *)(lVar31 + -0x10) = *puVar28;
        *(undefined8 *)(lVar31 + -8) = uVar5;
        *(undefined8 *)(lVar31 + -0x20) = uVar6;
        *(undefined8 *)(lVar31 + -0x18) = uVar7;
        lVar31 = lVar31 + -0x20;
      }
                    /* WARNING: Could not recover jumptable at 0x007251e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*(code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                  (long)(int)(&switchD_00724ce4::switchdataD_0082b030)[uVar34]))
                                  (lVar31,lVar35,
                                   (code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                           (long)(int)(&switchD_00724ce4::switchdataD_0082b030)
                                                      [uVar34]));
      return pcVar20;
    }
  }
  if (param_3 < (uint *)0x50) {
    param_2 = param_2 + (long)param_3;
    pcVar20 = param_1 + (long)param_3;
    switch(param_3) {
    case (uint *)0x1:
      pcVar20[-1] = param_2[-1];
      return param_1;
    case (uint *)0x2:
      *(undefined2 *)(pcVar20 + -2) = *(undefined2 *)(param_2 + -2);
      return param_1;
    case (uint *)0x3:
      uVar3 = *(undefined2 *)(param_2 + -2);
      *(undefined2 *)(pcVar20 + -3) = *(undefined2 *)(param_2 + -3);
      *(undefined2 *)(pcVar20 + -2) = uVar3;
      return param_1;
    case (uint *)0x4:
      *(undefined4 *)(pcVar20 + -4) = *(undefined4 *)(param_2 + -4);
      return param_1;
    case (uint *)0x5:
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined4 *)(pcVar20 + -5) = *(undefined4 *)(param_2 + -5);
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x6:
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined4 *)(pcVar20 + -6) = *(undefined4 *)(param_2 + -6);
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x7:
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined4 *)(pcVar20 + -7) = *(undefined4 *)(param_2 + -7);
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x8:
      *(undefined8 *)(pcVar20 + -8) = *(undefined8 *)(param_2 + -8);
      break;
    case (uint *)0x9:
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -9) = *(undefined8 *)(param_2 + -9);
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0xa:
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -10) = *(undefined8 *)(param_2 + -10);
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0xb:
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0xb) = *(undefined8 *)(param_2 + -0xb);
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0xc:
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0xc) = *(undefined8 *)(param_2 + -0xc);
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0xd:
      uVar5 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0xd) = *(undefined8 *)(param_2 + -0xd);
      *(undefined8 *)(pcVar20 + -8) = uVar5;
      return param_1;
    case (uint *)0xe:
      uVar5 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0xe) = *(undefined8 *)(param_2 + -0xe);
      *(undefined8 *)(pcVar20 + -8) = uVar5;
      return param_1;
    case (uint *)0xf:
      uVar5 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0xf) = *(undefined8 *)(param_2 + -0xf);
      *(undefined8 *)(pcVar20 + -8) = uVar5;
      return param_1;
    case (uint *)0x10:
      uVar5 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x10) = *(undefined8 *)(param_2 + -0x10);
      *(undefined8 *)(pcVar20 + -8) = uVar5;
      return param_1;
    case (uint *)0x11:
      uVar5 = *(undefined8 *)(param_2 + -9);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x11) = *(undefined8 *)(param_2 + -0x11);
      *(undefined8 *)(pcVar20 + -9) = uVar5;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x12:
      uVar5 = *(undefined8 *)(param_2 + -10);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x12) = *(undefined8 *)(param_2 + -0x12);
      *(undefined8 *)(pcVar20 + -10) = uVar5;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x13:
      uVar5 = *(undefined8 *)(param_2 + -0xb);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x13) = *(undefined8 *)(param_2 + -0x13);
      *(undefined8 *)(pcVar20 + -0xb) = uVar5;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x14:
      uVar5 = *(undefined8 *)(param_2 + -0xc);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x14) = *(undefined8 *)(param_2 + -0x14);
      *(undefined8 *)(pcVar20 + -0xc) = uVar5;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x15:
      uVar5 = *(undefined8 *)(param_2 + -0xd);
      uVar6 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x15) = *(undefined8 *)(param_2 + -0x15);
      *(undefined8 *)(pcVar20 + -0xd) = uVar5;
      *(undefined8 *)(pcVar20 + -8) = uVar6;
      return param_1;
    case (uint *)0x16:
      uVar5 = *(undefined8 *)(param_2 + -0xe);
      uVar6 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x16) = *(undefined8 *)(param_2 + -0x16);
      *(undefined8 *)(pcVar20 + -0xe) = uVar5;
      *(undefined8 *)(pcVar20 + -8) = uVar6;
      return param_1;
    case (uint *)0x17:
      uVar5 = *(undefined8 *)(param_2 + -0xf);
      uVar6 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x17) = *(undefined8 *)(param_2 + -0x17);
      *(undefined8 *)(pcVar20 + -0xf) = uVar5;
      *(undefined8 *)(pcVar20 + -8) = uVar6;
      return param_1;
    case (uint *)0x18:
      uVar5 = *(undefined8 *)(param_2 + -0x10);
      uVar6 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x18) = *(undefined8 *)(param_2 + -0x18);
      *(undefined8 *)(pcVar20 + -0x10) = uVar5;
      *(undefined8 *)(pcVar20 + -8) = uVar6;
      return param_1;
    case (uint *)0x19:
      uVar5 = *(undefined8 *)(param_2 + -0x11);
      uVar6 = *(undefined8 *)(param_2 + -9);
      cVar2 = param_2[-1];
      *(undefined8 *)(pcVar20 + -0x19) = *(undefined8 *)(param_2 + -0x19);
      *(undefined8 *)(pcVar20 + -0x11) = uVar5;
      *(undefined8 *)(pcVar20 + -9) = uVar6;
      pcVar20[-1] = cVar2;
      return param_1;
    case (uint *)0x1a:
      uVar5 = *(undefined8 *)(param_2 + -0x12);
      uVar6 = *(undefined8 *)(param_2 + -10);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x1a) = *(undefined8 *)(param_2 + -0x1a);
      *(undefined8 *)(pcVar20 + -0x12) = uVar5;
      *(undefined8 *)(pcVar20 + -10) = uVar6;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x1b:
      uVar5 = *(undefined8 *)(param_2 + -0x13);
      uVar6 = *(undefined8 *)(param_2 + -0xb);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x1b) = *(undefined8 *)(param_2 + -0x1b);
      *(undefined8 *)(pcVar20 + -0x13) = uVar5;
      *(undefined8 *)(pcVar20 + -0xb) = uVar6;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x1c:
      uVar5 = *(undefined8 *)(param_2 + -0x14);
      uVar6 = *(undefined8 *)(param_2 + -0xc);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x1c) = *(undefined8 *)(param_2 + -0x1c);
      *(undefined8 *)(pcVar20 + -0x14) = uVar5;
      *(undefined8 *)(pcVar20 + -0xc) = uVar6;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x1d:
      uVar5 = *(undefined8 *)(param_2 + -0x15);
      uVar6 = *(undefined8 *)(param_2 + -0xd);
      uVar7 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x1d) = *(undefined8 *)(param_2 + -0x1d);
      *(undefined8 *)(pcVar20 + -0x15) = uVar5;
      *(undefined8 *)(pcVar20 + -0xd) = uVar6;
      *(undefined8 *)(pcVar20 + -8) = uVar7;
      return param_1;
    case (uint *)0x1e:
      uVar5 = *(undefined8 *)(param_2 + -0x16);
      uVar6 = *(undefined8 *)(param_2 + -0xe);
      uVar7 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x1e) = *(undefined8 *)(param_2 + -0x1e);
      *(undefined8 *)(pcVar20 + -0x16) = uVar5;
      *(undefined8 *)(pcVar20 + -0xe) = uVar6;
      *(undefined8 *)(pcVar20 + -8) = uVar7;
      return param_1;
    case (uint *)0x1f:
      uVar5 = *(undefined8 *)(param_2 + -0x17);
      uVar6 = *(undefined8 *)(param_2 + -0xf);
      uVar7 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x1f) = *(undefined8 *)(param_2 + -0x1f);
      *(undefined8 *)(pcVar20 + -0x17) = uVar5;
      *(undefined8 *)(pcVar20 + -0xf) = uVar6;
      *(undefined8 *)(pcVar20 + -8) = uVar7;
      return param_1;
    case (uint *)0x20:
      uVar5 = *(undefined8 *)(param_2 + -0x18);
      uVar6 = *(undefined8 *)(param_2 + -0x10);
      uVar7 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x20) = *(undefined8 *)(param_2 + -0x20);
      *(undefined8 *)(pcVar20 + -0x18) = uVar5;
      *(undefined8 *)(pcVar20 + -0x10) = uVar6;
      *(undefined8 *)(pcVar20 + -8) = uVar7;
      return param_1;
    case (uint *)0x21:
      uVar5 = *(undefined8 *)(param_2 + -0x19);
      uVar6 = *(undefined8 *)(param_2 + -0x11);
      uVar7 = *(undefined8 *)(param_2 + -9);
      cVar2 = param_2[-1];
      *(undefined8 *)(pcVar20 + -0x21) = *(undefined8 *)(param_2 + -0x21);
      *(undefined8 *)(pcVar20 + -0x19) = uVar5;
      *(undefined8 *)(pcVar20 + -0x11) = uVar6;
      *(undefined8 *)(pcVar20 + -9) = uVar7;
      pcVar20[-1] = cVar2;
      return param_1;
    case (uint *)0x22:
      uVar5 = *(undefined8 *)(param_2 + -0x1a);
      uVar6 = *(undefined8 *)(param_2 + -0x12);
      uVar7 = *(undefined8 *)(param_2 + -10);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x22) = *(undefined8 *)(param_2 + -0x22);
      *(undefined8 *)(pcVar20 + -0x1a) = uVar5;
      *(undefined8 *)(pcVar20 + -0x12) = uVar6;
      *(undefined8 *)(pcVar20 + -10) = uVar7;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x23:
      uVar5 = *(undefined8 *)(param_2 + -0x1b);
      uVar6 = *(undefined8 *)(param_2 + -0x13);
      uVar7 = *(undefined8 *)(param_2 + -0xb);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x23) = *(undefined8 *)(param_2 + -0x23);
      *(undefined8 *)(pcVar20 + -0x1b) = uVar5;
      *(undefined8 *)(pcVar20 + -0x13) = uVar6;
      *(undefined8 *)(pcVar20 + -0xb) = uVar7;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x24:
      uVar5 = *(undefined8 *)(param_2 + -0x1c);
      uVar6 = *(undefined8 *)(param_2 + -0x14);
      uVar7 = *(undefined8 *)(param_2 + -0xc);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x24) = *(undefined8 *)(param_2 + -0x24);
      *(undefined8 *)(pcVar20 + -0x1c) = uVar5;
      *(undefined8 *)(pcVar20 + -0x14) = uVar6;
      *(undefined8 *)(pcVar20 + -0xc) = uVar7;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x25:
      uVar5 = *(undefined8 *)(param_2 + -0x1d);
      uVar6 = *(undefined8 *)(param_2 + -0x15);
      uVar7 = *(undefined8 *)(param_2 + -0xd);
      uVar8 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x25) = *(undefined8 *)(param_2 + -0x25);
      *(undefined8 *)(pcVar20 + -0x1d) = uVar5;
      *(undefined8 *)(pcVar20 + -0x15) = uVar6;
      *(undefined8 *)(pcVar20 + -0xd) = uVar7;
      *(undefined8 *)(pcVar20 + -8) = uVar8;
      return param_1;
    case (uint *)0x26:
      uVar5 = *(undefined8 *)(param_2 + -0x1e);
      uVar6 = *(undefined8 *)(param_2 + -0x16);
      uVar7 = *(undefined8 *)(param_2 + -0xe);
      uVar8 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x26) = *(undefined8 *)(param_2 + -0x26);
      *(undefined8 *)(pcVar20 + -0x1e) = uVar5;
      *(undefined8 *)(pcVar20 + -0x16) = uVar6;
      *(undefined8 *)(pcVar20 + -0xe) = uVar7;
      *(undefined8 *)(pcVar20 + -8) = uVar8;
      return param_1;
    case (uint *)0x27:
      uVar5 = *(undefined8 *)(param_2 + -0x1f);
      uVar6 = *(undefined8 *)(param_2 + -0x17);
      uVar7 = *(undefined8 *)(param_2 + -0xf);
      uVar8 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x27) = *(undefined8 *)(param_2 + -0x27);
      *(undefined8 *)(pcVar20 + -0x1f) = uVar5;
      *(undefined8 *)(pcVar20 + -0x17) = uVar6;
      *(undefined8 *)(pcVar20 + -0xf) = uVar7;
      *(undefined8 *)(pcVar20 + -8) = uVar8;
      return param_1;
    case (uint *)0x28:
      uVar5 = *(undefined8 *)(param_2 + -0x20);
      uVar6 = *(undefined8 *)(param_2 + -0x18);
      uVar7 = *(undefined8 *)(param_2 + -0x10);
      uVar8 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x28) = *(undefined8 *)(param_2 + -0x28);
      *(undefined8 *)(pcVar20 + -0x20) = uVar5;
      *(undefined8 *)(pcVar20 + -0x18) = uVar6;
      *(undefined8 *)(pcVar20 + -0x10) = uVar7;
      *(undefined8 *)(pcVar20 + -8) = uVar8;
      return param_1;
    case (uint *)0x29:
      uVar5 = *(undefined8 *)(param_2 + -0x21);
      uVar6 = *(undefined8 *)(param_2 + -0x19);
      uVar7 = *(undefined8 *)(param_2 + -0x11);
      uVar8 = *(undefined8 *)(param_2 + -9);
      cVar2 = param_2[-1];
      *(undefined8 *)(pcVar20 + -0x29) = *(undefined8 *)(param_2 + -0x29);
      *(undefined8 *)(pcVar20 + -0x21) = uVar5;
      *(undefined8 *)(pcVar20 + -0x19) = uVar6;
      *(undefined8 *)(pcVar20 + -0x11) = uVar7;
      *(undefined8 *)(pcVar20 + -9) = uVar8;
      pcVar20[-1] = cVar2;
      return param_1;
    case (uint *)0x2a:
      uVar5 = *(undefined8 *)(param_2 + -0x22);
      uVar6 = *(undefined8 *)(param_2 + -0x1a);
      uVar7 = *(undefined8 *)(param_2 + -0x12);
      uVar8 = *(undefined8 *)(param_2 + -10);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x2a) = *(undefined8 *)(param_2 + -0x2a);
      *(undefined8 *)(pcVar20 + -0x22) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1a) = uVar6;
      *(undefined8 *)(pcVar20 + -0x12) = uVar7;
      *(undefined8 *)(pcVar20 + -10) = uVar8;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x2b:
      uVar5 = *(undefined8 *)(param_2 + -0x23);
      uVar6 = *(undefined8 *)(param_2 + -0x1b);
      uVar7 = *(undefined8 *)(param_2 + -0x13);
      uVar8 = *(undefined8 *)(param_2 + -0xb);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x2b) = *(undefined8 *)(param_2 + -0x2b);
      *(undefined8 *)(pcVar20 + -0x23) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1b) = uVar6;
      *(undefined8 *)(pcVar20 + -0x13) = uVar7;
      *(undefined8 *)(pcVar20 + -0xb) = uVar8;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x2c:
      uVar5 = *(undefined8 *)(param_2 + -0x24);
      uVar6 = *(undefined8 *)(param_2 + -0x1c);
      uVar7 = *(undefined8 *)(param_2 + -0x14);
      uVar8 = *(undefined8 *)(param_2 + -0xc);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x2c) = *(undefined8 *)(param_2 + -0x2c);
      *(undefined8 *)(pcVar20 + -0x24) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1c) = uVar6;
      *(undefined8 *)(pcVar20 + -0x14) = uVar7;
      *(undefined8 *)(pcVar20 + -0xc) = uVar8;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x2d:
      uVar5 = *(undefined8 *)(param_2 + -0x25);
      uVar6 = *(undefined8 *)(param_2 + -0x1d);
      uVar7 = *(undefined8 *)(param_2 + -0x15);
      uVar8 = *(undefined8 *)(param_2 + -0xd);
      uVar9 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x2d) = *(undefined8 *)(param_2 + -0x2d);
      *(undefined8 *)(pcVar20 + -0x25) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1d) = uVar6;
      *(undefined8 *)(pcVar20 + -0x15) = uVar7;
      *(undefined8 *)(pcVar20 + -0xd) = uVar8;
      *(undefined8 *)(pcVar20 + -8) = uVar9;
      return param_1;
    case (uint *)0x2e:
      uVar5 = *(undefined8 *)(param_2 + -0x26);
      uVar6 = *(undefined8 *)(param_2 + -0x1e);
      uVar7 = *(undefined8 *)(param_2 + -0x16);
      uVar8 = *(undefined8 *)(param_2 + -0xe);
      uVar9 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x2e) = *(undefined8 *)(param_2 + -0x2e);
      *(undefined8 *)(pcVar20 + -0x26) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1e) = uVar6;
      *(undefined8 *)(pcVar20 + -0x16) = uVar7;
      *(undefined8 *)(pcVar20 + -0xe) = uVar8;
      *(undefined8 *)(pcVar20 + -8) = uVar9;
      return param_1;
    case (uint *)0x2f:
      uVar5 = *(undefined8 *)(param_2 + -0x27);
      uVar6 = *(undefined8 *)(param_2 + -0x1f);
      uVar7 = *(undefined8 *)(param_2 + -0x17);
      uVar8 = *(undefined8 *)(param_2 + -0xf);
      uVar9 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x2f) = *(undefined8 *)(param_2 + -0x2f);
      *(undefined8 *)(pcVar20 + -0x27) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1f) = uVar6;
      *(undefined8 *)(pcVar20 + -0x17) = uVar7;
      *(undefined8 *)(pcVar20 + -0xf) = uVar8;
      *(undefined8 *)(pcVar20 + -8) = uVar9;
      return param_1;
    case (uint *)0x30:
      uVar5 = *(undefined8 *)(param_2 + -0x28);
      uVar6 = *(undefined8 *)(param_2 + -0x20);
      uVar7 = *(undefined8 *)(param_2 + -0x18);
      uVar8 = *(undefined8 *)(param_2 + -0x10);
      uVar9 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x30) = *(undefined8 *)(param_2 + -0x30);
      *(undefined8 *)(pcVar20 + -0x28) = uVar5;
      *(undefined8 *)(pcVar20 + -0x20) = uVar6;
      *(undefined8 *)(pcVar20 + -0x18) = uVar7;
      *(undefined8 *)(pcVar20 + -0x10) = uVar8;
      *(undefined8 *)(pcVar20 + -8) = uVar9;
      return param_1;
    case (uint *)0x31:
      uVar9 = *(undefined8 *)(param_2 + -0x29);
      uVar5 = *(undefined8 *)(param_2 + -0x21);
      uVar6 = *(undefined8 *)(param_2 + -0x19);
      uVar7 = *(undefined8 *)(param_2 + -0x11);
      uVar8 = *(undefined8 *)(param_2 + -9);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x31) = *(undefined8 *)(param_2 + -0x31);
      *(undefined8 *)(pcVar20 + -0x29) = uVar9;
      *(undefined8 *)(pcVar20 + -0x21) = uVar5;
      *(undefined8 *)(pcVar20 + -0x19) = uVar6;
      *(undefined8 *)(pcVar20 + -0x11) = uVar7;
      *(undefined8 *)(pcVar20 + -9) = uVar8;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x32:
      uVar9 = *(undefined8 *)(param_2 + -0x2a);
      uVar5 = *(undefined8 *)(param_2 + -0x22);
      uVar6 = *(undefined8 *)(param_2 + -0x1a);
      uVar7 = *(undefined8 *)(param_2 + -0x12);
      uVar8 = *(undefined8 *)(param_2 + -10);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x32) = *(undefined8 *)(param_2 + -0x32);
      *(undefined8 *)(pcVar20 + -0x2a) = uVar9;
      *(undefined8 *)(pcVar20 + -0x22) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1a) = uVar6;
      *(undefined8 *)(pcVar20 + -0x12) = uVar7;
      *(undefined8 *)(pcVar20 + -10) = uVar8;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x33:
      uVar9 = *(undefined8 *)(param_2 + -0x2b);
      uVar5 = *(undefined8 *)(param_2 + -0x23);
      uVar6 = *(undefined8 *)(param_2 + -0x1b);
      uVar7 = *(undefined8 *)(param_2 + -0x13);
      uVar8 = *(undefined8 *)(param_2 + -0xb);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x33) = *(undefined8 *)(param_2 + -0x33);
      *(undefined8 *)(pcVar20 + -0x2b) = uVar9;
      *(undefined8 *)(pcVar20 + -0x23) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1b) = uVar6;
      *(undefined8 *)(pcVar20 + -0x13) = uVar7;
      *(undefined8 *)(pcVar20 + -0xb) = uVar8;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x34:
      uVar9 = *(undefined8 *)(param_2 + -0x2c);
      uVar5 = *(undefined8 *)(param_2 + -0x24);
      uVar6 = *(undefined8 *)(param_2 + -0x1c);
      uVar7 = *(undefined8 *)(param_2 + -0x14);
      uVar8 = *(undefined8 *)(param_2 + -0xc);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x34) = *(undefined8 *)(param_2 + -0x34);
      *(undefined8 *)(pcVar20 + -0x2c) = uVar9;
      *(undefined8 *)(pcVar20 + -0x24) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1c) = uVar6;
      *(undefined8 *)(pcVar20 + -0x14) = uVar7;
      *(undefined8 *)(pcVar20 + -0xc) = uVar8;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x35:
      uVar10 = *(undefined8 *)(param_2 + -0x2d);
      uVar5 = *(undefined8 *)(param_2 + -0x25);
      uVar6 = *(undefined8 *)(param_2 + -0x1d);
      uVar7 = *(undefined8 *)(param_2 + -0x15);
      uVar8 = *(undefined8 *)(param_2 + -0xd);
      uVar9 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x35) = *(undefined8 *)(param_2 + -0x35);
      *(undefined8 *)(pcVar20 + -0x2d) = uVar10;
      *(undefined8 *)(pcVar20 + -0x25) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1d) = uVar6;
      *(undefined8 *)(pcVar20 + -0x15) = uVar7;
      *(undefined8 *)(pcVar20 + -0xd) = uVar8;
      *(undefined8 *)(pcVar20 + -8) = uVar9;
      return param_1;
    case (uint *)0x36:
      uVar10 = *(undefined8 *)(param_2 + -0x2e);
      uVar5 = *(undefined8 *)(param_2 + -0x26);
      uVar6 = *(undefined8 *)(param_2 + -0x1e);
      uVar7 = *(undefined8 *)(param_2 + -0x16);
      uVar8 = *(undefined8 *)(param_2 + -0xe);
      uVar9 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x36) = *(undefined8 *)(param_2 + -0x36);
      *(undefined8 *)(pcVar20 + -0x2e) = uVar10;
      *(undefined8 *)(pcVar20 + -0x26) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1e) = uVar6;
      *(undefined8 *)(pcVar20 + -0x16) = uVar7;
      *(undefined8 *)(pcVar20 + -0xe) = uVar8;
      *(undefined8 *)(pcVar20 + -8) = uVar9;
      return param_1;
    case (uint *)0x37:
      uVar10 = *(undefined8 *)(param_2 + -0x2f);
      uVar5 = *(undefined8 *)(param_2 + -0x27);
      uVar6 = *(undefined8 *)(param_2 + -0x1f);
      uVar7 = *(undefined8 *)(param_2 + -0x17);
      uVar8 = *(undefined8 *)(param_2 + -0xf);
      uVar9 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x37) = *(undefined8 *)(param_2 + -0x37);
      *(undefined8 *)(pcVar20 + -0x2f) = uVar10;
      *(undefined8 *)(pcVar20 + -0x27) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1f) = uVar6;
      *(undefined8 *)(pcVar20 + -0x17) = uVar7;
      *(undefined8 *)(pcVar20 + -0xf) = uVar8;
      *(undefined8 *)(pcVar20 + -8) = uVar9;
      return param_1;
    case (uint *)0x38:
      uVar10 = *(undefined8 *)(param_2 + -0x30);
      uVar5 = *(undefined8 *)(param_2 + -0x28);
      uVar6 = *(undefined8 *)(param_2 + -0x20);
      uVar7 = *(undefined8 *)(param_2 + -0x18);
      uVar8 = *(undefined8 *)(param_2 + -0x10);
      uVar9 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x38) = *(undefined8 *)(param_2 + -0x38);
      *(undefined8 *)(pcVar20 + -0x30) = uVar10;
      *(undefined8 *)(pcVar20 + -0x28) = uVar5;
      *(undefined8 *)(pcVar20 + -0x20) = uVar6;
      *(undefined8 *)(pcVar20 + -0x18) = uVar7;
      *(undefined8 *)(pcVar20 + -0x10) = uVar8;
      *(undefined8 *)(pcVar20 + -8) = uVar9;
      return param_1;
    case (uint *)0x39:
      uVar10 = *(undefined8 *)(param_2 + -0x31);
      uVar5 = *(undefined8 *)(param_2 + -0x29);
      uVar6 = *(undefined8 *)(param_2 + -0x21);
      uVar7 = *(undefined8 *)(param_2 + -0x19);
      uVar8 = *(undefined8 *)(param_2 + -0x11);
      uVar9 = *(undefined8 *)(param_2 + -9);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x39) = *(undefined8 *)(param_2 + -0x39);
      *(undefined8 *)(pcVar20 + -0x31) = uVar10;
      *(undefined8 *)(pcVar20 + -0x29) = uVar5;
      *(undefined8 *)(pcVar20 + -0x21) = uVar6;
      *(undefined8 *)(pcVar20 + -0x19) = uVar7;
      *(undefined8 *)(pcVar20 + -0x11) = uVar8;
      *(undefined8 *)(pcVar20 + -9) = uVar9;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x3a:
      uVar10 = *(undefined8 *)(param_2 + -0x32);
      uVar5 = *(undefined8 *)(param_2 + -0x2a);
      uVar6 = *(undefined8 *)(param_2 + -0x22);
      uVar7 = *(undefined8 *)(param_2 + -0x1a);
      uVar8 = *(undefined8 *)(param_2 + -0x12);
      uVar9 = *(undefined8 *)(param_2 + -10);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x3a) = *(undefined8 *)(param_2 + -0x3a);
      *(undefined8 *)(pcVar20 + -0x32) = uVar10;
      *(undefined8 *)(pcVar20 + -0x2a) = uVar5;
      *(undefined8 *)(pcVar20 + -0x22) = uVar6;
      *(undefined8 *)(pcVar20 + -0x1a) = uVar7;
      *(undefined8 *)(pcVar20 + -0x12) = uVar8;
      *(undefined8 *)(pcVar20 + -10) = uVar9;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x3b:
      uVar10 = *(undefined8 *)(param_2 + -0x33);
      uVar5 = *(undefined8 *)(param_2 + -0x2b);
      uVar6 = *(undefined8 *)(param_2 + -0x23);
      uVar7 = *(undefined8 *)(param_2 + -0x1b);
      uVar8 = *(undefined8 *)(param_2 + -0x13);
      uVar9 = *(undefined8 *)(param_2 + -0xb);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x3b) = *(undefined8 *)(param_2 + -0x3b);
      *(undefined8 *)(pcVar20 + -0x33) = uVar10;
      *(undefined8 *)(pcVar20 + -0x2b) = uVar5;
      *(undefined8 *)(pcVar20 + -0x23) = uVar6;
      *(undefined8 *)(pcVar20 + -0x1b) = uVar7;
      *(undefined8 *)(pcVar20 + -0x13) = uVar8;
      *(undefined8 *)(pcVar20 + -0xb) = uVar9;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x3c:
      uVar10 = *(undefined8 *)(param_2 + -0x34);
      uVar5 = *(undefined8 *)(param_2 + -0x2c);
      uVar6 = *(undefined8 *)(param_2 + -0x24);
      uVar7 = *(undefined8 *)(param_2 + -0x1c);
      uVar8 = *(undefined8 *)(param_2 + -0x14);
      uVar9 = *(undefined8 *)(param_2 + -0xc);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x3c) = *(undefined8 *)(param_2 + -0x3c);
      *(undefined8 *)(pcVar20 + -0x34) = uVar10;
      *(undefined8 *)(pcVar20 + -0x2c) = uVar5;
      *(undefined8 *)(pcVar20 + -0x24) = uVar6;
      *(undefined8 *)(pcVar20 + -0x1c) = uVar7;
      *(undefined8 *)(pcVar20 + -0x14) = uVar8;
      *(undefined8 *)(pcVar20 + -0xc) = uVar9;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x3d:
      uVar11 = *(undefined8 *)(param_2 + -0x35);
      uVar5 = *(undefined8 *)(param_2 + -0x2d);
      uVar6 = *(undefined8 *)(param_2 + -0x25);
      uVar7 = *(undefined8 *)(param_2 + -0x1d);
      uVar8 = *(undefined8 *)(param_2 + -0x15);
      uVar9 = *(undefined8 *)(param_2 + -0xd);
      uVar10 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x3d) = *(undefined8 *)(param_2 + -0x3d);
      *(undefined8 *)(pcVar20 + -0x35) = uVar11;
      *(undefined8 *)(pcVar20 + -0x2d) = uVar5;
      *(undefined8 *)(pcVar20 + -0x25) = uVar6;
      *(undefined8 *)(pcVar20 + -0x1d) = uVar7;
      *(undefined8 *)(pcVar20 + -0x15) = uVar8;
      *(undefined8 *)(pcVar20 + -0xd) = uVar9;
      *(undefined8 *)(pcVar20 + -8) = uVar10;
      return param_1;
    case (uint *)0x3e:
      uVar11 = *(undefined8 *)(param_2 + -0x36);
      uVar5 = *(undefined8 *)(param_2 + -0x2e);
      uVar6 = *(undefined8 *)(param_2 + -0x26);
      uVar7 = *(undefined8 *)(param_2 + -0x1e);
      uVar8 = *(undefined8 *)(param_2 + -0x16);
      uVar9 = *(undefined8 *)(param_2 + -0xe);
      uVar10 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x3e) = *(undefined8 *)(param_2 + -0x3e);
      *(undefined8 *)(pcVar20 + -0x36) = uVar11;
      *(undefined8 *)(pcVar20 + -0x2e) = uVar5;
      *(undefined8 *)(pcVar20 + -0x26) = uVar6;
      *(undefined8 *)(pcVar20 + -0x1e) = uVar7;
      *(undefined8 *)(pcVar20 + -0x16) = uVar8;
      *(undefined8 *)(pcVar20 + -0xe) = uVar9;
      *(undefined8 *)(pcVar20 + -8) = uVar10;
      return param_1;
    case (uint *)0x3f:
      uVar11 = *(undefined8 *)(param_2 + -0x37);
      uVar5 = *(undefined8 *)(param_2 + -0x2f);
      uVar6 = *(undefined8 *)(param_2 + -0x27);
      uVar7 = *(undefined8 *)(param_2 + -0x1f);
      uVar8 = *(undefined8 *)(param_2 + -0x17);
      uVar9 = *(undefined8 *)(param_2 + -0xf);
      uVar10 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x3f) = *(undefined8 *)(param_2 + -0x3f);
      *(undefined8 *)(pcVar20 + -0x37) = uVar11;
      *(undefined8 *)(pcVar20 + -0x2f) = uVar5;
      *(undefined8 *)(pcVar20 + -0x27) = uVar6;
      *(undefined8 *)(pcVar20 + -0x1f) = uVar7;
      *(undefined8 *)(pcVar20 + -0x17) = uVar8;
      *(undefined8 *)(pcVar20 + -0xf) = uVar9;
      *(undefined8 *)(pcVar20 + -8) = uVar10;
      return param_1;
    case (uint *)0x40:
      uVar11 = *(undefined8 *)(param_2 + -0x38);
      uVar5 = *(undefined8 *)(param_2 + -0x30);
      uVar6 = *(undefined8 *)(param_2 + -0x28);
      uVar7 = *(undefined8 *)(param_2 + -0x20);
      uVar8 = *(undefined8 *)(param_2 + -0x18);
      uVar9 = *(undefined8 *)(param_2 + -0x10);
      uVar10 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x40) = *(undefined8 *)(param_2 + -0x40);
      *(undefined8 *)(pcVar20 + -0x38) = uVar11;
      *(undefined8 *)(pcVar20 + -0x30) = uVar5;
      *(undefined8 *)(pcVar20 + -0x28) = uVar6;
      *(undefined8 *)(pcVar20 + -0x20) = uVar7;
      *(undefined8 *)(pcVar20 + -0x18) = uVar8;
      *(undefined8 *)(pcVar20 + -0x10) = uVar9;
      *(undefined8 *)(pcVar20 + -8) = uVar10;
      return param_1;
    case (uint *)0x41:
      uVar9 = *(undefined8 *)(param_2 + -0x39);
      uVar10 = *(undefined8 *)(param_2 + -0x31);
      uVar11 = *(undefined8 *)(param_2 + -0x29);
      uVar5 = *(undefined8 *)(param_2 + -0x21);
      uVar6 = *(undefined8 *)(param_2 + -0x19);
      uVar7 = *(undefined8 *)(param_2 + -0x11);
      uVar8 = *(undefined8 *)(param_2 + -9);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x41) = *(undefined8 *)(param_2 + -0x41);
      *(undefined8 *)(pcVar20 + -0x39) = uVar9;
      *(undefined8 *)(pcVar20 + -0x31) = uVar10;
      *(undefined8 *)(pcVar20 + -0x29) = uVar11;
      *(undefined8 *)(pcVar20 + -0x21) = uVar5;
      *(undefined8 *)(pcVar20 + -0x19) = uVar6;
      *(undefined8 *)(pcVar20 + -0x11) = uVar7;
      *(undefined8 *)(pcVar20 + -9) = uVar8;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x42:
      uVar10 = *(undefined8 *)(param_2 + -0x3a);
      uVar11 = *(undefined8 *)(param_2 + -0x32);
      uVar12 = *(undefined8 *)(param_2 + -0x2a);
      uVar5 = *(undefined8 *)(param_2 + -0x2a);
      uVar6 = *(undefined8 *)(param_2 + -0x22);
      uVar7 = *(undefined8 *)(param_2 + -0x1a);
      uVar8 = *(undefined8 *)(param_2 + -0x12);
      uVar9 = *(undefined8 *)(param_2 + -10);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x42) = *(undefined8 *)(param_2 + -0x42);
      *(undefined8 *)(pcVar20 + -0x3a) = uVar10;
      *(undefined8 *)(pcVar20 + -0x32) = uVar11;
      *(undefined8 *)(pcVar20 + -0x2a) = uVar12;
      *(undefined8 *)(pcVar20 + -0x2a) = uVar5;
      *(undefined8 *)(pcVar20 + -0x22) = uVar6;
      *(undefined8 *)(pcVar20 + -0x1a) = uVar7;
      *(undefined8 *)(pcVar20 + -0x12) = uVar8;
      *(undefined8 *)(pcVar20 + -10) = uVar9;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x43:
      uVar10 = *(undefined8 *)(param_2 + -0x3b);
      uVar11 = *(undefined8 *)(param_2 + -0x3b);
      uVar12 = *(undefined8 *)(param_2 + -0x33);
      uVar5 = *(undefined8 *)(param_2 + -0x2b);
      uVar6 = *(undefined8 *)(param_2 + -0x23);
      uVar7 = *(undefined8 *)(param_2 + -0x1b);
      uVar8 = *(undefined8 *)(param_2 + -0x13);
      uVar9 = *(undefined8 *)(param_2 + -0xb);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x43) = *(undefined8 *)(param_2 + -0x43);
      *(undefined8 *)(pcVar20 + -0x3b) = uVar10;
      *(undefined8 *)(pcVar20 + -0x3b) = uVar11;
      *(undefined8 *)(pcVar20 + -0x33) = uVar12;
      *(undefined8 *)(pcVar20 + -0x2b) = uVar5;
      *(undefined8 *)(pcVar20 + -0x23) = uVar6;
      *(undefined8 *)(pcVar20 + -0x1b) = uVar7;
      *(undefined8 *)(pcVar20 + -0x13) = uVar8;
      *(undefined8 *)(pcVar20 + -0xb) = uVar9;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x44:
      uVar9 = *(undefined8 *)(param_2 + -0x3c);
      uVar10 = *(undefined8 *)(param_2 + -0x34);
      uVar11 = *(undefined8 *)(param_2 + -0x2c);
      uVar5 = *(undefined8 *)(param_2 + -0x24);
      uVar6 = *(undefined8 *)(param_2 + -0x1c);
      uVar7 = *(undefined8 *)(param_2 + -0x14);
      uVar8 = *(undefined8 *)(param_2 + -0xc);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x44) = *(undefined8 *)(param_2 + -0x44);
      *(undefined8 *)(pcVar20 + -0x3c) = uVar9;
      *(undefined8 *)(pcVar20 + -0x34) = uVar10;
      *(undefined8 *)(pcVar20 + -0x2c) = uVar11;
      *(undefined8 *)(pcVar20 + -0x24) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1c) = uVar6;
      *(undefined8 *)(pcVar20 + -0x14) = uVar7;
      *(undefined8 *)(pcVar20 + -0xc) = uVar8;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x45:
      uVar10 = *(undefined8 *)(param_2 + -0x3d);
      uVar11 = *(undefined8 *)(param_2 + -0x35);
      uVar12 = *(undefined8 *)(param_2 + -0x2d);
      uVar5 = *(undefined8 *)(param_2 + -0x25);
      uVar6 = *(undefined8 *)(param_2 + -0x1d);
      uVar7 = *(undefined8 *)(param_2 + -0x15);
      uVar8 = *(undefined8 *)(param_2 + -0xd);
      uVar9 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x45) = *(undefined8 *)(param_2 + -0x45);
      *(undefined8 *)(pcVar20 + -0x3d) = uVar10;
      *(undefined8 *)(pcVar20 + -0x35) = uVar11;
      *(undefined8 *)(pcVar20 + -0x2d) = uVar12;
      *(undefined8 *)(pcVar20 + -0x25) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1d) = uVar6;
      *(undefined8 *)(pcVar20 + -0x15) = uVar7;
      *(undefined8 *)(pcVar20 + -0xd) = uVar8;
      *(undefined8 *)(pcVar20 + -8) = uVar9;
      return param_1;
    case (uint *)0x46:
      uVar10 = *(undefined8 *)(param_2 + -0x3e);
      uVar11 = *(undefined8 *)(param_2 + -0x36);
      uVar12 = *(undefined8 *)(param_2 + -0x2e);
      uVar5 = *(undefined8 *)(param_2 + -0x26);
      uVar6 = *(undefined8 *)(param_2 + -0x1e);
      uVar7 = *(undefined8 *)(param_2 + -0x16);
      uVar8 = *(undefined8 *)(param_2 + -0xe);
      uVar9 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x46) = *(undefined8 *)(param_2 + -0x46);
      *(undefined8 *)(pcVar20 + -0x3e) = uVar10;
      *(undefined8 *)(pcVar20 + -0x36) = uVar11;
      *(undefined8 *)(pcVar20 + -0x2e) = uVar12;
      *(undefined8 *)(pcVar20 + -0x26) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1e) = uVar6;
      *(undefined8 *)(pcVar20 + -0x16) = uVar7;
      *(undefined8 *)(pcVar20 + -0xe) = uVar8;
      *(undefined8 *)(pcVar20 + -8) = uVar9;
      return param_1;
    case (uint *)0x47:
      uVar10 = *(undefined8 *)(param_2 + -0x3f);
      uVar11 = *(undefined8 *)(param_2 + -0x37);
      uVar12 = *(undefined8 *)(param_2 + -0x2f);
      uVar5 = *(undefined8 *)(param_2 + -0x27);
      uVar6 = *(undefined8 *)(param_2 + -0x1f);
      uVar7 = *(undefined8 *)(param_2 + -0x17);
      uVar8 = *(undefined8 *)(param_2 + -0xf);
      uVar9 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x47) = *(undefined8 *)(param_2 + -0x47);
      *(undefined8 *)(pcVar20 + -0x3f) = uVar10;
      *(undefined8 *)(pcVar20 + -0x37) = uVar11;
      *(undefined8 *)(pcVar20 + -0x2f) = uVar12;
      *(undefined8 *)(pcVar20 + -0x27) = uVar5;
      *(undefined8 *)(pcVar20 + -0x1f) = uVar6;
      *(undefined8 *)(pcVar20 + -0x17) = uVar7;
      *(undefined8 *)(pcVar20 + -0xf) = uVar8;
      *(undefined8 *)(pcVar20 + -8) = uVar9;
      return param_1;
    case (uint *)0x48:
      uVar10 = *(undefined8 *)(param_2 + -0x40);
      uVar11 = *(undefined8 *)(param_2 + -0x38);
      uVar12 = *(undefined8 *)(param_2 + -0x30);
      uVar5 = *(undefined8 *)(param_2 + -0x28);
      uVar6 = *(undefined8 *)(param_2 + -0x20);
      uVar7 = *(undefined8 *)(param_2 + -0x18);
      uVar8 = *(undefined8 *)(param_2 + -0x10);
      uVar9 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x48) = *(undefined8 *)(param_2 + -0x48);
      *(undefined8 *)(pcVar20 + -0x40) = uVar10;
      *(undefined8 *)(pcVar20 + -0x38) = uVar11;
      *(undefined8 *)(pcVar20 + -0x30) = uVar12;
      *(undefined8 *)(pcVar20 + -0x28) = uVar5;
      *(undefined8 *)(pcVar20 + -0x20) = uVar6;
      *(undefined8 *)(pcVar20 + -0x18) = uVar7;
      *(undefined8 *)(pcVar20 + -0x10) = uVar8;
      *(undefined8 *)(pcVar20 + -8) = uVar9;
      return param_1;
    case (uint *)0x49:
      uVar10 = *(undefined8 *)(param_2 + -0x41);
      uVar11 = *(undefined8 *)(param_2 + -0x39);
      uVar12 = *(undefined8 *)(param_2 + -0x31);
      uVar5 = *(undefined8 *)(param_2 + -0x29);
      uVar6 = *(undefined8 *)(param_2 + -0x21);
      uVar7 = *(undefined8 *)(param_2 + -0x19);
      uVar8 = *(undefined8 *)(param_2 + -0x11);
      uVar9 = *(undefined8 *)(param_2 + -9);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x49) = *(undefined8 *)(param_2 + -0x49);
      *(undefined8 *)(pcVar20 + -0x41) = uVar10;
      *(undefined8 *)(pcVar20 + -0x39) = uVar11;
      *(undefined8 *)(pcVar20 + -0x31) = uVar12;
      *(undefined8 *)(pcVar20 + -0x29) = uVar5;
      *(undefined8 *)(pcVar20 + -0x21) = uVar6;
      *(undefined8 *)(pcVar20 + -0x19) = uVar7;
      *(undefined8 *)(pcVar20 + -0x11) = uVar8;
      *(undefined8 *)(pcVar20 + -9) = uVar9;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x4a:
      uVar10 = *(undefined8 *)(param_2 + -0x42);
      uVar11 = *(undefined8 *)(param_2 + -0x3a);
      uVar12 = *(undefined8 *)(param_2 + -0x32);
      uVar5 = *(undefined8 *)(param_2 + -0x2a);
      uVar6 = *(undefined8 *)(param_2 + -0x22);
      uVar7 = *(undefined8 *)(param_2 + -0x1a);
      uVar8 = *(undefined8 *)(param_2 + -0x12);
      uVar9 = *(undefined8 *)(param_2 + -10);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x4a) = *(undefined8 *)(param_2 + -0x4a);
      *(undefined8 *)(pcVar20 + -0x42) = uVar10;
      *(undefined8 *)(pcVar20 + -0x3a) = uVar11;
      *(undefined8 *)(pcVar20 + -0x32) = uVar12;
      *(undefined8 *)(pcVar20 + -0x2a) = uVar5;
      *(undefined8 *)(pcVar20 + -0x22) = uVar6;
      *(undefined8 *)(pcVar20 + -0x1a) = uVar7;
      *(undefined8 *)(pcVar20 + -0x12) = uVar8;
      *(undefined8 *)(pcVar20 + -10) = uVar9;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x4b:
      uVar10 = *(undefined8 *)(param_2 + -0x43);
      uVar11 = *(undefined8 *)(param_2 + -0x3b);
      uVar12 = *(undefined8 *)(param_2 + -0x33);
      uVar5 = *(undefined8 *)(param_2 + -0x2b);
      uVar6 = *(undefined8 *)(param_2 + -0x23);
      uVar7 = *(undefined8 *)(param_2 + -0x1b);
      uVar8 = *(undefined8 *)(param_2 + -0x13);
      uVar9 = *(undefined8 *)(param_2 + -0xb);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x4b) = *(undefined8 *)(param_2 + -0x4b);
      *(undefined8 *)(pcVar20 + -0x43) = uVar10;
      *(undefined8 *)(pcVar20 + -0x3b) = uVar11;
      *(undefined8 *)(pcVar20 + -0x33) = uVar12;
      *(undefined8 *)(pcVar20 + -0x2b) = uVar5;
      *(undefined8 *)(pcVar20 + -0x23) = uVar6;
      *(undefined8 *)(pcVar20 + -0x1b) = uVar7;
      *(undefined8 *)(pcVar20 + -0x13) = uVar8;
      *(undefined8 *)(pcVar20 + -0xb) = uVar9;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x4c:
      uVar10 = *(undefined8 *)(param_2 + -0x44);
      uVar11 = *(undefined8 *)(param_2 + -0x3c);
      uVar12 = *(undefined8 *)(param_2 + -0x34);
      uVar5 = *(undefined8 *)(param_2 + -0x2c);
      uVar6 = *(undefined8 *)(param_2 + -0x24);
      uVar7 = *(undefined8 *)(param_2 + -0x1c);
      uVar8 = *(undefined8 *)(param_2 + -0x14);
      uVar9 = *(undefined8 *)(param_2 + -0xc);
      uVar4 = *(undefined4 *)(param_2 + -4);
      *(undefined8 *)(pcVar20 + -0x4c) = *(undefined8 *)(param_2 + -0x4c);
      *(undefined8 *)(pcVar20 + -0x44) = uVar10;
      *(undefined8 *)(pcVar20 + -0x3c) = uVar11;
      *(undefined8 *)(pcVar20 + -0x34) = uVar12;
      *(undefined8 *)(pcVar20 + -0x2c) = uVar5;
      *(undefined8 *)(pcVar20 + -0x24) = uVar6;
      *(undefined8 *)(pcVar20 + -0x1c) = uVar7;
      *(undefined8 *)(pcVar20 + -0x14) = uVar8;
      *(undefined8 *)(pcVar20 + -0xc) = uVar9;
      *(undefined4 *)(pcVar20 + -4) = uVar4;
      return param_1;
    case (uint *)0x4d:
      uVar11 = *(undefined8 *)(param_2 + -0x45);
      uVar12 = *(undefined8 *)(param_2 + -0x3d);
      uVar13 = *(undefined8 *)(param_2 + -0x35);
      uVar5 = *(undefined8 *)(param_2 + -0x2d);
      uVar6 = *(undefined8 *)(param_2 + -0x25);
      uVar7 = *(undefined8 *)(param_2 + -0x1d);
      uVar8 = *(undefined8 *)(param_2 + -0x15);
      uVar9 = *(undefined8 *)(param_2 + -0xd);
      uVar10 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x4d) = *(undefined8 *)(param_2 + -0x4d);
      *(undefined8 *)(pcVar20 + -0x45) = uVar11;
      *(undefined8 *)(pcVar20 + -0x3d) = uVar12;
      *(undefined8 *)(pcVar20 + -0x35) = uVar13;
      *(undefined8 *)(pcVar20 + -0x2d) = uVar5;
      *(undefined8 *)(pcVar20 + -0x25) = uVar6;
      *(undefined8 *)(pcVar20 + -0x1d) = uVar7;
      *(undefined8 *)(pcVar20 + -0x15) = uVar8;
      *(undefined8 *)(pcVar20 + -0xd) = uVar9;
      *(undefined8 *)(pcVar20 + -8) = uVar10;
      return param_1;
    case (uint *)0x4e:
      uVar11 = *(undefined8 *)(param_2 + -0x46);
      uVar12 = *(undefined8 *)(param_2 + -0x3e);
      uVar13 = *(undefined8 *)(param_2 + -0x36);
      uVar5 = *(undefined8 *)(param_2 + -0x2e);
      uVar6 = *(undefined8 *)(param_2 + -0x26);
      uVar7 = *(undefined8 *)(param_2 + -0x1e);
      uVar8 = *(undefined8 *)(param_2 + -0x16);
      uVar9 = *(undefined8 *)(param_2 + -0xe);
      uVar10 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x4e) = *(undefined8 *)(param_2 + -0x4e);
      *(undefined8 *)(pcVar20 + -0x46) = uVar11;
      *(undefined8 *)(pcVar20 + -0x3e) = uVar12;
      *(undefined8 *)(pcVar20 + -0x36) = uVar13;
      *(undefined8 *)(pcVar20 + -0x2e) = uVar5;
      *(undefined8 *)(pcVar20 + -0x26) = uVar6;
      *(undefined8 *)(pcVar20 + -0x1e) = uVar7;
      *(undefined8 *)(pcVar20 + -0x16) = uVar8;
      *(undefined8 *)(pcVar20 + -0xe) = uVar9;
      *(undefined8 *)(pcVar20 + -8) = uVar10;
      return param_1;
    case (uint *)0x4f:
      uVar11 = *(undefined8 *)(param_2 + -0x47);
      uVar12 = *(undefined8 *)(param_2 + -0x3f);
      uVar13 = *(undefined8 *)(param_2 + -0x37);
      uVar5 = *(undefined8 *)(param_2 + -0x2f);
      uVar6 = *(undefined8 *)(param_2 + -0x27);
      uVar7 = *(undefined8 *)(param_2 + -0x1f);
      uVar8 = *(undefined8 *)(param_2 + -0x17);
      uVar9 = *(undefined8 *)(param_2 + -0xf);
      uVar10 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(pcVar20 + -0x4f) = *(undefined8 *)(param_2 + -0x4f);
      *(undefined8 *)(pcVar20 + -0x47) = uVar11;
      *(undefined8 *)(pcVar20 + -0x3f) = uVar12;
      *(undefined8 *)(pcVar20 + -0x37) = uVar13;
      *(undefined8 *)(pcVar20 + -0x2f) = uVar5;
      *(undefined8 *)(pcVar20 + -0x27) = uVar6;
      *(undefined8 *)(pcVar20 + -0x1f) = uVar7;
      *(undefined8 *)(pcVar20 + -0x17) = uVar8;
      *(undefined8 *)(pcVar20 + -0xf) = uVar9;
      *(undefined8 *)(pcVar20 + -8) = uVar10;
      return param_1;
    }
    return param_1;
  }
  uVar5 = *(undefined8 *)param_2;
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar22 = (ulong)param_1 & 0xfffffffffffffff0;
  puVar28 = (undefined8 *)(uVar22 + 0x10);
  uVar25 = (long)param_3 + ((long)param_1 - (long)puVar28);
  param_2 = param_2 + -((long)param_1 - (long)puVar28);
  if (DAT_0093d708 < uVar25) {
    uVar7 = *(undefined8 *)param_2;
    uVar8 = *(undefined8 *)(param_2 + 8);
    param_2 = param_2 + 0x10;
    *(undefined8 *)param_1 = uVar5;
    *(undefined8 *)(param_1 + 8) = uVar6;
    *puVar28 = uVar7;
    *(undefined8 *)(uVar22 + 0x18) = uVar8;
    puVar28 = (undefined8 *)(uVar22 + 0x20);
    uVar25 = uVar25 - 0x90;
    if (((ulong)((long)param_2 - (long)puVar28) < uVar25) && (uVar25 < uVar34 << 2)) {
      do {
        puVar30 = puVar28;
        pcVar20 = param_2;
        uVar34 = uVar25;
        uVar5 = *(undefined8 *)(pcVar20 + 8);
        uVar6 = *(undefined8 *)(pcVar20 + 0x10);
        uVar7 = *(undefined8 *)(pcVar20 + 0x18);
        uVar8 = *(undefined8 *)(pcVar20 + 0x20);
        uVar9 = *(undefined8 *)(pcVar20 + 0x28);
        uVar10 = *(undefined8 *)(pcVar20 + 0x30);
        uVar11 = *(undefined8 *)(pcVar20 + 0x38);
        uVar12 = *(undefined8 *)(pcVar20 + 0x40);
        uVar13 = *(undefined8 *)(pcVar20 + 0x48);
        uVar14 = *(undefined8 *)(pcVar20 + 0x50);
        uVar15 = *(undefined8 *)(pcVar20 + 0x58);
        uVar16 = *(undefined8 *)(pcVar20 + 0x60);
        uVar17 = *(undefined8 *)(pcVar20 + 0x68);
        uVar18 = *(undefined8 *)(pcVar20 + 0x70);
        uVar19 = *(undefined8 *)(pcVar20 + 0x78);
        param_2 = pcVar20 + 0x80;
        *puVar30 = *(undefined8 *)pcVar20;
        puVar30[1] = uVar5;
        puVar30[2] = uVar6;
        puVar30[3] = uVar7;
        puVar30[4] = uVar8;
        puVar30[5] = uVar9;
        puVar30[6] = uVar10;
        puVar30[7] = uVar11;
        puVar30[8] = uVar12;
        puVar30[9] = uVar13;
        puVar30[10] = uVar14;
        puVar30[0xb] = uVar15;
        puVar30[0xc] = uVar16;
        puVar30[0xd] = uVar17;
        puVar30[0xe] = uVar18;
        puVar30[0xf] = uVar19;
        puVar28 = puVar30 + 0x10;
        uVar25 = uVar34 - 0x80;
      } while (0x7f < uVar34);
      if (-0x41 < (long)(uVar34 - 0x80)) {
        uVar5 = *(undefined8 *)param_2;
        uVar6 = *(undefined8 *)(pcVar20 + 0x88);
        uVar7 = *(undefined8 *)(pcVar20 + 0x90);
        uVar8 = *(undefined8 *)(pcVar20 + 0x98);
        uVar9 = *(undefined8 *)(pcVar20 + 0xa0);
        uVar10 = *(undefined8 *)(pcVar20 + 0xa8);
        uVar11 = *(undefined8 *)(pcVar20 + 0xb0);
        uVar12 = *(undefined8 *)(pcVar20 + 0xb8);
        param_2 = pcVar20 + 0xc0;
        *puVar28 = uVar5;
        puVar30[0x11] = uVar6;
        puVar30[0x12] = uVar7;
        puVar30[0x13] = uVar8;
        puVar30[0x14] = uVar9;
        puVar30[0x15] = uVar10;
        puVar30[0x16] = uVar11;
        puVar30[0x17] = uVar12;
        puVar28 = puVar30 + 0x18;
        uVar34 = uVar34 - 0x40;
      }
                    /* WARNING: Could not recover jumptable at 0x0072767b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*(code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                  (long)(int)(&switchD_00724ce4::switchdataD_0082b030)[uVar34]))
                                  ((long)puVar28 + uVar34,param_2 + uVar34,
                                   (code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                           (long)(int)(&switchD_00724ce4::switchdataD_0082b030)
                                                      [uVar34]));
      return pcVar20;
    }
    do {
      puVar30 = puVar28;
      pcVar20 = param_2;
      uVar34 = uVar25;
      uVar5 = *(undefined8 *)(pcVar20 + 8);
      uVar6 = *(undefined8 *)(pcVar20 + 0x10);
      uVar7 = *(undefined8 *)(pcVar20 + 0x18);
      uVar8 = *(undefined8 *)(pcVar20 + 0x20);
      uVar9 = *(undefined8 *)(pcVar20 + 0x28);
      uVar10 = *(undefined8 *)(pcVar20 + 0x30);
      uVar11 = *(undefined8 *)(pcVar20 + 0x38);
      uVar12 = *(undefined8 *)(pcVar20 + 0x40);
      uVar13 = *(undefined8 *)(pcVar20 + 0x48);
      uVar14 = *(undefined8 *)(pcVar20 + 0x50);
      uVar15 = *(undefined8 *)(pcVar20 + 0x58);
      uVar16 = *(undefined8 *)(pcVar20 + 0x60);
      uVar17 = *(undefined8 *)(pcVar20 + 0x68);
      uVar18 = *(undefined8 *)(pcVar20 + 0x70);
      uVar19 = *(undefined8 *)(pcVar20 + 0x78);
      param_2 = pcVar20 + 0x80;
      *puVar30 = *(undefined8 *)pcVar20;
      puVar30[1] = uVar5;
      puVar30[2] = uVar6;
      puVar30[3] = uVar7;
      puVar30[4] = uVar8;
      puVar30[5] = uVar9;
      puVar30[6] = uVar10;
      puVar30[7] = uVar11;
      puVar30[8] = uVar12;
      puVar30[9] = uVar13;
      puVar30[10] = uVar14;
      puVar30[0xb] = uVar15;
      puVar30[0xc] = uVar16;
      puVar30[0xd] = uVar17;
      puVar30[0xe] = uVar18;
      puVar30[0xf] = uVar19;
      puVar28 = puVar30 + 0x10;
      uVar25 = uVar34 - 0x80;
    } while (0x7f < uVar34);
    if (-0x41 < (long)(uVar34 - 0x80)) {
      uVar5 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(pcVar20 + 0x88);
      uVar7 = *(undefined8 *)(pcVar20 + 0x90);
      uVar8 = *(undefined8 *)(pcVar20 + 0x98);
      uVar9 = *(undefined8 *)(pcVar20 + 0xa0);
      uVar10 = *(undefined8 *)(pcVar20 + 0xa8);
      uVar11 = *(undefined8 *)(pcVar20 + 0xb0);
      uVar12 = *(undefined8 *)(pcVar20 + 0xb8);
      param_2 = pcVar20 + 0xc0;
      *puVar28 = uVar5;
      puVar30[0x11] = uVar6;
      puVar30[0x12] = uVar7;
      puVar30[0x13] = uVar8;
      puVar30[0x14] = uVar9;
      puVar30[0x15] = uVar10;
      puVar30[0x16] = uVar11;
      puVar30[0x17] = uVar12;
      puVar28 = puVar30 + 0x18;
      uVar34 = uVar34 - 0x40;
    }
                    /* WARNING: Could not recover jumptable at 0x007275b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar20 = (char *)(*(code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                (long)(int)(&switchD_00724ce4::switchdataD_0082b030)[uVar34]))
                                ((long)puVar28 + uVar34,param_2 + uVar34,
                                 (code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                         (long)(int)(&switchD_00724ce4::switchdataD_0082b030)
                                                    [uVar34]));
    return pcVar20;
  }
  uVar34 = (ulong)param_2 & 0xf;
  if (uVar34 != 0) {
    lVar35 = (long)*(int *)(&DAT_0082b170 + uVar34 * 4);
    switch(uVar34) {
    case 1:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b198 + lVar35);
      if (DAT_0093d718 <= uVar25) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b190 + lVar35 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072520b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar28,param_2,uVar25 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 2:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b198 + lVar35);
      if (DAT_0093d718 <= uVar25) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b190 + lVar35 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072535b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar28,param_2,uVar25 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 3:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b198 + lVar35);
      if (DAT_0093d718 <= uVar25) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b190 + lVar35 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x007254ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar28,param_2,uVar25 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 4:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b198 + lVar35);
      if (DAT_0093d718 <= uVar25) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b190 + lVar35 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x007255fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar28,param_2,uVar25 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 5:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b198 + lVar35);
      if (DAT_0093d718 <= uVar25) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b190 + lVar35 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072574b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar28,param_2,uVar25 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 6:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b198 + lVar35);
      if (DAT_0093d718 <= uVar25) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b190 + lVar35 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072589b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar28,param_2,uVar25 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 7:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b198 + lVar35);
      if (DAT_0093d718 <= uVar25) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b190 + lVar35 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x007259eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar28,param_2,uVar25 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 8:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b194 + lVar35 + 2);
      if (DAT_0093d718 <= uVar25) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b18c + lVar35 + 3);
      }
                    /* WARNING: Could not recover jumptable at 0x00725b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar28,param_2,uVar25 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 9:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b198 + lVar35);
      if (DAT_0093d718 <= uVar25) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b190 + lVar35 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00725c8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar28,param_2,uVar25 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 10:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b198 + lVar35);
      if (DAT_0093d718 <= uVar25) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b190 + lVar35 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00725ddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar28,param_2,uVar25 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 0xb:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b198 + lVar35);
      if (DAT_0093d718 <= uVar25) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b190 + lVar35 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00725f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar28,param_2,uVar25 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 0xc:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b198 + lVar35);
      if (DAT_0093d718 <= uVar25) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b190 + lVar35 + 1);
      }
      break;
    case 0xd:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b198 + lVar35);
      if (DAT_0093d718 <= uVar25) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b190 + lVar35 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x007261cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar28,param_2,uVar25 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 0xe:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b198 + lVar35);
      if (DAT_0093d718 <= uVar25) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b190 + lVar35 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072631b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar28,param_2,uVar25 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    case 0xf:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b198 + lVar35);
      if (DAT_0093d718 <= uVar25) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_0082b190 + lVar35 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0072646b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                  (puVar28,param_2,uVar25 - 0x40,DAT_0093d718,param_1,
                                   UNRECOVERED_JUMPTABLE_00);
      return pcVar20;
    }
                    /* WARNING: Could not recover jumptable at 0x0072607b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar20 = (char *)(*UNRECOVERED_JUMPTABLE_00)
                                (puVar28,param_2,uVar25 - 0x40,DAT_0093d718,param_1,
                                 UNRECOVERED_JUMPTABLE_00);
    return pcVar20;
  }
  uVar34 = uVar25 - 0x10;
  uVar7 = *(undefined8 *)(param_2 + 8);
  pcVar20 = param_2 + 0x10;
  *puVar28 = *(undefined8 *)param_2;
  *(undefined8 *)(uVar22 + 0x18) = uVar7;
  puVar28 = (undefined8 *)(uVar22 + 0x20);
  *(undefined8 *)param_1 = uVar5;
  *(undefined8 *)(param_1 + 8) = uVar6;
  if (uVar34 < 0x81) {
    if (0x3f < uVar34) {
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      uVar8 = *(undefined8 *)(param_2 + 0x30);
      uVar9 = *(undefined8 *)(param_2 + 0x38);
      uVar10 = *(undefined8 *)(param_2 + 0x40);
      uVar11 = *(undefined8 *)(param_2 + 0x48);
      *puVar28 = *(undefined8 *)pcVar20;
      *(undefined8 *)(uVar22 + 0x28) = uVar5;
      *(undefined8 *)(uVar22 + 0x30) = uVar6;
      *(undefined8 *)(uVar22 + 0x38) = uVar7;
      *(undefined8 *)(uVar22 + 0x40) = uVar8;
      *(undefined8 *)(uVar22 + 0x48) = uVar9;
      *(undefined8 *)(uVar22 + 0x50) = uVar10;
      *(undefined8 *)(uVar22 + 0x58) = uVar11;
      uVar34 = uVar25 - 0x50;
      pcVar20 = param_2 + 0x50;
      puVar28 = (undefined8 *)(uVar22 + 0x60);
    }
                    /* WARNING: Could not recover jumptable at 0x00724e07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar20 = (char *)(*(code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                (long)(int)(&switchD_00724ce4::switchdataD_0082b030)[uVar34]))
                                ((long)puVar28 + uVar34,pcVar20 + uVar34,
                                 (code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                         (long)(int)(&switchD_00724ce4::switchdataD_0082b030)
                                                    [uVar34]));
    return pcVar20;
  }
  uVar22 = uVar25 - 0x90;
  uVar25 = uVar25 - 0x90;
  if (uVar34 < DAT_0093d718) {
    do {
      puVar30 = puVar28;
      pcVar26 = pcVar20;
      uVar34 = uVar25;
      uVar5 = *(undefined8 *)(pcVar26 + 8);
      uVar6 = *(undefined8 *)(pcVar26 + 0x10);
      uVar7 = *(undefined8 *)(pcVar26 + 0x18);
      uVar8 = *(undefined8 *)(pcVar26 + 0x20);
      uVar9 = *(undefined8 *)(pcVar26 + 0x28);
      uVar10 = *(undefined8 *)(pcVar26 + 0x30);
      uVar11 = *(undefined8 *)(pcVar26 + 0x38);
      *puVar30 = *(undefined8 *)pcVar26;
      puVar30[1] = uVar5;
      puVar30[2] = uVar6;
      puVar30[3] = uVar7;
      puVar30[4] = uVar8;
      puVar30[5] = uVar9;
      puVar30[6] = uVar10;
      puVar30[7] = uVar11;
      uVar5 = *(undefined8 *)(pcVar26 + 0x48);
      uVar6 = *(undefined8 *)(pcVar26 + 0x50);
      uVar7 = *(undefined8 *)(pcVar26 + 0x58);
      uVar8 = *(undefined8 *)(pcVar26 + 0x60);
      uVar9 = *(undefined8 *)(pcVar26 + 0x68);
      uVar10 = *(undefined8 *)(pcVar26 + 0x70);
      uVar11 = *(undefined8 *)(pcVar26 + 0x78);
      pcVar20 = pcVar26 + 0x80;
      puVar30[8] = *(undefined8 *)(pcVar26 + 0x40);
      puVar30[9] = uVar5;
      puVar30[10] = uVar6;
      puVar30[0xb] = uVar7;
      puVar30[0xc] = uVar8;
      puVar30[0xd] = uVar9;
      puVar30[0xe] = uVar10;
      puVar30[0xf] = uVar11;
      puVar28 = puVar30 + 0x10;
      uVar25 = uVar34 - 0x80;
    } while (0x7f < uVar34);
    if (-0x41 < (long)(uVar34 - 0x80)) {
      uVar5 = *(undefined8 *)(pcVar26 + 0x88);
      uVar34 = uVar34 - 0x40;
      uVar6 = *(undefined8 *)(pcVar26 + 0x90);
      uVar7 = *(undefined8 *)(pcVar26 + 0x98);
      *puVar28 = *(undefined8 *)pcVar20;
      puVar30[0x11] = uVar5;
      puVar30[0x12] = uVar6;
      puVar30[0x13] = uVar7;
      uVar5 = *(undefined8 *)(pcVar26 + 0xa8);
      uVar6 = *(undefined8 *)(pcVar26 + 0xb0);
      uVar7 = *(undefined8 *)(pcVar26 + 0xb8);
      pcVar20 = pcVar26 + 0xc0;
      puVar30[0x14] = *(undefined8 *)(pcVar26 + 0xa0);
      puVar30[0x15] = uVar5;
      puVar30[0x16] = uVar6;
      puVar30[0x17] = uVar7;
      puVar28 = puVar30 + 0x18;
    }
                    /* WARNING: Could not recover jumptable at 0x00724ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar20 = (char *)(*(code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                (long)(int)(&switchD_00724ce4::switchdataD_0082b030)[uVar34]))
                                ((long)puVar28 + uVar34,pcVar20 + uVar34,
                                 (code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                         (long)(int)(&switchD_00724ce4::switchdataD_0082b030)
                                                    [uVar34]));
    return pcVar20;
  }
  do {
    puVar30 = puVar28;
    pcVar26 = pcVar20;
    uVar34 = uVar22;
    uVar5 = *(undefined8 *)(pcVar26 + 8);
    uVar6 = *(undefined8 *)(pcVar26 + 0x10);
    uVar7 = *(undefined8 *)(pcVar26 + 0x18);
    uVar8 = *(undefined8 *)(pcVar26 + 0x20);
    uVar9 = *(undefined8 *)(pcVar26 + 0x28);
    uVar10 = *(undefined8 *)(pcVar26 + 0x30);
    uVar11 = *(undefined8 *)(pcVar26 + 0x38);
    uVar12 = *(undefined8 *)(pcVar26 + 0x40);
    uVar13 = *(undefined8 *)(pcVar26 + 0x48);
    uVar14 = *(undefined8 *)(pcVar26 + 0x50);
    uVar15 = *(undefined8 *)(pcVar26 + 0x58);
    uVar16 = *(undefined8 *)(pcVar26 + 0x60);
    uVar17 = *(undefined8 *)(pcVar26 + 0x68);
    uVar18 = *(undefined8 *)(pcVar26 + 0x70);
    uVar19 = *(undefined8 *)(pcVar26 + 0x78);
    pcVar20 = pcVar26 + 0x80;
    *puVar30 = *(undefined8 *)pcVar26;
    puVar30[1] = uVar5;
    puVar30[2] = uVar6;
    puVar30[3] = uVar7;
    puVar30[4] = uVar8;
    puVar30[5] = uVar9;
    puVar30[6] = uVar10;
    puVar30[7] = uVar11;
    puVar30[8] = uVar12;
    puVar30[9] = uVar13;
    puVar30[10] = uVar14;
    puVar30[0xb] = uVar15;
    puVar30[0xc] = uVar16;
    puVar30[0xd] = uVar17;
    puVar30[0xe] = uVar18;
    puVar30[0xf] = uVar19;
    puVar28 = puVar30 + 0x10;
    uVar22 = uVar34 - 0x80;
  } while (0x7f < uVar34);
  if (-0x41 < (long)(uVar34 - 0x80)) {
    uVar5 = *(undefined8 *)(pcVar26 + 0x88);
    uVar34 = uVar34 - 0x40;
    uVar6 = *(undefined8 *)(pcVar26 + 0x90);
    uVar7 = *(undefined8 *)(pcVar26 + 0x98);
    *puVar28 = *(undefined8 *)pcVar20;
    puVar30[0x11] = uVar5;
    puVar30[0x12] = uVar6;
    puVar30[0x13] = uVar7;
    uVar5 = *(undefined8 *)(pcVar26 + 0xa8);
    uVar6 = *(undefined8 *)(pcVar26 + 0xb0);
    uVar7 = *(undefined8 *)(pcVar26 + 0xb8);
    pcVar20 = pcVar26 + 0xc0;
    puVar30[0x14] = *(undefined8 *)(pcVar26 + 0xa0);
    puVar30[0x15] = uVar5;
    puVar30[0x16] = uVar6;
    puVar30[0x17] = uVar7;
    puVar28 = puVar30 + 0x18;
  }
  if (0x1f < uVar34) {
    uVar5 = *(undefined8 *)pcVar20;
    uVar6 = *(undefined8 *)(pcVar20 + 8);
    uVar34 = uVar34 - 0x20;
    uVar7 = *(undefined8 *)(pcVar20 + 0x10);
    uVar8 = *(undefined8 *)(pcVar20 + 0x18);
    pcVar20 = pcVar20 + 0x20;
    *puVar28 = uVar5;
    puVar28[1] = uVar6;
    puVar28[2] = uVar7;
    puVar28[3] = uVar8;
    puVar28 = puVar28 + 4;
  }
                    /* WARNING: Could not recover jumptable at 0x00724fcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar20 = (char *)(*(code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                              (long)(int)(&switchD_00724ce4::switchdataD_0082b030)[uVar34]))
                              ((long)puVar28 + uVar34,pcVar20 + uVar34,
                               (code *)((long)&switchD_00724ce4::switchdataD_0082b030 +
                                       (long)(int)(&switchD_00724ce4::switchdataD_0082b030)[uVar34])
                              );
  return pcVar20;
}

