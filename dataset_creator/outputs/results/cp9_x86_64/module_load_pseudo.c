
undefined8 module_load(uint *param_1)

{
  uint *__s1;
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  bool bVar11;
  byte bVar12;
  char *local_250;
  ulong local_248 [65];
  long local_40;
  
  bVar12 = 0;
  __s1 = param_1 + 0x86;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = strcmp((char *)__s1,"files");
  if (iVar2 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar8 = __nss_files_functions;
LAB_0077007e:
      uVar5 = module_load_builtin(param_1,pcVar8);
      return uVar5;
    }
    goto LAB_00770258;
  }
  iVar2 = strcmp((char *)__s1,"dns");
  if (iVar2 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar8 = __nss_dns_functions;
      goto LAB_0077007e;
    }
    goto LAB_00770258;
  }
  iVar2 = asprintf(&local_250,"libnss_%s.so%s",__s1,".2");
  if (iVar2 < 0) {
LAB_0077002f:
    uVar5 = 0;
  }
  else {
    lVar3 = __libc_dlopen_mode(local_250,0x80000002);
    free(local_250);
    if (lVar3 == 0) {
      iVar2 = asprintf(&local_250,"libnss_%s-%d.%d.so",__s1,2,0x23);
      if (iVar2 < 0) goto LAB_0077002f;
      lVar3 = __libc_dlopen_mode(local_250,0x80000002);
      free(local_250);
      if (lVar3 != 0) goto LAB_0076ffab;
      LOCK();
      bVar11 = nss_module_list_lock == 0;
      if (bVar11) {
        nss_module_list_lock = 1;
      }
      UNLOCK();
      if (!bVar11) {
        __lll_lock_wait_private(&nss_module_list_lock);
      }
      uVar1 = *param_1;
      uVar5 = 1;
      if (uVar1 != 1) {
        if (uVar1 == 2) {
          uVar5 = 0;
        }
        else if (uVar1 == 0) {
          *param_1 = 2;
          uVar5 = 0;
        }
      }
      LOCK();
      UNLOCK();
    }
    else {
LAB_0076ffab:
      pcVar7 = "endaliasent";
      lVar6 = 0;
      do {
        iVar2 = asprintf(&local_250,"_nss_%s_%s",__s1,pcVar7);
        if (iVar2 < 0) {
          __libc_dlclose(lVar3);
          goto LAB_0077002f;
        }
        pcVar7 = pcVar7 + 0x13;
        uVar4 = __libc_dlsym(lVar3,local_250);
        local_248[lVar6] = uVar4;
        free(local_250);
        uVar4 = uVar4 ^ *(ulong *)(in_FS_OFFSET + 0x30);
        local_248[lVar6] = uVar4 << 0x11 | uVar4 >> 0x2f;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x40);
      LOCK();
      bVar11 = nss_module_list_lock == 0;
      if (bVar11) {
        nss_module_list_lock = 1;
      }
      UNLOCK();
      if (!bVar11) {
        __lll_lock_wait_private(&nss_module_list_lock);
      }
      if (*param_1 == 1) {
        __libc_dlclose(lVar3);
      }
      else if ((*param_1 & 0xfffffffd) == 0) {
        *(ulong *)(param_1 + 2) = local_248[0];
        lVar6 = (long)param_1 + (8 - (long)((ulong)(param_1 + 4) & 0xfffffffffffffff8));
        *(ulong *)(param_1 + 0x80) = local_248[0x3f];
        puVar9 = (undefined8 *)((long)local_248 - lVar6);
        puVar10 = (undefined8 *)((ulong)(param_1 + 4) & 0xfffffffffffffff8);
        for (uVar4 = (ulong)((int)lVar6 + 0x200U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
          puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
        }
        *(long *)(param_1 + 0x82) = lVar3;
        *param_1 = 1;
      }
      LOCK();
      UNLOCK();
      uVar5 = 1;
    }
    bVar11 = 1 < nss_module_list_lock;
    nss_module_list_lock = 0;
    if (bVar11) {
      nss_module_list_lock = 0;
      __lll_lock_wake_private(&nss_module_list_lock);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_00770258:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

