
undefined8 FUN_004b2ff0(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong *puVar31;
  long *local_90;
  long local_48;
  
  FUN_004b2c00(param_5);
  if (param_1 == (long *)0x0) {
    param_1 = (long *)FUN_004b2df0(param_5);
  }
  plVar12 = (long *)FUN_004b2df0(param_5);
  plVar13 = (long *)FUN_004b2df0(param_5);
  plVar14 = (long *)FUN_004b2df0(param_5);
  if ((plVar14 != (long *)0x0) && (lVar15 = FUN_004b8260(plVar14,param_4), lVar15 != 0)) {
    puVar31 = (ulong *)*plVar14;
    iVar10 = (int)plVar14[1];
    iVar8 = FUN_004b75b0(puVar31[(long)iVar10 + -1]);
    iVar9 = 0x40 - iVar8;
    if (0 < iVar10) {
      uVar22 = 0;
      puVar30 = puVar31;
      do {
        puVar27 = puVar30 + 1;
        uVar16 = *puVar30 << ((byte)iVar9 & 0x3f) | uVar22;
        uVar22 = *puVar30 >> ((byte)iVar8 & 0x3f) &
                 (-(long)(iVar8 % 0x40) | (ulong)-(long)(iVar8 % 0x40) >> 8);
        *puVar30 = uVar16;
        puVar30 = puVar27;
      } while (puVar31 + (ulong)(iVar10 - 1) + 1 != puVar27);
    }
    *(undefined4 *)(plVar14 + 2) = 0;
    iVar10 = FUN_004bc0e0(plVar13,param_3,iVar9);
    if (iVar10 != 0) {
      iVar10 = (int)plVar14[1];
      iVar8 = (int)plVar13[1];
      if (iVar10 < iVar8) {
        iVar11 = iVar8 - iVar10;
        local_48 = (long)iVar11 << 3;
        iVar26 = iVar8;
      }
      else {
        iVar26 = iVar10 + 1;
        lVar15 = FUN_004b8240(plVar13,iVar26);
        if (lVar15 == 0) goto LAB_004b3370;
        thunk_FUN_00713720(*plVar13 + (long)iVar8 * 8,0,(long)((iVar10 - iVar8) + 1) << 3);
        iVar11 = 1;
        local_48 = 8;
        *(int *)(plVar13 + 1) = iVar26;
      }
      uVar16 = 0;
      lVar15 = (long)iVar10 * 8;
      lVar20 = *plVar13;
      uVar22 = *(ulong *)(*plVar14 + -8 + lVar15);
      if (iVar10 != 1) {
        uVar16 = *(ulong *)(*plVar14 + -0x10 + lVar15);
      }
      lVar17 = FUN_004b8240(param_1,iVar11);
      if (lVar17 != 0) {
        uVar2 = *(uint *)(param_3 + 0x10);
        *(uint *)(param_1 + 2) = uVar2 ^ *(uint *)(param_4 + 0x10);
        *(int *)(param_1 + 1) = iVar11;
        lVar17 = *param_1;
        lVar18 = FUN_004b8240(plVar12,iVar10 + 1);
        if (lVar18 != 0) {
          puVar31 = (ulong *)(lVar20 + -8 + (long)iVar26 * 8);
          local_90 = (long *)(lVar17 + local_48);
          puVar30 = (ulong *)(lVar20 + local_48);
          plVar1 = local_90 + -(long)iVar11;
          do {
            uVar29 = 0xffffffffffffffff;
            if (uVar22 != *puVar31) {
              uVar28 = 0;
              if (puVar30 != puVar31) {
                uVar28 = puVar31[-2];
              }
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar22;
              auVar4._8_8_ = *puVar31;
              auVar4._0_8_ = puVar31[-1];
              uVar29 = SUB168(auVar4 / auVar3,0);
              uVar24 = SUB168(auVar4 % auVar3,0);
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar16;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar29;
              auVar7 = auVar5 * auVar6;
              if ((uVar24 <= auVar7._8_8_) &&
                 (((uVar28 < auVar7._0_8_ || (uVar24 != auVar7._8_8_)) &&
                  (uVar29 = uVar29 - 1, !CARRY8(uVar24,uVar22))))) {
                while( true ) {
                  uVar24 = uVar24 + uVar22;
                  uVar25 = auVar7._8_8_ - (ulong)(auVar7._0_8_ < uVar16);
                  uVar21 = auVar7._0_8_ - uVar16;
                  auVar7._8_8_ = uVar25;
                  auVar7._0_8_ = uVar21;
                  if (uVar25 < uVar24) break;
                  if (((uVar25 == uVar24) && (uVar21 <= uVar28)) ||
                     (uVar29 = uVar29 - 1, CARRY8(uVar24,uVar22))) break;
                }
              }
            }
            puVar30 = puVar30 + -1;
            uVar19 = FUN_005c0e80(*plVar12,*plVar14,iVar10,uVar29);
            lVar20 = *plVar12;
            *(undefined8 *)(lVar20 + lVar15) = uVar19;
            lVar20 = FUN_005c1070(puVar30,puVar30,lVar20,iVar10 + 1);
            if (iVar10 < 1) {
              lVar17 = *plVar12;
            }
            else {
              lVar23 = 0;
              lVar18 = *plVar14;
              lVar17 = *plVar12;
              do {
                *(ulong *)(lVar17 + lVar23 * 8) = *(ulong *)(lVar18 + lVar23 * 8) & -lVar20;
                lVar23 = lVar23 + 1;
              } while (iVar10 != lVar23);
            }
            lVar17 = FUN_005c1040(puVar30,puVar30,lVar17,iVar10);
            local_90 = local_90 + -1;
            *puVar31 = *puVar31 + lVar17;
            puVar31 = puVar31 + -1;
            *local_90 = uVar29 - lVar20;
            if (local_90 == plVar1) {
              *(uint *)(plVar13 + 2) = uVar2;
              *(int *)(plVar13 + 1) = iVar10;
              if (param_2 != 0) {
                FUN_004bc290(param_2,plVar13,iVar9);
              }
              FUN_004b2d50(param_5);
              return 1;
            }
          } while( true );
        }
      }
    }
  }
LAB_004b3370:
  FUN_004b2d50(param_5);
  return 0;
}

