
int FUN_0052bf10(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long in_FS_OFFSET;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d0;
  long local_c8;
  uint local_80 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar15 = FUN_004098f0();
  uVar25 = *(ulong *)(lVar15 + 0x248);
  iVar21 = *(int *)(lVar15 + 0x23c);
  *(undefined8 *)(lVar15 + 0x248) = 0xffffffffffffffff;
  local_e8 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) != 0) {
LAB_0052bf74:
    iVar21 = 0;
    goto LAB_0052bf76;
  }
  iVar12 = FUN_004098b0(param_1);
  if (iVar12 != 0) {
    if (uVar25 == 0xffffffffffffffff) {
      lVar16 = 0;
      lVar23 = param_3;
      uVar25 = param_4;
    }
    else {
      if ((uVar25 + 0x30 & 0xfffffffffffffff0) != param_4) goto LAB_0052bf74;
      lVar16 = (ulong)(0x301 < *(uint *)(lVar15 + 0x250)) * 0x10;
      lVar23 = param_3 + lVar16;
    }
    param_1 = param_1 + 0x28;
    lVar27 = lVar15 + 0x1d4;
    lVar28 = param_2;
    local_e0 = param_4;
    if (((((DAT_0094b5a0._3_1_ & 0x20) != 0) ||
         (((DAT_0094b59c & 0x10000000) != 0 &&
          ((DAT_0094b598 & 0x40000000) != 0 || (DAT_0094b59c & 0x800) != 0)))) &&
        (uVar17 = lVar16 + (ulong)(0x40 - iVar21), uVar17 < uVar25)) &&
       (uVar26 = uVar25 - uVar17, 0x3f < uVar26)) {
      FUN_0052be60(lVar27,lVar23);
      FUN_00490980(param_3,param_2,uVar26 >> 6,lVar15,param_1,lVar27,param_3 + uVar17);
      local_e8 = uVar26 & 0xffffffffffffffc0;
      uVar13 = (int)local_e8 * 8;
      uVar19 = *(uint *)(lVar15 + 500);
      local_e0 = param_4 - local_e8;
      *(uint *)(lVar15 + 500) = uVar13 + *(uint *)(lVar15 + 500);
      lVar16 = uVar17 + local_e8;
      *(uint *)(lVar15 + 0x1f8) =
           (int)(uVar26 >> 0x1d) + *(int *)(lVar15 + 0x1f8) + (uint)CARRY4(uVar13,uVar19);
      lVar23 = param_3 + lVar16;
      lVar28 = param_2 + local_e8;
    }
    FUN_0052be60(lVar27,lVar23,uVar25 - lVar16);
    if (uVar25 == param_4) {
      FUN_00498270(local_e8 + param_3,lVar28,local_e0,lVar15,param_1,1);
      iVar21 = 1;
    }
    else {
      if (param_3 != param_2) {
        thunk_FUN_00713a50(lVar28,local_e8 + param_3,uVar25 - local_e8);
      }
      lVar16 = param_2 + uVar25;
      FUN_00434d50(lVar16,lVar27);
      *(undefined8 *)(lVar15 + 0x1d4) = *(undefined8 *)(lVar15 + 0x164);
      *(undefined8 *)(lVar15 + 0x1dc) = *(undefined8 *)(lVar15 + 0x16c);
      *(undefined8 *)(lVar15 + 0x1e4) = *(undefined8 *)(lVar15 + 0x174);
      *(undefined8 *)(lVar15 + 0x1ec) = *(undefined8 *)(lVar15 + 0x17c);
      *(undefined8 *)(lVar15 + 500) = *(undefined8 *)(lVar15 + 0x184);
      *(undefined8 *)(lVar15 + 0x1fc) = *(undefined8 *)(lVar15 + 0x18c);
      *(undefined8 *)(lVar15 + 0x204) = *(undefined8 *)(lVar15 + 0x194);
      *(undefined8 *)(lVar15 + 0x20c) = *(undefined8 *)(lVar15 + 0x19c);
      *(undefined8 *)(lVar15 + 0x214) = *(undefined8 *)(lVar15 + 0x1a4);
      *(undefined8 *)(lVar15 + 0x21c) = *(undefined8 *)(lVar15 + 0x1ac);
      *(undefined8 *)(lVar15 + 0x224) = *(undefined8 *)(lVar15 + 0x1b4);
      *(undefined8 *)(lVar15 + 0x22c) = *(undefined8 *)(lVar15 + 0x1bc);
      *(undefined8 *)(lVar15 + 0x234) = *(undefined8 *)(lVar15 + 0x1c4);
      *(undefined8 *)(lVar15 + 0x23c) = *(undefined8 *)(lVar15 + 0x1cc);
      FUN_0052be60(lVar27,lVar16,0x20);
      FUN_00434d50(lVar16,lVar27);
      uVar17 = uVar25 + 0x20;
      if (uVar17 < param_4) {
        thunk_FUN_00713720(uVar17 + param_2,((uint)param_4 - 1) - (int)uVar17 & 0xff,
                           (param_4 - 0x20) - uVar25);
      }
      FUN_00498270(lVar28,lVar28,local_e0,lVar15,param_1,1);
      iVar21 = 1;
    }
    goto LAB_0052bf76;
  }
  FUN_00498270(param_3,param_2,param_4,lVar15,param_1 + 0x28,0);
  if (uVar25 == 0xffffffffffffffff) {
    FUN_0052be60(lVar15 + 0x1d4,param_2,param_4);
    iVar21 = 1;
    goto LAB_0052bf76;
  }
  iVar21 = 0;
  uVar17 = (ulong)(0x301 < CONCAT11(*(undefined1 *)(lVar15 + 0x24c + uVar25),
                                    *(undefined1 *)(lVar15 + 0x24d + uVar25)));
  local_c8 = uVar17 * 0x10;
  if (param_4 < local_c8 + 0x21U) goto LAB_0052bf76;
  lVar27 = param_4 + uVar17 * -0x10;
  uVar10 = *(undefined8 *)(lVar15 + 0xf4);
  uVar11 = *(undefined8 *)(lVar15 + 0xfc);
  lVar16 = lVar15 + 0x1d4;
  uVar4 = *(undefined8 *)(lVar15 + 0x134);
  uVar5 = *(undefined8 *)(lVar15 + 0x13c);
  uVar6 = *(undefined8 *)(lVar15 + 0x144);
  uVar7 = *(undefined8 *)(lVar15 + 0x14c);
  local_c8 = param_2 + local_c8;
  uVar19 = (int)lVar27 - 0x21;
  uVar8 = *(undefined8 *)(lVar15 + 0x154);
  uVar9 = *(undefined8 *)(lVar15 + 0x15c);
  uVar18 = 0xff - uVar19 >> 0x18 | uVar19 & 0xff;
  uVar19 = uVar18 - *(byte *)(local_c8 + -1 + lVar27);
  uVar13 = (int)uVar19 >> 0x1f & uVar18;
  lVar23 = lVar27 - (ulong)(uVar13 + 0x21);
  *(char *)(lVar15 + 0x24f + uVar25) = (char)lVar23;
  *(char *)(lVar15 + 0x24e + uVar25) = (char)((ulong)lVar23 >> 8);
  *(undefined8 *)(lVar15 + 0x1d4) = uVar10;
  *(undefined8 *)(lVar15 + 0x1dc) = uVar11;
  *(undefined8 *)(lVar15 + 0x214) = uVar4;
  *(undefined8 *)(lVar15 + 0x21c) = uVar5;
  *(undefined8 *)(lVar15 + 0x1e4) = *(undefined8 *)(lVar15 + 0x104);
  *(undefined8 *)(lVar15 + 0x1ec) = *(undefined8 *)(lVar15 + 0x10c);
  *(undefined8 *)(lVar15 + 0x224) = uVar6;
  *(undefined8 *)(lVar15 + 0x22c) = uVar7;
  *(undefined8 *)(lVar15 + 500) = *(undefined8 *)(lVar15 + 0x114);
  *(undefined8 *)(lVar15 + 0x1fc) = *(undefined8 *)(lVar15 + 0x11c);
  *(undefined8 *)(lVar15 + 0x234) = uVar8;
  *(undefined8 *)(lVar15 + 0x23c) = uVar9;
  *(undefined8 *)(lVar15 + 0x204) = *(undefined8 *)(lVar15 + 0x124);
  *(undefined8 *)(lVar15 + 0x20c) = *(undefined8 *)(lVar15 + 300);
  FUN_0052be60(lVar16,lVar15 + 0x250,uVar25);
  local_d0 = lVar27 - 0x20;
  if (0x13f < local_d0) {
    lVar27 = (lVar27 - 0x160U & 0xffffffffffffffc0) + (ulong)(0x40 - *(int *)(lVar15 + 0x23c));
    lVar23 = lVar23 - lVar27;
    FUN_0052be60(lVar16,local_c8,lVar27);
    local_d0 = local_d0 - lVar27;
    local_c8 = local_c8 + lVar27;
  }
  uVar20 = *(uint *)(lVar15 + 0x23c);
  lVar27 = lVar15 + 0x1fc;
  uVar14 = *(int *)(lVar15 + 500) + (int)lVar23 * 8;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 * 0x1000000;
  if (local_d0 == 0) {
    local_f0 = 0;
  }
  else {
    lVar28 = -lVar23;
    do {
      uVar25 = (ulong)uVar20;
      uVar20 = uVar20 + 1;
      bVar3 = (byte)((ulong)lVar28 >> 0x38);
      *(byte *)(lVar15 + 0x1fc + uVar25) =
           ~((byte)((ulong)-lVar28 >> 0x38) | bVar3) & 0x80 |
           *(byte *)(local_c8 + lVar23 + lVar28) & bVar3;
      if (uVar20 == 0x40) {
        uVar20 = (uint)((ulong)(7 - lVar28) >> 0x20);
        *(uint *)(lVar15 + 0x238) = *(uint *)(lVar15 + 0x238) | uVar14 & (int)uVar20 >> 0x1f;
        FUN_00584f80(lVar16,lVar27,1);
        uVar20 = (int)((uint)((ulong)(lVar28 + -0x48) >> 0x20) & uVar20) >> 0x1f;
        local_80[0] = local_80[0] | *(uint *)(lVar15 + 0x1d4) & uVar20;
        local_80[1] = local_80[1] | *(uint *)(lVar15 + 0x1d8) & uVar20;
        local_80[2] = local_80[2] | *(uint *)(lVar15 + 0x1dc) & uVar20;
        local_80[3] = local_80[3] | *(uint *)(lVar15 + 0x1e0) & uVar20;
        local_80[4] = local_80[4] | *(uint *)(lVar15 + 0x1e4) & uVar20;
        local_80[5] = local_80[5] | *(uint *)(lVar15 + 0x1e8) & uVar20;
        local_80[7] = local_80[7] | uVar20 & *(uint *)(lVar15 + 0x1f0);
        local_80[6] = local_80[6] | *(uint *)(lVar15 + 0x1ec) & uVar20;
        uVar20 = 0;
      }
      lVar28 = lVar28 + 1;
    } while (local_d0 - lVar23 != lVar28);
    local_f0 = local_d0;
  }
  uVar25 = (ulong)uVar20;
  if (uVar20 < 0x40) {
    puVar2 = (undefined8 *)(lVar15 + 0x1fc + uVar25);
    uVar17 = 0x40 - uVar25;
    uVar22 = (uint)uVar17;
    if (uVar22 < 8) {
      if ((uVar17 & 4) == 0) {
        if ((uVar22 != 0) && (*(undefined1 *)puVar2 = 0, (uVar17 & 2) != 0)) {
          *(undefined2 *)((long)puVar2 + ((uVar17 & 0xffffffff) - 2)) = 0;
        }
      }
      else {
        *(undefined4 *)puVar2 = 0;
        *(undefined4 *)((long)puVar2 + ((uVar17 & 0xffffffff) - 4)) = 0;
      }
    }
    else {
      *puVar2 = 0;
      *(undefined8 *)((long)puVar2 + ((uVar17 & 0xffffffff) - 8)) = 0;
      uVar22 = uVar22 + ((int)puVar2 - (int)((ulong)(puVar2 + 1) & 0xfffffffffffffff8)) & 0xfffffff8
      ;
      if (7 < uVar22) {
        uVar24 = 0;
        do {
          uVar17 = (ulong)uVar24;
          uVar24 = uVar24 + 8;
          *(undefined8 *)(((ulong)(puVar2 + 1) & 0xfffffffffffffff8) + uVar17) = 0;
        } while (uVar24 < uVar22);
      }
    }
    lVar28 = -0x49 - lVar23;
    local_f0 = (local_f0 + 0x40) - uVar25;
    if (0x38 < uVar20) goto LAB_0052c85e;
  }
  else {
    lVar28 = -0x49 - lVar23;
LAB_0052c85e:
    uVar20 = (uint)((lVar23 + 8) - local_f0 >> 0x20);
    *(uint *)(lVar15 + 0x238) = *(uint *)(lVar15 + 0x238) | uVar14 & (int)uVar20 >> 0x1f;
    FUN_00584f80(lVar16,lVar27,1);
    lVar1 = lVar28 + local_f0;
    local_f0 = local_f0 + 0x40;
    uVar20 = (int)(uVar20 & (uint)((ulong)lVar1 >> 0x20)) >> 0x1f;
    local_80[0] = local_80[0] | *(uint *)(lVar15 + 0x1d4) & uVar20;
    local_80[1] = local_80[1] | *(uint *)(lVar15 + 0x1d8) & uVar20;
    local_80[2] = local_80[2] | *(uint *)(lVar15 + 0x1dc) & uVar20;
    local_80[3] = local_80[3] | *(uint *)(lVar15 + 0x1e0) & uVar20;
    local_80[4] = local_80[4] | *(uint *)(lVar15 + 0x1e4) & uVar20;
    local_80[5] = local_80[5] | *(uint *)(lVar15 + 0x1e8) & uVar20;
    local_80[6] = local_80[6] | *(uint *)(lVar15 + 0x1ec) & uVar20;
    local_80[7] = local_80[7] | uVar20 & *(uint *)(lVar15 + 0x1f0);
    *(undefined1 (*) [16])(lVar15 + 0x1fc) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar15 + 0x20c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar15 + 0x21c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar15 + 0x22c) = (undefined1  [16])0x0;
  }
  *(uint *)(lVar15 + 0x238) = uVar14;
  FUN_00584f80(lVar16,lVar27,1);
  uVar20 = (uint)((long)(local_f0 + lVar28) >> 0x3f);
  local_80[1] = *(uint *)(lVar15 + 0x1d8) & uVar20 | local_80[1];
  local_80[2] = *(uint *)(lVar15 + 0x1dc) & uVar20 | local_80[2];
  local_80[3] = *(uint *)(lVar15 + 0x1e0) & uVar20 | local_80[3];
  local_80[4] = *(uint *)(lVar15 + 0x1e4) & uVar20 | local_80[4];
  local_80[5] = *(uint *)(lVar15 + 0x1e8) & uVar20 | local_80[5];
  local_80[6] = *(uint *)(lVar15 + 0x1ec) & uVar20 | local_80[6];
  local_80[7] = *(uint *)(lVar15 + 0x1f0) & uVar20 | local_80[7];
  local_80[0] = uVar20 & *(uint *)(lVar15 + 0x1d4) | local_80[0];
  local_80[3] = local_80[3] >> 0x18 | (local_80[3] & 0xff0000) >> 8 | (local_80[3] & 0xff00) << 8 |
                local_80[3] << 0x18;
  local_80[2] = local_80[2] >> 0x18 | (local_80[2] & 0xff0000) >> 8 | (local_80[2] & 0xff00) << 8 |
                local_80[2] << 0x18;
  local_80[1] = local_80[1] >> 0x18 | (local_80[1] & 0xff0000) >> 8 | (local_80[1] & 0xff00) << 8 |
                local_80[1] << 0x18;
  local_80[0] = local_80[0] >> 0x18 | (local_80[0] & 0xff0000) >> 8 | (local_80[0] & 0xff00) << 8 |
                local_80[0] << 0x18;
  local_80[5] = local_80[5] >> 0x18 | (local_80[5] & 0xff0000) >> 8 | (local_80[5] & 0xff00) << 8 |
                local_80[5] << 0x18;
  local_80[4] = local_80[4] >> 0x18 | (local_80[4] & 0xff0000) >> 8 | (local_80[4] & 0xff00) << 8 |
                local_80[4] << 0x18;
  local_80[7] = local_80[7] >> 0x18 | (local_80[7] & 0xff0000) >> 8 | (local_80[7] & 0xff00) << 8 |
                local_80[7] << 0x18;
  local_80[6] = local_80[6] >> 0x18 | (local_80[6] & 0xff0000) >> 8 | (local_80[6] & 0xff00) << 8 |
                local_80[6] << 0x18;
  *(undefined8 *)(lVar15 + 0x1d4) = *(undefined8 *)(lVar15 + 0x164);
  *(undefined8 *)(lVar15 + 0x1dc) = *(undefined8 *)(lVar15 + 0x16c);
  *(undefined8 *)(lVar15 + 0x1e4) = *(undefined8 *)(lVar15 + 0x174);
  *(undefined8 *)(lVar15 + 0x1ec) = *(undefined8 *)(lVar15 + 0x17c);
  *(undefined8 *)(lVar15 + 500) = *(undefined8 *)(lVar15 + 0x184);
  *(undefined8 *)(lVar15 + 0x1fc) = *(undefined8 *)(lVar15 + 0x18c);
  *(undefined8 *)(lVar15 + 0x204) = *(undefined8 *)(lVar15 + 0x194);
  *(undefined8 *)(lVar15 + 0x20c) = *(undefined8 *)(lVar15 + 0x19c);
  *(undefined8 *)(lVar15 + 0x214) = *(undefined8 *)(lVar15 + 0x1a4);
  *(undefined8 *)(lVar15 + 0x21c) = *(undefined8 *)(lVar15 + 0x1ac);
  *(undefined8 *)(lVar15 + 0x224) = *(undefined8 *)(lVar15 + 0x1b4);
  *(undefined8 *)(lVar15 + 0x22c) = *(undefined8 *)(lVar15 + 0x1bc);
  *(undefined8 *)(lVar15 + 0x234) = *(undefined8 *)(lVar15 + 0x1c4);
  *(undefined8 *)(lVar15 + 0x23c) = *(undefined8 *)(lVar15 + 0x1cc);
  FUN_0052be60(lVar16,local_80,0x20);
  FUN_00434d50(local_80,lVar16);
  lVar16 = local_d0 - uVar18;
  iVar21 = ((int)lVar23 - (int)lVar16) + 1;
  lVar15 = local_c8 + lVar16;
  uVar20 = 0;
  iVar12 = (int)lVar15;
  do {
    uVar22 = ((-0x20 - iVar21) - iVar12) + (int)lVar15;
    uVar14 = (iVar12 + -1 + iVar21) - (int)lVar15 & uVar22;
    uVar20 = uVar20 | (uint)(*(byte *)(lVar15 + -1) ^ *(byte *)((long)local_80 + local_e8)) &
                      (int)uVar14 >> 0x1f |
                      (*(byte *)(lVar15 + -1) ^ uVar13) & ~((int)uVar22 >> 0x1f);
    local_e8 = (local_e8 + 1) - (ulong)(-1 < (int)uVar14);
    lVar15 = lVar15 + 1;
  } while (lVar15 != (ulong)(uVar18 + 0x20) + lVar16 + local_c8);
  iVar21 = ((int)(-uVar20 | uVar19) >> 0x1f) + 1;
LAB_0052bf76:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar21;
}

