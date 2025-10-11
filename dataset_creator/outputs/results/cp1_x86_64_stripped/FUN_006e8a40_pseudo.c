
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e8a40(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long in_FS_OFFSET;
  undefined1 auStack_98 [8];
  ulong local_90;
  ulong *local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong uStack_48;
  long local_40;
  undefined1 *puVar10;
  
  puVar9 = auStack_98;
  puVar10 = auStack_98;
  puVar11 = auStack_98;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = param_2;
  local_78 = param_1;
  if (param_3 < 0x21) {
    param_2 = param_2 * param_3;
    if (param_2 < 0x400) goto LAB_006e8a8b;
LAB_006e8b03:
    if (DAT_009464d0 == 0) {
      lVar5 = FUN_00768db0(0x55);
      DAT_009464c8 = 0x1fffffffffffffff;
      if (lVar5 != -1) {
        lVar7 = lVar5 + 3;
        if (-1 < lVar5) {
          lVar7 = lVar5;
        }
        DAT_009464c8 = lVar7 >> 2;
      }
      DAT_009464d0 = FUN_00768db0(0x1e);
    }
    if (DAT_009464c8 < param_2 / (ulong)(long)DAT_009464d0) {
LAB_006e8d48:
      FUN_00790b20(local_78,local_80,param_3,param_4,param_5);
      goto LAB_006e8d22;
    }
    local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
    local_90 = FUN_007101b0(param_2);
    *(undefined4 *)(in_FS_OFFSET + -0x58) = (undefined4)local_70;
    puVar1 = auStack_98;
    uVar8 = local_90;
    if (local_90 == 0) goto LAB_006e8d48;
  }
  else {
    param_2 = param_2 * 0x10 + param_3;
    if (0x3ff < param_2) goto LAB_006e8b03;
LAB_006e8a8b:
    puVar1 = auStack_98;
    while (puVar10 != auStack_98 + -(param_2 + 0x17 & 0xfffffffffffff000)) {
      puVar9 = puVar1 + -0x1000;
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
      puVar10 = puVar1 + -0x1000;
      puVar1 = puVar1 + -0x1000;
    }
    uVar8 = (ulong)((uint)(param_2 + 0x17) & 0xff0);
    lVar5 = -uVar8;
    if (uVar8 != 0) {
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    }
    local_90 = 0;
    puVar1 = puVar9 + lVar5;
    uVar8 = (ulong)(puVar9 + lVar5 + 0xf) & 0xfffffffffffffff0;
  }
  local_70 = uVar8;
  puVar11 = puVar1;
  uStack_60 = 4;
  uStack_48 = local_70;
  local_58 = param_4;
  local_50 = param_5;
  if (param_3 < 0x21) {
    if (((local_78 | param_3) & 3) == 0) {
      if (param_3 == 4) {
        uStack_60 = 0;
      }
      else if ((param_3 == 8) && ((local_78 & 7) == 0)) {
        uStack_60 = 1;
      }
      else if (((local_78 | param_3) & 7) == 0) {
        uStack_60 = 2;
      }
    }
    local_68 = param_3;
    if (1 < local_80) {
      *(undefined8 *)(puVar11 + -8) = 0x6e8d16;
      FUN_006e8620(&local_68,local_78);
    }
  }
  else {
    lVar5 = local_80 * 8;
    puVar15 = (ulong *)(local_70 + lVar5);
    local_88 = puVar15 + local_80;
    if (puVar15 < local_88) {
      uVar6 = (lVar5 - 1U >> 3) + 1;
      uVar8 = local_78;
      puVar2 = puVar15;
      if (7 < lVar5 - 1U) {
        uVar12 = local_78 + param_3;
        do {
          puVar3 = puVar2 + 2;
          *puVar2 = uVar8;
          puVar2[1] = uVar12;
          puVar2 = puVar3;
          uVar8 = uVar8 + param_3 * 2;
          uVar12 = uVar12 + param_3 * 2;
        } while (puVar3 != puVar15 + (uVar6 & 0xfffffffffffffffe));
        uVar12 = uVar6 & 0xfffffffffffffffe;
        uVar8 = uVar12 * param_3 + local_78;
        puVar2 = puVar15 + uVar12;
        if (uVar12 == uVar6) goto LAB_006e8c2f;
      }
      *puVar2 = uVar8;
    }
LAB_006e8c2f:
    local_68 = _DAT_00824d60;
    uStack_60 = _UNK_00824d68;
    if (local_80 < 2) {
      if (local_80 == 0) goto LAB_006e8d16;
    }
    else {
      *(undefined8 *)(puVar11 + -8) = 0x6e8c52;
      FUN_006e8620(&local_68,lVar5 + local_70);
    }
    local_70 = 0;
    uVar8 = local_78;
    do {
      uVar6 = puVar15[local_70];
      if (uVar6 != uVar8) {
        *(undefined8 *)(puVar11 + -8) = 0x6e8c92;
        thunk_FUN_00713a50(local_88,uVar8,param_3);
        uVar12 = uVar8;
        uVar14 = local_70;
        do {
          uVar13 = uVar6;
          uVar4 = (uVar13 - local_78) / param_3;
          puVar15[uVar14] = uVar12;
          *(undefined8 *)(puVar11 + -8) = 0x6e8cc4;
          thunk_FUN_00713a50(uVar12,uVar13,param_3);
          uVar6 = puVar15[uVar4];
          uVar12 = uVar13;
          uVar14 = uVar4;
        } while (uVar6 != uVar8);
        puVar15[uVar4] = uVar13;
        *(undefined8 *)(puVar11 + -8) = 0x6e8ce2;
        thunk_FUN_00713a50(uVar13,local_88,param_3);
      }
      local_70 = local_70 + 1;
      uVar8 = uVar8 + param_3;
    } while (local_70 < local_80);
  }
LAB_006e8d16:
  *(undefined8 *)(puVar11 + -8) = 0x6e8d22;
  FUN_007104f0(local_90);
LAB_006e8d22:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar11 + -8) = &UNK_006e8e1a;
  FUN_00771f60();
}

