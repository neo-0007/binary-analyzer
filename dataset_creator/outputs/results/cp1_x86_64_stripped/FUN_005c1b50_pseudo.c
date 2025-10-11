
void FUN_005c1b50(undefined8 *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *param_2;
  uVar29 = SUB168(auVar1 * auVar11,8);
  *param_1 = SUB168(auVar1 * auVar11,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2[1];
  auVar12._8_8_ = 0;
  auVar12._0_8_ = *param_2;
  auVar2 = auVar2 * auVar12;
  uVar30 = auVar2._8_8_;
  auVar23._8_8_ = uVar30;
  auVar23._0_8_ = uVar29;
  uVar25 = auVar2._0_8_;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar25;
  auVar2 = auVar2 + auVar23;
  uVar29 = (ulong)CARRY8(uVar29,uVar25);
  uVar35 = SUB168(auVar2 + auVar24,8);
  uVar37 = (ulong)CARRY8(uVar30,uVar29) +
           (ulong)(CARRY8(uVar30 + uVar29,uVar30) ||
                  CARRY8(auVar2._8_8_,(ulong)CARRY8(auVar2._0_8_,uVar25)));
  param_1[1] = SUB168(auVar2 + auVar24,0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[1];
  uVar31 = SUB168(auVar3 * auVar13,8);
  uVar29 = SUB168(auVar3 * auVar13,0);
  uVar25 = uVar35 + uVar29;
  uVar29 = (ulong)CARRY8(uVar35,uVar29);
  uVar35 = uVar37 + uVar31;
  uVar38 = uVar35 + uVar29;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[2];
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *param_2;
  uVar32 = SUB168(auVar4 * auVar14,8);
  uVar26 = SUB168(auVar4 * auVar14,0);
  uVar36 = uVar25 + uVar26;
  uVar25 = (ulong)CARRY8(uVar25,uVar26);
  uVar27 = uVar38 + uVar32;
  uVar39 = uVar27 + uVar25;
  uVar30 = (ulong)CARRY8(uVar36,uVar26);
  uVar28 = uVar39 + uVar32;
  uVar40 = uVar28 + uVar30;
  uVar37 = (ulong)(CARRY8(uVar37,uVar31) || CARRY8(uVar35,uVar29)) +
           (ulong)(CARRY8(uVar38,uVar32) || CARRY8(uVar27,uVar25)) +
           (ulong)(CARRY8(uVar39,uVar32) || CARRY8(uVar28,uVar30));
  param_1[2] = uVar36 + uVar26;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[3];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *param_2;
  uVar33 = SUB168(auVar5 * auVar15,8);
  uVar25 = SUB168(auVar5 * auVar15,0);
  uVar30 = uVar40 + uVar25;
  uVar29 = (ulong)CARRY8(uVar40,uVar25);
  uVar27 = uVar37 + uVar33;
  uVar36 = uVar27 + uVar29;
  uVar35 = uVar30 + uVar25;
  uVar25 = (ulong)CARRY8(uVar30,uVar25);
  uVar28 = uVar36 + uVar33;
  uVar38 = uVar28 + uVar25;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[2];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_2[1];
  uVar34 = SUB168(auVar6 * auVar16,8);
  uVar32 = SUB168(auVar6 * auVar16,0);
  uVar41 = uVar35 + uVar32;
  uVar30 = (ulong)CARRY8(uVar35,uVar32);
  uVar26 = uVar38 + uVar34;
  uVar39 = uVar26 + uVar30;
  uVar35 = (ulong)CARRY8(uVar41,uVar32);
  uVar31 = uVar39 + uVar34;
  uVar40 = uVar31 + uVar35;
  uVar36 = (ulong)(CARRY8(uVar37,uVar33) || CARRY8(uVar27,uVar29)) +
           (ulong)(CARRY8(uVar36,uVar33) || CARRY8(uVar28,uVar25)) +
           (ulong)(CARRY8(uVar38,uVar34) || CARRY8(uVar26,uVar30)) +
           (ulong)(CARRY8(uVar39,uVar34) || CARRY8(uVar31,uVar35));
  param_1[3] = uVar41 + uVar32;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[2];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2[2];
  uVar32 = SUB168(auVar7 * auVar17,8);
  uVar29 = SUB168(auVar7 * auVar17,0);
  uVar30 = uVar40 + uVar29;
  uVar29 = (ulong)CARRY8(uVar40,uVar29);
  uVar35 = uVar36 + uVar32;
  uVar38 = uVar35 + uVar29;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[3];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[1];
  auVar8 = auVar8 * auVar18;
  uVar37 = auVar8._8_8_;
  uVar26 = auVar8._0_8_;
  uVar31 = SUB168(auVar8 + auVar21,0);
  uVar25 = (ulong)CARRY8(uVar30,uVar26);
  uVar27 = uVar38 + uVar37;
  auVar21._8_8_ = uVar27;
  auVar21._0_8_ = uVar30;
  uVar30 = (ulong)CARRY8(uVar31,uVar26);
  uVar28 = SUB168(auVar8 + auVar21,8);
  uVar39 = uVar28 + uVar30;
  uVar32 = (ulong)(CARRY8(uVar36,uVar32) || CARRY8(uVar35,uVar29)) +
           (ulong)(CARRY8(uVar38,uVar37) || CARRY8(uVar27,uVar25)) +
           (ulong)(CARRY8(uVar27 + uVar25,uVar37) || CARRY8(uVar28,uVar30));
  param_1[4] = uVar31 + uVar26;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[3];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[2];
  uVar26 = SUB168(auVar9 * auVar19,8);
  uVar27 = SUB168(auVar9 * auVar19,0);
  uVar31 = uVar39 + uVar27;
  uVar29 = (ulong)CARRY8(uVar39,uVar27);
  uVar30 = uVar32 + uVar26;
  uVar28 = uVar30 + uVar29;
  uVar25 = (ulong)CARRY8(uVar31,uVar27);
  uVar35 = uVar28 + uVar26;
  auVar22._8_8_ =
       (ulong)(CARRY8(uVar32,uVar26) || CARRY8(uVar30,uVar29)) +
       (ulong)(CARRY8(uVar28,uVar26) || CARRY8(uVar35,uVar25));
  auVar22._0_8_ = uVar35 + uVar25;
  param_1[5] = uVar31 + uVar27;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[3];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[3];
  *(undefined1 (*) [16])(param_1 + 6) = auVar10 * auVar20 + auVar22;
  return;
}

