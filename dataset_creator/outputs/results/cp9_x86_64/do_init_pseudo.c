
void do_init(void)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  FILE *__stream;
  size_t sVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  size_t __n;
  long in_FS_OFFSET;
  uint local_16c;
  char *local_150;
  char local_148;
  char local_147 [263];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _res_hconf._0_16_ = (undefined1  [16])0x0;
  _res_hconf._64_8_ = 0;
  _res_hconf._16_16_ = (undefined1  [16])0x0;
  _res_hconf._32_16_ = (undefined1  [16])0x0;
  _res_hconf._48_16_ = (undefined1  [16])0x0;
  pcVar6 = getenv("RESOLV_HOST_CONF");
  pcVar9 = "/etc/host.conf";
  if (pcVar6 != (char *)0x0) {
    pcVar9 = pcVar6;
  }
  __stream = fopen(pcVar9,"rce");
  if (__stream != (FILE *)0x0) {
    __stream->_flags = __stream->_flags | 0x8000;
    local_16c = 0;
LAB_0076e1c8:
    pcVar6 = fgets_unlocked(&local_148,0x100,__stream);
    if (pcVar6 != (char *)0x0) {
      local_16c = local_16c + 1;
      pcVar6 = strchrnul(&local_148,10);
      *pcVar6 = '\0';
      uVar10 = (ulong)local_148;
      lVar3 = *(long *)(in_FS_OFFSET + -0x40);
      uVar2 = *(ushort *)(lVar3 + uVar10 * 2);
      pcVar6 = &local_148;
      while ((uVar2 & 0x2000) != 0) {
        uVar10 = (ulong)pcVar6[1];
        pcVar6 = pcVar6 + 1;
        uVar2 = *(ushort *)(lVar3 + uVar10 * 2);
      }
      if (((char)uVar10 != '\0') && (pcVar8 = pcVar6, (char)uVar10 != '#')) {
        while (((char)uVar10 != '#' && (char)uVar10 != ',' && ((uVar2 & 0x2000) == 0))) {
          bVar1 = pcVar8[1];
          uVar10 = (ulong)bVar1;
          pcVar8 = pcVar8 + 1;
          if (bVar1 == 0) break;
          uVar2 = *(ushort *)(lVar3 + (long)(char)bVar1 * 2);
        }
        __n = (long)pcVar8 - (long)pcVar6;
        iVar5 = strncasecmp(pcVar6,"order",__n);
        if ((iVar5 == 0) && (sVar7 = strlen("order"), sVar7 == __n)) {
          pcVar11 = "order";
        }
        else {
          pcVar11 = "trim";
          iVar5 = strncasecmp(pcVar6,"trim",__n);
          if ((iVar5 != 0) || (__n != 4)) {
            pcVar11 = "multi";
            iVar5 = strncasecmp(pcVar6,"multi",__n);
            if ((iVar5 != 0) || (__n != 5)) {
              pcVar11 = "reorder";
              iVar5 = strncasecmp(pcVar6,"reorder",__n);
              if ((iVar5 != 0) || (__n != 7)) {
                pcVar8 = (char *)dcgettext(&_libc_intl_domainname,"%s: line %d: bad command `%s\'\n"
                                           ,5);
LAB_0076e325:
                iVar5 = asprintf(&local_150,pcVar8,pcVar9,(ulong)local_16c,pcVar6);
                if (-1 < iVar5) {
                  __fxprintf(0,&DAT_007d9761,local_150);
                  free(local_150);
                }
                goto LAB_0076e1c8;
              }
            }
          }
        }
        while ((*(byte *)(lVar3 + 1 + (long)*pcVar8 * 2) & 0x20) != 0) {
          pcVar8 = pcVar8 + 1;
        }
        if (pcVar11[0xb] == '\x01') {
          pcVar6 = (char *)arg_trimdomain_list(pcVar9,local_16c,pcVar8);
        }
        else {
          if (pcVar11[0xb] != '\x02') goto LAB_0076e1c8;
          pcVar6 = (char *)arg_bool(pcVar9,local_16c,pcVar8,*(undefined4 *)(pcVar11 + 0xc));
        }
        if ((pcVar6 != (char *)0x0) && (cVar4 = *pcVar6, cVar4 != '\0')) {
          do {
            if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar4 * 2) & 0x20) == 0) {
              if (cVar4 != '#') {
                pcVar8 = (char *)dcgettext(&_libc_intl_domainname,
                                           "%s: line %d: ignoring trailing garbage `%s\'\n",5);
                goto LAB_0076e325;
              }
              break;
            }
            cVar4 = pcVar6[1];
            pcVar6 = pcVar6 + 1;
          } while (cVar4 != '\0');
        }
      }
      goto LAB_0076e1c8;
    }
    fclose(__stream);
  }
  pcVar9 = getenv("RESOLV_MULTI");
  if (pcVar9 != (char *)0x0) {
    arg_bool("RESOLV_MULTI",1,pcVar9,0x10);
  }
  pcVar9 = getenv("RESOLV_REORDER");
  if (pcVar9 != (char *)0x0) {
    arg_bool("RESOLV_REORDER",1,pcVar9,8);
  }
  pcVar9 = getenv("RESOLV_ADD_TRIM_DOMAINS");
  if (pcVar9 != (char *)0x0) {
    arg_trimdomain_list("RESOLV_ADD_TRIM_DOMAINS",1,pcVar9);
  }
  pcVar9 = getenv("RESOLV_OVERRIDE_TRIM_DOMAINS");
  if (pcVar9 != (char *)0x0) {
    _res_hconf._24_4_ = 0;
    arg_trimdomain_list("RESOLV_OVERRIDE_TRIM_DOMAINS",1,pcVar9);
  }
  _res_hconf._0_4_ = 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

