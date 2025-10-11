
void __check_pf(undefined1 *param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  socklen_t sVar5;
  undefined4 uVar6;
  msghdr *__message;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ssize_t sVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar16;
  uint *puVar17;
  byte bVar18;
  char cVar19;
  int *piVar20;
  undefined1 *puVar21;
  long in_FS_OFFSET;
  bool bVar22;
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
  msghdr *local_110;
  uint *local_108;
  sockaddr *local_100;
  iovec *local_f8;
  int *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  socklen_t local_c4;
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  iovec local_a8;
  msghdr local_98;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  long local_40;
  uint *puVar15;
  
  puVar13 = auStack_148;
  puVar15 = auStack_148;
  puVar14 = auStack_148;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  *param_4 = 0;
  LOCK();
  bVar22 = lock == 0;
  if (bVar22) {
    lock = 1;
  }
  UNLOCK();
  local_e8 = param_4;
  local_e0 = param_3;
  local_d8 = param_2;
  local_d0 = param_1;
  if (!bVar22) {
    local_150 = 0x76c574;
    __lll_lock_wait_private(&lock);
  }
  if (cache != (int *)0x0) {
    local_150 = 0x76c115;
    iVar8 = __nscd_get_nl_timestamp();
    puVar21 = (undefined1 *)cache;
    if ((iVar8 != 0) && (iVar8 == *cache)) {
      LOCK();
      cache[1] = cache[1] + 1;
      UNLOCK();
      piVar20 = (int *)0x0;
      goto LAB_0076c053;
    }
  }
  local_150 = 0x76bff3;
  iVar8 = socket(0x10,0x80003,0);
  puVar13 = auStack_148;
  if (-1 < iVar8) {
    local_c0[8] = '\0';
    local_c0[9] = '\0';
    local_c0[10] = '\0';
    local_c0[0xb] = '\0';
    local_c0._0_2_ = 0x10;
    local_c0[2] = '\0';
    local_c0[3] = '\0';
    local_c0[4] = '\0';
    local_c0[5] = '\0';
    local_c0[6] = '\0';
    local_c0[7] = '\0';
    local_c4 = 0xc;
    local_150 = 0x76c03d;
    iVar9 = bind(iVar8,(sockaddr *)local_c0,0xc);
    puVar13 = auStack_148;
    if (iVar9 == 0) {
      local_150 = 0x76c152;
      iVar9 = getsockname(iVar8,(sockaddr *)local_c0,&local_c4);
      puVar13 = auStack_148;
      if (iVar9 == 0) {
        uVar7 = local_c0._4_4_;
        local_58 = 0x301001600000014;
        local_110 = &local_98;
        local_4c = 0;
        local_150 = 0x76c198;
        local_120 = (undefined1 *)auStack_148;
        clock_gettime(5,(timespec *)local_110);
        local_48 = 0;
        local_47 = 0;
        local_50 = (uint)local_98.msg_name;
        local_45 = 0;
        local_b4[8] = '\0';
        local_b4[9] = '\0';
        local_b4[10] = '\0';
        local_b4[0xb] = '\0';
        local_b4._0_2_ = 0x10;
        local_b4[2] = '\0';
        local_b4[3] = '\0';
        local_b4[4] = '\0';
        local_b4[5] = '\0';
        local_b4[6] = '\0';
        local_b4[7] = '\0';
        puVar13 = auStack_148;
        while (puVar15 != (uint *)local_1148) {
          puVar14 = (uint *)((long)puVar13 + -0x1000);
          *(undefined8 *)((long)puVar13 + -8) = *(undefined8 *)((long)puVar13 + -8);
          puVar15 = (uint *)((long)puVar13 + -0x1000);
          puVar13 = (uint *)((long)puVar13 + -0x1000);
        }
        local_a8.iov_len = 0x1000;
        local_108 = puVar14;
        local_100 = (sockaddr *)local_b4;
        local_a8.iov_base = puVar14;
        do {
          puVar14[-2] = 0x76c254;
          puVar14[-1] = 0;
          sVar10 = sendto(iVar8,&local_58,0x14,0,(sockaddr *)local_b4,0xc);
          __message = local_110;
          if (sVar10 != -1) {
            if (-1 < sVar10) {
              local_f8 = &local_a8;
              local_132 = '\0';
              local_131 = 0;
              local_128 = 0x20;
              local_118 = 0;
              local_f0 = (int *)0x0;
              goto LAB_0076c2b0;
            }
            break;
          }
        } while (*(int *)(in_FS_OFFSET + -0x58) == 4);
        piVar20 = (int *)0x0;
LAB_0076c60e:
        puVar14[-2] = 0x76c616;
        puVar14[-1] = 0;
        free(piVar20);
        puVar13 = (uint *)local_120;
      }
    }
    *(undefined8 *)((long)puVar13 + -8) = 0x76c04d;
    __close_nocancel(iVar8);
  }
  puVar21 = (undefined1 *)0x0;
  piVar20 = (int *)0x0;
  goto LAB_0076c053;
LAB_0076c2b0:
  do {
    do {
      local_98.msg_iovlen = 1;
      local_98.msg_namelen = 0xc;
      local_98.msg_name = local_100;
      local_98.msg_control = (void *)0x0;
      local_98.msg_iov = local_f8;
      local_98.msg_controllen = 0;
      local_98.msg_flags = 0;
      while( true ) {
        puVar14[-2] = 0x76c316;
        puVar14[-1] = 0;
        uVar11 = recvmsg(iVar8,__message,0);
        piVar20 = local_f0;
        if (uVar11 != 0xffffffffffffffff) break;
        if (*(int *)(in_FS_OFFSET + -0x58) != 4) {
          puVar14[-2] = 0x76c60e;
          puVar14[-1] = 0;
          __netlink_assert_response(iVar8,0xffffffffffffffff);
          goto LAB_0076c60e;
        }
      }
      puVar14[-2] = 0x76c32a;
      puVar14[-1] = 0;
      __netlink_assert_response(iVar8,uVar11);
      piVar20 = local_f0;
      if (((long)uVar11 < 0) || ((local_98.msg_flags & 0x20U) != 0)) goto LAB_0076c60e;
      cVar19 = '\0';
      puVar13 = local_108;
    } while ((long)uVar11 < 0x10);
    do {
      uVar4 = *puVar13;
      if ((uVar4 < 0x10) || (uVar11 < uVar4)) break;
      if ((local_b4._4_4_ == 0) && ((uVar7 == puVar13[3] && (puVar13[2] == local_50)))) {
        if ((short)puVar13[1] == 0x14) {
          bVar18 = (byte)puVar13[4];
          if ((bVar18 & 0xf7) == 2) {
            uVar12 = (ulong)uVar4 - 0x18;
            if (uVar12 < 4) {
              local_110 = (msghdr *)0x0;
            }
            else {
              puVar17 = puVar13 + 6;
              local_110 = (msghdr *)0x0;
              do {
                uVar3 = (ushort)*puVar17;
                if ((uVar3 < 4) || (uVar12 < uVar3)) break;
                if (*(ushort *)((long)puVar17 + 2) == 1) {
                  local_110 = (msghdr *)(puVar17 + 1);
                  goto LAB_0076c437;
                }
                if (*(ushort *)((long)puVar17 + 2) == 2) {
                  local_110 = (msghdr *)(puVar17 + 1);
                }
                uVar16 = (ulong)(uVar3 + 3 & 0x1fffc);
                uVar12 = uVar12 - uVar16;
                puVar17 = (uint *)((long)puVar17 + uVar16);
              } while (3 < uVar12);
              if (local_110 != (msghdr *)0x0) {
LAB_0076c437:
                if (bVar18 == 2) {
                  if (*(uint *)&local_110->msg_name != 0x100007f) {
                    local_131 = 1;
                  }
                }
                else if (((*(uint *)&local_110->msg_name == 0) &&
                         (*(uint *)((long)&local_110->msg_name + 4) == 0)) &&
                        (local_110->msg_namelen == 0)) {
                  if (*(int *)&local_110->field_0xc != 0x1000000) {
                    local_132 = '\x01';
                  }
                }
                else {
                  local_132 = '\x01';
                }
              }
            }
            if ((local_118 == 0) || (local_128 == local_118)) {
              lVar1 = local_128 * 6;
              local_130 = CONCAT71(local_130._1_7_,bVar18);
              puVar14[-2] = 0x76c6a7;
              puVar14[-1] = 0;
              local_140 = puVar13;
              local_133 = cVar19;
              local_128 = local_128 * 2;
              local_f0 = (int *)realloc(local_f0,(lVar1 + 3) * 8);
              puVar13 = local_140;
              bVar18 = (byte)local_130;
              cVar19 = local_133;
            }
            piVar20 = local_f0;
            if (local_f0 == (int *)0x0) goto LAB_0076c60e;
            lVar1 = local_118 + 1;
            local_130 = local_118 * 0x18;
            *(ushort *)(local_f0 + local_118 * 6 + 6) =
                 CONCAT11(*(undefined1 *)((long)puVar13 + 0x11),
                          (*(byte *)((long)puVar13 + 0x12) & 0x24) != 0 |
                          *(byte *)((long)puVar13 + 0x12) >> 3 & 2);
            local_f0[local_118 * 6 + 7] = puVar13[5];
            if (bVar18 == 2) {
              (local_f0 + local_118 * 6 + 8)[0] = 0;
              (local_f0 + local_118 * 6 + 8)[1] = 0;
              local_f0[lVar1 * 6 + 4] = -0x10000;
              local_f0[local_118 * 6 + 0xb] = *(uint *)&local_110->msg_name;
              local_118 = lVar1;
            }
            else {
              sVar5 = local_110->msg_namelen;
              uVar6 = *(undefined4 *)&local_110->field_0xc;
              *(void **)(local_f0 + local_118 * 6 + 8) = local_110->msg_name;
              (local_f0 + local_118 * 6 + 10)[0] = sVar5;
              (local_f0 + local_118 * 6 + 10)[1] = uVar6;
              local_118 = lVar1;
            }
          }
        }
        else if ((short)puVar13[1] == 3) {
          cVar19 = '\x01';
        }
      }
      uVar12 = (ulong)(uVar4 + 3 & 0xfffffffc);
      uVar11 = uVar11 - uVar12;
      puVar13 = (uint *)((long)puVar13 + uVar12);
    } while (0xf < uVar11);
    puVar21 = (undefined1 *)local_f0;
  } while (cVar19 == '\0');
  if ((local_f0 == (int *)0x0) || (local_132 == '\0')) {
    puVar14[-2] = 0x76c71f;
    puVar14[-1] = 0;
    free(local_f0);
    LOCK();
    noai6ai_cached._4_4_ = noai6ai_cached._4_4_ + 2;
    UNLOCK();
    noai6ai_cached[8] = local_131;
    puVar21 = noai6ai_cached;
    noai6ai_cached[9] = local_132;
  }
  else {
    puVar14[-2] = 0x76c5ab;
    puVar14[-1] = 0;
    iVar9 = __nscd_get_nl_timestamp();
    *(int *)((long)puVar21 + 4) = 2;
    *(int *)puVar21 = iVar9;
    *(undefined1 *)((long)puVar21 + 9) = 1;
    *(undefined1 *)((long)puVar21 + 8) = local_131;
    *(long *)((long)puVar21 + 0x10) = local_118;
  }
  puVar13 = (uint *)local_120;
  *(undefined8 *)(local_120 + -8) = 0x76c5e0;
  __close_nocancel(iVar8);
  piVar20 = cache;
  cache = (int *)puVar21;
LAB_0076c053:
  iVar8 = lock;
  LOCK();
  lock = 0;
  UNLOCK();
  if (1 < iVar8) {
    *(undefined8 *)((long)puVar13 + -8) = 0x76c55c;
    __lll_lock_wake_private(&lock);
  }
  if ((int *)puVar21 == (int *)0x0) {
    *local_d0 = 1;
    *local_d8 = 1;
  }
  else {
    *local_d0 = (char)*(int *)((long)puVar21 + 8);
    *local_d8 = *(undefined1 *)((long)puVar21 + 9);
    *local_e8 = *(undefined8 *)((long)puVar21 + 0x10);
    *local_e0 = (int *)((long)puVar21 + 0x18);
    if ((piVar20 != (int *)0x0) && (piVar20[1] != 0)) {
      LOCK();
      piVar2 = piVar20 + 1;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        *(undefined8 *)((long)puVar13 + -8) = 0x76c0c9;
        free(piVar20);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)puVar13 + -8) = &UNK_0076c762;
  __stack_chk_fail_local();
}

