
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
gethostbyname3_multi
          (undefined8 param_1,char *param_2,uint param_3,char **param_4,long param_5,long param_6,
          int *param_7,int *param_8)

{
  undefined8 *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  void *__src;
  long lVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  void *__dest;
  long in_FS_OFFSET;
  char **local_5e0;
  undefined1 local_5c8 [16];
  char *local_5b8;
  undefined8 *local_5b0;
  int local_5a4;
  long *local_5a0;
  long local_598;
  long lStack_590;
  undefined1 *local_588;
  undefined1 local_580 [136];
  long local_4f8;
  long lStack_4f0;
  undefined1 *local_4e8;
  undefined1 local_4e0 [136];
  undefined1 *local_458;
  undefined8 local_450;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 & 0xfffffff7) != 2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("af == AF_INET || af == AF_INET6","nss_files/files-hosts.c",0x7b,
                  "gethostbyname3_multi");
  }
  local_598 = _DAT_00824950;
  lStack_590 = _UNK_00824958;
  plVar8 = (long *)param_4[3];
  local_4f8 = _DAT_00824950;
  lStack_4f0 = _UNK_00824958;
  local_450 = 0x400;
  lVar10 = *plVar8;
  local_588 = local_580;
  local_4e8 = local_4e0;
  local_458 = local_448;
  if (lVar10 != 0) {
    lVar12 = 8;
    lVar15 = 0x10;
    do {
      if (lVar15 != -1) {
        if (local_598 == lVar15) {
          cVar3 = __libc_dynarray_emplace_enlarge(&local_598,local_580,8);
          if (cVar3 == '\0') {
            if (local_588 != local_580) {
              free(local_588);
            }
            lStack_590 = _UNK_00824968;
            local_598 = _DAT_00824960;
            plVar8 = (long *)param_4[3];
            local_588 = local_580;
          }
          else {
            *(long *)(local_588 + local_598 * 8) = lVar10;
            plVar8 = (long *)param_4[3];
            local_598 = local_598 + 1;
          }
        }
        else {
          *(long *)(local_588 + local_598 * 8) = lVar10;
          local_598 = local_598 + 1;
        }
      }
      lVar10 = *(long *)((long)plVar8 + lVar12);
      lVar12 = lVar12 + 8;
      lVar15 = lStack_590;
    } while (lVar10 != 0);
  }
  plVar8 = (long *)param_4[1];
  lVar10 = *plVar8;
  if (lVar10 != 0) {
    lVar15 = 0;
    do {
      if (lStack_4f0 == -1) break;
      if (lStack_4f0 == local_4f8) {
        cVar3 = __libc_dynarray_emplace_enlarge(&local_4f8,local_4e0,8);
        if (cVar3 == '\0') {
          if (local_4e8 != local_4e0) {
            free(local_4e8);
          }
          lStack_4f0 = _UNK_00824968;
          local_4f8 = _DAT_00824960;
          plVar8 = (long *)param_4[1];
          local_4e8 = local_4e0;
        }
        else {
          *(long *)(local_4e8 + local_4f8 * 8) = lVar10;
          plVar8 = (long *)param_4[1];
          local_4f8 = local_4f8 + 1;
        }
      }
      else {
        *(long *)(local_4e8 + local_4f8 * 8) = lVar10;
        local_4f8 = local_4f8 + 1;
      }
      lVar15 = lVar15 + 1;
      lVar10 = plVar8[lVar15];
    } while (lVar10 != 0);
  }
  uVar9 = (param_5 + param_6) - (long)plVar8;
  if (CARRY8((ulong)plVar8,uVar9)) {
    __libc_alloc_buffer_create_failure();
  }
  local_5e0 = &local_5b8;
  local_5c8._8_8_ = (long)plVar8 + uVar9;
  local_5c8._0_8_ = plVar8;
