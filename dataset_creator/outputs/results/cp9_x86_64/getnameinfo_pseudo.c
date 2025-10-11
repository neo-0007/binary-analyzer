
int getnameinfo(sockaddr *__sa,socklen_t __salen,char *__host,socklen_t __hostlen,char *__serv,
               socklen_t __servlen,uint __flags)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  servent *psVar5;
  ushort uVar6;
  servent *psVar7;
  undefined8 *puVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  uint uVar12;
  long in_FS_OFFSET;
  byte bVar13;
  uint local_668;
  int local_62c;
  hostent *local_628;
  servent *local_620;
  hostent local_618;
  utsname local_5f8;
  char *local_468;
  size_t local_460;
  char local_458 [1024];
  char local_58 [24];
  long local_40;
  
  bVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((__flags & 0xffffff00) != 0) {
    uVar12 = 0xffffffff;
    goto LAB_00769a99;
  }
  if ((__sa == (sockaddr *)0x0) || (__salen < 2)) goto LAB_00769a93;
  uVar9 = __flags & 8;
  if ((uVar9 != 0) && (__host == (char *)0x0 && __serv == (char *)0x0)) {
LAB_00769ad0:
    uVar12 = 0xfffffffe;
    goto LAB_00769a99;
  }
  uVar6 = __sa->sa_family;
  uVar12 = 0;
  if (uVar6 != 2) {
    if (uVar6 == 10) {
      if (0x1b < __salen) goto LAB_00769b99;
    }
    else if (uVar6 == 1) {
      local_468 = local_458;
      local_460 = 0x400;
      if ((__host != (char *)0x0) && (__hostlen != 0)) {
        if ((__flags & 1) != 0) {
          if (uVar9 != 0) goto LAB_00769ad0;
LAB_00769b1d:
          if (9 < __hostlen) {
            builtin_strncpy(__host,"localhost",10);
            goto LAB_00769b3f;
          }
          goto LAB_00769c7a;
        }
        local_668 = __flags & 8;
        iVar2 = uname(&local_5f8);
        if (iVar2 == 0) {
          sVar3 = strlen(local_5f8.nodename);
          uVar4 = sVar3 + 1;
          if (uVar4 <= __hostlen) {
            uVar9 = (uint)uVar4;
            if (uVar9 < 8) {
              if ((uVar4 & 4) == 0) {
                if (uVar9 != 0) {
                  *__host = local_5f8.nodename[0];
                  if ((uVar4 & 2) != 0) {
                    *(undefined2 *)(__host + ((uVar4 & 0xffffffff) - 2)) =
                         *(undefined2 *)(local_5f8.sysname + (uVar4 & 0xffffffff) + 0x3f);
                  }
                }
              }
              else {
                *(undefined4 *)__host = local_5f8.nodename._0_4_;
                *(undefined4 *)(__host + ((uVar4 & 0xffffffff) - 4)) =
                     *(undefined4 *)(local_5f8.sysname + (uVar4 & 0xffffffff) + 0x3d);
              }
            }
            else {
              *(ulong *)__host = CONCAT44(local_5f8.nodename._4_4_,local_5f8.nodename._0_4_);
              *(undefined8 *)(__host + ((uVar4 & 0xffffffff) - 8)) =
                   *(undefined8 *)(local_5f8.sysname + (uVar4 & 0xffffffff) + 0x39);
              lVar11 = (long)__host - (long)((ulong)(__host + 8) & 0xfffffffffffffff8);
              pcVar10 = local_5f8.nodename + -lVar11;
              puVar8 = (undefined8 *)((ulong)(__host + 8) & 0xfffffffffffffff8);
              for (uVar4 = (ulong)(uVar9 + (int)lVar11 >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar8 = *(undefined8 *)pcVar10;
                pcVar10 = pcVar10 + ((ulong)bVar13 * -2 + 1) * 8;
                puVar8 = puVar8 + (ulong)bVar13 * -2 + 1;
              }
            }
            goto LAB_00769b3f;
          }
          goto LAB_00769c7a;
        }
        if (local_668 == 0) goto LAB_00769b1d;
        goto LAB_00769f83;
      }
      if ((__servlen == 0) || (__serv == (char *)0x0)) goto LAB_00769a99;
      goto LAB_00769bfd;
    }
LAB_00769a93:
    uVar12 = 0xfffffffa;
    goto LAB_00769a99;
  }
  if (__salen < 0x10) goto LAB_00769a93;
LAB_00769b99:
  local_468 = local_458;
  local_460 = 0x400;
  if ((__host != (char *)0x0) && (__hostlen != 0)) {
    if ((__flags & 1) == 0) {
      local_628 = (hostent *)0x0;
      if (uVar6 == 10) {
        do {
          iVar2 = gethostbyaddr_r(__sa->sa_data + 6,0x10,10,&local_618,local_468,local_460,
                                  &local_628,&local_62c);
          if (iVar2 == 0) goto LAB_0076a160;
          if (local_62c != -1) goto LAB_0076a1b6;
          if (*(int *)(in_FS_OFFSET + -0x58) != 0x22) goto LAB_0076a24b;
          cVar1 = __libc_scratch_buffer_grow(&local_468);
        } while (cVar1 != '\0');
      }
      else {
        do {
          iVar2 = gethostbyaddr_r(__sa->sa_data + 2,4,2,&local_618,local_468,local_460,&local_628,
                                  &local_62c);
          if (iVar2 == 0) goto LAB_0076a160;
          if (local_62c != -1) goto LAB_0076a1b6;
          if (*(int *)(in_FS_OFFSET + -0x58) != 0x22) goto LAB_0076a24b;
          cVar1 = __libc_scratch_buffer_grow(&local_468);
        } while (cVar1 != '\0');
      }
      *(int *)(in_FS_OFFSET + -0x18) = local_62c;
      uVar12 = 0xfffffff6;
      goto LAB_00769b77;
    }
    if (uVar9 != 0) goto LAB_00769ad0;
    goto LAB_00769c43;
  }
  if ((__serv == (char *)0x0) || (__servlen == 0)) goto LAB_00769a99;
LAB_00769b50:
  if ((uVar6 & 0xfff7) == 2) {
    if ((__flags & 2) == 0) {
      pcVar10 = "udp";
      if ((__flags & 0x10) == 0) {
        pcVar10 = "tcp";
      }
      do {
        iVar2 = getservbyport_r((uint)*(ushort *)__sa->sa_data,pcVar10,(servent *)&local_618,
                                local_468,local_460,&local_620);
        if (iVar2 != 0x22) {
          if (local_620 == (servent *)0x0) goto LAB_00769d20;
          pcVar10 = local_620->s_name;
          sVar3 = strlen(pcVar10);
          uVar4 = sVar3 + 1;
          if (__servlen < uVar4) goto LAB_00769d57;
          goto LAB_00769c1a;
        }
        cVar1 = __libc_scratch_buffer_grow(&local_468);
      } while (cVar1 != '\0');
      uVar12 = 0xfffffff6;
    }
    else {
LAB_00769d20:
      iVar2 = snprintf(__serv,(ulong)__servlen,"%d",
                       (ulong)(ushort)(*(ushort *)__sa->sa_data << 8 | *(ushort *)__sa->sa_data >> 8
                                      ));
      if (iVar2 < 0) {
        uVar12 = 0xfffffff5;
      }
      else if ((ulong)__servlen <= (ulong)(long)iVar2) goto LAB_00769d57;
    }
  }
  else if (uVar6 == 1) {
LAB_00769bfd:
    pcVar10 = __sa->sa_data;
    sVar3 = strlen(pcVar10);
    uVar4 = sVar3 + 1;
    if (__servlen < uVar4) {
LAB_00769d57:
      uVar12 = 0xfffffff4;
    }
    else {
LAB_00769c1a:
      memcpy(__serv,pcVar10,uVar4);
    }
  }
  else {
    uVar12 = 0xfffffffa;
  }
  goto LAB_00769b77;
LAB_0076a160:
  if (local_628 != (hostent *)0x0) goto LAB_0076a1e5;
  if (local_62c != -1) goto LAB_0076a19c;
  goto LAB_0076a27e;
LAB_0076a1b6:
  if (local_628 != (hostent *)0x0) goto LAB_0076a1e5;
LAB_0076a19c:
  if (local_62c == 2) {
    *(undefined4 *)(in_FS_OFFSET + -0x18) = 2;
    uVar12 = 0xfffffffd;
  }
  else {
LAB_0076a1a5:
    uVar12 = __flags & 0xffffff00;
    if ((__flags & 8) == 0) {
      uVar6 = __sa->sa_family;
LAB_00769c43:
      if (uVar6 == 10) {
        pcVar10 = inet_ntop(10,__sa->sa_data + 6,__host,__hostlen);
        if (pcVar10 == (char *)0x0) goto LAB_00769c7a;
        uVar9 = *(uint *)(__sa[1].sa_data + 6);
        if (uVar9 == 0) goto LAB_00769b3f;
        sVar3 = strnlen(__host,(ulong)__hostlen);
        uVar4 = __hostlen - sVar3;
        if (((*(uint *)(__sa->sa_data + 6) & 0xc0ff) == 0x80fe) ||
           ((__sa->sa_data[6] == -1 && ((__sa->sa_data[7] & 0xfU) == 2)))) {
          pcVar10 = if_indextoname(uVar9,local_58);
          if (pcVar10 == (char *)0x0) goto LAB_0076a0a3;
          iVar2 = snprintf(__host + sVar3,uVar4,"%c%s",0x25,local_58);
          if (-1 < iVar2) {
            if (uVar4 <= (ulong)(long)iVar2) goto LAB_00769c7a;
            goto LAB_00769b3f;
          }
        }
        else {
LAB_0076a0a3:
          iVar2 = snprintf(__host + sVar3,uVar4,"%c%u",0x25,(ulong)uVar9);
          if (-1 < iVar2) {
            if ((ulong)(long)iVar2 < uVar4) goto LAB_00769b3f;
            goto LAB_00769c7a;
          }
        }
        uVar12 = 0xfffffff5;
      }
      else {
        pcVar10 = inet_ntop(2,__sa->sa_data + 2,__host,__hostlen);
        if (pcVar10 == (char *)0x0) {
LAB_00769c7a:
          uVar12 = 0xfffffff4;
        }
        else {
LAB_00769b3f:
          if ((__serv != (char *)0x0) && (__servlen != 0)) {
            uVar6 = __sa->sa_family;
            goto LAB_00769b50;
          }
        }
      }
    }
    else {
LAB_00769f83:
      uVar12 = 0xfffffffe;
    }
  }
  goto LAB_00769b77;
LAB_0076a24b:
  if (local_628 != (hostent *)0x0) {
LAB_0076a1e5:
    uVar12 = __flags & 0xffffff00;
    if ((__flags & 4) == 0) {
      psVar7 = (servent *)local_628->h_name;
    }
    else {
      pcVar10 = (char *)nrl_domainname();
      if (pcVar10 != (char *)0x0) {
        psVar7 = (servent *)local_628->h_name;
        psVar5 = (servent *)strstr((char *)psVar7,pcVar10);
        if (((psVar7 == psVar5) || (psVar5 == (servent *)0x0)) ||
           (*(char *)((long)&psVar5[-1].s_proto + 7) != '.')) goto LAB_0076a1f2;
        *(undefined1 *)((long)&psVar5[-1].s_proto + 7) = 0;
      }
      psVar7 = (servent *)local_628->h_name;
    }
LAB_0076a1f2:
    if ((__flags & 0x20) != 0) {
      uVar9 = __idna_from_dns_encoding(psVar7,&local_620);
      psVar7 = local_620;
      if (uVar9 != 0xffffff97) {
        if (uVar9 == 0) {
          sVar3 = strlen((char *)local_620);
          if (sVar3 + 1 <= (ulong)__hostlen) {
            memcpy(__host,psVar7,sVar3 + 1);
            free(psVar7);
            goto LAB_00769b3f;
          }
          goto LAB_00769c7a;
        }
        uVar12 = uVar9;
        if (uVar9 == 0xfffffffe) goto LAB_0076a1a5;
        goto LAB_00769b77;
      }
      psVar7 = (servent *)local_628->h_name;
    }
    local_620 = psVar7;
    sVar3 = strlen((char *)psVar7);
    if (sVar3 + 1 <= (ulong)__hostlen) {
      memcpy(__host,psVar7,sVar3 + 1);
      goto LAB_00769b3f;
    }
    goto LAB_00769c7a;
  }
LAB_0076a27e:
  *(undefined4 *)(in_FS_OFFSET + -0x18) = 0xffffffff;
  uVar12 = 0xfffffff5;
LAB_00769b77:
  if (local_468 != local_458) {
    free(local_468);
  }
LAB_00769a99:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar12;
}

