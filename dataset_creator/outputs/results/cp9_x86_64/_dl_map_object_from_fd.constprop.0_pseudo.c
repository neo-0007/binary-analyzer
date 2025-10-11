
long * _dl_map_object_from_fd_constprop_0
                 (undefined8 param_1,int param_2,ulong *param_3,void *param_4,undefined8 param_5,
                 undefined4 param_6,uint param_7,undefined8 param_8,long param_9)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  __off64_t _Var4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *__src;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  void *pvVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  void *pvVar19;
  ulong uVar20;
  uint *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  uint *puVar24;
  long lVar25;
  uint **ppuVar26;
  uint **ppuVar27;
  uint **ppuVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  ulong uVar31;
  undefined1 uVar32;
  uint uVar33;
  void *pvVar34;
  uint uVar35;
  ulong uVar36;
  char *pcVar37;
  size_t sVar38;
  long in_FS_OFFSET;
  bool bVar39;
  uint *local_158;
  void *local_150;
  uint local_144;
  void *local_140;
  void *local_138;
  undefined1 *local_130;
  long local_128;
  undefined8 local_120;
  ulong *local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  uint local_f0;
  int local_ec;
  ulong local_e8;
  void *local_e0;
  undefined1 local_d8 [16];
  stat local_c8;
  
  ppuVar26 = &local_158;
  ppuVar28 = &local_158;
  local_118 = param_3;
  local_108 = param_4;
  local_100 = param_1;
  local_ec = param_2;
  local_128 = _dl_debug_update(param_9);
  local_144 = param_7 & 0x20000000;
  if (local_144 == 0) {
    iVar11 = fstat(local_ec,&local_c8);
    if (iVar11 < 0) {
      pcVar37 = "cannot stat shared object";
      plVar13 = (long *)0x0;
      local_f0 = *(uint *)(in_FS_OFFSET + -0x58);
      ppuVar27 = &local_158;
      if (local_ec != -1) {
        __close_nocancel();
        ppuVar27 = &local_158;
      }
      goto LAB_007aafe2;
    }
    local_d8._8_8_ = local_c8.st_ino;
    local_d8._0_8_ = local_c8.st_dev;
    for (plVar13 = (long *)(&_dl_ns)[param_9 * 0x14]; plVar13 != (long *)0x0;
        plVar13 = (long *)plVar13[3]) {
      if ((((*(byte *)((long)plVar13 + 0x31e) & 2) == 0) && (plVar13[0x76] == local_c8.st_dev)) &&
         (plVar13[0x77] == local_c8.st_ino)) {
        __close_nocancel(local_ec);
        free(local_108);
        add_name_to_object_isra_0(plVar13[7],local_100);
        return plVar13;
      }
    }
  }
  else {
    if (param_9 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("nsid == LM_ID_BASE","dl-load.c",0x3c3,"_dl_map_object_from_fd");
    }
    local_d8 = (undefined1  [16])0x0;
  }
  local_f0 = param_7 & 4;
  if (local_f0 != 0) {
    free(local_108);
    __close_nocancel(local_ec);
    return (long *)0x0;
  }
  if (((byte)_dl_debug_mask & 0x40) != 0) {
    _dl_debug_printf("file=%s [%lu];  generating link map\n",local_100,param_9);
  }
  plVar13 = (long *)_dl_new_object(local_108,local_100,param_6,param_5);
  if (plVar13 == (long *)0x0) {
    pcVar37 = "cannot create shared object descriptor";
    local_f0 = *(uint *)(in_FS_OFFSET + -0x58);
    ppuVar27 = &local_158;
    if (local_ec != -1) {
      __close_nocancel(local_ec);
      ppuVar27 = &local_158;
    }
    goto LAB_007aafe2;
  }
  uVar14 = local_118[5];
  plVar13[0x56] = local_118[4];
  local_140 = (void *)CONCAT62(local_140._2_6_,(short)local_118[3]);
  uVar17 = local_118[8];
  *(ushort *)(plVar13 + 0x57) = (ushort)uVar17;
  lVar25 = (ulong)(ushort)uVar17 * 0x38;
  if (*local_118 < lVar25 + uVar14) {
    for (; ppuVar28 != (uint **)((long)&local_158 - (lVar25 + 0x17U & 0xfffffffffffff000));
        ppuVar28 = (uint **)((long)ppuVar28 + -0x1000)) {
      *(undefined8 *)((long)ppuVar28 + -8) = *(undefined8 *)((long)ppuVar28 + -8);
    }
    uVar14 = (ulong)((uint)(lVar25 + 0x17U) & 0xff0);
    lVar16 = -uVar14;
    ppuVar26 = (uint **)((long)ppuVar28 + lVar16);
    puVar29 = (undefined1 *)((long)ppuVar28 + lVar16);
    if (uVar14 != 0) {
      *(undefined8 *)((long)ppuVar28 + -8) = *(undefined8 *)((long)ppuVar28 + -8);
    }
    iVar11 = local_ec;
    local_158 = (uint *)((ulong)((long)ppuVar28 + lVar16 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((long)ppuVar28 + lVar16 + -8) = 0x7ab339;
    lVar16 = __pread64_nocancel(iVar11,(uint *)((ulong)((long)ppuVar28 + lVar16 + 0xf) &
                                               0xfffffffffffffff0),lVar25);
    if (lVar16 != lVar25) {
      pcVar37 = "cannot read file data";
      goto LAB_007abe6e;
    }
  }
  else {
    local_158 = (uint *)((long)local_118 + uVar14 + 8);
  }
  lVar25 = _dl_tls_dtv_slotinfo_list;
  pvVar19 = _dl_pagesize;
  uVar2 = *(ushort *)(plVar13 + 0x57);
  local_130 = (undefined1 *)ppuVar26;
  uVar14 = (ulong)uVar2 * 0x38 + 0xf;
  puVar30 = (undefined1 *)((long)ppuVar26 + -(uVar14 & 0xfffffffffffff000));
  puVar29 = local_130;
  for (; local_130 = puVar29, ppuVar26 != (uint **)puVar30;
      ppuVar26 = (uint **)((long)ppuVar26 + -0x1000)) {
    *(undefined8 *)((long)ppuVar26 + -8) = *(undefined8 *)((long)ppuVar26 + -8);
    puVar29 = local_130;
  }
  uVar14 = (ulong)((uint)uVar14 & 0xff0);
  lVar16 = -uVar14;
  puVar23 = (ulong *)((long)ppuVar26 + lVar16);
  if (uVar14 != 0) {
    *(undefined8 *)((long)ppuVar26 + -8) = *(undefined8 *)((long)ppuVar26 + -8);
  }
  local_138 = (void *)((ulong)((long)ppuVar26 + lVar16 + 7) >> 3);
  if (local_158 < local_158 + (ulong)uVar2 * 0xe) {
    local_110 = (void *)((ulong)local_110 & 0xffffffffffffff00);
    uVar31 = 0;
    local_e8 = 7;
    local_120 = _dl_tls_dtv_slotinfo_list;
    local_e0 = (void *)((ulong)local_e0 & 0xffffffffffffff00);
    local_150 = _dl_pagesize;
    uVar14 = (long)_dl_pagesize - 1;
    local_f8 = (void *)-(long)_dl_pagesize;
    uVar17 = 0;
    puVar24 = local_158;
    do {
      uVar35 = *puVar24;
      if (uVar35 == 7) {
        if (*(long *)(puVar24 + 10) != 0) {
          uVar20 = *(ulong *)(puVar24 + 0xc);
          plVar13[0x88] = *(long *)(puVar24 + 10);
          plVar13[0x89] = uVar20;
          uVar5 = *(ulong *)(puVar24 + 4);
          if (uVar20 != 0) {
            uVar20 = uVar20 - 1 & uVar5;
          }
          plVar13[0x8a] = uVar20;
          lVar18 = *(long *)(puVar24 + 8);
          plVar13[0x86] = uVar5;
          plVar13[0x87] = lVar18;
          if (((*(byte *)((long)plVar13 + 0x31c) & 3) != 1) && (lVar25 == 0)) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)((long)ppuVar26 + lVar16 + -8) = &UNK_007ab1b3;
            __assert_fail("false && \"TLS not initialized in static application\"","dl-load.c",0x4b3
                          ,"_dl_map_object_from_fd");
          }
        }
      }
      else if (uVar35 < 8) {
        if (uVar35 == 2) {
          if (*(long *)(puVar24 + 8) == 0) {
            local_110 = (void *)CONCAT71(local_110._1_7_,1);
          }
          else {
            plVar13[2] = *(long *)(puVar24 + 4);
            *(short *)((long)plVar13 + 0x2ba) = (short)(*(ulong *)(puVar24 + 10) >> 4);
            *(byte *)((long)plVar13 + 0x31e) =
                 (byte)(((puVar24[1] >> 1 ^ 1) & 1) << 5) | *(byte *)((long)plVar13 + 0x31e) & 0xdf;
          }
        }
        else if (uVar35 == 6) {
          plVar13[0x55] = *(long *)(puVar24 + 4);
        }
        else if (uVar35 == 1) {
          uVar20 = *(ulong *)(puVar24 + 4);
          uVar5 = *(ulong *)(puVar24 + 2);
          if ((uVar20 - uVar5 & uVar14) != 0) {
            pcVar37 = "ELF load command address/offset not page-aligned";
            goto LAB_007aaf8f;
          }
          lVar18 = *(long *)(puVar24 + 8);
          lVar7 = *(long *)(puVar24 + 10);
          *(ulong *)((long)ppuVar26 + uVar17 * 0x38 + lVar16) = uVar20 & (ulong)local_f8;
          ((ulong *)((long)ppuVar26 + uVar17 * 0x38 + lVar16))[1] =
               uVar14 + lVar18 + uVar20 & (ulong)local_f8;
          lVar8 = uVar17 * 0x38 + lVar16;
          *(ulong *)((long)ppuVar26 + lVar8 + 0x18) = uVar20 + lVar7;
          uVar6 = *(ulong *)(puVar24 + 0xc);
          *(ulong *)((long)ppuVar26 + lVar8 + 0x10) = lVar18 + uVar20;
          uVar36 = uVar6;
          if (uVar6 <= uVar31) {
            uVar36 = uVar31;
          }
          if ((uVar6 - 1 & uVar6) == 0) {
            uVar31 = uVar36;
          }
          *(ulong *)((long)ppuVar26 + lVar8 + 0x28) = uVar5 & (ulong)local_f8;
          if (1 < uVar17 + 1) {
            uVar32 = (byte)local_e0;
            if (*(ulong *)((long)ppuVar26 + lVar8 + -0x30) != (uVar20 & (ulong)local_f8)) {
              uVar32 = 1;
            }
            local_e0 = (void *)CONCAT71(local_e0._1_7_,uVar32);
          }
          *(uint *)((long)ppuVar26 + uVar17 * 0x38 + lVar16 + 0x30) =
               0x73516240 >> (sbyte)((puVar24[1] & 7) << 2) & 0xf;
          uVar17 = uVar17 + 1;
        }
      }
      else if (uVar35 == 0x6474e551) {
        local_e8 = (ulong)puVar24[1];
      }
      else if (uVar35 == 0x6474e552) {
        lVar18 = *(long *)(puVar24 + 10);
        plVar13[0x8e] = *(long *)(puVar24 + 4);
        plVar13[0x8f] = lVar18;
      }
      puVar24 = puVar24 + 0xe;
    } while (puVar24 < local_158 + (ulong)uVar2 * 0xe);
    if (uVar17 != 0) {
      puVar22 = (ulong *)((long)ppuVar26 + lVar16 + 0x20);
      uVar14 = 0;
      do {
        uVar20 = uVar14;
        uVar14 = uVar20 + 1;
        *puVar22 = uVar31;
        puVar22 = puVar22 + 7;
      } while (uVar14 != uVar17);
      local_120 = CONCAT44((int)((ulong)lVar25 >> 0x20),(uint)(ushort)local_140);
      if ((ushort)local_140 == 3) {
        if ((plVar13[2] != 0) && ((char)local_110 == '\0')) {
          uVar14 = *(ulong *)((long)local_138 * 8);
          pvVar15 = *(void **)((long)local_138 * 8 + 0x20);
          local_f8 = (void *)(*(long *)((long)ppuVar26 + uVar20 * 0x38 + lVar16 + 0x18) - uVar14);
          if (pvVar19 < pvVar15) {
            local_110 = (void *)((long)pvVar15 + (long)local_f8);
            if (local_f8 < pvVar15) {
              local_110 = (void *)((long)pvVar15 * 2);
            }
            *(undefined8 *)((long)ppuVar26 + lVar16 + -8) = 0x7abce4;
            pvVar19 = mmap64((void *)(_dl_use_load_bias & uVar14),(size_t)local_110,0,0x22,-1,0);
            if (pvVar19 != (void *)0xffffffffffffffff) {
              iVar11 = *(int *)((long)local_138 * 8 + 0x30);
              _Var4 = *(__off64_t *)((long)local_138 * 8 + 0x28);
              local_140 = (void *)CONCAT44(local_140._4_4_,iVar11);
              *(undefined8 *)((long)ppuVar26 + lVar16 + -8) = 0x7abd3c;
              local_150 = pvVar19;
              pvVar15 = mmap64((void *)(((long)pvVar15 - 1U) + (long)pvVar19 & -(long)pvVar15),
                               (size_t)local_f8,iVar11,0x812,local_ec,_Var4);
              pvVar19 = local_150;
              if (pvVar15 != (void *)0xffffffffffffffff) {
                sVar38 = (long)pvVar15 - (long)local_150;
                uVar35 = (uint)local_140;
                if (sVar38 != 0) {
                  local_150 = (void *)CONCAT44(local_150._4_4_,(uint)local_140);
                  local_140 = pvVar19;
                  *(undefined8 *)((long)ppuVar26 + lVar16 + -8) = 0x7abf55;
                  munmap(pvVar19,sVar38);
                  pvVar19 = local_140;
                  uVar35 = (uint)local_150;
                }
                pvVar34 = (void *)(((long)_dl_pagesize - 1U) + (long)local_f8 + (long)pvVar15 &
                                  -(long)_dl_pagesize);
                sVar38 = ((long)local_110 + (long)pvVar19) - (long)pvVar34;
                if (sVar38 != 0) {
                  local_110 = (void *)CONCAT44(local_110._4_4_,uVar35);
                  *(undefined8 *)((long)ppuVar26 + lVar16 + -8) = 0x7abf33;
                  munmap(pvVar34,sVar38);
                  uVar35 = (uint)local_110;
                }
                plVar13[0x6b] = (long)pvVar15;
                goto LAB_007aae08;
              }
              *(undefined8 *)((long)ppuVar26 + lVar16 + -8) = 0x7ac0a9;
              munmap(local_150,(size_t)local_110);
            }
LAB_007aaf71:
            pcVar37 = "failed to map segment from shared object";
          }
          else {
            iVar11 = *(int *)((long)local_138 * 8 + 0x30);
            _Var4 = *(__off64_t *)((long)local_138 * 8 + 0x28);
            local_110._4_4_ = (undefined4)((ulong)local_110 >> 0x20);
            local_110 = (void *)CONCAT44(local_110._4_4_,iVar11);
            *(undefined8 *)((long)ppuVar26 + lVar16 + -8) = 0x7aaded;
            pvVar15 = mmap64((void *)(_dl_use_load_bias & uVar14),(size_t)local_f8,iVar11,0x802,
                             local_ec,_Var4);
            plVar13[0x6b] = (long)pvVar15;
            uVar35 = (uint)local_110;
            if (pvVar15 == (void *)0xffffffffffffffff) goto LAB_007aaf71;
LAB_007aae08:
            plVar13[0x6c] = (long)local_f8 + (long)pvVar15;
            *plVar13 = (long)pvVar15 - uVar14;
            if ((byte)local_e0 == '\0') {
LAB_007aae74:
              *(byte *)((long)plVar13 + 0x31e) = *(byte *)((long)plVar13 + 0x31e) | 4;
              do {
                do {
                  if ((uVar35 & 4) != 0) {
                    plVar13[0x6d] = puVar23[1] + *plVar13;
                  }
                  if (plVar13[0x55] == 0) {
                    uVar14 = puVar23[5];
                    uVar31 = local_118[5];
                    if ((uVar14 <= uVar31) &&
                       (uVar31 + (ulong)(ushort)local_118[8] * 0x38 <=
                        (puVar23[1] + uVar14) - *puVar23)) {
                      plVar13[0x55] = (uVar31 + *puVar23) - uVar14;
                    }
                  }
                  if (puVar23[2] < puVar23[3]) {
                    pvVar34 = (void *)(puVar23[2] + *plVar13);
                    pvVar19 = (void *)(puVar23[3] + *plVar13);
                    pvVar15 = (void *)((long)pvVar34 + -1 + (long)_dl_pagesize & -(long)_dl_pagesize
                                      );
                    if (pvVar19 < pvVar15) {
                      pvVar15 = pvVar19;
                    }
                    if (pvVar34 < pvVar15) {
                      if ((uVar35 & 2) == 0) {
                        local_110 = (void *)CONCAT44(local_110._4_4_,uVar35);
                        *(undefined8 *)((long)ppuVar26 + lVar16 + -8) = 0x7abfcb;
                        local_138 = pvVar19;
                        local_e0 = pvVar34;
                        iVar11 = mprotect((void *)(-(long)_dl_pagesize & (ulong)pvVar34),
                                          (size_t)_dl_pagesize,uVar35 | 2);
                        pvVar19 = local_e0;
                        uVar9 = (uint)local_110;
                        if (iVar11 < 0) goto LAB_007abb9b;
                        local_110 = local_138;
                        sVar38 = (long)pvVar15 - (long)local_e0;
                        local_e0 = (void *)CONCAT44(local_e0._4_4_,uVar9);
                        *(undefined8 *)((long)ppuVar26 + lVar16 + -8) = 0x7ac006;
                        pvVar19 = memset(pvVar19,0,sVar38);
                        *(undefined8 *)((long)ppuVar26 + lVar16 + -8) = 0x7ac021;
                        mprotect((void *)(-(long)_dl_pagesize & (ulong)pvVar19),(size_t)_dl_pagesize
                                 ,(uint)local_e0);
                        pvVar19 = local_110;
                        uVar35 = (uint)local_e0;
                      }
                      else {
                        local_e0 = (void *)CONCAT44(local_e0._4_4_,uVar35);
                        *(undefined8 *)((long)ppuVar26 + lVar16 + -8) = 0x7aaef3;
                        local_110 = pvVar19;
                        memset(pvVar34,0,(long)pvVar15 - (long)pvVar34);
                        pvVar19 = local_110;
                        uVar35 = (uint)local_e0;
                      }
                    }
                    if (pvVar15 < pvVar19) {
                      *(undefined8 *)((long)ppuVar26 + lVar16 + -8) = 0x7abb54;
                      pvVar19 = mmap64(pvVar15,(long)pvVar19 - (long)pvVar15,uVar35,0x32,-1,0);
                      if (pvVar19 == (void *)0xffffffffffffffff) {
                        pcVar37 = "cannot map zero-fill pages";
                        goto LAB_007aaf78;
                      }
                    }
                  }
                  puVar23 = puVar23 + 7;
LAB_007aaf0e:
                  puVar29 = local_130;
                  if ((ulong *)((long)ppuVar26 + uVar17 * 0x38 + lVar16) <= puVar23) {
                    if (plVar13[2] != 0) {
                      lVar25 = *plVar13;
                      puVar23 = (ulong *)(plVar13[2] + lVar25);
                      plVar13[2] = (long)puVar23;
                      if (puVar23 != (ulong *)0x0) {
                        uVar14 = *puVar23;
                        goto joined_r0x007ab38a;
                      }
                    }
                    uVar35 = *(uint *)((long)plVar13 + 0x3ec);
                    goto LAB_007ab56f;
                  }
                  uVar14 = puVar23[1];
                  uVar31 = *puVar23;
                  uVar35 = (uint)puVar23[6];
                } while (uVar14 <= uVar31);
                uVar20 = puVar23[5];
                lVar25 = *plVar13;
                local_e0 = (void *)CONCAT44(local_e0._4_4_,uVar35);
                *(undefined8 *)((long)ppuVar26 + lVar16 + -8) = 0x7aaf60;
                pvVar19 = mmap64((void *)(uVar31 + lVar25),uVar14 - uVar31,uVar35,0x812,local_ec,
                                 uVar20);
                uVar35 = (uint)local_e0;
              } while (pvVar19 != (void *)0xffffffffffffffff);
              goto LAB_007aaf71;
            }
            local_e0 = (void *)CONCAT44(local_e0._4_4_,uVar35);
            uVar31 = *(ulong *)((long)ppuVar26 + uVar17 * 0x38 + lVar16 + -0x38);
            uVar20 = *(ulong *)((long)local_138 * 8 + 8);
            if (uVar31 < uVar20) {
              pcVar37 = "ELF load command address/offset not page-aligned";
            }
            else {
              *(undefined8 *)((long)ppuVar26 + lVar16 + -8) = 0x7aae65;
              iVar11 = mprotect((void *)(((long)pvVar15 - uVar14) + uVar20),uVar31 - uVar20,0);
              uVar35 = (uint)local_e0;
              if (-1 < iVar11) goto LAB_007aae74;
LAB_007abb9b:
              pcVar37 = "cannot change memory protections";
            }
          }
LAB_007aaf78:
          *(undefined1 (*) [16])(plVar13 + 0x6b) = (undefined1  [16])0x0;
          puVar29 = local_130;
          goto LAB_007aaf8f;
        }
      }
      else {
        if (local_144 == 0) {
          pcVar37 = "cannot dynamically load executable";
          goto LAB_007aaf8f;
        }
        if (plVar13[2] == 0) {
          if ((char)local_110 == '\0') {
            lVar25 = *(long *)((long)ppuVar26 + (uVar17 - 1) * 0x38 + lVar16 + 0x18);
LAB_007abbe1:
            local_f8 = (void *)(lVar25 - *(long *)((long)local_138 * 8));
            plVar13[0x6b] = *(long *)((long)local_138 * 8) + *plVar13;
            plVar13[0x6c] = lVar25 + *plVar13;
            *(byte *)((long)plVar13 + 0x31e) =
                 *(byte *)((long)plVar13 + 0x31e) & 0xfb | ((byte)local_e0 ^ 1) << 2;
            puVar23 = (ulong *)((long)ppuVar26 + lVar16);
            goto LAB_007aaf0e;
          }
        }
        else if ((char)local_110 == '\0') {
          lVar25 = *(long *)((long)ppuVar26 + (uVar17 - 1) * 0x38 + lVar16 + 0x18);
          goto LAB_007abbe1;
        }
      }
      pcVar37 = "object file has no dynamic section";
      goto LAB_007aaf8f;
    }
  }
  pcVar37 = "object file has no loadable segments";
  goto LAB_007aaf8f;
