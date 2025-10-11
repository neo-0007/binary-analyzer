
/* WARNING: Removing unreachable block (ram,0x007be4d7) */

bool __mpn_divrem(undefined8 *param_1,long param_2,ulong *param_3,long param_4,ulong *param_5,
                 long param_6)

{
  size_t sVar1;
  ulong uVar2;
  bool bVar3;
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
  undefined1 auVar26 [16];
  code *pcVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar30;
  ulong uVar31;
  size_t __n;
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
    uVar2 = *param_5;
    uVar36 = param_3[param_4 + -1];
    bVar3 = uVar2 <= uVar36;
    if (bVar3) {
      uVar36 = uVar36 - uVar2;
    }
    lVar39 = param_4 + -2;
    if (-1 < lVar39) {
      puVar38 = param_1 + param_2 + -2 + param_4;
      do {
        puVar40 = param_3 + lVar39;
        lVar39 = lVar39 + -1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar2;
        auVar11._8_8_ = uVar36;
        auVar11._0_8_ = *puVar40;
        uVar36 = SUB168(auVar11 % auVar5,0);
        *puVar38 = SUB168(auVar11 / auVar5,0);
        puVar38 = puVar38 + -1;
      } while (lVar39 != -1);
    }
    if (-1 < param_2 + -1) {
      puVar38 = param_1 + param_2 + -1;
      do {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar2;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = uVar36;
        uVar36 = SUB168((auVar28 << 0x40) % auVar6,0);
        *puVar38 = 0;
        bVar42 = param_1 != puVar38;
        puVar38 = puVar38 + -1;
      } while (bVar42);
    }
    *param_3 = uVar36;
    return bVar3;
  }
  if (param_6 != 2) {
    if (param_6 == 0) {
                    /* WARNING: Does not return */
      pcVar27 = (code *)invalidInstructionException();
      (*pcVar27)();
    }
    bVar3 = false;
    param_3 = param_3 + (param_4 - param_6);
    sVar1 = param_6 * 8;
    uVar2 = param_5[param_6 + -1];
    uVar36 = param_5[param_6 + -2];
    local_88 = param_3 + param_6 + -1;
    uVar31 = *local_88;
    if ((uVar2 <= uVar31) &&
       ((uVar2 < uVar31 || (iVar30 = __mpn_cmp(param_3,param_5,param_6 + -1), -1 < iVar30)))) {
      __mpn_sub_n(param_3,param_3,param_5,param_6);
      bVar3 = true;
      uVar31 = *local_88;
    }
    lVar39 = ((param_4 + param_2) - param_6) + -1;
    if (lVar39 < 0) {
      return bVar3;
    }
    if (param_2 <= lVar39) {
      lVar32 = 0;
      if (-1 < param_2) {
        lVar32 = param_2;
      }
      puVar40 = param_3 + param_6 + -3;
LAB_007be130:
      do {
        lVar37 = lVar39;
        uVar41 = 0xffffffffffffffff;
        param_3 = puVar40 + (2 - param_6);
        uVar34 = puVar40[2];
        if (uVar2 != uVar31) {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar2;
          auVar12._8_8_ = uVar31;
          auVar12._0_8_ = puVar40[1];
          uVar41 = SUB168(auVar12 / auVar7,0);
          uVar31 = SUB168(auVar12 % auVar7,0);
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar36;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar41;
          auVar24 = auVar16 * auVar20;
          while( true ) {
            uVar35 = auVar24._8_8_;
            uVar33 = auVar24._0_8_;
            if ((uVar35 <= uVar31) && ((uVar35 != uVar31 || (uVar33 <= *puVar40)))) break;
            uVar41 = uVar41 - 1;
            bVar42 = CARRY8(uVar31,uVar2);
            uVar31 = uVar31 + uVar2;
            if (bVar42) break;
            auVar24._8_8_ = uVar35 - (uVar33 < uVar36);
            auVar24._0_8_ = uVar33 - uVar36;
          }
        }
        uVar31 = __mpn_submul_1(param_3,param_5,param_6,uVar41);
        if (uVar34 == uVar31) {
          param_1[lVar37] = uVar41;
          uVar31 = puVar40[1];
          lVar39 = lVar37 + -1;
          puVar40 = puVar40 + -1;
          if (lVar37 + -1 < lVar32) break;
          goto LAB_007be130;
        }
        __mpn_add_n(param_3,param_3,param_5,param_6);
        param_1[lVar37] = uVar41 - 1;
        uVar31 = puVar40[1];
        lVar39 = lVar37 + -1;
        puVar40 = puVar40 + -1;
      } while (lVar32 <= lVar37 + -1);
      lVar39 = lVar37 + -1;
      local_88 = param_3 + param_6 + -1;
      if (lVar39 == -1) {
        return bVar3;
      }
    }
    __n = 8;
    if (-2 < param_6 + -2) {
      __n = sVar1;
    }
    lVar32 = (1 - param_6) * 8;
    if (param_6 + -2 < -1) {
      lVar32 = 0;
    }
    do {
      uVar34 = *local_88;
      if (-1 < param_6 + -1) {
        memmove((void *)((long)param_3 + sVar1 + lVar32),
                (void *)(lVar32 + (sVar1 - 8) + (long)param_3),__n);
      }
      *param_3 = 0;
      uVar41 = 0xffffffffffffffff;
      if (uVar2 != uVar31) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar2;
        auVar10._8_8_ = uVar31;
        auVar10._0_8_ = *local_88;
        uVar41 = SUB168(auVar10 / auVar4,0);
        uVar31 = SUB168(auVar10 % auVar4,0);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar36;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar41;
        auVar23 = auVar15 * auVar19;
        while( true ) {
          uVar35 = auVar23._8_8_;
          uVar33 = auVar23._0_8_;
          if ((uVar35 <= uVar31) && ((uVar31 != uVar35 || (uVar33 <= param_3[param_6 + -2]))))
          break;
          uVar41 = uVar41 - 1;
          bVar42 = CARRY8(uVar31,uVar2);
          uVar31 = uVar31 + uVar2;
          if (bVar42) break;
          auVar23._8_8_ = uVar35 - (uVar33 < uVar36);
          auVar23._0_8_ = uVar33 - uVar36;
        }
      }
      uVar31 = __mpn_submul_1(param_3,param_5,param_6,uVar41);
      if (uVar31 != uVar34) {
        uVar41 = uVar41 - 1;
        __mpn_add_n(param_3,param_3,param_5,param_6);
      }
      param_1[lVar39] = uVar41;
      uVar31 = *local_88;
      bVar42 = lVar39 == 0;
      lVar39 = lVar39 + -1;
      if (bVar42) {
        return bVar3;
      }
    } while( true );
  }
  bVar3 = false;
  param_3 = param_3 + param_4 + -2;
  uVar2 = param_5[1];
  uVar36 = param_3[1];
  uVar31 = *param_5;
  uVar34 = *param_3;
  if ((uVar2 <= uVar36) && ((uVar2 < uVar36 || (uVar31 <= uVar34)))) {
    bVar3 = true;
    bVar42 = uVar34 < uVar31;
    uVar34 = uVar34 - uVar31;
    uVar36 = (uVar36 - uVar2) - (ulong)bVar42;
  }
  param_4 = param_2 + -3 + param_4;
  if (-1 < param_4) {
    if (param_2 <= param_4) {
      lVar39 = 0;
      if (-1 < param_2) {
        lVar39 = param_2;
      }
      do {
        while( true ) {
          lVar32 = param_4;
          param_3 = param_3 + -1;
          uVar41 = *param_3;
          if (uVar2 == uVar36) break;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar2;
          auVar13._8_8_ = uVar36;
          auVar13._0_8_ = uVar34;
          uVar34 = SUB168(auVar13 / auVar8,0);
          uVar36 = SUB168(auVar13 % auVar8,0);
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar31;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar34;
          auVar25 = auVar17 * auVar21;
LAB_007be4d0:
          do {
            auVar29._8_8_ = uVar36;
            auVar29._0_8_ = uVar41;
            uVar33 = auVar25._0_8_;
            if (auVar25 <= auVar29) break;
            uVar34 = uVar34 - 1;
            auVar25._8_8_ = auVar25._8_8_ - (ulong)(uVar33 < uVar31);
            auVar25._0_8_ = uVar33 - uVar31;
            bVar42 = CARRY8(uVar36,uVar2);
            uVar36 = uVar36 + uVar2;
          } while (!bVar42);
          param_1[lVar32] = uVar34;
          uVar34 = uVar41 - auVar25._0_8_;
          uVar36 = (uVar36 - auVar25._8_8_) - (ulong)(uVar41 < auVar25._0_8_);
          param_4 = lVar32 + -1;
          if (lVar32 + -1 < lVar39) goto LAB_007be502;
        }
        uVar36 = uVar34 + uVar2;
        if (!CARRY8(uVar34,uVar2)) {
          uVar34 = 0xffffffffffffffff;
          auVar25._8_8_ = (uVar31 - 1) + (ulong)(uVar31 == 0);
          auVar25._0_8_ = -uVar31;
          goto LAB_007be4d0;
        }
        param_1[lVar32] = 0xffffffffffffffff;
        uVar34 = uVar41 + uVar31;
        uVar36 = (uVar36 - uVar31) + (ulong)CARRY8(uVar41,uVar31);
        param_4 = lVar32 + -1;
      } while (lVar39 <= lVar32 + -1);
LAB_007be502:
      param_4 = lVar32 + -1;
      if (param_4 == -1) goto LAB_007be5b3;
    }
LAB_007be54e:
    do {
      lVar39 = param_4;
      if (uVar2 == uVar36) {
        uVar36 = uVar34 + uVar2;
        if (CARRY8(uVar34,uVar2)) {
          uVar41 = 0xffffffffffffffff;
          uVar36 = uVar36 - uVar31;
          param_1[lVar39] = 0xffffffffffffffff;
          uVar34 = uVar31;
          param_4 = lVar39 + -1;
          if (lVar39 == 0) break;
          goto LAB_007be54e;
        }
        uVar41 = 0xffffffffffffffff;
        auVar26._8_8_ = (uVar31 - 1) + (ulong)(uVar31 == 0);
        auVar26._0_8_ = -uVar31;
      }
      else {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar2;
        auVar14._8_8_ = uVar36;
        auVar14._0_8_ = uVar34;
        uVar41 = SUB168(auVar14 / auVar9,0);
        uVar36 = SUB168(auVar14 % auVar9,0);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar31;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar41;
        auVar26 = auVar18 * auVar22;
      }
      do {
        uVar33 = auVar26._8_8_;
        uVar34 = auVar26._0_8_;
        if ((uVar33 <= uVar36) && ((uVar33 != uVar36 || (uVar34 == 0)))) break;
        uVar41 = uVar41 - 1;
        auVar26._8_8_ = uVar33 - (uVar34 < uVar31);
        auVar26._0_8_ = uVar34 - uVar31;
        bVar42 = CARRY8(uVar36,uVar2);
        uVar36 = uVar36 + uVar2;
      } while (!bVar42);
      param_1[lVar39] = uVar41;
      uVar34 = -auVar26._0_8_;
      uVar36 = (uVar36 - auVar26._8_8_) - (ulong)(auVar26._0_8_ != 0);
      param_4 = lVar39 + -1;
    } while (lVar39 != 0);
    *param_3 = 0;
    param_1[lVar39] = uVar41;
  }
LAB_007be5b3:
  *param_3 = uVar34;
  param_3[1] = uVar36;
  return bVar3;
}

