
int gethostbyname2_r(char *__name,int __af,hostent *__result_buf,char *__buf,size_t __buflen,
                    hostent **__result,int *__h_errnop)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  long *in_FS_OFFSET;
  bool bVar7;
  void *local_68;
  char *local_60;
  uint local_54;
  long local_50;
  code *local_48;
  long local_40;
  
  local_40 = in_FS_OFFSET[5];
  local_54 = 0xffffffff;
  local_60 = __buf;
  lVar5 = __resolv_context_get();
  if (lVar5 == 0) {
    *__h_errnop = -1;
    *__result = (hostent *)0x0;
    iVar4 = (int)in_FS_OFFSET[-0xb];
    goto LAB_00768b84;
  }
  iVar4 = __nss_hostname_digits_dots
                    (__name,__result_buf,&local_60,0,__buflen,__result,&local_54,__af,__h_errnop);
  if (iVar4 == -1) {
    __resolv_context_put(lVar5);
    iVar4 = (int)in_FS_OFFSET[-0xb];
    goto LAB_00768b84;
  }
  if (iVar4 == 1) {
    if (local_54 != 1) {
      *__result = (hostent *)0x0;
      goto LAB_00768b2b;
    }
LAB_00768bec:
    *__result = __result_buf;
    _res_hconf_reorder_addrs(__result_buf);
  }
  else {
    if (__nss_not_use_nscd_hosts < 1) {
      if (__nss_not_use_nscd_hosts == 0) goto LAB_007689bc;
    }
    else {
      __nss_not_use_nscd_hosts = __nss_not_use_nscd_hosts + 1;
      if (100 < __nss_not_use_nscd_hosts) {
        __nss_not_use_nscd_hosts = 0;
LAB_007689bc:
        if ((__nss_database_custom[5] == '\0') &&
           (iVar4 = __nscd_gethostbyname2_r
                              (__name,__af,__result_buf,local_60,__buflen,__result,__h_errnop),
           -1 < iVar4)) {
          __resolv_context_put(lVar5);
          goto LAB_00768b84;
        }
      }
    }
    iVar4 = __nss_hosts_lookup2(&local_50,"gethostbyname2_r",0);
    if (iVar4 == 0) {
      bVar2 = false;
      lVar1 = *in_FS_OFFSET;
      local_68 = (void *)0x0;
      do {
        _dl_mcount_wrapper_check(local_48);
        local_54 = (*local_48)(__name,__af,__result_buf,local_60,__buflen,lVar1 + -0x58,__h_errnop);
        if (local_54 == 0xfffffffe) {
          if ((*__h_errnop == -1) && ((int)in_FS_OFFSET[-0xb] == 0x22)) {
            free(local_68);
            *__result = (hostent *)0x0;
            goto LAB_00768b2b;
          }
          if (bVar2) {
LAB_00768ad1:
            bVar7 = true;
            bVar6 = 6;
            *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
            local_54 = 1;
            bVar2 = true;
LAB_00768a46:
            if (((*(uint *)(local_50 + 8) >> (bVar6 & 0x1f) & 3) == 2) && (bVar7)) {
              if ((local_68 == (void *)0x0) &&
                 (local_68 = malloc(__buflen), local_68 == (void *)0x0)) {
                *(undefined4 *)(in_FS_OFFSET + -0xb) = 0xc;
                local_54 = 0xffffffff;
                *__result = (hostent *)0x0;
                goto LAB_00768b2b;
              }
              *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
              local_54 = 0xffffffff;
              bVar2 = true;
            }
          }
        }
        else {
          if (!bVar2) {
            bVar7 = local_54 == 1;
            bVar6 = (char)local_54 * '\x02' + 4;
            goto LAB_00768a46;
          }
          if (local_54 != 1) goto LAB_00768ad1;
          *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
          local_54 = 0xffffffff;
          bVar2 = false;
        }
        iVar4 = __nss_next2(&local_50,"gethostbyname2_r",0,&local_48,local_54,0);
      } while (iVar4 == 0);
      bVar2 = true;
    }
    else {
      bVar2 = false;
      local_68 = (void *)0x0;
    }
    uVar3 = local_54;
    free(local_68);
    if (uVar3 == 1) goto LAB_00768bec;
    *__result = (hostent *)0x0;
    if (uVar3 == 0xffffffff) {
      if (!bVar2) {
        if ((int)in_FS_OFFSET[-0xb] == 2) goto LAB_00768d59;
        *__h_errnop = -1;
      }
    }
    else if (!bVar2) {
LAB_00768d59:
      *__h_errnop = 3;
    }
  }
LAB_00768b2b:
  __resolv_context_put(lVar5);
  if (local_54 < 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)in_FS_OFFSET[-0xb];
    if (iVar4 == 0x22) {
      if (local_54 != 0xfffffffe) {
        iVar4 = 0x16;
        goto LAB_00768b66;
      }
    }
    else if (local_54 != 0xfffffffe) goto LAB_00768b84;
    if (*__h_errnop == -1) goto LAB_00768b84;
    iVar4 = 0xb;
  }
LAB_00768b66:
  *(int *)(in_FS_OFFSET + -0xb) = iVar4;
LAB_00768b84:
  if (local_40 != in_FS_OFFSET[5]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar4;
}