joined_r0x007ab38a:
  if (uVar14 == 0) goto LAB_007ab428;
  if (uVar14 < 0x23) {
LAB_007ab3c9:
    plVar13[uVar14 + 8] = (long)puVar23;
  }
  else {
    if (0x6fffffff - uVar14 < 0x10) {
      uVar14 = 0x70000022 - uVar14;
      goto LAB_007ab3c9;
    }
    uVar35 = (int)uVar14 * 2;
    if (0xfffffff8 < uVar35) {
      uVar14 = (ulong)(0x32 - ((int)uVar35 >> 1));
      goto LAB_007ab3c9;
    }
    if (0x6ffffdff - uVar14 < 0xc) {
      uVar14 = 0x6ffffe35 - uVar14;
      goto LAB_007ab3c9;
    }
    if (0x6ffffeff - uVar14 < 0xb) {
      uVar14 = 0x6fffff41 - uVar14;
      goto LAB_007ab3c9;
    }
  }
  uVar14 = puVar23[2];
  puVar23 = puVar23 + 2;
  goto joined_r0x007ab38a;
LAB_007ab428:
  if ((lVar25 != 0) && ((*(byte *)((long)plVar13 + 0x31e) & 0x20) == 0)) {
    if (plVar13[0xc] != 0) {
      plVar1 = (long *)(plVar13[0xc] + 8);
      *plVar1 = *plVar1 + lVar25;
    }
    if (plVar13[0xb] != 0) {
      plVar1 = (long *)(plVar13[0xb] + 8);
      *plVar1 = *plVar1 + lVar25;
    }
    if (plVar13[0xd] != 0) {
      plVar1 = (long *)(plVar13[0xd] + 8);
      *plVar1 = *plVar1 + lVar25;
    }
    if (plVar13[0xe] != 0) {
      plVar1 = (long *)(plVar13[0xe] + 8);
      *plVar1 = *plVar1 + lVar25;
    }
    if (plVar13[0xf] != 0) {
      plVar1 = (long *)(plVar13[0xf] + 8);
      *plVar1 = *plVar1 + lVar25;
    }
    if (plVar13[0x1f] != 0) {
      plVar1 = (long *)(plVar13[0x1f] + 8);
      *plVar1 = *plVar1 + lVar25;
    }
    if (plVar13[0x3a] != 0) {
      plVar1 = (long *)(plVar13[0x3a] + 8);
      *plVar1 = *plVar1 + lVar25;
    }
    if (plVar13[0x54] != 0) {
      plVar1 = (long *)(plVar13[0x54] + 8);
      *plVar1 = *plVar1 + lVar25;
    }
  }
  if ((plVar13[0x1c] != 0) && (*(long *)(plVar13[0x1c] + 8) != 7)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(local_130 + -8) = 0x7ac148;
    __assert_fail("info[DT_PLTREL]->d_un.d_val == DT_RELA","get-dynamic-info.h",0x66,
                  "elf_get_dynamic_info");
  }
  if ((plVar13[0xf] != 0) && (*(long *)(plVar13[0x11] + 8) != 0x18)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(local_130 + -8) = &UNK_007ac167;
    __assert_fail("info[DT_RELAENT]->d_un.d_val == sizeof (ElfW(Rela))","get-dynamic-info.h",0x6e,
                  "elf_get_dynamic_info");
  }
  lVar25 = plVar13[0x26];
  if (lVar25 != 0) {
    uVar14 = *(ulong *)(lVar25 + 8);
    *(int *)(plVar13 + 0x7e) = (int)uVar14;
    if ((uVar14 & 2) != 0) {
      plVar13[0x18] = lVar25;
    }
    if ((uVar14 & 4) != 0) {
      plVar13[0x1e] = lVar25;
    }
    if ((uVar14 & 8) != 0) {
      plVar13[0x20] = lVar25;
    }
  }
  if (plVar13[0x2f] == 0) {
    uVar35 = *(uint *)((long)plVar13 + 0x3ec);
  }
  else {
    uVar14 = *(ulong *)(plVar13[0x2f] + 8);
    *(uint *)((long)plVar13 + 0x3ec) = (uint)uVar14;
    if ((uVar14 & 8) != 0) {
      *(undefined1 *)(plVar13 + 100) = 1;
    }
    if ((((byte)_dl_debug_mask & 0x40) == 0) || ((uVar14 & 0xf7fff716) == 0)) {
      uVar35 = *(uint *)((long)plVar13 + 0x3ec);
      uVar12 = (uint)uVar14;
    }
    else {
      *(undefined8 *)(local_130 + -8) = 0x7abf84;
      _dl_debug_printf("\nWARNING: Unsupported flag value(s) of 0x%x in DT_FLAGS_1.\n");
      uVar35 = *(uint *)((long)plVar13 + 0x3ec);
      uVar12 = uVar35;
    }
    if ((uVar12 & 1) != 0) {
      plVar13[0x20] = plVar13[0x2f];
    }
  }
  if (plVar13[0x25] != 0) {
    plVar13[0x17] = 0;
  }
