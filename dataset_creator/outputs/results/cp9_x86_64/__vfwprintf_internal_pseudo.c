
/* WARNING: Type propagation algorithm not settling */

ulong __vfwprintf_internal(uint *param_1,wchar_t *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  unkbyte10 Var2;
  int iVar3;
  wchar_t wVar4;
  undefined4 *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  bool bVar25;
  ushort uVar26;
  int iVar27;
  uint uVar28;
  wint_t wVar29;
  wchar_t wVar30;
  int iVar31;
  int iVar32;
  wchar_t *pwVar33;
  ulong uVar34;
  ulong uVar35;
  wchar_t *pwVar36;
  unkbyte10 *pVar37;
  uint uVar38;
  uint uVar39;
  wchar_t *pwVar40;
  long lVar41;
  wint_t *pwVar42;
  long *plVar43;
  ulong *puVar44;
  wchar_t *pwVar45;
  undefined8 *puVar46;
  byte *pbVar47;
  wchar_t *pwVar48;
  uint *puVar49;
  char *pcVar50;
  ushort *puVar51;
  int *piVar52;
  short *psVar53;
  ulong uVar54;
  undefined1 *__s;
  wchar_t *pwVar55;
  undefined8 uVar56;
  short sVar57;
  short sVar59;
  bool bVar60;
  bool bVar68;
  bool bVar69;
  bool bVar70;
  bool bVar71;
  uint uVar72;
  uint uVar73;
  uint uVar75;
  uint uVar76;
  long lVar77;
  size_t sVar78;
  long in_FS_OFFSET;
  bool bVar79;
  int local_520;
  int local_4f8;
  short local_4f4;
  short local_4f0;
  int local_4ec;
  char *local_4e0;
  int local_4c8;
  uint local_4c4;
  undefined8 *local_4a0;
  undefined8 local_498;
  undefined2 uStack_490;
  undefined6 uStack_48e;
  uint local_488;
  int local_484;
  wchar_t local_480;
  uint local_47c;
  int local_478;
  code *local_468;
  uint *local_460;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  char local_428 [996];
  wchar_t local_44;
  long local_40 [2];
  short sVar58;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  bool bVar67;
  uint uVar74;
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)(in_FS_OFFSET + -0x58);
  iVar27 = _IO_fwide(param_1,1);
  if (iVar27 == 1) {
    if ((*param_1 & 8) == 0) {
      if (param_2 == (wchar_t *)0x0) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      }
      else {
        iVar27 = _IO_fwide(param_1,1);
        if (iVar27 == 1) {
          uVar28 = *param_1;
          if ((uVar28 & 2) != 0) {
            if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
              uVar54 = buffered_vfprintf(param_1,param_2,param_3,param_4);
              return uVar54;
            }
            goto LAB_0079693d;
          }
          local_440 = *(undefined8 *)param_3;
          uStack_438 = *(undefined8 *)(param_3 + 2);
          local_430 = *(undefined8 *)(param_3 + 4);
          pwVar33 = wcschrnul(param_2,L'%');
          bVar9 = false;
          local_460 = param_1;
          if ((uVar28 & 0x8000) == 0) {
            local_468 = funlockfile;
            __libc_cleanup_push_defer(&local_468);
            if ((*param_1 & 0x8000) == 0) {
              piVar52 = *(int **)(param_1 + 0x22);
              lVar77 = *(long *)(in_FS_OFFSET + 0x10);
              if (*(long *)(piVar52 + 2) != lVar77) {
                LOCK();
                iVar27 = *piVar52;
                if (iVar27 == 0) {
                  *piVar52 = 1;
                }
                UNLOCK();
                if (iVar27 != 0) {
                  __lll_lock_wait_private();
                }
                piVar52 = *(int **)(param_1 + 0x22);
                *(long *)(piVar52 + 2) = lVar77;
              }
              piVar52[1] = piVar52[1] + 1;
              bVar9 = true;
            }
            else {
              bVar9 = true;
            }
          }
          lVar77 = *(long *)(param_1 + 0x36);
          uVar54 = (long)pwVar33 - (long)param_2 >> 2;
          if (0x827 < lVar77 - 0x932180U) {
            _IO_vtable_check();
          }
          uVar34 = (**(code **)(lVar77 + 0x38))(param_1,param_2,uVar54);
          if (uVar54 == uVar34) {
            uVar34 = uVar54 & 0xffffffff;
            uVar35 = uVar54 >> 0x3f;
            if (uVar54 != (long)(int)uVar54) {
              uVar35 = 1;
            }
            if ((int)uVar35 == 0) {
              if ((-1 < (int)uVar54) && (*pwVar33 != L'\0')) {
                if ((__printf_function_table == 0) &&
                   ((__printf_modifier_table == 0 && (__printf_va_arg_table == 0)))) {
                  local_4c8 = 0;
                  local_4ec = 0;
                  local_4c4 = 0;
                  local_4e0 = (char *)0xffffffffffffffff;
                  pwVar40 = pwVar33;
LAB_00794750:
                  uVar28 = (uint)uVar34;
                  wVar30 = pwVar40[1];
                  if (0x5a < (uint)(wVar30 + L'\xffffffe0')) goto code_r0x00794765;
                  bVar65 = false;
                  bVar67 = false;
                  bVar61 = false;
                  bVar63 = false;
                  bVar64 = false;
                  bVar66 = false;
                  bVar60 = false;
                  bVar62 = false;
                  bVar16 = false;
                  sVar57 = 0;
                  bVar18 = false;
                  bVar15 = false;
                  sVar58 = 0;
                  bVar17 = false;
                  bVar6 = false;
                  pwVar40 = pwVar40 + 1;
                  bVar7 = false;
                  bVar8 = false;
                  uVar75 = 0xffffffff;
                  uVar74 = 0xffffffff;
                  uVar73 = 0xffffffff;
                  uVar76 = 0xffffffff;
                  uVar72 = 0xffffffff;
                  uVar38 = 0xffffffff;
                  sVar23 = 0;
                  sVar12 = 0;
                  iVar27 = 0;
                  local_520 = 0;
                  sVar22 = 0;
                  sVar11 = 0;
                  sVar24 = 0;
                  sVar13 = 0;
                  sVar21 = 0;
                  sVar10 = 0;
                  sVar20 = 0;
                  local_4f0 = 0;
                  sVar19 = 0;
                  local_4f4 = 0;
                  local_4f8 = 0x20;
                  pwVar48 = pwVar40;
                  bVar79 = false;
                  bVar69 = bVar67;
                  bVar71 = bVar61;
                  bVar70 = bVar65;
                  bVar68 = bVar63;
                  sVar59 = sVar57;
                  bVar25 = bVar18;
                  bVar14 = bVar16;
                  switch(wVar30) {
                  case L' ':
code_r0x0079522c:
                    sVar13 = sVar24;
                    sVar12 = sVar23;
                    sVar11 = sVar22;
                    sVar10 = sVar21;
                    local_4f4 = sVar19;
                    wVar30 = pwVar40[1];
                    pwVar40 = pwVar40 + 1;
                    sVar20 = 1;
                    local_4f0 = 1;
                    pwVar48 = pwVar40;
                    bVar79 = bVar6;
                    bVar7 = bVar8;
                    bVar69 = bVar66;
                    bVar71 = bVar60;
                    bVar70 = bVar64;
                    bVar68 = bVar62;
                    sVar59 = sVar58;
                    sVar19 = local_4f4;
                    bVar25 = bVar17;
                    bVar14 = bVar15;
                    sVar21 = sVar10;
                    sVar22 = sVar11;
                    sVar23 = sVar12;
                    sVar24 = sVar13;
                    switch(wVar30) {
                    case L' ':
                      goto code_r0x0079522c;
                    default:
                      break;
                    case L'#':
code_r0x007955c4:
                      sVar13 = sVar24;
                      sVar12 = sVar23;
                      sVar11 = sVar22;
                      sVar10 = sVar21;
                      local_4f0 = sVar20;
                      wVar30 = pwVar40[1];
                      pwVar40 = pwVar40 + 1;
                      sVar19 = 1;
                      local_4f4 = 1;
                      pwVar48 = pwVar40;
                      bVar79 = bVar6;
                      bVar7 = bVar8;
                      bVar69 = bVar66;
                      bVar71 = bVar60;
                      bVar70 = bVar64;
                      bVar68 = bVar62;
                      sVar59 = sVar58;
                      sVar20 = local_4f0;
                      bVar25 = bVar17;
                      bVar14 = bVar15;
                      sVar21 = sVar10;
                      sVar22 = sVar11;
                      sVar23 = sVar12;
                      sVar24 = sVar13;
                      switch(wVar30) {
                      case L' ':
                        goto code_r0x0079522c;
                      default:
                        break;
                      case L'#':
                        goto code_r0x007955c4;
                      case L'%':
                        goto code_r0x00795294;
                      case L'\'':
code_r0x00795534:
                        sVar13 = sVar24;
                        sVar12 = sVar23;
                        sVar10 = sVar21;
                        local_4f0 = sVar20;
                        local_4f4 = sVar19;
                        if (local_4e0 == (char *)0xffffffffffffffff) {
                          local_4e0 = *(char **)(**(long **)(in_FS_OFFSET + -0xc0) + 0x50);
                          local_4c4 = *(uint *)(**(long **)(in_FS_OFFSET + -0xc0) + 0x60);
                          if ((*local_4e0 == '\x7f' || *local_4e0 == '\0') || (local_4c4 == 0)) {
                            local_4e0 = (char *)0x0;
                          }
                        }
                        wVar30 = pwVar40[1];
                        pwVar40 = pwVar40 + 1;
                        sVar22 = 1;
                        sVar11 = 1;
                        pwVar48 = pwVar40;
                        bVar79 = bVar6;
                        bVar7 = bVar8;
                        bVar69 = bVar66;
                        bVar71 = bVar60;
                        bVar70 = bVar64;
                        bVar68 = bVar62;
                        sVar59 = sVar58;
                        sVar19 = local_4f4;
                        sVar20 = local_4f0;
                        bVar25 = bVar17;
                        bVar14 = bVar15;
                        sVar21 = sVar10;
                        sVar23 = sVar12;
                        sVar24 = sVar13;
                        switch(wVar30) {
                        case L' ':
                          goto code_r0x0079522c;
                        default:
                          break;
                        case L'#':
                          goto code_r0x007955c4;
                        case L'%':
                          goto code_r0x00795294;
                        case L'\'':
                          goto code_r0x00795534;
                        case L'*':
                          goto code_r0x007954ac;
                        case L'+':
code_r0x007951f4:
                          sVar12 = sVar23;
                          sVar11 = sVar22;
                          sVar10 = sVar21;
                          local_4f0 = sVar20;
                          local_4f4 = sVar19;
                          wVar30 = pwVar40[1];
                          pwVar40 = pwVar40 + 1;
                          sVar24 = 1;
                          sVar13 = 1;
                          pwVar48 = pwVar40;
                          bVar79 = bVar6;
                          bVar7 = bVar8;
                          bVar69 = bVar66;
                          bVar71 = bVar60;
                          bVar70 = bVar64;
                          bVar68 = bVar62;
                          sVar59 = sVar58;
                          sVar19 = local_4f4;
                          sVar20 = local_4f0;
                          bVar25 = bVar17;
                          bVar14 = bVar15;
                          sVar21 = sVar10;
                          sVar22 = sVar11;
                          sVar23 = sVar12;
                          switch(wVar30) {
                          case L' ':
                            goto code_r0x0079522c;
                          default:
                            break;
                          case L'#':
                            goto code_r0x007955c4;
                          case L'%':
                            goto code_r0x00795294;
                          case L'\'':
                            goto code_r0x00795534;
                          case L'*':
                            goto code_r0x007954ac;
                          case L'+':
                            goto code_r0x007951f4;
                          case L'-':
code_r0x007955fc:
                            sVar13 = sVar24;
                            sVar12 = sVar23;
                            sVar11 = sVar22;
                            local_4f0 = sVar20;
                            local_4f4 = sVar19;
                            wVar30 = pwVar40[1];
                            pwVar40 = pwVar40 + 1;
                            sVar21 = 1;
                            sVar10 = 1;
                            local_4f8 = 0x20;
                            pwVar48 = pwVar40;
                            bVar79 = bVar6;
                            bVar7 = bVar8;
                            bVar69 = bVar66;
                            bVar71 = bVar60;
                            bVar70 = bVar64;
                            bVar68 = bVar62;
                            sVar59 = sVar58;
                            sVar19 = local_4f4;
                            sVar20 = local_4f0;
                            bVar25 = bVar17;
                            bVar14 = bVar15;
                            sVar22 = sVar11;
                            sVar23 = sVar12;
                            sVar24 = sVar13;
                            switch(wVar30) {
                            case L' ':
                              goto code_r0x0079522c;
                            default:
                              break;
                            case L'#':
                              goto code_r0x007955c4;
                            case L'%':
                              goto code_r0x00795294;
                            case L'\'':
                              goto code_r0x00795534;
                            case L'*':
                              goto code_r0x007954ac;
                            case L'+':
                              goto code_r0x007951f4;
                            case L'-':
                              goto code_r0x007955fc;
                            case L'.':
                              goto code_r0x007953cc;
                            case L'0':
code_r0x0079557c:
                              sVar13 = sVar24;
                              sVar12 = sVar23;
                              sVar11 = sVar22;
                              sVar10 = sVar21;
                              local_4f0 = sVar20;
                              local_4f4 = sVar19;
                              wVar30 = pwVar40[1];
                              pwVar40 = pwVar40 + 1;
                              iVar32 = 0x30;
                              if (sVar10 != 0) {
                                iVar32 = local_4f8;
                              }
                              pwVar48 = pwVar40;
                              local_4f8 = iVar32;
                              bVar79 = bVar6;
                              bVar7 = bVar8;
                              bVar69 = bVar66;
                              bVar71 = bVar60;
                              bVar70 = bVar64;
                              bVar68 = bVar62;
                              sVar59 = sVar58;
                              sVar19 = local_4f4;
                              sVar20 = local_4f0;
                              bVar25 = bVar17;
                              bVar14 = bVar15;
                              sVar21 = sVar10;
                              sVar22 = sVar11;
                              sVar23 = sVar12;
                              sVar24 = sVar13;
                              switch(wVar30) {
                              case L' ':
                                goto code_r0x0079522c;
                              default:
                                break;
                              case L'#':
                                goto code_r0x007955c4;
                              case L'%':
                                goto code_r0x00795294;
                              case L'\'':
                                goto code_r0x00795534;
                              case L'*':
                                goto code_r0x007954ac;
                              case L'+':
                                goto code_r0x007951f4;
                              case L'-':
                                goto code_r0x007955fc;
                              case L'.':
                                goto code_r0x007953cc;
                              case L'0':
                                goto code_r0x0079557c;
                              case L'1':
                              case L'2':
                              case L'3':
                              case L'4':
                              case L'5':
                              case L'6':
                              case L'7':
                              case L'8':
                              case L'9':
                                goto code_r0x00795414;
                              case L'A':
                              case L'E':
                              case L'F':
                              case L'G':
                              case L'a':
                              case L'e':
                              case L'f':
                              case L'g':
                                goto code_r0x00794910;
                              case L'B':
                              case L'b':
                                goto code_r0x00794d54;
                              case L'C':
                                goto code_r0x00794a9c;
                              case L'I':
code_r0x0079563c:
                                sVar13 = sVar24;
                                sVar11 = sVar22;
                                sVar10 = sVar21;
                                local_4f0 = sVar20;
                                local_4f4 = sVar19;
                                wVar30 = pwVar40[1];
                                pwVar40 = pwVar40 + 1;
                                sVar23 = 1;
                                sVar12 = 1;
                                pwVar48 = pwVar40;
                                bVar79 = bVar6;
                                bVar7 = bVar8;
                                bVar69 = bVar67;
                                bVar71 = bVar61;
                                bVar70 = bVar65;
                                bVar68 = bVar63;
                                sVar59 = sVar57;
                                sVar19 = local_4f4;
                                sVar20 = local_4f0;
                                bVar25 = bVar18;
                                bVar14 = bVar16;
                                sVar21 = sVar10;
                                sVar22 = sVar11;
                                sVar24 = sVar13;
                                switch(wVar30) {
                                case L' ':
                                  goto code_r0x0079522c;
                                default:
                                  break;
                                case L'#':
                                  goto code_r0x007955c4;
                                case L'%':
                                  goto code_r0x00795294;
                                case L'\'':
                                  goto code_r0x00795534;
                                case L'*':
                                  goto code_r0x007954ac;
                                case L'+':
                                  goto code_r0x007951f4;
                                case L'-':
                                  goto code_r0x007955fc;
                                case L'.':
                                  goto code_r0x007953cc;
                                case L'0':
                                  goto code_r0x0079557c;
                                case L'1':
                                case L'2':
                                case L'3':
                                case L'4':
                                case L'5':
                                case L'6':
                                case L'7':
                                case L'8':
                                case L'9':
                                  goto code_r0x00795414;
                                case L'A':
                                case L'E':
                                case L'F':
                                case L'G':
                                case L'a':
                                case L'e':
                                case L'f':
                                case L'g':
                                  goto code_r0x00794910;
                                case L'B':
                                case L'b':
                                  goto code_r0x00794d54;
                                case L'C':
                                  goto code_r0x00794a9c;
                                case L'I':
                                  goto code_r0x0079563c;
                                case L'L':
                                case L'q':
                                  goto code_r0x007952f4;
                                case L'S':
                                case L's':
                                  goto code_r0x00794bc4;
                                case L'X':
                                case L'x':
                                  goto code_r0x007951dc;
                                case L'Z':
                                case L'z':
                                  goto code_r0x007952e4;
                                case L'c':
                                  goto code_r0x00794c24;
                                case L'd':
                                case L'i':
                                  goto code_r0x00795264;
                                case L'h':
                                  goto code_r0x00795394;
                                case L'j':
                                case L't':
                                  goto code_r0x007948d8;
                                case L'l':
                                  goto code_r0x0079532c;
                                case L'm':
                                  goto code_r0x00794cec;
                                case L'n':
                                  goto code_r0x007950b4;
                                case L'o':
                                  goto code_r0x00795104;
                                case L'p':
                                  goto code_r0x00795184;
                                case L'u':
                                  goto code_r0x00795174;
                                }
                              case L'L':
                              case L'q':
                                goto code_r0x007952f4;
                              case L'S':
                              case L's':
                                goto code_r0x00794bc4;
                              case L'X':
                              case L'x':
                                goto code_r0x007951dc;
                              case L'Z':
                              case L'z':
                                goto code_r0x007952e4;
                              case L'c':
                                goto code_r0x00794c24;
                              case L'd':
                              case L'i':
                                goto code_r0x00795264;
                              case L'h':
                                goto code_r0x00795394;
                              case L'j':
                              case L't':
                                goto code_r0x007948d8;
                              case L'l':
                                goto code_r0x0079532c;
                              case L'm':
                                goto code_r0x00794cec;
                              case L'n':
                                goto code_r0x007950b4;
                              case L'o':
                                goto code_r0x00795104;
                              case L'p':
                                goto code_r0x00795184;
                              case L'u':
                                goto code_r0x00795174;
                              }
                            case L'1':
                            case L'2':
                            case L'3':
                            case L'4':
                            case L'5':
                            case L'6':
                            case L'7':
                            case L'8':
                            case L'9':
                              goto code_r0x00795414;
                            case L'A':
                            case L'E':
                            case L'F':
                            case L'G':
                            case L'a':
                            case L'e':
                            case L'f':
                            case L'g':
                              goto code_r0x00794910;
                            case L'B':
                            case L'b':
                              goto code_r0x00794d54;
                            case L'C':
                              goto code_r0x00794a9c;
                            case L'I':
                              goto code_r0x0079563c;
                            case L'L':
                            case L'q':
                              goto code_r0x007952f4;
                            case L'S':
                            case L's':
                              goto code_r0x00794bc4;
                            case L'X':
                            case L'x':
                              goto code_r0x007951dc;
                            case L'Z':
                            case L'z':
                              goto code_r0x007952e4;
                            case L'c':
                              goto code_r0x00794c24;
                            case L'd':
                            case L'i':
                              goto code_r0x00795264;
                            case L'h':
                              goto code_r0x00795394;
                            case L'j':
                            case L't':
                              goto code_r0x007948d8;
                            case L'l':
                              goto code_r0x0079532c;
                            case L'm':
                              goto code_r0x00794cec;
                            case L'n':
                              goto code_r0x007950b4;
                            case L'o':
                              goto code_r0x00795104;
                            case L'p':
                              goto code_r0x00795184;
                            case L'u':
                              goto code_r0x00795174;
                            }
                          case L'.':
                            goto code_r0x007953cc;
                          case L'0':
                            goto code_r0x0079557c;
                          case L'1':
                          case L'2':
                          case L'3':
                          case L'4':
                          case L'5':
                          case L'6':
                          case L'7':
                          case L'8':
                          case L'9':
                            goto code_r0x00795414;
                          case L'A':
                          case L'E':
                          case L'F':
                          case L'G':
                          case L'a':
                          case L'e':
                          case L'f':
                          case L'g':
                            goto code_r0x00794910;
                          case L'B':
                          case L'b':
                            goto code_r0x00794d54;
                          case L'C':
                            goto code_r0x00794a9c;
                          case L'I':
                            goto code_r0x0079563c;
                          case L'L':
                          case L'q':
                            goto code_r0x007952f4;
                          case L'S':
                          case L's':
                            goto code_r0x00794bc4;
                          case L'X':
                          case L'x':
                            goto code_r0x007951dc;
                          case L'Z':
                          case L'z':
                            goto code_r0x007952e4;
                          case L'c':
                            goto code_r0x00794c24;
                          case L'd':
                          case L'i':
                            goto code_r0x00795264;
                          case L'h':
                            goto code_r0x00795394;
                          case L'j':
                          case L't':
                            goto code_r0x007948d8;
                          case L'l':
                            goto code_r0x0079532c;
                          case L'm':
                            goto code_r0x00794cec;
                          case L'n':
                            goto code_r0x007950b4;
                          case L'o':
                            goto code_r0x00795104;
                          case L'p':
                            goto code_r0x00795184;
                          case L'u':
                            goto code_r0x00795174;
                          }
                        case L'-':
                          goto code_r0x007955fc;
                        case L'.':
                          goto code_r0x007953cc;
                        case L'0':
                          goto code_r0x0079557c;
                        case L'1':
                        case L'2':
                        case L'3':
                        case L'4':
                        case L'5':
                        case L'6':
                        case L'7':
                        case L'8':
                        case L'9':
                          goto code_r0x00795414;
                        case L'A':
                        case L'E':
                        case L'F':
                        case L'G':
                        case L'a':
                        case L'e':
                        case L'f':
                        case L'g':
                          goto code_r0x00794910;
                        case L'B':
                        case L'b':
                          goto code_r0x00794d54;
                        case L'C':
                          goto code_r0x00794a9c;
                        case L'I':
                          goto code_r0x0079563c;
                        case L'L':
                        case L'q':
                          goto code_r0x007952f4;
                        case L'S':
                        case L's':
                          goto code_r0x00794bc4;
                        case L'X':
                        case L'x':
                          goto code_r0x007951dc;
                        case L'Z':
                        case L'z':
                          goto code_r0x007952e4;
                        case L'c':
                          goto code_r0x00794c24;
                        case L'd':
                        case L'i':
                          goto code_r0x00795264;
                        case L'h':
                          goto code_r0x00795394;
                        case L'j':
                        case L't':
                          goto code_r0x007948d8;
                        case L'l':
                          goto code_r0x0079532c;
                        case L'm':
                          goto code_r0x00794cec;
                        case L'n':
                          goto code_r0x007950b4;
                        case L'o':
                          goto code_r0x00795104;
                        case L'p':
                          goto code_r0x00795184;
                        case L'u':
                          goto code_r0x00795174;
                        }
                      case L'*':
                        goto code_r0x007954ac;
                      case L'+':
                        goto code_r0x007951f4;
                      case L'-':
                        goto code_r0x007955fc;
                      case L'.':
                        goto code_r0x007953cc;
                      case L'0':
                        goto code_r0x0079557c;
                      case L'1':
                      case L'2':
                      case L'3':
                      case L'4':
                      case L'5':
                      case L'6':
                      case L'7':
                      case L'8':
                      case L'9':
                        goto code_r0x00795414;
                      case L'A':
                      case L'E':
                      case L'F':
                      case L'G':
                      case L'a':
                      case L'e':
                      case L'f':
                      case L'g':
                        goto code_r0x00794910;
                      case L'B':
                      case L'b':
                        goto code_r0x00794d54;
                      case L'C':
                        goto code_r0x00794a9c;
                      case L'I':
                        goto code_r0x0079563c;
                      case L'L':
                      case L'q':
                        goto code_r0x007952f4;
                      case L'S':
                      case L's':
                        goto code_r0x00794bc4;
                      case L'X':
                      case L'x':
                        goto code_r0x007951dc;
                      case L'Z':
                      case L'z':
                        goto code_r0x007952e4;
                      case L'c':
                        goto code_r0x00794c24;
                      case L'd':
                      case L'i':
                        goto code_r0x00795264;
                      case L'h':
                        goto code_r0x00795394;
                      case L'j':
                      case L't':
                        goto code_r0x007948d8;
                      case L'l':
                        goto code_r0x0079532c;
                      case L'm':
                        goto code_r0x00794cec;
                      case L'n':
                        goto code_r0x007950b4;
                      case L'o':
                        goto code_r0x00795104;
                      case L'p':
                        goto code_r0x00795184;
                      case L'u':
                        goto code_r0x00795174;
                      }
                    case L'%':
                      goto code_r0x00795294;
                    case L'\'':
                      goto code_r0x00795534;
                    case L'*':
                      goto code_r0x007954ac;
                    case L'+':
                      goto code_r0x007951f4;
                    case L'-':
                      goto code_r0x007955fc;
                    case L'.':
                      goto code_r0x007953cc;
                    case L'0':
                      goto code_r0x0079557c;
                    case L'1':
                    case L'2':
                    case L'3':
                    case L'4':
                    case L'5':
                    case L'6':
                    case L'7':
                    case L'8':
                    case L'9':
                      goto code_r0x00795414;
                    case L'A':
                    case L'E':
                    case L'F':
                    case L'G':
                    case L'a':
                    case L'e':
                    case L'f':
                    case L'g':
                      goto code_r0x00794910;
                    case L'B':
                    case L'b':
                      goto code_r0x00794d54;
                    case L'C':
                      goto code_r0x00794a9c;
                    case L'I':
                      goto code_r0x0079563c;
                    case L'L':
                    case L'q':
                      goto code_r0x007952f4;
                    case L'S':
                    case L's':
                      goto code_r0x00794bc4;
                    case L'X':
                    case L'x':
                      goto code_r0x007951dc;
                    case L'Z':
                    case L'z':
                      goto code_r0x007952e4;
                    case L'c':
                      goto code_r0x00794c24;
                    case L'd':
                    case L'i':
                      goto code_r0x00795264;
                    case L'h':
                      goto code_r0x00795394;
                    case L'j':
                    case L't':
                      goto code_r0x007948d8;
                    case L'l':
                      goto code_r0x0079532c;
                    case L'm':
                      goto code_r0x00794cec;
                    case L'n':
                      goto code_r0x007950b4;
                    case L'o':
                      goto code_r0x00795104;
                    case L'p':
                      goto code_r0x00795184;
                    case L'u':
                      goto code_r0x00795174;
                    }
                  case L'#':
                    goto code_r0x007955c4;
                  case L'%':
                    goto code_r0x00795294;
                  case L'\'':
                    goto code_r0x00795534;
                  case L'*':
code_r0x007954ac:
                    sVar13 = sVar24;
                    sVar12 = sVar23;
                    sVar11 = sVar22;
                    local_4f0 = sVar20;
                    local_4f4 = sVar19;
                    wVar30 = pwVar48[1];
                    pwVar40 = pwVar48 + 1;
                    uVar39 = wVar30 + L'\xffffffd0';
                    if (uVar39 < 10) {
                      wVar4 = pwVar48[2];
                      pwVar36 = pwVar48 + 2;
                      uVar1 = wVar4 + L'\xffffffd0';
                      while (uVar1 < 10) {
                        wVar4 = pwVar36[1];
                        if ((0xccccccc < (int)uVar39) ||
                           ((int)(0x7fffffff - uVar1) < (int)(uVar39 * 10))) {
                          if (((uint)(wVar4 + L'\xffffffd0') < 10) &&
                             (((uint)(pwVar36[2] + L'\xffffffd0') < 10 &&
                              ((uint)(pwVar36[3] + L'\xffffffd0') < 10)))) {
                            pwVar36 = pwVar36 + 4;
                            do {
                              wVar30 = *pwVar36;
                              pwVar36 = pwVar36 + 1;
                            } while ((uint)(wVar30 + L'\xffffffd0') < 10);
                          }
                          goto LAB_00795f10;
                        }
                        uVar39 = uVar39 * 10 + uVar1;
                        pwVar36 = pwVar36 + 1;
                        uVar1 = wVar4 + L'\xffffffd0';
                      }
                      if ((wVar4 == L'$') && (uVar39 != 0)) goto LAB_0079476e;
                    }
                    bVar69 = false;
                    bVar14 = false;
                    uVar39 = *param_3;
                    if (uVar39 < 0x30) {
                      piVar52 = (int *)((ulong)uVar39 + *(long *)(param_3 + 4));
                      *param_3 = uVar39 + 8;
                      wVar30 = pwVar48[1];
                    }
                    else {
                      piVar52 = *(int **)(param_3 + 2);
                      *(int **)(param_3 + 2) = piVar52 + 2;
                    }
                    local_520 = *piVar52;
                    sVar10 = sVar21;
                    if (local_520 < 0) {
                      local_520 = -local_520;
                      sVar10 = 1;
                      local_4f8 = 0x20;
                    }
                    pwVar48 = pwVar40;
                    bVar79 = bVar6;
                    bVar7 = bVar8;
                    iVar27 = local_520;
                    bVar71 = bVar69;
                    bVar70 = bVar69;
                    bVar68 = bVar69;
                    sVar59 = 0;
                    sVar19 = local_4f4;
                    sVar20 = local_4f0;
                    bVar25 = false;
                    sVar21 = sVar10;
                    sVar22 = sVar11;
                    sVar23 = sVar12;
                    sVar24 = sVar13;
                    switch(wVar30) {
                    case L'%':
                      goto code_r0x00795294;
                    case L'.':
                      goto code_r0x007953cc;
                    case L'A':
                    case L'E':
                    case L'F':
                    case L'G':
                    case L'a':
                    case L'e':
                    case L'f':
                    case L'g':
                      goto code_r0x00794910;
                    case L'B':
                    case L'b':
                      goto code_r0x00794d54;
                    case L'C':
                      goto code_r0x00794a9c;
                    case L'L':
                    case L'q':
                      goto code_r0x007952f4;
                    case L'S':
                    case L's':
                      goto code_r0x00794bc4;
                    case L'X':
                    case L'x':
                      goto code_r0x007951dc;
                    case L'Z':
                    case L'z':
                      goto code_r0x007952e4;
                    case L'c':
                      goto code_r0x00794c24;
                    case L'd':
                    case L'i':
                      goto code_r0x00795264;
                    case L'h':
                      goto code_r0x00795394;
                    case L'j':
                    case L't':
                      goto code_r0x007948d8;
                    case L'l':
                      goto code_r0x0079532c;
                    case L'm':
                      goto code_r0x00794cec;
                    case L'n':
                      goto code_r0x007950b4;
                    case L'o':
                      goto code_r0x00795104;
                    case L'p':
                      goto code_r0x00795184;
                    case L'u':
                      goto code_r0x00795174;
                    }
                    break;
                  case L'+':
                    goto code_r0x007951f4;
                  case L'-':
                    goto code_r0x007955fc;
                  case L'.':
code_r0x007953cc:
                    sVar13 = sVar24;
                    sVar12 = sVar23;
                    sVar11 = sVar22;
                    sVar10 = sVar21;
                    local_4f0 = sVar20;
                    local_4f4 = sVar19;
                    local_520 = iVar27;
                    bVar69 = false;
                    bVar25 = false;
                    if (pwVar40[1] == L'*') {
                      pwVar48 = pwVar40 + 2;
                      uVar72 = pwVar40[2] + L'\xffffffd0';
                      if (uVar72 < 10) {
                        wVar30 = pwVar40[3];
                        pwVar40 = pwVar40 + 3;
                        uVar38 = wVar30 + L'\xffffffd0';
                        while (uVar38 < 10) {
                          wVar30 = pwVar40[1];
                          if ((0xccccccc < (int)uVar72) ||
                             ((int)(0x7fffffff - uVar38) < (int)(uVar72 * 10))) {
                            if (((uint)(wVar30 + L'\xffffffd0') < 10) &&
                               (((uint)(pwVar40[2] + L'\xffffffd0') < 10 &&
                                ((uint)(pwVar40[3] + L'\xffffffd0') < 10)))) {
                              pwVar40 = pwVar40 + 4;
                              do {
                                wVar30 = *pwVar40;
                                pwVar40 = pwVar40 + 1;
                              } while ((uint)(wVar30 + L'\xffffffd0') < 10);
                            }
                            goto LAB_00795f10;
                          }
                          uVar72 = uVar72 * 10 + uVar38;
                          pwVar40 = pwVar40 + 1;
                          uVar38 = wVar30 + L'\xffffffd0';
                        }
                        if ((uVar72 != 0) && (wVar30 == L'$')) goto LAB_0079476e;
                      }
                      uVar72 = *param_3;
                      if (uVar72 < 0x30) {
                        puVar49 = (uint *)((ulong)uVar72 + *(long *)(param_3 + 4));
                        *param_3 = uVar72 + 8;
                      }
                      else {
                        puVar49 = *(uint **)(param_3 + 2);
                        *(uint **)(param_3 + 2) = puVar49 + 2;
                      }
                      wVar30 = *pwVar48;
                      pwVar40 = pwVar48;
                      uVar38 = 0xffffffff;
                      if (-1 < (int)*puVar49) {
                        uVar38 = *puVar49;
                      }
                    }
                    else {
                      uVar38 = pwVar40[1] + L'\xffffffd0';
                      if (uVar38 < 10) {
                        wVar30 = pwVar40[2];
                        pwVar40 = pwVar40 + 2;
                        uVar72 = wVar30 + L'\xffffffd0';
                        while (uVar72 < 10) {
                          wVar30 = pwVar40[1];
                          if ((0xccccccc < (int)uVar38) ||
                             ((int)(0x7fffffff - uVar72) < (int)(uVar38 * 10))) {
                            if (((uint)(wVar30 + L'\xffffffd0') < 10) &&
                               (((uint)(pwVar40[2] + L'\xffffffd0') < 10 &&
                                ((uint)(pwVar40[3] + L'\xffffffd0') < 10)))) {
                              pwVar40 = pwVar40 + 4;
                              do {
                                wVar30 = *pwVar40;
                                pwVar40 = pwVar40 + 1;
                              } while ((uint)(wVar30 + L'\xffffffd0') < 10);
                            }
                            goto LAB_00795f10;
                          }
                          uVar38 = uVar38 * 10 + uVar72;
                          pwVar40 = pwVar40 + 1;
                          uVar72 = wVar30 + L'\xffffffd0';
                        }
                      }
                      else {
                        wVar30 = pwVar40[1];
                        pwVar40 = pwVar40 + 1;
                        uVar38 = 0;
                      }
                    }
                    pwVar48 = pwVar40;
                    uVar72 = uVar38;
                    uVar76 = uVar38;
                    uVar73 = uVar38;
                    uVar74 = uVar38;
                    uVar75 = uVar38;
                    bVar79 = bVar6;
                    bVar7 = bVar8;
                    iVar27 = local_520;
                    bVar71 = bVar69;
                    bVar70 = bVar69;
                    bVar68 = bVar69;
                    sVar59 = 0;
                    sVar19 = local_4f4;
                    sVar20 = local_4f0;
                    bVar14 = bVar25;
                    sVar21 = sVar10;
                    sVar22 = sVar11;
                    sVar23 = sVar12;
                    sVar24 = sVar13;
                    switch(wVar30) {
                    case L'%':
                      goto code_r0x00795294;
                    case L'A':
                    case L'E':
                    case L'F':
                    case L'G':
                    case L'a':
                    case L'e':
                    case L'f':
                    case L'g':
                      goto code_r0x00794910;
                    case L'B':
                    case L'b':
                      goto code_r0x00794d54;
                    case L'C':
                      goto code_r0x00794a9c;
                    case L'L':
                    case L'q':
                      goto code_r0x007952f4;
                    case L'S':
                    case L's':
                      goto code_r0x00794bc4;
                    case L'X':
                    case L'x':
                      goto code_r0x007951dc;
                    case L'Z':
                    case L'z':
                      goto code_r0x007952e4;
                    case L'c':
                      goto code_r0x00794c24;
                    case L'd':
                    case L'i':
                      goto code_r0x00795264;
                    case L'h':
                      goto code_r0x00795394;
                    case L'j':
                    case L't':
                      goto code_r0x007948d8;
                    case L'l':
                      goto code_r0x0079532c;
                    case L'm':
                      goto code_r0x00794cec;
                    case L'n':
                      goto code_r0x007950b4;
                    case L'o':
                      goto code_r0x00795104;
                    case L'p':
                      goto code_r0x00795184;
                    case L'u':
                      goto code_r0x00795174;
                    }
                    break;
                  case L'0':
                    goto code_r0x0079557c;
                  case L'1':
                  case L'2':
                  case L'3':
                  case L'4':
                  case L'5':
                  case L'6':
                  case L'7':
                  case L'8':
                  case L'9':
code_r0x00795414:
                    sVar13 = sVar24;
                    sVar12 = sVar23;
                    sVar11 = sVar22;
                    sVar10 = sVar21;
                    local_4f0 = sVar20;
                    local_4f4 = sVar19;
                    wVar4 = *pwVar40;
                    wVar30 = pwVar40[1];
                    pwVar40 = pwVar40 + 1;
                    local_520 = wVar4 + L'\xffffffd0';
                    pwVar48 = pwVar40;
                    uVar39 = wVar30 + L'\xffffffd0';
                    if ((uint)(wVar30 + L'\xffffffd0') < 10) {
LAB_00795432:
                      wVar30 = pwVar48[1];
                      pwVar40 = pwVar48 + 1;
                      uVar1 = wVar30 + L'\xffffffd0';
                      if (local_520 < 0) goto joined_r0x007967ce;
                      if ((local_520 < 0xccccccd) && (local_520 * 10 <= (int)(0x7fffffff - uVar39)))
                      goto code_r0x00795468;
                      if (((uVar1 < 10) && ((uint)(pwVar48[2] + L'\xffffffd0') < 10)) &&
                         (pwVar40 = pwVar48 + 3, (uint)(pwVar48[3] + L'\xffffffd0') < 10)) {
                        local_520 = -1;
                        do {
                          pwVar40 = pwVar40 + 1;
                          wVar30 = *pwVar40;
                          uVar1 = wVar30 + L'\xffffffd0';
joined_r0x007967ce:
                        } while (uVar1 < 10);
                        goto LAB_007967e0;
                      }
                      goto LAB_00795f10;
                    }
LAB_007967e0:
                    if (local_520 != -1) {
LAB_00795480:
                      if (wVar30 != L'$') {
                        pwVar48 = pwVar40;
                        bVar79 = bVar6;
                        bVar7 = bVar8;
                        iVar27 = local_520;
                        bVar69 = bVar67;
                        bVar71 = bVar61;
                        bVar70 = bVar65;
                        bVar68 = bVar63;
                        sVar59 = sVar57;
                        sVar19 = local_4f4;
                        sVar20 = local_4f0;
                        bVar25 = bVar18;
                        bVar14 = bVar16;
                        sVar21 = sVar10;
                        sVar22 = sVar11;
                        sVar23 = sVar12;
                        sVar24 = sVar13;
                        switch(wVar30) {
                        case L'%':
                          goto code_r0x00795294;
                        case L'.':
                          goto code_r0x007953cc;
                        case L'A':
                        case L'E':
                        case L'F':
                        case L'G':
                        case L'a':
                        case L'e':
                        case L'f':
                        case L'g':
                          goto code_r0x00794910;
                        case L'B':
                        case L'b':
                          goto code_r0x00794d54;
                        case L'C':
                          goto code_r0x00794a9c;
                        case L'L':
                        case L'q':
                          goto code_r0x007952f4;
                        case L'S':
                        case L's':
                          goto code_r0x00794bc4;
                        case L'X':
                        case L'x':
                          goto code_r0x007951dc;
                        case L'Z':
                        case L'z':
                          goto code_r0x007952e4;
                        case L'c':
                          goto code_r0x00794c24;
                        case L'd':
                        case L'i':
                          goto code_r0x00795264;
                        case L'h':
                          goto code_r0x00795394;
                        case L'j':
                        case L't':
                          goto code_r0x007948d8;
                        case L'l':
                          goto code_r0x0079532c;
                        case L'm':
                          goto code_r0x00794cec;
                        case L'n':
                          goto code_r0x007950b4;
                        case L'o':
                          goto code_r0x00795104;
                        case L'p':
                          goto code_r0x00795184;
                        case L'u':
                          goto code_r0x00795174;
                        }
                        break;
                      }
                      goto LAB_0079476e;
                    }
                    goto LAB_00795f10;
                  case L'A':
                  case L'E':
                  case L'F':
                  case L'G':
                  case L'a':
                  case L'e':
                  case L'f':
                  case L'g':
                    goto code_r0x00794910;
                  case L'B':
                  case L'b':
                    goto code_r0x00794d54;
                  case L'C':
                    goto code_r0x00794a9c;
                  case L'I':
                    goto code_r0x0079563c;
                  case L'L':
                  case L'q':
code_r0x007952f4:
                    sVar13 = sVar24;
                    sVar12 = sVar23;
                    sVar11 = sVar22;
                    sVar10 = sVar21;
                    local_4f0 = sVar20;
                    local_4f4 = sVar19;
                    local_520 = iVar27;
                    uVar38 = uVar75;
                    bVar69 = false;
                    wVar30 = pwVar40[1];
                    pwVar48 = pwVar40 + 1;
                    bVar14 = true;
                    uVar72 = uVar38;
                    uVar76 = uVar38;
                    uVar73 = uVar38;
                    uVar74 = uVar38;
                    uVar75 = uVar38;
                    bVar79 = true;
                    bVar7 = bVar8;
                    iVar27 = local_520;
                    bVar71 = bVar69;
                    bVar70 = bVar69;
                    bVar68 = bVar69;
                    sVar59 = 1;
                    sVar19 = local_4f4;
                    sVar20 = local_4f0;
                    bVar25 = true;
                    sVar21 = sVar10;
                    sVar22 = sVar11;
                    sVar23 = sVar12;
                    sVar24 = sVar13;
                    switch(wVar30) {
                    case L'%':
                      goto code_r0x00795294;
                    case L'A':
                    case L'E':
                    case L'F':
                    case L'G':
                    case L'a':
                    case L'e':
                    case L'f':
                    case L'g':
                      goto code_r0x00794910;
                    case L'B':
                    case L'b':
                      goto code_r0x00794d54;
                    case L'C':
                      goto code_r0x00794a9c;
                    case L'S':
                    case L's':
                      goto code_r0x00794bc4;
                    case L'X':
                    case L'x':
                      goto code_r0x007951dc;
                    case L'c':
                      goto code_r0x00794c24;
                    case L'd':
                    case L'i':
                      goto code_r0x00795264;
                    case L'm':
                      goto code_r0x00794cec;
                    case L'n':
                      goto code_r0x007950b4;
                    case L'o':
                      goto code_r0x00795104;
                    case L'p':
                      goto code_r0x00795184;
                    case L'u':
                      goto code_r0x00795174;
                    }
                    break;
                  case L'S':
                  case L's':
                    goto code_r0x00794bc4;
                  case L'X':
                  case L'x':
                    goto code_r0x007951dc;
                  case L'Z':
                  case L'z':
code_r0x007952e4:
                  case L'j':
                  case L't':
code_r0x007948d8:
                    sVar13 = sVar24;
                    sVar12 = sVar23;
                    sVar11 = sVar22;
                    sVar10 = sVar21;
                    local_4f0 = sVar20;
                    local_4f4 = sVar19;
                    local_520 = iVar27;
                    uVar38 = uVar75;
                    bVar69 = false;
                    wVar30 = pwVar40[1];
                    pwVar48 = pwVar40 + 1;
                    bVar14 = true;
                    uVar72 = uVar38;
                    uVar76 = uVar38;
                    uVar73 = uVar38;
                    uVar74 = uVar38;
                    uVar75 = uVar38;
                    bVar79 = false;
                    bVar7 = bVar8;
                    iVar27 = local_520;
                    bVar71 = bVar69;
                    bVar70 = bVar69;
                    bVar68 = bVar69;
                    sVar59 = 1;
                    sVar19 = local_4f4;
                    sVar20 = local_4f0;
                    bVar25 = true;
                    sVar21 = sVar10;
                    sVar22 = sVar11;
                    sVar23 = sVar12;
                    sVar24 = sVar13;
                    switch(wVar30) {
                    default:
                      goto code_r0x00794765;
                    case L'%':
code_r0x00795294:
                      lVar77 = *(long *)(param_1 + 0x28);
                      if ((lVar77 == 0) ||
                         (puVar5 = *(undefined4 **)(lVar77 + 0x20),
                         *(undefined4 **)(lVar77 + 0x28) <= puVar5)) {
                        iVar27 = __woverflow(param_1,0x25);
                        if (iVar27 == -1) goto LAB_00794cc8;
                      }
                      else {
                        *(undefined4 **)(lVar77 + 0x20) = puVar5 + 1;
                        *puVar5 = 0x25;
                      }
                      if (uVar28 != 0x7fffffff) {
                        uVar28 = uVar28 + 1;
                        goto LAB_00794b20;
                      }
                      goto LAB_00794cc8;
                    case L'A':
                    case L'E':
                    case L'F':
                    case L'G':
                    case L'a':
                    case L'e':
                    case L'f':
                    case L'g':
code_r0x00794910:
                      if ((param_4 & 1) != 0) {
                        bVar79 = false;
                      }
                      local_484 = local_520;
                      uVar26 = CONCAT11(4,bVar79) | sVar59 * 4 | local_4f4 << 3 | local_4f0 << 4 |
                               sVar10 << 5 | sVar13 << 6 | sVar11 << 7 | sVar12 << 0xb;
                      local_47c = (uint)uVar26;
                      local_478 = local_4f8;
                      if (bVar79) {
                        if ((param_4 & 8) == 0) {
                          pVar37 = (unkbyte10 *)(*(long *)(param_3 + 2) + 0xfU & 0xfffffffffffffff0)
                          ;
                          *(unkbyte10 **)(param_3 + 2) = pVar37 + 1;
                          Var2 = *pVar37;
                          local_498 = (undefined8)Var2;
                          uStack_490 = (undefined2)((unkuint10)Var2 >> 0x40);
                        }
                        else {
                          local_47c = uVar26 | 0x1000;
                          uVar72 = param_3[1];
                          if (uVar72 < 0xb0) {
                            puVar46 = (undefined8 *)((ulong)uVar72 + *(long *)(param_3 + 4));
                            param_3[1] = uVar72 + 0x10;
                          }
                          else {
                            puVar46 = (undefined8 *)
                                      (*(long *)(param_3 + 2) + 0xfU & 0xfffffffffffffff0);
                            *(undefined8 **)(param_3 + 2) = puVar46 + 2;
                          }
                          local_498 = *puVar46;
                          uStack_490 = (undefined2)puVar46[1];
                          uStack_48e = (undefined6)((ulong)puVar46[1] >> 0x10);
                        }
                      }
                      else {
                        uVar72 = param_3[1];
                        if (uVar72 < 0xb0) {
                          puVar46 = (undefined8 *)((ulong)uVar72 + *(long *)(param_3 + 4));
                          param_3[1] = uVar72 + 0x10;
                        }
                        else {
                          puVar46 = *(undefined8 **)(param_3 + 2);
                          *(undefined8 **)(param_3 + 2) = puVar46 + 1;
                        }
                        local_498 = *puVar46;
                      }
                      local_4a0 = &local_498;
                      local_488 = uVar38;
                      local_480 = wVar30;
                      if ((wVar30 & 0xffffffdfU) == 0x41) {
                        uVar72 = __printf_fphex();
                      }
                      else {
                        uVar72 = __printf_fp(param_1,&local_488,&local_4a0);
                      }
                      if (-1 < (int)uVar72) {
                        bVar79 = false;
                        uVar28 = uVar28 + uVar72;
                        if (((int)uVar28 < 0) || (uVar28 < uVar72)) {
                          bVar79 = true;
                        }
                        goto joined_r0x00795829;
                      }
                      goto LAB_00794cc8;
                    case L'B':
                    case L'b':
code_r0x00794d54:
                      uVar76 = uVar74;
                      iVar32 = 2;
                      bVar69 = bVar70;
                      goto LAB_00794d5a;
                    case L'C':
code_r0x00794a9c:
                      uVar72 = local_520 - 1;
                      if ((sVar21 == 0) && (0 < (int)uVar72)) {
                        lVar77 = _IO_wpadn(param_1,0x20,(long)(int)uVar72);
                        if ((int)uVar72 != lVar77) goto LAB_00794cc8;
                        uVar28 = uVar28 + uVar72;
                        uVar34 = (ulong)uVar28;
                        if (((int)uVar28 < 0) || (uVar28 < uVar72)) goto LAB_00795f10;
                        if ((int)uVar28 < 0) goto LAB_007947d1;
                      }
                      uVar38 = *param_3;
                      if (uVar38 < 0x30) {
                        pwVar42 = (wint_t *)((ulong)uVar38 + *(long *)(param_3 + 4));
                        *param_3 = uVar38 + 8;
                      }
                      else {
                        pwVar42 = *(wint_t **)(param_3 + 2);
                        *(wint_t **)(param_3 + 2) = pwVar42 + 2;
                      }
                      lVar77 = *(long *)(param_1 + 0x28);
                      wVar29 = *pwVar42;
                      if (lVar77 == 0) goto LAB_00794cb0;
LAB_00794adf:
                      pwVar42 = *(wint_t **)(lVar77 + 0x20);
                      if (*(wint_t **)(lVar77 + 0x28) <= pwVar42) goto LAB_00794cb0;
                      *(wint_t **)(lVar77 + 0x20) = pwVar42 + 1;
                      *pwVar42 = wVar29;
                      goto joined_r0x00794cbb;
                    case L'S':
                    case L's':
code_r0x00794bc4:
                      uVar72 = *param_3;
                      if (uVar72 < 0x30) {
                        plVar43 = (long *)((ulong)uVar72 + *(long *)(param_3 + 4));
                        *param_3 = uVar72 + 8;
                      }
                      else {
                        plVar43 = *(long **)(param_3 + 2);
                        *(long **)(param_3 + 2) = plVar43 + 1;
                      }
                      __s = (undefined1 *)*plVar43;
                      bVar25 = (bool)(bVar25 ^ 1);
                      uVar72 = uVar75;
                      if ((wchar_t *)__s == (wchar_t *)0x0) {
                        if ((uVar75 == 0xffffffff) || (5 < (int)uVar75)) {
                          sVar78 = 6;
                          __s = null;
                        }
                        else {
                          sVar78 = 0;
                          __s = (undefined1 *)0x813874;
                        }
                      }
                      else {
LAB_00794d12:
                        if ((wVar30 != L'S') && (bVar25)) {
                          uVar28 = outstring_converted_wide_string(param_1,__s,uVar72,iVar27,sVar21)
                          ;
                          uVar34 = (ulong)uVar28;
                          if (-1 < (int)uVar28) goto LAB_00794b20;
                          goto LAB_007947d1;
                        }
                        if (uVar72 != 0xffffffff) goto LAB_00795e1a;
                        sVar78 = wcslen((wchar_t *)__s);
                      }
LAB_00795e28:
                      uVar72 = iVar27 - (int)sVar78;
                      if ((int)uVar72 < 0) {
                        lVar77 = *(long *)(param_1 + 0x36);
                        if (0x827 < lVar77 - 0x932180U) {
                          _IO_vtable_check();
                        }
                        uVar54 = (**(code **)(lVar77 + 0x38))(param_1,__s,sVar78);
                        if (uVar54 == sVar78) {
                          bVar79 = false;
                          uVar54 = (long)(int)uVar28 + sVar78;
                          if (((long)uVar54 < 0) || (uVar54 < sVar78)) goto LAB_00796416;
                          goto LAB_00795081;
                        }
                        goto LAB_00794cc8;
                      }
                      if ((sVar21 == 0) && (uVar72 != 0)) {
                        lVar77 = _IO_wpadn(param_1,0x20);
                        if ((int)uVar72 != lVar77) goto LAB_00794cc8;
                        uVar28 = uVar28 + uVar72;
                        uVar34 = (ulong)uVar28;
                        if (((int)uVar28 < 0) || (uVar28 < uVar72)) goto LAB_00795f10;
                        if ((int)uVar28 < 0) goto LAB_007947d1;
                      }
                      lVar77 = *(long *)(param_1 + 0x36);
                      if (0x827 < lVar77 - 0x932180U) {
                        _IO_vtable_check();
                      }
                      uVar54 = (**(code **)(lVar77 + 0x38))(param_1,__s,sVar78);
                      if (uVar54 != sVar78) goto LAB_00794cc8;
                      bVar79 = false;
                      uVar54 = (long)(int)uVar28 + sVar78;
                      if (((long)uVar54 < 0) || (uVar54 < sVar78)) {
                        bVar79 = true;
                      }
                      uVar28 = (uint)uVar54;
                      uVar34 = uVar54 & 0xffffffff;
                      if (uVar54 != (long)(int)uVar28) {
                        bVar79 = true;
                      }
                      if (bVar79) goto LAB_00795f10;
                      if (-1 < (int)uVar28) {
                        if ((sVar21 == 0) || (uVar72 == 0)) goto LAB_00794b20;
                        goto LAB_0079580a;
                      }
                      goto LAB_007947d1;
                    case L'X':
                    case L'x':
code_r0x007951dc:
                      uVar76 = uVar73;
                      iVar32 = 0x10;
                      bVar69 = bVar70;
                      goto LAB_00794d5a;
                    case L'c':
code_r0x00794c24:
                      if (bVar25) goto code_r0x00794a9c;
                      uVar72 = local_520 - 1;
                      if ((sVar21 == 0) && (0 < (int)uVar72)) {
                        lVar77 = _IO_wpadn(param_1,0x20,(long)(int)uVar72);
                        if ((int)uVar72 != lVar77) goto LAB_00794cc8;
                        uVar28 = uVar28 + uVar72;
                        uVar34 = (ulong)uVar28;
                        if (((int)uVar28 < 0) || (uVar28 < uVar72)) goto LAB_00795f10;
                        if ((int)uVar28 < 0) goto LAB_007947d1;
                      }
                      uVar38 = *param_3;
                      if (uVar38 < 0x30) {
                        pbVar47 = (byte *)((ulong)uVar38 + *(long *)(param_3 + 4));
                        *param_3 = uVar38 + 8;
                      }
                      else {
                        pbVar47 = *(byte **)(param_3 + 2);
                        *(byte **)(param_3 + 2) = pbVar47 + 8;
                      }
                      wVar29 = btowc((uint)*pbVar47);
                      lVar77 = *(long *)(param_1 + 0x28);
                      if (lVar77 != 0) goto LAB_00794adf;
LAB_00794cb0:
                      wVar29 = __woverflow(param_1);
joined_r0x00794cbb:
                      if ((wVar29 != 0xffffffff) && (uVar28 != 0x7fffffff)) {
                        uVar28 = uVar28 + 1;
                        if ((sVar21 == 0) || ((int)uVar72 < 1)) goto LAB_00794b20;
                        lVar77 = _IO_wpadn(param_1,0x20,(long)(int)uVar72);
                        if ((int)uVar72 == lVar77) {
                          bVar79 = false;
                          uVar28 = uVar28 + uVar72;
                          if (((int)uVar28 < 0) || (uVar28 < uVar72)) {
                            bVar79 = true;
                          }
                          goto joined_r0x00795829;
                        }
                      }
                      goto LAB_00794cc8;
                    case L'd':
                    case L'i':
code_r0x00795264:
                      if (bVar14) {
                        uVar38 = *param_3;
                        if (uVar38 < 0x30) {
                          puVar44 = (ulong *)((ulong)uVar38 + *(long *)(param_3 + 4));
                          *param_3 = uVar38 + 8;
                        }
                        else {
                          puVar44 = *(ulong **)(param_3 + 2);
                          *(ulong **)(param_3 + 2) = puVar44 + 1;
                        }
                        uVar54 = *puVar44;
                      }
                      else {
                        uVar38 = *param_3;
                        if (bVar71) {
                          if (uVar38 < 0x30) {
                            pcVar50 = (char *)((ulong)uVar38 + *(long *)(param_3 + 4));
                            *param_3 = uVar38 + 8;
                          }
                          else {
                            pcVar50 = *(char **)(param_3 + 2);
                            *(char **)(param_3 + 2) = pcVar50 + 8;
                          }
                          uVar54 = (ulong)*pcVar50;
                        }
                        else if (bVar7) {
                          if (uVar38 < 0x30) {
                            psVar53 = (short *)((ulong)uVar38 + *(long *)(param_3 + 4));
                            *param_3 = uVar38 + 8;
                          }
                          else {
                            psVar53 = *(short **)(param_3 + 2);
                            *(short **)(param_3 + 2) = psVar53 + 4;
                          }
                          uVar54 = (ulong)*psVar53;
                        }
                        else {
                          if (uVar38 < 0x30) {
                            piVar52 = (int *)((ulong)uVar38 + *(long *)(param_3 + 4));
                            *param_3 = uVar38 + 8;
                          }
                          else {
                            piVar52 = *(int **)(param_3 + 2);
                            *(int **)(param_3 + 2) = piVar52 + 2;
                          }
                          uVar54 = (ulong)*piVar52;
                        }
                      }
                      if ((long)uVar54 < 0) {
                        uVar54 = -uVar54;
                        bVar14 = true;
                        iVar32 = 10;
                      }
                      else {
                        bVar14 = false;
                        iVar32 = 10;
                      }
                      break;
                    case L'm':
code_r0x00794cec:
                      if (sVar19 == 0) {
                        __s = strerror_r(iVar3,local_428,1000);
                      }
                      else {
                        __s = (undefined1 *)__get_errname(iVar3);
                      }
                      bVar25 = true;
                      uVar72 = uVar75;
                      if ((wchar_t *)__s != (wchar_t *)0x0) goto LAB_00794d12;
                      uVar54 = (ulong)iVar3;
                      bVar14 = false;
                      iVar32 = 10;
                      if (iVar3 < 0) {
                        uVar54 = -uVar54;
                        bVar14 = true;
                      }
                      break;
                    case L'n':
code_r0x007950b4:
                      if (((param_4 & 2) != 0) && (local_4c8 == 0)) {
                        sVar78 = wcslen(param_2);
                        local_4c8 = __readonly_area(param_2,sVar78 * 4 + 4);
                        if (local_4c8 < 0) {
                    /* WARNING: Subroutine does not return */
                          __libc_fatal("*** %n in writable segment detected ***\n");
                        }
                      }
                      uVar72 = *param_3;
                      if (uVar72 < 0x30) {
                        puVar46 = (undefined8 *)((ulong)uVar72 + *(long *)(param_3 + 4));
                        *param_3 = uVar72 + 8;
                      }
                      else {
                        puVar46 = *(undefined8 **)(param_3 + 2);
                        *(undefined8 **)(param_3 + 2) = puVar46 + 1;
                      }
                      puVar49 = (uint *)*puVar46;
                      if (bVar14) {
                        *(long *)puVar49 = (long)(int)uVar28;
                      }
                      else if (bVar68) {
                        *(char *)puVar49 = (char)uVar34;
                      }
                      else if (bVar7) {
                        *(short *)puVar49 = (short)uVar34;
                      }
                      else {
                        *puVar49 = uVar28;
                      }
                      goto LAB_00794b20;
                    case L'o':
code_r0x00795104:
                      iVar32 = 8;
                      uVar38 = *param_3;
                      if (bVar14) goto LAB_00794d6a;
                      goto LAB_0079511a;
                    case L'p':
code_r0x00795184:
                      uVar38 = *param_3;
                      if (uVar38 < 0x30) {
                        puVar44 = (ulong *)((ulong)uVar38 + *(long *)(param_3 + 4));
                        *param_3 = uVar38 + 8;
                      }
                      else {
                        puVar44 = *(ulong **)(param_3 + 2);
                        *(ulong **)(param_3 + 2) = puVar44 + 1;
                      }
                      uVar54 = *puVar44;
                      if (uVar54 == 0) {
                        __s = (undefined1 *)0x834e74;
                        if ((int)uVar72 < 5) {
                          uVar72 = 5;
                        }
LAB_00795e1a:
                        sVar78 = wcsnlen((wchar_t *)__s,(long)(int)uVar72);
                        goto LAB_00795e28;
                      }
                      bVar14 = false;
                      wVar30 = L'x';
                      iVar32 = 0x10;
                      sVar22 = 0;
                      sVar19 = 1;
                      break;
                    case L'u':
code_r0x00795174:
                      uVar76 = uVar73;
                      iVar32 = 10;
                      bVar69 = bVar70;
LAB_00794d5a:
                      uVar38 = *param_3;
                      if (bVar14) {
LAB_00794d6a:
                        if (uVar38 < 0x30) {
                          puVar44 = (ulong *)((ulong)uVar38 + *(long *)(param_3 + 4));
                          *param_3 = uVar38 + 8;
                        }
                        else {
                          puVar44 = *(ulong **)(param_3 + 2);
                          *(ulong **)(param_3 + 2) = puVar44 + 1;
                        }
                        uVar54 = *puVar44;
                        sVar24 = 0;
                        bVar14 = false;
                        sVar20 = 0;
                        uVar72 = uVar76;
                      }
                      else {
LAB_0079511a:
                        uVar72 = uVar76;
                        if (bVar69) {
                          if (uVar38 < 0x30) {
                            pbVar47 = (byte *)((ulong)uVar38 + *(long *)(param_3 + 4));
                            *param_3 = uVar38 + 8;
                          }
                          else {
                            pbVar47 = *(byte **)(param_3 + 2);
                            *(byte **)(param_3 + 2) = pbVar47 + 8;
                          }
                          uVar54 = (ulong)*pbVar47;
                          sVar24 = 0;
                          sVar20 = 0;
                        }
                        else if (bVar7) {
                          if (uVar38 < 0x30) {
                            puVar51 = (ushort *)((ulong)uVar38 + *(long *)(param_3 + 4));
                            *param_3 = uVar38 + 8;
                          }
                          else {
                            puVar51 = *(ushort **)(param_3 + 2);
                            *(ushort **)(param_3 + 2) = puVar51 + 4;
                          }
                          uVar54 = (ulong)*puVar51;
                          sVar24 = 0;
                          bVar14 = false;
                          sVar20 = 0;
                        }
                        else {
                          if (uVar38 < 0x30) {
                            puVar49 = (uint *)((ulong)uVar38 + *(long *)(param_3 + 4));
                            *param_3 = uVar38 + 8;
                          }
                          else {
                            puVar49 = *(uint **)(param_3 + 2);
                            *(uint **)(param_3 + 2) = puVar49 + 2;
                          }
                          uVar54 = (ulong)*puVar49;
                          sVar24 = 0;
                          bVar14 = false;
                          sVar20 = 0;
                        }
                      }
                    }
                    if (uVar72 == 0xffffffff) {
                      lVar77 = 1;
LAB_00794db7:
                      pwVar40 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                      if (wVar30 != L'X') {
                        pwVar40 = (wchar_t *)_itowa_lower_digits;
                      }
                      if (iVar32 == 10) {
                        pwVar36 = (wchar_t *)local_40;
                        uVar34 = uVar54;
                        do {
                          pwVar36 = pwVar36 + -1;
                          *pwVar36 = pwVar40[uVar34 % 10];
                          bVar79 = 9 < uVar34;
                          uVar34 = uVar34 / 10;
                        } while (bVar79);
                        if ((local_4e0 != (char *)0x0) && (sVar22 != 0)) goto LAB_00794e35;
LAB_00794e82:
                        if ((iVar32 == 10) && (sVar23 != 0)) {
                          pwVar36 = (wchar_t *)_i18n_number_rewrite(pwVar36,local_40,local_40);
                        }
                      }
                      else {
                        if (iVar32 == 0x10) {
                          pwVar36 = (wchar_t *)local_40;
                          uVar34 = uVar54;
                          do {
                            pwVar36 = pwVar36 + -1;
                            *pwVar36 = pwVar40[(uint)uVar34 & 0xf];
                            bVar79 = 0xf < uVar34;
                            uVar34 = uVar34 >> 4;
                          } while (bVar79);
                        }
                        else if (iVar32 == 8) {
                          pwVar36 = (wchar_t *)local_40;
                          uVar34 = uVar54;
                          do {
                            pwVar36 = pwVar36 + -1;
                            *pwVar36 = pwVar40[(uint)uVar34 & 7];
                            bVar79 = 7 < uVar34;
                            uVar34 = uVar34 >> 3;
                          } while (bVar79);
                        }
                        else {
                          pwVar36 = (wchar_t *)local_40;
                          uVar35 = (ulong)iVar32;
                          uVar34 = uVar54;
                          do {
                            pwVar36 = pwVar36 + -1;
                            *pwVar36 = pwVar40[uVar34 % uVar35];
                            bVar79 = uVar35 <= uVar34;
                            uVar34 = uVar34 / uVar35;
                          } while (bVar79);
                        }
                        if ((local_4e0 != (char *)0x0) && (sVar22 != 0)) {
LAB_00794e35:
                          pwVar36 = (wchar_t *)
                                    group_number(local_428,pwVar36,local_40,local_4e0,local_4c4);
                          goto LAB_00794e82;
                        }
                      }
                      lVar41 = (long)local_40 - (long)pwVar36;
                      uVar35 = lVar41 >> 2;
                      pwVar40 = pwVar36;
                      if ((long)uVar35 < lVar77) {
                        lVar77 = lVar77 - uVar35;
                        if (lVar77 < 0) {
                          lVar77 = 0;
                        }
                        uVar38 = (uint)lVar77;
                        if (sVar21 == 0) {
                          uVar72 = (iVar27 - (int)uVar35) - uVar38;
                          if (uVar54 != 0) {
LAB_00794f0f:
                            if ((sVar19 != 0) && ((0x10004UL >> (sbyte)iVar32 & 1) != 0)) {
                              uVar72 = uVar72 - 2;
                            }
                          }
                          goto LAB_00794f2c;
                        }
                      }
                      else {
                        if (uVar54 == 0) {
                          lVar77 = lVar77 - uVar35;
                          if (lVar77 < 0) {
                            lVar77 = 0;
                          }
                          uVar38 = (uint)lVar77;
                          goto LAB_00795f42;
                        }
                        if ((iVar32 == 8) && (sVar19 != 0)) {
                          pwVar40 = pwVar36 + -1;
                          pwVar36[-1] = L'0';
                          lVar41 = (long)local_40 - (long)pwVar40;
                        }
                        uVar35 = lVar41 >> 2;
                        lVar77 = lVar77 - uVar35;
                        if (lVar77 < 0) {
                          lVar77 = 0;
                        }
                        uVar38 = (uint)lVar77;
                        if (sVar21 == 0) {
                          uVar72 = (iVar27 - (int)uVar35) - uVar38;
                          goto LAB_00794f0f;
                        }
                      }
LAB_007956d0:
                      if (bVar14) {
                        lVar77 = *(long *)(param_1 + 0x28);
                        if ((lVar77 == 0) ||
                           (puVar5 = *(undefined4 **)(lVar77 + 0x20),
                           *(undefined4 **)(lVar77 + 0x28) <= puVar5)) {
                          uVar56 = 0x2d;
LAB_0079661e:
                          iVar31 = __woverflow(param_1,uVar56);
                          if (iVar31 == -1) goto LAB_00794cc8;
                        }
                        else {
                          *(undefined4 **)(lVar77 + 0x20) = puVar5 + 1;
                          *puVar5 = 0x2d;
                        }
LAB_00795706:
                        if (uVar28 == 0x7fffffff) goto LAB_00794cc8;
                        iVar27 = iVar27 + -1;
                        uVar28 = uVar28 + 1;
                      }
                      else {
                        if (sVar24 != 0) {
                          lVar77 = *(long *)(param_1 + 0x28);
                          if ((lVar77 == 0) ||
                             (puVar5 = *(undefined4 **)(lVar77 + 0x20),
                             *(undefined4 **)(lVar77 + 0x28) <= puVar5)) {
                            uVar56 = 0x2b;
                            goto LAB_0079661e;
                          }
                          *(undefined4 **)(lVar77 + 0x20) = puVar5 + 1;
                          *puVar5 = 0x2b;
                          goto LAB_00795706;
                        }
                        if (sVar20 != 0) {
                          lVar77 = *(long *)(param_1 + 0x28);
                          if ((lVar77 == 0) ||
                             (puVar5 = *(undefined4 **)(lVar77 + 0x20),
                             *(undefined4 **)(lVar77 + 0x28) <= puVar5)) {
                            uVar56 = 0x20;
                            goto LAB_0079661e;
                          }
                          *(undefined4 **)(lVar77 + 0x20) = puVar5 + 1;
                          *puVar5 = 0x20;
                          goto LAB_00795706;
                        }
                      }
                      if (((uVar54 != 0) && (sVar19 != 0)) && ((0x10004UL >> iVar32 & 1) != 0)) {
                        lVar77 = *(long *)(param_1 + 0x28);
                        if (lVar77 == 0) {
LAB_00796849:
                          iVar32 = __woverflow(param_1,0x30);
                          if ((iVar32 == -1) || (uVar28 == 0x7fffffff)) goto LAB_00794cc8;
                          lVar77 = *(long *)(param_1 + 0x28);
                          if (lVar77 != 0) {
                            pwVar45 = *(wchar_t **)(lVar77 + 0x20);
                            pwVar55 = *(wchar_t **)(lVar77 + 0x28);
                            goto LAB_00795dac;
                          }
LAB_00796891:
                          wVar30 = __woverflow(param_1,wVar30);
                        }
                        else {
                          pwVar36 = *(wchar_t **)(lVar77 + 0x20);
                          pwVar55 = *(wchar_t **)(lVar77 + 0x28);
                          if (pwVar55 <= pwVar36) goto LAB_00796849;
                          pwVar45 = pwVar36 + 1;
                          *(wchar_t **)(lVar77 + 0x20) = pwVar45;
                          *pwVar36 = L'0';
                          if (uVar28 == 0x7fffffff) goto LAB_00794cc8;
LAB_00795dac:
                          if (pwVar55 <= pwVar45) goto LAB_00796891;
                          *(wchar_t **)(lVar77 + 0x20) = pwVar45 + 1;
                          *pwVar45 = wVar30;
                        }
                        if ((wVar30 == L'\xffffffff') || (uVar28 == 0x7ffffffe)) goto LAB_00794cc8;
                        iVar27 = iVar27 + -2;
                        uVar28 = uVar28 + 2;
                      }
                      uVar54 = lVar41 >> 2;
                      uVar72 = iVar27 - (uVar38 + (int)uVar54);
                      if (0 < (int)uVar38) {
                        lVar77 = _IO_wpadn(param_1,0x30);
                        if ((int)uVar38 != lVar77) goto LAB_00794cc8;
                        bVar79 = false;
                        uVar28 = uVar28 + uVar38;
                        uVar34 = (ulong)uVar28;
                        if (((int)uVar28 < 0) || (uVar28 < uVar38)) {
                          bVar79 = true;
                        }
                        if (bVar79) goto LAB_00795f10;
                        if ((int)uVar28 < 0) goto LAB_007947d1;
                      }
                      lVar77 = *(long *)(param_1 + 0x36);
                      if (0x827 < lVar77 - 0x932180U) {
                        _IO_vtable_check();
                      }
                      uVar34 = (**(code **)(lVar77 + 0x38))(param_1,pwVar40,uVar54);
                      if (uVar34 != uVar54) goto LAB_00794cc8;
                      bVar79 = false;
                      uVar35 = (long)(int)uVar28 + uVar54;
                      if (((long)uVar35 < 0) || (uVar35 < uVar54)) {
                        bVar79 = true;
                      }
                      uVar28 = (uint)uVar35;
                      uVar34 = uVar35 & 0xffffffff;
                      if (uVar35 != (long)(int)uVar28) {
                        bVar79 = true;
                      }
                      if (bVar79) goto LAB_00795f10;
                      if ((int)uVar28 < 0) goto LAB_007947d1;
                      if (0 < (int)uVar72) {
LAB_0079580a:
                        lVar77 = _IO_wpadn(param_1,0x20,(long)(int)uVar72);
                        if ((int)uVar72 == lVar77) {
                          bVar79 = SCARRY4(uVar72,uVar28);
                          uVar28 = uVar72 + uVar28;
joined_r0x00795829:
                          if (!bVar79) {
                            uVar34 = (ulong)uVar28;
                            goto joined_r0x0079509c;
                          }
                          goto LAB_00795f10;
                        }
                        goto LAB_00794cc8;
                      }
                    }
                    else {
                      if (uVar72 != 0) {
                        local_4f8 = 0x20;
                        lVar77 = (long)(int)uVar72;
                        goto LAB_00794db7;
                      }
                      if (uVar54 != 0) {
                        local_4f8 = 0x20;
                        lVar77 = 0;
                        goto LAB_00794db7;
                      }
                      if ((iVar32 == 8) && (sVar19 != 0)) {
                        local_44 = L'0';
                        lVar41 = 4;
                        pwVar40 = &local_44;
                      }
                      else {
                        lVar41 = 0;
                        pwVar40 = (wchar_t *)local_40;
                      }
                      local_4f8 = 0x20;
                      uVar38 = 0;
LAB_00795f42:
                      if (sVar21 != 0) goto LAB_007956d0;
                      uVar35 = lVar41 >> 2;
                      uVar72 = (iVar27 - uVar38) - (int)uVar35;
LAB_00794f2c:
                      if ((sVar20 == 0 && !bVar14) && sVar24 == 0) {
                        if (local_4f8 == 0x20) {
                          if (0 < (int)uVar72) goto LAB_00795a14;
                          uVar72 = 0;
                        }
                      }
                      else {
                        uVar72 = uVar72 - 1;
                        if (local_4f8 == 0x20) {
                          if ((int)uVar72 < 1) {
                            uVar72 = 0;
                          }
                          else {
LAB_00795a14:
                            lVar77 = _IO_wpadn(param_1,0x20);
                            if ((int)uVar72 != lVar77) goto LAB_00794cc8;
                            bVar79 = false;
                            uVar28 = uVar28 + uVar72;
                            uVar34 = (ulong)uVar28;
                            if (((int)uVar28 < 0) || (uVar28 < uVar72)) {
                              bVar79 = true;
                            }
                            if (bVar79) goto LAB_00795f10;
                            uVar72 = 0;
                            if ((int)uVar28 < 0) goto LAB_007947d1;
                          }
                        }
                        if (bVar14) {
                          lVar77 = *(long *)(param_1 + 0x28);
                          if ((lVar77 == 0) ||
                             (puVar5 = *(undefined4 **)(lVar77 + 0x20),
                             *(undefined4 **)(lVar77 + 0x28) <= puVar5)) {
                            uVar56 = 0x2d;
LAB_0079665c:
                            iVar27 = __woverflow(param_1,uVar56);
                            if (iVar27 == -1) goto LAB_00794cc8;
                          }
                          else {
                            *(undefined4 **)(lVar77 + 0x20) = puVar5 + 1;
                            *puVar5 = 0x2d;
                          }
                        }
                        else if (sVar24 == 0) {
                          if (sVar20 == 0) goto LAB_00794f93;
                          lVar77 = *(long *)(param_1 + 0x28);
                          if ((lVar77 == 0) ||
                             (puVar5 = *(undefined4 **)(lVar77 + 0x20),
                             *(undefined4 **)(lVar77 + 0x28) <= puVar5)) {
                            uVar56 = 0x20;
                            goto LAB_0079665c;
                          }
                          *(undefined4 **)(lVar77 + 0x20) = puVar5 + 1;
                          *puVar5 = 0x20;
                        }
                        else {
                          lVar77 = *(long *)(param_1 + 0x28);
                          if ((lVar77 == 0) ||
                             (puVar5 = *(undefined4 **)(lVar77 + 0x20),
                             *(undefined4 **)(lVar77 + 0x28) <= puVar5)) {
                            uVar56 = 0x2b;
                            goto LAB_0079665c;
                          }
                          *(undefined4 **)(lVar77 + 0x20) = puVar5 + 1;
                          *puVar5 = 0x2b;
                        }
                        if (uVar28 == 0x7fffffff) goto LAB_00794cc8;
                        uVar28 = uVar28 + 1;
                      }
LAB_00794f93:
                      if (((uVar54 != 0) && (sVar19 != 0)) && ((0x10004UL >> iVar32 & 1) != 0)) {
                        lVar77 = *(long *)(param_1 + 0x28);
                        if (lVar77 == 0) {
LAB_00796287:
                          iVar27 = __woverflow(param_1,0x30);
                          if ((iVar27 == -1) || (uVar28 == 0x7fffffff)) goto LAB_00794cc8;
                          lVar77 = *(long *)(param_1 + 0x28);
                          if (lVar77 != 0) {
                            pwVar45 = *(wchar_t **)(lVar77 + 0x20);
                            pwVar55 = *(wchar_t **)(lVar77 + 0x28);
                            goto LAB_00794ff1;
                          }
LAB_007962cf:
                          wVar30 = __woverflow(param_1,wVar30);
                        }
                        else {
                          pwVar36 = *(wchar_t **)(lVar77 + 0x20);
                          pwVar55 = *(wchar_t **)(lVar77 + 0x28);
                          if (pwVar55 <= pwVar36) goto LAB_00796287;
                          pwVar45 = pwVar36 + 1;
                          *(wchar_t **)(lVar77 + 0x20) = pwVar45;
                          *pwVar36 = L'0';
                          if (uVar28 == 0x7fffffff) goto LAB_00794cc8;
LAB_00794ff1:
                          if (pwVar55 <= pwVar45) goto LAB_007962cf;
                          *(wchar_t **)(lVar77 + 0x20) = pwVar45 + 1;
                          *pwVar45 = wVar30;
                        }
                        if ((wVar30 == L'\xffffffff') || (uVar28 == 0x7ffffffe)) goto LAB_00794cc8;
                        uVar28 = uVar28 + 2;
                      }
                      uVar72 = uVar72 + uVar38;
                      if (0 < (int)uVar72) {
                        lVar77 = _IO_wpadn(param_1,0x30,(long)(int)uVar72);
                        if ((int)uVar72 != lVar77) goto LAB_00794cc8;
                        bVar79 = false;
                        uVar28 = uVar28 + uVar72;
                        uVar34 = (ulong)uVar28;
                        if (((int)uVar28 < 0) || (uVar28 < uVar72)) {
                          bVar79 = true;
                        }
                        if (bVar79) goto LAB_00795f10;
                        if ((int)uVar28 < 0) goto LAB_007947d1;
                      }
                      lVar77 = *(long *)(param_1 + 0x36);
                      if (0x827 < lVar77 - 0x932180U) {
                        _IO_vtable_check();
                      }
                      uVar54 = (**(code **)(lVar77 + 0x38))(param_1,pwVar40,uVar35);
                      if (uVar35 != uVar54) goto LAB_00794cc8;
                      bVar79 = false;
                      uVar54 = (long)(int)uVar28 + uVar35;
                      if (((long)uVar54 < 0) || (uVar54 < uVar35)) {
LAB_00796416:
                        bVar79 = true;
                      }
LAB_00795081:
                      uVar28 = (uint)uVar54;
                      uVar34 = uVar54 & 0xffffffff;
                      if (uVar54 != (long)(int)uVar28) {
                        bVar79 = true;
                      }
                      if (bVar79) goto LAB_00795f10;
joined_r0x0079509c:
                      if ((int)uVar28 < 0) goto LAB_007947d1;
                    }
LAB_00794b20:
                    pwVar48 = pwVar48 + 1;
                    local_4ec = local_4ec + 1;
                    pwVar40 = wcschrnul(pwVar48,L'%');
                    lVar77 = *(long *)(param_1 + 0x36);
                    uVar54 = (long)pwVar40 - (long)pwVar48 >> 2;
                    if (0x827 < lVar77 - 0x932180U) {
                      _IO_vtable_check();
                    }
                    uVar34 = (**(code **)(lVar77 + 0x38))(param_1,pwVar48,uVar54);
                    if (uVar34 == uVar54) {
                      bVar79 = false;
                      uVar35 = (long)(int)uVar28 + uVar54;
                      if (((long)uVar35 < 0) || (uVar35 < uVar54)) {
                        bVar79 = true;
                      }
                      uVar34 = uVar35 & 0xffffffff;
                      if (uVar35 != (long)(int)uVar35) {
                        bVar79 = true;
                      }
                      if (!bVar79) goto code_r0x00794ba5;
                      goto LAB_00795f10;
                    }
                    goto LAB_00794cc8;
                  case L'c':
                    goto code_r0x00794c24;
                  case L'd':
                  case L'i':
                    goto code_r0x00795264;
                  case L'h':
code_r0x00795394:
                    sVar13 = sVar24;
                    sVar12 = sVar23;
                    sVar11 = sVar22;
                    sVar10 = sVar21;
                    local_4f0 = sVar20;
                    local_4f4 = sVar19;
                    local_520 = iVar27;
                    uVar38 = uVar75;
                    bVar69 = false;
                    bVar25 = false;
                    sVar59 = 0;
                    wVar30 = pwVar40[1];
                    pwVar48 = pwVar40 + 1;
                    bVar7 = true;
                    uVar72 = uVar38;
                    uVar76 = uVar38;
                    uVar73 = uVar38;
                    uVar74 = uVar38;
                    iVar27 = local_520;
                    bVar71 = bVar69;
                    bVar70 = bVar69;
                    bVar68 = bVar69;
                    sVar19 = local_4f4;
                    sVar20 = local_4f0;
                    bVar14 = bVar25;
                    sVar21 = sVar10;
                    sVar22 = sVar11;
                    sVar23 = sVar12;
                    sVar24 = sVar13;
                    switch(wVar30) {
                    case L'%':
                      goto code_r0x00795294;
                    case L'B':
                    case L'b':
                      goto code_r0x00794d54;
                    case L'X':
                    case L'x':
                      goto code_r0x007951dc;
                    case L'd':
                    case L'i':
                      goto code_r0x00795264;
                    case L'h':
                      wVar30 = pwVar40[2];
                      pwVar48 = pwVar40 + 2;
                      bVar70 = true;
                      bVar69 = true;
                      bVar68 = true;
                      bVar7 = false;
                      uVar75 = uVar38;
                      bVar79 = bVar6;
                      bVar71 = bVar69;
                      switch(wVar30) {
                      case L'%':
                        goto code_r0x00795294;
                      case L'A':
                      case L'E':
                      case L'F':
                      case L'G':
                      case L'a':
                      case L'e':
                      case L'f':
                      case L'g':
                        goto code_r0x00794910;
                      case L'B':
                      case L'b':
                        goto code_r0x00794d54;
                      case L'C':
                        goto code_r0x00794a9c;
                      case L'S':
                      case L's':
                        goto code_r0x00794bc4;
                      case L'X':
                      case L'x':
                        goto code_r0x007951dc;
                      case L'c':
                        goto code_r0x00794c24;
                      case L'd':
                      case L'i':
                        goto code_r0x00795264;
                      case L'm':
                        goto code_r0x00794cec;
                      case L'n':
                        goto code_r0x007950b4;
                      case L'o':
                        goto code_r0x00795104;
                      case L'p':
                        goto code_r0x00795184;
                      case L'u':
                        goto code_r0x00795174;
                      }
                      break;
                    case L'n':
                      goto code_r0x007950b4;
                    case L'o':
                      goto code_r0x00795104;
                    case L'u':
                      goto code_r0x00795174;
                    }
                    break;
                  case L'l':
code_r0x0079532c:
                    sVar13 = sVar24;
                    sVar12 = sVar23;
                    sVar11 = sVar22;
                    sVar10 = sVar21;
                    local_4f0 = sVar20;
                    local_4f4 = sVar19;
                    local_520 = iVar27;
                    uVar38 = uVar75;
                    bVar69 = false;
                    wVar30 = pwVar40[1];
                    pwVar40 = pwVar40 + 1;
                    bVar14 = true;
                    pwVar48 = pwVar40;
                    uVar72 = uVar38;
                    uVar76 = uVar38;
                    uVar73 = uVar38;
                    uVar74 = uVar38;
                    uVar75 = uVar38;
                    bVar79 = false;
                    bVar7 = bVar8;
                    iVar27 = local_520;
                    bVar71 = bVar69;
                    bVar70 = bVar69;
                    bVar68 = bVar69;
                    sVar59 = 1;
                    sVar19 = local_4f4;
                    sVar20 = local_4f0;
                    bVar25 = true;
                    sVar21 = sVar10;
                    sVar22 = sVar11;
                    sVar23 = sVar12;
                    sVar24 = sVar13;
                    switch(wVar30) {
                    case L'%':
                      goto code_r0x00795294;
                    case L'A':
                    case L'E':
                    case L'F':
                    case L'G':
                    case L'a':
                    case L'e':
                    case L'f':
                    case L'g':
                      goto code_r0x00794910;
                    case L'B':
                    case L'b':
                      goto code_r0x00794d54;
                    case L'C':
                      goto code_r0x00794a9c;
                    case L'S':
                    case L's':
                      goto code_r0x00794bc4;
                    case L'X':
                    case L'x':
                      goto code_r0x007951dc;
                    case L'c':
                      goto code_r0x00794c24;
                    case L'd':
                    case L'i':
                      goto code_r0x00795264;
                    case L'l':
                      goto code_r0x007952f4;
                    case L'm':
                      goto code_r0x00794cec;
                    case L'n':
                      goto code_r0x007950b4;
                    case L'o':
                      goto code_r0x00795104;
                    case L'p':
                      goto code_r0x00795184;
                    case L'u':
                      goto code_r0x00795174;
                    }
                    break;
                  case L'm':
                    goto code_r0x00794cec;
                  case L'n':
                    goto code_r0x007950b4;
                  case L'o':
                    goto code_r0x00795104;
                  case L'p':
                    goto code_r0x00795184;
                  case L'u':
                    goto code_r0x00795174;
                  }
code_r0x00794765:
                  if (wVar30 != L'\0') {
LAB_0079476e:
                    uVar35 = (ulong)local_4c4;
                    goto LAB_00794775;
                  }
                  uVar34 = 0xffffffff;
                  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
                  goto LAB_007947d1;
                }
                local_4c8 = 0;
                local_4ec = 0;
                local_4e0 = (char *)0xffffffffffffffff;
LAB_00794775:
                uVar28 = printf_positional(param_1,param_2,local_4c8,param_3,&local_440,uVar34,
                                           local_4ec,pwVar33,local_428,iVar3,local_4e0,uVar35,
                                           param_4);
                uVar34 = (ulong)uVar28;
              }
            }
            else {
LAB_00795f10:
              uVar34 = 0xffffffff;
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4b;
            }
LAB_007947d1:
            uVar28 = *param_1;
          }
          else {
LAB_00794cc8:
            uVar34 = 0xffffffff;
            uVar28 = *param_1;
          }
          if ((uVar28 & 0x8000) == 0) {
            piVar52 = *(int **)(param_1 + 0x22);
            iVar3 = piVar52[1];
            piVar52[1] = iVar3 + -1;
            if (iVar3 + -1 == 0) {
              piVar52[2] = 0;
              piVar52[3] = 0;
              LOCK();
              iVar3 = *piVar52;
              *piVar52 = 0;
              UNLOCK();
              if (1 < iVar3) {
                __lll_lock_wake_private();
              }
            }
          }
          if (bVar9) {
            __libc_cleanup_pop_restore(&local_468);
          }
          goto LAB_007947e9;
        }
      }
      goto LAB_007963a0;
    }
    uVar34 = 0xffffffff;
    *param_1 = *param_1 | 0x20;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
  }
  else {
LAB_007963a0:
    uVar34 = 0xffffffff;
  }
LAB_007947e9:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar34;
  }
LAB_0079693d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
code_r0x00795468:
  local_520 = local_520 * 10 + uVar39;
  pwVar48 = pwVar40;
  uVar39 = uVar1;
  if (9 < uVar1) goto LAB_00795480;
  goto LAB_00795432;
code_r0x00794ba5:
  if (((int)uVar35 < 0) || (*pwVar40 == L'\0')) goto LAB_007947d1;
  goto LAB_00794750;
}

