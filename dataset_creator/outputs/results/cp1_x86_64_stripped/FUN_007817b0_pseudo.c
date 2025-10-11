
int FUN_007817b0(undefined8 param_1,long param_2,undefined1 *param_3,undefined4 param_4,
                long *param_5,long param_6,ulong param_7,undefined8 *param_8)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 **ppuVar13;
  undefined1 **ppuVar15;
  undefined1 **ppuVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  undefined1 *local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  int local_f0;
  int local_ec;
  ulong local_e8;
  long *local_e0;
  ulong local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  undefined8 *local_b0;
  ulong local_a8;
  undefined4 local_a0;
  int local_9c;
  uint local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_68;
  ulong local_60;
  ulong local_58;
  long local_50;
  long local_40;
  undefined1 **ppuVar14;
  
  lVar7 = 0;
  ppuVar14 = &local_118;
  ppuVar13 = &local_118;
  ppuVar16 = &local_118;
  ppuVar15 = &local_118;
  local_b0 = param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = param_5;
  local_d0 = param_6;
  local_a0 = param_4;
  plVar6 = (long *)FUN_00782db0(0x12,"services",&DAT_0094ad40,&local_8c);
  if (param_3 != (undefined1 *)0x0) {
    lVar7 = thunk_FUN_007129d0(param_3);
  }
  local_a8 = lVar7 + 2 + param_2;
  iVar4 = FUN_007094d0(local_a8);
  if ((local_a8 < 0x1001) || (iVar4 != 0)) {
    ppuVar15 = &local_118;
    while (ppuVar14 != (undefined1 **)((long)&local_118 - (local_a8 + 0x17 & 0xfffffffffffff000))) {
      ppuVar13 = (undefined1 **)((long)ppuVar15 + -0x1000);
      *(undefined8 *)((long)ppuVar15 + -8) = *(undefined8 *)((long)ppuVar15 + -8);
      ppuVar14 = (undefined1 **)((long)ppuVar15 + -0x1000);
      ppuVar15 = (undefined1 **)((long)ppuVar15 + -0x1000);
    }
    uVar21 = (ulong)((uint)(local_a8 + 0x17) & 0xff0);
    lVar10 = -uVar21;
    ppuVar16 = (undefined1 **)((long)ppuVar13 + lVar10);
    if (uVar21 != 0) {
      *(undefined8 *)((long)ppuVar13 + -8) = *(undefined8 *)((long)ppuVar13 + -8);
    }
    local_b8 = (ulong)((long)ppuVar13 + lVar10 + 0xf) & 0xfffffffffffffff0;
    local_118 = (undefined1 *)((long)&local_118 - ((long)ppuVar13 + lVar10));
    local_f0 = 1;
  }
  else {
    local_b8 = FUN_007101b0(local_a8);
    if (local_b8 == 0) {
      iVar4 = -1;
LAB_00781a66:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar4;
      }
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)ppuVar15 + -8) = 0x782117;
      FUN_00771f60();
    }
    local_f0 = 0;
    local_118 = (undefined1 *)0x0;
  }
  if (param_3 == (undefined1 *)0x0) {
    param_3 = &DAT_0083e5c2;
  }
  *(undefined8 *)((long)ppuVar16 + -8) = 0x7818e9;
  puVar8 = (undefined1 *)thunk_FUN_00713820(local_b8,param_1,param_2);
  *puVar8 = 0x2f;
  *(undefined8 *)((long)ppuVar16 + -8) = 0x7818fb;
  thunk_FUN_00713a50(puVar8 + 1,param_3,lVar7 + 1);
  local_9c = 0;
  local_e8 = (ulong)(-(int)local_d0 & 7);
  local_110 = local_d0 + param_7;
  local_c8 = local_d0 + local_e8;