LAB_007ab56f:
  if (((uVar35 & 0x40) == 0) || (-1 < (int)param_7)) {
    if (((uVar35 & 0x8000000) == 0) || (local_144 != 0)) {
      if (plVar13[0x55] == 0) {
        sVar38 = (ulong)(ushort)local_118[8] * 0x38;
        *(undefined8 *)(puVar29 + -8) = 0x7abe00;
        pvVar19 = malloc(sVar38);
        puVar24 = local_158;
        if (pvVar19 == (void *)0x0) {
          pcVar37 = "cannot allocate memory for program header";
          goto LAB_007abe6e;
        }
        *(undefined8 *)(puVar29 + -8) = 0x7abe1b;
        local_e0 = memcpy(pvVar19,puVar24,sVar38);
        plVar13[0x55] = (long)local_e0;
        *(byte *)((long)plVar13 + 0x31d) = *(byte *)((long)plVar13 + 0x31d) | 8;
      }
      else {
        local_e0 = (void *)(plVar13[0x55] + *plVar13);
        plVar13[0x55] = (long)local_e0;
      }
      if ((~_dl_stack_flags & local_e8 & 1) != 0) {
        __stack_prot = __stack_prot | 7;
        *(undefined8 *)(puVar29 + -8) = 0x7abe46;
        local_f0 = _dl_make_stacks_executable(param_8);
        if (local_f0 != 0) {
          pcVar37 = "cannot enable executable stack as shared object requires";
          goto LAB_007aaf8f;
        }
        local_e0 = (void *)plVar13[0x55];
        local_f0 = 0;
      }
      iVar11 = local_ec;
      if (plVar13[0x86] != 0) {
        plVar13[0x86] = plVar13[0x86] + *plVar13;
      }
      for (pvVar19 = (void *)((long)local_e0 + (ulong)*(ushort *)(plVar13 + 0x57) * 0x38);
          pvVar19 != local_e0; pvVar19 = (void *)((long)pvVar19 - 0x38)) {
        if (*(int *)((long)pvVar19 - 0x38) == 4) {
          uVar14 = *(ulong *)((long)pvVar19 - 0x10);
          if (((*(byte *)((long)plVar13 + 0x321) & 3) == 0) && (*(long *)((long)pvVar19 - 8) == 8))
          {
            if (0xc < uVar14) {
              puVar24 = (uint *)(*(long *)((long)pvVar19 - 0x28) + *plVar13);
              uVar35 = 0;
              uVar12 = 0;
              local_110 = (void *)((ulong)local_110 & 0xffffffff00000000);
              lVar25 = 0xc - (long)puVar24;
              local_e8 = local_e8 & 0xffffffff00000000;
              do {
                uVar17 = (ulong)*puVar24;
                if (((*puVar24 == 4) && (puVar24[2] == 5)) && (puVar24[3] == 0x554e47)) {
                  if ((*(byte *)((long)plVar13 + 0x321) & 3) != 0) goto LAB_007ab690;
                  *(byte *)((long)plVar13 + 0x321) = *(byte *)((long)plVar13 + 0x321) & 0xfc | 1;
                  uVar33 = puVar24[1];
                  uVar31 = (ulong)uVar33;
                  if ((uVar33 < 8) || ((uVar33 & 7) != 0)) goto LAB_007ab690;
                  puVar21 = puVar24 + 4;
                  local_118 = (ulong *)CONCAT44(local_118._4_4_,4);
                  uVar17 = (long)puVar21 + uVar31;
                  uVar33 = uVar35;
                  do {
                    uVar35 = *puVar21;
                    uVar3 = puVar21[1];
                    if ((uVar35 < uVar33) || (uVar17 < (long)puVar21 + (ulong)uVar3 + 8))
                    goto LAB_007ab690;
                    if (((uVar35 & 0xffff7fff) == 0xc0000002) || (uVar35 == 0xb0008000)) {
                      if (uVar3 != 4) goto LAB_007ab690;
                      uVar33 = puVar21[2];
                      if (uVar35 == 0xc0000002) {
                        local_e8 = CONCAT44(local_e8._4_4_,uVar33);
                        uVar33 = uVar12;
                      }
                      else if (uVar35 != 0xb0008000) {
                        local_110 = (void *)CONCAT44(local_110._4_4_,uVar33);
                        uVar17 = 4;
                        uVar35 = 0xc0008002;
                        goto LAB_007ab81b;
                      }
                    }
                    else {
                      uVar33 = uVar12;
                      if (0xc0008002 < uVar35) break;
                    }
                    uVar12 = uVar33;
                    puVar21 = (uint *)((long)puVar21 + ((ulong)uVar3 + 7 & 0xfffffffffffffff8) + 8);
                    uVar33 = uVar35;
                  } while (7 < (long)(uVar17 - (long)puVar21));
                  uVar17 = 4;
                }
                else {
                  uVar31 = (ulong)puVar24[1];
                }
LAB_007ab81b:
                puVar24 = (uint *)((long)puVar24 +
                                  (uVar31 + 7 + (uVar17 + 0x13 & 0xfffffffffffffff8) &
                                  0xfffffffffffffff8));
              } while ((ulong)((long)puVar24 + lVar25) < uVar14);
              if (((int)local_e8 != 0 || uVar12 != 0) || (uint)local_110 != 0) {
                *(uint *)((long)plVar13 + 0x32c) = uVar12;
                *(ulong *)((long)plVar13 + 0x324) = CONCAT44((uint)local_110,(int)local_e8);
                *(byte *)((long)plVar13 + 0x321) = *(byte *)((long)plVar13 + 0x321) & 0xfc | 2;
                goto LAB_007ab690;
              }
            }
            *(byte *)((long)plVar13 + 0x321) = *(byte *)((long)plVar13 + 0x321) & 0xfc | 1;
          }
        }
        else if (((*(int *)((long)pvVar19 - 0x38) == 0x6474e553) &&
                 (*(long *)((long)pvVar19 - 8) == 8)) && (0xc < *(ulong *)((long)pvVar19 - 0x10))) {
          puVar24 = (uint *)(*plVar13 + *(long *)((long)pvVar19 - 0x28));
          lVar25 = 0xc - (long)puVar24;
          do {
            if (((*puVar24 == 4) && (puVar24[2] == 5)) && (puVar24[3] == 0x554e47)) break;
            puVar24 = (uint *)((long)puVar24 +
                              ((ulong)puVar24[1] + 7 + ((ulong)*puVar24 + 0x13 & 0xfffffffffffffff8)
                              & 0xfffffffffffffff8));
          } while ((ulong)((long)puVar24 + lVar25) < *(ulong *)((long)pvVar19 - 0x10));
        }
LAB_007ab690:
      }
      *(undefined8 *)(puVar29 + -8) = 0x7ab6ac;
      iVar11 = __close_nocancel(iVar11);
      if (iVar11 == 0) {
        if (((int)local_120 == 2) && ((*(byte *)((long)plVar13 + 0x31c) & 3) != 0)) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar29 + -8) = &UNK_007abad2;
          __assert_fail("type != ET_EXEC || l->l_type == lt_executable","dl-load.c",0x571,
                        "_dl_map_object_from_fd");
        }
        lVar25 = *plVar13;
        lVar16 = plVar13[0x56] + lVar25;
        plVar13[0x56] = lVar16;
        if (((byte)_dl_debug_mask & 0x40) != 0) {
          lVar18 = plVar13[2];
          *(ulong *)(puVar29 + -0x10) = (ulong)*(ushort *)(plVar13 + 0x57);
          *(undefined8 *)(puVar29 + -0x18) = 0x10;
          *(long *)(puVar29 + -0x20) = plVar13[0x55];
          *(undefined8 *)(puVar29 + -0x28) = 0x10;
          *(long *)(puVar29 + -0x30) = lVar16;
          *(undefined8 *)(puVar29 + -0x38) = 0x10;
          *(void **)(puVar29 + -0x40) = local_f8;
          *(undefined8 *)(puVar29 + -0x48) = 0x7abf05;
          _dl_debug_printf("  dynamic: 0x%0*lx  base: 0x%0*lx   size: 0x%0*Zx\n    entry: 0x%0*lx  phdr: 0x%0*lx  phnum:   %*u\n\n"
                           ,0x10,lVar18,0x10,lVar25,0x10);
        }
        *(undefined8 *)(puVar29 + -8) = 0x7ab6ea;
        _dl_setup_hash(plVar13);
        if ((((param_7 & 8) == 0) && (plVar13[0x18] != 0)) &&
           (__src = (undefined8 *)plVar13[0x73], (long *)*__src != plVar13 + 0x58)) {
          *(long **)plVar13[0x5a] = plVar13;
          lVar25 = plVar13[0x72];
          *(undefined4 *)(plVar13 + 0x5b) = 1;
          *(undefined8 *)(puVar29 + -8) = 0x7ac078;
          memmove(__src + 1,__src,lVar25 * 8 - 8);
          *(long **)plVar13[0x73] = plVar13 + 0x5a;
        }
        if ((*(byte *)((long)plVar13 + 0x3ec) & 0x20) != 0) {
          _dl_initfirst = plVar13;
        }
        bVar39 = _dl_profile != 0;
        plVar13[0x76] = local_d8._0_8_;
        plVar13[0x77] = local_d8._8_8_;
        if (bVar39) {
          if (plVar13[0x16] == 0) goto LAB_007ab74c;
          lVar25 = *(long *)(plVar13[0x16] + 8);
          lVar16 = *(long *)(plVar13[0xd] + 8);
          lVar18 = 0;
          if ((*(byte *)((long)plVar13 + 0x31e) & 0x20) != 0) {
            lVar18 = *plVar13;
          }
          lVar7 = plVar13[7];
          *(undefined8 *)(puVar29 + -8) = 0x7abebd;
          add_name_to_object_isra_0(lVar7,lVar25 + lVar16 + lVar18);
        }
        if ((*(long *)(&DAT_00931ba0 + param_9 * 0xa0) == 0) && (plVar13[0x16] != 0)) {
          lVar25 = *(long *)(plVar13[0x16] + 8);
          lVar16 = *(long *)(plVar13[0xd] + 8);
          lVar18 = 0;
          if ((*(byte *)((long)plVar13 + 0x31e) & 0x20) != 0) {
            lVar18 = *plVar13;
          }
          *(undefined8 *)(puVar29 + -8) = 0x7abc89;
          iVar11 = strcmp((char *)(lVar25 + lVar16 + lVar18),"libc.so.6");
          if (iVar11 == 0) {
            *(long **)(&DAT_00931ba0 + param_9 * 0xa0) = plVar13;
          }
        }
LAB_007ab74c:
        if ((plVar13[0x88] != 0) &&
           (((*(byte *)((long)plVar13 + 0x31c) & 3) == 1 || (_dl_tls_dtv_slotinfo_list != 0)))) {
          *(undefined8 *)(puVar29 + -8) = 0x7ab771;
          _dl_assign_tls_modid(plVar13);
        }
        *(undefined8 *)(puVar29 + -8) = 0x7ab77d;
        _dl_add_to_namespace_list(plVar13,param_9);
        if (*(int *)(local_128 + 0x18) == 0) {
          *(undefined4 *)(local_128 + 0x18) = 1;
          *(undefined8 *)(puVar29 + -8) = 0x7abb03;
          _dl_debug_state();
        }
        else if (*(int *)(local_128 + 0x18) != 1) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar29 + -8) = &UNK_007ab7b7;
          __assert_fail("r->r_state == RT_ADD","dl-load.c",0x5e2,"_dl_map_object_from_fd");
        }
        return plVar13;
      }
      pcVar37 = "cannot close file descriptor";
