
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int open_socket(undefined4 param_1,void *param_2,size_t param_3)

{
  size_t __n;
  long lVar1;
  bool bVar2;
  long lVar3;
  int __fd;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar9;
  undefined4 *__buf;
  long lVar10;
  long in_FS_OFFSET;
  undefined1 auStack_e8 [8];
  long local_e0;
  timespec local_d8;
  pollfd local_c0;
  undefined1 local_b8 [18];
  undefined4 local_a6;
  undefined1 local_a2;
  long local_40;
  undefined1 *puVar8;
  
  puVar8 = auStack_e8;
  puVar7 = auStack_e8;
  puVar9 = auStack_e8;
  local_e0 = CONCAT44(local_e0._4_4_,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __fd = socket(1,0x80801,0);
  if (__fd < 0) {
    __fd = -1;
  }
  else {
    __n = param_3 + 0xc;
    puVar9 = auStack_e8;
    while (puVar8 != auStack_e8 + -(param_3 + 0x23 & 0xfffffffffffff000)) {
      puVar7 = puVar9 + -0x1000;
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
      puVar8 = puVar9 + -0x1000;
      puVar9 = puVar9 + -0x1000;
    }
    uVar6 = (ulong)((uint)(param_3 + 0x23) & 0xff0);
    lVar1 = -uVar6;
    puVar9 = puVar7 + lVar1;
    if (uVar6 != 0) {
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    }
    __buf = (undefined4 *)((ulong)(puVar7 + lVar1 + 0xf) & 0xfffffffffffffff0);
    local_b8._0_2_ = 1;
    local_a6 = 0x74656b63;
    local_a2 = 0;
    local_b8[2] = DAT_00824a70;
    local_b8[3] = UNK_00824a71;
    local_b8[4] = UNK_00824a72;
    local_b8[5] = UNK_00824a73;
    local_b8[6] = UNK_00824a74;
    local_b8[7] = UNK_00824a75;
    local_b8[8] = UNK_00824a76;
    local_b8[9] = UNK_00824a77;
    local_b8._10_8_ = _UNK_00824a78;
    *(undefined8 *)(puVar7 + lVar1 + -8) = 0x778b00;
    iVar4 = connect(__fd,(sockaddr *)local_b8,0x6e);
    if ((-1 < iVar4) || (*(int *)(in_FS_OFFSET + -0x58) == 0x73)) {
      __buf[2] = (int)param_3;
      *__buf = 2;
      lVar10 = 0;
      bVar2 = true;
      __buf[1] = (undefined4)local_e0;
      *(undefined8 *)(puVar7 + lVar1 + -8) = 0x778b43;
      memcpy(__buf + 3,param_2,param_3);
      local_e0 = 0;
      while( true ) {
        *(undefined8 *)(puVar7 + lVar1 + -8) = 0x778b61;
        sVar5 = send(__fd,__buf,__n,0x4000);
        if (sVar5 != 0xffffffffffffffff) break;
        if (*(int *)(in_FS_OFFSET + -0x58) != 4) {
          if (__n == 0xffffffffffffffff) goto LAB_00778b70;
          if (*(int *)(in_FS_OFFSET + -0x58) != 0xb) goto LAB_00778c98;
          *(undefined8 *)(puVar7 + lVar1 + -8) = 0x778bc4;
          clock_gettime(0,&local_d8);
          lVar3 = local_d8.tv_nsec;
          local_c0.fd = __fd;
          if (bVar2) {
            local_c0.events = 0x1c;
            local_e0 = local_d8.tv_sec + 5;
            *(undefined8 *)(puVar7 + lVar1 + -8) = 0x778c0b;
            iVar4 = poll(&local_c0,1,5000);
            lVar10 = lVar3;
          }
          else {
            local_c0.events = 0x1c;
            *(undefined8 *)(puVar7 + lVar1 + -8) = 0x778c8c;
            iVar4 = poll(&local_c0,1,
                         (int)((lVar10 - local_d8.tv_nsec) / 1000000) +
                         ((int)local_e0 - (int)local_d8.tv_sec) * 1000);
          }
          if (iVar4 < 1) goto LAB_00778c98;
          bVar2 = false;
        }
      }
      puVar9 = puVar7 + lVar1;
      if (__n == sVar5) goto LAB_00778b70;
    }
LAB_00778c98:
    *(undefined8 *)(puVar7 + lVar1 + -8) = 0x778ca6;
    __close_nocancel(__fd);
    puVar9 = puVar7 + lVar1;
    __fd = -1;
  }
LAB_00778b70:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar9 + -8) = __readall;
    __stack_chk_fail_local();
  }
  return __fd;
}

