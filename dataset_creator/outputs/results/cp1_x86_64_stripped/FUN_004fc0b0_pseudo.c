
void FUN_004fc0b0(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
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
  ulong uVar21;
  long in_FS_OFFSET;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = param_2[2];
  local_98._8_8_ = 0;
  local_98._0_8_ = uVar1;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar1;
  local_98 = local_98 * auVar11;
  uVar21 = uVar3 * 2;
  local_88._8_8_ = 0;
  local_88._0_8_ = uVar1;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2 * 2;
  local_88 = local_88 * auVar12;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar1;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar21;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar2;
  local_78 = auVar6 * auVar14 + auVar5 * auVar13;
  uVar4 = param_2[3];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar1 * 2;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar4;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar2;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar21;
  local_68 = auVar7 * auVar15 + auVar8 * auVar16;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar2 * 2;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar4;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar3;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  local_58 = auVar9 * auVar17 + auVar10 * auVar18;
  local_48._8_8_ = 0;
  local_48._0_8_ = uVar21;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  local_48 = local_48 * auVar19;
  local_38._8_8_ = 0;
  local_38._0_8_ = uVar4;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar4;
  local_38 = local_38 * auVar20;
  FUN_004f8d60(param_1,local_98);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

