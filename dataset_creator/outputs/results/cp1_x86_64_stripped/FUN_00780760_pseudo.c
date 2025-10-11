
ulong FUN_00780760(undefined8 param_1,undefined8 param_2,uint param_3,ulong *param_4,long param_5,
                  ulong param_6,undefined8 *param_7,undefined4 *param_8)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  undefined1 auStack_158 [8];
  ulong local_150;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  long local_130;
  uint local_124;
  ulong local_120;
  ulong *local_118;
  ulong local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long local_f0;
  undefined4 *local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  uint local_c0;
  int local_bc;
  uint local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88 [9];
  long local_40;
  
  puVar21 = auStack_158;
  local_c8 = param_7;
  local_e8 = param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = param_6;
  local_118 = param_4;
  local_f8 = param_5;
  local_d8 = param_2;
  local_d0 = param_1;
  local_c0 = param_3;
  if (DAT_0094ad10 < 0) {
LAB_007807d0:
    plVar9 = (long *)FUN_00782db0(0xd,"hosts",&DAT_0094ad20,&local_ac);
    local_bc = 0;
    local_124 = local_c0 & 0xfffffffd;
    local_130 = 4;
    if (local_124 != 4) {
      local_130 = 0x10;
    }
    local_108 = local_130 * 2;
    local_150 = CONCAT44((int)local_130,(uint)(local_124 != 4) * 8 + 2);
    local_110 = (ulong)(-(int)local_f8 & 7);
    local_140 = local_f8 + local_110;
    puVar21 = auStack_158;
    lStack_100 = local_108;
LAB_00780878:
    uVar3 = local_c0;
    uVar7 = local_d0;
    uVar5 = local_d8;
    if (plVar9 == (long *)0xffffffffffffffff) goto LAB_00780a61;
    *(undefined8 *)(puVar21 + -8) = 0x7808a4;
    lVar10 = FUN_00782f00(uVar3,uVar7,uVar5,plVar9,0x20);
    if (lVar10 == 0) goto LAB_00780a61;
    lVar11 = *plVar9;
    uStack_a0 = *(undefined8 *)(lVar10 + 0x20);
    local_a8 = *(undefined8 *)(lVar10 + 0x18);
    uVar5 = uStack_a0;
    local_98 = *(undefined8 *)(lVar10 + 0x28);
    uStack_90 = *(undefined8 *)(lVar10 + 0x30);
    uVar7 = uStack_90;
    uStack_a0._4_4_ = (int)((ulong)uStack_a0 >> 0x20);
    uStack_90._0_4_ = (int)*(undefined8 *)(lVar10 + 0x30);
    uStack_a0 = uVar5;
    uStack_90 = uVar7;
    if (*(uint *)(lVar11 + 8) != local_ac) {
      uVar26 = 0xfffffffe;
      goto LAB_007809cd;
    }
    lVar16 = lVar10 + 0x38;
    uVar25 = (int)uStack_a0 + lVar16;
    local_f0 = uVar25 + (long)uStack_a0._4_4_ * 4;
    local_e0 = (long)((int)uStack_90 * 4);
    if (local_124 != 4) {
      local_98._4_4_ = (int)((ulong)*(undefined8 *)(lVar10 + 0x28) >> 0x20);
      if (local_98._4_4_ == 4) {
        local_f0 = local_f0 + (int)uStack_90 * 4;
      }
      local_e0 = (long)((int)uStack_90 << 4);
    }
    local_138 = lVar10 + 0x18 + (long)*(int *)(lVar10 + 4);
    if (local_138 < (ulong)(local_f0 + local_e0)) {
      uVar26 = 0xffffffff;
      goto LAB_007809cd;
    }
    iVar8 = -1;
LAB_00780967:
    puVar6 = local_118;
    uVar26 = (ulong)local_a8._4_4_;
    *local_c8 = 0;
    if (local_a8._4_4_ == -1) {
      DAT_0094ad30 = 1;
      goto LAB_007809b0;
    }
    if (local_a8._4_4_ != 1) {
      uVar26 = 0;
      *local_e8 = uStack_90._4_4_;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
      goto LAB_007809b0;
    }
    lVar10 = (long)(int)uStack_a0;
    uVar19 = (ulong)(-((int)local_f8 + (int)(lVar10 + local_110)) & 7);
    local_148 = (long)((int)uStack_90 << 4);
    if (local_120 <
        (long)((int)uStack_90 << 4) + (long)(uStack_a0._4_4_ + 2 + (int)uStack_90) * 8 +
        lVar10 + local_110 + uVar19) {
LAB_00780b19:
      uVar26 = 0x22;
      *local_e8 = 0xffffffff;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    }
    else {
      lVar11 = (long)(uStack_a0._4_4_ + 1) * 8;
      puVar2 = (ulong *)(local_140 + lVar11);
      local_118[3] = (ulong)puVar2;
      uVar19 = (long)(puVar2 + ((int)uStack_90 + 1)) + uVar19 + lVar10;
      local_118[2] = local_150;
      *local_118 = (ulong)(puVar2 + ((int)uStack_90 + 1));
      local_118[1] = local_140;
      puVar13 = puVar2;
      if (0 < (int)uStack_90) {
        uVar24 = (ulong)(int)uStack_90;
        if ((int)uStack_90 == 1) {
          uVar15 = 0;
          uVar17 = uVar19;
LAB_00780c3b:
          puVar2[uVar15] = uVar17;
        }
        else {
          puVar12 = (ulong *)(lVar11 + local_110 + local_f8);
          puVar13 = puVar12;
          uVar17 = uVar19;
          uVar15 = local_130 + uVar19;
          do {
            puVar14 = puVar13 + 2;
            *puVar13 = uVar17;
            puVar13[1] = uVar15;
            puVar13 = puVar14;
            uVar17 = uVar17 + local_108;
            uVar15 = uVar15 + lStack_100;
          } while (puVar12 + (uVar24 & 0xfffffffffffffffe) != puVar14);
          uVar15 = uVar24 & 0xfffffffffffffffe;
          uVar17 = local_130 * uVar15 + uVar19;
          if (uVar15 != uVar24) goto LAB_00780c3b;
        }
        uVar19 = uVar19 + uVar24 * local_130;
        puVar13 = puVar2 + (long)((int)uStack_90 + 1) + -1;
      }
      *puVar13 = 0;
      if (lVar16 == 0) {
        local_88[1] = lVar10;
        local_88[0] = *local_118;
        if (uStack_a0._4_4_ < 1) {
          iVar22 = 3;
          iVar23 = 2;
          puVar20 = puVar21;
          if (local_124 == 4) goto LAB_00780d44;
LAB_00780cf0:
          puVar21 = puVar20;
          if (local_98._4_4_ == 4) {
            uVar24 = (ulong)((int)uStack_90 << 2);
            for (puVar20 = puVar21; puVar20 != puVar21 + -(uVar24 + 0x17 & 0xfffffffffffff000);
                puVar20 = puVar20 + -0x1000) {
              *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
            }
            uVar17 = (ulong)((uint)(uVar24 + 0x17) & 0xff0);
            lVar11 = -uVar17;
            puVar21 = puVar20 + lVar11;
            if (uVar17 != 0) {
              *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
            }
            lVar10 = lVar10 + uVar24;
            local_88[uVar26 * 2 + 1] = uVar24;
            local_88[uVar26 * 2] = (ulong)(puVar20 + lVar11 + 0xf) & 0xfffffffffffffff0;
            uVar26 = (ulong)iVar23;
            iVar23 = iVar22;
          }
          local_88[uVar26 * 2] = *puVar2;
          local_88[uVar26 * 2 + 1] = local_148;
          lVar10 = local_148 + lVar10;
        }
        else {
          local_88[3] = (long)uStack_a0._4_4_ * 4;
          for (puVar20 = puVar21; puVar20 != puVar21 + -(local_88[3] + 0x17 & 0xfffffffffffff000);
              puVar20 = puVar20 + -0x1000) {
            *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
          }
          uVar26 = (ulong)((uint)(local_88[3] + 0x17) & 0xff0);
          lVar11 = -uVar26;
          puVar21 = puVar20 + lVar11;
          if (uVar26 != 0) {
            *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
          }
          lVar10 = lVar10 + local_88[3];
          iVar23 = 3;
          uVar25 = (ulong)(puVar20 + lVar11 + 0xf) & 0xfffffffffffffff0;
          iVar22 = 4;
          uVar26 = 2;
          local_88[2] = uVar25;
          puVar20 = puVar20 + lVar11;
          if (local_124 != 4) goto LAB_00780cf0;
LAB_00780d44:
          local_88[uVar26 * 2] = *puVar2;
          local_88[uVar26 * 2 + 1] = (long)((int)uStack_90 * 4);
          lVar10 = (int)uStack_90 * 4 + lVar10;
        }
        *(undefined8 *)(puVar21 + -8) = 0x780d71;
        lVar11 = FUN_00782690(iVar8,local_88,iVar23);
        if (lVar10 == lVar11) goto LAB_00780db7;
      }
      else {
        uVar26 = *local_118;
        *(undefined8 *)(puVar21 + -8) = 0x780d9d;
        thunk_FUN_00713a50(uVar26,lVar16,lVar10);
        lVar11 = local_e0;
        lVar10 = local_f0;
        uVar5 = *(undefined8 *)puVar6[3];
        *(undefined8 *)(puVar21 + -8) = 0x780db7;
        thunk_FUN_00713a50(uVar5,lVar10,lVar11);
LAB_00780db7:
        puVar4 = (undefined8 *)local_118[1];
        if ((long)uStack_a0._4_4_ < 1) {
          lVar11 = 0;
          lVar10 = local_e0;
          puVar18 = puVar4;
        }
        else {
          lVar16 = 0;
          lVar11 = 0;
          do {
            uVar26 = (ulong)*(uint *)(uVar25 + lVar16 * 4);
            puVar4[lVar16] = uVar19;
            lVar16 = lVar16 + 1;
            uVar19 = uVar19 + uVar26;
            lVar11 = lVar11 + uVar26;
          } while (lVar16 != uStack_a0._4_4_);
          lVar10 = local_e0 + lVar11;
          puVar18 = puVar4 + lVar16;
        }
        *puVar18 = 0;
        if ((ulong)(lVar10 + local_f0) <= local_138) {
          if (uVar19 <= local_f8 + local_120) {
            if (local_f0 == 0) {
              if (lVar11 != 0) {
                uVar5 = *puVar4;
                local_e0 = lVar11;
                *(undefined8 *)(puVar21 + -8) = 0x780fee;
                lVar10 = FUN_007825f0(iVar8,uVar5);
                if (local_e0 != lVar10) goto LAB_00780d76;
              }
            }
            else {
              uVar5 = *puVar4;
              lVar10 = local_f0 + local_e0;
              *(undefined8 *)(puVar21 + -8) = 0x780e58;
              thunk_FUN_00713a50(uVar5,lVar10);
              if (*(char *)((*local_118 - 1) + (long)(int)uStack_a0) != '\0') goto LAB_00780e74;
              if (0 < (long)uStack_a0._4_4_) {
                lVar10 = 0;
                do {
                  if (*(char *)(*(long *)(local_118[1] + lVar10 * 8) +
                               (ulong)(*(int *)(uVar25 + lVar10 * 4) - 1)) != '\0')
                  goto LAB_00780e74;
                  lVar10 = lVar10 + 1;
                } while (lVar10 != uStack_a0._4_4_);
              }
            }
            uVar26 = 0;
            *local_c8 = local_118;
            goto LAB_007809b0;
          }
          if ((local_f0 != 0) && (*(uint *)(*plVar9 + 8) != local_ac)) goto LAB_00780e86;
          goto LAB_00780b19;
        }
        if (local_f0 != 0) {
LAB_00780e74:
          if (*(uint *)(*plVar9 + 8) != local_ac) {
LAB_00780e86:
            uVar26 = 0xfffffffe;
            goto LAB_007809b0;
          }
        }
      }
LAB_00780d76:
      uVar26 = 0xffffffff;
    }
LAB_007809b0:
    if (iVar8 != -1) {
      *(undefined8 *)(puVar21 + -8) = 0x7809be;
      FUN_0076e4b0(iVar8);
    }
    do {
      if (plVar9 == (long *)0xffffffffffffffff) goto LAB_007809e0;
      lVar11 = *plVar9;
LAB_007809cd:
      uVar3 = *(uint *)(lVar11 + 8);
      if (uVar3 == local_ac) {
        LOCK();
        plVar1 = plVar9 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
LAB_00780b50:
          *(undefined8 *)(puVar21 + -8) = 0x780b58;
          FUN_00782900(plVar9);
        }
        goto LAB_007809e0;
      }
      local_ac = uVar3;
      if (((uVar3 & 1) == 0) && (local_bc = local_bc + 1, local_bc != 5)) {
        if ((int)uVar26 != -1) goto LAB_00780878;
        LOCK();
        plVar1 = plVar9 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) goto LAB_00780b50;
LAB_00780a3a:
        uVar26 = 0xffffffff;
        goto LAB_007809e0;
      }
      LOCK();
      plVar1 = plVar9 + 3;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        *(undefined8 *)(puVar21 + -8) = 0x780b68;
        FUN_00782900(plVar9);
      }
      if ((int)uVar26 == -1) goto LAB_00780a3a;
      plVar9 = (long *)0xffffffffffffffff;
LAB_00780a61:
      uVar3 = local_c0;
      uVar7 = local_d0;
      uVar5 = local_d8;
      *(undefined8 *)(puVar21 + -8) = 0x780a87;
      iVar8 = FUN_007830b0(uVar7,uVar5,uVar3,&local_a8,0x20);
      if (iVar8 != -1) goto code_r0x00780a93;
      DAT_0094ad30 = 1;
      uVar26 = 0xffffffff;
    } while( true );
  }
  if (DAT_0094ad10 == 0) {
    lVar10 = FUN_006e8e30("LOCALDOMAIN");
    if (lVar10 == 0) {
      DAT_0094ad10 = -1;
      goto LAB_007807d0;
    }
    DAT_0094ad10 = 1;
  }
  DAT_0094ad30 = 1;
  uVar26 = 0xffffffff;
LAB_007809e0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar26 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar21 + -8) = FUN_00781080;
  FUN_00771f60();
code_r0x00780a93:
  local_138 = 0xffffffffffffffff;
  uVar25 = 0;
  lVar16 = 0;
  local_e0 = 0;
  local_f0 = 0;
  goto LAB_00780967;
}

