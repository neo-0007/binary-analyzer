
/* WARNING: Removing unreachable block (ram,0x00479d1d) */
/* WARNING: Removing unreachable block (ram,0x00479d2f) */

long ossl_pool_acquire_entropy(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  size_t __nbytes;
  int *piVar6;
  void *__buf;
  ssize_t sVar7;
  int iVar8;
  int *piVar9;
  long in_FS_OFFSET;
  ulong local_e0;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = ossl_rand_pool_bytes_needed(param_1,1);
  if (lVar3 != 0) {
    iVar2 = 2;
    do {
      while( true ) {
        uVar4 = ossl_rand_pool_add_begin(param_1,lVar3);
        lVar5 = syscall(0x13e,uVar4,lVar3,0);
        if (0 < lVar5) break;
        if (((lVar5 != 0) && (piVar9 = __errno_location(), *piVar9 != 4)) ||
           (bVar1 = iVar2 < 1, iVar2 = iVar2 + -1, bVar1)) goto LAB_00479d78;
      }
      ossl_rand_pool_add_end(param_1,lVar5,lVar5 * 8);
      lVar3 = lVar3 - lVar5;
      iVar2 = 2;
    } while (lVar3 != 0);
  }
LAB_00479d78:
  local_e0 = ossl_rand_pool_entropy_available(param_1);
  if (local_e0 == 0) {
    iVar2 = wait_random_seeded();
    if (iVar2 != 0) {
      piVar9 = &random_devices;
      __nbytes = ossl_rand_pool_bytes_needed(param_1);
      local_e0 = 0;
      if (__nbytes != 0) {
        do {
          iVar2 = check_random_device(piVar9);
          if (iVar2 == 0) {
            iVar2 = open64(*(char **)(random_device_paths + local_e0 * 8),0);
            *piVar9 = iVar2;
            if (iVar2 != -1) {
              iVar2 = fstat(iVar2,&local_d8);
              if (iVar2 != -1) {
                *(__dev_t *)(piVar9 + 2) = local_d8.st_dev;
                *(__ino_t *)(piVar9 + 4) = local_d8.st_ino;
                piVar9[6] = local_d8.st_mode;
                *(__dev_t *)(piVar9 + 8) = local_d8.st_rdev;
                goto LAB_00479e59;
              }
              close(*piVar9);
              *piVar9 = -1;
            }
          }
          else {
LAB_00479e59:
            iVar2 = *piVar9;
            if (iVar2 != -1) {
              iVar8 = 2;
              do {
                while( true ) {
                  __buf = (void *)ossl_rand_pool_add_begin(param_1,__nbytes);
                  sVar7 = read(iVar2,__buf,__nbytes);
                  if (sVar7 < 1) break;
                  ossl_rand_pool_add_end(param_1,sVar7,sVar7 * 8);
                  __nbytes = __nbytes - sVar7;
                  iVar8 = 2;
                  if (__nbytes == 0) goto LAB_00479ecc;
                }
                if ((sVar7 != 0) && (piVar6 = __errno_location(), *piVar6 != 4)) goto LAB_00479ed6;
                bVar1 = 0 < iVar8;
                iVar8 = iVar8 + -1;
              } while (bVar1);
              if (sVar7 == 0) {
LAB_00479ecc:
                if (keep_random_devices_open == 0) {
LAB_00479ed6:
                  iVar2 = check_random_device(piVar9);
                  goto joined_r0x00479f73;
                }
              }
              else {
                iVar2 = check_random_device(piVar9);
joined_r0x00479f73:
                if (iVar2 != 0) {
                  close(*piVar9);
                }
                *piVar9 = -1;
              }
              __nbytes = ossl_rand_pool_bytes_needed(param_1);
            }
          }
          local_e0 = local_e0 + 1;
          piVar9 = piVar9 + 10;
        } while ((__nbytes != 0) && (local_e0 < 4));
      }
      local_e0 = ossl_rand_pool_entropy_available(param_1);
      if (local_e0 != 0) goto LAB_00479d8a;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      lVar3 = ossl_rand_pool_entropy_available(param_1);
      return lVar3;
    }
  }
  else {
LAB_00479d8a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return local_e0;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

