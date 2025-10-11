
void FUN_006e3fa0(ulong *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  ulong *puVar7;
  int *piVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  uint *puVar13;
  uint uVar14;
  int *piVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  int *piVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 *puVar24;
  long lVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long in_FS_OFFSET;
  bool bVar28;
  byte bVar29;
  undefined8 auStack_2e8 [16];
  undefined4 auStack_268 [2];
  undefined8 uStack_260;
  undefined8 uStack_1d0;
  ulong *puStack_1c0;
  ulong uStack_1b8;
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
  ulong local_160;
  ulong local_158;
  ulong *local_150;
  ulong *local_148;
  ulong *local_140;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong uStack_120;
  ulong local_118;
  ulong local_110;
  ulong *local_108;
  int *local_100;
  undefined1 local_f0 [8];
  long local_e8 [2];
  undefined1 local_d8 [48];
  ulong local_a8;
  long local_40;
  
  bVar29 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar20 = *(long *)(in_FS_OFFSET + 0x10);
  lVar25 = DAT_009463d8;
  local_1a0 = param_2;
  if (DAT_009463d8 != lVar20) {
    LOCK();
    bVar28 = DAT_009463d0 == 0;
    if (bVar28) {
      DAT_009463d0 = 1;
    }
    UNLOCK();
    lVar25 = lVar20;
    if (!bVar28) {
      pcStack_1b0 = (code *)0x6e43a4;
      FUN_00709590(&DAT_009463d0);
    }
  }
  DAT_009463d8 = lVar25;
  iVar5 = DAT_009463d4;
  if ((int)param_1[1] != 0) goto LAB_006e4349;
  DAT_009463d4 = DAT_009463d4 + 1;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[2] = 0;
  if (*param_1 != 0) {
    pcStack_1b0 = (code *)0x6e403c;
    iVar5 = FUN_0076e620(*param_1,0);
    if (iVar5 == -1) {
LAB_006e4339:
      iVar5 = DAT_009463d4 + -1;
      goto LAB_006e4342;
    }
    pcStack_1b0 = (code *)0x6e4056;
    local_168 = FUN_0076d7f0(iVar5,local_d8);
    if ((local_168 != 0) || (local_a8 < 0x30)) {
LAB_006e4332:
      pcStack_1b0 = (code *)0x6e4339;
      FUN_0076e4b0(iVar5);
      goto LAB_006e4339;
    }
    pcStack_1b0 = (code *)0x6e408e;
    piVar6 = (int *)FUN_0076f020(0,local_a8,1,2,iVar5,0);
    if (piVar6 == (int *)0xffffffffffffffff) {
      pcStack_1b0 = (code *)0x6e4538;
      piVar6 = (int *)FUN_007101b0(local_a8);
      piVar19 = piVar6;
      uVar16 = local_a8;
      if (piVar6 != (int *)0x0) {
        do {
          while( true ) {
            pcStack_1b0 = (code *)0x6e455b;
            lVar20 = FUN_0076e770(iVar5,piVar19,uVar16);
            if (lVar20 < 1) break;
            uVar16 = uVar16 - lVar20;
            piVar19 = (int *)((long)piVar19 + lVar20);
            if (uVar16 == 0) {
              pcStack_1b0 = (code *)0x6e4579;
              FUN_0076e4b0(iVar5);
              iVar5 = *piVar6;
              bVar28 = iVar5 != -0x6afbed22;
              if ((iVar5 == -0x21edfb6b) || (!bVar28)) goto LAB_006e40ca;
              pcStack_1b0 = (code *)0x6e45a6;
              FUN_007104f0(piVar6);
              iVar5 = DAT_009463d4 + -1;
              goto LAB_006e4342;
            }
          }
        } while ((lVar20 == -1) && (*(int *)(in_FS_OFFSET + -0x58) == 4));
      }
      goto LAB_006e4332;
    }
    pcStack_1b0 = (code *)0x6e40a2;
    FUN_0076e4b0(iVar5);
    iVar5 = *piVar6;
    bVar28 = iVar5 != -0x6afbed22;
    if ((iVar5 != -0x21edfb6b) && (bVar28)) {
      pcStack_1b0 = (code *)0x6e45fb;
      FUN_0076f080(piVar6,local_a8);
      iVar5 = DAT_009463d4 + -1;
      goto LAB_006e4342;
    }
    local_168 = 1;
LAB_006e40ca:
    local_188 = (int *)CONCAT44(local_188._4_4_,iVar5);
    pcStack_1b0 = (code *)0x6e40e7;
    local_198 = piVar6;
    piStack_190 = piVar6;
    puVar7 = (ulong *)FUN_007101b0(200);
    iVar5 = (uint)local_188;
    if (puVar7 == (ulong *)0x0) goto LAB_006e4339;
    *puVar7 = (ulong)piVar6;
    uVar22 = piVar6[1];
    param_1[2] = (ulong)puVar7;
    puVar7[2] = local_a8;
    *(int *)(puVar7 + 1) = local_168;
    *(uint *)(puVar7 + 3) = (uint)bVar28;
    puVar7[4] = 0;
    uVar16 = local_a8;
    if ((uint)local_188 == -0x6afbed22) {
      if (uVar22 < 0x20000) {
        uVar18 = piVar6[3];
        uVar23 = piVar6[4];
        uVar14 = piVar6[5];
        *(int *)(puVar7 + 5) = piVar6[2];
        *(uint *)(puVar7 + 0xb) = uVar14;
        puVar7[6] = (ulong)uVar18 + (long)local_198;
        puVar7[7] = (ulong)uVar23 + (long)piStack_190;
        if (uVar14 < 3) goto LAB_006e4403;
        uVar18 = piVar6[6];
        *(uint *)(puVar7 + 0xd) = (uint)bVar28;
        puVar7[0xc] = (ulong)uVar18 + (long)piVar6;
        if (((short)uVar22 == 0) ||
           (local_188 = (int *)CONCAT44(local_188._4_4_,piVar6[9]), piVar6[9] == 0))
        goto LAB_006e4414;
        uVar22 = piVar6[7];
        uVar18 = piVar6[8];
LAB_006e41c4:
        local_180 = (ulong *)CONCAT44(local_180._4_4_,uVar22);
        local_198 = (int *)(ulong)uVar22;
        local_170 = CONCAT44(local_170._4_4_,uVar14);
        local_178 = CONCAT44(local_178._4_4_,iVar5);
        pcStack_1b0 = (code *)0x6e41e3;
        piVar8 = (int *)FUN_00711600(local_198,8);
        uVar11 = local_170;
        piVar19 = local_198;
        if (piVar8 != (int *)0x0) {
          piVar15 = (int *)0x0;
          if (uVar22 != 0) {
            local_198 = (int *)CONCAT44(local_198._4_4_,(undefined4)local_170);
            do {
              uVar22 = *(uint *)((long)piVar6 + (long)piVar15 * 8 + (ulong)uVar18 + 4);
              uVar23 = *(uint *)((long)piVar6 + (long)piVar15 * 8 + (ulong)uVar18);
              if ((int)local_178 != -0x6afbed22) {
                uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                         uVar22 << 0x18;
                uVar23 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                         uVar23 << 0x18;
              }
              pcVar9 = (char *)((ulong)uVar22 + (long)piVar6);
              if ((uVar23 == 0) || (pcVar9[uVar23 - 1] != '\0')) goto LAB_006e45c9;
              if (*pcVar9 == 'P') {
                pcVar12 = (char *)0x0;
                if (((pcVar9[1] == 'R') && (pcVar9[2] == 'I')) &&
                   (((bVar1 = pcVar9[3], bVar1 == 100 || (bVar1 == 0x69)) ||
                    (((byte)(bVar1 - 0x58) < 0x21 &&
                     (pcVar12 = (char *)0x0,
                     (0x120800001U >> ((ulong)(bVar1 - 0x58) & 0x3f) & 1) != 0)))))) {
                  cVar2 = pcVar9[4];
                  if (cVar2 == '8') {
                    pcVar12 = (char *)0x0;
                    if (pcVar9[5] == '\0') {
                      switch(bVar1) {
                      case 100:
                        pcVar12 = "d";
                        break;
                      default:
                        pcVar12 = "X";
                        break;
                      case 0x69:
                        pcVar12 = "i";
                        break;
                      case 0x6f:
                        pcVar12 = "o";
                        break;
                      case 0x75:
                        pcVar12 = "u";
                        break;
                      case 0x78:
                        pcVar12 = "x";
                      }
                    }
                  }
                  else if (cVar2 == '1') {
                    pcVar12 = (char *)0x0;
                    if ((pcVar9[5] == '6') && (pcVar9[6] == '\0')) {
                      switch(bVar1) {
                      case 100:
                        pcVar12 = "d";
                        break;
                      default:
                        pcVar12 = "X";
                        break;
                      case 0x69:
                        pcVar12 = "i";
                        break;
                      case 0x6f:
                        pcVar12 = "o";
                        break;
                      case 0x75:
                        pcVar12 = "u";
                        break;
                      case 0x78:
                        pcVar12 = "x";
                      }
                    }
                  }
                  else if (cVar2 == '3') {
                    pcVar12 = (char *)0x0;
                    if ((pcVar9[5] == '2') && (pcVar9[6] == '\0')) {
                      switch(bVar1) {
                      case 100:
                        pcVar12 = "d";
                        break;
                      default:
                        pcVar12 = "X";
                        break;
                      case 0x69:
                        pcVar12 = "i";
                        break;
                      case 0x6f:
                        pcVar12 = "o";
                        break;
                      case 0x75:
                        pcVar12 = "u";
                        break;
                      case 0x78:
                        pcVar12 = "x";
                      }
                    }
                  }
                  else if (cVar2 == '6') {
                    pcVar12 = (char *)0x0;
                    if ((pcVar9[5] == '4') && (pcVar9[6] == '\0')) {
                      switch(bVar1) {
                      case 100:
                        pcVar12 = "ld";
                        break;
                      default:
                        pcVar12 = "lX";
                        break;
                      case 0x69:
                        pcVar12 = "li";
                        break;
                      case 0x6f:
                        pcVar12 = "lo";
                        break;
                      case 0x75:
                        pcVar12 = "lu";
                        break;
                      case 0x78:
                        pcVar12 = "lx";
                      }
                    }
                  }
                  else if (cVar2 == 'L') {
                    pcVar12 = (char *)0x0;
                    if (((pcVar9[5] == 'E') && (pcVar9[6] == 'A')) &&
                       ((pcVar9[7] == 'S' && (pcVar9[8] == 'T')))) {
                      cVar2 = pcVar9[9];
                      if (cVar2 == '8') {
                        pcVar12 = (char *)0x0;
                        if (pcVar9[10] == '\0') {
                          switch(bVar1) {
                          case 100:
                            pcVar12 = "d";
                            break;
                          default:
                            pcVar12 = "X";
                            break;
                          case 0x69:
                            pcVar12 = "i";
                            break;
                          case 0x6f:
                            pcVar12 = "o";
                            break;
                          case 0x75:
                            pcVar12 = "u";
                            break;
                          case 0x78:
                            pcVar12 = "x";
                          }
                        }
                      }
                      else if (cVar2 == '1') {
                        pcVar12 = (char *)0x0;
                        if ((pcVar9[10] == '6') && (pcVar9[0xb] == '\0')) {
                          switch(bVar1) {
                          case 100:
                            pcVar12 = "d";
                            break;
                          default:
                            pcVar12 = "X";
                            break;
                          case 0x69:
                            pcVar12 = "i";
                            break;
                          case 0x6f:
                            pcVar12 = "o";
                            break;
                          case 0x75:
                            pcVar12 = "u";
                            break;
                          case 0x78:
                            pcVar12 = "x";
                          }
                        }
                      }
                      else {
                        pcVar12 = (char *)0x0;
                        if (cVar2 == '3') {
                          if ((pcVar9[10] == '2') && (pcVar9[0xb] == '\0')) {
                            switch(bVar1) {
                            case 100:
                              pcVar12 = "d";
                              break;
                            default:
                              pcVar12 = "X";
                              break;
                            case 0x69:
                              pcVar12 = "i";
                              break;
                            case 0x6f:
                              pcVar12 = "o";
                              break;
                            case 0x75:
                              pcVar12 = "u";
                              break;
                            case 0x78:
                              pcVar12 = "x";
                            }
                          }
                        }
                        else if (((cVar2 == '6') && (pcVar9[10] == '4')) && (pcVar9[0xb] == '\0')) {
                          switch(bVar1) {
                          case 100:
                            pcVar12 = "ld";
                            break;
                          default:
                            pcVar12 = "lX";
                            break;
                          case 0x69:
                            pcVar12 = "li";
                            break;
                          case 0x6f:
                            pcVar12 = "lo";
                            break;
                          case 0x75:
                            pcVar12 = "lu";
                            break;
                          case 0x78:
                            pcVar12 = "lx";
                          }
                        }
                      }
                    }
                  }
                  else if (cVar2 == 'F') {
                    pcVar12 = (char *)0x0;
                    if (((pcVar9[5] == 'A') && (pcVar9[6] == 'S')) && (pcVar9[7] == 'T')) {
                      cVar2 = pcVar9[8];
                      if (cVar2 == '8') {
                        pcVar12 = (char *)0x0;
                        if (pcVar9[9] == '\0') {
                          switch(bVar1) {
                          case 100:
                            pcVar12 = "d";
                            break;
                          default:
                            pcVar12 = "X";
                            break;
                          case 0x69:
                            pcVar12 = "i";
                            break;
                          case 0x6f:
                            pcVar12 = "o";
                            break;
                          case 0x75:
                            pcVar12 = "u";
                            break;
                          case 0x78:
                            pcVar12 = "x";
                          }
                        }
                      }
                      else if (cVar2 == '1') {
                        pcVar12 = (char *)0x0;
                        if ((pcVar9[9] == '6') && (pcVar9[10] == '\0')) {
                          switch(bVar1) {
                          case 100:
                            pcVar12 = "ld";
                            break;
                          default:
                            pcVar12 = "lX";
                            break;
                          case 0x69:
                            pcVar12 = "li";
                            break;
                          case 0x6f:
                            pcVar12 = "lo";
                            break;
                          case 0x75:
                            pcVar12 = "lu";
                            break;
                          case 0x78:
                            pcVar12 = "lx";
                          }
                        }
                      }
                      else {
                        pcVar12 = (char *)0x0;
                        if (cVar2 == '3') {
                          if ((pcVar9[9] == '2') && (pcVar9[10] == '\0')) {
                            switch(bVar1) {
                            case 100:
                              pcVar12 = "ld";
                              break;
                            default:
                              pcVar12 = "lX";
                              break;
                            case 0x69:
                              pcVar12 = "li";
                              break;
                            case 0x6f:
                              pcVar12 = "lo";
                              break;
                            case 0x75:
                              pcVar12 = "lu";
                              break;
                            case 0x78:
                              pcVar12 = "lx";
                            }
                          }
                        }
                        else if (((cVar2 == '6') && (pcVar9[9] == '4')) && (pcVar9[10] == '\0')) {
                          switch(bVar1) {
                          case 100:
                            pcVar12 = "ld";
                            break;
                          default:
                            pcVar12 = "lX";
                            break;
                          case 0x69:
                            pcVar12 = "li";
                            break;
                          case 0x6f:
                            pcVar12 = "lo";
                            break;
                          case 0x75:
                            pcVar12 = "lu";
                            break;
                          case 0x78:
                            pcVar12 = "lx";
                          }
                        }
                      }
                    }
                  }
                  else if (cVar2 == 'M') {
                    pcVar12 = (char *)0x0;
                    if (((pcVar9[5] == 'A') && (pcVar9[6] == 'X')) && (pcVar9[7] == '\0')) {
                      switch(bVar1) {
                      case 100:
                        pcVar12 = "ld";
                        break;
                      default:
                        pcVar12 = "lX";
                        break;
                      case 0x69:
                        pcVar12 = "li";
                        break;
                      case 0x6f:
                        pcVar12 = "lo";
                        break;
                      case 0x75:
                        pcVar12 = "lu";
                        break;
                      case 0x78:
                        pcVar12 = "lx";
                      }
                    }
                  }
                  else {
                    pcVar12 = (char *)0x0;
                    if ((((cVar2 == 'P') && (pcVar9[5] == 'T')) && (pcVar9[6] == 'R')) &&
                       (pcVar9[7] == '\0')) {
                      switch(bVar1) {
                      case 100:
                        pcVar12 = "ld";
                        break;
                      default:
                        pcVar12 = "lX";
                        break;
                      case 0x69:
                        pcVar12 = "li";
                        break;
                      case 0x6f:
                        pcVar12 = "lo";
                        break;
                      case 0x75:
                        pcVar12 = "lu";
                        break;
                      case 0x78:
                        pcVar12 = "lx";
                      }
                    }
                  }
                }
              }
              else if (*pcVar9 == 'I') {
                pcVar12 = (char *)0x0;
                if (pcVar9[1] == '\0') {
                  pcVar12 = "I";
                }
              }
              else {
                pcVar12 = (char *)0x0;
              }
              *(char **)(piVar8 + (long)piVar15 * 2) = pcVar12;
              piVar15 = (int *)((long)piVar15 + 1);
            } while (piVar19 != piVar15);
          }
          uVar22 = piVar6[10];
          uVar18 = piVar6[0xb];
          if ((int)local_178 != -0x6afbed22) {
            uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                     uVar22 << 0x18;
            uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                     uVar18 << 0x18;
          }
          local_170 = (long)piVar6 + (ulong)uVar22;
          local_164 = 0;
          lVar20 = 0;
          local_160 = (uVar11 & 0xffffffff) << 2;
          local_198 = (int *)CONCAT44(local_198._4_4_,(int)local_178);
          local_158 = local_a8;
          local_178 = (ulong)uVar18 + (long)piVar6;
          local_150 = puVar7;
          local_148 = param_1;
          local_138 = local_160;
LAB_006e467a:
          puVar7 = (ulong *)0x0;
          do {
            uVar22 = (uint)local_180;
            if ((int)local_198 == -0x6afbed22) {
              if (puVar7 == (ulong *)0x0) {
                uVar18 = *(uint *)(local_170 + lVar20 * 4);
              }
              else {
                uVar18 = *(uint *)(local_178 + lVar20 * 4);
              }
              if (*(int *)((long)piVar6 + (ulong)uVar18 + 8) == -1) goto LAB_006e46ac;
              puVar13 = (uint *)((long)piVar6 + (ulong)uVar18 + 4);
              lVar25 = 0;
              local_140 = puVar7;
              while( true ) {
                lVar25 = lVar25 + (ulong)*puVar13;
                uVar18 = puVar13[1];
                puVar7 = local_140;
                if (uVar18 == 0xffffffff) break;
                param_1 = local_148;
                puVar7 = local_150;
                uVar16 = local_158;
                if (uVar22 <= uVar18) goto LAB_006e45c9;
                if (*(long *)(piVar8 + (ulong)uVar18 * 2) == 0) goto LAB_006e46db;
                pcStack_1b0 = (code *)0x6e477b;
                lVar10 = thunk_FUN_007129d0();
                puVar13 = puVar13 + 2;
                lVar25 = lVar25 + lVar10;
              }
            }
            else {
              if (puVar7 == (ulong *)0x0) {
                uVar18 = *(uint *)(local_170 + lVar20 * 4);
              }
              else {
                uVar18 = *(uint *)(local_178 + lVar20 * 4);
              }
              uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                       uVar18 << 0x18;
              if (*(int *)((long)piVar6 + (ulong)uVar18 + 8) == -1) {
LAB_006e46ac:
                lVar25 = 0;
              }
              else {
                puVar13 = (uint *)((long)piVar6 + (ulong)uVar18 + 4);
                lVar25 = 0;
                local_140 = puVar7;
                while( true ) {
                  uVar18 = *puVar13;
                  uVar23 = puVar13[1];
                  lVar25 = lVar25 + (ulong)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 |
                                            (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
                  uVar18 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                           uVar23 << 0x18;
                  puVar7 = local_140;
                  if (uVar23 == 0xffffffff) break;
                  param_1 = local_148;
                  puVar7 = local_150;
                  uVar16 = local_158;
                  if (uVar22 <= uVar18) goto LAB_006e45c9;
                  if (*(long *)(piVar8 + (ulong)uVar18 * 2) == 0) goto LAB_006e46db;
                  pcStack_1b0 = (code *)0x6e480d;
                  lVar10 = thunk_FUN_007129d0();
                  puVar13 = puVar13 + 2;
                  lVar25 = lVar25 + lVar10;
                }
              }
            }
            local_e8[(long)puVar7] = lVar25;
            if (puVar7 == (ulong *)0x1) goto code_r0x006e46c1;
            puVar7 = (ulong *)0x1;
          } while( true );
        }
      }
LAB_006e4490:
      uVar11 = 0;
      goto LAB_006e4493;
    }
    uVar18 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8;
    uVar22 = uVar18 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18;
    if (0x1ffff < uVar22) goto LAB_006e4490;
    uVar23 = piVar6[2];
    uVar3 = piVar6[4];
    *(uint *)(puVar7 + 5) =
         uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18;
    uVar23 = piVar6[3];
    uVar14 = piVar6[5];
    uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
    *(uint *)(puVar7 + 0xb) = uVar14;
    puVar7[6] = (ulong)(uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                       uVar23 << 0x18) + (long)local_198;
    puVar7[7] = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                       uVar3 << 0x18) + (long)piStack_190;
    if (uVar14 < 3) {
LAB_006e4403:
      puVar7[0xc] = 0;
      *(uint *)(puVar7 + 0xd) = (uint)bVar28;
      if ((short)uVar22 != 0) goto LAB_006e4490;
    }
    else {
      uVar22 = piVar6[6];
      *(uint *)(puVar7 + 0xd) = (uint)bVar28;
      puVar7[0xc] = (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                           uVar22 << 0x18) + (long)piVar6;
      if ((short)uVar18 != 0) {
        uVar22 = piVar6[9];
        uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18
        ;
        local_188 = (int *)CONCAT44(local_188._4_4_,uVar22);
        if (uVar22 != 0) {
          uVar22 = piVar6[7];
          uVar18 = piVar6[8];
          uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                   uVar22 << 0x18;
          uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                   uVar18 << 0x18;
          goto LAB_006e41c4;
        }
      }
    }
LAB_006e4414:
    *(undefined4 *)(puVar7 + 8) = 0;
    *(undefined1 (*) [16])(puVar7 + 9) = (undefined1  [16])0x0;
    goto LAB_006e4425;
  }
LAB_006e4342:
  DAT_009463d4 = iVar5;
  *(undefined4 *)(param_1 + 1) = 1;
LAB_006e4349:
  if (DAT_009463d4 == 0) {
    DAT_009463d8 = 0;
    LOCK();
    UNLOCK();
    bVar28 = 1 < DAT_009463d0;
    DAT_009463d0 = DAT_009463d4;
    if (bVar28) {
      pcStack_1b0 = (code *)0x6e43bc;
      FUN_00709660(&DAT_009463d0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  pcStack_1b0 = (code *)0x6e4f97;
  FUN_00771f60();
code_r0x006e46c1:
  local_164 = local_164 + 1;
  local_160 = local_160 + local_e8[1] + local_e8[0];
LAB_006e46db:
  param_1 = local_148;
  puVar7 = local_150;
  uVar16 = local_158;
  uVar22 = local_164;
  lVar20 = lVar20 + 1;
  if ((uint)local_188 <= (uint)lVar20) goto code_r0x006e46e5;
  goto LAB_006e467a;
LAB_006e45c9:
  pcStack_1b0 = (code *)0x6e45d1;
  FUN_007104f0(piVar8);
  uVar11 = 0;
  goto LAB_006e4493;
code_r0x006e46e5:
  if (local_164 == 0) {
    *(undefined4 *)(local_150 + 8) = 0;
    *(undefined1 (*) [16])(local_150 + 9) = (undefined1  [16])0x0;
    goto LAB_006e4719;
  }
  pcStack_1b0 = (code *)0x6e4af3;
  local_198 = piVar8;
  uVar11 = FUN_007101b0((ulong)(local_164 * 2) * 0x10 + local_160);
  if (uVar11 != 0) {
    puVar7[4] = uVar11;
    local_130 = uVar11 + (ulong)uVar22 * 0x10;
    local_158 = local_158 & 0xffffffff00000000;
    local_110 = local_130 + (ulong)uVar22 * 0x10;
    uVar17 = 0;
    local_118 = uVar16;
    uVar21 = local_138 + local_110;
    local_108 = param_1;
    piVar19 = local_198;
    local_138 = uVar11;
    local_128 = uVar11;
    uStack_120 = local_130;
LAB_006e4b69:
    iVar5 = (int)puVar7[3];
    bVar28 = false;
    do {
      if (iVar5 == 0) {
        if (bVar28) {
          uVar22 = *(uint *)(local_178 + uVar17 * 4);
        }
        else {
          uVar22 = *(uint *)(local_170 + uVar17 * 4);
        }
        if (*(int *)((long)piVar6 + (ulong)uVar22 + 8) != -1) {
          for (lVar20 = (long)piVar6 + (ulong)uVar22 + 4; *(uint *)(lVar20 + 4) != 0xffffffff;
              lVar20 = lVar20 + 8) {
            if (*(long *)(piVar19 + (ulong)*(uint *)(lVar20 + 4) * 2) == 0) goto LAB_006e4cbf;
          }
        }
      }
      else {
        if (bVar28) {
          uVar22 = *(uint *)(local_178 + uVar17 * 4);
        }
        else {
          uVar22 = *(uint *)(local_170 + uVar17 * 4);
        }
        uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18
        ;
        if (*(int *)((long)piVar6 + (ulong)uVar22 + 8) != -1) {
          lVar20 = (long)piVar6 + (ulong)uVar22 + 4;
          while( true ) {
            uVar22 = *(uint *)(lVar20 + 4);
            if (uVar22 == 0xffffffff) break;
            if (*(long *)(piVar19 +
                         (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8
                                | uVar22 << 0x18) * 2) == 0) goto LAB_006e4cbf;
            lVar20 = lVar20 + 8;
          }
        }
      }
      if (bVar28) {
        local_180 = (ulong *)((ulong)local_180 & 0xffffffff00000000);
        lVar20 = (local_158 & 0xffffffff) * 0x10;
        local_148 = (ulong *)(local_130 + lVar20);
        local_150 = (ulong *)(lVar20 + local_138);
        local_198 = piVar19;
        local_160 = uVar17;
        if (iVar5 == 0) goto LAB_006e4c47;
LAB_006e4bdb:
        if ((uint)local_180 == 0) {
          uVar22 = *(uint *)(local_170 + local_160 * 4);
          local_140 = local_150;
          puVar13 = (uint *)((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                     (uVar22 & 0xff00) << 8 | uVar22 << 0x18) + (long)piVar6);
          uVar22 = *puVar13;
          uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                   uVar22 << 0x18;
        }
        else {
          uVar22 = *(uint *)(local_178 + local_160 * 4);
          local_140 = local_148;
          puVar13 = (uint *)((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                     (uVar22 & 0xff00) << 8 | uVar22 << 0x18) + (long)piVar6);
          uVar22 = *puVar13;
          uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                   uVar22 << 0x18;
        }
        uVar16 = (ulong)uVar22 + (long)piVar6;
        uVar11 = uVar21;
        if (puVar13[2] != 0xffffffff) goto LAB_006e4eaa;
        uVar22 = puVar13[1];
        uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18
        ;
        do {
          *local_140 = (ulong)uVar22;
          local_140[1] = uVar16;
          while( true ) {
            if ((uint)local_180 == 1) {
              local_158 = CONCAT44(local_158._4_4_,(uint)local_158 + 1);
              piVar19 = local_198;
              uVar17 = local_160;
              goto LAB_006e4cbf;
            }
            iVar5 = (int)puVar7[3];
            local_180 = (ulong *)CONCAT44(local_180._4_4_,1);
            if (iVar5 != 0) goto LAB_006e4bdb;
LAB_006e4c47:
            if ((uint)local_180 == 0) {
              local_140 = local_150;
              puVar13 = (uint *)((ulong)*(uint *)(local_170 + local_160 * 4) + (long)piVar6);
              uVar22 = *puVar13;
            }
            else {
              puVar13 = (uint *)((ulong)*(uint *)(local_178 + local_160 * 4) + (long)piVar6);
              local_140 = local_148;
              uVar22 = *puVar13;
            }
            uVar16 = (ulong)uVar22 + (long)piVar6;
            uVar11 = uVar21;
            if (puVar13[2] == 0xffffffff) break;
LAB_006e4eaa:
            puVar13 = puVar13 + 1;
            local_140[1] = uVar11;
            local_100 = piVar6;
            while( true ) {
              uVar22 = *puVar13;
              uVar18 = puVar13[1];
              if (iVar5 != 0) {
                uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                         uVar22 << 0x18;
                uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                         uVar18 << 0x18;
              }
              uVar17 = uVar16;
              uVar21 = uVar11;
              if (uVar22 != 0) {
                uVar26 = (ulong)uVar22;
                uVar21 = uVar11 + uVar26;
                uVar17 = uVar16 + uVar26;
                pcStack_1b0 = (code *)0x6e4f24;
                thunk_FUN_00713a50(uVar11,uVar16,uVar26);
              }
              if (uVar18 == 0xffffffff) break;
              puVar13 = puVar13 + 2;
              uVar4 = *(undefined8 *)(local_198 + (ulong)uVar18 * 2);
              pcStack_1b0 = (code *)0x6e4ee0;
              lVar20 = thunk_FUN_007129d0(uVar4);
              pcStack_1b0 = (code *)0x6e4ef1;
              thunk_FUN_00713a50(uVar21,uVar4,lVar20);
              iVar5 = (int)puVar7[3];
              uVar11 = uVar21 + lVar20;
              uVar16 = uVar17;
            }
            *local_140 = uVar21 - local_140[1];
            piVar6 = local_100;
          }
          uVar22 = puVar13[1];
        } while( true );
      }
      bVar28 = true;
    } while( true );
  }
LAB_006e4493:
  pcStack_1b0 = (code *)0x6e449b;
  FUN_007104f0(uVar11);
  if (local_168 == 0) {
    pcStack_1b0 = (code *)0x6e44ab;
    FUN_007104f0(piVar6);
  }
  else {
    pcStack_1b0 = (code *)0x6e44db;
    FUN_0076f080(piVar6,uVar16);
  }
  pcStack_1b0 = (code *)0x6e44b3;
  FUN_007104f0(puVar7);
  param_1[2] = 0;
  iVar5 = DAT_009463d4 + -1;
  goto LAB_006e4342;
LAB_006e4cbf:
  uVar11 = local_110;
  uVar16 = local_118;
  uVar22 = local_164;
  uVar17 = uVar17 + 1;
  if ((uint)local_188 <= (uint)uVar17) goto code_r0x006e4cce;
  goto LAB_006e4b69;
code_r0x006e4cce:
  if (local_164 != (uint)local_158) {
    pcStack_1b0 = FUN_00404713;
    puStack_1c0 = local_108;
    uStack_1d0 = *(undefined8 *)(in_FS_OFFSET + 0x28);
    lVar20 = *(long *)(in_FS_OFFSET + 0x10);
    lVar25 = DAT_009464b8;
    uStack_1b8 = uVar21;
    if (DAT_009464b8 != lVar20) {
      LOCK();
      bVar28 = DAT_009464b0 == 0;
      if (bVar28) {
        DAT_009464b0 = 1;
      }
      UNLOCK();
      lVar25 = lVar20;
      if (!bVar28) {
        FUN_00709590(&DAT_009464b0);
      }
    }
    DAT_009464b8 = lVar25;
    DAT_009464b4 = DAT_009464b4 + 1;
    if (DAT_009464c0 == 0) {
      DAT_009464c0 = 1;
      auStack_2e8[0] = 0x20;
      FUN_00790ae0(1,auStack_2e8,0);
    }
    if (DAT_009464c0 == 1) {
      DAT_009464c0 = 0;
      DAT_009464b4 = DAT_009464b4 + -1;
      if (DAT_009464b4 == 0) {
        DAT_009464b8 = 0;
        LOCK();
        UNLOCK();
        bVar28 = 1 < DAT_009464b0;
        DAT_009464b0 = DAT_009464b4;
        if (bVar28) {
          FUN_00709660(&DAT_009464b0);
        }
      }
      FUN_006e83a0(6);
      lVar20 = *(long *)(in_FS_OFFSET + 0x10);
      lVar25 = DAT_009464b8;
      if (DAT_009464b8 != lVar20) {
        LOCK();
        bVar28 = DAT_009464b0 == 0;
        if (bVar28) {
          DAT_009464b0 = 1;
        }
        UNLOCK();
        lVar25 = lVar20;
        if (!bVar28) {
          FUN_00709590(&DAT_009464b0);
        }
      }
      DAT_009464b8 = lVar25;
      DAT_009464b4 = DAT_009464b4 + 1;
    }
    else if (DAT_009464c0 != 2) goto LAB_0040485b;
    DAT_009464c0 = 3;
    puVar24 = auStack_268;
    for (lVar20 = 0x26; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar24 = 0;
      puVar24 = puVar24 + (ulong)bVar29 * -2 + 1;
    }
    uStack_260 = 0xffffffffffffffff;
    FUN_006e83e0(6,auStack_268,0);
LAB_0040485b:
    if (DAT_009464c0 == 3) {
      DAT_009464c0 = 4;
      FUN_006e83a0(6);
    }
    if (DAT_009464c0 == 4) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (DAT_009464c0 == 5) {
      DAT_009464c0 = 6;
      FUN_00768c20(0x7f);
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((int)puVar7[0xb] != 0) {
    uVar17 = puVar7[0xc];
    uVar18 = 0;
    do {
      while( true ) {
        uVar21 = (ulong)uVar18;
        uVar23 = *(uint *)(uVar17 + uVar21 * 4);
        if ((int)puVar7[0xd] == 0) break;
        uVar18 = uVar18 + 1;
        *(uint *)(local_110 + uVar21 * 4) =
             uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18;
        if ((uint)puVar7[0xb] <= uVar18) goto LAB_006e4d2f;
      }
      *(uint *)(local_110 + uVar21 * 4) = uVar23;
      uVar18 = uVar18 + 1;
    } while (uVar18 < (uint)puVar7[0xb]);
  }
LAB_006e4d2f:
  puVar27 = (undefined8 *)(local_138 + 8);
  local_180 = local_108;
  uVar18 = 0;
  local_198 = piVar19;
  local_188 = piVar6;
  do {
    pcStack_1b0 = (code *)0x6e4d60;
    uVar14 = FUN_006e8260(*puVar27);
    uVar23 = (uint)puVar7[0xb];
    uVar17 = (ulong)uVar14 % (ulong)uVar23;
    piVar6 = (int *)(uVar11 + uVar17 * 4);
    iVar5 = uVar14 % (uVar23 - 2) + 1;
    if (*piVar6 != 0) {
      do {
        while (uVar14 = (uint)uVar17, uVar23 - iVar5 <= uVar14) {
          uVar17 = (ulong)(uVar14 + (iVar5 - uVar23));
          piVar6 = (int *)(uVar11 + uVar17 * 4);
          if (*piVar6 == 0) goto LAB_006e4db6;
        }
        uVar17 = (ulong)(uVar14 + iVar5);
        piVar6 = (int *)(uVar11 + uVar17 * 4);
      } while (*piVar6 != 0);
    }
LAB_006e4db6:
    puVar27 = puVar27 + 2;
    iVar5 = uVar18 + 1;
    uVar18 = uVar18 + 1;
    *piVar6 = iVar5 + (int)puVar7[5];
  } while (uVar22 != uVar18);
  puVar7[0xc] = uVar11;
  *(uint *)(puVar7 + 8) = local_164;
  *(undefined4 *)(puVar7 + 0xd) = 0;
  puVar7[9] = local_128;
  puVar7[10] = uStack_120;
  param_1 = local_180;
  piVar8 = local_198;
  piVar6 = local_188;
LAB_006e4719:
  pcStack_1b0 = (code *)0x6e4721;
  FUN_007104f0(piVar8);
LAB_006e4425:
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  pcStack_1b0 = (code *)0x6e4443;
  FUN_0070aed0(puVar7 + 0x10,0);
  pcStack_1b0 = (code *)0x6e4461;
  lVar20 = FUN_006e2ab0(param_1,local_1a0,&DAT_0083e5c2,0,local_f0);
  if (lVar20 == -1) {
    uVar11 = puVar7[4];
    goto LAB_006e4493;
  }
  pcStack_1b0 = (code *)0x6e4481;
  FUN_006e8140(lVar20,puVar7 + 0x17,puVar7 + 0x18);
  iVar5 = DAT_009463d4 + -1;
  goto LAB_006e4342;
}