LAB_00772940:
  while (iVar4 = internal_getent(param_1,local_5e0,local_458,local_450,param_7,param_8,param_3),
        pcVar5 = local_5b8, iVar4 != -2) {
    if (iVar4 != 1) {
      lVar10 = local_4f8 + 1;
      lVar15 = local_4f8;
      local_5e0 = param_4;
LAB_00772e12:
      lVar12 = local_598;
      pcVar5 = (char *)__libc_alloc_buffer_alloc_array(local_5c8,8,8,local_598 + 1);
      pcVar6 = (char *)__libc_alloc_buffer_alloc_array(local_5c8,8,8,lVar10);
      if ((pcVar5 != (char *)0x0) && (pcVar6 != (char *)0x0)) {
        memcpy(pcVar5,local_588,lVar12 * 8);
        pcVar2 = pcVar5 + lVar12 * 8;
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2[4] = '\0';
        pcVar2[5] = '\0';
        pcVar2[6] = '\0';
        pcVar2[7] = '\0';
        memcpy(pcVar6,local_4e8,lVar15 * 8);
        pcVar2 = pcVar6 + lVar15 * 8;
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2[4] = '\0';
        pcVar2[5] = '\0';
        pcVar2[6] = '\0';
        pcVar2[7] = '\0';
        uVar11 = 1;
        local_5e0[3] = pcVar5;
        local_5e0[1] = pcVar6;
        goto LAB_00772cf6;
      }
      goto LAB_00772bb1;
    }
    iVar4 = strcasecmp(param_2,local_5b8);
    puVar14 = local_5b0;
    if (iVar4 == 0) {
      __src = (void *)*local_5a0;
      iVar4 = local_5a4;
      plVar8 = local_5a0;
      while (__src != (void *)0x0) {
LAB_00772a94:
        plVar8 = plVar8 + 1;
        if (param_3 == 2) {
          if (iVar4 != 4) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("tmp_result_buf.h_length == 4","nss_files/files-hosts.c",199,
                          "gethostbyname3_multi");
          }
          __dest = (void *)(local_5c8._0_8_ + 3 & 0xfffffffffffffffc);
          uVar9 = (long)__dest + 4;
          if (((ulong)local_5c8._0_8_ <= __dest) && (3 < uVar9)) goto LAB_00772a2d;
LAB_00772ad0:
          local_5c8 = (undefined1  [16])0x0;
LAB_00772ad9:
          *param_7 = 0x22;
          *param_8 = -1;
          break;
        }
        if (iVar4 != 0x10) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("tmp_result_buf.h_length == 16","nss_files/files-hosts.c",0xcc,
                        "gethostbyname3_multi");
        }
        __dest = (void *)(local_5c8._0_8_ + 3 & 0xfffffffffffffffc);
        uVar9 = (long)__dest + 0x10;
        if ((__dest < (ulong)local_5c8._0_8_) || (uVar9 < 0x10)) goto LAB_00772ad0;
LAB_00772a2d:
        if ((ulong)local_5c8._8_8_ < uVar9) goto LAB_00772ad0;
        local_5c8._0_8_ = uVar9;
        if (__dest == (void *)0x0) goto LAB_00772ad9;
        memcpy(__dest,__src,(long)iVar4);
        if (lStack_590 != -1) {
          if (lStack_590 == local_598) {
            cVar3 = __libc_dynarray_emplace_enlarge(&local_598,local_580,8);
            if (cVar3 == '\0') {
              if (local_588 != local_580) {
                free(local_588);
              }
              lStack_590 = _UNK_00824968;
              local_598 = _DAT_00824960;
              local_588 = local_580;
            }
            else {
              *(void **)(local_588 + local_598 * 8) = __dest;
              local_598 = local_598 + 1;
            }
          }
          else {
            *(void **)(local_588 + local_598 * 8) = __dest;
            local_598 = local_598 + 1;
          }
        }
        __src = (void *)*plVar8;
      }
      pcVar6 = (char *)*local_5b0;
      puVar14 = local_5b0;
      while (pcVar6 != (char *)0x0) {
LAB_00772b08:
        puVar14 = puVar14 + 1;
        uVar7 = local_5c8._0_8_;
        local_5c8 = __libc_alloc_buffer_copy_string(local_5c8._0_8_,local_5c8._8_8_,pcVar6);
        if (local_5c8._0_8_ == 0) {
          uVar7 = 0;
        }
        if (lStack_4f0 != -1) {
          if (lStack_4f0 == local_4f8) {
            cVar3 = __libc_dynarray_emplace_enlarge(&local_4f8,local_4e0,8);
            if (cVar3 == '\0') {
              if (local_4e8 != local_4e0) {
                free(local_4e8);
              }
              lStack_4f0 = _UNK_00824968;
              local_4f8 = _DAT_00824960;
              local_4e8 = local_4e0;
            }
            else {
              *(undefined8 *)(local_4e8 + local_4f8 * 8) = uVar7;
              local_4f8 = local_4f8 + 1;
            }
          }
          else {
            *(undefined8 *)(local_4e8 + local_4f8 * 8) = uVar7;
            local_4f8 = local_4f8 + 1;
          }
        }
        pcVar6 = (char *)*puVar14;
      }
      iVar4 = strcmp(*param_4,pcVar5);
      if (iVar4 != 0) {
        uVar7 = local_5c8._0_8_;
        local_5c8 = __libc_alloc_buffer_copy_string(local_5c8._0_8_,local_5c8._8_8_,pcVar5);
        if (local_5c8._0_8_ == 0) {
          uVar7 = 0;
        }
        if (lStack_4f0 != -1) {
          if (lStack_4f0 == local_4f8) {
            cVar3 = __libc_dynarray_emplace_enlarge(&local_4f8,local_4e0,8);
            if (cVar3 == '\0') {
              if (local_4e8 != local_4e0) {
                free(local_4e8);
              }
              local_4f8 = _DAT_00824960;
              lStack_4f0 = _UNK_00824968;
              lVar10 = 1;
              lVar15 = 0;
              local_4e8 = local_4e0;
              goto LAB_00772df2;
            }
            *(undefined8 *)(local_4e8 + local_4f8 * 8) = uVar7;
            local_4f8 = local_4f8 + 1;
          }
          else {
            *(undefined8 *)(local_4e8 + local_4f8 * 8) = uVar7;
            local_4f8 = local_4f8 + 1;
          }
          goto LAB_00772b87;
        }
        lVar10 = local_4f8 + 1;
        lVar15 = local_4f8;
LAB_00772df2:
        *param_7 = 0xc;
        *param_8 = -1;
        goto LAB_00772e12;
      }
