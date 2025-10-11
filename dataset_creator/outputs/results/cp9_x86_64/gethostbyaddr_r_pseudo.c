
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int gethostbyaddr_r(void *__addr,__socklen_t __len,int __type,hostent *__result_buf,char *__buf,
                   size_t __buflen,hostent **__result,int *__h_errnop)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 extraout_RDX;
  long *in_FS_OFFSET;
  hostent **pphVar6;
  int *piVar7;
  void *local_78;
  int local_6c;
  long local_50;
  code *local_48;
  long local_40;
  
  local_40 = in_FS_OFFSET[5];
  lVar5 = __resolv_context_get();
  if (lVar5 == 0) {
    *__h_errnop = -1;
    *__result = (hostent *)0x0;
    local_6c = (int)in_FS_OFFSET[-0xb];
    goto LAB_007a37a0;
  }
                    /* WARNING: Load size is inaccurate */
  if ((__len == 0x10) && (_DAT_008190f8 == *(long *)((long)__addr + 8) && in6addr_any == *__addr)) {
    local_6c = 2;
    *__h_errnop = 1;
    *__result = (hostent *)0x0;
    goto LAB_007a37a0;
  }
  if (__nss_not_use_nscd_hosts < 1) {
    if (__nss_not_use_nscd_hosts == 0) goto joined_r0x007a368d;
  }
  else {
    __nss_not_use_nscd_hosts = __nss_not_use_nscd_hosts + 1;
    if (100 < __nss_not_use_nscd_hosts) {
      __nss_not_use_nscd_hosts = 0;
joined_r0x007a368d:
      if ((__nss_database_custom[5] == '\0') &&
         (pphVar6 = __result, piVar7 = __h_errnop,
         local_6c = __nscd_gethostbyaddr_r(__addr,__len,__type,__result_buf,__buf,__buflen),
         -1 < local_6c)) {
        __resolv_context_put(lVar5,piVar7,extraout_RDX,pphVar6);
        goto LAB_007a37a0;
      }
    }
  }
  iVar3 = __nss_hosts_lookup2(&local_50,"gethostbyaddr_r",0,&local_48);
  if (iVar3 == 0) {
    bVar2 = false;
    local_78 = (void *)0x0;
    lVar1 = *in_FS_OFFSET;
    do {
      _dl_mcount_wrapper_check(local_48);
      uVar4 = (*local_48)(__addr,__len,__type,__result_buf,__buf,__buflen,lVar1 + -0x58,__h_errnop);
      if (uVar4 == 0xfffffffe) {
        if ((*__h_errnop == -1) && ((int)in_FS_OFFSET[-0xb] == 0x22)) {
          free(local_78);
          *__result = (hostent *)0x0;
          __resolv_context_put(lVar5);
          local_6c = (int)in_FS_OFFSET[-0xb];
          goto LAB_007a374b;
        }
        if (bVar2) {
LAB_007a3633:
          *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
          if ((*(uint *)(local_50 + 8) >> 6 & 3) != 2) {
            uVar4 = 1;
            bVar2 = true;
            goto LAB_007a35c0;
          }
        }
        else {
LAB_007a36d8:
          if (((*(uint *)(local_50 + 8) >> ((char)uVar4 * '\x02' + 4U & 0x1f) & 3) != 2) ||
             (uVar4 != 1)) {
            bVar2 = false;
            goto LAB_007a35c0;
          }
        }
        if ((local_78 == (void *)0x0) && (local_78 = malloc(__buflen), local_78 == (void *)0x0)) {
          *(undefined4 *)(in_FS_OFFSET + -0xb) = 0xc;
          *__result = (hostent *)0x0;
          __resolv_context_put(lVar5);
          goto LAB_007a3849;
        }
        uVar4 = 0xffffffff;
        bVar2 = true;
        *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
      }
      else {
        if (!bVar2) goto LAB_007a36d8;
        if (uVar4 != 1) goto LAB_007a3633;
        bVar2 = false;
        uVar4 = 0xffffffff;
        *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
      }
LAB_007a35c0:
      iVar3 = __nss_next2(&local_50,"gethostbyaddr_r",0,&local_48,uVar4,0);
    } while (iVar3 == 0);
    free(local_78);
    local_6c = 0;
    if (uVar4 == 1) {
      *__result = __result_buf;
      _res_hconf_reorder_addrs(__result_buf);
      _res_hconf_trim_domains(__result_buf);
      __resolv_context_put(lVar5);
    }
    else {
      *__result = (hostent *)0x0;
      __resolv_context_put(lVar5);
      if (1 < uVar4) {
        local_6c = (int)in_FS_OFFSET[-0xb];
        if (uVar4 != 0xfffffffe) {
          if (local_6c == 0x22) goto LAB_007a385e;
          if (uVar4 != 0xfffffffe) goto LAB_007a37a0;
        }
LAB_007a374b:
        if (*__h_errnop == -1) goto LAB_007a37a0;
        local_6c = 0xb;
      }
    }
  }
  else {
    *__result = (hostent *)0x0;
    *__h_errnop = (uint)((int)in_FS_OFFSET[-0xb] == 2) * 4 + -1;
    __resolv_context_put(lVar5);
LAB_007a3849:
    local_6c = (int)in_FS_OFFSET[-0xb];
    if (local_6c != 0x22) goto LAB_007a37a0;
LAB_007a385e:
    local_6c = 0x16;
  }
  *(int *)(in_FS_OFFSET + -0xb) = local_6c;
LAB_007a37a0:
  if (local_40 == in_FS_OFFSET[5]) {
    return local_6c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

