
void __check_native(uint param_1,uint *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int __fd;
  int iVar4;
  ssize_t sVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar12;
  long in_FS_OFFSET;
  undefined1 local_10e8 [4088];
  undefined8 local_f0;
  undefined1 auStack_e8 [8];
  uint *local_e0;
  uint *local_d8;
  uint *local_d0;
  ulong local_c8;
  uint local_c0;
  uint local_bc;
  socklen_t local_b8;
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
  undefined1 *puVar11;
  
  puVar9 = auStack_e8;
  puVar11 = auStack_e8;
  puVar10 = auStack_e8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 0x76c862;
  local_d8 = param_4;
  local_d0 = param_2;
  local_c0 = param_3;
  local_bc = param_1;
  __fd = socket(0x10,0x80003,0);
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
  local_b8 = 0xc;
  if (-1 < __fd) {
    local_f0 = 0x76c8aa;
    iVar4 = bind(__fd,(sockaddr *)local_b4,0xc);
    puVar9 = auStack_e8;
    if (iVar4 == 0) {
      local_f0 = 0x76c8f2;
      iVar4 = getsockname(__fd,(sockaddr *)local_b4,&local_b8);
      puVar9 = auStack_e8;
      if (iVar4 == 0) {
        local_4c = 0;
        local_58 = 0x301001200000014;
        uVar3 = local_b4._4_4_;
        local_f0 = 0x76c926;
        clock_gettime(5,(timespec *)&local_98);
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
        puVar9 = auStack_e8;
        while (puVar11 != local_10e8) {
          puVar10 = puVar9 + -0x1000;
          *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
          puVar11 = puVar9 + -0x1000;
          puVar9 = puVar9 + -0x1000;
        }
        *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
        local_a8.iov_len = 0x1000;
        local_e0 = (uint *)((ulong)(puVar10 + -1) & 0xfffffffffffffff0);
        local_a8.iov_base = local_e0;
        do {
          *(undefined8 *)(puVar10 + -0x18) = 0x76c9e4;
          sVar5 = sendto(__fd,&local_58,0x14,0,(sockaddr *)local_b4,0xc);
          if (sVar5 != -1) {
            puVar9 = puVar10 + -0x10;
            if (-1 < sVar5) {
              goto LAB_0076ca00;
            }
            break;
          }
          puVar9 = puVar10 + -0x10;
        } while (*(int *)(in_FS_OFFSET + -0x58) == 4);
      }
    }
LAB_0076c8ae:
    *(undefined8 *)(puVar9 + -8) = 0x76c8b6;
    __close_nocancel(__fd);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -8) = &UNK_0076cc49;
  __stack_chk_fail_local();
LAB_0076ca00:
  do {
    local_98.msg_namelen = 0xc;
    local_98.msg_iovlen = 1;
    local_98.msg_control = (void *)0x0;
    local_98.msg_controllen = 0;
    local_98.msg_flags = 0;
    local_98.msg_name = (sockaddr *)local_b4;
    local_98.msg_iov = &local_a8;
    while( true ) {
      *(undefined8 *)(puVar10 + -0x18) = 0x76ca5e;
      uVar6 = recvmsg(__fd,&local_98,0);
      if (uVar6 != 0xffffffffffffffff) break;
      if (*(int *)(in_FS_OFFSET + -0x58) != 4) {
        *(undefined8 *)(puVar10 + -0x18) = 0x76cc3f;
        __netlink_assert_response(__fd,0xffffffffffffffff);
        puVar9 = puVar10 + -0x10;
        goto LAB_0076c8ae;
      }
    }
    *(undefined8 *)(puVar10 + -0x18) = 0x76ca76;
    local_c8 = uVar6;
    __netlink_assert_response(__fd,uVar6);
    puVar9 = puVar10 + -0x10;
    if (((long)local_c8 < 0) || (puVar9 = puVar10 + -0x10, (local_98.msg_flags & 0x20U) != 0))
    goto LAB_0076c8ae;
  } while ((long)local_c8 < 0x10);
  uVar6 = local_c8;
  puVar7 = local_e0;
  if (local_b4._4_4_ != 0) {
    do {
      uVar1 = *puVar7;
      if ((uVar1 < 0x10) || (uVar6 < uVar1)) break;
      uVar8 = (ulong)(uVar1 + 3 & 0xfffffffc);
      uVar6 = uVar6 - uVar8;
      puVar7 = (uint *)((long)puVar7 + uVar8);
    } while (0xf < uVar6);
    goto LAB_0076ca00;
  }
  bVar2 = false;
LAB_0076cae6:
  do {
    uVar1 = *puVar7;
    if ((uVar1 < 0x10) || (uVar6 < uVar1)) break;
    if ((uVar3 == puVar7[3]) && (local_50 == puVar7[2])) {
      if ((short)puVar7[1] == 0x10) {
        uVar12 = (uint)(*(short *)((long)puVar7 + 0x12) != 0x308 &&
                       1 < (ushort)(*(short *)((long)puVar7 + 0x12) - 0x300U));
        if (local_bc == puVar7[5]) {
          *local_d0 = uVar12;
          if (local_c0 == local_bc) {
            *local_d8 = uVar12;
            puVar9 = puVar10 + -0x10;
            goto LAB_0076c8ae;
          }
          local_bc = 0xffffffff;
LAB_0076cb53:
          uVar12 = local_bc & local_c0;
        }
        else {
          if (local_c0 != puVar7[5]) goto LAB_0076cb53;
          local_c0 = 0xffffffff;
          *local_d8 = uVar12;
          uVar12 = local_bc;
        }
        puVar9 = puVar10 + -0x10;
        if (uVar12 == 0xffffffff) goto LAB_0076c8ae;
      }
      else if ((short)puVar7[1] == 3) {
        uVar8 = (ulong)(uVar1 + 3 & 0xfffffffc);
        uVar6 = uVar6 - uVar8;
        puVar9 = puVar10 + -0x10;
        if (uVar6 < 0x10) goto LAB_0076c8ae;
        puVar7 = (uint *)((long)puVar7 + uVar8);
        bVar2 = true;
        goto LAB_0076cae6;
      }
    }
    uVar8 = (ulong)(uVar1 + 3 & 0xfffffffc);
    uVar6 = uVar6 - uVar8;
    puVar7 = (uint *)((long)puVar7 + uVar8);
  } while (0xf < uVar6);
  puVar9 = puVar10 + -0x10;
  if (bVar2) goto LAB_0076c8ae;
  goto LAB_0076ca00;
}