LAB_00781937:
  if (plVar6 == (long *)0xffffffffffffffff) goto LAB_00781af7;
  *(undefined8 *)((long)ppuVar16 + -8) = 0x781963;
  lVar7 = FUN_00782f00(local_a0,local_b8,local_a8,plVar6,0x18);
  if (lVar7 == 0) goto LAB_00781af7;
  local_88 = *(undefined8 *)(lVar7 + 0x18);
  uVar12 = *(undefined8 *)(lVar7 + 0x20);
  lVar10 = lVar7 + 0x30;
  local_78 = *(undefined8 *)(lVar7 + 0x28);
  lVar17 = *plVar6;
  uStack_80._0_4_ = (int)uVar12;
  uStack_80._4_4_ = (int)((ulong)uVar12 >> 0x20);
  uVar21 = (long)(int)uStack_80 + (long)uStack_80._4_4_ + lVar10;
  uStack_80 = uVar12;
  if (*(uint *)(lVar17 + 8) != local_8c) {
    iVar4 = -2;
    iVar19 = 1;
    goto LAB_00781a38;
  }
  local_d8 = lVar7 + 0x18 + (long)*(int *)(lVar7 + 4);
  uVar9 = uVar21 + (long)(int)local_78 * 4;
  if (local_d8 < uVar9) {
    iVar4 = -1;
    iVar19 = 1;
    goto LAB_00781a38;
  }
  iVar19 = 1;
  iVar5 = -1;
