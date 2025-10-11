
uint __netlink_request(int *param_1,undefined2 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  ssize_t sVar4;
  size_t __n;
  ulong uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  uint *puVar8;
  undefined1 *puVar9;
  size_t sVar11;
  uint uVar12;
  long lVar13;
  long in_FS_OFFSET;
  undefined1 local_10d8 [4096];
  undefined1 auStack_d8 [8];
  undefined8 *local_d0;
  uint *local_c8;
  uint local_c0;
  char local_b9;
  undefined1 local_b4 [4];
  int local_b0;
  iovec local_a8;
  msghdr local_98;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 local_52;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  long local_40;
  undefined1 *puVar10;
  
  puVar9 = auStack_d8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar10 = auStack_d8;
  puVar3 = auStack_d8;
  while (puVar10 != local_10d8) {
    puVar9 = puVar3 + -0x1000;
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    puVar10 = puVar3 + -0x1000;
    puVar3 = puVar3 + -0x1000;
  }
  *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
  local_a8.iov_len = 0x1000;
  local_c8 = (uint *)((ulong)(puVar9 + -1) & 0xfffffffffffffff0);
  local_50 = param_1[2];
  local_a8.iov_base = local_c8;
  if (param_1[2] == 0) {
    *(undefined8 *)(puVar9 + -0x18) = 0x76a9a6;
    clock_gettime(5,(timespec *)&local_98);
    param_1[2] = (int)local_98.msg_name;
    local_50 = (int)local_98.msg_name;
  }
  local_58 = 0x14;
  local_52 = 0x301;
  local_4c = 0;
  local_48 = 0;
  local_47 = 0;
  local_45 = 0;
  local_98.msg_namelen = 0;
  local_98.msg_name = &DAT_00000010;
  local_54 = param_2;
  do {
    iVar1 = *param_1;
    *(undefined8 *)(puVar9 + -0x18) = 0x76aa3b;
    sVar4 = sendto(iVar1,&local_58,0x14,0,(sockaddr *)&local_98,0xc);
    if (sVar4 != -1) {
      if (-1 < (int)sVar4) {
        goto LAB_0076aa60;
      }
      break;
    }
  } while (*(int *)(in_FS_OFFSET + -0x58) == 4);
LAB_0076ac10:
  uVar12 = 0xffffffff;
  goto LAB_0076abdd;
LAB_0076aa60:
  do {
    do {
      do {
        local_98.msg_namelen = 0xc;
        local_98.msg_iovlen = 1;
        local_98.msg_control = (void *)0x0;
        local_98.msg_controllen = 0;
        local_98.msg_flags = 0;
        local_98.msg_name = local_b4;
        local_98.msg_iov = &local_a8;
        while( true ) {
          iVar1 = *param_1;
          *(undefined8 *)(puVar9 + -0x18) = 0x76aabd;
          __n = recvmsg(iVar1,&local_98,0);
          if (__n != 0xffffffffffffffff) break;
          if (*(int *)(in_FS_OFFSET + -0x58) != 4) {
            iVar1 = *param_1;
            *(undefined8 *)(puVar9 + -0x18) = 0x76ac0e;
            __netlink_assert_response(iVar1,0xffffffffffffffff);
            goto LAB_0076ac10;
          }
        }
        iVar1 = *param_1;
        *(undefined8 *)(puVar9 + -0x18) = 0x76aad0;
        __netlink_assert_response(iVar1,__n);
        if ((long)__n < 0) goto LAB_0076ac10;
      } while (local_b0 != 0);
      uVar12 = local_98.msg_flags & 0x20;
      if (uVar12 != 0) goto LAB_0076ac10;
      lVar13 = 0;
      puVar8 = local_c8;
      sVar11 = __n;
    } while ((long)__n < 0x10);
    do {
      uVar2 = *puVar8;
      if ((uVar2 < 0x10) || (sVar11 < uVar2)) break;
      if ((puVar8[3] == param_1[1]) && (puVar8[2] == param_1[2])) {
        lVar13 = lVar13 + 1;
        if ((short)puVar8[1] == 3) {
          local_b9 = '\x01';
          goto LAB_0076ab63;
        }
        if ((short)puVar8[1] == 2) {
          if (uVar2 < 0x24) {
            uVar12 = 0xffffffff;
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 5;
          }
          else {
            uVar12 = 0xffffffff;
            *(uint *)(in_FS_OFFSET + -0x58) = -puVar8[4];
          }
          goto LAB_0076abdd;
        }
      }
      uVar5 = (ulong)(uVar2 + 3 & 0xfffffffc);
      sVar11 = sVar11 - uVar5;
      puVar8 = (uint *)((long)puVar8 + uVar5);
    } while (0xf < sVar11);
    local_b9 = '\0';
LAB_0076ab63:
    if (lVar13 != 0) {
      *(undefined8 *)(puVar9 + -0x18) = 0x76ab78;
      local_c0 = uVar12;
      puVar6 = (undefined8 *)malloc(__n + 0x20);
      if (puVar6 == (undefined8 *)0x0) goto LAB_0076ac10;
      *puVar6 = 0;
      *(undefined8 *)(puVar9 + -0x18) = 0x76aba2;
      local_d0 = puVar6;
      pvVar7 = memcpy(puVar6 + 4,local_c8,__n);
      lVar13 = *(long *)(param_1 + 4);
      local_d0[1] = pvVar7;
      iVar1 = param_1[2];
      local_d0[2] = __n;
      *(int *)(local_d0 + 3) = iVar1;
      if (lVar13 == 0) {
        *(undefined8 **)(param_1 + 4) = local_d0;
      }
      else {
        **(undefined8 **)(param_1 + 6) = local_d0;
      }
      *(undefined8 **)(param_1 + 6) = local_d0;
      uVar12 = local_c0;
    }
  } while (local_b9 == '\0');
LAB_0076abdd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -0x18) = &UNK_0076ac64;
  __stack_chk_fail_local();
}

