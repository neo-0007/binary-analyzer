
/* WARNING: Removing unreachable block (ram,0x00763a17) */
/* WARNING: Type propagation algorithm not settling */

int getaddrinfo(char *__name,char *__service,addrinfo *__req,addrinfo **__pai)

{
  char **ppcVar1;
  int *piVar2;
  undefined4 *puVar3;
  socklen_t __len;
  sockaddr *psVar4;
  socklen_t *psVar5;
  char *__name_00;
  sockaddr *__s2;
  servent *psVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long *plVar10;
  sockaddr **ppsVar11;
  __ino64_t _Var12;
  __uid_t _Var13;
  undefined4 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  char cVar23;
  int iVar27;
  byte bVar24;
  char cVar25;
  int iVar26;
  undefined4 uVar28;
  uint uVar29;
  addrinfo *paVar30;
  long lVar31;
  uintmax_t uVar32;
  char *pcVar33;
  long *plVar34;
  servent *psVar35;
  code *pcVar36;
  addrinfo *paVar37;
  addrinfo *paVar38;
  long lVar39;
  socklen_t **__buf;
  ushort uVar40;
  uint uVar41;
  addrinfo *paVar42;
  addrinfo **ppaVar43;
  sockaddr *psVar44;
  undefined1 *puVar45;
  undefined1 *puVar47;
  undefined1 *puVar48;
  undefined8 *puVar49;
  long lVar50;
  servent *psVar51;
  servent *psVar52;
  undefined8 *puVar53;
  size_t sVar54;
  ulong uVar55;
  ulong uVar56;
  stat64 *psVar57;
  ulong uVar58;
  long *in_FS_OFFSET;
  bool bVar59;
  byte bVar60;
  undefined1 auStack_768 [4];
  int local_764;
  size_t local_760;
  addrinfo **local_758;
  addrinfo *local_750;
  int local_748;
  uint local_744;
  addrinfo *local_740;
  code *local_738;
  addrinfo *local_730;
  stat64 *local_728;
  int local_720;
  char local_719;
  long *local_718;
  socklen_t *local_710;
  code *local_708;
  addrinfo *local_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  char local_6e2;
  char local_6e1;
  uint local_6e0;
  int local_6dc;
  addrinfo *local_6d8;
  addrinfo *local_6d0;
  ulong local_6c8;
  hostent *local_6c0;
  char *local_6b8;
  int local_6b0;
  undefined1 local_6a8 [16];
  addrinfo *paStack_698;
  char cStack_690;
  char cStack_68f;
  undefined6 uStack_68e;
  undefined1 local_688 [36];
  undefined4 uStack_664;
  addrinfo *paStack_660;
  undefined8 local_658;
  sockaddr *psStack_650;
  char *local_648;
  addrinfo *paStack_640;
  undefined1 local_638 [16];
  undefined4 local_628;
  undefined8 uStack_624;
  undefined4 uStack_61c;
  undefined4 local_618;
  undefined1 auStack_614 [12];
  undefined1 local_608 [16];
  undefined1 local_5f8 [16];
  undefined1 local_5e8 [12];
  char acStack_5dc [4];
  undefined8 local_5d8;
  long local_590;
  long local_588;
  long alStack_570 [3];
  undefined1 local_558 [1040];
  undefined1 local_148 [264];
  long local_40;
  undefined1 *puVar46;
  
  bVar60 = 0;
  puVar48 = auStack_768;
  puVar45 = auStack_768;
  puVar46 = auStack_768;
  puVar47 = auStack_768;
  local_40 = in_FS_OFFSET[5];
  local_6d8 = (addrinfo *)0x0;
  local_758 = __pai;
  local_6f0 = (addrinfo *)__name;
  if ((__name != (char *)0x0) && ((*__name != '*' || (__name[1] != '\0')))) {
    if ((__service != (char *)0x0) && ((*__service == '*' && (__service[1] == '\0')))) {
      __service = (char *)0x0;
    }
LAB_007616c8:
    if (__req == (addrinfo *)0x0) {
      local_6d0 = (addrinfo *)0x0;
      local_6c8 = 0;
      local_6e2 = '\0';
      local_6e1 = '\0';
      local_708 = (code *)CONCAT71(local_708._1_7_,local_6f0 == (addrinfo *)0x0);
      __check_pf(&local_6e2,&local_6e1,&local_6d0,&local_6c8);
      __req = (addrinfo *)default_hints;
LAB_00761f7b:
      local_719 = local_6e1;
      if (local_6e2 == '\0') {
        if (local_6e1 != '\0') {
          uVar28 = 10;
          goto LAB_00761fa7;
        }
LAB_00762263:
        local_719 = '\x01';
      }
      else {
        uVar28 = 2;
        if (local_6e1 == '\0') {
LAB_00761fa7:
          uVar9 = __req->ai_flags;
          local_719 = '\x01';
          paStack_660 = *(addrinfo **)&__req->ai_socktype;
          stack0xfffffffffffff998 = (char *)CONCAT44(uVar28,uVar9);
          local_658 = *(undefined8 *)&__req->ai_addrlen;
          psStack_650 = __req->ai_addr;
          ppcVar1 = &__req->ai_canonname;
          ppaVar43 = &__req->ai_next;
          __req = (addrinfo *)(local_688 + 0x20);
          local_648 = *ppcVar1;
          paStack_640 = *ppaVar43;
        }
      }
LAB_00761749:
      if ((__service == (char *)0x0) || (*__service == '\0')) {
        uVar41 = 0;
        local_558._0_8_ = local_558 + 0x10;
        lVar31._0_4_ = __req->ai_socktype;
        lVar31._4_4_ = __req->ai_protocol;
        local_558._8_8_ = 0x400;
        puVar49 = (undefined8 *)local_5e8;
        for (lVar39 = 0x12; lVar39 != 0; lVar39 = lVar39 + -1) {
          *puVar49 = 0;
          puVar49 = puVar49 + (ulong)bVar60 * -2 + 1;
        }
        local_6f8 = (addrinfo *)0x0;
        if (lVar31 != 0) goto LAB_007617a9;
      }
      else {
        local_6b8 = __service;
        uVar32 = strtouq(__service,(char **)local_688,10);
        local_6b0 = (int)uVar32;
        if ((char)*(int *)local_688._0_8_ != '\0') {
          if ((__req->ai_flags & 0x400U) != 0) goto LAB_0076287b;
          local_6b0 = -1;
        }
        local_558._8_8_ = 0x400;
        local_558._0_8_ = local_558 + 0x10;
        lVar39._0_4_ = __req->ai_socktype;
        lVar39._4_4_ = __req->ai_protocol;
        puVar49 = (undefined8 *)local_5e8;
        for (lVar31 = 0x12; lVar31 != 0; lVar31 = lVar31 + -1) {
          *puVar49 = 0;
          puVar49 = puVar49 + (ulong)bVar60 * -2 + 1;
        }
        if (lVar39 != 0) {
          local_6f8 = (addrinfo *)&local_6b8;
LAB_007617a9:
          local_710 = (socklen_t *)(local_558 + 0x10);
          local_728 = (stat64 *)local_5e8;
          if (__req->ai_socktype != 0) {
            paVar30 = (addrinfo *)&DAT_008235f4;
            do {
              if (__req->ai_socktype == paVar30->ai_flags) {
                bVar24 = (byte)paVar30->ai_socktype;
                if (__req->ai_protocol == 0) goto LAB_007617e3;
                if ((bVar24 & 2) != 0) goto LAB_00762b8d;
                if (__req->ai_protocol == paVar30->ai_family) goto LAB_00761833;
              }
              ppsVar11 = &paVar30->ai_addr;
              paVar30 = (addrinfo *)&paVar30->field_0x14;
            } while (*(char *)((long)ppsVar11 + 6) != '\0');
            local_720 = -7;
            goto LAB_007621ea;
          }
          paVar30 = (addrinfo *)&DAT_008235f4;
          do {
            bVar24 = (byte)paVar30->ai_socktype;
            if (__req->ai_protocol == 0) goto LAB_007617e3;
            if ((bVar24 & 2) != 0) goto LAB_00762b8d;
            if (__req->ai_protocol == paVar30->ai_family) goto LAB_00761833;
            ppsVar11 = &paVar30->ai_addr;
            paVar30 = (addrinfo *)&paVar30->field_0x14;
          } while (*(char *)((long)ppsVar11 + 6) != '\0');
          goto LAB_007621e0;
        }
        if (local_6b0 < 0) {
          local_6f8 = (addrinfo *)&local_6b8;
          paVar30 = (addrinfo *)&gaih_inet_typeproto;
          goto LAB_00762080;
        }
        uVar41 = (uint)(ushort)((ushort)local_6b0 << 8 | (ushort)local_6b0 >> 8);
      }
      local_710 = (socklen_t *)(local_558 + 0x10);
      local_728 = (stat64 *)local_5e8;
      iVar26 = 0;
      plVar34 = (long *)&DAT_008235f4;
      do {
        cVar25 = *(char *)((long)plVar34 + 9);
        plVar10 = plVar34;
        while (cVar25 != '\0') {
          lVar31 = (long)iVar26;
          iVar26 = iVar26 + 1;
          lVar39 = lVar31 * 0x10;
          local_728->__unused[lVar31 * 2 + -0xf] = *plVar10;
          *(uint *)(local_5e8 + lVar39 + 8) = uVar41;
          local_5e8[lVar39 + 0xc] = 1;
          if (*(char *)((long)plVar10 + 0x1e) == '\0') goto LAB_0076188f;
          cVar25 = *(char *)((long)plVar10 + 0x1d);
          plVar10 = (long *)((long)plVar10 + 0x14);
        }
        plVar34 = (long *)((long)plVar10 + 0x14);
      } while (*(char *)((long)plVar10 + 0x1e) != '\0');
      goto LAB_0076188f;
    }
    uVar41 = __req->ai_flags;
    if ((uVar41 & 0xfffff800) != 0) {
LAB_0076304c:
      local_720 = -1;
      goto LAB_00762200;
    }
    local_708 = (code *)CONCAT71(local_708._1_7_,local_6f0 == (addrinfo *)0x0);
    if (((uVar41 & 2) != 0) && (local_6f0 == (addrinfo *)0x0)) goto LAB_0076304c;
    local_719 = (__req->ai_family & 0xfffffffdU) != 0 && __req->ai_family != 10;
    if ((bool)local_719) {
      local_720 = -6;
      puVar47 = auStack_768;
      goto LAB_00762200;
    }
    local_6d0 = (addrinfo *)0x0;
    local_6c8 = 0;
    local_6e2 = '\0';
    local_6e1 = '\0';
    if ((uVar41 & 0x20) == 0) goto LAB_00761749;
    __check_pf(&local_6e2,&local_6e1,&local_6d0,&local_6c8);
    iVar26 = __req->ai_family;
    if (iVar26 == 0) goto LAB_00761f7b;
    local_719 = local_6e2;
    if ((iVar26 != 2) && (local_719 = local_6e1, iVar26 != 10)) goto LAB_00762263;
    if (local_719 != '\0') goto LAB_00761749;
    goto LAB_0076287b;
  }
  if ((__service != (char *)0x0) &&
     ((local_6f0 = (addrinfo *)0x0, *__service != '*' || (__service[1] != '\0'))))
  goto LAB_007616c8;
  goto LAB_00761f10;
LAB_007617e3:
  uVar41 = 0;
  if (local_6f8 != (addrinfo *)0x0) goto LAB_00761841;
LAB_00761862:
  local_5e8._0_4_ = paVar30->ai_flags;
  if ((bVar24 & 2) != 0) goto LAB_00761872;
LAB_00762b83:
  iVar26 = paVar30->ai_family;
  goto LAB_00761878;
LAB_00761833:
  if (local_6f8 == (addrinfo *)0x0) {
    uVar41 = 0;
    local_5e8._0_4_ = paVar30->ai_flags;
    goto LAB_00762b83;
  }
LAB_00761841:
  if ((bVar24 & 1) == 0) {
    if (-1 < local_6f8->ai_socktype) {
      uVar40 = (ushort)local_6f8->ai_socktype;
      uVar41 = (uint)(ushort)(uVar40 << 8 | uVar40 >> 8);
      goto LAB_00761862;
    }
    if (*(char *)((long)&paVar30->ai_socktype + 2) == '\0') {
LAB_00762080:
      local_710 = (socklen_t *)(local_558 + 0x10);
      local_728 = (stat64 *)local_5e8;
      if (*(char *)((long)&paVar30->ai_addr + 6) != '\0') {
        pcVar33 = (char *)((long)&paVar30->ai_addr + 6);
        local_718 = (long *)((ulong)local_718 & 0xffffffff00000000);
        local_700 = __req;
        do {
          while ((((pcVar33[-2] & 1U) == 0 &&
                  ((local_700->ai_socktype == 0 ||
                   (local_700->ai_socktype == *(int *)(pcVar33 + -10))))) &&
                 ((local_700->ai_protocol == 0 ||
                  (((pcVar33[-2] & 2U) != 0 || (local_700->ai_protocol == *(int *)(pcVar33 + -6)))))
                 ))) {
            __name_00 = *(char **)local_6f8;
            do {
              iVar26 = getservbyname_r(__name_00,pcVar33,(servent *)local_688,
                                       (char *)local_558._0_8_,local_558._8_8_,(servent **)local_6a8
                                      );
              if (iVar26 == 0) {
                if ((servent *)local_6a8._0_8_ != (servent *)0x0) {
                  plVar34 = local_728->__unused + (long)(int)local_718 * 2 + -0xf;
                  *(undefined4 *)plVar34 = *(undefined4 *)(pcVar33 + -10);
                  if ((pcVar33[-2] & 2U) == 0) {
                    iVar26 = *(int *)(pcVar33 + -6);
                  }
                  else {
                    iVar26 = local_700->ai_protocol;
                  }
                  iVar27 = *(int *)(local_6a8._0_8_ + 0x10);
                  local_718 = (long *)CONCAT44(local_718._4_4_,(int)local_718 + 1);
                  *(undefined1 *)((long)plVar34 + 0xc) = 1;
                  *(ulong *)((long)plVar34 + 4) = CONCAT44(iVar27,iVar26);
                }
                goto LAB_00762114;
              }
              if (iVar26 != 0x22) goto LAB_00762114;
              cVar25 = __libc_scratch_buffer_grow(local_558);
            } while (cVar25 != '\0');
            pcVar33 = pcVar33 + 0x14;
            if (*pcVar33 == '\0') goto LAB_007621a5;
          }
LAB_00762114:
          pcVar33 = pcVar33 + 0x14;
        } while (*pcVar33 != '\0');
LAB_007621a5:
        __req = local_700;
        if (acStack_5dc[0] != '\0') goto LAB_0076188f;
      }
      local_720 = -8;
      if ((socklen_t *)local_558._0_8_ != local_710) {
        free((void *)local_558._0_8_);
      }
    }
    else {
      pcVar33 = *(char **)local_6f8;
      __buf = (socklen_t **)local_710;
      sVar54 = 0x400;
      local_700 = paVar30;
      local_6f8 = (addrinfo *)local_558;
      do {
        iVar26 = getservbyname_r(pcVar33,(char *)((long)&paVar30->ai_socktype + 2),
                                 (servent *)local_688,(char *)__buf,sVar54,(servent **)local_6a8);
        auVar21 = _local_5e8;
        if (iVar26 == 0) {
          if ((servent *)local_6a8._0_8_ == (servent *)0x0) {
LAB_00762f94:
            local_720 = -8;
            iVar26 = 8;
            goto LAB_00762fa3;
          }
          local_5e8._0_4_ = local_700->ai_flags;
          auVar22 = _local_5e8;
          if ((local_700->ai_socktype & 2) == 0) {
            iVar26 = local_700->ai_family;
          }
          else {
            iVar26 = __req->ai_protocol;
          }
          acStack_5dc._1_3_ = auVar21._13_3_;
          local_5e8 = auVar22._0_12_;
          acStack_5dc[0] = 1;
          auVar21 = _local_5e8;
          local_5e8._8_4_ = *(int *)(local_6a8._0_8_ + 0x10);
          local_5e8._4_4_ = iVar26;
          acStack_5dc = auVar21._12_4_;
          goto LAB_0076188f;
        }
        if (iVar26 != 0x22) goto LAB_00762f94;
        cVar25 = __libc_scratch_buffer_grow(local_6f8);
        __buf = (socklen_t **)local_558._0_8_;
        sVar54 = local_558._8_8_;
      } while (cVar25 != '\0');
      local_720 = -10;
      iVar26 = 10;
LAB_00762fa3:
      if ((socklen_t *)local_558._0_8_ != local_710) {
        free((void *)local_558._0_8_);
        local_720 = -iVar26;
      }
    }
  }
  else {
LAB_007621e0:
    local_720 = -8;
  }
  goto LAB_007621ea;
LAB_0076302e:
  local_720 = 10;
  goto LAB_00761b72;
LAB_00761e3f:
  while( true ) {
    if (((int)local_6f0 != 10) || ((uint)local_6f8 != 2)) goto LAB_00761e90;
    if (iVar26 != -1) {
      *(undefined8 *)(puVar48 + -8) = 0x761e5f;
      __close_nocancel(iVar26);
    }
    *(undefined8 *)(puVar48 + -8) = 0x761e70;
    iVar26 = socket(2,0x80002,0);
    local_6f0 = (addrinfo *)CONCAT44(local_6f0._4_4_,2);
    if (iVar26 != -1) break;
    if ((int)in_FS_OFFSET[-0xb] != 0x61) goto LAB_00761e90;
  }
  goto LAB_00761e1c;
LAB_00762b8d:
  if (local_6f8 != (addrinfo *)0x0) goto LAB_00761841;
  uVar41 = 0;
  local_5e8._0_4_ = paVar30->ai_flags;
LAB_00761872:
  iVar26 = __req->ai_protocol;
LAB_00761878:
  auVar21 = _local_5e8;
  acStack_5dc[0] = 1;
  auVar22 = _local_5e8;
  local_5e8._8_4_ = uVar41;
  local_5e8._4_4_ = iVar26;
  acStack_5dc = auVar22._12_4_;
  local_5e8._0_4_ = auVar21._0_4_;
LAB_0076188f:
  uVar41 = __req->ai_flags;
  psVar35 = (servent *)local_638;
  cStack_690 = '\0';
  cStack_68f = '\0';
  uStack_68e = 0;
  local_6a8._0_8_ = psVar35;
  local_6a8._8_8_ = (addrinfo *)0x0;
  paStack_698 = (addrinfo *)0x0;
  local_638 = (undefined1  [16])0x0;
  local_628 = 0;
  uStack_624 = 0;
  uStack_61c = 0;
  local_618 = 0;
  auStack_614 = SUB1612((undefined1  [16])0x0,4);
  local_608 = (undefined1  [16])0x0;
  local_5f8 = (undefined1  [16])0x0;
  if ((char)local_708 == '\0') {
    if ((uVar41 & 0x40) == 0) {
      local_718 = (long *)((ulong)local_718._1_7_ << 8);
      local_700 = local_6f0;
LAB_00761934:
      uVar7 = local_6a8._0_8_;
      puVar47 = (undefined1 *)(local_6a8._0_8_ + 0x14);
      *(undefined1 (*) [16])(local_6a8._0_8_ + 0x14) = (undefined1  [16])0x0;
      iVar26 = __inet_aton_exact(local_700,puVar47);
      if (iVar26 == 0) {
        pcVar33 = strchr((char *)local_700,0x25);
        if (pcVar33 == (char *)0x0) {
          iVar26 = inet_pton(10,(char *)local_700,puVar47);
        }
        else {
          iVar26 = __inet_pton_length(10,local_700,(long)pcVar33 - (long)local_700,puVar47);
        }
        if (iVar26 < 1) {
          local_6a8._0_8_ = (servent *)0x0;
          if ((__req->ai_flags & 4) == 0) goto LAB_007628e1;
LAB_00762bd9:
          local_6f8 = (addrinfo *)((ulong)local_6f8 & 0xffffffff00000000);
          local_720 = 2;
          goto LAB_00761b72;
        }
        iVar26 = __req->ai_family;
        if ((iVar26 == 0) || (iVar26 == 10)) {
          iVar26 = 10;
LAB_007628bb:
          *(int *)(uVar7 + 0x10) = iVar26;
          if ((pcVar33 == (char *)0x0) ||
             (iVar26 = __inet6_scopeid_pton
                                 (puVar47,pcVar33 + 1,
                                  (undefined1 *)((long)&((servent *)(uVar7 + 0x20))->s_name + 4)),
             iVar26 == 0)) {
            bVar24 = (byte)__req->ai_flags;
            goto joined_r0x0076199f;
          }
          local_6a8._0_8_ = (servent *)0x0;
          local_6f8 = (addrinfo *)((ulong)local_6f8 & 0xffffffff00000000);
          local_720 = 2;
          goto LAB_00761b72;
        }
        if (iVar26 == 2) {
          local_6f8 = (addrinfo *)CONCAT44(local_6f8._4_4_,*(int *)(uVar7 + 0x14));
          if (*(int *)(uVar7 + 0x14) == 0) {
            if ((*(int *)(uVar7 + 0x18) == 0) && (*(int *)((long)(uVar7 + 0x18) + 4) == -0x10000)) {
              *(undefined4 *)(uVar7 + 0x14) = *(undefined4 *)&((servent *)(uVar7 + 0x20))->s_name;
              iVar26 = 2;
              goto LAB_007628bb;
            }
            local_6a8._0_8_ = (servent *)0x0;
            local_720 = 9;
            goto LAB_00761b72;
          }
        }
LAB_00762770:
        local_6a8._0_8_ = (servent *)0x0;
        local_6f8 = (addrinfo *)((ulong)local_6f8 & 0xffffffff00000000);
        local_720 = 9;
        goto joined_r0x00761b79;
      }
      if ((__req->ai_family & 0xfffffffdU) == 0) {
        iVar26 = 2;
      }
      else {
        if (((undefined1  [48])*__req & (undefined1  [48])0xffffffff00000008) !=
            (undefined1  [48])0xa00000008) goto LAB_00762770;
        uVar28 = *(undefined4 *)(uVar7 + 0x14);
        *(undefined4 *)((long)(uVar7 + 0x18) + 4) = 0xffff0000;
        *(undefined8 *)(uVar7 + 0x14) = 0;
        *(undefined4 *)&((servent *)(uVar7 + 0x20))->s_name = uVar28;
        iVar26 = 10;
      }
      *(int *)(uVar7 + 0x10) = iVar26;
      bVar24 = (byte)__req->ai_flags;
joined_r0x0076199f:
      if ((bVar24 & 2) != 0) {
        paVar30 = (addrinfo *)strdup((char *)local_700);
        if (paVar30 != (addrinfo *)0x0) {
          local_6a8._8_8_ = paVar30;
          if ((servent *)local_6a8._0_8_ != (servent *)0x0) {
            uVar41 = __req->ai_flags;
            goto LAB_007619d7;
          }
          goto LAB_007628e1;
        }
        local_6a8._0_8_ = (servent *)0x0;
        local_6f8 = (addrinfo *)((ulong)local_6f8 & 0xffffffff00000000);
        local_720 = 10;
        goto LAB_00761b72;
      }
      if ((servent *)local_6a8._0_8_ != (servent *)0x0) goto LAB_00761a33;
LAB_007628e1:
      paVar30 = local_700;
      if (((undefined1  [48])*__req & (undefined1  [48])0xffffffff00000002) ==
          (undefined1  [48])0x200000000) {
        lVar31 = *in_FS_OFFSET;
        local_6f8 = __req;
        do {
          iVar26 = gethostbyname2_r((char *)paVar30,2,(hostent *)local_688,(char *)local_558._0_8_,
                                    local_558._8_8_,&local_6c0,(int *)(lVar31 + -0x18));
          __req = local_6f8;
          if (iVar26 != 0x22) {
            if (iVar26 != 0) {
              iVar26 = (int)in_FS_OFFSET[-3];
              if (iVar26 == -1) goto LAB_00763800;
LAB_00763149:
              local_6f8 = (addrinfo *)((ulong)local_6f8._4_4_ << 0x20);
              local_720 = (iVar26 != 2) + 3 + (uint)(iVar26 != 2);
              goto LAB_00761b72;
            }
            if (local_6c0 == (hostent *)0x0) {
              local_6f8 = (addrinfo *)((ulong)local_6f8._4_4_ << 0x20);
              local_720 = (uint)((int)in_FS_OFFSET[-3] == 4) * 3 + 2;
              goto LAB_00761b72;
            }
            cVar25 = convert_hostent_to_gaih_addrtuple(local_6f8,2,local_6c0,local_6a8);
            if (cVar25 != '\0') {
              cStack_690 = '\x01';
              if ((servent *)local_6a8._0_8_ != (servent *)0x0) goto LAB_007631b8;
              goto LAB_00762901;
            }
            break;
          }
          iVar26 = (int)in_FS_OFFSET[-3];
          if (iVar26 != -1) goto LAB_00763149;
          cVar25 = __libc_scratch_buffer_grow(local_558);
        } while (cVar25 != '\0');
        goto LAB_00762d6f;
      }
LAB_00762901:
      if (__nss_not_use_nscd_hosts < 1) {
        local_6a8._0_8_ = (servent *)0x0;
        if (__nss_not_use_nscd_hosts == 0) goto LAB_007632f4;
LAB_0076292c:
        local_6e0 = 0;
        local_6dc = -1;
        bVar24 = __nss_database_get(5,&local_6c0);
        local_6f8 = (addrinfo *)__resolv_context_get();
        paVar30 = local_700;
        bVar24 = local_6f8 != (addrinfo *)0x0 & bVar24;
        local_720 = CONCAT31(local_720._1_3_,bVar24);
        if (bVar24 == 0) {
          __resolv_context_put(local_6f8);
          if ((int)in_FS_OFFSET[-3] != -1) {
LAB_0076371d:
            if ((servent *)local_6a8._0_8_ == (servent *)0x0) goto LAB_00762bd9;
LAB_007631b8:
            uVar41 = __req->ai_flags;
            goto LAB_007619d7;
          }
LAB_00763743:
          local_720 = 0xb;
        }
        else {
          local_730 = (addrinfo *)CONCAT44(local_730._4_4_,0xffffffff);
          uVar41 = 0;
          do {
            if (cStack_690 != '\0') {
              free((void *)local_6a8._0_8_);
            }
            free((void *)local_6a8._8_8_);
            free(paStack_698);
            local_6a8._0_8_ = (servent *)0x0;
            local_6a8._8_8_ = (addrinfo *)0x0;
            paStack_698 = (addrinfo *)0x0;
            cStack_690 = '\0';
            cStack_68f = '\0';
            uStack_68e = 0;
            if ((char)local_708 != '\0') {
              *(undefined4 *)(in_FS_OFFSET + -3) = 0xffffffff;
              *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x10;
              iVar26 = local_6dc;
              break;
            }
            local_6e0 = 0;
            if ((__req->ai_family == 0) &&
               (local_738 = (code *)__nss_lookup_function(local_6c0,"gethostbyname4_r"),
               local_738 != (code *)0x0)) {
              lVar31 = *in_FS_OFFSET;
              local_744 = 0;
              local_740 = __req;
              while( true ) {
                _dl_mcount_wrapper_check(local_738);
                local_6dc = (*local_738)(paVar30,(servent *)local_6a8,local_558._0_8_,
                                         local_558._8_8_,*in_FS_OFFSET + -0x58,lVar31 + -0x18);
                __req = local_740;
                uVar41 = local_744;
                iVar26 = local_6dc;
                if (local_6dc == 1) break;
                local_6a8._0_8_ = (servent *)0x0;
                iVar27 = (int)in_FS_OFFSET[-3];
                if (((local_6dc != -2) || ((int)in_FS_OFFSET[-0xb] != 0x22)) || (iVar27 != -1)) {
                  uVar41 = 0xfffffffd;
                  local_6e0 = uVar41;
                  if (iVar27 != 2) {
                    uVar41 = (uint)(iVar27 == 4);
                    local_6e0 = uVar41;
                  }
                  goto LAB_00763a9b;
                }
                cVar25 = __libc_scratch_buffer_grow(local_558);
                if (cVar25 == '\0') goto LAB_00763579;
              }
              local_6e0 = 1;
              paVar38 = (addrinfo *)local_6a8._8_8_;
              if (((local_740->ai_flags & 2) != 0) &&
                 ((addrinfo *)local_6a8._8_8_ == (addrinfo *)0x0)) {
                local_738 = (code *)CONCAT44(local_738._4_4_,1);
                paVar38 = (addrinfo *)strdup((char *)*(char ***)(local_6a8._0_8_ + 8));
                iVar26 = (int)local_738;
                if (paVar38 == (addrinfo *)0x0) {
LAB_00763579:
                  __resolv_context_put(local_6f8);
                  local_720 = 10;
                  goto LAB_00762b11;
                }
              }
              local_6a8._8_8_ = paVar38;
              if ((servent *)local_6a8._0_8_ == (servent *)0x0) {
LAB_00763bb4:
                uVar41 = 1;
              }
              else {
                psVar35 = (servent *)local_6a8._0_8_;
                psVar52 = (servent *)local_6a8;
                cVar25 = (char)local_708;
                do {
                  iVar27 = psVar35->s_port;
                  psVar6 = (servent *)psVar35->s_name;
                  psVar51 = psVar35;
                  cVar23 = (char)local_720;
                  if ((iVar27 == 2) &&
                     (((undefined1  [48])*__req & (undefined1  [48])0xffffffff00000008) ==
                      (undefined1  [48])0xa00000008)) {
                    psVar35->s_proto = (char *)0xffff000000000000;
                    *(undefined8 *)&psVar35->s_port = 10;
                    *(undefined4 *)&psVar35[1].s_name = *(undefined4 *)&psVar35->field_0x14;
                  }
                  else if (__req->ai_family != 0) {
                    if (iVar27 == __req->ai_family) {
                      if (iVar27 == 10) {
                        cStack_68f = '\x01';
                      }
                    }
                    else {
                      psVar52->s_name = (char *)psVar6;
                      psVar51 = psVar52;
                      cVar23 = cVar25;
                    }
                  }
                  cVar25 = cVar23;
                  psVar35 = psVar6;
                  psVar52 = psVar51;
                } while (psVar6 != (servent *)0x0);
                if (cVar25 == '\0') goto LAB_00763bb4;
                local_6e0 = 0;
              }
LAB_00763a9b:
              bVar24 = (char)iVar26 * '\x02' + 4;
            }
            else if ((((__req->ai_flags & 2) == 0) ||
                     (lVar31 = __nss_lookup_function(local_6c0,"gethostbyname3_r"), lVar31 == 0)) &&
                    (lVar31 = __nss_lookup_function(local_6c0,"gethostbyname2_r"), lVar31 == 0)) {
              bVar24 = 2;
              iVar26 = -1;
              local_6dc = -1;
              *(undefined4 *)(in_FS_OFFSET + -3) = 0xffffffff;
              *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x10;
            }
            else {
              uVar29 = __req->ai_family;
              if ((uVar29 == 10) || (uVar29 == 0)) {
                iVar26 = gethosts(lVar31,10,paVar30,__req,local_558,(servent *)local_6a8,&local_6dc,
                                  &local_6e0);
                if (iVar26 == 0) {
                  local_730 = (addrinfo *)CONCAT44(local_730._4_4_,local_6dc);
                  uVar29 = __req->ai_family;
                  uVar41 = local_6e0;
                  goto LAB_00762a29;
                }
LAB_00763a54:
                local_720 = iVar26;
                __resolv_context_put(local_6f8);
                goto LAB_00762b11;
              }
LAB_00762a29:
              if (((uVar29 & 0xfffffffd) == 0) ||
                 ((((undefined1  [48])*__req & (undefined1  [48])0xffffffff00000008) ==
                   (undefined1  [48])0xa00000008 &&
                  (((__req->ai_flags & 0x10) != 0 || (cStack_68f == '\0')))))) {
                iVar26 = gethosts(lVar31,2,paVar30,__req,local_558,(servent *)local_6a8,&local_6dc,
                                  &local_6e0);
                if (iVar26 != 0) goto LAB_00763a54;
                if (__req->ai_family == 2) {
                  local_730 = (addrinfo *)CONCAT44(local_730._4_4_,local_6dc);
                  uVar41 = local_6e0;
                }
              }
              paVar38 = paStack_698;
              if (((int)local_730 == 1) || (local_6dc == 1)) {
                paVar37 = (addrinfo *)local_6a8._8_8_;
                if (((__req->ai_flags & 2) != 0) && ((addrinfo *)local_6a8._8_8_ == (addrinfo *)0x0)
                   ) {
                  pcVar36 = (code *)__nss_lookup_function(local_6c0,"getcanonname_r");
                  local_688._0_8_ = paVar30;
                  if (pcVar36 != (code *)0x0) {
                    local_708 = pcVar36;
                    _dl_mcount_wrapper_check(pcVar36);
                    if (paVar38 == (addrinfo *)0x0) {
                      paVar38 = paVar30;
                    }
                    iVar26 = (*local_708)(paVar38,local_148,0x100,local_688,*in_FS_OFFSET + -0x58,
                                          *in_FS_OFFSET + -0x18);
                    if (iVar26 != 1) {
                      local_688._0_8_ = paVar30;
                    }
                  }
                  paVar37 = (addrinfo *)strdup((char *)paVar30);
                  if (paVar37 == (addrinfo *)0x0) goto LAB_00763579;
                }
                local_6a8._8_8_ = paVar37;
                local_6dc = 1;
                bVar24 = 6;
                iVar26 = 1;
              }
              else if ((int)local_730 == -2) {
                iVar26 = -2;
                bVar24 = 0;
                local_6dc = -2;
              }
              else {
                iVar26 = local_6dc;
                if ((local_6dc == -1) && (iVar26 = (int)local_730, (int)local_730 == -1)) {
                  bVar24 = 2;
                  iVar26 = local_6dc;
                }
                else {
                  local_6dc = iVar26;
                  bVar24 = (char)local_6dc * '\x02' + 4;
                  iVar26 = local_6dc;
                }
              }
            }
            uVar29 = *(uint *)&local_6c0->h_aliases >> (bVar24 & 0x1f) & 3;
            if (uVar29 == 1) break;
            piVar2 = &local_6c0->h_addrtype;
            local_708 = (code *)CONCAT71(local_708._1_7_,uVar29 == 2);
            lVar50._0_4_ = local_6c0->h_addrtype;
            lVar50._4_4_ = local_6c0->h_length;
            local_6c0 = (hostent *)piVar2;
          } while (lVar50 != 0);
          local_708 = (code *)CONCAT44(local_708._4_4_,iVar26);
          __resolv_context_put(local_6f8);
          if ((0xfffffffd < (uint)local_708) && ((int)in_FS_OFFSET[-3] == -1)) goto LAB_00763743;
          if ((local_6e0 == 0) || (uVar41 == 0)) goto LAB_0076371d;
          if ((local_6e0 != 0xfffffffd) || (local_720 = 3, uVar41 != 0xfffffffd)) {
            local_720 = 5;
          }
        }
LAB_00762b11:
        if (cStack_690 != '\0') {
          free((void *)local_6a8._0_8_);
        }
        free((void *)local_6a8._8_8_);
        free(paStack_698);
        local_6f8 = (addrinfo *)((ulong)local_6f8 & 0xffffffff00000000);
        local_6a8._0_8_ = (servent *)0x0;
        local_6a8._8_8_ = (addrinfo *)0x0;
        paStack_698 = (addrinfo *)0x0;
        cStack_690 = '\0';
        cStack_68f = '\0';
        uStack_68e = 0;
        goto LAB_00761b72;
      }
      __nss_not_use_nscd_hosts = __nss_not_use_nscd_hosts + 1;
      if (__nss_not_use_nscd_hosts < 0x65) {
        local_6a8._0_8_ = (servent *)0x0;
        goto LAB_0076292c;
      }
      __nss_not_use_nscd_hosts = 0;
LAB_007632f4:
      local_6a8._0_8_ = (servent *)0x0;
      if (__nss_database_custom[5] != '\0') goto LAB_0076292c;
      local_688._0_8_ = (addrinfo *)0x0;
      iVar26 = __nscd_getai(local_700,local_688,*in_FS_OFFSET + -0x18);
      paVar30 = (addrinfo *)local_688._0_8_;
      if ((addrinfo *)local_688._0_8_ == (addrinfo *)0x0) {
        if (iVar26 == 0) goto LAB_00762bd9;
        if (__nss_not_use_nscd_hosts == 0) {
          if ((int)in_FS_OFFSET[-3] == -1) {
            if ((int)in_FS_OFFSET[-0xb] == 0xc) goto LAB_00762d6f;
          }
          else if ((int)in_FS_OFFSET[-3] == 2) {
            local_6f8 = (addrinfo *)((ulong)local_6f8._4_4_ << 0x20);
            local_720 = 3;
            goto LAB_00761b72;
          }
LAB_00763800:
          local_6f8 = (addrinfo *)((ulong)local_6f8 & 0xffffffff00000000);
          local_720 = 0xb;
          goto LAB_00761b72;
        }
LAB_0076362f:
        if ((servent *)local_6a8._0_8_ == (servent *)0x0) goto LAB_0076292c;
        goto LAB_007631b8;
      }
      psVar44 = *(sockaddr **)(local_688._0_8_ + 0x18);
      local_6f8 = (addrinfo *)CONCAT44(local_6f8._4_4_,*(int *)local_688._0_8_);
      psVar35 = (servent *)calloc((long)*(int *)local_688._0_8_,0x28);
      if (psVar35 == (servent *)0x0) {
        free(paVar30);
        local_720 = 10;
      }
      else {
        cStack_690 = '\x01';
        if ((int)(uint)local_6f8 < 1) {
          if ((__req->ai_flags & 2) != 0) {
            pcVar33 = *(char **)((long)paVar30 + 8);
            iVar26 = 0;
            if (pcVar33 != (char *)0x0) goto LAB_007635eb;
          }
        }
        else {
          lVar31 = *(long *)((long)paVar30 + 0x10);
          lVar39 = 0;
          iVar26 = 0;
          iVar27 = (uint)local_6f8;
          do {
            uVar41 = (uint)*(byte *)(lVar31 + lVar39);
            if (*(byte *)(lVar31 + lVar39) == 2) {
              if (((undefined1  [48])*__req & (undefined1  [48])0xffffffff00000008) ==
                  (undefined1  [48])0xa00000008) {
                uVar56 = 4;
                plVar34 = (long *)((long)psVar35 + (long)iVar26 * 0x28);
                *(undefined4 *)(plVar34 + 2) = 10;
                uVar28 = *(undefined4 *)psVar44;
                *(undefined4 *)((long)plVar34 + 0x1c) = 0xffff0000;
                *(undefined4 *)(plVar34 + 4) = uVar28;
              }
              else {
                if (__req->ai_family == 0) {
                  uVar41 = 2;
                  uVar56 = 4;
                }
                else {
                  uVar56 = 4;
                  if (__req->ai_family != 2) goto LAB_00763405;
                  uVar41 = 2;
                }
LAB_007633a3:
                plVar34 = (long *)((long)psVar35 + (long)iVar26 * 0x28);
                *(uint *)(plVar34 + 2) = uVar41;
                puVar3 = (undefined4 *)((long)plVar34 + 0x14);
                uVar41 = (uint)uVar56;
                if (uVar41 < 8) {
                  if ((uVar56 & 4) == 0) {
                    if (uVar41 != 0) {
                      *(char *)puVar3 = (char)psVar44->sa_family;
                      goto LAB_007633dd;
                    }
                  }
                  else {
                    *puVar3 = *(undefined4 *)psVar44;
                    *(undefined4 *)((long)plVar34 + uVar56 + 0x10) =
                         *(undefined4 *)(psVar44->sa_data + (uVar56 - 6));
                    lVar31 = *(long *)((long)paVar30 + 0x10);
                  }
                }
                else {
                  uVar58 = (long)plVar34 + 0x1cU & 0xfffffffffffffff8;
                  *(undefined8 *)((long)plVar34 + 0x14) = *(undefined8 *)psVar44;
                  *(undefined8 *)((long)plVar34 + uVar56 + 0xc) =
                       *(undefined8 *)(psVar44->sa_data + (uVar56 - 10));
                  lVar31 = (long)puVar3 - uVar58;
                  uVar41 = (int)lVar31 + uVar41;
                  if (7 < (uVar41 & 0xfffffff8)) {
                    uVar29 = 0;
                    local_6f8 = (addrinfo *)(CONCAT44(local_6f8._4_4_,uVar41) & 0xfffffffffffffff8);
                    do {
                      uVar55 = (ulong)uVar29;
                      uVar29 = uVar29 + 8;
                      *(undefined8 *)(uVar58 + uVar55) =
                           *(undefined8 *)((long)psVar44 + (uVar55 - lVar31));
                    } while (uVar29 < (uint)local_6f8);
                  }
LAB_007633dd:
                  lVar31 = *(long *)((long)paVar30 + 0x10);
                }
                if (*(char *)(lVar31 + lVar39) == '\n') {
                  cStack_68f = '\x01';
                }
                iVar27 = *&paVar30->ai_flags;
              }
              lVar50 = (long)iVar26;
              iVar26 = iVar26 + 1;
              *plVar34 = (long)((long)psVar35 + (lVar50 * 5 + 5) * 8);
            }
            else {
              if ((__req->ai_family == 0) || (__req->ai_family == uVar41)) {
                uVar56 = 0x10;
                goto LAB_007633a3;
              }
              uVar56 = 0x10;
            }
LAB_00763405:
            lVar39 = lVar39 + 1;
            psVar44 = (sockaddr *)(psVar44->sa_data + (uVar56 - 2));
          } while ((int)lVar39 < iVar27);
          paVar38 = (addrinfo *)local_6a8._8_8_;
          if (((__req->ai_flags & 2) != 0) &&
             (pcVar33 = *(char **)((long)paVar30 + 8), pcVar33 != (char *)0x0)) {
LAB_007635eb:
            paVar38 = (addrinfo *)strdup(pcVar33);
            paVar30 = (addrinfo *)local_688._0_8_;
            if (paVar38 == (addrinfo *)0x0) {
              free((void *)local_688._0_8_);
              local_720 = 10;
              goto LAB_00763764;
            }
          }
          local_6a8._8_8_ = paVar38;
          if (iVar26 != 0) {
            *(undefined8 *)((long)psVar35 + (long)iVar26 * 0x28 + -0x28) = 0;
            local_6a8._0_8_ = psVar35;
            free(paVar30);
            goto LAB_0076362f;
          }
        }
        free((void *)local_688._0_8_);
        local_720 = 2;
      }
LAB_00763764:
      free(psVar35);
      cStack_690 = '\0';
      local_6f8 = (addrinfo *)((ulong)local_6f8 & 0xffffffff00000000);
      if ((char)local_718 != '\0') goto LAB_0076279c;
      goto LAB_00761b8c;
    }
    iVar26 = __idna_to_dns_encoding(local_6f0,local_688);
    if (iVar26 == 0) {
      local_700 = (addrinfo *)local_688._0_8_;
      if ((servent *)local_6a8._0_8_ == (servent *)0x0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("at != NULL","../sysdeps/posix/getaddrinfo.c",0x369,"text_to_binary_address");
      }
      local_718 = (long *)CONCAT71(local_718._1_7_,1);
      goto LAB_00761934;
    }
    local_6f8 = (addrinfo *)((ulong)local_6f8 & 0xffffffff00000000);
    local_720 = -iVar26;
    paVar30 = (addrinfo *)0x0;
  }
  else {
    iVar26 = __req->ai_family;
    if (iVar26 == 0) {
      psVar35 = (servent *)(auStack_614 + 4);
      local_638._8_8_ = 0;
      local_638._0_8_ = psVar35;
      local_718 = (long *)CONCAT71(local_718._1_7_,(char)local_708);
LAB_00762ddf:
      local_628 = 10;
      if ((uVar41 & 1) == 0) {
        uStack_624 = in6addr_loopback._0_8_;
        uStack_61c = (undefined4)in6addr_loopback._8_8_;
        local_618 = SUB84(in6addr_loopback._8_8_,4);
      }
    }
    else {
      local_718 = (long *)CONCAT71(local_718._1_7_,iVar26 == 2);
      if (iVar26 == 10) {
        psVar35 = (servent *)0x0;
        goto LAB_00762ddf;
      }
    }
    if ((char)local_718 == '\0') {
      local_700 = (addrinfo *)0x0;
    }
    else {
      psVar35->s_port = 2;
      if ((uVar41 & 1) == 0) {
        *(undefined4 *)&psVar35->field_0x14 = 0x100007f;
      }
      local_718 = (long *)((ulong)local_718 & 0xffffffffffffff00);
      uVar41 = __req->ai_flags;
      local_700 = (addrinfo *)0x0;
    }
LAB_007619d7:
    paVar30 = (addrinfo *)local_6a8._8_8_;
    if ((uVar41 & 2) == 0) {
LAB_00761a33:
      local_6f8 = (addrinfo *)((ulong)local_6f8 & 0xffffffff00000000);
      ppaVar43 = &local_6d8;
      psVar35 = (servent *)local_6a8._0_8_;
      do {
        uVar41 = psVar35->s_port;
        if ((short)uVar41 == 10) {
          psVar57 = local_728;
          cVar25 = acStack_5dc[0];
          if ((((cStack_68f == '\0') || ((__req->ai_flags & 0x18U) != 8)) ||
              (*(int *)&psVar35->field_0x14 != 0)) ||
             ((*(int *)&psVar35->s_proto != 0 || (*(int *)((long)&psVar35->s_proto + 4) != -0x10000)
              ))) {
            while (cVar25 != '\0') {
              paVar30 = (addrinfo *)malloc(0x4c);
              *ppaVar43 = paVar30;
              if (paVar30 == (addrinfo *)0x0) goto LAB_0076302e;
              uVar28 = *(undefined4 *)&psVar57->st_dev;
              uVar14 = *(undefined4 *)((long)&psVar57->st_dev + 4);
              iVar26 = __req->ai_flags;
              _Var12 = psVar57->st_ino;
              paVar30->ai_addrlen = 0x1c;
              paVar30->ai_next = (addrinfo *)0x0;
              ppaVar43 = &paVar30->ai_next;
              uVar56 = CONCAT44(uVar41,iVar26) & 0xffffffffffff;
              paVar30[1].ai_family = 0;
              _Var13 = psVar57->st_uid;
              paVar30->ai_flags = (int)uVar56;
              paVar30->ai_family = (int)(uVar56 >> 0x20);
              paVar30->ai_socktype = uVar28;
              paVar30->ai_protocol = uVar14;
              paVar30[1].ai_flags = (uint)(ushort)_Var12 << 0x10 | 10;
              paVar30->ai_addr = (sockaddr *)(paVar30 + 1);
              paVar30->ai_canonname = (char *)local_6a8._8_8_;
              local_6a8._8_8_ = (addrinfo *)0x0;
              uVar7 = *(undefined8 *)&psVar35->field_0x14;
              uVar8 = *(undefined8 *)((long)&psVar35->s_proto + 4);
              paVar30[1].ai_socktype = (int)uVar7;
              paVar30[1].ai_protocol = (int)((ulong)uVar7 >> 0x20);
              *(undefined8 *)&paVar30[1].ai_addrlen = uVar8;
              *(undefined4 *)&paVar30[1].ai_addr = *(undefined4 *)((long)&psVar35[1].s_name + 4);
              psVar57 = (stat64 *)&psVar57->st_nlink;
              cVar25 = (char)_Var13;
            }
            goto LAB_00761b54;
          }
        }
        else {
          if (acStack_5dc[0] != '\0') {
            local_6f0 = (addrinfo *)(CONCAT44(local_6f0._4_4_,uVar41) & 0xffffffff0000ffff);
            psVar57 = local_728;
            do {
              paVar30 = (addrinfo *)malloc(0x40);
              *ppaVar43 = paVar30;
              uVar7 = local_6a8._8_8_;
              if (paVar30 == (addrinfo *)0x0) goto LAB_0076302e;
              uVar28 = *(undefined4 *)&psVar57->st_dev;
              uVar14 = *(undefined4 *)((long)&psVar57->st_dev + 4);
              iVar26 = __req->ai_flags;
              _Var12 = psVar57->st_ino;
              paVar30->ai_addrlen = 0x10;
              paVar30->ai_next = (addrinfo *)0x0;
              ppaVar43 = &paVar30->ai_next;
              _Var13 = psVar57->st_uid;
              paVar30[1].ai_flags = uVar41 & 0xffff | (uint)(ushort)_Var12 << 0x10;
              paVar30->ai_flags = iVar26;
              paVar30->ai_family = (int)local_6f0;
              paVar30->ai_socktype = uVar28;
              paVar30->ai_protocol = uVar14;
              local_6a8._8_8_ = (addrinfo *)0x0;
              paVar30->ai_addr = (sockaddr *)(paVar30 + 1);
              paVar30->ai_canonname = (char *)uVar7;
              iVar26 = *(int *)&psVar35->field_0x14;
              paVar30[1].ai_socktype = 0;
              paVar30[1].ai_protocol = 0;
              paVar30[1].ai_family = iVar26;
              psVar57 = (stat64 *)&psVar57->st_nlink;
            } while ((char)_Var13 != '\0');
          }
LAB_00761b54:
          local_6f8 = (addrinfo *)CONCAT44(local_6f8._4_4_,(uint)local_6f8 + 1);
        }
        psVar35 = (servent *)psVar35->s_name;
      } while (psVar35 != (servent *)0x0);
LAB_00761b68:
      local_720 = 0;
    }
    else {
      if ((uVar41 & 0x80) != 0) {
        paVar38 = local_6f0;
        if ((addrinfo *)local_6a8._8_8_ != (addrinfo *)0x0) {
          paVar38 = (addrinfo *)local_6a8._8_8_;
        }
        iVar26 = __idna_from_dns_encoding(paVar38,local_688);
        if (iVar26 != 0) {
          if (iVar26 != -0x69) {
            local_6f8 = (addrinfo *)((ulong)local_6f8 & 0xffffffff00000000);
            local_720 = -iVar26;
            goto LAB_00761b72;
          }
          goto LAB_00761a0e;
        }
        free(paVar30);
        paVar30 = (addrinfo *)local_688._0_8_;
LAB_00761a1c:
        local_6a8._8_8_ = paVar30;
        if ((servent *)local_6a8._0_8_ != (servent *)0x0) goto LAB_00761a33;
        local_6f8 = (addrinfo *)((ulong)local_6f8 & 0xffffffff00000000);
        goto LAB_00761b68;
      }
LAB_00761a0e:
      if ((paVar30 != (addrinfo *)0x0) ||
         (paVar30 = (addrinfo *)strdup((char *)local_6f0), paVar30 != (addrinfo *)0x0))
      goto LAB_00761a1c;
LAB_00762d6f:
      local_6f8 = (addrinfo *)((ulong)local_6f8 & 0xffffffff00000000);
      local_720 = 10;
    }
LAB_00761b72:
joined_r0x00761b79:
    if ((char)local_718 != '\0') {
LAB_0076279c:
      free(local_700);
    }
    if (cStack_690 != '\0') {
      free((void *)local_6a8._0_8_);
    }
LAB_00761b8c:
    free((void *)local_6a8._8_8_);
    free(paStack_698);
    paVar30 = local_6d8;
  }
  if ((socklen_t *)local_558._0_8_ != local_710) {
    free((void *)local_558._0_8_);
  }
  if (local_720 != 0) {
    local_720 = -local_720;
    while (paVar30 != (addrinfo *)0x0) {
      paVar38 = paVar30->ai_next;
      free(paVar30->ai_canonname);
      free(paVar30);
      paVar30 = paVar38;
    }
LAB_007621ea:
    __free_in6ai(local_6d0);
    puVar47 = auStack_768;
    goto LAB_00762200;
  }
  local_744 = 0;
  uVar41 = 0;
  paVar38 = paVar30;
  if (paVar30 == (addrinfo *)0x0) {
    if ((uint)local_6f8 < 2) {
LAB_0076287b:
      __free_in6ai(local_6d0);
LAB_00761f10:
      local_720 = -2;
      puVar47 = auStack_768;
      goto LAB_00762200;
    }
    uVar56 = 0;
    local_764 = once_5;
    pthread_once(&once_5,gaiconf_init);
    lVar31 = 0;
    local_760 = 0;
LAB_00761c74:
    puVar47 = auStack_768;
    while (puVar46 != auStack_768 + -(uVar56 + 0x17 & 0xfffffffffffff000)) {
      puVar45 = puVar47 + -0x1000;
      *(undefined8 *)(puVar47 + -8) = *(undefined8 *)(puVar47 + -8);
      puVar46 = puVar47 + -0x1000;
      puVar47 = puVar47 + -0x1000;
    }
    uVar56 = (ulong)((uint)(uVar56 + 0x17) & 0xff0);
    lVar39 = -uVar56;
    if (uVar56 != 0) {
      *(undefined8 *)(puVar45 + -8) = *(undefined8 *)(puVar45 + -8);
    }
    local_748 = 1;
    local_750 = (addrinfo *)((ulong)(puVar45 + lVar39 + 0xf) & 0xfffffffffffffff0);
    puVar48 = puVar45 + lVar39;
LAB_00761cd4:
    local_718 = (long *)((long)&local_750->ai_flags + lVar31);
    if (local_719 == '\0') {
      *(undefined8 *)(puVar48 + -8) = 0x7628b1;
      __check_pf(&local_6e2,&local_6e1,&local_6d0,&local_6c8);
    }
    uVar56 = local_6c8;
    paVar38 = local_6d0;
    if (local_6d0 != (addrinfo *)0x0) {
      *(undefined8 *)(puVar48 + -8) = 0x761d13;
      qsort(paVar38,uVar56,0x18,in6aicmp);
    }
    if (paVar30 == (addrinfo *)0x0) {
      local_710 = (socklen_t *)0x0;
    }
    else {
      paVar38 = (addrinfo *)0x0;
      local_6f0 = (addrinfo *)((ulong)local_6f0 & 0xffffffff00000000);
      local_708 = (code *)0x0;
      iVar26 = -1;
      local_710 = (socklen_t *)0x0;
      psVar44 = (sockaddr *)&local_750->ai_socktype;
      local_740 = (addrinfo *)local_688;
      local_700 = (addrinfo *)(local_5e8 + 8);
      do {
        *(addrinfo **)(psVar44[-1].sa_data + 6) = paVar30;
        psVar44[2].sa_data[2] = -1;
        psVar44[2].sa_data[3] = -1;
        psVar44[2].sa_data[4] = -1;
        psVar44[2].sa_data[5] = -1;
        local_718[(long)local_708] = (long)local_708;
        if ((paVar38 == (addrinfo *)0x0) ||
           (uVar41 = paVar30->ai_addrlen, paVar38->ai_addrlen != uVar41)) {
LAB_00761da8:
          psVar57 = local_728;
          psVar44[1].sa_data[0xb] = '\0';
          psVar44[1].sa_data[0xc] = '\0';
          psVar44[1].sa_data[0xd] = '\0';
          psVar44[2].sa_family = 0xffff;
          psVar44[2].sa_data[0] = -1;
          psVar44[2].sa_data[1] = -1;
          if (iVar26 != -1) {
            if (((int)local_6f0 != 2) || (paVar30->ai_family != 10)) {
              _local_5e8 = (undefined1  [16])0x0;
              *(undefined8 *)(puVar48 + -8) = 0x761dfa;
              connect(iVar26,(sockaddr *)psVar57,0x10);
              goto LAB_00761dfa;
            }
            *(undefined8 *)(puVar48 + -8) = 0x762278;
            __close_nocancel(iVar26);
          }
          iVar26 = paVar30->ai_family;
          local_6f0 = (addrinfo *)CONCAT44(local_6f0._4_4_,iVar26);
          *(undefined8 *)(puVar48 + -8) = 0x762290;
          iVar26 = socket(iVar26,0x80002,0);
LAB_00761dfa:
          __len = paVar30->ai_addrlen;
          psVar4 = paVar30->ai_addr;
          local_688._0_4_ = 0x1c;
          local_6f8 = (addrinfo *)CONCAT44(local_6f8._4_4_,paVar30->ai_family);
          if (iVar26 == -1) goto LAB_00761e32;
LAB_00761e1c:
          *(undefined8 *)(puVar48 + -8) = 0x761e2a;
          iVar27 = connect(iVar26,psVar4,__len);
          paVar38 = local_740;
          if (iVar27 == 0) {
            *(undefined8 *)(puVar48 + -8) = 0x762322;
            iVar27 = getsockname(iVar26,psVar44,(socklen_t *)paVar38);
            if (iVar27 != 0) goto LAB_00761e32;
            psVar44[1].sa_data[10] = '\x1c';
            local_719 = paVar30->ai_family == 2;
            psVar44[1].sa_data[0xb] = '\x01';
            local_6f8 = local_6d0;
            if (local_6d0 != (addrinfo *)0x0) {
              if (((int)local_6f0 == 2) && ((bool)local_719)) {
                uVar28 = *(undefined4 *)(psVar44->sa_data + 2);
                stack0xfffffffffffffa20 = 0;
                if ((char)uVar28 == '\x7f') {
                  uVar28 = 0x100007f;
                }
                local_5d8 = CONCAT44(uVar28,0xffff0000);
              }
              else {
                unique0x10000c1b = *(__ino64_t *)(psVar44->sa_data + 6);
                local_5d8._0_2_ = psVar44[1].sa_family;
                local_5d8._2_1_ = psVar44[1].sa_data[0];
                local_5d8._3_1_ = psVar44[1].sa_data[1];
                local_5d8._4_1_ = psVar44[1].sa_data[2];
                local_5d8._5_1_ = psVar44[1].sa_data[3];
                local_5d8._6_1_ = psVar44[1].sa_data[4];
                local_5d8._7_1_ = psVar44[1].sa_data[5];
              }
              uVar56 = 0;
              local_738 = (code *)CONCAT44(local_738._4_4_,iVar26);
              uVar58 = local_6c8;
              local_730 = paVar30;
              while (uVar55 = uVar58, uVar56 < uVar55) {
                while( true ) {
                  paVar30 = local_700;
                  uVar58 = uVar55 + uVar56 >> 1;
                  piVar2 = &local_6f8->ai_flags +
                           ((uVar55 + uVar56 & 0xfffffffffffffffe) + uVar58) * 2;
                  *(undefined8 *)(puVar48 + -8) = 0x76243e;
                  iVar26 = bcmp(paVar30,piVar2 + 2,0x10);
                  if (iVar26 < 0) break;
                  if (iVar26 == 0) {
                    *(short *)(psVar44[1].sa_data + 0xc) = (short)*piVar2;
                    piVar2 = piVar2 + 1;
                    uVar15 = *(undefined1 *)((long)piVar2 + 2);
                    uVar16 = *(undefined1 *)((long)piVar2 + 3);
                    psVar44[2].sa_family = *(undefined2 *)piVar2;
                    psVar44[2].sa_data[0] = uVar15;
                    psVar44[2].sa_data[1] = uVar16;
                    paVar30 = local_730;
                    iVar26 = (int)local_738;
                    goto LAB_00762353;
                  }
                  uVar56 = uVar58 + 1;
                  if (uVar55 <= uVar56) goto LAB_0076244d;
                }
              }
LAB_0076244d:
              paVar30 = local_730;
              iVar26 = (int)local_738;
            }
LAB_00762353:
            paVar38 = paVar30;
            if (((int)local_6f0 == 10) && (local_719 != '\0')) {
              if ((*(int *)(psVar44->sa_data + 6) != 0) ||
                 ((*(int *)(psVar44->sa_data + 10) != 0 ||
                  (iVar27._0_2_ = psVar44[1].sa_family, iVar27._2_1_ = psVar44[1].sa_data[0],
                  iVar27._3_1_ = psVar44[1].sa_data[1], iVar27 != -0x10000)))) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(puVar48 + -8) = 0x7637ef;
                __assert_fail("IN6_IS_ADDR_V4MAPPED (sin6->sin6_addr.s6_addr32)",
                              "../sysdeps/posix/getaddrinfo.c",0x9fa,"getaddrinfo");
              }
              uVar28 = *(undefined4 *)(psVar44[1].sa_data + 2);
              psVar44[1].sa_data[10] = '\x10';
              psVar44->sa_family = 2;
              *(undefined4 *)(psVar44->sa_data + 2) = uVar28;
              local_6f0 = (addrinfo *)CONCAT44(local_6f0._4_4_,10);
            }
          }
          else {
LAB_00761e32:
            if ((int)in_FS_OFFSET[-0xb] == 0x61) goto LAB_00761e3f;
LAB_00761e90:
            psVar44[1].sa_data[10] = '\0';
            paVar38 = paVar30;
          }
          goto LAB_00761e95;
        }
        psVar4 = paVar38->ai_addr;
        __s2 = paVar30->ai_addr;
        *(undefined8 *)(puVar48 + -8) = 0x7622b3;
        iVar27 = bcmp(psVar4,__s2,(ulong)uVar41);
        if (iVar27 != 0) goto LAB_00761da8;
        bVar24 = psVar44[-2].sa_data[10];
        psVar4 = psVar44 + -3;
        if (bVar24 < 8) {
          if ((bVar24 & 4) == 0) {
            if ((bVar24 != 0) &&
               (*(char *)&psVar44->sa_family = (char)psVar4->sa_family, (bVar24 & 2) != 0)) {
              *(undefined2 *)(psVar44->sa_data + ((ulong)bVar24 - 4)) =
                   *(undefined2 *)(psVar4->sa_data + ((ulong)bVar24 - 4));
            }
          }
          else {
            cVar25 = psVar4->sa_data[0];
            cVar23 = psVar4->sa_data[1];
            psVar44->sa_family = psVar4->sa_family;
            psVar44->sa_data[0] = cVar25;
            psVar44->sa_data[1] = cVar23;
            *(undefined4 *)(psVar44->sa_data + ((ulong)bVar24 - 6)) =
                 *(undefined4 *)(psVar4->sa_data + ((ulong)bVar24 - 6));
          }
        }
        else {
          cVar25 = psVar44[-3].sa_data[0];
          cVar23 = psVar44[-3].sa_data[1];
          cVar17 = psVar44[-3].sa_data[2];
          cVar18 = psVar44[-3].sa_data[3];
          cVar19 = psVar44[-3].sa_data[4];
          cVar20 = psVar44[-3].sa_data[5];
          puVar53 = (undefined8 *)((ulong)(psVar44->sa_data + 6) & 0xfffffffffffffff8);
          psVar44->sa_family = psVar44[-3].sa_family;
          psVar44->sa_data[0] = cVar25;
          psVar44->sa_data[1] = cVar23;
          psVar44->sa_data[2] = cVar17;
          psVar44->sa_data[3] = cVar18;
          psVar44->sa_data[4] = cVar19;
          psVar44->sa_data[5] = cVar20;
          *(undefined8 *)(psVar44->sa_data + ((ulong)bVar24 - 10)) =
               *(undefined8 *)(psVar4->sa_data + ((ulong)bVar24 - 10));
          lVar31 = (long)psVar44 - (long)puVar53;
          puVar49 = (undefined8 *)((long)psVar4 - lVar31);
          for (uVar56 = (ulong)((uint)bVar24 + (int)lVar31 >> 3); uVar56 != 0; uVar56 = uVar56 - 1)
          {
            *puVar53 = *puVar49;
            puVar49 = puVar49 + (ulong)bVar60 * -2 + 1;
            puVar53 = puVar53 + (ulong)bVar60 * -2 + 1;
          }
        }
        cVar25 = psVar44[-2].sa_data[0xb];
        psVar44[1].sa_data[10] = bVar24;
        psVar44[1].sa_data[0xb] = cVar25;
        *(undefined2 *)(psVar44[1].sa_data + 0xc) = *(undefined2 *)(psVar44[-2].sa_data + 0xc);
        cVar25 = psVar44[-1].sa_data[0];
        cVar23 = psVar44[-1].sa_data[1];
        psVar44[2].sa_family = psVar44[-1].sa_family;
        psVar44[2].sa_data[0] = cVar25;
        psVar44[2].sa_data[1] = cVar23;
        paVar38 = paVar30;
LAB_00761e95:
        psVar5 = (socklen_t *)paVar38->ai_canonname;
        if (psVar5 != (socklen_t *)0x0) {
          if (local_710 != (socklen_t *)0x0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar48 + -8) = 0x7635bb;
            __assert_fail("canonname == NULL","../sysdeps/posix/getaddrinfo.c",0xa11,"getaddrinfo");
          }
          paVar38->ai_canonname = (char *)0x0;
          local_710 = psVar5;
        }
        paVar30 = paVar38->ai_next;
        local_708 = local_708 + 1;
        psVar44 = psVar44 + 3;
      } while (paVar30 != (addrinfo *)0x0);
      if (iVar26 != -1) {
        *(undefined8 *)(puVar48 + -8) = 0x762597;
        __close_nocancel(iVar26);
      }
    }
    plVar34 = local_718;
    sVar54 = local_760;
    local_688._0_8_ = local_750;
    local_688._8_4_ = local_744;
    if (gaiconf_reload_flag_ever_set == 0) {
      *(undefined8 *)(puVar48 + -8) = 0x7625e5;
      qsort_r(plVar34,sVar54,8,rfc3484_sort,local_688);
    }
    else {
      LOCK();
      bVar59 = lock_3 == 0;
      if (bVar59) {
        lock_3 = 1;
      }
      UNLOCK();
      if (!bVar59) {
        *(undefined8 *)(puVar48 + -8) = 0x763654;
        __lll_lock_wait_private(&lock_3);
      }
      psVar57 = local_728;
      if ((local_764 != 0) && (gaiconf_reload_flag != 0)) {
        *(undefined8 *)(puVar48 + -8) = 0x7636a8;
        iVar26 = stat64("/etc/gai.conf",psVar57);
        if ((iVar26 != 0) || ((local_590 != gaiconf_mtime || (local_588 != DAT_0093db58)))) {
          *(undefined8 *)(puVar48 + -8) = 0x7636c1;
          gaiconf_init();
        }
      }
      plVar34 = local_718;
      sVar54 = local_760;
      *(undefined8 *)(puVar48 + -8) = 0x762e77;
      qsort_r(plVar34,sVar54,8,rfc3484_sort,local_688);
      iVar26 = lock_3;
      LOCK();
      lock_3 = 0;
      UNLOCK();
      if (1 < iVar26) {
        *(undefined8 *)(puVar48 + -8) = 0x762e94;
        __lll_lock_wake_private(&lock_3);
      }
    }
    paVar37 = local_750;
    paVar30 = *(addrinfo **)(local_750 + *local_718);
    paVar38 = paVar30;
    if (1 < (int)local_744) {
      plVar34 = local_718 + 1;
      paVar42 = paVar30;
      do {
        lVar31 = *plVar34;
        plVar34 = plVar34 + 1;
        paVar38 = *(addrinfo **)(local_750 + lVar31);
        paVar42->ai_next = paVar38;
        paVar42 = paVar38;
      } while (plVar34 != local_718 + (ulong)(local_744 - 2) + 2);
    }
    paVar38->ai_next = (addrinfo *)0x0;
    paVar30->ai_canonname = (char *)local_710;
    local_6d8 = paVar30;
    if (local_748 == 0) {
      *(undefined8 *)(puVar48 + -8) = 0x762678;
      free(paVar37);
    }
  }
  else {
    do {
      ppaVar43 = &paVar38->ai_next;
      uVar41 = uVar41 + 1;
      paVar38 = *ppaVar43;
    } while (*ppaVar43 != (addrinfo *)0x0);
    local_744 = uVar41;
    if (1 < (uint)local_6f8) {
      local_764 = once_5;
      pthread_once(&once_5,gaiconf_init);
      local_760 = (size_t)(int)uVar41;
      uVar56 = local_760 * 0x38;
      iVar26 = __libc_alloca_cutoff(uVar56);
      if ((uVar56 < 0x1001) || (iVar26 != 0)) {
        lVar31 = local_760 * 0x30;
        goto LAB_00761c74;
      }
      local_750 = (addrinfo *)malloc(uVar56);
      if (local_750 == (addrinfo *)0x0) {
        __free_in6ai(local_6d0);
        local_720 = -10;
        puVar47 = auStack_768;
        goto LAB_00762200;
      }
      local_748 = 0;
      lVar31 = local_760 * 0x30;
      puVar48 = auStack_768;
      goto LAB_00761cd4;
    }
  }
  paVar38 = local_6d0;
  *(undefined8 *)(puVar48 + -8) = 0x762684;
  __free_in6ai(paVar38);
  *local_758 = paVar30;
  puVar47 = puVar48;
LAB_00762200:
  if (local_40 == in_FS_OFFSET[5]) {
    return local_720;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar47 + -8) = 0x76381e;
  __stack_chk_fail_local();
}

