
void FUN_004df9b0(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  undefined8 local_d8;
  ulong *local_b8;
  ulong local_b0;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_88._0_8_ = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  local_b0 = 0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_b8 = param_2;
  while( true ) {
    uVar11 = 0;
    uVar9 = *local_b8;
    puVar12 = (ulong *)local_88;
    puVar14 = param_3;
    uVar16 = local_88._0_8_;
    while( true ) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar11;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = *puVar14;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar16;
      auVar6 = auVar1 * auVar3 + auVar5 + auVar6;
      uVar11 = auVar6._8_8_;
      *puVar12 = auVar6._0_8_;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
      if ((ulong *)(local_58 + 8) == puVar12) break;
      uVar16 = *puVar12;
    }
    lVar13 = 1;
    uVar10 = 0;
    local_58._8_8_ = uVar11;
    uVar9 = 0x2378c292ab5844f3;
    uVar15 = local_88._0_8_ * 0x3bd440fae918bc5;
    uVar16 = local_88._0_8_;
    while( true ) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar10;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar9;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar15;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      auVar8 = auVar2 * auVar4 + auVar7 + auVar8;
      uVar10 = auVar8._8_8_;
      if ((lVar13 != 1) &&
         (local_d8 = auVar8._0_8_,
         *(undefined8 *)(local_88 + (ulong)((int)lVar13 - 2) * 8) = local_d8, (int)lVar13 == 7))
      break;
      uVar9 = *(ulong *)(&DAT_007f1220 + lVar13 * 8);
      uVar16 = *(ulong *)((long)local_88 + lVar13 * 8);
      lVar13 = lVar13 + 1;
    }
    uVar9 = uVar10 + local_b0;
    local_b0 = (ulong)CARRY8(uVar10,local_b0) + (ulong)CARRY8(uVar9,uVar11);
    local_58._0_8_ = uVar9 + uVar11;
    local_b8 = local_b8 + 1;
    if (param_2 + 7 == local_b8) break;
  }
  FUN_004df900(param_1,local_88,&DAT_007f1220,&DAT_007f1220,local_b0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