LAB_00772b87:
      if ((lStack_590 == -1) || (lStack_4f0 == -1)) {
        lVar10 = local_4f8 + 1;
        lVar15 = local_4f8;
        goto LAB_00772df2;
      }
      if (local_5c8._0_8_ == 0) {
LAB_00772bb1:
        uVar11 = 0xfffffffe;
        *param_7 = 0x22;
        *param_8 = -1;
        if (local_458 != local_448) {
          free(local_458);
        }
LAB_00772be1:
        if (local_588 != local_580) {
          free(local_588);
        }
        if (local_4e8 != local_4e0) {
          free(local_4e8);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return uVar11;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
    }
    else {
      pcVar6 = (char *)*local_5b0;
      pcVar2 = pcVar6;
      puVar13 = local_5b0;
      while (pcVar2 != (char *)0x0) {
        iVar4 = strcasecmp(param_2,pcVar2);
        if (iVar4 == 0) {
          __src = (void *)*local_5a0;
          plVar8 = local_5a0;
          iVar4 = local_5a4;
          if (__src == (void *)0x0) goto LAB_00772b08;
          goto LAB_00772a94;
        }
        puVar1 = puVar13 + 1;
        puVar13 = puVar13 + 1;
        pcVar2 = (char *)*puVar1;
      }
    }
  }
  uVar11 = 0xfffffffe;
  if ((*param_8 == -1) && (*param_7 == 0x22)) {
    cVar3 = __libc_scratch_buffer_grow(&local_458);
    if (cVar3 != '\0') goto LAB_00772940;
    *param_7 = 0xc;
  }
LAB_00772cf6:
  if (local_458 != local_448) {
    free(local_458);
  }
  goto LAB_00772be1;
}

