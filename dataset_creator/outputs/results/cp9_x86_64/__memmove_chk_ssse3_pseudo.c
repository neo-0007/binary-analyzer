
undefined8 *
__memmove_chk_ssse3(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
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
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar29 = __x86_shared_cache_size_half;
  if (param_4 < param_3) {
                    /* WARNING: Subroutine does not return */
    __fortify_fail("buffer overflow detected");
  }
  if (param_2 <= param_1) {
    if (param_1 == param_2) {
      return param_1;
    }
    if (0x4f < param_3) {
      puVar19 = (undefined8 *)((long)param_2 + (param_3 - 0x10));
      uVar4 = *puVar19;
      uVar5 = puVar19[1];
      puVar19 = (undefined8 *)((long)param_1 + (param_3 - 0x10));
      uVar20 = (long)param_1 + param_3 & 0xf;
      uVar25 = (long)param_1 + param_3 ^ uVar20;
      uVar21 = param_3 - uVar20;
      uVar20 = (long)param_2 + (param_3 - uVar20);
      if (__x86_shared_cache_size_half < uVar21) {
        uVar6 = *(undefined8 *)(uVar20 - 0x10);
        uVar7 = *(undefined8 *)(uVar20 - 8);
        lVar30 = uVar20 - 0x10;
        *puVar19 = uVar4;
        puVar19[1] = uVar5;
        *(undefined8 *)(uVar25 - 0x10) = uVar6;
        *(undefined8 *)(uVar25 - 8) = uVar7;
        lVar27 = uVar25 - 0x10;
        uVar21 = uVar21 - 0x90;
        if (((ulong)(lVar27 - lVar30) < uVar21) && ((ulong)(lVar27 - lVar30) < uVar29)) {
          do {
            lVar28 = lVar27;
            lVar24 = lVar30;
            uVar29 = uVar21;
            uVar4 = *(undefined8 *)(lVar24 + -8);
            uVar5 = *(undefined8 *)(lVar24 + -0x20);
            uVar6 = *(undefined8 *)(lVar24 + -0x18);
            uVar7 = *(undefined8 *)(lVar24 + -0x30);
            uVar8 = *(undefined8 *)(lVar24 + -0x28);
            uVar9 = *(undefined8 *)(lVar24 + -0x40);
            uVar10 = *(undefined8 *)(lVar24 + -0x38);
            uVar11 = *(undefined8 *)(lVar24 + -0x50);
            uVar12 = *(undefined8 *)(lVar24 + -0x48);
            uVar13 = *(undefined8 *)(lVar24 + -0x60);
            uVar14 = *(undefined8 *)(lVar24 + -0x58);
            uVar15 = *(undefined8 *)(lVar24 + -0x70);
            uVar16 = *(undefined8 *)(lVar24 + -0x68);
            uVar17 = *(undefined8 *)(lVar24 + -0x80);
            uVar18 = *(undefined8 *)(lVar24 + -0x78);
            lVar30 = lVar24 + -0x80;
            *(undefined8 *)(lVar28 + -0x10) = *(undefined8 *)(lVar24 + -0x10);
            *(undefined8 *)(lVar28 + -8) = uVar4;
            *(undefined8 *)(lVar28 + -0x20) = uVar5;
            *(undefined8 *)(lVar28 + -0x18) = uVar6;
            *(undefined8 *)(lVar28 + -0x30) = uVar7;
            *(undefined8 *)(lVar28 + -0x28) = uVar8;
            *(undefined8 *)(lVar28 + -0x40) = uVar9;
            *(undefined8 *)(lVar28 + -0x38) = uVar10;
            *(undefined8 *)(lVar28 + -0x50) = uVar11;
            *(undefined8 *)(lVar28 + -0x48) = uVar12;
            *(undefined8 *)(lVar28 + -0x60) = uVar13;
            *(undefined8 *)(lVar28 + -0x58) = uVar14;
            *(undefined8 *)(lVar28 + -0x70) = uVar15;
            *(undefined8 *)(lVar28 + -0x68) = uVar16;
            *(undefined8 *)(lVar28 + -0x80) = uVar17;
            *(undefined8 *)(lVar28 + -0x78) = uVar18;
            lVar27 = lVar28 + -0x80;
            uVar21 = uVar29 - 0x80;
          } while (0x7f < uVar29);
          if (-0x41 < (long)(uVar29 - 0x80)) {
            uVar4 = *(undefined8 *)(lVar24 + -0x88);
            uVar5 = *(undefined8 *)(lVar24 + -0xa0);
            uVar6 = *(undefined8 *)(lVar24 + -0x98);
            uVar7 = *(undefined8 *)(lVar24 + -0xb0);
            uVar8 = *(undefined8 *)(lVar24 + -0xa8);
            uVar9 = *(undefined8 *)(lVar24 + -0xc0);
            uVar10 = *(undefined8 *)(lVar24 + -0xb8);
            lVar30 = lVar24 + -0xc0;
            *(undefined8 *)(lVar28 + -0x90) = *(undefined8 *)(lVar24 + -0x90);
            *(undefined8 *)(lVar28 + -0x88) = uVar4;
            *(undefined8 *)(lVar28 + -0xa0) = uVar5;
            *(undefined8 *)(lVar28 + -0x98) = uVar6;
            *(undefined8 *)(lVar28 + -0xb0) = uVar7;
            *(undefined8 *)(lVar28 + -0xa8) = uVar8;
            *(undefined8 *)(lVar28 + -0xc0) = uVar9;
            *(undefined8 *)(lVar28 + -0xb8) = uVar10;
            lVar27 = lVar28 + -0xc0;
            uVar29 = uVar29 - 0x40;
          }
                    /* WARNING: Could not recover jumptable at 0x0071de23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*(code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                              (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]))
                              (lVar27,lVar30,
                               (code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                                       (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29])
                              );
          return puVar19;
        }
        do {
          lVar28 = lVar27;
          lVar24 = lVar30;
          uVar29 = uVar21;
          uVar4 = *(undefined8 *)(lVar24 + -8);
          uVar5 = *(undefined8 *)(lVar24 + -0x20);
          uVar6 = *(undefined8 *)(lVar24 + -0x18);
          uVar7 = *(undefined8 *)(lVar24 + -0x30);
          uVar8 = *(undefined8 *)(lVar24 + -0x28);
          uVar9 = *(undefined8 *)(lVar24 + -0x40);
          uVar10 = *(undefined8 *)(lVar24 + -0x38);
          uVar11 = *(undefined8 *)(lVar24 + -0x50);
          uVar12 = *(undefined8 *)(lVar24 + -0x48);
          uVar13 = *(undefined8 *)(lVar24 + -0x60);
          uVar14 = *(undefined8 *)(lVar24 + -0x58);
          uVar15 = *(undefined8 *)(lVar24 + -0x70);
          uVar16 = *(undefined8 *)(lVar24 + -0x68);
          uVar17 = *(undefined8 *)(lVar24 + -0x80);
          uVar18 = *(undefined8 *)(lVar24 + -0x78);
          lVar30 = lVar24 + -0x80;
          *(undefined8 *)(lVar28 + -0x10) = *(undefined8 *)(lVar24 + -0x10);
          *(undefined8 *)(lVar28 + -8) = uVar4;
          *(undefined8 *)(lVar28 + -0x20) = uVar5;
          *(undefined8 *)(lVar28 + -0x18) = uVar6;
          *(undefined8 *)(lVar28 + -0x30) = uVar7;
          *(undefined8 *)(lVar28 + -0x28) = uVar8;
          *(undefined8 *)(lVar28 + -0x40) = uVar9;
          *(undefined8 *)(lVar28 + -0x38) = uVar10;
          *(undefined8 *)(lVar28 + -0x50) = uVar11;
          *(undefined8 *)(lVar28 + -0x48) = uVar12;
          *(undefined8 *)(lVar28 + -0x60) = uVar13;
          *(undefined8 *)(lVar28 + -0x58) = uVar14;
          *(undefined8 *)(lVar28 + -0x70) = uVar15;
          *(undefined8 *)(lVar28 + -0x68) = uVar16;
          *(undefined8 *)(lVar28 + -0x80) = uVar17;
          *(undefined8 *)(lVar28 + -0x78) = uVar18;
          lVar27 = lVar28 + -0x80;
          uVar21 = uVar29 - 0x80;
        } while (0x7f < uVar29);
        if (-0x41 < (long)(uVar29 - 0x80)) {
          uVar4 = *(undefined8 *)(lVar24 + -0x88);
          uVar5 = *(undefined8 *)(lVar24 + -0xa0);
          uVar6 = *(undefined8 *)(lVar24 + -0x98);
          uVar7 = *(undefined8 *)(lVar24 + -0xb0);
          uVar8 = *(undefined8 *)(lVar24 + -0xa8);
          uVar9 = *(undefined8 *)(lVar24 + -0xc0);
          uVar10 = *(undefined8 *)(lVar24 + -0xb8);
          lVar30 = lVar24 + -0xc0;
          *(undefined8 *)(lVar28 + -0x90) = *(undefined8 *)(lVar24 + -0x90);
          *(undefined8 *)(lVar28 + -0x88) = uVar4;
          *(undefined8 *)(lVar28 + -0xa0) = uVar5;
          *(undefined8 *)(lVar28 + -0x98) = uVar6;
          *(undefined8 *)(lVar28 + -0xb0) = uVar7;
          *(undefined8 *)(lVar28 + -0xa8) = uVar8;
          *(undefined8 *)(lVar28 + -0xc0) = uVar9;
          *(undefined8 *)(lVar28 + -0xb8) = uVar10;
          lVar27 = lVar28 + -0xc0;
          uVar29 = uVar29 - 0x40;
        }
                    /* WARNING: Could not recover jumptable at 0x0071dd66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar19 = (undefined8 *)
                  (*(code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                            (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]))
                            (lVar27,lVar30,
                             (code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                                     (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]));
        return puVar19;
      }
      uVar29 = uVar20 & 0xf;
      if (uVar29 != 0) {
        lVar30 = (long)*(int *)(&DAT_00820f90 + uVar29 * 4);
        switch(uVar29) {
        case 1:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb8 + lVar30);
          if (__x86_data_cache_size_half <= uVar21) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb0 + lVar30 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0071b8bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (uVar25,uVar20,uVar21 - 0x40,__x86_data_cache_size_half,puVar19,
                               UNRECOVERED_JUMPTABLE_00);
          return puVar19;
        case 2:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb8 + lVar30);
          if (__x86_data_cache_size_half <= uVar21) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb0 + lVar30 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0071ba0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (uVar25,uVar20,uVar21 - 0x40,__x86_data_cache_size_half,puVar19,
                               UNRECOVERED_JUMPTABLE_00);
          return puVar19;
        case 3:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb8 + lVar30);
          if (__x86_data_cache_size_half <= uVar21) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb0 + lVar30 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0071bb5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (uVar25,uVar20,uVar21 - 0x40,__x86_data_cache_size_half,puVar19,
                               UNRECOVERED_JUMPTABLE_00);
          return puVar19;
        case 4:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb8 + lVar30);
          if (__x86_data_cache_size_half <= uVar21) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb0 + lVar30 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0071bcab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (uVar25,uVar20,uVar21 - 0x40,__x86_data_cache_size_half,puVar19,
                               UNRECOVERED_JUMPTABLE_00);
          return puVar19;
        case 5:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb8 + lVar30);
          if (__x86_data_cache_size_half <= uVar21) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb0 + lVar30 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0071bdfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (uVar25,uVar20,uVar21 - 0x40,__x86_data_cache_size_half,puVar19,
                               UNRECOVERED_JUMPTABLE_00);
          return puVar19;
        case 6:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb8 + lVar30);
          if (__x86_data_cache_size_half <= uVar21) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb0 + lVar30 + 1);
          }
          break;
        case 7:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb8 + lVar30);
          if (__x86_data_cache_size_half <= uVar21) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb0 + lVar30 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0071c09b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (uVar25,uVar20,uVar21 - 0x40,__x86_data_cache_size_half,puVar19,
                               UNRECOVERED_JUMPTABLE_00);
          return puVar19;
        case 8:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb8 + lVar30);
          if (__x86_data_cache_size_half <= uVar21) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb0 + lVar30 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0071c1eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (uVar25,uVar20,uVar21 - 0x40,__x86_data_cache_size_half,puVar19,
                               UNRECOVERED_JUMPTABLE_00);
          return puVar19;
        case 9:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb8 + lVar30);
          if (__x86_data_cache_size_half <= uVar21) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb0 + lVar30 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0071c33b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (uVar25,uVar20,uVar21 - 0x40,__x86_data_cache_size_half,puVar19,
                               UNRECOVERED_JUMPTABLE_00);
          return puVar19;
        case 10:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb8 + lVar30);
          if (__x86_data_cache_size_half <= uVar21) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb0 + lVar30 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0071c48b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (uVar25,uVar20,uVar21 - 0x40,__x86_data_cache_size_half,puVar19,
                               UNRECOVERED_JUMPTABLE_00);
          return puVar19;
        case 0xb:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb8 + lVar30);
          if (__x86_data_cache_size_half <= uVar21) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb0 + lVar30 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0071c5db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (uVar25,uVar20,uVar21 - 0x40,__x86_data_cache_size_half,puVar19,
                               UNRECOVERED_JUMPTABLE_00);
          return puVar19;
        case 0xc:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb8 + lVar30);
          if (__x86_data_cache_size_half <= uVar21) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb0 + lVar30 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0071c72b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (uVar25,uVar20,uVar21 - 0x40,__x86_data_cache_size_half,puVar19,
                               UNRECOVERED_JUMPTABLE_00);
          return puVar19;
        case 0xd:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb8 + lVar30);
          if (__x86_data_cache_size_half <= uVar21) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb0 + lVar30 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0071c87b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (uVar25,uVar20,uVar21 - 0x40,__x86_data_cache_size_half,puVar19,
                               UNRECOVERED_JUMPTABLE_00);
          return puVar19;
        case 0xe:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb8 + lVar30);
          if (__x86_data_cache_size_half <= uVar21) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb0 + lVar30 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0071c9cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (uVar25,uVar20,uVar21 - 0x40,__x86_data_cache_size_half,puVar19,
                               UNRECOVERED_JUMPTABLE_00);
          return puVar19;
        case 0xf:
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb8 + lVar30);
          if (__x86_data_cache_size_half <= uVar21) {
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820fb0 + lVar30 + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x0071cb1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (uVar25,uVar20,uVar21 - 0x40,__x86_data_cache_size_half,puVar19,
                               UNRECOVERED_JUMPTABLE_00);
          return puVar19;
        }
                    /* WARNING: Could not recover jumptable at 0x0071bf4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar19 = (undefined8 *)
                  (*UNRECOVERED_JUMPTABLE_00)
                            (uVar25,uVar20,uVar21 - 0x40,__x86_data_cache_size_half,puVar19,
                             UNRECOVERED_JUMPTABLE_00);
        return puVar19;
      }
      uVar29 = uVar21 - 0x10;
      uVar6 = *(undefined8 *)(uVar20 - 8);
      lVar30 = uVar20 - 0x10;
      *(undefined8 *)(uVar25 - 0x10) = *(undefined8 *)(uVar20 - 0x10);
      *(undefined8 *)(uVar25 - 8) = uVar6;
      lVar27 = uVar25 - 0x10;
      *puVar19 = uVar4;
      puVar19[1] = uVar5;
      if (0x80 < uVar29) {
        uVar20 = uVar21 - 0x90;
        uVar21 = uVar21 - 0x90;
        if (__x86_data_cache_size_half <= uVar29) {
          do {
            lVar28 = lVar27;
            lVar24 = lVar30;
            uVar29 = uVar20;
            uVar4 = *(undefined8 *)(lVar24 + -8);
            uVar5 = *(undefined8 *)(lVar24 + -0x20);
            uVar6 = *(undefined8 *)(lVar24 + -0x18);
            uVar7 = *(undefined8 *)(lVar24 + -0x30);
            uVar8 = *(undefined8 *)(lVar24 + -0x28);
            uVar9 = *(undefined8 *)(lVar24 + -0x40);
            uVar10 = *(undefined8 *)(lVar24 + -0x38);
            uVar11 = *(undefined8 *)(lVar24 + -0x50);
            uVar12 = *(undefined8 *)(lVar24 + -0x48);
            uVar13 = *(undefined8 *)(lVar24 + -0x60);
            uVar14 = *(undefined8 *)(lVar24 + -0x58);
            uVar15 = *(undefined8 *)(lVar24 + -0x70);
            uVar16 = *(undefined8 *)(lVar24 + -0x68);
            uVar17 = *(undefined8 *)(lVar24 + -0x80);
            uVar18 = *(undefined8 *)(lVar24 + -0x78);
            lVar30 = lVar24 + -0x80;
            *(undefined8 *)(lVar28 + -0x10) = *(undefined8 *)(lVar24 + -0x10);
            *(undefined8 *)(lVar28 + -8) = uVar4;
            *(undefined8 *)(lVar28 + -0x20) = uVar5;
            *(undefined8 *)(lVar28 + -0x18) = uVar6;
            *(undefined8 *)(lVar28 + -0x30) = uVar7;
            *(undefined8 *)(lVar28 + -0x28) = uVar8;
            *(undefined8 *)(lVar28 + -0x40) = uVar9;
            *(undefined8 *)(lVar28 + -0x38) = uVar10;
            *(undefined8 *)(lVar28 + -0x50) = uVar11;
            *(undefined8 *)(lVar28 + -0x48) = uVar12;
            *(undefined8 *)(lVar28 + -0x60) = uVar13;
            *(undefined8 *)(lVar28 + -0x58) = uVar14;
            *(undefined8 *)(lVar28 + -0x70) = uVar15;
            *(undefined8 *)(lVar28 + -0x68) = uVar16;
            *(undefined8 *)(lVar28 + -0x80) = uVar17;
            *(undefined8 *)(lVar28 + -0x78) = uVar18;
            lVar27 = lVar28 + -0x80;
            uVar20 = uVar29 - 0x80;
          } while (0x7f < uVar29);
          if (-0x41 < (long)(uVar29 - 0x80)) {
            uVar4 = *(undefined8 *)(lVar24 + -0x88);
            uVar29 = uVar29 - 0x40;
            uVar5 = *(undefined8 *)(lVar24 + -0xa0);
            uVar6 = *(undefined8 *)(lVar24 + -0x98);
            *(undefined8 *)(lVar28 + -0x90) = *(undefined8 *)(lVar24 + -0x90);
            *(undefined8 *)(lVar28 + -0x88) = uVar4;
            *(undefined8 *)(lVar28 + -0xa0) = uVar5;
            *(undefined8 *)(lVar28 + -0x98) = uVar6;
            uVar4 = *(undefined8 *)(lVar24 + -0xa8);
            uVar5 = *(undefined8 *)(lVar24 + -0xc0);
            uVar6 = *(undefined8 *)(lVar24 + -0xb8);
            lVar30 = lVar24 + -0xc0;
            *(undefined8 *)(lVar28 + -0xb0) = *(undefined8 *)(lVar24 + -0xb0);
            *(undefined8 *)(lVar28 + -0xa8) = uVar4;
            *(undefined8 *)(lVar28 + -0xc0) = uVar5;
            *(undefined8 *)(lVar28 + -0xb8) = uVar6;
            lVar27 = lVar28 + -0xc0;
          }
          if (0x1f < uVar29) {
            puVar19 = (undefined8 *)(lVar30 + -0x10);
            uVar4 = *(undefined8 *)(lVar30 + -8);
            uVar29 = uVar29 - 0x20;
            uVar5 = *(undefined8 *)(lVar30 + -0x20);
            uVar6 = *(undefined8 *)(lVar30 + -0x18);
            lVar30 = lVar30 + -0x20;
            *(undefined8 *)(lVar27 + -0x10) = *puVar19;
            *(undefined8 *)(lVar27 + -8) = uVar4;
            *(undefined8 *)(lVar27 + -0x20) = uVar5;
            *(undefined8 *)(lVar27 + -0x18) = uVar6;
            lVar27 = lVar27 + -0x20;
          }
                    /* WARNING: Could not recover jumptable at 0x0071b7e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (undefined8 *)
                    (*(code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                              (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]))
                              (lVar27,lVar30,
                               (code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                                       (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29])
                              );
          return puVar19;
        }
        do {
          lVar28 = lVar27;
          lVar24 = lVar30;
          uVar29 = uVar21;
          uVar4 = *(undefined8 *)(lVar24 + -8);
          uVar5 = *(undefined8 *)(lVar24 + -0x20);
          uVar6 = *(undefined8 *)(lVar24 + -0x18);
          uVar7 = *(undefined8 *)(lVar24 + -0x30);
          uVar8 = *(undefined8 *)(lVar24 + -0x28);
          uVar9 = *(undefined8 *)(lVar24 + -0x40);
          uVar10 = *(undefined8 *)(lVar24 + -0x38);
          *(undefined8 *)(lVar28 + -0x10) = *(undefined8 *)(lVar24 + -0x10);
          *(undefined8 *)(lVar28 + -8) = uVar4;
          *(undefined8 *)(lVar28 + -0x20) = uVar5;
          *(undefined8 *)(lVar28 + -0x18) = uVar6;
          *(undefined8 *)(lVar28 + -0x30) = uVar7;
          *(undefined8 *)(lVar28 + -0x28) = uVar8;
          *(undefined8 *)(lVar28 + -0x40) = uVar9;
          *(undefined8 *)(lVar28 + -0x38) = uVar10;
          uVar4 = *(undefined8 *)(lVar24 + -0x48);
          uVar5 = *(undefined8 *)(lVar24 + -0x60);
          uVar6 = *(undefined8 *)(lVar24 + -0x58);
          uVar7 = *(undefined8 *)(lVar24 + -0x70);
          uVar8 = *(undefined8 *)(lVar24 + -0x68);
          uVar9 = *(undefined8 *)(lVar24 + -0x80);
          uVar10 = *(undefined8 *)(lVar24 + -0x78);
          lVar30 = lVar24 + -0x80;
          *(undefined8 *)(lVar28 + -0x50) = *(undefined8 *)(lVar24 + -0x50);
          *(undefined8 *)(lVar28 + -0x48) = uVar4;
          *(undefined8 *)(lVar28 + -0x60) = uVar5;
          *(undefined8 *)(lVar28 + -0x58) = uVar6;
          *(undefined8 *)(lVar28 + -0x70) = uVar7;
          *(undefined8 *)(lVar28 + -0x68) = uVar8;
          *(undefined8 *)(lVar28 + -0x80) = uVar9;
          *(undefined8 *)(lVar28 + -0x78) = uVar10;
          lVar27 = lVar28 + -0x80;
          uVar21 = uVar29 - 0x80;
        } while (0x7f < uVar29);
        if (-0x41 < (long)(uVar29 - 0x80)) {
          uVar4 = *(undefined8 *)(lVar24 + -0x88);
          uVar29 = uVar29 - 0x40;
          uVar5 = *(undefined8 *)(lVar24 + -0xa0);
          uVar6 = *(undefined8 *)(lVar24 + -0x98);
          *(undefined8 *)(lVar28 + -0x90) = *(undefined8 *)(lVar24 + -0x90);
          *(undefined8 *)(lVar28 + -0x88) = uVar4;
          *(undefined8 *)(lVar28 + -0xa0) = uVar5;
          *(undefined8 *)(lVar28 + -0x98) = uVar6;
          uVar4 = *(undefined8 *)(lVar24 + -0xa8);
          uVar5 = *(undefined8 *)(lVar24 + -0xc0);
          uVar6 = *(undefined8 *)(lVar24 + -0xb8);
          lVar30 = lVar24 + -0xc0;
          *(undefined8 *)(lVar28 + -0xb0) = *(undefined8 *)(lVar24 + -0xb0);
          *(undefined8 *)(lVar28 + -0xa8) = uVar4;
          *(undefined8 *)(lVar28 + -0xc0) = uVar5;
          *(undefined8 *)(lVar28 + -0xb8) = uVar6;
          lVar27 = lVar28 + -0xc0;
        }
                    /* WARNING: Could not recover jumptable at 0x0071b6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar19 = (undefined8 *)
                  (*(code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                            (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]))
                            (lVar27,lVar30,
                             (code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                                     (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]));
        return puVar19;
      }
      if (0x3f < uVar29) {
        uVar4 = *(undefined8 *)(uVar20 - 0x18);
        uVar5 = *(undefined8 *)(uVar20 - 0x30);
        uVar6 = *(undefined8 *)(uVar20 - 0x28);
        uVar7 = *(undefined8 *)(uVar20 - 0x40);
        uVar8 = *(undefined8 *)(uVar20 - 0x38);
        uVar9 = *(undefined8 *)(uVar20 - 0x50);
        uVar10 = *(undefined8 *)(uVar20 - 0x48);
        *(undefined8 *)(uVar25 - 0x20) = *(undefined8 *)(uVar20 - 0x20);
        *(undefined8 *)(uVar25 - 0x18) = uVar4;
        *(undefined8 *)(uVar25 - 0x30) = uVar5;
        *(undefined8 *)(uVar25 - 0x28) = uVar6;
        *(undefined8 *)(uVar25 - 0x40) = uVar7;
        *(undefined8 *)(uVar25 - 0x38) = uVar8;
        *(undefined8 *)(uVar25 - 0x50) = uVar9;
        *(undefined8 *)(uVar25 - 0x48) = uVar10;
        uVar29 = uVar21 - 0x50;
        lVar30 = uVar20 - 0x50;
        lVar27 = uVar25 - 0x50;
      }
                    /* WARNING: Could not recover jumptable at 0x0071b635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*(code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                          (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]))
                          (lVar27,lVar30,
                           (code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                                   (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]));
      return puVar19;
    }
  }
  switch(param_3) {
  case 0:
    return param_1;
  case 1:
    *(undefined1 *)((long)param_1 + (param_3 - 1)) = *(undefined1 *)((long)param_2 + (param_3 - 1));
    return param_1;
  case 2:
    *(undefined2 *)((long)param_1 + (param_3 - 2)) = *(undefined2 *)((long)param_2 + (param_3 - 2));
    return param_1;
  case 3:
    uVar2 = *(undefined2 *)((long)param_2 + (param_3 - 2));
    *(undefined2 *)((long)param_1 + (param_3 - 3)) = *(undefined2 *)((long)param_2 + (param_3 - 3));
    *(undefined2 *)((long)param_1 + (param_3 - 2)) = uVar2;
    return param_1;
  case 4:
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = *(undefined4 *)((long)param_2 + (param_3 - 4));
    return param_1;
  case 5:
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined4 *)((long)param_1 + (param_3 - 5)) = *(undefined4 *)((long)param_2 + (param_3 - 5));
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 6:
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined4 *)((long)param_1 + (param_3 - 6)) = *(undefined4 *)((long)param_2 + (param_3 - 6));
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 7:
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined4 *)((long)param_1 + (param_3 - 7)) = *(undefined4 *)((long)param_2 + (param_3 - 7));
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 8:
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = *(undefined8 *)((long)param_2 + (param_3 - 8));
    return param_1;
  case 9:
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 9)) = *(undefined8 *)((long)param_2 + (param_3 - 9));
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 10:
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 10)) =
         *(undefined8 *)((long)param_2 + (param_3 - 10));
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0xb:
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0xb)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0xb));
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0xc:
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0xc)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0xc));
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0xd:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0xd)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0xd));
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar4;
    return param_1;
  case 0xe:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0xe)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0xe));
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar4;
    return param_1;
  case 0xf:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0xf)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0xf));
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar4;
    return param_1;
  case 0x10:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x10)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x10));
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar4;
    return param_1;
  case 0x11:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 9));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x11)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x11));
    *(undefined8 *)((long)param_1 + (param_3 - 9)) = uVar4;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x12:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 10));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x12)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x12));
    *(undefined8 *)((long)param_1 + (param_3 - 10)) = uVar4;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x13:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0xb));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x13)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x13));
    *(undefined8 *)((long)param_1 + (param_3 - 0xb)) = uVar4;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x14:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0xc));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x14)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x14));
    *(undefined8 *)((long)param_1 + (param_3 - 0xc)) = uVar4;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x15:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0xd));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x15)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x15));
    *(undefined8 *)((long)param_1 + (param_3 - 0xd)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar5;
    return param_1;
  case 0x16:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0xe));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x16)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x16));
    *(undefined8 *)((long)param_1 + (param_3 - 0xe)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar5;
    return param_1;
  case 0x17:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0xf));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x17)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x17));
    *(undefined8 *)((long)param_1 + (param_3 - 0xf)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar5;
    return param_1;
  case 0x18:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x10));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x18)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x18));
    *(undefined8 *)((long)param_1 + (param_3 - 0x10)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar5;
    return param_1;
  case 0x19:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x11));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 9));
    uVar1 = *(undefined1 *)((long)param_2 + (param_3 - 1));
    *(undefined8 *)((long)param_1 + (param_3 - 0x19)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x19));
    *(undefined8 *)((long)param_1 + (param_3 - 0x11)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 9)) = uVar5;
    *(undefined1 *)((long)param_1 + (param_3 - 1)) = uVar1;
    return param_1;
  case 0x1a:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x12));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 10));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x1a)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x1a));
    *(undefined8 *)((long)param_1 + (param_3 - 0x12)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 10)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x1b:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x13));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0xb));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x1b)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x1b));
    *(undefined8 *)((long)param_1 + (param_3 - 0x13)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0xb)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x1c:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x14));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0xc));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x1c)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x1c));
    *(undefined8 *)((long)param_1 + (param_3 - 0x14)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0xc)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x1d:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x15));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0xd));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x1d)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x1d));
    *(undefined8 *)((long)param_1 + (param_3 - 0x15)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0xd)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar6;
    return param_1;
  case 0x1e:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x16));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0xe));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x1e)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x1e));
    *(undefined8 *)((long)param_1 + (param_3 - 0x16)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0xe)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar6;
    return param_1;
  case 0x1f:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x17));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0xf));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x1f)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x1f));
    *(undefined8 *)((long)param_1 + (param_3 - 0x17)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0xf)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar6;
    return param_1;
  case 0x20:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x18));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x10));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x20)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x20));
    *(undefined8 *)((long)param_1 + (param_3 - 0x18)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x10)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar6;
    return param_1;
  case 0x21:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x19));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x11));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 9));
    uVar1 = *(undefined1 *)((long)param_2 + (param_3 - 1));
    *(undefined8 *)((long)param_1 + (param_3 - 0x21)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x21));
    *(undefined8 *)((long)param_1 + (param_3 - 0x19)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x11)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 9)) = uVar6;
    *(undefined1 *)((long)param_1 + (param_3 - 1)) = uVar1;
    return param_1;
  case 0x22:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x1a));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x12));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 10));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x22)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x22));
    *(undefined8 *)((long)param_1 + (param_3 - 0x1a)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x12)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 10)) = uVar6;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x23:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x1b));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x13));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0xb));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x23)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x23));
    *(undefined8 *)((long)param_1 + (param_3 - 0x1b)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x13)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0xb)) = uVar6;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x24:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x1c));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x14));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0xc));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x24)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x24));
    *(undefined8 *)((long)param_1 + (param_3 - 0x1c)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x14)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0xc)) = uVar6;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x25:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x1d));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x15));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0xd));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x25)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x25));
    *(undefined8 *)((long)param_1 + (param_3 - 0x1d)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x15)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0xd)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar7;
    return param_1;
  case 0x26:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x1e));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x16));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0xe));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x26)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x26));
    *(undefined8 *)((long)param_1 + (param_3 - 0x1e)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x16)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0xe)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar7;
    return param_1;
  case 0x27:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x1f));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x17));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0xf));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x27)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x27));
    *(undefined8 *)((long)param_1 + (param_3 - 0x1f)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x17)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0xf)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar7;
    return param_1;
  case 0x28:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x20));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x18));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x10));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x28)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x28));
    *(undefined8 *)((long)param_1 + (param_3 - 0x20)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x18)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x10)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar7;
    return param_1;
  case 0x29:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x21));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x19));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x11));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 9));
    uVar1 = *(undefined1 *)((long)param_2 + (param_3 - 1));
    *(undefined8 *)((long)param_1 + (param_3 - 0x29)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x29));
    *(undefined8 *)((long)param_1 + (param_3 - 0x21)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x19)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x11)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 9)) = uVar7;
    *(undefined1 *)((long)param_1 + (param_3 - 1)) = uVar1;
    return param_1;
  case 0x2a:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x22));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1a));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x12));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 10));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x2a)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x2a));
    *(undefined8 *)((long)param_1 + (param_3 - 0x22)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1a)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x12)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 10)) = uVar7;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x2b:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x23));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1b));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x13));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0xb));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x2b)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x2b));
    *(undefined8 *)((long)param_1 + (param_3 - 0x23)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1b)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x13)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0xb)) = uVar7;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x2c:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x24));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1c));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x14));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0xc));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x2c)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x2c));
    *(undefined8 *)((long)param_1 + (param_3 - 0x24)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1c)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x14)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0xc)) = uVar7;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x2d:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x25));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1d));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x15));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0xd));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x2d)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x2d));
    *(undefined8 *)((long)param_1 + (param_3 - 0x25)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1d)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x15)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0xd)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar8;
    return param_1;
  case 0x2e:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x26));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1e));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x16));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0xe));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x2e)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x2e));
    *(undefined8 *)((long)param_1 + (param_3 - 0x26)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1e)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x16)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0xe)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar8;
    return param_1;
  case 0x2f:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x27));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1f));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x17));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0xf));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x2f)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x2f));
    *(undefined8 *)((long)param_1 + (param_3 - 0x27)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1f)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x17)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0xf)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar8;
    return param_1;
  case 0x30:
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x28));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x20));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x18));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x10));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x30)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x30));
    *(undefined8 *)((long)param_1 + (param_3 - 0x28)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x20)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x18)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x10)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar8;
    return param_1;
  case 0x31:
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0x29));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x21));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x19));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x11));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 9));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x31)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x31));
    *(undefined8 *)((long)param_1 + (param_3 - 0x29)) = uVar8;
    *(undefined8 *)((long)param_1 + (param_3 - 0x21)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x19)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x11)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 9)) = uVar7;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x32:
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0x2a));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x22));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1a));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x12));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 10));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x32)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x32));
    *(undefined8 *)((long)param_1 + (param_3 - 0x2a)) = uVar8;
    *(undefined8 *)((long)param_1 + (param_3 - 0x22)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1a)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x12)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 10)) = uVar7;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x33:
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0x2b));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x23));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1b));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x13));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0xb));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x33)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x33));
    *(undefined8 *)((long)param_1 + (param_3 - 0x2b)) = uVar8;
    *(undefined8 *)((long)param_1 + (param_3 - 0x23)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1b)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x13)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0xb)) = uVar7;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x34:
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0x2c));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x24));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1c));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x14));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0xc));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x34)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x34));
    *(undefined8 *)((long)param_1 + (param_3 - 0x2c)) = uVar8;
    *(undefined8 *)((long)param_1 + (param_3 - 0x24)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1c)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x14)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0xc)) = uVar7;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x35:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x2d));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x25));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1d));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x15));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0xd));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x35)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x35));
    *(undefined8 *)((long)param_1 + (param_3 - 0x2d)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x25)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1d)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x15)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0xd)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar8;
    return param_1;
  case 0x36:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x2e));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x26));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1e));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x16));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0xe));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x36)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x36));
    *(undefined8 *)((long)param_1 + (param_3 - 0x2e)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x26)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1e)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x16)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0xe)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar8;
    return param_1;
  case 0x37:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x2f));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x27));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1f));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x17));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0xf));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x37)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x37));
    *(undefined8 *)((long)param_1 + (param_3 - 0x2f)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x27)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1f)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x17)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0xf)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar8;
    return param_1;
  case 0x38:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x30));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x28));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x20));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x18));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x10));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x38)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x38));
    *(undefined8 *)((long)param_1 + (param_3 - 0x30)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x28)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x20)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x18)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x10)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar8;
    return param_1;
  case 0x39:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x31));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x29));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x21));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x19));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x11));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 9));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x39)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x39));
    *(undefined8 *)((long)param_1 + (param_3 - 0x31)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x29)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x21)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x19)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x11)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 9)) = uVar8;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x3a:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x32));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x2a));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x22));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x1a));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x12));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 10));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x3a)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x3a));
    *(undefined8 *)((long)param_1 + (param_3 - 0x32)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2a)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x22)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1a)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x12)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 10)) = uVar8;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x3b:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x33));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x2b));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x23));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x1b));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x13));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0xb));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x3b)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x3b));
    *(undefined8 *)((long)param_1 + (param_3 - 0x33)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2b)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x23)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1b)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x13)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 0xb)) = uVar8;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x3c:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x34));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x2c));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x24));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x1c));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x14));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0xc));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x3c)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x3c));
    *(undefined8 *)((long)param_1 + (param_3 - 0x34)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2c)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x24)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1c)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x14)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 0xc)) = uVar8;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x3d:
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x35));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x2d));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x25));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x1d));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x15));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0xd));
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x3d)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x3d));
    *(undefined8 *)((long)param_1 + (param_3 - 0x35)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2d)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x25)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1d)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x15)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 0xd)) = uVar8;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar9;
    return param_1;
  case 0x3e:
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x36));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x2e));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x26));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x1e));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x16));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0xe));
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x3e)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x3e));
    *(undefined8 *)((long)param_1 + (param_3 - 0x36)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2e)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x26)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1e)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x16)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 0xe)) = uVar8;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar9;
    return param_1;
  case 0x3f:
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x37));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x2f));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x27));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x1f));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x17));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0xf));
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x3f)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x3f));
    *(undefined8 *)((long)param_1 + (param_3 - 0x37)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2f)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x27)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1f)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x17)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 0xf)) = uVar8;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar9;
    return param_1;
  case 0x40:
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x38));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x30));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x28));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x20));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x18));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0x10));
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x40)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x40));
    *(undefined8 *)((long)param_1 + (param_3 - 0x38)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x30)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x28)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x20)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x18)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 0x10)) = uVar8;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar9;
    return param_1;
  case 0x41:
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0x39));
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x31));
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x29));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x21));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x19));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x11));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 9));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x41)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x41));
    *(undefined8 *)((long)param_1 + (param_3 - 0x39)) = uVar8;
    *(undefined8 *)((long)param_1 + (param_3 - 0x31)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x29)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x21)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x19)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x11)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 9)) = uVar7;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x42:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x3a));
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x32));
    uVar11 = *(undefined8 *)((long)param_2 + (param_3 - 0x2a));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x2a));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x22));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x1a));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x12));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 10));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x42)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x42));
    *(undefined8 *)((long)param_1 + (param_3 - 0x3a)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x32)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2a)) = uVar11;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2a)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x22)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1a)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x12)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 10)) = uVar8;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x43:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x3b));
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x3b));
    uVar11 = *(undefined8 *)((long)param_2 + (param_3 - 0x33));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x2b));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x23));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x1b));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x13));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0xb));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x43)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x43));
    *(undefined8 *)((long)param_1 + (param_3 - 0x3b)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x3b)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x33)) = uVar11;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2b)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x23)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1b)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x13)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 0xb)) = uVar8;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x44:
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0x3c));
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x34));
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x2c));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x24));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1c));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x14));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0xc));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x44)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x44));
    *(undefined8 *)((long)param_1 + (param_3 - 0x3c)) = uVar8;
    *(undefined8 *)((long)param_1 + (param_3 - 0x34)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2c)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x24)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1c)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x14)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0xc)) = uVar7;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x45:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x3d));
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x35));
    uVar11 = *(undefined8 *)((long)param_2 + (param_3 - 0x2d));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x25));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1d));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x15));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0xd));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x45)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x45));
    *(undefined8 *)((long)param_1 + (param_3 - 0x3d)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x35)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2d)) = uVar11;
    *(undefined8 *)((long)param_1 + (param_3 - 0x25)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1d)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x15)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0xd)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar8;
    return param_1;
  case 0x46:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x3e));
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x36));
    uVar11 = *(undefined8 *)((long)param_2 + (param_3 - 0x2e));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x26));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1e));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x16));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0xe));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x46)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x46));
    *(undefined8 *)((long)param_1 + (param_3 - 0x3e)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x36)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2e)) = uVar11;
    *(undefined8 *)((long)param_1 + (param_3 - 0x26)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1e)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x16)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0xe)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar8;
    return param_1;
  case 0x47:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x3f));
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x37));
    uVar11 = *(undefined8 *)((long)param_2 + (param_3 - 0x2f));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x27));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x1f));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x17));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0xf));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x47)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x47));
    *(undefined8 *)((long)param_1 + (param_3 - 0x3f)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x37)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2f)) = uVar11;
    *(undefined8 *)((long)param_1 + (param_3 - 0x27)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1f)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x17)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0xf)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar8;
    return param_1;
  case 0x48:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x40));
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x38));
    uVar11 = *(undefined8 *)((long)param_2 + (param_3 - 0x30));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x28));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x20));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x18));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x10));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x48)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x48));
    *(undefined8 *)((long)param_1 + (param_3 - 0x40)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x38)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x30)) = uVar11;
    *(undefined8 *)((long)param_1 + (param_3 - 0x28)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x20)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x18)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x10)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar8;
    return param_1;
  case 0x49:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x41));
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x39));
    uVar11 = *(undefined8 *)((long)param_2 + (param_3 - 0x31));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x29));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x21));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x19));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x11));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 9));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x49)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x49));
    *(undefined8 *)((long)param_1 + (param_3 - 0x41)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x39)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x31)) = uVar11;
    *(undefined8 *)((long)param_1 + (param_3 - 0x29)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x21)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x19)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x11)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 9)) = uVar8;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x4a:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x42));
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x3a));
    uVar11 = *(undefined8 *)((long)param_2 + (param_3 - 0x32));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x2a));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x22));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x1a));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x12));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 10));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x4a)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x4a));
    *(undefined8 *)((long)param_1 + (param_3 - 0x42)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x3a)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x32)) = uVar11;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2a)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x22)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1a)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x12)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 10)) = uVar8;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x4b:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x43));
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x3b));
    uVar11 = *(undefined8 *)((long)param_2 + (param_3 - 0x33));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x2b));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x23));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x1b));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x13));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0xb));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x4b)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x4b));
    *(undefined8 *)((long)param_1 + (param_3 - 0x43)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x3b)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x33)) = uVar11;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2b)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x23)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1b)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x13)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 0xb)) = uVar8;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x4c:
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 0x44));
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x3c));
    uVar11 = *(undefined8 *)((long)param_2 + (param_3 - 0x34));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x2c));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x24));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x1c));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x14));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0xc));
    uVar3 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined8 *)((long)param_1 + (param_3 - 0x4c)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x4c));
    *(undefined8 *)((long)param_1 + (param_3 - 0x44)) = uVar9;
    *(undefined8 *)((long)param_1 + (param_3 - 0x3c)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x34)) = uVar11;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2c)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x24)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1c)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x14)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 0xc)) = uVar8;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar3;
    return param_1;
  case 0x4d:
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x45));
    uVar11 = *(undefined8 *)((long)param_2 + (param_3 - 0x3d));
    uVar12 = *(undefined8 *)((long)param_2 + (param_3 - 0x35));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x2d));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x25));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x1d));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x15));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0xd));
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x4d)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x4d));
    *(undefined8 *)((long)param_1 + (param_3 - 0x45)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x3d)) = uVar11;
    *(undefined8 *)((long)param_1 + (param_3 - 0x35)) = uVar12;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2d)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x25)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1d)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x15)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 0xd)) = uVar8;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar9;
    return param_1;
  case 0x4e:
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x46));
    uVar11 = *(undefined8 *)((long)param_2 + (param_3 - 0x3e));
    uVar12 = *(undefined8 *)((long)param_2 + (param_3 - 0x36));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x2e));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x26));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x1e));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x16));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0xe));
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x4e)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x4e));
    *(undefined8 *)((long)param_1 + (param_3 - 0x46)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x3e)) = uVar11;
    *(undefined8 *)((long)param_1 + (param_3 - 0x36)) = uVar12;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2e)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x26)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1e)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x16)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 0xe)) = uVar8;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar9;
    return param_1;
  case 0x4f:
    uVar10 = *(undefined8 *)((long)param_2 + (param_3 - 0x47));
    uVar11 = *(undefined8 *)((long)param_2 + (param_3 - 0x3f));
    uVar12 = *(undefined8 *)((long)param_2 + (param_3 - 0x37));
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 0x2f));
    uVar5 = *(undefined8 *)((long)param_2 + (param_3 - 0x27));
    uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x1f));
    uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x17));
    uVar8 = *(undefined8 *)((long)param_2 + (param_3 - 0xf));
    uVar9 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)((long)param_1 + (param_3 - 0x4f)) =
         *(undefined8 *)((long)param_2 + (param_3 - 0x4f));
    *(undefined8 *)((long)param_1 + (param_3 - 0x47)) = uVar10;
    *(undefined8 *)((long)param_1 + (param_3 - 0x3f)) = uVar11;
    *(undefined8 *)((long)param_1 + (param_3 - 0x37)) = uVar12;
    *(undefined8 *)((long)param_1 + (param_3 - 0x2f)) = uVar4;
    *(undefined8 *)((long)param_1 + (param_3 - 0x27)) = uVar5;
    *(undefined8 *)((long)param_1 + (param_3 - 0x1f)) = uVar6;
    *(undefined8 *)((long)param_1 + (param_3 - 0x17)) = uVar7;
    *(undefined8 *)((long)param_1 + (param_3 - 0xf)) = uVar8;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar9;
    return param_1;
  }
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar21 = (ulong)param_1 & 0xfffffffffffffff0;
  puVar19 = (undefined8 *)(uVar21 + 0x10);
  param_3 = param_3 + ((long)param_1 - (long)puVar19);
  param_2 = (undefined8 *)((long)param_2 - ((long)param_1 - (long)puVar19));
  if (__x86_shared_cache_size_half < param_3) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    param_2 = param_2 + 2;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    *puVar19 = uVar6;
    *(undefined8 *)(uVar21 + 0x18) = uVar7;
    puVar19 = (undefined8 *)(uVar21 + 0x20);
    param_3 = param_3 - 0x90;
    if (((ulong)((long)param_2 - (long)puVar19) < param_3) && (param_3 < uVar29 << 2)) {
      do {
        puVar22 = puVar19;
        puVar23 = param_2;
        uVar29 = param_3;
        uVar4 = puVar23[1];
        uVar5 = puVar23[2];
        uVar6 = puVar23[3];
        uVar7 = puVar23[4];
        uVar8 = puVar23[5];
        uVar9 = puVar23[6];
        uVar10 = puVar23[7];
        uVar11 = puVar23[8];
        uVar12 = puVar23[9];
        uVar13 = puVar23[10];
        uVar14 = puVar23[0xb];
        uVar15 = puVar23[0xc];
        uVar16 = puVar23[0xd];
        uVar17 = puVar23[0xe];
        uVar18 = puVar23[0xf];
        param_2 = puVar23 + 0x10;
        *puVar22 = *puVar23;
        puVar22[1] = uVar4;
        puVar22[2] = uVar5;
        puVar22[3] = uVar6;
        puVar22[4] = uVar7;
        puVar22[5] = uVar8;
        puVar22[6] = uVar9;
        puVar22[7] = uVar10;
        puVar22[8] = uVar11;
        puVar22[9] = uVar12;
        puVar22[10] = uVar13;
        puVar22[0xb] = uVar14;
        puVar22[0xc] = uVar15;
        puVar22[0xd] = uVar16;
        puVar22[0xe] = uVar17;
        puVar22[0xf] = uVar18;
        puVar19 = puVar22 + 0x10;
        param_3 = uVar29 - 0x80;
      } while (0x7f < uVar29);
      if (-0x41 < (long)(uVar29 - 0x80)) {
        uVar4 = *param_2;
        uVar5 = puVar23[0x11];
        uVar6 = puVar23[0x12];
        uVar7 = puVar23[0x13];
        uVar8 = puVar23[0x14];
        uVar9 = puVar23[0x15];
        uVar10 = puVar23[0x16];
        uVar11 = puVar23[0x17];
        param_2 = puVar23 + 0x18;
        *puVar19 = uVar4;
        puVar22[0x11] = uVar5;
        puVar22[0x12] = uVar6;
        puVar22[0x13] = uVar7;
        puVar22[0x14] = uVar8;
        puVar22[0x15] = uVar9;
        puVar22[0x16] = uVar10;
        puVar22[0x17] = uVar11;
        puVar19 = puVar22 + 0x18;
        uVar29 = uVar29 - 0x40;
      }
                    /* WARNING: Could not recover jumptable at 0x0071dc7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*(code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                          (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]))
                          ((long)puVar19 + uVar29,(long)param_2 + uVar29,
                           (code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                                   (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]));
      return puVar19;
    }
    do {
      puVar22 = puVar19;
      puVar23 = param_2;
      uVar29 = param_3;
      uVar4 = puVar23[1];
      uVar5 = puVar23[2];
      uVar6 = puVar23[3];
      uVar7 = puVar23[4];
      uVar8 = puVar23[5];
      uVar9 = puVar23[6];
      uVar10 = puVar23[7];
      uVar11 = puVar23[8];
      uVar12 = puVar23[9];
      uVar13 = puVar23[10];
      uVar14 = puVar23[0xb];
      uVar15 = puVar23[0xc];
      uVar16 = puVar23[0xd];
      uVar17 = puVar23[0xe];
      uVar18 = puVar23[0xf];
      param_2 = puVar23 + 0x10;
      *puVar22 = *puVar23;
      puVar22[1] = uVar4;
      puVar22[2] = uVar5;
      puVar22[3] = uVar6;
      puVar22[4] = uVar7;
      puVar22[5] = uVar8;
      puVar22[6] = uVar9;
      puVar22[7] = uVar10;
      puVar22[8] = uVar11;
      puVar22[9] = uVar12;
      puVar22[10] = uVar13;
      puVar22[0xb] = uVar14;
      puVar22[0xc] = uVar15;
      puVar22[0xd] = uVar16;
      puVar22[0xe] = uVar17;
      puVar22[0xf] = uVar18;
      puVar19 = puVar22 + 0x10;
      param_3 = uVar29 - 0x80;
    } while (0x7f < uVar29);
    if (-0x41 < (long)(uVar29 - 0x80)) {
      uVar4 = *param_2;
      uVar5 = puVar23[0x11];
      uVar6 = puVar23[0x12];
      uVar7 = puVar23[0x13];
      uVar8 = puVar23[0x14];
      uVar9 = puVar23[0x15];
      uVar10 = puVar23[0x16];
      uVar11 = puVar23[0x17];
      param_2 = puVar23 + 0x18;
      *puVar19 = uVar4;
      puVar22[0x11] = uVar5;
      puVar22[0x12] = uVar6;
      puVar22[0x13] = uVar7;
      puVar22[0x14] = uVar8;
      puVar22[0x15] = uVar9;
      puVar22[0x16] = uVar10;
      puVar22[0x17] = uVar11;
      puVar19 = puVar22 + 0x18;
      uVar29 = uVar29 - 0x40;
    }
                    /* WARNING: Could not recover jumptable at 0x0071dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar19 = (undefined8 *)
              (*(code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                        (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]))
                        ((long)puVar19 + uVar29,(long)param_2 + uVar29,
                         (code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                                 (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]));
    return puVar19;
  }
  uVar29 = (ulong)param_2 & 0xf;
  if (uVar29 != 0) {
    lVar30 = (long)*(int *)(&DAT_00820f50 + uVar29 * 4);
    switch(uVar29) {
    case 1:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f78 + lVar30);
      if (__x86_data_cache_size_half <= param_3) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f70 + lVar30 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071b80b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (puVar19,param_2,param_3 - 0x40,__x86_data_cache_size_half,param_1,
                           UNRECOVERED_JUMPTABLE_00);
      return puVar19;
    case 2:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f78 + lVar30);
      if (__x86_data_cache_size_half <= param_3) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f70 + lVar30 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071b95b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (puVar19,param_2,param_3 - 0x40,__x86_data_cache_size_half,param_1,
                           UNRECOVERED_JUMPTABLE_00);
      return puVar19;
    case 3:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f78 + lVar30);
      if (__x86_data_cache_size_half <= param_3) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f70 + lVar30 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071baab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (puVar19,param_2,param_3 - 0x40,__x86_data_cache_size_half,param_1,
                           UNRECOVERED_JUMPTABLE_00);
      return puVar19;
    case 4:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f78 + lVar30);
      if (__x86_data_cache_size_half <= param_3) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f70 + lVar30 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071bbfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (puVar19,param_2,param_3 - 0x40,__x86_data_cache_size_half,param_1,
                           UNRECOVERED_JUMPTABLE_00);
      return puVar19;
    case 5:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f78 + lVar30);
      if (__x86_data_cache_size_half <= param_3) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f70 + lVar30 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071bd4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (puVar19,param_2,param_3 - 0x40,__x86_data_cache_size_half,param_1,
                           UNRECOVERED_JUMPTABLE_00);
      return puVar19;
    case 6:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f78 + lVar30);
      if (__x86_data_cache_size_half <= param_3) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f70 + lVar30 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071be9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (puVar19,param_2,param_3 - 0x40,__x86_data_cache_size_half,param_1,
                           UNRECOVERED_JUMPTABLE_00);
      return puVar19;
    case 7:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f78 + lVar30);
      if (__x86_data_cache_size_half <= param_3) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f70 + lVar30 + 1);
      }
      break;
    case 8:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f74 + lVar30 + 2);
      if (__x86_data_cache_size_half <= param_3) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f6c + lVar30 + 3);
      }
                    /* WARNING: Could not recover jumptable at 0x0071c13b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (puVar19,param_2,param_3 - 0x40,__x86_data_cache_size_half,param_1,
                           UNRECOVERED_JUMPTABLE_00);
      return puVar19;
    case 9:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f78 + lVar30);
      if (__x86_data_cache_size_half <= param_3) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f70 + lVar30 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071c28b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (puVar19,param_2,param_3 - 0x40,__x86_data_cache_size_half,param_1,
                           UNRECOVERED_JUMPTABLE_00);
      return puVar19;
    case 10:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f78 + lVar30);
      if (__x86_data_cache_size_half <= param_3) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f70 + lVar30 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071c3db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (puVar19,param_2,param_3 - 0x40,__x86_data_cache_size_half,param_1,
                           UNRECOVERED_JUMPTABLE_00);
      return puVar19;
    case 0xb:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f78 + lVar30);
      if (__x86_data_cache_size_half <= param_3) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f70 + lVar30 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071c52b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (puVar19,param_2,param_3 - 0x40,__x86_data_cache_size_half,param_1,
                           UNRECOVERED_JUMPTABLE_00);
      return puVar19;
    case 0xc:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f78 + lVar30);
      if (__x86_data_cache_size_half <= param_3) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f70 + lVar30 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071c67b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (puVar19,param_2,param_3 - 0x40,__x86_data_cache_size_half,param_1,
                           UNRECOVERED_JUMPTABLE_00);
      return puVar19;
    case 0xd:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f78 + lVar30);
      if (__x86_data_cache_size_half <= param_3) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f70 + lVar30 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071c7cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (puVar19,param_2,param_3 - 0x40,__x86_data_cache_size_half,param_1,
                           UNRECOVERED_JUMPTABLE_00);
      return puVar19;
    case 0xe:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f78 + lVar30);
      if (__x86_data_cache_size_half <= param_3) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f70 + lVar30 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071c91b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (puVar19,param_2,param_3 - 0x40,__x86_data_cache_size_half,param_1,
                           UNRECOVERED_JUMPTABLE_00);
      return puVar19;
    case 0xf:
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f78 + lVar30);
      if (__x86_data_cache_size_half <= param_3) {
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)&UINT_00820f70 + lVar30 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0071ca6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (puVar19,param_2,param_3 - 0x40,__x86_data_cache_size_half,param_1,
                           UNRECOVERED_JUMPTABLE_00);
      return puVar19;
    }
                    /* WARNING: Could not recover jumptable at 0x0071bfeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar19 = (undefined8 *)
              (*UNRECOVERED_JUMPTABLE_00)
                        (puVar19,param_2,param_3 - 0x40,__x86_data_cache_size_half,param_1,
                         UNRECOVERED_JUMPTABLE_00);
    return puVar19;
  }
  uVar29 = param_3 - 0x10;
  uVar6 = param_2[1];
  puVar23 = param_2 + 2;
  *puVar19 = *param_2;
  *(undefined8 *)(uVar21 + 0x18) = uVar6;
  puVar19 = (undefined8 *)(uVar21 + 0x20);
  *param_1 = uVar4;
  param_1[1] = uVar5;
  if (0x80 < uVar29) {
    uVar21 = param_3 - 0x90;
    if (__x86_data_cache_size_half <= uVar29) {
      do {
        puVar26 = puVar19;
        puVar22 = puVar23;
        uVar29 = uVar21;
        uVar4 = puVar22[1];
        uVar5 = puVar22[2];
        uVar6 = puVar22[3];
        uVar7 = puVar22[4];
        uVar8 = puVar22[5];
        uVar9 = puVar22[6];
        uVar10 = puVar22[7];
        uVar11 = puVar22[8];
        uVar12 = puVar22[9];
        uVar13 = puVar22[10];
        uVar14 = puVar22[0xb];
        uVar15 = puVar22[0xc];
        uVar16 = puVar22[0xd];
        uVar17 = puVar22[0xe];
        uVar18 = puVar22[0xf];
        puVar23 = puVar22 + 0x10;
        *puVar26 = *puVar22;
        puVar26[1] = uVar4;
        puVar26[2] = uVar5;
        puVar26[3] = uVar6;
        puVar26[4] = uVar7;
        puVar26[5] = uVar8;
        puVar26[6] = uVar9;
        puVar26[7] = uVar10;
        puVar26[8] = uVar11;
        puVar26[9] = uVar12;
        puVar26[10] = uVar13;
        puVar26[0xb] = uVar14;
        puVar26[0xc] = uVar15;
        puVar26[0xd] = uVar16;
        puVar26[0xe] = uVar17;
        puVar26[0xf] = uVar18;
        puVar19 = puVar26 + 0x10;
        uVar21 = uVar29 - 0x80;
      } while (0x7f < uVar29);
      if (-0x41 < (long)(uVar29 - 0x80)) {
        uVar4 = puVar22[0x11];
        uVar29 = uVar29 - 0x40;
        uVar5 = puVar22[0x12];
        uVar6 = puVar22[0x13];
        *puVar19 = *puVar23;
        puVar26[0x11] = uVar4;
        puVar26[0x12] = uVar5;
        puVar26[0x13] = uVar6;
        uVar4 = puVar22[0x15];
        uVar5 = puVar22[0x16];
        uVar6 = puVar22[0x17];
        puVar23 = puVar22 + 0x18;
        puVar26[0x14] = puVar22[0x14];
        puVar26[0x15] = uVar4;
        puVar26[0x16] = uVar5;
        puVar26[0x17] = uVar6;
        puVar19 = puVar26 + 0x18;
      }
      if (0x1f < uVar29) {
        uVar4 = *puVar23;
        uVar5 = puVar23[1];
        uVar29 = uVar29 - 0x20;
        uVar6 = puVar23[2];
        uVar7 = puVar23[3];
        puVar23 = puVar23 + 4;
        *puVar19 = uVar4;
        puVar19[1] = uVar5;
        puVar19[2] = uVar6;
        puVar19[3] = uVar7;
        puVar19 = puVar19 + 4;
      }
                    /* WARNING: Could not recover jumptable at 0x0071b5cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)
                (*(code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                          (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]))
                          ((long)puVar19 + uVar29,(long)puVar23 + uVar29,
                           (code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                                   (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]));
      return puVar19;
    }
    do {
      puVar26 = puVar19;
      puVar22 = puVar23;
      uVar29 = uVar21;
      uVar4 = puVar22[1];
      uVar5 = puVar22[2];
      uVar6 = puVar22[3];
      uVar7 = puVar22[4];
      uVar8 = puVar22[5];
      uVar9 = puVar22[6];
      uVar10 = puVar22[7];
      *puVar26 = *puVar22;
      puVar26[1] = uVar4;
      puVar26[2] = uVar5;
      puVar26[3] = uVar6;
      puVar26[4] = uVar7;
      puVar26[5] = uVar8;
      puVar26[6] = uVar9;
      puVar26[7] = uVar10;
      uVar4 = puVar22[9];
      uVar5 = puVar22[10];
      uVar6 = puVar22[0xb];
      uVar7 = puVar22[0xc];
      uVar8 = puVar22[0xd];
      uVar9 = puVar22[0xe];
      uVar10 = puVar22[0xf];
      puVar23 = puVar22 + 0x10;
      puVar26[8] = puVar22[8];
      puVar26[9] = uVar4;
      puVar26[10] = uVar5;
      puVar26[0xb] = uVar6;
      puVar26[0xc] = uVar7;
      puVar26[0xd] = uVar8;
      puVar26[0xe] = uVar9;
      puVar26[0xf] = uVar10;
      puVar19 = puVar26 + 0x10;
      uVar21 = uVar29 - 0x80;
    } while (0x7f < uVar29);
    if (-0x41 < (long)(uVar29 - 0x80)) {
      uVar4 = puVar22[0x11];
      uVar29 = uVar29 - 0x40;
      uVar5 = puVar22[0x12];
      uVar6 = puVar22[0x13];
      *puVar19 = *puVar23;
      puVar26[0x11] = uVar4;
      puVar26[0x12] = uVar5;
      puVar26[0x13] = uVar6;
      uVar4 = puVar22[0x15];
      uVar5 = puVar22[0x16];
      uVar6 = puVar22[0x17];
      puVar23 = puVar22 + 0x18;
      puVar26[0x14] = puVar22[0x14];
      puVar26[0x15] = uVar4;
      puVar26[0x16] = uVar5;
      puVar26[0x17] = uVar6;
      puVar19 = puVar26 + 0x18;
    }
                    /* WARNING: Could not recover jumptable at 0x0071b4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar19 = (undefined8 *)
              (*(code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                        (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]))
                        ((long)puVar19 + uVar29,(long)puVar23 + uVar29,
                         (code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                                 (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]));
    return puVar19;
  }
  if (0x3f < uVar29) {
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    uVar6 = param_2[5];
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    uVar9 = param_2[8];
    uVar10 = param_2[9];
    *puVar19 = *puVar23;
    *(undefined8 *)(uVar21 + 0x28) = uVar4;
    *(undefined8 *)(uVar21 + 0x30) = uVar5;
    *(undefined8 *)(uVar21 + 0x38) = uVar6;
    *(undefined8 *)(uVar21 + 0x40) = uVar7;
    *(undefined8 *)(uVar21 + 0x48) = uVar8;
    *(undefined8 *)(uVar21 + 0x50) = uVar9;
    *(undefined8 *)(uVar21 + 0x58) = uVar10;
    uVar29 = param_3 - 0x50;
    puVar23 = param_2 + 10;
    puVar19 = (undefined8 *)(uVar21 + 0x60);
  }
                    /* WARNING: Could not recover jumptable at 0x0071b407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar19 = (undefined8 *)
            (*(code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                      (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]))
                      ((long)puVar19 + uVar29,(long)puVar23 + uVar29,
                       (code *)((long)&switchD_0071b2e4::switchdataD_00820e10 +
                               (long)(int)(&switchD_0071b2e4::switchdataD_00820e10)[uVar29]));
  return puVar19;
}

