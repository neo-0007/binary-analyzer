
uint send_vc(long param_1,short *param_2,int param_3,short *param_4,int param_5,undefined8 *param_6,
            uint *param_7,int *param_8,undefined4 param_9,undefined8 *param_10,undefined8 *param_11,
            uint *param_12,uint *param_13,undefined4 *param_14)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  sockaddr *__addr;
  ssize_t sVar7;
  ulong uVar8;
  uint *puVar9;
  short *psVar10;
  socklen_t __len;
  uint uVar11;
  undefined8 *puVar12;
  int __count;
  ushort uVar13;
  ushort *__buf;
  uint uVar14;
  long lVar15;
  void *__buf_00;
  long in_FS_OFFSET;
  bool bVar16;
  uint *local_340;
  ushort local_2b6;
  ushort local_2b4;
  ushort local_2b2;
  uint local_2b0;
  socklen_t local_2ac;
  sockaddr local_2a8 [2];
  iovec local_288;
  short *local_278;
  long local_270;
  ushort *local_268;
  undefined8 local_260;
  short *local_258;
  long local_250;
  undefined1 local_248 [520];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __addr = (sockaddr *)__res_get_nsaddr(param_1,param_9);
  bVar2 = false;
LAB_007bc2d9:
  if (*(int *)(param_1 + 500) < 0) {
LAB_007bc2fc:
    iVar5 = socket((uint)__addr->sa_family,0x80001,0);
    *(int *)(param_1 + 500) = iVar5;
    if (iVar5 < 0) {
      *param_8 = *(int *)(in_FS_OFFSET + -0x58);
      uVar11 = 0xffffffff;
      if (param_13 != (uint *)0x0) {
        *param_13 = 0;
      }
      goto LAB_007bc5c9;
    }
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
    __len = 0x1c;
    if (__addr->sa_family == 2) {
      __len = 0x10;
    }
    iVar5 = connect(iVar5,__addr,__len);
    if (iVar5 < 0) {
      iVar5 = *(int *)(in_FS_OFFSET + -0x58);
LAB_007bc5a3:
      *param_8 = iVar5;
LAB_007bc5aa:
      __res_iclose(param_1,0);
      if (param_13 != (uint *)0x0) {
        *param_13 = 0;
      }
      uVar11 = 0;
LAB_007bc5c9:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      return uVar11;
    }
    *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) | 1;
    iVar5 = *(int *)(param_1 + 500);
  }
  else {
    if ((*(byte *)(param_1 + 0x1f8) & 1) == 0) {
LAB_007bc2f2:
      __res_iclose(param_1,0);
      goto LAB_007bc2fc;
    }
    local_2ac = 0x1c;
    iVar5 = getpeername(*(int *)(param_1 + 500),local_2a8,&local_2ac);
    if ((iVar5 < 0) || (iVar5 = sock_eq(local_2a8,__addr), iVar5 == 0)) {
      __res_iclose(param_1,0);
      *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) & 0xfffffffe;
    }
    iVar5 = *(int *)(param_1 + 500);
    if (iVar5 < 0) goto LAB_007bc2fc;
    if ((*(byte *)(param_1 + 0x1f8) & 1) == 0) goto LAB_007bc2f2;
  }
  __count = 2;
  local_288.iov_len = 2;
  local_288.iov_base = &local_2b6;
  local_270 = (long)param_3;
  lVar15 = (long)(param_3 + 2);
  if (param_4 != (short *)0x0) {
    __count = 4;
    local_260 = 2;
    local_2b4 = (ushort)param_5 << 8 | (ushort)param_5 >> 8;
    local_268 = &local_2b4;
    local_250 = (long)param_5;
    lVar15 = lVar15 + (param_5 + 2);
    local_258 = param_4;
  }
  local_2b6 = (ushort)param_3 << 8 | (ushort)param_3 >> 8;
  local_278 = param_2;
  while ((sVar7 = writev(iVar5,&local_288,__count), sVar7 == -1 &&
         (*(int *)(in_FS_OFFSET + -0x58) == 4))) {
    iVar5 = *(int *)(param_1 + 500);
  }
  if (sVar7 == lVar15) {
    bVar3 = false;
    bVar16 = false;
    bVar1 = param_4 == (short *)0x0;
    do {
      uVar8 = 2;
      local_2b6 = 2;
      __buf = &local_2b2;
      do {
        while (sVar7 = read(*(int *)(param_1 + 500),__buf,uVar8 & 0xffff), sVar7 == -1) {
          iVar5 = *(int *)(in_FS_OFFSET + -0x58);
          if (iVar5 != 4) {
LAB_007bc60a:
            *param_8 = iVar5;
            if ((bVar2) || (iVar5 != 0x68)) goto LAB_007bc5aa;
            __res_iclose(param_1,0);
            bVar2 = true;
            goto LAB_007bc2d9;
          }
          uVar8 = (ulong)local_2b6;
        }
        iVar5 = (int)sVar7;
        if (iVar5 < 1) {
          iVar5 = *(int *)(in_FS_OFFSET + -0x58);
          goto LAB_007bc60a;
        }
        __buf = (ushort *)((long)__buf + (long)iVar5);
        uVar8 = (ulong)((uint)local_2b6 - iVar5);
        local_2b6 = (ushort)((uint)local_2b6 - iVar5);
      } while (local_2b6 != 0);
      uVar13 = local_2b2 << 8 | local_2b2 >> 8;
      uVar11 = (uint)uVar13;
      uVar14 = (uint)uVar13;
      uVar4 = uVar13;
      if ((!bVar16 && !bVar1) || (param_4 == (short *)0x0)) {
        if (param_10 != (undefined8 *)0x0) {
          local_340 = param_7;
          puVar9 = &local_2b0;
          puVar12 = param_10;
          goto LAB_007bc50d;
        }
        if (param_11 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("anscp != NULL || ansp2 == NULL","res_send.c",0x2be,"send_vc");
        }
        local_340 = param_7;
        uVar6 = *param_7;
        psVar10 = (short *)*param_6;
        local_2b0 = uVar14;
        puVar12 = param_6;
        if ((int)uVar6 < (int)uVar14) goto LAB_007bc531;
      }
      else {
        local_340 = param_12;
        puVar9 = param_13;
        puVar12 = param_11;
LAB_007bc50d:
        psVar10 = (short *)*puVar12;
        *puVar9 = uVar14;
        uVar6 = *local_340;
        if ((int)uVar6 < (int)uVar14) {
          if (puVar12 == param_6) {
LAB_007bc531:
            bVar3 = true;
            uVar4 = (ushort)uVar6;
            puVar12 = param_6;
            uVar11 = uVar6;
          }
          else {
            psVar10 = (short *)malloc(0x10000);
            if (psVar10 == (short *)0x0) {
              *param_8 = 0xc;
              goto LAB_007bc5aa;
            }
            *local_340 = 0x10000;
            *puVar12 = psVar10;
            if (puVar12 == param_11) {
              *param_14 = 1;
            }
          }
        }
      }
      local_2b6 = uVar4;
      if (local_2b6 < 0xc) {
        *param_8 = 0x5a;
        goto LAB_007bc5aa;
      }
      __buf_00 = (void *)*puVar12;
      do {
        sVar7 = read(*(int *)(param_1 + 500),__buf_00,(ulong)uVar11 & 0xffff);
        iVar5 = (int)sVar7;
        if (iVar5 < 1) goto LAB_007bc599;
        __buf_00 = (void *)((long)__buf_00 + (long)iVar5);
        uVar11 = (uint)local_2b6 - iVar5;
        local_2b6 = (ushort)uVar11;
      } while (local_2b6 != 0);
      if (bVar3) {
        *(byte *)(psVar10 + 1) = *(byte *)(psVar10 + 1) | 2;
        local_2b6 = uVar13 - (short)*local_340;
        uVar11 = (uint)local_2b6;
        while (local_2b6 != 0) {
          uVar4 = 0x200;
          if ((ushort)uVar11 < 0x201) {
            uVar4 = (ushort)uVar11;
          }
          sVar7 = read(*(int *)(param_1 + 500),local_248,(ulong)uVar4);
          if ((int)sVar7 < 1) break;
          uVar11 = (uint)local_2b6 - (int)sVar7;
          local_2b6 = (ushort)uVar11;
        }
      }
      uVar11 = local_2b0;
      if ((bVar16) || (*param_2 != *psVar10)) {
        if ((!bVar1) && (*param_4 == *psVar10)) {
          if (bVar16) goto LAB_007bc5c9;
          bVar16 = *param_2 == *psVar10;
          bVar1 = !bVar16;
        }
      }
      else {
        if (bVar1) goto LAB_007bc5c9;
        bVar16 = true;
      }
    } while( true );
  }
LAB_007bc599:
  iVar5 = *(int *)(in_FS_OFFSET + -0x58);
  goto LAB_007bc5a3;
}

