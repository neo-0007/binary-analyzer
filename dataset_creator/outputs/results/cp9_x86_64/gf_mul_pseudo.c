
void gf_mul(ulong *param_1,long param_2,long param_3)

{
  long lVar1;
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
  long lVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong *puVar24;
  long in_FS_OFFSET;
  long local_e0;
  ulong local_a8 [4];
  ulong local_88 [4];
  ulong local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar18 = 0;
  do {
    *(long *)((long)local_a8 + lVar18) =
         *(long *)(param_2 + 0x20 + lVar18) + *(long *)(param_2 + lVar18);
    lVar1 = *(long *)(param_3 + 0x20 + lVar18);
    lVar19 = *(long *)(param_3 + lVar18) + lVar1;
    *(long *)((long)local_88 + lVar18) = lVar19;
    *(long *)((long)local_68 + lVar18) = lVar1 + lVar19;
    lVar18 = lVar18 + 8;
  } while (lVar18 != 0x20);
  uVar20 = 0;
  auVar15 = ZEXT816(0);
  auVar16 = ZEXT816(0);
  local_e0 = 0x20;
  while( true ) {
    lVar18 = 0;
    auVar14 = ZEXT816(0);
    puVar24 = (ulong *)(param_3 + local_e0);
    do {
      uVar21 = (ulong)(uVar20 - (int)lVar18);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulong *)(param_2 + lVar18 * 8);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *(ulong *)(param_3 + uVar21 * 8);
      auVar14 = auVar2 * auVar8 + auVar14;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_a8[lVar18];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_88[uVar21];
      auVar15 = auVar3 * auVar9 + auVar15;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulong *)(param_2 + 0x20 + lVar18 * 8);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *puVar24;
      auVar16 = auVar4 * auVar10 + auVar16;
      lVar18 = lVar18 + 1;
      puVar24 = puVar24 + -1;
    } while ((uint)lVar18 <= uVar20);
    uVar20 = uVar20 + 1;
    if (uVar20 == 4) break;
    lVar18 = 0x18;
    puVar24 = (ulong *)(param_2 + -0x18 + local_e0);
    uVar23 = uVar20;
    do {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *(ulong *)(param_3 + 0x20 + lVar18);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *puVar24;
      auVar14 = auVar5 * auVar11 + auVar14;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *(ulong *)((long)local_68 + lVar18);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = local_a8[uVar23];
      auVar15 = auVar6 * auVar12 + auVar15;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *(ulong *)((long)local_88 + lVar18);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = puVar24[4];
      auVar16 = auVar7 * auVar13 + auVar16;
      uVar23 = uVar23 + 1;
      puVar24 = puVar24 + 1;
      lVar18 = lVar18 + -8;
    } while (uVar23 != 4);
    auVar2 = auVar15 - auVar14;
    auVar14 = auVar14 + auVar16;
    auVar16 = auVar14 >> 0x38;
    *(ulong *)((long)param_1 + local_e0 + -0x20) = auVar14._0_8_ & 0xffffffffffffff;
    auVar15 = auVar2 >> 0x38;
    *(ulong *)((long)param_1 + local_e0) = auVar2._0_8_ & 0xffffffffffffff;
    local_e0 = local_e0 + 8;
  }
  *(ulong *)((long)param_1 + local_e0 + -0x20) = SUB168(auVar14 + auVar16,0) & 0xffffffffffffff;
  auVar2 = auVar15 - auVar14 >> 0x38;
  *(ulong *)((long)param_1 + local_e0) = SUB168(auVar15 - auVar14,0) & 0xffffffffffffff;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_1[4];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *param_1;
  auVar17 = (auVar14 + auVar16 >> 0x38) + auVar2 + auVar17;
  uVar22 = auVar17._0_8_;
  auVar2 = auVar2 + auVar15;
  uVar21 = auVar2._0_8_;
  param_1[5] = param_1[5] + (uVar22 >> 0x38 | auVar17._8_8_ << 8);
  param_1[4] = uVar22 & 0xffffffffffffff;
  param_1[1] = param_1[1] + (uVar21 >> 0x38 | auVar2._8_8_ << 8);
  *param_1 = uVar21 & 0xffffffffffffff;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

