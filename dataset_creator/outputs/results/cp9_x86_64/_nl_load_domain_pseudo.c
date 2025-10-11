
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _nl_load_domain(ulong *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  ulong *puVar6;
  int *__ptr;
  char *pcVar7;
  void *pvVar8;
  size_t sVar9;
  char *pcVar10;
  uint *puVar11;
  uint uVar12;
  int *piVar13;
  ulong uVar14;
  void *pvVar15;
  uint uVar16;
  int *piVar17;
  long lVar18;
  void *__dest;
  uint uVar19;
  uint uVar20;
  sigaction *psVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  void *pvVar25;
  long in_FS_OFFSET;
  bool bVar26;
  byte bVar27;
  sigset_t sStack_2e8;
  sigaction sStack_268;
  undefined8 uStack_1d0;
  ulong *puStack_1c0;
  void *pvStack_1b8;
  code *pcStack_1b0;
  undefined8 local_1a0;
  int *local_198;
  int *piStack_190;
  int *local_188;
  ulong *local_180;
  long local_178;
  ulong local_170;
  int local_168;
  uint local_164;
  void *local_160;
  size_t local_158;
  ulong *local_150;
  ulong *local_148;
  ulong *local_140;
  void *local_138;
  void *local_130;
  void *local_128;
  void *pvStack_120;
  size_t local_118;
  void *local_110;
  ulong *local_108;
  int *local_100;
  undefined1 local_f0 [8];
  long local_e8 [2];
  stat local_d8;
  long local_40;
  
  bVar27 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar18 = *(long *)(in_FS_OFFSET + 0x10);
  lVar23 = _DAT_009393d8;
  local_1a0 = param_2;
  if (_DAT_009393d8 != lVar18) {
    LOCK();
    bVar26 = lock_0 == 0;
    if (bVar26) {
      lock_0 = 1;
    }
    UNLOCK();
    lVar23 = lVar18;
    if (!bVar26) {
      pcStack_1b0 = (code *)0x6da994;
      __lll_lock_wait_private(&lock_0);
    }
  }
  _DAT_009393d8 = lVar23;
  iVar4 = DAT_009393d4;
  if ((int)param_1[1] != 0) goto LAB_006da939;
  DAT_009393d4 = DAT_009393d4 + 1;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[2] = 0;
  if (*param_1 != 0) {
    pcStack_1b0 = (code *)0x6da62c;
    iVar4 = __open64_nocancel(*param_1,0);
    if (iVar4 == -1) {
LAB_006da929:
      iVar4 = DAT_009393d4 + -1;
      goto LAB_006da932;
    }
    pcStack_1b0 = (code *)0x6da646;
    local_168 = fstat(iVar4,&local_d8);
    if ((local_168 != 0) || ((ulong)local_d8.st_size < 0x30)) {
LAB_006da922:
      pcStack_1b0 = (code *)0x6da929;
      __close_nocancel(iVar4);
      goto LAB_006da929;
    }
    pcStack_1b0 = (code *)0x6da67e;
    piVar5 = (int *)mmap64((void *)0x0,local_d8.st_size,1,2,iVar4,0);
    if (piVar5 == (int *)0xffffffffffffffff) {
      pcStack_1b0 = (code *)0x6dab28;
      piVar5 = (int *)malloc(local_d8.st_size);
      piVar17 = piVar5;
      uVar22 = local_d8.st_size;
      if (piVar5 != (int *)0x0) {
        do {
          while( true ) {
            pcStack_1b0 = (code *)0x6dab4b;
            lVar18 = __read_nocancel(iVar4,piVar17,uVar22);
            if (lVar18 < 1) break;
            uVar22 = uVar22 - lVar18;
            piVar17 = (int *)((long)piVar17 + lVar18);
            if (uVar22 == 0) {
              pcStack_1b0 = (code *)0x6dab69;
              __close_nocancel(iVar4);
              iVar4 = *piVar5;
              bVar26 = iVar4 != -0x6afbed22;
              if ((iVar4 == -0x21edfb6b) || (!bVar26)) goto LAB_006da6ba;
              pcStack_1b0 = (code *)0x6dab96;
              free(piVar5);
              iVar4 = DAT_009393d4 + -1;
              goto LAB_006da932;
            }
          }
        } while ((lVar18 == -1) && (*(int *)(in_FS_OFFSET + -0x58) == 4));
      }
      goto LAB_006da922;
    }
    pcStack_1b0 = (code *)0x6da692;
    __close_nocancel(iVar4);
    iVar4 = *piVar5;
    bVar26 = iVar4 != -0x6afbed22;
    if ((iVar4 != -0x21edfb6b) && (bVar26)) {
      pcStack_1b0 = (code *)0x6dabeb;
      munmap(piVar5,local_d8.st_size);
      iVar4 = DAT_009393d4 + -1;
      goto LAB_006da932;
    }
    local_168 = 1;
LAB_006da6ba:
    local_188 = (int *)CONCAT44(local_188._4_4_,iVar4);
    pcStack_1b0 = (code *)0x6da6d7;
    local_198 = piVar5;
    piStack_190 = piVar5;
    puVar6 = (ulong *)malloc(200);
    iVar4 = (uint)local_188;
    if (puVar6 == (ulong *)0x0) goto LAB_006da929;
    *puVar6 = (ulong)piVar5;
    uVar19 = piVar5[1];
    param_1[2] = (ulong)puVar6;
    puVar6[2] = local_d8.st_size;
    *(int *)(puVar6 + 1) = local_168;
    *(uint *)(puVar6 + 3) = (uint)bVar26;
    puVar6[4] = 0;
    sVar9 = local_d8.st_size;
    if ((uint)local_188 == -0x6afbed22) {
      if (uVar19 < 0x20000) {
        uVar16 = piVar5[3];
        uVar20 = piVar5[4];
        uVar12 = piVar5[5];
        *(int *)(puVar6 + 5) = piVar5[2];
        *(uint *)(puVar6 + 0xb) = uVar12;
        puVar6[6] = (ulong)uVar16 + (long)local_198;
        puVar6[7] = (ulong)uVar20 + (long)piStack_190;
        if (uVar12 < 3) goto LAB_006da9f3;
        uVar16 = piVar5[6];
        *(uint *)(puVar6 + 0xd) = (uint)bVar26;
        puVar6[0xc] = (ulong)uVar16 + (long)piVar5;
        if (((short)uVar19 == 0) ||
           (local_188 = (int *)CONCAT44(local_188._4_4_,piVar5[9]), piVar5[9] == 0))
        goto LAB_006daa04;
        uVar19 = piVar5[7];
        uVar16 = piVar5[8];
LAB_006da7b4:
        local_180 = (ulong *)CONCAT44(local_180._4_4_,uVar19);
        local_198 = (int *)(ulong)uVar19;
        local_170 = CONCAT44(local_170._4_4_,uVar12);
        local_178 = CONCAT44(local_178._4_4_,iVar4);
        pcStack_1b0 = (code *)0x6da7d3;
        __ptr = (int *)calloc((size_t)local_198,8);
        uVar22 = local_170;
        piVar17 = local_198;
        if (__ptr != (int *)0x0) {
          piVar13 = (int *)0x0;
          if (uVar19 != 0) {
            local_198 = (int *)CONCAT44(local_198._4_4_,(undefined4)local_170);
            do {
              uVar19 = *(uint *)((long)piVar5 + (long)piVar13 * 8 + (ulong)uVar16 + 4);
              uVar20 = *(uint *)((long)piVar5 + (long)piVar13 * 8 + (ulong)uVar16);
              if ((int)local_178 != -0x6afbed22) {
                uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                         uVar19 << 0x18;
                uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                         uVar20 << 0x18;
              }
              pcVar7 = (char *)((ulong)uVar19 + (long)piVar5);
              if ((uVar20 == 0) || (pcVar7[uVar20 - 1] != '\0')) goto LAB_006dabb9;
              if (*pcVar7 == 'P') {
                pcVar10 = (char *)0x0;
                if (((pcVar7[1] == 'R') && (pcVar7[2] == 'I')) &&
                   (((bVar1 = pcVar7[3], bVar1 == 100 || (bVar1 == 0x69)) ||
                    (((byte)(bVar1 - 0x58) < 0x21 &&
                     (pcVar10 = (char *)0x0,
                     (0x120800001U >> ((ulong)(bVar1 - 0x58) & 0x3f) & 1) != 0)))))) {
                  cVar2 = pcVar7[4];
                  if (cVar2 == '8') {
                    pcVar10 = (char *)0x0;
                    if (pcVar7[5] == '\0') {
                      switch(bVar1) {
                      case 100:
                        pcVar10 = "d";
                        break;
                      default:
                        pcVar10 = "X";
                        break;
                      case 0x69:
                        pcVar10 = "i";
                        break;
                      case 0x6f:
                        pcVar10 = "o";
                        break;
                      case 0x75:
                        pcVar10 = "u";
                        break;
                      case 0x78:
                        pcVar10 = "x";
                      }
                    }
                  }
                  else if (cVar2 == '1') {
                    pcVar10 = (char *)0x0;
                    if ((pcVar7[5] == '6') && (pcVar7[6] == '\0')) {
                      switch(bVar1) {
                      case 100:
                        pcVar10 = "d";
                        break;
                      default:
                        pcVar10 = "X";
                        break;
                      case 0x69:
                        pcVar10 = "i";
                        break;
                      case 0x6f:
                        pcVar10 = "o";
                        break;
                      case 0x75:
                        pcVar10 = "u";
                        break;
                      case 0x78:
                        pcVar10 = "x";
                      }
                    }
                  }
                  else if (cVar2 == '3') {
                    pcVar10 = (char *)0x0;
                    if ((pcVar7[5] == '2') && (pcVar7[6] == '\0')) {
                      switch(bVar1) {
                      case 100:
                        pcVar10 = "d";
                        break;
                      default:
                        pcVar10 = "X";
                        break;
                      case 0x69:
                        pcVar10 = "i";
                        break;
                      case 0x6f:
                        pcVar10 = "o";
                        break;
                      case 0x75:
                        pcVar10 = "u";
                        break;
                      case 0x78:
                        pcVar10 = "x";
                      }
                    }
                  }
                  else if (cVar2 == '6') {
                    pcVar10 = (char *)0x0;
                    if ((pcVar7[5] == '4') && (pcVar7[6] == '\0')) {
                      switch(bVar1) {
                      case 100:
                        pcVar10 = "ld";
                        break;
                      default:
                        pcVar10 = "lX";
                        break;
                      case 0x69:
                        pcVar10 = "li";
                        break;
                      case 0x6f:
                        pcVar10 = "lo";
                        break;
                      case 0x75:
                        pcVar10 = "lu";
                        break;
                      case 0x78:
                        pcVar10 = "lx";
                      }
                    }
                  }
                  else if (cVar2 == 'L') {
                    pcVar10 = (char *)0x0;
                    if (((pcVar7[5] == 'E') && (pcVar7[6] == 'A')) &&
                       ((pcVar7[7] == 'S' && (pcVar7[8] == 'T')))) {
                      cVar2 = pcVar7[9];
                      if (cVar2 == '8') {
                        pcVar10 = (char *)0x0;
                        if (pcVar7[10] == '\0') {
                          switch(bVar1) {
                          case 100:
                            pcVar10 = "d";
                            break;
                          default:
                            pcVar10 = "X";
                            break;
                          case 0x69:
                            pcVar10 = "i";
                            break;
                          case 0x6f:
                            pcVar10 = "o";
                            break;
                          case 0x75:
                            pcVar10 = "u";
                            break;
                          case 0x78:
                            pcVar10 = "x";
                          }
                        }
                      }
                      else if (cVar2 == '1') {
                        pcVar10 = (char *)0x0;
                        if ((pcVar7[10] == '6') && (pcVar7[0xb] == '\0')) {
                          switch(bVar1) {
                          case 100:
                            pcVar10 = "d";
                            break;
                          default:
                            pcVar10 = "X";
                            break;
                          case 0x69:
                            pcVar10 = "i";
                            break;
                          case 0x6f:
                            pcVar10 = "o";
                            break;
                          case 0x75:
                            pcVar10 = "u";
                            break;
                          case 0x78:
                            pcVar10 = "x";
                          }
                        }
                      }
                      else {
                        pcVar10 = (char *)0x0;
                        if (cVar2 == '3') {
                          if ((pcVar7[10] == '2') && (pcVar7[0xb] == '\0')) {
                            switch(bVar1) {
                            case 100:
                              pcVar10 = "d";
                              break;
                            default:
                              pcVar10 = "X";
                              break;
                            case 0x69:
                              pcVar10 = "i";
                              break;
                            case 0x6f:
                              pcVar10 = "o";
                              break;
                            case 0x75:
                              pcVar10 = "u";
                              break;
                            case 0x78:
                              pcVar10 = "x";
                            }
                          }
                        }
                        else if (((cVar2 == '6') && (pcVar7[10] == '4')) && (pcVar7[0xb] == '\0')) {
                          switch(bVar1) {
                          case 100:
                            pcVar10 = "ld";
                            break;
                          default:
                            pcVar10 = "lX";
                            break;
                          case 0x69:
                            pcVar10 = "li";
                            break;
                          case 0x6f:
                            pcVar10 = "lo";
                            break;
                          case 0x75:
                            pcVar10 = "lu";
                            break;
                          case 0x78:
                            pcVar10 = "lx";
                          }
                        }
                      }
                    }
                  }
                  else if (cVar2 == 'F') {
                    pcVar10 = (char *)0x0;
                    if (((pcVar7[5] == 'A') && (pcVar7[6] == 'S')) && (pcVar7[7] == 'T')) {
                      cVar2 = pcVar7[8];
                      if (cVar2 == '8') {
                        pcVar10 = (char *)0x0;
                        if (pcVar7[9] == '\0') {
                          switch(bVar1) {
                          case 100:
                            pcVar10 = "d";
                            break;
                          default:
                            pcVar10 = "X";
                            break;
                          case 0x69:
                            pcVar10 = "i";
                            break;
                          case 0x6f:
                            pcVar10 = "o";
                            break;
                          case 0x75:
                            pcVar10 = "u";
                            break;
                          case 0x78:
                            pcVar10 = "x";
                          }
                        }
                      }
                      else if (cVar2 == '1') {
                        pcVar10 = (char *)0x0;
                        if ((pcVar7[9] == '6') && (pcVar7[10] == '\0')) {
                          switch(bVar1) {
                          case 100:
                            pcVar10 = "ld";
                            break;
                          default:
                            pcVar10 = "lX";
                            break;
                          case 0x69:
                            pcVar10 = "li";
                            break;
                          case 0x6f:
                            pcVar10 = "lo";
                            break;
                          case 0x75:
                            pcVar10 = "lu";
                            break;
                          case 0x78:
                            pcVar10 = "lx";
                          }
                        }
                      }
                      else {
                        pcVar10 = (char *)0x0;
                        if (cVar2 == '3') {
                          if ((pcVar7[9] == '2') && (pcVar7[10] == '\0')) {
                            switch(bVar1) {
                            case 100:
                              pcVar10 = "ld";
                              break;
                            default:
                              pcVar10 = "lX";
                              break;
                            case 0x69:
                              pcVar10 = "li";
                              break;
                            case 0x6f:
                              pcVar10 = "lo";
                              break;
                            case 0x75:
                              pcVar10 = "lu";
                              break;
                            case 0x78:
                              pcVar10 = "lx";
                            }
                          }
                        }
                        else if (((cVar2 == '6') && (pcVar7[9] == '4')) && (pcVar7[10] == '\0')) {
                          switch(bVar1) {
                          case 100:
                            pcVar10 = "ld";
                            break;
                          default:
                            pcVar10 = "lX";
                            break;
                          case 0x69:
                            pcVar10 = "li";
                            break;
                          case 0x6f:
                            pcVar10 = "lo";
                            break;
                          case 0x75:
                            pcVar10 = "lu";
                            break;
                          case 0x78:
                            pcVar10 = "lx";
                          }
                        }
                      }
                    }
                  }
                  else if (cVar2 == 'M') {
                    pcVar10 = (char *)0x0;
                    if (((pcVar7[5] == 'A') && (pcVar7[6] == 'X')) && (pcVar7[7] == '\0')) {
                      switch(bVar1) {
                      case 100:
                        pcVar10 = "ld";
                        break;
                      default:
                        pcVar10 = "lX";
                        break;
                      case 0x69:
                        pcVar10 = "li";
                        break;
                      case 0x6f:
                        pcVar10 = "lo";
                        break;
                      case 0x75:
                        pcVar10 = "lu";
                        break;
                      case 0x78:
                        pcVar10 = "lx";
                      }
                    }
                  }
                  else {
                    pcVar10 = (char *)0x0;
                    if ((((cVar2 == 'P') && (pcVar7[5] == 'T')) && (pcVar7[6] == 'R')) &&
                       (pcVar7[7] == '\0')) {
                      switch(bVar1) {
                      case 100:
                        pcVar10 = "ld";
                        break;
                      default:
                        pcVar10 = "lX";
                        break;
                      case 0x69:
                        pcVar10 = "li";
                        break;
                      case 0x6f:
                        pcVar10 = "lo";
                        break;
                      case 0x75:
                        pcVar10 = "lu";
                        break;
                      case 0x78:
                        pcVar10 = "lx";
                      }
                    }
                  }
                }
              }
              else if (*pcVar7 == 'I') {
                pcVar10 = (char *)0x0;
                if (pcVar7[1] == '\0') {
                  pcVar10 = "I";
                }
              }
              else {
                pcVar10 = (char *)0x0;
              }
              *(char **)(__ptr + (long)piVar13 * 2) = pcVar10;
              piVar13 = (int *)((long)piVar13 + 1);
            } while (piVar17 != piVar13);
          }
          uVar19 = piVar5[10];
          uVar16 = piVar5[0xb];
          if ((int)local_178 != -0x6afbed22) {
            uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                     uVar19 << 0x18;
            uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                     uVar16 << 0x18;
          }
          local_170 = (long)piVar5 + (ulong)uVar19;
          local_164 = 0;
          lVar18 = 0;
          local_160 = (void *)((uVar22 & 0xffffffff) << 2);
          local_198 = (int *)CONCAT44(local_198._4_4_,(int)local_178);
          local_158 = local_d8.st_size;
          local_178 = (ulong)uVar16 + (long)piVar5;
          local_150 = puVar6;
          local_148 = param_1;
          local_138 = local_160;
LAB_006dac6a:
          puVar6 = (ulong *)0x0;
          do {
            uVar19 = (uint)local_180;
            if ((int)local_198 == -0x6afbed22) {
              if (puVar6 == (ulong *)0x0) {
                uVar16 = *(uint *)(local_170 + lVar18 * 4);
              }
              else {
                uVar16 = *(uint *)(local_178 + lVar18 * 4);
              }
              if (*(int *)((long)piVar5 + (ulong)uVar16 + 8) == -1) goto LAB_006dac9c;
              puVar11 = (uint *)((long)piVar5 + (ulong)uVar16 + 4);
              lVar23 = 0;
              local_140 = puVar6;
              while( true ) {
                lVar23 = lVar23 + (ulong)*puVar11;
                uVar16 = puVar11[1];
                puVar6 = local_140;
                if (uVar16 == 0xffffffff) break;
                param_1 = local_148;
                puVar6 = local_150;
                sVar9 = local_158;
                if (uVar19 <= uVar16) goto LAB_006dabb9;
                if (*(char **)(__ptr + (ulong)uVar16 * 2) == (char *)0x0) goto LAB_006daccb;
                pcStack_1b0 = (code *)0x6dad6b;
                sVar9 = strlen(*(char **)(__ptr + (ulong)uVar16 * 2));
                puVar11 = puVar11 + 2;
                lVar23 = lVar23 + sVar9;
              }
            }
            else {
              if (puVar6 == (ulong *)0x0) {
                uVar16 = *(uint *)(local_170 + lVar18 * 4);
              }
              else {
                uVar16 = *(uint *)(local_178 + lVar18 * 4);
              }
              uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                       uVar16 << 0x18;
              if (*(int *)((long)piVar5 + (ulong)uVar16 + 8) == -1) {
LAB_006dac9c:
                lVar23 = 0;
              }
              else {
                puVar11 = (uint *)((long)piVar5 + (ulong)uVar16 + 4);
                lVar23 = 0;
                local_140 = puVar6;
                while( true ) {
                  uVar16 = *puVar11;
                  uVar20 = puVar11[1];
                  lVar23 = lVar23 + (ulong)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 |
                                            (uVar16 & 0xff00) << 8 | uVar16 << 0x18);
                  uVar16 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                           uVar20 << 0x18;
                  puVar6 = local_140;
                  if (uVar20 == 0xffffffff) break;
                  param_1 = local_148;
                  puVar6 = local_150;
                  sVar9 = local_158;
                  if (uVar19 <= uVar16) goto LAB_006dabb9;
                  if (*(char **)(__ptr + (ulong)uVar16 * 2) == (char *)0x0) goto LAB_006daccb;
                  pcStack_1b0 = (code *)0x6dadfd;
                  sVar9 = strlen(*(char **)(__ptr + (ulong)uVar16 * 2));
                  puVar11 = puVar11 + 2;
                  lVar23 = lVar23 + sVar9;
                }
              }
            }
            local_e8[(long)puVar6] = lVar23;
            if (puVar6 == (ulong *)0x1) goto code_r0x006dacb1;
            puVar6 = (ulong *)0x1;
          } while( true );
        }
      }
LAB_006daa80:
      pvVar8 = (void *)0x0;
      goto LAB_006daa83;
    }
    uVar16 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8;
    uVar19 = uVar16 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
    if (0x1ffff < uVar19) goto LAB_006daa80;
    uVar20 = piVar5[2];
    uVar3 = piVar5[4];
    *(uint *)(puVar6 + 5) =
         uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
    uVar20 = piVar5[3];
    uVar12 = piVar5[5];
    uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
    *(uint *)(puVar6 + 0xb) = uVar12;
    puVar6[6] = (ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                       uVar20 << 0x18) + (long)local_198;
    puVar6[7] = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                       uVar3 << 0x18) + (long)piStack_190;
    if (uVar12 < 3) {
LAB_006da9f3:
      puVar6[0xc] = 0;
      *(uint *)(puVar6 + 0xd) = (uint)bVar26;
      if ((short)uVar19 != 0) goto LAB_006daa80;
    }
    else {
      uVar19 = piVar5[6];
      *(uint *)(puVar6 + 0xd) = (uint)bVar26;
      puVar6[0xc] = (ulong)(uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                           uVar19 << 0x18) + (long)piVar5;
      if ((short)uVar16 != 0) {
        uVar19 = piVar5[9];
        uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18
        ;
        local_188 = (int *)CONCAT44(local_188._4_4_,uVar19);
        if (uVar19 != 0) {
          uVar19 = piVar5[7];
          uVar16 = piVar5[8];
          uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                   uVar19 << 0x18;
          uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                   uVar16 << 0x18;
          goto LAB_006da7b4;
        }
      }
    }
