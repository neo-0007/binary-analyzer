
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007758a0(undefined1 *param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar14;
  uint *puVar15;
  byte bVar16;
  char cVar17;
  int *piVar18;
  int *piVar19;
  long in_FS_OFFSET;
  bool bVar20;
  undefined1 local_1148 [4088];
  undefined8 local_150;
  uint auStack_148 [2];
  uint *local_140;
  char local_133;
  char local_132;
  undefined1 local_131;
  long local_130;
  long local_128;
  undefined1 *local_120;
  long local_118;
  undefined8 **local_110;
  uint *local_108;
  undefined8 *local_100;
  uint **local_f8;
  int *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  uint *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  uint **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  long local_40;
  uint *puVar13;
  
  puVar11 = auStack_148;
  puVar13 = auStack_148;
  puVar12 = auStack_148;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  *param_4 = 0;
  LOCK();
  bVar20 = DAT_0094abe0 == 0;
  if (bVar20) {
    DAT_0094abe0 = 1;
  }
  UNLOCK();
  local_e8 = param_4;
  local_e0 = param_3;
  local_d8 = param_2;
  local_d0 = param_1;
  if (!bVar20) {
    local_150 = 0x775ea4;
    FUN_00709590(&DAT_0094abe0);
  }
  if (DAT_0094abe8 != (int *)0x0) {
    local_150 = 0x775a45;
    iVar6 = FUN_007811a0();
    piVar19 = DAT_0094abe8;
    if ((iVar6 != 0) && (iVar6 == *DAT_0094abe8)) {
      LOCK();
      DAT_0094abe8[1] = DAT_0094abe8[1] + 1;
      UNLOCK();
      piVar18 = (int *)0x0;
      goto LAB_00775983;
    }
  }
  local_150 = 0x775923;
  iVar6 = FUN_00771200(0x10,0x80003,0);
  puVar11 = auStack_148;
  if (-1 < iVar6) {
    local_b8 = 0;
    local_c0 = 0x10;
    local_c4 = 0xc;
    local_150 = 0x77596d;
    iVar7 = FUN_00770ed0(iVar6,&local_c0,0xc);
    puVar11 = auStack_148;
    if (iVar7 == 0) {
      local_150 = 0x775a82;
      iVar7 = FUN_00770fa0(iVar6,&local_c0,&local_c4);
      puVar11 = auStack_148;
      if (iVar7 == 0) {
        uVar5 = local_c0._4_4_;
        local_58 = 0x301001600000014;
        local_110 = &local_98;
        local_4c = 0;
        local_150 = 0x775ac8;
        local_120 = (undefined1 *)auStack_148;
        FUN_00767f90(5,local_110);
        local_48 = 0;
        local_47 = 0;
        local_50 = (uint)local_98;
        local_45 = 0;
        local_ac = 0;
        local_b4 = 0x10;
        puVar11 = auStack_148;
        while (puVar13 != (uint *)local_1148) {
          puVar12 = (uint *)((long)puVar11 + -0x1000);
          *(undefined8 *)((long)puVar11 + -8) = *(undefined8 *)((long)puVar11 + -8);
          puVar13 = (uint *)((long)puVar11 + -0x1000);
          puVar11 = (uint *)((long)puVar11 + -0x1000);
        }
        local_a0 = 0x1000;
        local_108 = puVar12;
        local_100 = &local_b4;
        local_a8 = puVar12;
        do {
          puVar12[-2] = 0x775b84;
          puVar12[-1] = 0;
          lVar8 = FUN_007abf40(iVar6,&local_58,0x14,0,&local_b4,0xc);
          ppuVar4 = local_110;
          if (lVar8 != -1) {
            if (-1 < lVar8) {
              local_f8 = &local_a8;
              local_132 = '\0';
              local_131 = 0;
              local_128 = 0x20;
              local_118 = 0;
              local_f0 = (int *)0x0;
              goto LAB_00775be0;
            }
            break;
          }
        } while (*(int *)(in_FS_OFFSET + -0x58) == 4);
        piVar19 = (int *)0x0;
LAB_00775f3e:
        puVar12[-2] = 0x775f46;
        puVar12[-1] = 0;
        FUN_007104f0(piVar19);
        puVar11 = (uint *)local_120;
      }
    }
    *(undefined8 *)((long)puVar11 + -8) = 0x77597d;
    FUN_0076e4b0(iVar6);
  }
  piVar19 = (int *)0x0;
  piVar18 = (int *)0x0;
  goto LAB_00775983;
LAB_00775be0:
  do {
    do {
      local_80 = 1;
      local_90 = 0xc;
      local_98 = local_100;
      local_78 = 0;
      local_88 = local_f8;
      local_70 = 0;
      local_68 = 0;
      while( true ) {
        puVar12[-2] = 0x775c46;
        puVar12[-1] = 0;
        uVar9 = FUN_00771040(iVar6,ppuVar4,0);
        piVar19 = local_f0;
        if (uVar9 != 0xffffffffffffffff) break;
        if (*(int *)(in_FS_OFFSET + -0x58) != 4) {
          puVar12[-2] = 0x775f3e;
          puVar12[-1] = 0;
          FUN_00776580(iVar6,0xffffffffffffffff);
          goto LAB_00775f3e;
        }
      }
      puVar12[-2] = 0x775c5a;
      puVar12[-1] = 0;
      FUN_00776580(iVar6,uVar9);
      piVar19 = local_f0;
      if (((long)uVar9 < 0) || ((local_68 & 0x20) != 0)) goto LAB_00775f3e;
      cVar17 = '\0';
      puVar11 = local_108;
    } while ((long)uVar9 < 0x10);
    do {
      uVar2 = *puVar11;
      if ((uVar2 < 0x10) || (uVar9 < uVar2)) break;
      if ((local_b4._4_4_ == 0) && ((uVar5 == puVar11[3] && (puVar11[2] == local_50)))) {
        if ((short)puVar11[1] == 0x14) {
          bVar16 = (byte)puVar11[4];
          if ((bVar16 & 0xf7) == 2) {
            uVar10 = (ulong)uVar2 - 0x18;
            if (uVar10 < 4) {
              local_110 = (undefined8 **)0x0;
            }
            else {
              puVar15 = puVar11 + 6;
              local_110 = (undefined8 **)0x0;
              do {
                uVar1 = (ushort)*puVar15;
                if ((uVar1 < 4) || (uVar10 < uVar1)) break;
                if (*(ushort *)((long)puVar15 + 2) == 1) {
                  local_110 = (undefined8 **)(puVar15 + 1);
                  goto LAB_00775d67;
                }
                if (*(ushort *)((long)puVar15 + 2) == 2) {
                  local_110 = (undefined8 **)(puVar15 + 1);
                }
                uVar14 = (ulong)(uVar1 + 3 & 0x1fffc);
                uVar10 = uVar10 - uVar14;
                puVar15 = (uint *)((long)puVar15 + uVar14);
              } while (3 < uVar10);
              if (local_110 != (undefined8 **)0x0) {
LAB_00775d67:
                if (bVar16 == 2) {
                  if (*(uint *)local_110 != 0x100007f) {
                    local_131 = 1;
                  }
                }
                else if (((*(uint *)local_110 == 0) && (*(uint *)((long)local_110 + 4) == 0)) &&
                        (*(uint *)(local_110 + 1) == 0)) {
                  if (*(uint *)((long)local_110 + 0xc) != 0x1000000) {
                    local_132 = '\x01';
                  }
                }
                else {
                  local_132 = '\x01';
                }
              }
            }
            if ((local_118 == 0) || (local_128 == local_118)) {
              lVar8 = local_128 * 6;
              local_130 = CONCAT71(local_130._1_7_,bVar16);
              puVar12[-2] = 0x775fd7;
              puVar12[-1] = 0;
              local_140 = puVar11;
              local_133 = cVar17;
              local_128 = local_128 * 2;
              local_f0 = (int *)FUN_00710840(local_f0,(lVar8 + 3) * 8);
              puVar11 = local_140;
              bVar16 = (byte)local_130;
              cVar17 = local_133;
            }
            piVar19 = local_f0;
            if (local_f0 == (int *)0x0) goto LAB_00775f3e;
            lVar8 = local_118 + 1;
            local_130 = local_118 * 0x18;
            *(ushort *)(local_f0 + local_118 * 6 + 6) =
                 CONCAT11(*(undefined1 *)((long)puVar11 + 0x11),
                          (*(byte *)((long)puVar11 + 0x12) & 0x24) != 0 |
                          *(byte *)((long)puVar11 + 0x12) >> 3 & 2);
            local_f0[local_118 * 6 + 7] = puVar11[5];
            if (bVar16 == 2) {
              (local_f0 + local_118 * 6 + 8)[0] = 0;
              (local_f0 + local_118 * 6 + 8)[1] = 0;
              local_f0[lVar8 * 6 + 4] = -0x10000;
              local_f0[local_118 * 6 + 0xb] = *(uint *)local_110;
              local_118 = lVar8;
            }
            else {
              puVar3 = local_110[1];
              *(undefined8 **)(local_f0 + local_118 * 6 + 8) = *local_110;
              *(undefined8 **)(local_f0 + local_118 * 6 + 10) = puVar3;
              local_118 = lVar8;
            }
          }
        }
        else if ((short)puVar11[1] == 3) {
          cVar17 = '\x01';
        }
      }
      uVar10 = (ulong)(uVar2 + 3 & 0xfffffffc);
      uVar9 = uVar9 - uVar10;
      puVar11 = (uint *)((long)puVar11 + uVar10);
    } while (0xf < uVar9);
    piVar19 = local_f0;
  } while (cVar17 == '\0');
  if ((local_f0 == (int *)0x0) || (local_132 == '\0')) {
    puVar12[-2] = 0x77604f;
    puVar12[-1] = 0;
    FUN_007104f0(local_f0);
    LOCK();
    _DAT_0093ea34 = _DAT_0093ea34 + 2;
    UNLOCK();
    DAT_0093ea38 = local_131;
    piVar19 = (int *)&DAT_0093ea30;
    DAT_0093ea39 = local_132;
  }
  else {
    puVar12[-2] = 0x775edb;
    puVar12[-1] = 0;
    iVar7 = FUN_007811a0();
    piVar19[1] = 2;
    *piVar19 = iVar7;
    *(undefined1 *)((long)piVar19 + 9) = 1;
    *(undefined1 *)(piVar19 + 2) = local_131;
    *(long *)(piVar19 + 4) = local_118;
  }
  puVar11 = (uint *)local_120;
  *(undefined8 *)(local_120 + -8) = 0x775f10;
  FUN_0076e4b0(iVar6);
  piVar18 = DAT_0094abe8;
  DAT_0094abe8 = piVar19;
LAB_00775983:
  iVar6 = DAT_0094abe0;
  LOCK();
  DAT_0094abe0 = 0;
  UNLOCK();
  if (1 < iVar6) {
    *(undefined8 *)((long)puVar11 + -8) = 0x775e8c;
    FUN_00709660(&DAT_0094abe0);
  }
  if (piVar19 == (int *)0x0) {
    *local_d0 = 1;
    *local_d8 = 1;
  }
  else {
    *local_d0 = (char)piVar19[2];
    *local_d8 = *(undefined *)((long)piVar19 + 9);
    *local_e8 = *(undefined8 *)(piVar19 + 4);
    *local_e0 = piVar19 + 6;
    if ((piVar18 != (int *)0x0) && (piVar18[1] != 0)) {
      LOCK();
      piVar19 = piVar18 + 1;
      *piVar19 = *piVar19 + -1;
      UNLOCK();
      if (*piVar19 == 0) {
        *(undefined8 *)((long)puVar11 + -8) = 0x7759f9;
        FUN_007104f0(piVar18);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)puVar11 + -8) = &UNK_00776092;
  FUN_00771f60();
}

