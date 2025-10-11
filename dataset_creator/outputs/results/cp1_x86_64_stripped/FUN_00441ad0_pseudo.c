
int FUN_00441ad0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  long local_f0;
  ulong local_e8;
  long local_d8;
  ulong local_d0;
  long local_c8;
  uint local_80 [16];
  long local_40;
  
  uVar28 = *(ulong *)(param_1 + 0x1b8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar15 = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0xffffffffffffffff;
  uVar27 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) != 0) goto LAB_00441cf1;
  if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
    if (uVar28 == 0xffffffffffffffff) {
      lVar23 = 0;
      lVar25 = param_3;
      uVar28 = param_4;
    }
    else {
      if ((uVar28 + 0x30 & 0xfffffffffffffff0) != param_4) goto LAB_00441cf1;
      lVar23 = (ulong)(0x301 < *(uint *)(param_1 + 0x1c0)) * 0x10;
      lVar25 = param_3 + lVar23;
    }
    lVar26 = param_1 + 0x94;
    lVar1 = param_1 + 0x2d8;
    lVar2 = param_1 + 0xc0;
    local_f0 = param_2;
    local_e8 = param_4;
    if (((((DAT_0094b5a0._3_1_ & 0x20) != 0) ||
         (((DAT_0094b59c & 0x10000000) != 0 &&
          ((DAT_0094b598 & 0x40000000) != 0 || (DAT_0094b59c & 0x800) != 0)))) &&
        (uVar20 = lVar23 + (ulong)(0x40 - *(int *)(param_1 + 0x340)), uVar20 < uVar28)) &&
       (uVar24 = uVar28 - uVar20, 0x3f < uVar24)) {
      FUN_00441860(lVar1,lVar25);
      FUN_00490980(param_3,param_2,uVar24 >> 6,lVar2,lVar26,lVar1,param_3 + uVar20);
      uVar27 = uVar24 & 0xffffffffffffffc0;
      uVar19 = (int)uVar27 * 8;
      uVar17 = *(uint *)(param_1 + 0x2f8);
      lVar23 = uVar20 + uVar27;
      *(uint *)(param_1 + 0x2f8) = uVar19 + *(uint *)(param_1 + 0x2f8);
      local_f0 = param_2 + uVar27;
      lVar25 = param_3 + lVar23;
      local_e8 = param_4 - uVar27;
      *(uint *)(param_1 + 0x2fc) =
           (int)(uVar24 >> 0x1d) + *(int *)(param_1 + 0x2fc) + (uint)CARRY4(uVar19,uVar17);
    }
    FUN_00441860(lVar1,lVar25,uVar28 - lVar23);
    if (uVar28 == param_4) {
      FUN_00498270(param_3 + uVar27,local_f0,local_e8,lVar2,lVar26,1);
      iVar15 = 1;
    }
    else {
      if (param_3 != param_2) {
        thunk_FUN_00713a50(local_f0,param_3 + uVar27,uVar28 - uVar27);
      }
      lVar23 = param_2 + uVar28;
      FUN_00434d50(lVar23,lVar1);
      *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x268);
      *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x270);
      *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x278);
      *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x280);
      *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x288);
      *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x290);
      *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x298);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2a0);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2a8);
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2b0);
      *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x2b8);
      *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x2c0);
      *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x2c8);
      *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x2d0);
      FUN_00441860(lVar1,lVar23,0x20);
      FUN_00434d50(lVar23,lVar1);
      uVar27 = uVar28 + 0x20;
      if (uVar27 < param_4) {
        thunk_FUN_00713720(uVar27 + param_2,((uint)param_4 - 1) - (int)uVar27 & 0xff,
                           (param_4 - 0x20) - uVar28);
      }
      FUN_00498270(local_f0,local_f0,local_e8,lVar2,lVar26,1);
      iVar15 = 1;
    }
    goto LAB_00441cf1;
  }
  FUN_00498270(param_3,param_2,param_4,param_1 + 0xc0,param_1 + 0x94,0);
  if (uVar28 == 0xffffffffffffffff) {
    FUN_00441860(param_1 + 0x2d8,param_2,param_4);
    iVar15 = 1;
    goto LAB_00441cf1;
  }
  iVar15 = 0;
  uVar20 = (ulong)(0x301 < CONCAT11(*(undefined1 *)(param_1 + 0x1bc + uVar28),
                                    *(undefined1 *)(param_1 + 0x1bd + uVar28)));
  local_c8 = uVar20 * 0x10;
  if (param_4 < local_c8 + 0x21U) goto LAB_00441cf1;
  local_c8 = param_2 + local_c8;
  lVar25 = param_4 + uVar20 * -0x10;
  uVar10 = *(undefined8 *)(param_1 + 0x1f8);
  uVar11 = *(undefined8 *)(param_1 + 0x200);
  uVar4 = *(undefined8 *)(param_1 + 0x238);
  uVar5 = *(undefined8 *)(param_1 + 0x240);
  uVar17 = (int)lVar25 - 0x21;
  uVar6 = *(undefined8 *)(param_1 + 0x248);
  uVar7 = *(undefined8 *)(param_1 + 0x250);
  uVar8 = *(undefined8 *)(param_1 + 600);
  uVar9 = *(undefined8 *)(param_1 + 0x260);
  lVar23 = param_1 + 0x2d8;
  uVar22 = 0xff - uVar17 >> 0x18 | uVar17 & 0xff;
  uVar17 = uVar22 - *(byte *)(local_c8 + -1 + lVar25);
  uVar19 = (int)uVar17 >> 0x1f & uVar22;
  local_d8 = lVar25 - (ulong)(uVar19 + 0x21);
  *(char *)(param_1 + 0x1bf + uVar28) = (char)local_d8;
  *(char *)(param_1 + 0x1be + uVar28) = (char)((ulong)local_d8 >> 8);
  *(undefined8 *)(param_1 + 0x2d8) = uVar10;
  *(undefined8 *)(param_1 + 0x2e0) = uVar11;
  *(undefined8 *)(param_1 + 0x318) = uVar4;
  *(undefined8 *)(param_1 + 800) = uVar5;
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x328) = uVar6;
  *(undefined8 *)(param_1 + 0x330) = uVar7;
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x338) = uVar8;
  *(undefined8 *)(param_1 + 0x340) = uVar9;
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x230);
  FUN_00441860(lVar23,param_1 + 0x1c0,uVar28);
  local_d0 = lVar25 - 0x20;
  if (0x13f < local_d0) {
    lVar25 = (lVar25 - 0x160U & 0xffffffffffffffc0) + (ulong)(0x40 - *(int *)(param_1 + 0x340));
    FUN_00441860(lVar23,local_c8,lVar25);
    local_d0 = local_d0 - lVar25;
    local_c8 = local_c8 + lVar25;
    local_d8 = local_d8 - lVar25;
  }
  lVar25 = param_1 + 0x300;
  uVar18 = *(uint *)(param_1 + 0x340);
  uVar13 = *(int *)(param_1 + 0x2f8) + (int)local_d8 * 8;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 * 0x1000000;
  if (local_d0 == 0) {
    uVar28 = 0;
  }
  else {
    lVar26 = -local_d8;
    do {
      uVar28 = (ulong)uVar18;
      uVar18 = uVar18 + 1;
      bVar12 = (byte)((ulong)lVar26 >> 0x38);
      *(byte *)(param_1 + 0x300 + uVar28) =
           ~((byte)((ulong)-lVar26 >> 0x38) | bVar12) & 0x80 |
           *(byte *)(local_c8 + local_d8 + lVar26) & bVar12;
      if (uVar18 == 0x40) {
        uVar18 = (uint)((ulong)(7 - lVar26) >> 0x20);
        *(uint *)(param_1 + 0x33c) = *(uint *)(param_1 + 0x33c) | uVar13 & (int)uVar18 >> 0x1f;
        FUN_00584f80(lVar23,lVar25,1);
        uVar18 = (int)((uint)((ulong)(lVar26 + -0x48) >> 0x20) & uVar18) >> 0x1f;
        local_80[0] = local_80[0] | *(uint *)(param_1 + 0x2d8) & uVar18;
        local_80[1] = local_80[1] | *(uint *)(param_1 + 0x2dc) & uVar18;
        local_80[2] = local_80[2] | *(uint *)(param_1 + 0x2e0) & uVar18;
        local_80[3] = local_80[3] | *(uint *)(param_1 + 0x2e4) & uVar18;
        local_80[4] = local_80[4] | *(uint *)(param_1 + 0x2e8) & uVar18;
        local_80[5] = local_80[5] | *(uint *)(param_1 + 0x2ec) & uVar18;
        local_80[7] = local_80[7] | uVar18 & *(uint *)(param_1 + 0x2f4);
        local_80[6] = local_80[6] | *(uint *)(param_1 + 0x2f0) & uVar18;
        uVar18 = 0;
      }
      lVar26 = lVar26 + 1;
      uVar28 = local_d0;
    } while (local_d0 - local_d8 != lVar26);
  }
  uVar20 = (ulong)uVar18;
  if (uVar18 < 0x40) {
    puVar3 = (undefined8 *)(param_1 + 0x300 + uVar20);
    uVar24 = 0x40 - uVar20;
    uVar21 = (uint)uVar24;
    if (uVar21 < 8) {
      if ((uVar24 & 4) == 0) {
        if ((uVar21 != 0) && (*(undefined1 *)puVar3 = 0, (uVar24 & 2) != 0)) {
          *(undefined2 *)((long)puVar3 + ((uVar24 & 0xffffffff) - 2)) = 0;
        }
      }
      else {
        *(undefined4 *)puVar3 = 0;
        *(undefined4 *)((long)puVar3 + ((uVar24 & 0xffffffff) - 4)) = 0;
      }
    }
    else {
      *puVar3 = 0;
      *(undefined8 *)((long)puVar3 + ((uVar24 & 0xffffffff) - 8)) = 0;
      uVar21 = uVar21 + ((int)puVar3 - (int)((ulong)(puVar3 + 1) & 0xfffffffffffffff8)) & 0xfffffff8
      ;
      if (7 < uVar21) {
        uVar24 = 0;
        do {
          uVar16 = (int)uVar24 + 8;
          *(undefined8 *)(((ulong)(puVar3 + 1) & 0xfffffffffffffff8) + uVar24) = 0;
          uVar24 = (ulong)uVar16;
        } while (uVar16 < uVar21);
      }
    }
    lVar26 = -0x49 - local_d8;
    uVar28 = (uVar28 + 0x40) - uVar20;
    if (0x38 < uVar18) goto LAB_00442456;
  }
  else {
    lVar26 = -0x49 - local_d8;
LAB_00442456:
    uVar18 = (uint)((local_d8 + 8) - uVar28 >> 0x20);
    *(uint *)(param_1 + 0x33c) = *(uint *)(param_1 + 0x33c) | uVar13 & (int)uVar18 >> 0x1f;
    FUN_00584f80(lVar23,lVar25,1);
    lVar1 = lVar26 + uVar28;
    uVar28 = uVar28 + 0x40;
    uVar18 = (int)(uVar18 & (uint)((ulong)lVar1 >> 0x20)) >> 0x1f;
    local_80[0] = local_80[0] | *(uint *)(param_1 + 0x2d8) & uVar18;
    local_80[1] = local_80[1] | *(uint *)(param_1 + 0x2dc) & uVar18;
    local_80[2] = local_80[2] | *(uint *)(param_1 + 0x2e0) & uVar18;
    local_80[3] = local_80[3] | *(uint *)(param_1 + 0x2e4) & uVar18;
    local_80[4] = local_80[4] | *(uint *)(param_1 + 0x2e8) & uVar18;
    local_80[5] = local_80[5] | *(uint *)(param_1 + 0x2ec) & uVar18;
    local_80[6] = local_80[6] | *(uint *)(param_1 + 0x2f0) & uVar18;
    local_80[7] = local_80[7] | uVar18 & *(uint *)(param_1 + 0x2f4);
    *(undefined1 (*) [16])(param_1 + 0x300) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x310) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 800) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x330) = (undefined1  [16])0x0;
  }
  *(uint *)(param_1 + 0x33c) = uVar13;
  FUN_00584f80(lVar23,lVar25,1);
  uVar18 = (uint)((long)(uVar28 + lVar26) >> 0x3f);
  local_80[1] = *(uint *)(param_1 + 0x2dc) & uVar18 | local_80[1];
  local_80[2] = *(uint *)(param_1 + 0x2e0) & uVar18 | local_80[2];
  local_80[3] = *(uint *)(param_1 + 0x2e4) & uVar18 | local_80[3];
  local_80[4] = *(uint *)(param_1 + 0x2e8) & uVar18 | local_80[4];
  local_80[5] = *(uint *)(param_1 + 0x2ec) & uVar18 | local_80[5];
  local_80[6] = *(uint *)(param_1 + 0x2f0) & uVar18 | local_80[6];
  local_80[7] = *(uint *)(param_1 + 0x2f4) & uVar18 | local_80[7];
  local_80[0] = uVar18 & *(uint *)(param_1 + 0x2d8) | local_80[0];
  local_80[3] = local_80[3] >> 0x18 | (local_80[3] & 0xff0000) >> 8 | (local_80[3] & 0xff00) << 8 |
                local_80[3] << 0x18;
  local_80[2] = local_80[2] >> 0x18 | (local_80[2] & 0xff0000) >> 8 | (local_80[2] & 0xff00) << 8 |
                local_80[2] << 0x18;
  local_80[5] = local_80[5] >> 0x18 | (local_80[5] & 0xff0000) >> 8 | (local_80[5] & 0xff00) << 8 |
                local_80[5] << 0x18;
  local_80[4] = local_80[4] >> 0x18 | (local_80[4] & 0xff0000) >> 8 | (local_80[4] & 0xff00) << 8 |
                local_80[4] << 0x18;
  local_80[7] = local_80[7] >> 0x18 | (local_80[7] & 0xff0000) >> 8 | (local_80[7] & 0xff00) << 8 |
                local_80[7] << 0x18;
  local_80[6] = local_80[6] >> 0x18 | (local_80[6] & 0xff0000) >> 8 | (local_80[6] & 0xff00) << 8 |
                local_80[6] << 0x18;
  local_80[1] = local_80[1] >> 0x18 | (local_80[1] & 0xff0000) >> 8 | (local_80[1] & 0xff00) << 8 |
                local_80[1] << 0x18;
  local_80[0] = local_80[0] >> 0x18 | (local_80[0] & 0xff0000) >> 8 | (local_80[0] & 0xff00) << 8 |
                local_80[0] << 0x18;
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x2b8);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x2d0);
  FUN_00441860(lVar23,local_80,0x20);
  FUN_00434d50(local_80,lVar23);
  lVar25 = local_d0 - uVar22;
  lVar23 = local_c8 + lVar25;
  iVar14 = ((int)local_d8 - (int)lVar25) + 1;
  iVar15 = (int)lVar23;
  uVar18 = 0;
  do {
    uVar21 = ((-0x20 - iVar14) - iVar15) + (int)lVar23;
    uVar13 = (iVar15 + -1 + iVar14) - (int)lVar23 & uVar21;
    uVar18 = uVar18 | (uint)(*(byte *)(lVar23 + -1) ^ *(byte *)((long)local_80 + uVar27)) &
                      (int)uVar13 >> 0x1f |
                      (*(byte *)(lVar23 + -1) ^ uVar19) & ~((int)uVar21 >> 0x1f);
    uVar27 = (uVar27 + 1) - (ulong)(-1 < (int)uVar13);
    lVar23 = lVar23 + 1;
  } while (lVar23 != (ulong)(uVar22 + 0x20) + lVar25 + local_c8);
  iVar15 = ((int)(-uVar18 | uVar17) >> 0x1f) + 1;
LAB_00441cf1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar15;
}