LAB_007819d5:
  *local_b0 = 0;
  if (local_88._4_4_ == -1) {
    DAT_0094ad50 = 1;
    iVar4 = -1;
    goto LAB_00781a0c;
  }
  if (local_88._4_4_ != 1) {
    iVar4 = 0;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
    goto LAB_00781a0c;
  }
  lVar7 = (long)uStack_80._4_4_;
  lVar20 = (long)(int)local_78;
  uVar18 = (int)uStack_80 + lVar7;
  lVar17 = (long)((int)local_78 + 1) * 8;
  uVar11 = (ulong)(-((int)local_d0 + (int)(local_e8 + uVar18)) & 7);
  if (param_7 < local_e8 + uVar18 + lVar17 + uVar11) {
LAB_00781dc8:
    iVar4 = 0x22;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
  }
  else {
    lVar17 = lVar17 + local_c8;
    local_c0 = (int)uStack_80 + lVar17;
    *local_e0 = lVar17;
    local_e0[1] = local_c8;
    local_e0[3] = local_c0;
    *(undefined4 *)(local_e0 + 2) = local_78._4_4_;
    if (lVar10 == 0) {
      local_68 = lVar17;
      local_60 = uVar18;
      if ((int)local_78 < 1) {
        uVar12 = 1;
        local_ec = iVar5;
      }
      else {
        if (iVar19 != 0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)ppuVar16 + -8) = 0x782107;
          FUN_006e2220("alloca_aliases_len == 0","nscd_getserv_r.c",0xf8,"nscd_getserv_r");
        }
        lVar20 = lVar20 * 4;
        puVar8 = local_118 + lVar20;
        *(undefined8 *)((long)ppuVar16 + -8) = 0x781c1f;
        local_108 = uVar11;
        local_100 = uVar9;
        local_f8 = uVar18;
        local_ec = iVar5;
        iVar4 = FUN_007094d0(puVar8);
        if ((puVar8 < (undefined1 *)0x1001) || (iVar4 != 0)) {
          for (puVar8 = (undefined1 *)ppuVar16;
              puVar8 != (undefined1 *)((long)ppuVar16 + -(lVar20 + 0x17U & 0xfffffffffffff000));
              puVar8 = puVar8 + -0x1000) {
            *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
          }
          uVar21 = (ulong)((uint)(lVar20 + 0x17U) & 0xff0);
          lVar10 = -uVar21;
          if (uVar21 != 0) {
            *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
          }
          uVar21 = (ulong)(puVar8 + lVar10 + 0xf) & 0xfffffffffffffff0;
          local_118 = (undefined1 *)((long)ppuVar16 + ((long)local_118 - ((long)puVar8 + lVar10)));
          iVar19 = 1;
          ppuVar16 = (undefined1 **)(puVar8 + lVar10);
        }
        else {
          iVar19 = 0;
          *(undefined8 *)((long)ppuVar16 + -8) = 0x7820bf;
          uVar21 = FUN_007101b0(lVar20);
          if (uVar21 == 0) {
            iVar4 = 0xc;
            iVar5 = local_ec;
            goto LAB_00781a0c;
          }
        }
        uVar18 = local_f8 + lVar20;
        uVar12 = 2;
        uVar11 = local_108;
        uVar9 = local_100;
        local_58 = uVar21;
        local_50 = lVar20;
      }
      iVar4 = -1;
      *(undefined8 *)((long)ppuVar16 + -8) = 0x781ce3;
      local_108 = uVar11;
      local_100 = uVar9;
      local_f8 = uVar18;
      uVar9 = FUN_00782690(local_ec,&local_68,uVar12);
      iVar5 = local_ec;
      if (uVar9 != local_f8) goto LAB_00781a0c;
      lVar20 = (long)(int)local_78;
      uVar9 = local_108;
      uVar18 = local_100;
    }
    else {
      local_108 = CONCAT44(local_108._4_4_,iVar19);
      *(undefined8 *)((long)ppuVar16 + -8) = 0x781e24;
      local_100 = uVar11;
      local_f8 = uVar9;
      local_ec = iVar5;
      thunk_FUN_00713a50(lVar17,lVar10,uVar18);
      uVar9 = local_100;
      uVar18 = local_f8;
      iVar19 = (int)local_108;
    }
    uVar9 = lVar7 + uVar9 + local_c0;
    puVar3 = (undefined8 *)local_e0[1];
    iVar5 = local_ec;
    if (lVar20 < 1) {
      lVar7 = 0;
      *puVar3 = 0;
      if (local_d8 < uVar18) goto LAB_0078204e;
LAB_00781e9b:
      if (local_110 < uVar9) {
        if ((uVar18 != 0) && (iVar4 = -2, *(uint *)(*plVar6 + 8) != local_8c)) goto LAB_00781a0c;
        goto LAB_00781dc8;
      }
      if (uVar18 == 0) {
        if (lVar7 != 0) {
          uVar12 = *puVar3;
          local_d8 = CONCAT44(local_d8._4_4_,iVar19);
          local_c0 = CONCAT44(local_c0._4_4_,local_ec);
          iVar4 = -1;
          *(undefined8 *)((long)ppuVar16 + -8) = 0x782015;
          lVar10 = FUN_007825f0(local_ec,uVar12,lVar7);
          iVar5 = (int)local_c0;
          iVar19 = (int)local_d8;
          if (lVar10 != lVar7) goto LAB_00781a0c;
        }
        iVar4 = 0;
        *local_b0 = local_e0;
        goto LAB_00781a0c;
      }
      uVar12 = *puVar3;
      local_d8 = CONCAT44(local_d8._4_4_,iVar19);
      local_c0 = CONCAT44(local_c0._4_4_,local_ec);
      *(undefined8 *)((long)ppuVar16 + -8) = 0x781ecd;
      thunk_FUN_00713a50(uVar12,uVar18,lVar7);
      iVar5 = (int)local_c0;
      iVar19 = (int)local_d8;
      if ((*(char *)(*local_e0 + -1 + (long)(int)uStack_80) == '\0') &&
         (*(char *)(local_e0[3] + -1 + (long)uStack_80._4_4_) == '\0')) {
        if (0 < (long)(int)local_78) {
          lVar7 = 0;
          do {
            if (*(char *)(*(long *)(local_e0[1] + lVar7 * 8) +
                         (ulong)(*(int *)(uVar21 + lVar7 * 4) - 1)) != '\0') goto LAB_00781f03;
            lVar7 = lVar7 + 1;
          } while (lVar7 != (int)local_78);
        }
        iVar4 = 0;
        *local_b0 = local_e0;
        goto LAB_00781a0c;
      }
    }
    else {
      lVar10 = 0;
      lVar7 = 0;
      do {
        uVar11 = (ulong)*(uint *)(uVar21 + lVar10 * 4);
        puVar3[lVar10] = uVar9;
        lVar10 = lVar10 + 1;
        uVar9 = uVar9 + uVar11;
        lVar7 = lVar7 + uVar11;
      } while (lVar10 != lVar20);
      puVar3[lVar10] = 0;
      if (uVar18 + lVar7 <= local_d8) goto LAB_00781e9b;
LAB_0078204e:
      iVar4 = -1;
      if (uVar18 == 0) goto LAB_00781a0c;
    }
