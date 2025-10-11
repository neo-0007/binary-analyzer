
void _dl_start_profile(void)

{
  ushort *__sample_buffer;
  ulong *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  int __fd;
  int iVar7;
  ulong *puVar8;
  size_t sVar9;
  size_t sVar10;
  char *pcVar11;
  char *pcVar12;
  void *pvVar13;
  undefined8 *puVar14;
  __off64_t _Var15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 *puVar24;
  long *plVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  ulong uVar29;
  char *__dest;
  long in_FS_OFFSET;
  undefined1 auStack_2d8 [8];
  size_t local_2d0;
  long *local_2c8;
  ulong local_2c0;
  long local_2b8;
  uint *local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  long lStack_2a0;
  int local_298;
  ulong local_288;
  ulong uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  long lStack_270;
  undefined4 local_268;
  undefined2 uStack_264;
  undefined1 uStack_262;
  undefined1 uStack_261;
  stat local_258;
  char local_1c8 [408];
  undefined1 *puVar23;
  undefined1 *puVar25;
  
  puVar23 = auStack_2d8;
  puVar22 = auStack_2d8;
  puVar8 = (ulong *)_dl_profile_map[0x55];
  puVar1 = puVar8 + (ulong)*(ushort *)(_dl_profile_map + 0x57) * 7;
  if (puVar8 < puVar1) {
    uStack_280 = 0;
    local_288 = 0xffffffffffffffff;
    do {
      if ((*puVar8 & 0x1ffffffff) == 0x100000001) {
        uVar29 = puVar8[2] & -_dl_pagesize;
        if (uVar29 < local_288) {
          local_288 = uVar29;
        }
        uVar29 = puVar8[2] + puVar8[5] + (_dl_pagesize - 1) & -_dl_pagesize;
        if (uStack_280 < uVar29) {
          uStack_280 = uVar29;
        }
      }
      puVar8 = puVar8 + 7;
    } while (puVar8 < puVar1);
  }
  else {
    uStack_280 = 0;
    local_288 = 0xffffffffffffffff;
  }
  running = 0;
  log_hashfraction = 5;
  uVar29 = *_dl_profile_map + 3 + uStack_280 & 0xfffffffffffffffc;
  lowpc = local_288 + *_dl_profile_map & 0xfffffffffffffffc;
  uVar21 = uVar29 - lowpc;
  uVar19 = (uVar21 * 3) / 100;
  fromlimit = (uint)uVar19;
  if (fromlimit < 0x32) {
    fromlimit = 0x32;
    local_2b8 = 800;
    local_2b0 = (uint *)0x3ec8;
  }
  else if (fromlimit < 0x100001) {
    uVar19 = uVar19 & 0xffffffff;
    local_2b8 = uVar19 << 4;
    local_2b0 = (uint *)(uVar19 * 0x140 + 0x48);
  }
  else {
    fromlimit = 0x100000;
    local_2b8 = 0x1000000;
    local_2b0 = (uint *)0x14000048;
  }
  local_2a8 = 0x6e6f6d67;
  uStack_2a4 = 0x1ffff;
  lStack_2a0 = 0;
  local_298 = 0;
  local_278 = (undefined4)(uVar21 >> 2);
  textsize = uVar21;
  uStack_274 = __profile_frequency();
  pcVar11 = _dl_profile_output;
  local_268 = 0;
  uStack_264 = 0;
  lStack_270 = 0x73646e6f636573;
  uStack_262 = 0;
  uStack_261 = 0x73;
  sVar9 = strlen(_dl_profile_output);
  pcVar12 = _dl_profile;
  sVar10 = strlen(_dl_profile);
  uVar19 = sVar9 + 0x21 + sVar10;
  puVar25 = auStack_2d8;
  while (puVar23 != auStack_2d8 + -(uVar19 & 0xfffffffffffff000)) {
    puVar22 = puVar25 + -0x1000;
    *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
    puVar23 = puVar25 + -0x1000;
    puVar25 = puVar25 + -0x1000;
  }
  uVar19 = (ulong)((uint)uVar19 & 0xff0);
  lVar16 = -uVar19;
  puVar27 = puVar22 + lVar16;
  puVar24 = puVar22 + lVar16;
  puVar25 = puVar22 + lVar16;
  plVar26 = (long *)(puVar22 + lVar16);
  puVar28 = puVar22 + lVar16;
  if (uVar19 != 0) {
    *(undefined8 *)(puVar22 + -8) = *(undefined8 *)(puVar22 + -8);
  }
  __dest = (char *)((ulong)(puVar22 + lVar16 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar22 + lVar16 + -8) = 0x7b043e;
  pcVar11 = stpcpy(__dest,pcVar11);
  *pcVar11 = '/';
  *(undefined8 *)(puVar22 + lVar16 + -8) = 0x7b044d;
  pcVar11 = stpcpy(pcVar11 + 1,pcVar12);
  builtin_strncpy(pcVar11,".profile",9);
  *(undefined8 *)(puVar22 + lVar16 + -8) = 0x7b0472;
  __fd = __open64_nocancel(__dest,0x20042,0x1b6);
  if (__fd == -1) {
    pcVar11 = "%s: cannot open file: %s\n";
    iVar7 = *(int *)(in_FS_OFFSET + -0x58);
  }
  else {
    *(undefined8 *)(puVar22 + lVar16 + -8) = 0x7b048c;
    iVar7 = fstat(__fd,&local_258);
    if ((iVar7 < 0) || ((local_258.st_mode & 0xf000) != 0x8000)) {
      pcVar11 = "%s: cannot stat file: %s\n";
    }
    else {
      local_2c0 = uVar21 >> 1;
      uVar19 = (long)local_2b0 + local_2c0;
      if (local_258.st_size == 0) {
        puVar28 = puVar22 + lVar16;
        while (puVar24 != puVar22 + (lVar16 - (_dl_pagesize + 0xf & 0xfffffffffffff000))) {
          puVar25 = puVar28 + -0x1000;
          *(undefined8 *)(puVar28 + -8) = *(undefined8 *)(puVar28 + -8);
          puVar24 = puVar28 + -0x1000;
          puVar28 = puVar28 + -0x1000;
        }
        uVar18 = (ulong)((uint)(_dl_pagesize + 0xf) & 0xff0);
        lVar6 = -uVar18;
        local_2b0 = (uint *)(puVar25 + lVar6);
        if (uVar18 != 0) {
          *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
        }
        local_2d0 = _dl_pagesize;
        *(undefined8 *)(puVar25 + lVar6 + -8) = 0x7b0853;
        local_2c8 = (long *)(puVar22 + lVar16);
        memset(puVar25 + lVar6,0,_dl_pagesize);
        *(undefined8 *)(puVar25 + lVar6 + -8) = 0x7b086d;
        _Var15 = lseek64(__fd,-local_2d0 & uVar19,0);
        if (_Var15 != -1) {
          do {
            *(undefined8 *)(puVar25 + lVar6 + -8) = 0x7b08ae;
            lVar16 = __write_nocancel(__fd,local_2b0,_dl_pagesize - 1 & uVar19);
            if (lVar16 != -1) {
              plVar26 = local_2c8;
              if (-1 < lVar16) goto LAB_007b04da;
              break;
            }
          } while (*(int *)(in_FS_OFFSET + -0x58) == 4);
        }
        pcVar11 = "%s: cannot create file: %s\n";
        plVar26 = local_2c8;
      }
      else {
        plVar26 = (long *)(puVar22 + lVar16);
        if (local_258.st_size != uVar19) {
          *(undefined8 *)(puVar22 + lVar16 + -8) = 0x7b0633;
          __close_nocancel(__fd);
LAB_007b0633:
          *(undefined8 *)(puVar28 + -8) = 0x7b064b;
          _dl_error_printf("%s: file is no correct profile data file for `%s\'\n",__dest,_dl_profile
                          );
          return;
        }
LAB_007b04da:
        *(undefined8 *)((long)plVar26 + -8) = 0x7b04f4;
        local_2b0 = (uint *)mmap64((void *)0x0,uVar19,3,1,__fd,0);
        if (local_2b0 != (uint *)0xffffffffffffffff) {
          *(undefined8 *)((long)plVar26 + -8) = 0x7b050d;
          __close_nocancel(__fd);
          puVar20 = (uint *)((long)local_2b0 + local_2c0 + 0x44);
          __sample_buffer = (ushort *)((long)local_2b0 + 0x40);
          data = puVar20 + 1;
          narcsp = puVar20;
          if (local_258.st_size == 0) {
            *(undefined4 *)((long)local_2b0 + 0x14) = 0;
            *(int *)((long)local_2b0 + 0x10) = local_298;
            *(long *)local_2b0 = CONCAT44(uStack_2a4,local_2a8);
            *(long *)((long)local_2b0 + 8) = lStack_2a0;
            *(long *)((long)local_2b0 + 0x38) =
                 CONCAT17(uStack_261,CONCAT16(uStack_262,CONCAT24(uStack_264,local_268)));
            *(ulong *)((long)local_2b0 + 0x18) = local_288;
            *(ulong *)((long)local_2b0 + 0x20) = uStack_280;
            *(long *)((long)local_2b0 + 0x28) = CONCAT44(uStack_274,local_278);
            *(long *)((long)local_2b0 + 0x30) = lStack_270;
            puVar20[-1] = 1;
          }
          else if ((((*(long *)((long)local_2b0 + 8) != lStack_2a0 ||
                      *(long *)local_2b0 != CONCAT44(uStack_2a4,local_2a8)) ||
                    ((int)*(long *)((long)local_2b0 + 0x10) != local_298)) ||
                   (*(int *)((long)local_2b0 + 0x14) != 0)) ||
                  (((*(ulong *)((long)local_2b0 + 0x20) != uStack_280 ||
                     *(ulong *)((long)local_2b0 + 0x18) != local_288 ||
                    (*(long *)((long)local_2b0 + 0x30) != lStack_270 ||
                     *(long *)((long)local_2b0 + 0x28) != CONCAT44(uStack_274,local_278))) ||
                   ((*(long *)((long)local_2b0 + 0x38) !=
                     CONCAT17(uStack_261,CONCAT16(uStack_262,CONCAT24(uStack_264,local_268))) ||
                    (puVar20[-1] != 1)))))) {
            *(undefined8 *)((long)plVar26 + -8) = 0x7b0579;
            munmap(local_2b0,uVar19);
            puVar28 = (undefined1 *)plVar26;
            goto LAB_007b0633;
          }
          local_2c8 = (long *)local_2b0;
          *(undefined8 *)((long)plVar26 + -8) = 0x7b06cb;
          local_2b0 = puVar20;
          pvVar13 = calloc(local_2b8 + local_2c0,1);
          tos = pvVar13;
          if (pvVar13 != (void *)0x0) {
            fromidx = 0;
            lVar16 = (long)pvVar13 + local_2c0;
            narcs = fromlimit;
            if (*local_2b0 < fromlimit) {
              narcs = *local_2b0;
            }
            froms = lVar16;
            if ((ulong)narcs != 0) {
              puVar20 = local_2b0 + (ulong)narcs * 5 + -4;
              do {
                uVar17 = fromidx;
                puVar2 = (undefined2 *)((long)pvVar13 + (*(ulong *)(puVar20 + 2) >> 2) * 2);
                uVar3 = *puVar2;
                puVar14 = (undefined8 *)((ulong)fromidx * 0x10 + lVar16);
                fromidx = fromidx + 1;
                *puVar14 = puVar20;
                puVar20 = puVar20 + -5;
                *(undefined2 *)(puVar14 + 1) = uVar3;
                *puVar2 = (short)uVar17;
              } while (puVar20 != local_2b0 + -4);
            }
            uVar17 = 0x10000;
            uVar29 = uVar29 - lowpc;
            if (local_2c0 < uVar29) {
              uVar17 = 1;
              uVar19 = uVar29 / local_2c0;
              if (uVar19 < 0x10000) {
                if (uVar19 < 0x100) {
                  if (uVar29 >> 0x38 == 0) {
                    uVar29 = (uVar29 * 0x100) / local_2c0;
                  }
                  else {
                    uVar29 = uVar29 / (uVar21 >> 9);
                  }
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = uVar29;
                  uVar17 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x1000000)) / auVar5,0);
                }
                else {
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = uVar19;
                  uVar17 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x10000)) / auVar4,0);
                }
              }
            }
            *(undefined8 *)((long)plVar26 + -8) = 0x7b07cb;
            profil(__sample_buffer,local_2c0,lowpc,uVar17);
            running = 1;
            return;
          }
          *(undefined8 *)((long)plVar26 + -8) = 0x7b09c8;
          munmap(local_2c8,uVar19);
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)plVar26 + -8) = 0x7b09d6;
          _dl_fatal_printf("Out of memory while initializing profiler\n");
        }
        pcVar11 = "%s: cannot map file: %s\n";
        local_2b0 = (uint *)0xffffffffffffffff;
      }
    }
    iVar7 = *(int *)(in_FS_OFFSET + -0x58);
    *(undefined8 *)((long)plVar26 + -8) = 0x7b061a;
    __close_nocancel(__fd);
    puVar27 = (undefined1 *)plVar26;
  }
  *(undefined8 *)(puVar27 + -8) = 0x7b05de;
  pcVar12 = strerror_r(iVar7,local_1c8,400);
  *(undefined8 *)(puVar27 + -8) = 0x7b05ee;
  _dl_error_printf(pcVar11,__dest,pcVar12);
  return;
}

