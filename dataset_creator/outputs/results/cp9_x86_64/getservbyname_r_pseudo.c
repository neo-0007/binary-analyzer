
int getservbyname_r(char *__name,char *__proto,servent *__result_buf,char *__buf,size_t __buflen,
                   servent **__result)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long *in_FS_OFFSET;
  void *local_70;
  int local_64;
  long local_50;
  code *local_48;
  long local_40;
  
  local_40 = in_FS_OFFSET[5];
  if (__nss_not_use_nscd_services < 1) {
    if (__nss_not_use_nscd_services == 0) goto LAB_00769482;
  }
  else {
    __nss_not_use_nscd_services = __nss_not_use_nscd_services + 1;
    if (100 < __nss_not_use_nscd_services) {
      __nss_not_use_nscd_services = 0;
LAB_00769482:
      if ((__nss_database_custom[0xe] == '\0') &&
         (local_64 = __nscd_getservbyname_r(__name,__proto,__result_buf,__buf,__buflen,__result),
         -1 < local_64)) goto LAB_007694c0;
    }
  }
  iVar3 = __nss_services_lookup2(&local_50,"getservbyname_r",0,&local_48);
  if (iVar3 == 0) {
    bVar2 = false;
    local_70 = (void *)0x0;
    lVar1 = *in_FS_OFFSET;
    do {
      _dl_mcount_wrapper_check(local_48);
      uVar4 = (*local_48)(__name,__proto,__result_buf,__buf,__buflen,lVar1 + -0x58);
      if (uVar4 == 0xfffffffe) {
        if ((int)in_FS_OFFSET[-0xb] == 0x22) {
          free(local_70);
          local_64 = 0x22;
          *__result = (servent *)0x0;
          goto LAB_007694c0;
        }
        if (!bVar2) goto LAB_007694f0;
LAB_0076942b:
        *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
        if ((*(uint *)(local_50 + 8) >> 6 & 3) != 2) {
          uVar4 = 1;
          bVar2 = true;
          goto LAB_007693c0;
        }
LAB_0076944d:
        if ((local_70 == (void *)0x0) && (local_70 = malloc(__buflen), local_70 == (void *)0x0)) {
          *(undefined4 *)(in_FS_OFFSET + -0xb) = 0xc;
          local_64 = 0xc;
          *__result = (servent *)0x0;
          goto LAB_007694c0;
        }
        uVar4 = 0xffffffff;
        bVar2 = true;
        *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
      }
      else if (bVar2) {
        if (uVar4 != 1) goto LAB_0076942b;
        bVar2 = false;
        uVar4 = 0xffffffff;
        *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
      }
      else {
LAB_007694f0:
        if (((*(uint *)(local_50 + 8) >> ((char)uVar4 * '\x02' + 4U & 0x1f) & 3) == 2) &&
           (uVar4 == 1)) goto LAB_0076944d;
        bVar2 = false;
      }
LAB_007693c0:
      iVar3 = __nss_next2(&local_50,"getservbyname_r",0,&local_48,uVar4,0);
    } while (iVar3 == 0);
    free(local_70);
    local_64 = 0;
    if (uVar4 == 1) {
      *__result = __result_buf;
      *(undefined4 *)(in_FS_OFFSET + -0xb) = 0;
      goto LAB_007694c0;
    }
    *__result = (servent *)0x0;
    if (1 < uVar4) {
      local_64 = (int)in_FS_OFFSET[-0xb];
      if ((local_64 != 0x22) || (uVar4 == 0xfffffffe)) goto LAB_007694c0;
      goto LAB_0076957a;
    }
  }
  else {
    *__result = (servent *)0x0;
    local_64 = (int)in_FS_OFFSET[-0xb];
    if (local_64 != 0x22) goto LAB_007694c0;
LAB_0076957a:
    local_64 = 0x16;
  }
  *(int *)(in_FS_OFFSET + -0xb) = local_64;
LAB_007694c0:
  if (local_40 != in_FS_OFFSET[5]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_64;
}

