
undefined8 * __nscd_get_mapping(undefined4 param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *__ptr;
  void *__addr;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  int __fd;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  int *piVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  undefined1 auStack_1a8 [8];
  char *local_1a0;
  char *local_198;
  undefined8 *local_190;
  int local_188;
  undefined4 local_184;
  char *local_180;
  char *local_170;
  timespec local_168;
  undefined1 local_158 [16];
  iovec *local_148;
  size_t local_140;
  long *local_138;
  ulong local_130;
  undefined8 local_128;
  long local_118;
  undefined8 local_110;
  int local_108;
  iovec local_f8;
  char **local_e8;
  undefined8 local_e0;
  stat local_d8;
  long local_40;
  undefined1 *puVar11;
  
  puVar10 = auStack_1a8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_190 = param_3;
  sVar6 = strlen(param_2);
  local_180 = (char *)(sVar6 + 1);
  local_184 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  puVar11 = auStack_1a8;
  puVar4 = auStack_1a8;
  while (puVar11 != auStack_1a8 + -(sVar6 + 0x10 & 0xfffffffffffff000)) {
    puVar10 = puVar4 + -0x1000;
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    puVar11 = puVar4 + -0x1000;
    puVar4 = puVar4 + -0x1000;
  }
  uVar9 = (ulong)((uint)(sVar6 + 0x10) & 0xff0);
  lVar3 = -uVar9;
  local_198 = puVar10 + lVar3;
  if (uVar9 != 0) {
    *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  }
  puVar12 = (undefined8 *)0xffffffffffffffff;
  *(undefined8 *)(puVar10 + lVar3 + -8) = 0x7790dd;
  __fd = open_socket(param_1,param_2,local_180);
  if (__fd < 0) goto LAB_0077922e;
  local_f8.iov_len = (size_t)local_180;
  local_e8 = &local_170;
  local_148 = &local_f8;
  local_138 = &local_118;
  local_e0 = 8;
  local_128._0_4_ = 0;
  local_128._4_4_ = 0;
  local_140 = 2;
  local_110 = conversion_rate;
  local_118 = 0x14;
  local_108 = -1;
  local_130 = 0x14;
  local_158 = (undefined1  [16])0x0;
  *(undefined8 *)(puVar10 + lVar3 + -8) = 0x779195;
  local_f8.iov_base = puVar10 + lVar3;
  iVar5 = wait_on_socket(__fd,5000);
  if (iVar5 < 1) {
LAB_00779280:
    puVar12 = (undefined8 *)0xffffffffffffffff;
  }
  else {
    do {
      *(undefined8 *)(puVar10 + lVar3 + -8) = 0x7791b6;
      pcVar7 = (char *)recvmsg(__fd,(msghdr *)local_158,0x40000000);
      if (pcVar7 != (char *)0xffffffffffffffff) break;
    } while (*(int *)(in_FS_OFFSET + -0x58) == 4);
    if (((local_130 < 0x10) || (local_138 == (long *)0x0)) || (*local_138 != 0x14))
    goto LAB_00779280;
    local_188 = local_108;
    if (local_180 == pcVar7) {
      *(undefined8 *)(puVar10 + lVar3 + -8) = 0x77920c;
      iVar5 = strcmp(local_198,param_2);
      if (iVar5 != 0) goto LAB_00779214;
      *(undefined8 *)(puVar10 + lVar3 + -8) = 0x7793fe;
      iVar5 = fstat(local_188,&local_d8);
      if ((iVar5 != 0) ||
         (local_170 = (char *)local_d8.st_size, (ulong)local_d8.st_size < (char *)0x78))
      goto LAB_00779214;
LAB_007792f0:
      *(undefined8 *)(puVar10 + lVar3 + -8) = 0x77930b;
      piVar8 = (int *)mmap64((void *)0x0,(size_t)local_170,1,1,local_188,0);
      if (piVar8 == (int *)0xffffffffffffffff) goto LAB_00779214;
      if (((*piVar8 != 2) || (piVar8[1] != 0x78)) || (iVar5 = piVar8[10], iVar5 == 0)) {
LAB_007793df:
        *(undefined8 *)(puVar10 + lVar3 + -8) = 0x7793e7;
        munmap(piVar8,(size_t)local_170);
        goto LAB_00779214;
      }
      if (piVar8[3] == 0) {
        lVar2 = *(long *)(piVar8 + 4);
        *(undefined8 *)(puVar10 + lVar3 + -8) = 0x779438;
        clock_gettime(5,&local_168);
        if (lVar2 + 300U < (ulong)local_168.tv_sec) goto LAB_007793df;
        iVar5 = piVar8[10];
      }
      iVar1 = piVar8[0xb];
      local_198 = (char *)((long)iVar5 * 4 + 0xfU & 0xfffffffffffffff0);
      local_180 = local_198 + (long)iVar1 + 0x78;
      if (local_170 < local_180) goto LAB_007793df;
      local_1a0 = local_170;
      *(undefined8 *)(puVar10 + lVar3 + -8) = 0x779383;
      puVar12 = (undefined8 *)malloc(0x28);
      local_170 = local_1a0;
      if (puVar12 == (undefined8 *)0x0) goto LAB_007793df;
      iVar5 = piVar8[1];
      puVar12[4] = (long)iVar1;
      *(undefined4 *)(puVar12 + 3) = 1;
      puVar12[2] = local_180;
      *puVar12 = piVar8;
      puVar12[1] = local_198 + iVar5 + (long)piVar8;
    }
    else {
      if ((char *)(sVar6 + 9) == pcVar7) {
        *(undefined8 *)(puVar10 + lVar3 + -8) = 0x7792e1;
        iVar5 = strcmp(local_198,param_2);
        if (iVar5 == 0) goto LAB_007792f0;
      }
LAB_00779214:
      puVar12 = (undefined8 *)0xffffffffffffffff;
    }
    *(undefined8 *)(puVar10 + lVar3 + -8) = 0x779226;
    close(local_188);
  }
  *(undefined8 *)(puVar10 + lVar3 + -8) = 0x77922e;
  close(__fd);
LAB_0077922e:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = local_184;
  __ptr = (undefined8 *)*local_190;
  *local_190 = puVar12;
  if (__ptr != (undefined8 *)0x0) {
    LOCK();
    piVar8 = (int *)(__ptr + 3);
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (*piVar8 == 0) {
      if (*(int *)(__ptr + 3) != 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar10 + lVar3 + -8) = &UNK_00779475;
        __assert_fail("mapped->counter == 0","nscd_helper.c",0xf8,"__nscd_unmap");
      }
      __addr = (void *)*__ptr;
      sVar6 = __ptr[2];
      *(undefined8 *)(puVar10 + lVar3 + -8) = 0x7792bb;
      munmap(__addr,sVar6);
      *(undefined8 *)(puVar10 + lVar3 + -8) = 0x7792c3;
      free(__ptr);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar10 + lVar3 + -8) = 0x779456;
  __stack_chk_fail_local();
}

