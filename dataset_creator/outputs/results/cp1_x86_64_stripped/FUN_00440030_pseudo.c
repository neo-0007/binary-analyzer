
int FUN_00440030(long param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long in_FS_OFFSET;
  long local_c8;
  long local_c0;
  long local_b8;
  ulong local_b0;
  uint local_60 [8];
  long local_40;
  
  iVar28 = 0;
  uVar19 = *(ulong *)(param_1 + 0x1b8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 0x1b8) = 0xffffffffffffffff;
  uVar30 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) != 0) goto LAB_00440230;
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    if (uVar19 == 0xffffffffffffffff) {
      FUN_00498270(param_3,param_2,param_4,param_1 + 0xc0,param_1 + 0x94,0);
      FUN_0043fdd0(param_1 + 0x2b8,param_2,param_4);
      iVar28 = 1;
      goto LAB_00440230;
    }
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1bc + uVar19),*(undefined1 *)(param_1 + 0x1bd + uVar19)
                ) < 0x302) {
      if (param_4 < 0x15) goto LAB_00440230;
    }
    else {
      iVar28 = 0;
      if (param_4 < 0x25) goto LAB_00440230;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      param_2 = param_2 + 2;
      param_3 = param_3 + 2;
      param_4 = param_4 - 0x10;
      *(undefined8 *)(param_1 + 0x94) = uVar3;
      *(undefined8 *)(param_1 + 0x9c) = uVar4;
    }
    lVar17 = param_1 + 0x2d4;
    FUN_00498270(param_3,param_2,param_4,param_1 + 0xc0,param_1 + 0x94,0);
    uVar20 = (int)param_4 - 0x15;
    uVar11 = *(undefined8 *)(param_1 + 0x1f8);
    uVar12 = *(undefined8 *)(param_1 + 0x200);
    uVar3 = *(undefined8 *)(param_1 + 0x208);
    uVar4 = *(undefined8 *)(param_1 + 0x210);
    uVar5 = *(undefined8 *)(param_1 + 0x228);
    uVar6 = *(undefined8 *)(param_1 + 0x230);
    uVar7 = *(undefined8 *)(param_1 + 0x238);
    uVar8 = *(undefined8 *)(param_1 + 0x240);
    uVar25 = 0xff - uVar20 >> 0x18 | uVar20 & 0xff;
    uVar9 = *(undefined8 *)(param_1 + 0x248);
    uVar10 = *(undefined8 *)(param_1 + 0x250);
    uVar20 = uVar25 - *(byte *)((long)param_2 + (param_4 - 1));
    uVar16 = (int)uVar20 >> 0x1f & uVar25;
    lVar18 = param_1 + 0x2b8;
    local_c8 = param_4 - (uVar16 + 0x15);
    *(char *)(param_1 + 0x1be + uVar19) = (char)((ulong)local_c8 >> 8);
    *(char *)(param_1 + 0x1bf + uVar19) = (char)local_c8;
    *(undefined8 *)(param_1 + 0x2b8) = uVar11;
    *(undefined8 *)(param_1 + 0x2c0) = uVar12;
    *(undefined8 *)(param_1 + 0x2c8) = uVar3;
    *(undefined8 *)(param_1 + 0x2d0) = uVar4;
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x2e8) = uVar5;
    *(undefined8 *)(param_1 + 0x2f0) = uVar6;
    *(undefined8 *)(param_1 + 0x2f8) = uVar7;
    *(undefined8 *)(param_1 + 0x300) = uVar8;
    *(undefined8 *)(param_1 + 0x308) = uVar9;
    *(undefined8 *)(param_1 + 0x310) = uVar10;
    FUN_0043fdd0(lVar18,param_1 + 0x1c0,uVar19);
    uVar19 = param_4 - 0x14;
    if (uVar19 < 0x140) {
      uVar21 = *(uint *)(param_1 + 0x314);
      uVar13 = *(int *)(param_1 + 0x2cc) + (int)local_c8 * 8;
      uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
               uVar13 * 0x1000000;
      puVar31 = param_2;
LAB_004403e8:
      local_60[4] = 0;
      local_60[2] = 0;
      local_60[3] = 0;
      local_60[0] = 0;
      local_60[1] = 0;
      lVar29 = -local_c8;
      do {
        uVar15 = (ulong)uVar21;
        uVar21 = uVar21 + 1;
        bVar2 = (byte)((ulong)lVar29 >> 0x38);
        *(byte *)(param_1 + 0x2d4 + uVar15) =
             ~((byte)((ulong)-lVar29 >> 0x38) | bVar2) & 0x80 |
             *(byte *)((long)puVar31 + lVar29 + local_c8) & bVar2;
        if (uVar21 == 0x40) {
          uVar21 = (uint)((ulong)(7 - lVar29) >> 0x20);
          *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) | uVar13 & (int)uVar21 >> 0x1f;
          FUN_00578400(lVar18,lVar17,1);
          uVar21 = (int)((uint)((ulong)(lVar29 + -0x48) >> 0x20) & uVar21) >> 0x1f;
          local_60[0] = local_60[0] | *(uint *)(param_1 + 0x2b8) & uVar21;
          local_60[1] = local_60[1] | *(uint *)(param_1 + 700) & uVar21;
          local_60[2] = local_60[2] | *(uint *)(param_1 + 0x2c0) & uVar21;
          local_60[4] = local_60[4] | uVar21 & *(uint *)(param_1 + 0x2c8);
          local_60[3] = local_60[3] | *(uint *)(param_1 + 0x2c4) & uVar21;
          uVar21 = 0;
        }
        lVar29 = lVar29 + 1;
      } while ((ulong)(local_c8 + lVar29) < uVar19);
      uVar15 = 1;
      if (uVar19 != 0) {
        uVar15 = uVar19;
      }
    }
    else {
      lVar29 = (ulong)(0x40 - *(int *)(param_1 + 0x314)) + (param_4 - 0x154 & 0xffffffffffffffc0);
      puVar31 = (undefined8 *)((long)param_2 + lVar29);
      FUN_0043fdd0(lVar18,param_2,lVar29);
      local_c8 = local_c8 - lVar29;
      local_60[0] = 0;
      local_60[1] = 0;
      local_60[2] = 0;
      local_60[3] = 0;
      uVar21 = *(uint *)(param_1 + 0x314);
      uVar13 = *(int *)(param_1 + 0x2cc) + (int)local_c8 * 8;
      local_60[4] = 0;
      uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
               uVar13 * 0x1000000;
      uVar15 = 0;
      uVar19 = uVar19 - lVar29;
      if (uVar19 != 0) goto LAB_004403e8;
    }
    uVar27 = (ulong)uVar21;
    if (uVar21 < 0x40) {
      puVar23 = (undefined8 *)(param_1 + 0x2d4 + uVar27);
      uVar24 = 0x40 - uVar27;
      uVar22 = (uint)uVar24;
      if (uVar22 < 8) {
        if ((uVar24 & 4) == 0) {
          if ((uVar22 != 0) && (*(undefined1 *)puVar23 = 0, (uVar24 & 2) != 0)) {
            *(undefined2 *)((long)puVar23 + ((uVar24 & 0xffffffff) - 2)) = 0;
          }
        }
        else {
          *(undefined4 *)puVar23 = 0;
          *(undefined4 *)((long)puVar23 + ((uVar24 & 0xffffffff) - 4)) = 0;
        }
      }
      else {
        *puVar23 = 0;
        *(undefined8 *)((long)puVar23 + ((uVar24 & 0xffffffff) - 8)) = 0;
        uVar22 = uVar22 + ((int)puVar23 - (int)((ulong)(puVar23 + 1) & 0xfffffffffffffff8)) &
                 0xfffffff8;
        if (7 < uVar22) {
          uVar26 = 0;
          do {
            uVar24 = (ulong)uVar26;
            uVar26 = uVar26 + 8;
            *(undefined8 *)(((ulong)(puVar23 + 1) & 0xfffffffffffffff8) + uVar24) = 0;
          } while (uVar26 < uVar22);
        }
      }
      lVar29 = -0x49 - local_c8;
      uVar15 = (uVar15 + 0x40) - uVar27;
      if (0x38 < uVar21) goto LAB_004409bf;
    }
    else {
      lVar29 = -0x49 - local_c8;
LAB_004409bf:
      uVar21 = (uint)((local_c8 + 8) - uVar15 >> 0x20);
      *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) | uVar13 & (int)uVar21 >> 0x1f;
      FUN_00578400(lVar18,lVar17,1);
      lVar1 = lVar29 + uVar15;
      uVar15 = uVar15 + 0x40;
      uVar21 = (int)((uint)((ulong)lVar1 >> 0x20) & uVar21) >> 0x1f;
      local_60[0] = local_60[0] | *(uint *)(param_1 + 0x2b8) & uVar21;
      local_60[2] = local_60[2] | *(uint *)(param_1 + 0x2c0) & uVar21;
      local_60[1] = local_60[1] | *(uint *)(param_1 + 700) & uVar21;
      local_60[3] = local_60[3] | *(uint *)(param_1 + 0x2c4) & uVar21;
      local_60[4] = local_60[4] | uVar21 & *(uint *)(param_1 + 0x2c8);
      *(undefined1 (*) [16])(param_1 + 0x2d4) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0x2e4) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0x2f4) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0x304) = (undefined1  [16])0x0;
    }
    *(uint *)(param_1 + 0x310) = uVar13;
    FUN_00578400(lVar18,lVar17,1);
    uVar21 = (uint)((long)(uVar15 + lVar29) >> 0x3f);
    local_60[1] = *(uint *)(param_1 + 700) & uVar21 | local_60[1];
    local_60[2] = *(uint *)(param_1 + 0x2c0) & uVar21 | local_60[2];
    local_60[3] = *(uint *)(param_1 + 0x2c4) & uVar21 | local_60[3];
    local_60[4] = *(uint *)(param_1 + 0x2c8) & uVar21 | local_60[4];
    local_60[0] = uVar21 & *(uint *)(param_1 + 0x2b8) | local_60[0];
    local_60[1] = local_60[1] >> 0x18 | (local_60[1] & 0xff0000) >> 8 | (local_60[1] & 0xff00) << 8
                  | local_60[1] << 0x18;
    local_60[0] = local_60[0] >> 0x18 | (local_60[0] & 0xff0000) >> 8 | (local_60[0] & 0xff00) << 8
                  | local_60[0] << 0x18;
    local_60[3] = local_60[3] >> 0x18 | (local_60[3] & 0xff0000) >> 8 | (local_60[3] & 0xff00) << 8
                  | local_60[3] << 0x18;
    local_60[2] = local_60[2] >> 0x18 | (local_60[2] & 0xff0000) >> 8 | (local_60[2] & 0xff00) << 8
                  | local_60[2] << 0x18;
    local_60[4] = local_60[4] >> 0x18 | (local_60[4] & 0xff0000) >> 8 | (local_60[4] & 0xff00) << 8
                  | local_60[4] << 0x18;
    *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 600);
    *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x260);
    *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x268);
    *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x270);
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x278);
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x280);
    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x288);
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x290);
    *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x298);
    *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x2a0);
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x2a8);
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2b0);
    FUN_0043fdd0(lVar18,local_60,0x14);
    FUN_00434750(local_60,lVar18);
    uVar21 = 0;
    lVar17 = uVar19 - uVar25;
    lVar18 = lVar17 + (long)puVar31;
    iVar14 = ((int)local_c8 - (int)lVar17) + 1;
    iVar28 = (int)lVar18;
    do {
      uVar22 = ((-0x14 - iVar14) - iVar28) + (int)lVar18;
      uVar13 = (iVar28 + -1 + iVar14) - (int)lVar18 & uVar22;
      uVar21 = uVar21 | (uint)(*(byte *)(lVar18 + -1) ^ *(byte *)((long)local_60 + uVar30)) &
                        (int)uVar13 >> 0x1f |
                        (*(byte *)(lVar18 + -1) ^ uVar16) & ~((int)uVar22 >> 0x1f);
      uVar30 = (uVar30 + 1) - (ulong)(-1 < (int)uVar13);
      lVar18 = lVar18 + 1;
    } while ((ulong)(uVar25 + 0x14) + lVar17 + (long)puVar31 != lVar18);
    iVar28 = ((int)(-uVar21 | uVar20) >> 0x1f) + 1;
    goto LAB_00440230;
  }
  uVar15 = (ulong)(0x40 - *(int *)(param_1 + 0x314));
  puVar31 = param_2;
  local_b0 = param_4;
  if (uVar19 == 0xffffffffffffffff) {
    if (uVar15 < param_4) {
      local_b8 = 0;
      uVar27 = uVar15;
      puVar23 = param_3;
      uVar19 = param_4;
LAB_0044074b:
      uVar27 = uVar19 - uVar27;
      if (0x3f < uVar27) {
        FUN_0043fdd0(param_1 + 0x2b8,puVar23,uVar15);
        FUN_0048e080(param_3,param_2,uVar27 >> 6,param_1 + 0xc0,param_1 + 0x94,param_1 + 0x2b8);
        uVar30 = uVar27 & 0xffffffffffffffc0;
        uVar16 = (int)uVar30 * 8;
        uVar20 = *(uint *)(param_1 + 0x2cc);
        local_b8 = uVar15 + local_b8 + uVar30;
        *(uint *)(param_1 + 0x2cc) = uVar16 + *(uint *)(param_1 + 0x2cc);
        puVar23 = (undefined8 *)((long)param_3 + local_b8);
        local_b0 = param_4 - uVar30;
        *(uint *)(param_1 + 0x2d0) =
             (int)(uVar27 >> 0x1d) + *(int *)(param_1 + 0x2d0) + (uint)CARRY4(uVar16,uVar20);
        puVar31 = (undefined8 *)((long)param_2 + uVar30);
      }
      goto LAB_00440107;
    }
    FUN_0043fdd0(param_1 + 0x2b8,param_3,param_4);
  }
  else {
    if ((uVar19 + 0x24 & 0xfffffffffffffff0) != param_4) goto LAB_00440230;
    uVar27 = (ulong)(0x301 < *(uint *)(param_1 + 0x1c0));
    local_b8 = uVar27 * 0x10;
    puVar23 = param_3 + uVar27 * 2;
    uVar27 = local_b8 + uVar15;
    if (local_b8 + uVar15 < uVar19) goto LAB_0044074b;
LAB_00440107:
    local_c0 = param_1 + 0xc0;
    local_c8 = param_1 + 0x94;
    lVar17 = param_1 + 0x2b8;
    FUN_0043fdd0(lVar17,puVar23,uVar19 - local_b8);
    if (param_4 != uVar19) {
      if (param_3 != param_2) {
        thunk_FUN_00713a50(puVar31,(long)param_3 + uVar30,uVar19 - uVar30);
      }
      lVar18 = (long)param_2 + uVar19;
      FUN_00434750(lVar18,lVar17);
      *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 600);
      *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x260);
      *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x268);
      *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x270);
      *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x278);
      *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x280);
      *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x288);
      *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x290);
      *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x298);
      *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x2a0);
      *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x2a8);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2b0);
      FUN_0043fdd0(lVar17,lVar18,0x14);
      FUN_00434750(lVar18,lVar17);
      uVar30 = uVar19 + 0x14;
      if (uVar30 < param_4) {
        thunk_FUN_00713720(uVar30 + (long)param_2,((uint)param_4 - 1) - (int)uVar30 & 0xff,
                           (param_4 - 0x14) - uVar19);
      }
      FUN_00498270(puVar31,puVar31,local_b0,local_c0,local_c8,1);
      iVar28 = 1;
      goto LAB_00440230;
    }
    param_3 = (undefined8 *)((long)param_3 + uVar30);
    param_2 = puVar31;
  }
  local_c0 = param_1 + 0xc0;
  local_c8 = param_1 + 0x94;
  FUN_00498270(param_3,param_2,local_b0,local_c0,local_c8,1);
  iVar28 = 1;
LAB_00440230:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar28;
}