LAB_00781f03:
    iVar4 = (*(uint *)(*plVar6 + 8) == local_8c) - 2;
  }
LAB_00781a0c:
  if (iVar5 != -1) {
    local_c0 = CONCAT44(local_c0._4_4_,iVar19);
    *(undefined8 *)((long)ppuVar16 + -8) = 0x781a21;
    FUN_0076e4b0(iVar5);
    iVar19 = (int)local_c0;
  }
  do {
    ppuVar15 = ppuVar16;
    if (plVar6 == (long *)0xffffffffffffffff) goto joined_r0x00781d79;
    lVar17 = *plVar6;
LAB_00781a38:
    uVar2 = *(uint *)(lVar17 + 8);
    ppuVar15 = ppuVar16;
    if (uVar2 == local_8c) {
LAB_00781a3f:
      LOCK();
      plVar1 = plVar6 + 3;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        *(undefined8 *)((long)ppuVar16 + -8) = 0x781d6f;
        local_9c = iVar19;
        FUN_00782900(plVar6);
        iVar19 = local_9c;
      }
joined_r0x00781d79:
      if (iVar19 == 0) {
        *(undefined8 *)((long)ppuVar15 + -8) = 0x781d87;
        FUN_007104f0(uVar21);
      }
      if (local_f0 == 0) {
        *(undefined8 *)((long)ppuVar15 + -8) = 0x781da1;
        FUN_007104f0(local_b8);
      }
      goto LAB_00781a66;
    }
    local_8c = uVar2;
    if (((uVar2 & 1) == 0) && (local_9c = local_9c + 1, local_9c != 5)) {
      if (iVar4 == -1) goto LAB_00781a3f;
      if (iVar19 == 0) {
        *(undefined8 *)((long)ppuVar16 + -8) = 0x781ac4;
        FUN_007104f0(uVar21);
      }
      goto LAB_00781937;
    }
    LOCK();
    plVar1 = plVar6 + 3;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      local_c0 = CONCAT44(local_c0._4_4_,iVar19);
      *(undefined8 *)((long)ppuVar16 + -8) = 0x781d47;
      FUN_00782900(plVar6);
      iVar19 = (int)local_c0;
      if (iVar4 != -1) goto LAB_00781ae7;
      goto joined_r0x00781d79;
    }
    if (iVar4 == -1) goto joined_r0x00781d79;
LAB_00781ae7:
    plVar6 = (long *)0xffffffffffffffff;
    if (iVar19 == 0) {
      *(undefined8 *)((long)ppuVar16 + -8) = 0x781d18;
      FUN_007104f0(uVar21);
    }
LAB_00781af7:
    *(undefined8 *)((long)ppuVar16 + -8) = 0x781b1a;
    iVar5 = FUN_007830b0(local_b8,local_a8,local_a0,&local_88,0x18);
    if (iVar5 != -1) break;
    DAT_0094ad50 = 1;
    iVar4 = -1;
    uVar21 = 0;
    iVar19 = 0;
  } while( true );
  uVar9 = 0;
  uVar21 = 0;
  iVar19 = 0;
  lVar10 = 0;
  local_d8 = 0xffffffffffffffff;
  goto LAB_007819d5;
}

