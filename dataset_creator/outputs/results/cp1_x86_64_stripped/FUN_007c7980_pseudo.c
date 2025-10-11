
/* WARNING: Removing unreachable block (ram,0x007c7e17) */

bool FUN_007c7980(undefined8 *param_1,long param_2,ulong *param_3,long param_4,ulong *param_5,
                 long param_6)

{
  ulong uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  code *pcVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int iVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  undefined8 *puVar38;
  long lVar39;
  ulong *puVar40;
  ulong uVar41;
  bool bVar42;
  ulong *local_88;
  
  if (param_6 == 1) {
    uVar1 = *param_5;
    uVar36 = param_3[param_4 + -1];
    bVar2 = uVar1 <= uVar36;
    if (bVar2) {
      uVar36 = uVar36 - uVar1;
    }
    lVar37 = param_4 + -2;
    if (-1 < lVar37) {
      puVar38 = param_1 + param_2 + -2 + param_4;
      do {
        puVar40 = param_3 + lVar37;
        lVar37 = lVar37 + -1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar1;
        auVar10._8_8_ = uVar36;
        auVar10._0_8_ = *puVar40;
        uVar36 = SUB168(auVar10 % auVar4,0);
        *puVar38 = SUB168(auVar10 / auVar4,0);
        puVar38 = puVar38 + -1;
      } while (lVar37 != -1);
    }
    if (-1 < param_2 + -1) {
      puVar38 = param_1 + param_2 + -1;
      do {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar1;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = uVar36;
        uVar36 = SUB168((auVar27 << 0x40) % auVar5,0);
        *puVar38 = 0;
        bVar42 = param_1 != puVar38;
        puVar38 = puVar38 + -1;
      } while (bVar42);
    }
    *param_3 = uVar36;
    return bVar2;
  }
  if (param_6 != 2) {
    if (param_6 == 0) {
                    /* WARNING: Does not return */
      pcVar26 = (code *)invalidInstructionException();
      (*pcVar26)();
    }
    bVar2 = false;
    param_3 = param_3 + (param_4 - param_6);
    lVar37 = param_6 * 8;
    uVar1 = param_5[param_6 + -1];
    uVar36 = param_5[param_6 + -2];
    local_88 = param_3 + param_6 + -1;
    uVar30 = *local_88;
    if ((uVar1 <= uVar30) &&
       ((uVar1 < uVar30 || (iVar29 = FUN_006f2ee0(param_3,param_5,param_6 + -1), -1 < iVar29)))) {
      FUN_006f44e0(param_3,param_3,param_5,param_6);
      bVar2 = true;
      uVar30 = *local_88;
    }
    lVar39 = ((param_4 + param_2) - param_6) + -1;
    if (lVar39 < 0) {
      return bVar2;
    }
    if (param_2 <= lVar39) {
      lVar31 = 0;
      if (-1 < param_2) {
        lVar31 = param_2;
      }
      puVar40 = param_3 + param_6 + -3;
LAB_007c7a70:
      do {
        lVar32 = lVar39;
        uVar41 = 0xffffffffffffffff;
        param_3 = puVar40 + (2 - param_6);
        uVar34 = puVar40[2];
        if (uVar1 != uVar30) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar1;
          auVar11._8_8_ = uVar30;
          auVar11._0_8_ = puVar40[1];
          uVar41 = SUB168(auVar11 / auVar6,0);
          uVar30 = SUB168(auVar11 % auVar6,0);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar36;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar41;
          auVar23 = auVar15 * auVar19;
          while( true ) {
            uVar35 = auVar23._8_8_;
            uVar33 = auVar23._0_8_;
            if ((uVar35 <= uVar30) && ((uVar35 != uVar30 || (uVar33 <= *puVar40)))) break;
            uVar41 = uVar41 - 1;
            bVar42 = CARRY8(uVar30,uVar1);
            uVar30 = uVar30 + uVar1;
            if (bVar42) break;
            auVar23._8_8_ = uVar35 - (uVar33 < uVar36);
            auVar23._0_8_ = uVar33 - uVar36;
          }
        }
        uVar30 = FUN_006f4590(param_3,param_5,param_6,uVar41);
        if (uVar34 == uVar30) {
          param_1[lVar32] = uVar41;
          uVar30 = puVar40[1];
          lVar39 = lVar32 + -1;
          puVar40 = puVar40 + -1;
          if (lVar32 + -1 < lVar31) break;
          goto LAB_007c7a70;
        }
        FUN_006f2e30(param_3,param_3,param_5,param_6);
        param_1[lVar32] = uVar41 - 1;
        uVar30 = puVar40[1];
        lVar39 = lVar32 + -1;
        puVar40 = puVar40 + -1;
      } while (lVar31 <= lVar32 + -1);
      lVar39 = lVar32 + -1;
      local_88 = param_3 + param_6 + -1;
      if (lVar39 == -1) {
        return bVar2;
      }
    }
    lVar31 = 8;
    if (-2 < param_6 + -2) {
      lVar31 = lVar37;
    }
    lVar32 = (1 - param_6) * 8;
    if (param_6 + -2 < -1) {
      lVar32 = 0;
    }
    do {
      uVar34 = *local_88;
      if (-1 < param_6 + -1) {
        thunk_FUN_00713610((long)param_3 + lVar37 + lVar32,lVar32 + lVar37 + -8 + (long)param_3,
                           lVar31);
      }
      *param_3 = 0;
      uVar41 = 0xffffffffffffffff;
      if (uVar1 != uVar30) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar1;
        auVar9._8_8_ = uVar30;
        auVar9._0_8_ = *local_88;
        uVar41 = SUB168(auVar9 / auVar3,0);
        uVar30 = SUB168(auVar9 % auVar3,0);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar36;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar41;
        auVar22 = auVar14 * auVar18;
        while( true ) {
          uVar35 = auVar22._8_8_;
          uVar33 = auVar22._0_8_;
          if ((uVar35 <= uVar30) && ((uVar30 != uVar35 || (uVar33 <= param_3[param_6 + -2]))))
          break;
          uVar41 = uVar41 - 1;
          bVar42 = CARRY8(uVar30,uVar1);
          uVar30 = uVar30 + uVar1;
          if (bVar42) break;
          auVar22._8_8_ = uVar35 - (uVar33 < uVar36);
          auVar22._0_8_ = uVar33 - uVar36;
        }
      }
      uVar30 = FUN_006f4590(param_3,param_5,param_6,uVar41);
      if (uVar30 != uVar34) {
        uVar41 = uVar41 - 1;
        FUN_006f2e30(param_3,param_3,param_5,param_6);
      }
      param_1[lVar39] = uVar41;
      uVar30 = *local_88;
      bVar42 = lVar39 == 0;
      lVar39 = lVar39 + -1;
      if (bVar42) {
        return bVar2;
      }
    } while( true );
  }
  bVar2 = false;
  param_3 = param_3 + param_4 + -2;
  uVar1 = param_5[1];
  uVar36 = param_3[1];
  uVar30 = *param_5;
  uVar34 = *param_3;
  if ((uVar1 <= uVar36) && ((uVar1 < uVar36 || (uVar30 <= uVar34)))) {
    bVar2 = true;
    bVar42 = uVar34 < uVar30;
    uVar34 = uVar34 - uVar30;
    uVar36 = (uVar36 - uVar1) - (ulong)bVar42;
  }
  param_4 = param_2 + -3 + param_4;
  if (-1 < param_4) {
    if (param_2 <= param_4) {
      lVar37 = 0;
      if (-1 < param_2) {
        lVar37 = param_2;
      }
      do {
        while( true ) {
          lVar39 = param_4;
          param_3 = param_3 + -1;
          uVar41 = *param_3;
          if (uVar1 == uVar36) break;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar1;
          auVar12._8_8_ = uVar36;
          auVar12._0_8_ = uVar34;
          uVar34 = SUB168(auVar12 / auVar7,0);
          uVar36 = SUB168(auVar12 % auVar7,0);
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar30;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar34;
          auVar24 = auVar16 * auVar20;
LAB_007c7e10:
          do {
            auVar28._8_8_ = uVar36;
            auVar28._0_8_ = uVar41;
            uVar33 = auVar24._0_8_;
            if (auVar24 <= auVar28) break;
            uVar34 = uVar34 - 1;
            auVar24._8_8_ = auVar24._8_8_ - (ulong)(uVar33 < uVar30);
            auVar24._0_8_ = uVar33 - uVar30;
            bVar42 = CARRY8(uVar36,uVar1);
            uVar36 = uVar36 + uVar1;
          } while (!bVar42);
          param_1[lVar39] = uVar34;
          uVar34 = uVar41 - auVar24._0_8_;
          uVar36 = (uVar36 - auVar24._8_8_) - (ulong)(uVar41 < auVar24._0_8_);
          param_4 = lVar39 + -1;
          if (lVar39 + -1 < lVar37) goto LAB_007c7e42;
        }
        uVar36 = uVar34 + uVar1;
        if (!CARRY8(uVar34,uVar1)) {
          uVar34 = 0xffffffffffffffff;
          auVar24._8_8_ = (uVar30 - 1) + (ulong)(uVar30 == 0);
          auVar24._0_8_ = -uVar30;
          goto LAB_007c7e10;
        }
        param_1[lVar39] = 0xffffffffffffffff;
        uVar34 = uVar41 + uVar30;
        uVar36 = (uVar36 - uVar30) + (ulong)CARRY8(uVar41,uVar30);
        param_4 = lVar39 + -1;
      } while (lVar37 <= lVar39 + -1);
LAB_007c7e42:
      param_4 = lVar39 + -1;
      if (param_4 == -1) goto LAB_007c7ef3;
    }
LAB_007c7e8e:
    do {
      lVar37 = param_4;
      if (uVar1 == uVar36) {
        uVar36 = uVar34 + uVar1;
        if (CARRY8(uVar34,uVar1)) {
          uVar41 = 0xffffffffffffffff;
          uVar36 = uVar36 - uVar30;
          param_1[lVar37] = 0xffffffffffffffff;
          uVar34 = uVar30;
          param_4 = lVar37 + -1;
          if (lVar37 == 0) break;
          goto LAB_007c7e8e;
        }
        uVar41 = 0xffffffffffffffff;
        auVar25._8_8_ = (uVar30 - 1) + (ulong)(uVar30 == 0);
        auVar25._0_8_ = -uVar30;
      }
      else {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar1;
        auVar13._8_8_ = uVar36;
        auVar13._0_8_ = uVar34;
        uVar41 = SUB168(auVar13 / auVar8,0);
        uVar36 = SUB168(auVar13 % auVar8,0);
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar30;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar41;
        auVar25 = auVar17 * auVar21;
      }
      do {
        uVar33 = auVar25._8_8_;
        uVar34 = auVar25._0_8_;
        if ((uVar33 <= uVar36) && ((uVar33 != uVar36 || (uVar34 == 0)))) break;
        uVar41 = uVar41 - 1;
        auVar25._8_8_ = uVar33 - (uVar34 < uVar30);
        auVar25._0_8_ = uVar34 - uVar30;
        bVar42 = CARRY8(uVar36,uVar1);
        uVar36 = uVar36 + uVar1;
      } while (!bVar42);
      param_1[lVar37] = uVar41;
      uVar34 = -auVar25._0_8_;
      uVar36 = (uVar36 - auVar25._8_8_) - (ulong)(auVar25._0_8_ != 0);
      param_4 = lVar37 + -1;
    } while (lVar37 != 0);
    *param_3 = 0;
    param_1[lVar37] = uVar41;
  }
LAB_007c7ef3:
  *param_3 = uVar34;
  param_3[1] = uVar36;
  return bVar2;
}