LAB_006daa04:
    *(undefined4 *)(puVar6 + 8) = 0;
    *(undefined1 (*) [16])(puVar6 + 9) = (undefined1  [16])0x0;
    goto LAB_006daa15;
  }
LAB_006da932:
  DAT_009393d4 = iVar4;
  *(undefined4 *)(param_1 + 1) = 1;
LAB_006da939:
  if (DAT_009393d4 == 0) {
    _DAT_009393d8 = 0;
    LOCK();
    UNLOCK();
    bVar26 = 1 < lock_0;
    lock_0 = DAT_009393d4;
    if (bVar26) {
      pcStack_1b0 = (code *)0x6da9ac;
      __lll_lock_wake_private(&lock_0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  pcStack_1b0 = (code *)0x6db587;
  __stack_chk_fail_local();
code_r0x006dacb1:
  local_164 = local_164 + 1;
  local_160 = (void *)((long)local_160 + local_e8[1] + local_e8[0]);
LAB_006daccb:
  param_1 = local_148;
  puVar6 = local_150;
  sVar9 = local_158;
  uVar19 = local_164;
  lVar18 = lVar18 + 1;
  if ((uint)local_188 <= (uint)lVar18) goto code_r0x006dacd5;
  goto LAB_006dac6a;
LAB_006dabb9:
  pcStack_1b0 = (code *)0x6dabc1;
  free(__ptr);
  pvVar8 = (void *)0x0;
  goto LAB_006daa83;
code_r0x006dacd5:
  if (local_164 == 0) {
    *(undefined4 *)(local_150 + 8) = 0;
    *(undefined1 (*) [16])(local_150 + 9) = (undefined1  [16])0x0;
    goto LAB_006dad09;
  }
  pcStack_1b0 = (code *)0x6db0e3;
  local_198 = __ptr;
  pvVar8 = malloc((size_t)((ulong)(local_164 * 2) * 0x10 + (long)local_160));
  if (pvVar8 != (void *)0x0) {
    puVar6[4] = (ulong)pvVar8;
    local_130 = (void *)((long)pvVar8 + (ulong)uVar19 * 0x10);
    local_158 = local_158 & 0xffffffff00000000;
    local_110 = (void *)((long)local_130 + (ulong)uVar19 * 0x10);
    pvVar25 = (void *)0x0;
    local_118 = sVar9;
    __dest = (void *)((long)local_138 + (long)local_110);
    local_108 = param_1;
    piVar17 = local_198;
    local_138 = pvVar8;
    local_128 = pvVar8;
    pvStack_120 = local_130;
LAB_006db159:
    iVar4 = (int)puVar6[3];
    bVar26 = false;
    do {
      if (iVar4 == 0) {
        if (bVar26) {
          uVar19 = *(uint *)(local_178 + (long)pvVar25 * 4);
        }
        else {
          uVar19 = *(uint *)(local_170 + (long)pvVar25 * 4);
        }
        if (*(int *)((long)piVar5 + (ulong)uVar19 + 8) != -1) {
          for (lVar18 = (long)piVar5 + (ulong)uVar19 + 4; *(uint *)(lVar18 + 4) != 0xffffffff;
              lVar18 = lVar18 + 8) {
            if (*(long *)(piVar17 + (ulong)*(uint *)(lVar18 + 4) * 2) == 0) goto LAB_006db2af;
          }
        }
      }
      else {
        if (bVar26) {
          uVar19 = *(uint *)(local_178 + (long)pvVar25 * 4);
        }
        else {
          uVar19 = *(uint *)(local_170 + (long)pvVar25 * 4);
        }
        uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18
        ;
        if (*(int *)((long)piVar5 + (ulong)uVar19 + 8) != -1) {
          lVar18 = (long)piVar5 + (ulong)uVar19 + 4;
          while( true ) {
            uVar19 = *(uint *)(lVar18 + 4);
            if (uVar19 == 0xffffffff) break;
            if (*(long *)(piVar17 +
                         (ulong)(uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8
                                | uVar19 << 0x18) * 2) == 0) goto LAB_006db2af;
            lVar18 = lVar18 + 8;
          }
        }
      }
      if (bVar26) {
        local_180 = (ulong *)((ulong)local_180 & 0xffffffff00000000);
        lVar18 = (local_158 & 0xffffffff) * 0x10;
        local_148 = (ulong *)((long)local_130 + lVar18);
        local_150 = (ulong *)(lVar18 + (long)local_138);
        local_198 = piVar17;
        local_160 = pvVar25;
        if (iVar4 == 0) goto LAB_006db237;
LAB_006db1cb:
        if ((uint)local_180 == 0) {
          uVar19 = *(uint *)(local_170 + (long)local_160 * 4);
          local_140 = local_150;
          puVar11 = (uint *)((ulong)(uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 |
                                     (uVar19 & 0xff00) << 8 | uVar19 << 0x18) + (long)piVar5);
          uVar19 = *puVar11;
          uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                   uVar19 << 0x18;
        }
        else {
          uVar19 = *(uint *)(local_178 + (long)local_160 * 4);
          local_140 = local_148;
          puVar11 = (uint *)((ulong)(uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 |
                                     (uVar19 & 0xff00) << 8 | uVar19 << 0x18) + (long)piVar5);
          uVar19 = *puVar11;
          uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                   uVar19 << 0x18;
        }
        pvVar8 = (void *)((ulong)uVar19 + (long)piVar5);
        pvVar25 = __dest;
        if (puVar11[2] != 0xffffffff) goto LAB_006db49a;
        uVar19 = puVar11[1];
        uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18
        ;
        do {
          *local_140 = (ulong)uVar19;
          local_140[1] = (ulong)pvVar8;
          while( true ) {
            if ((uint)local_180 == 1) {
              local_158 = CONCAT44(local_158._4_4_,(uint)local_158 + 1);
              piVar17 = local_198;
              pvVar25 = local_160;
              goto LAB_006db2af;
            }
            iVar4 = (int)puVar6[3];
            local_180 = (ulong *)CONCAT44(local_180._4_4_,1);
            if (iVar4 != 0) goto LAB_006db1cb;
LAB_006db237:
            if ((uint)local_180 == 0) {
              local_140 = local_150;
              puVar11 = (uint *)((ulong)*(uint *)(local_170 + (long)local_160 * 4) + (long)piVar5);
              uVar19 = *puVar11;
            }
            else {
              puVar11 = (uint *)((ulong)*(uint *)(local_178 + (long)local_160 * 4) + (long)piVar5);
              local_140 = local_148;
              uVar19 = *puVar11;
            }
            pvVar8 = (void *)((ulong)uVar19 + (long)piVar5);
            pvVar25 = __dest;
            if (puVar11[2] == 0xffffffff) break;
LAB_006db49a:
            puVar11 = puVar11 + 1;
            local_140[1] = (ulong)pvVar25;
            local_100 = piVar5;
            while( true ) {
              uVar19 = *puVar11;
              uVar16 = puVar11[1];
              if (iVar4 != 0) {
                uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                         uVar19 << 0x18;
                uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18;
              }
              pvVar15 = pvVar8;
              __dest = pvVar25;
              if (uVar19 != 0) {
                uVar22 = (ulong)uVar19;
                __dest = (void *)((long)pvVar25 + uVar22);
                pvVar15 = (void *)((long)pvVar8 + uVar22);
                pcStack_1b0 = (code *)0x6db514;
                memcpy(pvVar25,pvVar8,uVar22);
              }
              if (uVar16 == 0xffffffff) break;
              puVar11 = puVar11 + 2;
              pcVar7 = *(char **)(local_198 + (ulong)uVar16 * 2);
              pcStack_1b0 = (code *)0x6db4d0;
              sVar9 = strlen(pcVar7);
              pcStack_1b0 = (code *)0x6db4e1;
              memcpy(__dest,pcVar7,sVar9);
              iVar4 = (int)puVar6[3];
              pvVar25 = (void *)((long)__dest + sVar9);
              pvVar8 = pvVar15;
            }
            *local_140 = (long)__dest - local_140[1];
            piVar5 = local_100;
          }
          uVar19 = puVar11[1];
        } while( true );
      }
      bVar26 = true;
    } while( true );
  }
LAB_006daa83:
  pcStack_1b0 = (code *)0x6daa8b;
  free(pvVar8);
  if (local_168 == 0) {
    pcStack_1b0 = (code *)0x6daa9b;
    free(piVar5);
  }
  else {
    pcStack_1b0 = (code *)0x6daacb;
    munmap(piVar5,sVar9);
  }
  pcStack_1b0 = (code *)0x6daaa3;
  free(puVar6);
  param_1[2] = 0;
  iVar4 = DAT_009393d4 + -1;
  goto LAB_006da932;
LAB_006db2af:
  pvVar8 = local_110;
  sVar9 = local_118;
  uVar19 = local_164;
  pvVar25 = (void *)((long)pvVar25 + 1);
  if ((uint)local_188 <= (uint)pvVar25) goto code_r0x006db2be;
  goto LAB_006db159;
code_r0x006db2be:
  if (local_164 != (uint)local_158) {
    pcStack_1b0 = abort;
    puStack_1c0 = local_108;
    uStack_1d0 = *(undefined8 *)(in_FS_OFFSET + 0x28);
    lVar18 = *(long *)(in_FS_OFFSET + 0x10);
    lVar23 = DAT_009394b8;
    pvStack_1b8 = __dest;
    if (DAT_009394b8 != lVar18) {
      LOCK();
      bVar26 = lock == 0;
      if (bVar26) {
        lock = 1;
      }
      UNLOCK();
      lVar23 = lVar18;
      if (!bVar26) {
        __lll_lock_wait_private(&lock);
      }
    }
    DAT_009394b8 = lVar23;
    DAT_009394b4 = DAT_009394b4 + 1;
    if (stage == 0) {
      stage = 1;
      sStack_2e8.__val[0] = 0x20;
      sigprocmask(1,&sStack_2e8,(sigset_t *)0x0);
    }
    if (stage == 1) {
      stage = 0;
      DAT_009394b4 = DAT_009394b4 + -1;
      if (DAT_009394b4 == 0) {
        DAT_009394b8 = 0;
        LOCK();
        UNLOCK();
        bVar26 = 1 < lock;
        lock = DAT_009394b4;
        if (bVar26) {
          __lll_lock_wake_private(&lock);
        }
      }
      raise(6);
      lVar18 = *(long *)(in_FS_OFFSET + 0x10);
      lVar23 = DAT_009394b8;
      if (DAT_009394b8 != lVar18) {
        LOCK();
        bVar26 = lock == 0;
        if (bVar26) {
          lock = 1;
        }
        UNLOCK();
        lVar23 = lVar18;
        if (!bVar26) {
          __lll_lock_wait_private(&lock);
        }
      }
      DAT_009394b8 = lVar23;
      DAT_009394b4 = DAT_009394b4 + 1;
    }
    else if (stage != 2) goto LAB_004046d3;
    stage = 3;
    psVar21 = &sStack_268;
    for (lVar18 = 0x26; lVar18 != 0; lVar18 = lVar18 + -1) {
      *(undefined4 *)&psVar21->__sigaction_handler = 0;
      psVar21 = (sigaction *)((long)psVar21 + (ulong)bVar27 * -8 + 4);
    }
    sStack_268.sa_mask.__val[0] = 0xffffffffffffffff;
    sigaction(6,&sStack_268,(sigaction *)0x0);
LAB_004046d3:
    if (stage == 3) {
      stage = 4;
      raise(6);
    }
    if (stage == 4) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (stage == 5) {
      stage = 6;
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((int)puVar6[0xb] != 0) {
    uVar22 = puVar6[0xc];
    uVar16 = 0;
    do {
      while( true ) {
        uVar14 = (ulong)uVar16;
        uVar20 = *(uint *)(uVar22 + uVar14 * 4);
        if ((int)puVar6[0xd] == 0) break;
        uVar16 = uVar16 + 1;
        *(uint *)((long)local_110 + uVar14 * 4) =
             uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
        if ((uint)puVar6[0xb] <= uVar16) goto LAB_006db31f;
      }
      *(uint *)((long)local_110 + uVar14 * 4) = uVar20;
      uVar16 = uVar16 + 1;
    } while (uVar16 < (uint)puVar6[0xb]);
  }
LAB_006db31f:
  puVar24 = (undefined8 *)((long)local_138 + 8);
  local_180 = local_108;
  uVar16 = 0;
  local_198 = piVar17;
  local_188 = piVar5;
  do {
    pcStack_1b0 = (code *)0x6db350;
    uVar12 = __hash_string(*puVar24);
    uVar20 = (uint)puVar6[0xb];
    uVar22 = (ulong)uVar12 % (ulong)uVar20;
    piVar5 = (int *)((long)pvVar8 + uVar22 * 4);
    iVar4 = uVar12 % (uVar20 - 2) + 1;
    if (*piVar5 != 0) {
      do {
        while (uVar12 = (uint)uVar22, uVar20 - iVar4 <= uVar12) {
          uVar22 = (ulong)(uVar12 + (iVar4 - uVar20));
          piVar5 = (int *)((long)pvVar8 + uVar22 * 4);
          if (*piVar5 == 0) goto LAB_006db3a6;
        }
        uVar22 = (ulong)(uVar12 + iVar4);
        piVar5 = (int *)((long)pvVar8 + uVar22 * 4);
      } while (*piVar5 != 0);
    }
LAB_006db3a6:
    puVar24 = puVar24 + 2;
    iVar4 = uVar16 + 1;
    uVar16 = uVar16 + 1;
    *piVar5 = iVar4 + (int)puVar6[5];
  } while (uVar19 != uVar16);
  puVar6[0xc] = (ulong)pvVar8;
  *(uint *)(puVar6 + 8) = local_164;
  *(undefined4 *)(puVar6 + 0xd) = 0;
  puVar6[9] = (ulong)local_128;
  puVar6[10] = (ulong)pvStack_120;
  param_1 = local_180;
  __ptr = local_198;
  piVar5 = local_188;
LAB_006dad09:
  pcStack_1b0 = (code *)0x6dad11;
  free(__ptr);
LAB_006daa15:
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  pcStack_1b0 = (code *)0x6daa33;
  pthread_rwlock_init((pthread_rwlock_t *)(puVar6 + 0x10),(pthread_rwlockattr_t *)0x0);
  pcStack_1b0 = (code *)0x6daa51;
  lVar18 = _nl_find_msg(param_1,local_1a0,&DAT_008343a2,0,local_f0);
  if (lVar18 == -1) {
    pvVar8 = (void *)puVar6[4];
    goto LAB_006daa83;
  }
  pcStack_1b0 = (code *)0x6daa71;
  __gettext_extract_plural(lVar18,puVar6 + 0x17,puVar6 + 0x18);
  iVar4 = DAT_009393d4 + -1;
  goto LAB_006da932;
}