LAB_007abe6e:
      local_f0 = *(uint *)(in_FS_OFFSET + -0x58);
    }
    else {
      pcVar37 = "cannot dynamically load position-independent executable";
    }
  }
  else {
    pcVar37 = "cannot dynamically load position-independent executable";
    if ((uVar35 & 0x8000000) == 0) {
      pcVar37 = "shared object cannot be dlopen()ed";
    }
  }
LAB_007aaf8f:
  iVar11 = local_ec;
  if (local_ec != -1) {
    *(undefined8 *)(puVar29 + -8) = 0x7aafa3;
    __close_nocancel(iVar11);
  }
  pvVar19 = (void *)plVar13[0x6b];
  if (pvVar19 != (void *)0x0) {
    lVar25 = plVar13[0x6c];
    *(undefined8 *)(puVar29 + -8) = 0x7ab94a;
    munmap(pvVar19,lVar25 - (long)pvVar19);
  }
  pvVar19 = (void *)plVar13[0x6a];
  if (pvVar19 != (void *)0xffffffffffffffff) {
    *(undefined8 *)(puVar29 + -8) = 0x7aafc5;
    free(pvVar19);
  }
  pvVar19 = (void *)plVar13[7];
  if (*(int *)((long)pvVar19 + 0x10) == 0) {
    *(undefined8 *)(puVar29 + -8) = 0x7ab965;
    free(pvVar19);
  }
  ppuVar27 = (uint **)puVar29;
  if ((*(byte *)((long)plVar13 + 0x31d) & 8) != 0) {
    pvVar19 = (void *)plVar13[0x55];
    *(undefined8 *)(puVar29 + -8) = 0x7ab95b;
    free(pvVar19);
  }
LAB_007aafe2:
  *(undefined8 *)((long)ppuVar27 + -8) = 0x7aafea;
  free(plVar13);
  pvVar19 = local_108;
  *(undefined8 *)((long)ppuVar27 + -8) = 0x7aaff6;
  free(pvVar19);
  uVar35 = local_f0;
  uVar10 = local_100;
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppuVar27 + -8) = 0x7ab00d;
  _dl_signal_error(uVar35,uVar10,0,pcVar37);
}

