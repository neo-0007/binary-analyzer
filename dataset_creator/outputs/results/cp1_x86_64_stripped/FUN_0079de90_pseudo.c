
/* WARNING: Type propagation algorithm not settling */

ulong FUN_0079de90(uint *param_1,long param_2,uint *param_3,uint param_4)

{
  unkbyte10 Var1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
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
  int iVar29;
  int iVar30;
  int *piVar31;
  ulong uVar32;
  ulong uVar33;
  int *piVar34;
  wchar_t *pwVar35;
  ulong uVar36;
  unkbyte10 *pVar37;
  uint uVar38;
  wchar_t *pwVar39;
  long lVar40;
  uint *puVar41;
  uint uVar42;
  undefined8 *puVar43;
  ulong *puVar44;
  uint *puVar45;
  byte *pbVar46;
  uint *puVar47;
  uint *puVar48;
  char *pcVar49;
  ushort *puVar50;
  undefined1 *puVar51;
  short *psVar52;
  ulong uVar53;
  undefined *puVar54;
  undefined8 uVar55;
  short sVar56;
  short sVar58;
  bool bVar59;
  bool bVar67;
  bool bVar68;
  bool bVar69;
  bool bVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar75;
  uint uVar76;
  long lVar77;
  long in_FS_OFFSET;
  bool bVar78;
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
  uint local_480;
  uint local_47c;
  int local_478;
  code *local_468;
  uint *local_460;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined1 local_428 [996];
  wchar_t local_44;
  long local_40 [2];
  short sVar57;
  bool bVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  uint uVar74;
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)(in_FS_OFFSET + -0x58);
  iVar27 = FUN_00701c30(param_1,1);
  if (iVar27 == 1) {
    if ((*param_1 & 8) == 0) {
      if (param_2 == 0) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      }
      else {
        iVar27 = FUN_00701c30(param_1,1);
        if (iVar27 == 1) {
          uVar28 = *param_1;
          if ((uVar28 & 2) != 0) {
            if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
              uVar53 = FUN_007a02d0(param_1,param_2,param_3,param_4);
              return uVar53;
            }
            goto LAB_007a026d;
          }
          local_440 = *(undefined8 *)param_3;
          uStack_438 = *(undefined8 *)(param_3 + 2);
          local_430 = *(undefined8 *)(param_3 + 4);
          piVar31 = (int *)FUN_007a97c0(param_2,0x25);
          bVar8 = false;
          local_460 = param_1;
          if ((uVar28 & 0x8000) == 0) {
            local_468 = FUN_00795710;
            FUN_00709520(&local_468);
            if ((*param_1 & 0x8000) == 0) {
              piVar34 = *(int **)(param_1 + 0x22);
              lVar77 = *(long *)(in_FS_OFFSET + 0x10);
              if (*(long *)(piVar34 + 2) != lVar77) {
                LOCK();
                iVar27 = *piVar34;
                if (iVar27 == 0) {
                  *piVar34 = 1;
                }
                UNLOCK();
                if (iVar27 != 0) {
                  FUN_00709590();
                }
                piVar34 = *(int **)(param_1 + 0x22);
                *(long *)(piVar34 + 2) = lVar77;
              }
              piVar34[1] = piVar34[1] + 1;
              bVar8 = true;
            }
            else {
              bVar8 = true;
            }
          }
          lVar77 = *(long *)(param_1 + 0x36);
          uVar53 = (long)piVar31 - param_2 >> 2;
          if (0x827 < lVar77 - 0x93f160U) {
            FUN_00703130();
          }
          uVar32 = (**(code **)(lVar77 + 0x38))(param_1,param_2,uVar53);
          if (uVar53 == uVar32) {
            uVar32 = uVar53 & 0xffffffff;
            uVar33 = uVar53 >> 0x3f;
            if (uVar53 != (long)(int)uVar53) {
              uVar33 = 1;
            }
            if ((int)uVar33 == 0) {
              if ((-1 < (int)uVar53) && (*piVar31 != 0)) {
                if ((DAT_0094b478 == 0) && ((DAT_0094b488 == 0 && (DAT_0094b5e0 == 0)))) {
                  local_4c8 = 0;
                  local_4ec = 0;
                  local_4c4 = 0;
                  local_4e0 = (char *)0xffffffffffffffff;
                  piVar34 = piVar31;
LAB_0079e080:
                  uVar72 = (uint)uVar32;
                  uVar28 = piVar34[1];
                  if (0x5a < uVar28 - 0x20) goto code_r0x0079e095;
                  bVar64 = false;
                  bVar66 = false;
                  bVar60 = false;
                  bVar62 = false;
                  bVar63 = false;
                  bVar65 = false;
                  bVar59 = false;
                  bVar61 = false;
                  bVar15 = false;
                  sVar56 = 0;
                  bVar17 = false;
                  bVar14 = false;
                  sVar57 = 0;
                  bVar16 = false;
                  bVar5 = false;
                  puVar48 = (uint *)(piVar34 + 1);
                  bVar6 = false;
                  bVar7 = false;
                  uVar75 = 0xffffffff;
                  uVar74 = 0xffffffff;
                  uVar73 = 0xffffffff;
                  uVar76 = 0xffffffff;
                  uVar42 = 0xffffffff;
                  uVar71 = 0xffffffff;
                  sVar23 = 0;
                  sVar11 = 0;
                  iVar27 = 0;
                  local_520 = 0;
                  sVar22 = 0;
                  sVar10 = 0;
                  sVar24 = 0;
                  sVar12 = 0;
                  sVar21 = 0;
                  sVar9 = 0;
                  sVar20 = 0;
                  local_4f0 = 0;
                  sVar19 = 0;
                  local_4f4 = 0;
                  local_4f8 = 0x20;
                  puVar47 = puVar48;
                  bVar78 = false;
                  bVar68 = bVar66;
                  bVar70 = bVar60;
                  bVar69 = bVar64;
                  bVar67 = bVar62;
                  sVar58 = sVar56;
                  bVar25 = bVar17;
                  bVar13 = bVar15;
                  switch(uVar28) {
                  case 0x20:
code_r0x0079eb5c:
                    sVar12 = sVar24;
                    sVar11 = sVar23;
                    sVar10 = sVar22;
                    sVar9 = sVar21;
                    local_4f4 = sVar19;
                    uVar28 = puVar48[1];
                    puVar48 = puVar48 + 1;
                    sVar20 = 1;
                    local_4f0 = 1;
                    puVar47 = puVar48;
                    bVar78 = bVar5;
                    bVar6 = bVar7;
                    bVar68 = bVar65;
                    bVar70 = bVar59;
                    bVar69 = bVar63;
                    bVar67 = bVar61;
                    sVar58 = sVar57;
                    sVar19 = local_4f4;
                    bVar25 = bVar16;
                    bVar13 = bVar14;
                    sVar21 = sVar9;
                    sVar22 = sVar10;
                    sVar23 = sVar11;
                    sVar24 = sVar12;
                    switch(uVar28) {
                    case 0x20:
                      goto code_r0x0079eb5c;
                    default:
                      break;
                    case 0x23:
code_r0x0079eef4:
                      sVar12 = sVar24;
                      sVar11 = sVar23;
                      sVar10 = sVar22;
                      sVar9 = sVar21;
                      local_4f0 = sVar20;
                      uVar28 = puVar48[1];
                      puVar48 = puVar48 + 1;
                      sVar19 = 1;
                      local_4f4 = 1;
                      puVar47 = puVar48;
                      bVar78 = bVar5;
                      bVar6 = bVar7;
                      bVar68 = bVar65;
                      bVar70 = bVar59;
                      bVar69 = bVar63;
                      bVar67 = bVar61;
                      sVar58 = sVar57;
                      sVar20 = local_4f0;
                      bVar25 = bVar16;
                      bVar13 = bVar14;
                      sVar21 = sVar9;
                      sVar22 = sVar10;
                      sVar23 = sVar11;
                      sVar24 = sVar12;
                      switch(uVar28) {
                      case 0x20:
                        goto code_r0x0079eb5c;
                      default:
                        break;
                      case 0x23:
                        goto code_r0x0079eef4;
                      case 0x25:
                        goto code_r0x0079ebc4;
                      case 0x27:
code_r0x0079ee64:
                        sVar12 = sVar24;
                        sVar11 = sVar23;
                        sVar9 = sVar21;
                        local_4f0 = sVar20;
                        local_4f4 = sVar19;
                        if (local_4e0 == (char *)0xffffffffffffffff) {
                          local_4e0 = *(char **)(**(long **)(in_FS_OFFSET + -0xc0) + 0x50);
                          local_4c4 = *(uint *)(**(long **)(in_FS_OFFSET + -0xc0) + 0x60);
                          if ((*local_4e0 == '\x7f' || *local_4e0 == '\0') || (local_4c4 == 0)) {
                            local_4e0 = (char *)0x0;
                          }
                        }
                        uVar28 = puVar48[1];
                        puVar48 = puVar48 + 1;
                        sVar22 = 1;
                        sVar10 = 1;
                        puVar47 = puVar48;
                        bVar78 = bVar5;
                        bVar6 = bVar7;
                        bVar68 = bVar65;
                        bVar70 = bVar59;
                        bVar69 = bVar63;
                        bVar67 = bVar61;
                        sVar58 = sVar57;
                        sVar19 = local_4f4;
                        sVar20 = local_4f0;
                        bVar25 = bVar16;
                        bVar13 = bVar14;
                        sVar21 = sVar9;
                        sVar23 = sVar11;
                        sVar24 = sVar12;
                        switch(uVar28) {
                        case 0x20:
                          goto code_r0x0079eb5c;
                        default:
                          break;
                        case 0x23:
                          goto code_r0x0079eef4;
                        case 0x25:
                          goto code_r0x0079ebc4;
                        case 0x27:
                          goto code_r0x0079ee64;
                        case 0x2a:
                          goto code_r0x0079eddc;
                        case 0x2b:
code_r0x0079eb24:
                          sVar11 = sVar23;
                          sVar10 = sVar22;
                          sVar9 = sVar21;
                          local_4f0 = sVar20;
                          local_4f4 = sVar19;
                          uVar28 = puVar48[1];
                          puVar48 = puVar48 + 1;
                          sVar24 = 1;
                          sVar12 = 1;
                          puVar47 = puVar48;
                          bVar78 = bVar5;
                          bVar6 = bVar7;
                          bVar68 = bVar65;
                          bVar70 = bVar59;
                          bVar69 = bVar63;
                          bVar67 = bVar61;
                          sVar58 = sVar57;
                          sVar19 = local_4f4;
                          sVar20 = local_4f0;
                          bVar25 = bVar16;
                          bVar13 = bVar14;
                          sVar21 = sVar9;
                          sVar22 = sVar10;
                          sVar23 = sVar11;
                          switch(uVar28) {
                          case 0x20:
                            goto code_r0x0079eb5c;
                          default:
                            break;
                          case 0x23:
                            goto code_r0x0079eef4;
                          case 0x25:
                            goto code_r0x0079ebc4;
                          case 0x27:
                            goto code_r0x0079ee64;
                          case 0x2a:
                            goto code_r0x0079eddc;
                          case 0x2b:
                            goto code_r0x0079eb24;
                          case 0x2d:
code_r0x0079ef2c:
                            sVar12 = sVar24;
                            sVar11 = sVar23;
                            sVar10 = sVar22;
                            local_4f0 = sVar20;
                            local_4f4 = sVar19;
                            uVar28 = puVar48[1];
                            puVar48 = puVar48 + 1;
                            sVar21 = 1;
                            sVar9 = 1;
                            local_4f8 = 0x20;
                            puVar47 = puVar48;
                            bVar78 = bVar5;
                            bVar6 = bVar7;
                            bVar68 = bVar65;
                            bVar70 = bVar59;
                            bVar69 = bVar63;
                            bVar67 = bVar61;
                            sVar58 = sVar57;
                            sVar19 = local_4f4;
                            sVar20 = local_4f0;
                            bVar25 = bVar16;
                            bVar13 = bVar14;
                            sVar22 = sVar10;
                            sVar23 = sVar11;
                            sVar24 = sVar12;
                            switch(uVar28) {
                            case 0x20:
                              goto code_r0x0079eb5c;
                            default:
                              break;
                            case 0x23:
                              goto code_r0x0079eef4;
                            case 0x25:
                              goto code_r0x0079ebc4;
                            case 0x27:
                              goto code_r0x0079ee64;
                            case 0x2a:
                              goto code_r0x0079eddc;
                            case 0x2b:
                              goto code_r0x0079eb24;
                            case 0x2d:
                              goto code_r0x0079ef2c;
                            case 0x2e:
                              goto code_r0x0079ecfc;
                            case 0x30:
code_r0x0079eeac:
                              sVar12 = sVar24;
                              sVar11 = sVar23;
                              sVar10 = sVar22;
                              sVar9 = sVar21;
                              local_4f0 = sVar20;
                              local_4f4 = sVar19;
                              uVar28 = puVar48[1];
                              puVar48 = puVar48 + 1;
                              iVar30 = 0x30;
                              if (sVar9 != 0) {
                                iVar30 = local_4f8;
                              }
                              puVar47 = puVar48;
                              local_4f8 = iVar30;
                              bVar78 = bVar5;
                              bVar6 = bVar7;
                              bVar68 = bVar65;
                              bVar70 = bVar59;
                              bVar69 = bVar63;
                              bVar67 = bVar61;
                              sVar58 = sVar57;
                              sVar19 = local_4f4;
                              sVar20 = local_4f0;
                              bVar25 = bVar16;
                              bVar13 = bVar14;
                              sVar21 = sVar9;
                              sVar22 = sVar10;
                              sVar23 = sVar11;
                              sVar24 = sVar12;
                              switch(uVar28) {
                              case 0x20:
                                goto code_r0x0079eb5c;
                              default:
                                break;
                              case 0x23:
                                goto code_r0x0079eef4;
                              case 0x25:
                                goto code_r0x0079ebc4;
                              case 0x27:
                                goto code_r0x0079ee64;
                              case 0x2a:
                                goto code_r0x0079eddc;
                              case 0x2b:
                                goto code_r0x0079eb24;
                              case 0x2d:
                                goto code_r0x0079ef2c;
                              case 0x2e:
                                goto code_r0x0079ecfc;
                              case 0x30:
                                goto code_r0x0079eeac;
                              case 0x31:
                              case 0x32:
                              case 0x33:
                              case 0x34:
                              case 0x35:
                              case 0x36:
                              case 0x37:
                              case 0x38:
                              case 0x39:
                                goto code_r0x0079ed44;
                              case 0x41:
                              case 0x45:
                              case 0x46:
                              case 0x47:
                              case 0x61:
                              case 0x65:
                              case 0x66:
                              case 0x67:
                                goto code_r0x0079e240;
                              case 0x42:
                              case 0x62:
                                goto code_r0x0079e684;
                              case 0x43:
                                goto code_r0x0079e3cc;
                              case 0x49:
code_r0x0079ef6c:
                                sVar12 = sVar24;
                                sVar10 = sVar22;
                                sVar9 = sVar21;
                                local_4f0 = sVar20;
                                local_4f4 = sVar19;
                                uVar28 = puVar48[1];
                                puVar48 = puVar48 + 1;
                                sVar23 = 1;
                                sVar11 = 1;
                                puVar47 = puVar48;
                                bVar78 = bVar5;
                                bVar6 = bVar7;
                                bVar68 = bVar66;
                                bVar70 = bVar60;
                                bVar69 = bVar64;
                                bVar67 = bVar62;
                                sVar58 = sVar56;
                                sVar19 = local_4f4;
                                sVar20 = local_4f0;
                                bVar25 = bVar17;
                                bVar13 = bVar15;
                                sVar21 = sVar9;
                                sVar22 = sVar10;
                                sVar24 = sVar12;
                                switch(uVar28) {
                                case 0x20:
                                  goto code_r0x0079eb5c;
                                default:
                                  break;
                                case 0x23:
                                  goto code_r0x0079eef4;
                                case 0x25:
                                  goto code_r0x0079ebc4;
                                case 0x27:
                                  goto code_r0x0079ee64;
                                case 0x2a:
                                  goto code_r0x0079eddc;
                                case 0x2b:
                                  goto code_r0x0079eb24;
                                case 0x2d:
                                  goto code_r0x0079ef2c;
                                case 0x2e:
                                  goto code_r0x0079ecfc;
                                case 0x30:
                                  goto code_r0x0079eeac;
                                case 0x31:
                                case 0x32:
                                case 0x33:
                                case 0x34:
                                case 0x35:
                                case 0x36:
                                case 0x37:
                                case 0x38:
                                case 0x39:
                                  goto code_r0x0079ed44;
                                case 0x41:
                                case 0x45:
                                case 0x46:
                                case 0x47:
                                case 0x61:
                                case 0x65:
                                case 0x66:
                                case 0x67:
                                  goto code_r0x0079e240;
                                case 0x42:
                                case 0x62:
                                  goto code_r0x0079e684;
                                case 0x43:
                                  goto code_r0x0079e3cc;
                                case 0x49:
                                  goto code_r0x0079ef6c;
                                case 0x4c:
                                case 0x71:
                                  goto code_r0x0079ec24;
                                case 0x53:
                                case 0x73:
                                  goto code_r0x0079e4f4;
                                case 0x58:
                                case 0x78:
                                  goto code_r0x0079eb0c;
                                case 0x5a:
                                case 0x7a:
                                  goto code_r0x0079ec14;
                                case 99:
                                  goto code_r0x0079e554;
                                case 100:
                                case 0x69:
                                  goto code_r0x0079eb94;
                                case 0x68:
                                  goto code_r0x0079ecc4;
                                case 0x6a:
                                case 0x74:
                                  goto code_r0x0079e208;
                                case 0x6c:
                                  goto code_r0x0079ec5c;
                                case 0x6d:
                                  goto code_r0x0079e61c;
                                case 0x6e:
                                  goto code_r0x0079e9e4;
                                case 0x6f:
                                  goto code_r0x0079ea34;
                                case 0x70:
                                  goto code_r0x0079eab4;
                                case 0x75:
                                  goto code_r0x0079eaa4;
                                }
                              case 0x4c:
                              case 0x71:
                                goto code_r0x0079ec24;
                              case 0x53:
                              case 0x73:
                                goto code_r0x0079e4f4;
                              case 0x58:
                              case 0x78:
                                goto code_r0x0079eb0c;
                              case 0x5a:
                              case 0x7a:
                                goto code_r0x0079ec14;
                              case 99:
                                goto code_r0x0079e554;
                              case 100:
                              case 0x69:
                                goto code_r0x0079eb94;
                              case 0x68:
                                goto code_r0x0079ecc4;
                              case 0x6a:
                              case 0x74:
                                goto code_r0x0079e208;
                              case 0x6c:
                                goto code_r0x0079ec5c;
                              case 0x6d:
                                goto code_r0x0079e61c;
                              case 0x6e:
                                goto code_r0x0079e9e4;
                              case 0x6f:
                                goto code_r0x0079ea34;
                              case 0x70:
                                goto code_r0x0079eab4;
                              case 0x75:
                                goto code_r0x0079eaa4;
                              }
                            case 0x31:
                            case 0x32:
                            case 0x33:
                            case 0x34:
                            case 0x35:
                            case 0x36:
                            case 0x37:
                            case 0x38:
                            case 0x39:
                              goto code_r0x0079ed44;
                            case 0x41:
                            case 0x45:
                            case 0x46:
                            case 0x47:
                            case 0x61:
                            case 0x65:
                            case 0x66:
                            case 0x67:
                              goto code_r0x0079e240;
                            case 0x42:
                            case 0x62:
                              goto code_r0x0079e684;
                            case 0x43:
                              goto code_r0x0079e3cc;
                            case 0x49:
                              goto code_r0x0079ef6c;
                            case 0x4c:
                            case 0x71:
                              goto code_r0x0079ec24;
                            case 0x53:
                            case 0x73:
                              goto code_r0x0079e4f4;
                            case 0x58:
                            case 0x78:
                              goto code_r0x0079eb0c;
                            case 0x5a:
                            case 0x7a:
                              goto code_r0x0079ec14;
                            case 99:
                              goto code_r0x0079e554;
                            case 100:
                            case 0x69:
                              goto code_r0x0079eb94;
                            case 0x68:
                              goto code_r0x0079ecc4;
                            case 0x6a:
                            case 0x74:
                              goto code_r0x0079e208;
                            case 0x6c:
                              goto code_r0x0079ec5c;
                            case 0x6d:
                              goto code_r0x0079e61c;
                            case 0x6e:
                              goto code_r0x0079e9e4;
                            case 0x6f:
                              goto code_r0x0079ea34;
                            case 0x70:
                              goto code_r0x0079eab4;
                            case 0x75:
                              goto code_r0x0079eaa4;
                            }
                          case 0x2e:
                            goto code_r0x0079ecfc;
                          case 0x30:
                            goto code_r0x0079eeac;
                          case 0x31:
                          case 0x32:
                          case 0x33:
                          case 0x34:
                          case 0x35:
                          case 0x36:
                          case 0x37:
                          case 0x38:
                          case 0x39:
                            goto code_r0x0079ed44;
                          case 0x41:
                          case 0x45:
                          case 0x46:
                          case 0x47:
                          case 0x61:
                          case 0x65:
                          case 0x66:
                          case 0x67:
                            goto code_r0x0079e240;
                          case 0x42:
                          case 0x62:
                            goto code_r0x0079e684;
                          case 0x43:
                            goto code_r0x0079e3cc;
                          case 0x49:
                            goto code_r0x0079ef6c;
                          case 0x4c:
                          case 0x71:
                            goto code_r0x0079ec24;
                          case 0x53:
                          case 0x73:
                            goto code_r0x0079e4f4;
                          case 0x58:
                          case 0x78:
                            goto code_r0x0079eb0c;
                          case 0x5a:
                          case 0x7a:
                            goto code_r0x0079ec14;
                          case 99:
                            goto code_r0x0079e554;
                          case 100:
                          case 0x69:
                            goto code_r0x0079eb94;
                          case 0x68:
                            goto code_r0x0079ecc4;
                          case 0x6a:
                          case 0x74:
                            goto code_r0x0079e208;
                          case 0x6c:
                            goto code_r0x0079ec5c;
                          case 0x6d:
                            goto code_r0x0079e61c;
                          case 0x6e:
                            goto code_r0x0079e9e4;
                          case 0x6f:
                            goto code_r0x0079ea34;
                          case 0x70:
                            goto code_r0x0079eab4;
                          case 0x75:
                            goto code_r0x0079eaa4;
                          }
                        case 0x2d:
                          goto code_r0x0079ef2c;
                        case 0x2e:
                          goto code_r0x0079ecfc;
                        case 0x30:
                          goto code_r0x0079eeac;
                        case 0x31:
                        case 0x32:
                        case 0x33:
                        case 0x34:
                        case 0x35:
                        case 0x36:
                        case 0x37:
                        case 0x38:
                        case 0x39:
                          goto code_r0x0079ed44;
                        case 0x41:
                        case 0x45:
                        case 0x46:
                        case 0x47:
                        case 0x61:
                        case 0x65:
                        case 0x66:
                        case 0x67:
                          goto code_r0x0079e240;
                        case 0x42:
                        case 0x62:
                          goto code_r0x0079e684;
                        case 0x43:
                          goto code_r0x0079e3cc;
                        case 0x49:
                          goto code_r0x0079ef6c;
                        case 0x4c:
                        case 0x71:
                          goto code_r0x0079ec24;
                        case 0x53:
                        case 0x73:
                          goto code_r0x0079e4f4;
                        case 0x58:
                        case 0x78:
                          goto code_r0x0079eb0c;
                        case 0x5a:
                        case 0x7a:
                          goto code_r0x0079ec14;
                        case 99:
                          goto code_r0x0079e554;
                        case 100:
                        case 0x69:
                          goto code_r0x0079eb94;
                        case 0x68:
                          goto code_r0x0079ecc4;
                        case 0x6a:
                        case 0x74:
                          goto code_r0x0079e208;
                        case 0x6c:
                          goto code_r0x0079ec5c;
                        case 0x6d:
                          goto code_r0x0079e61c;
                        case 0x6e:
                          goto code_r0x0079e9e4;
                        case 0x6f:
                          goto code_r0x0079ea34;
                        case 0x70:
                          goto code_r0x0079eab4;
                        case 0x75:
                          goto code_r0x0079eaa4;
                        }
                      case 0x2a:
                        goto code_r0x0079eddc;
                      case 0x2b:
                        goto code_r0x0079eb24;
                      case 0x2d:
                        goto code_r0x0079ef2c;
                      case 0x2e:
                        goto code_r0x0079ecfc;
                      case 0x30:
                        goto code_r0x0079eeac;
                      case 0x31:
                      case 0x32:
                      case 0x33:
                      case 0x34:
                      case 0x35:
                      case 0x36:
                      case 0x37:
                      case 0x38:
                      case 0x39:
                        goto code_r0x0079ed44;
                      case 0x41:
                      case 0x45:
                      case 0x46:
                      case 0x47:
                      case 0x61:
                      case 0x65:
                      case 0x66:
                      case 0x67:
                        goto code_r0x0079e240;
                      case 0x42:
                      case 0x62:
                        goto code_r0x0079e684;
                      case 0x43:
                        goto code_r0x0079e3cc;
                      case 0x49:
                        goto code_r0x0079ef6c;
                      case 0x4c:
                      case 0x71:
                        goto code_r0x0079ec24;
                      case 0x53:
                      case 0x73:
                        goto code_r0x0079e4f4;
                      case 0x58:
                      case 0x78:
                        goto code_r0x0079eb0c;
                      case 0x5a:
                      case 0x7a:
                        goto code_r0x0079ec14;
                      case 99:
                        goto code_r0x0079e554;
                      case 100:
                      case 0x69:
                        goto code_r0x0079eb94;
                      case 0x68:
                        goto code_r0x0079ecc4;
                      case 0x6a:
                      case 0x74:
                        goto code_r0x0079e208;
                      case 0x6c:
                        goto code_r0x0079ec5c;
                      case 0x6d:
                        goto code_r0x0079e61c;
                      case 0x6e:
                        goto code_r0x0079e9e4;
                      case 0x6f:
                        goto code_r0x0079ea34;
                      case 0x70:
                        goto code_r0x0079eab4;
                      case 0x75:
                        goto code_r0x0079eaa4;
                      }
                    case 0x25:
                      goto code_r0x0079ebc4;
                    case 0x27:
                      goto code_r0x0079ee64;
                    case 0x2a:
                      goto code_r0x0079eddc;
                    case 0x2b:
                      goto code_r0x0079eb24;
                    case 0x2d:
                      goto code_r0x0079ef2c;
                    case 0x2e:
                      goto code_r0x0079ecfc;
                    case 0x30:
                      goto code_r0x0079eeac;
                    case 0x31:
                    case 0x32:
                    case 0x33:
                    case 0x34:
                    case 0x35:
                    case 0x36:
                    case 0x37:
                    case 0x38:
                    case 0x39:
                      goto code_r0x0079ed44;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                      goto code_r0x0079e240;
                    case 0x42:
                    case 0x62:
                      goto code_r0x0079e684;
                    case 0x43:
                      goto code_r0x0079e3cc;
                    case 0x49:
                      goto code_r0x0079ef6c;
                    case 0x4c:
                    case 0x71:
                      goto code_r0x0079ec24;
                    case 0x53:
                    case 0x73:
                      goto code_r0x0079e4f4;
                    case 0x58:
                    case 0x78:
                      goto code_r0x0079eb0c;
                    case 0x5a:
                    case 0x7a:
                      goto code_r0x0079ec14;
                    case 99:
                      goto code_r0x0079e554;
                    case 100:
                    case 0x69:
                      goto code_r0x0079eb94;
                    case 0x68:
                      goto code_r0x0079ecc4;
                    case 0x6a:
                    case 0x74:
                      goto code_r0x0079e208;
                    case 0x6c:
                      goto code_r0x0079ec5c;
                    case 0x6d:
                      goto code_r0x0079e61c;
                    case 0x6e:
                      goto code_r0x0079e9e4;
                    case 0x6f:
                      goto code_r0x0079ea34;
                    case 0x70:
                      goto code_r0x0079eab4;
                    case 0x75:
                      goto code_r0x0079eaa4;
                    }
                  case 0x23:
                    goto code_r0x0079eef4;
                  case 0x25:
                    goto code_r0x0079ebc4;
                  case 0x27:
                    goto code_r0x0079ee64;
                  case 0x2a:
code_r0x0079eddc:
                    sVar12 = sVar24;
                    sVar11 = sVar23;
                    sVar10 = sVar22;
                    local_4f0 = sVar20;
                    local_4f4 = sVar19;
                    uVar28 = puVar47[1];
                    puVar48 = puVar47 + 1;
                    uVar38 = uVar28 - 0x30;
                    if (uVar38 < 10) {
                      uVar3 = puVar47[2];
                      puVar41 = puVar47 + 2;
                      uVar18 = uVar3 - 0x30;
                      while (uVar18 < 10) {
                        uVar3 = puVar41[1];
                        if ((0xccccccc < (int)uVar38) ||
                           ((int)(0x7fffffff - uVar18) < (int)(uVar38 * 10))) {
                          if ((uVar3 - 0x30 < 10) &&
                             ((puVar41[2] - 0x30 < 10 && (puVar41[3] - 0x30 < 10)))) {
                            puVar41 = puVar41 + 4;
                            do {
                              uVar28 = *puVar41;
                              puVar41 = puVar41 + 1;
                            } while (uVar28 - 0x30 < 10);
                          }
                          goto LAB_0079f840;
                        }
                        uVar38 = uVar38 * 10 + uVar18;
                        puVar41 = puVar41 + 1;
                        uVar18 = uVar3 - 0x30;
                      }
                      if ((uVar3 == 0x24) && (uVar38 != 0)) goto LAB_0079e09e;
                    }
                    bVar68 = false;
                    bVar13 = false;
                    uVar38 = *param_3;
                    if (uVar38 < 0x30) {
                      piVar34 = (int *)((ulong)uVar38 + *(long *)(param_3 + 4));
                      *param_3 = uVar38 + 8;
                      uVar28 = puVar47[1];
                    }
                    else {
                      piVar34 = *(int **)(param_3 + 2);
                      *(int **)(param_3 + 2) = piVar34 + 2;
                    }
                    local_520 = *piVar34;
                    sVar9 = sVar21;
                    if (local_520 < 0) {
                      local_520 = -local_520;
                      sVar9 = 1;
                      local_4f8 = 0x20;
                    }
                    puVar47 = puVar48;
                    bVar78 = bVar5;
                    bVar6 = bVar7;
                    iVar27 = local_520;
                    bVar70 = bVar68;
                    bVar69 = bVar68;
                    bVar67 = bVar68;
                    sVar58 = 0;
                    sVar19 = local_4f4;
                    sVar20 = local_4f0;
                    bVar25 = false;
                    sVar21 = sVar9;
                    sVar22 = sVar10;
                    sVar23 = sVar11;
                    sVar24 = sVar12;
                    switch(uVar28) {
                    case 0x25:
                      goto code_r0x0079ebc4;
                    case 0x2e:
                      goto code_r0x0079ecfc;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                      goto code_r0x0079e240;
                    case 0x42:
                    case 0x62:
                      goto code_r0x0079e684;
                    case 0x43:
                      goto code_r0x0079e3cc;
                    case 0x4c:
                    case 0x71:
                      goto code_r0x0079ec24;
                    case 0x53:
                    case 0x73:
                      goto code_r0x0079e4f4;
                    case 0x58:
                    case 0x78:
                      goto code_r0x0079eb0c;
                    case 0x5a:
                    case 0x7a:
                      goto code_r0x0079ec14;
                    case 99:
                      goto code_r0x0079e554;
                    case 100:
                    case 0x69:
                      goto code_r0x0079eb94;
                    case 0x68:
                      goto code_r0x0079ecc4;
                    case 0x6a:
                    case 0x74:
                      goto code_r0x0079e208;
                    case 0x6c:
                      goto code_r0x0079ec5c;
                    case 0x6d:
                      goto code_r0x0079e61c;
                    case 0x6e:
                      goto code_r0x0079e9e4;
                    case 0x6f:
                      goto code_r0x0079ea34;
                    case 0x70:
                      goto code_r0x0079eab4;
                    case 0x75:
                      goto code_r0x0079eaa4;
                    }
                    break;
                  case 0x2b:
                    goto code_r0x0079eb24;
                  case 0x2d:
                    goto code_r0x0079ef2c;
                  case 0x2e:
code_r0x0079ecfc:
                    sVar12 = sVar24;
                    sVar11 = sVar23;
                    sVar10 = sVar22;
                    sVar9 = sVar21;
                    local_4f0 = sVar20;
                    local_4f4 = sVar19;
                    local_520 = iVar27;
                    bVar68 = false;
                    bVar25 = false;
                    if (puVar48[1] == 0x2a) {
                      puVar47 = puVar48 + 2;
                      uVar28 = puVar48[2] - 0x30;
                      if (uVar28 < 10) {
                        uVar42 = puVar48[3];
                        puVar48 = puVar48 + 3;
                        uVar71 = uVar42 - 0x30;
                        while (uVar71 < 10) {
                          uVar42 = puVar48[1];
                          if ((0xccccccc < (int)uVar28) ||
                             ((int)(0x7fffffff - uVar71) < (int)(uVar28 * 10))) {
                            if ((uVar42 - 0x30 < 10) &&
                               ((puVar48[2] - 0x30 < 10 && (puVar48[3] - 0x30 < 10)))) {
                              puVar48 = puVar48 + 4;
                              do {
                                uVar28 = *puVar48;
                                puVar48 = puVar48 + 1;
                              } while (uVar28 - 0x30 < 10);
                            }
                            goto LAB_0079f840;
                          }
                          uVar28 = uVar28 * 10 + uVar71;
                          puVar48 = puVar48 + 1;
                          uVar71 = uVar42 - 0x30;
                        }
                        if ((uVar28 != 0) && (uVar42 == 0x24)) goto LAB_0079e09e;
                      }
                      uVar28 = *param_3;
                      if (uVar28 < 0x30) {
                        puVar41 = (uint *)((ulong)uVar28 + *(long *)(param_3 + 4));
                        *param_3 = uVar28 + 8;
                      }
                      else {
                        puVar41 = *(uint **)(param_3 + 2);
                        *(uint **)(param_3 + 2) = puVar41 + 2;
                      }
                      uVar28 = *puVar47;
                      puVar48 = puVar47;
                      uVar71 = 0xffffffff;
                      if (-1 < (int)*puVar41) {
                        uVar71 = *puVar41;
                      }
                    }
                    else {
                      uVar71 = puVar48[1] - 0x30;
                      if (uVar71 < 10) {
                        uVar28 = puVar48[2];
                        puVar48 = puVar48 + 2;
                        uVar42 = uVar28 - 0x30;
                        while (uVar42 < 10) {
                          uVar28 = puVar48[1];
                          if ((0xccccccc < (int)uVar71) ||
                             ((int)(0x7fffffff - uVar42) < (int)(uVar71 * 10))) {
                            if ((uVar28 - 0x30 < 10) &&
                               ((puVar48[2] - 0x30 < 10 && (puVar48[3] - 0x30 < 10)))) {
                              puVar48 = puVar48 + 4;
                              do {
                                uVar28 = *puVar48;
                                puVar48 = puVar48 + 1;
                              } while (uVar28 - 0x30 < 10);
                            }
                            goto LAB_0079f840;
                          }
                          uVar71 = uVar71 * 10 + uVar42;
                          puVar48 = puVar48 + 1;
                          uVar42 = uVar28 - 0x30;
                        }
                      }
                      else {
                        uVar28 = puVar48[1];
                        puVar48 = puVar48 + 1;
                        uVar71 = 0;
                      }
                    }
                    puVar47 = puVar48;
                    uVar42 = uVar71;
                    uVar76 = uVar71;
                    uVar73 = uVar71;
                    uVar74 = uVar71;
                    uVar75 = uVar71;
                    bVar78 = bVar5;
                    bVar6 = bVar7;
                    iVar27 = local_520;
                    bVar70 = bVar68;
                    bVar69 = bVar68;
                    bVar67 = bVar68;
                    sVar58 = 0;
                    sVar19 = local_4f4;
                    sVar20 = local_4f0;
                    bVar13 = bVar25;
                    sVar21 = sVar9;
                    sVar22 = sVar10;
                    sVar23 = sVar11;
                    sVar24 = sVar12;
                    switch(uVar28) {
                    case 0x25:
                      goto code_r0x0079ebc4;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                      goto code_r0x0079e240;
                    case 0x42:
                    case 0x62:
                      goto code_r0x0079e684;
                    case 0x43:
                      goto code_r0x0079e3cc;
                    case 0x4c:
                    case 0x71:
                      goto code_r0x0079ec24;
                    case 0x53:
                    case 0x73:
                      goto code_r0x0079e4f4;
                    case 0x58:
                    case 0x78:
                      goto code_r0x0079eb0c;
                    case 0x5a:
                    case 0x7a:
                      goto code_r0x0079ec14;
                    case 99:
                      goto code_r0x0079e554;
                    case 100:
                    case 0x69:
                      goto code_r0x0079eb94;
                    case 0x68:
                      goto code_r0x0079ecc4;
                    case 0x6a:
                    case 0x74:
                      goto code_r0x0079e208;
                    case 0x6c:
                      goto code_r0x0079ec5c;
                    case 0x6d:
                      goto code_r0x0079e61c;
                    case 0x6e:
                      goto code_r0x0079e9e4;
                    case 0x6f:
                      goto code_r0x0079ea34;
                    case 0x70:
                      goto code_r0x0079eab4;
                    case 0x75:
                      goto code_r0x0079eaa4;
                    }
                    break;
                  case 0x30:
                    goto code_r0x0079eeac;
                  case 0x31:
                  case 0x32:
                  case 0x33:
                  case 0x34:
                  case 0x35:
                  case 0x36:
                  case 0x37:
                  case 0x38:
                  case 0x39:
code_r0x0079ed44:
                    sVar12 = sVar24;
                    sVar11 = sVar23;
                    sVar10 = sVar22;
                    sVar9 = sVar21;
                    local_4f0 = sVar20;
                    local_4f4 = sVar19;
                    uVar38 = *puVar48;
                    uVar28 = puVar48[1];
                    puVar48 = puVar48 + 1;
                    local_520 = uVar38 - 0x30;
                    puVar47 = puVar48;
                    uVar38 = uVar28 - 0x30;
                    if (uVar28 - 0x30 < 10) {
LAB_0079ed62:
                      uVar28 = puVar47[1];
                      puVar48 = puVar47 + 1;
                      uVar3 = uVar28 - 0x30;
                      if (local_520 < 0) goto joined_r0x007a00fe;
                      if ((local_520 < 0xccccccd) && (local_520 * 10 <= (int)(0x7fffffff - uVar38)))
                      goto code_r0x0079ed98;
                      if (((uVar3 < 10) && (puVar47[2] - 0x30 < 10)) &&
                         (puVar48 = puVar47 + 3, puVar47[3] - 0x30 < 10)) {
                        local_520 = -1;
                        do {
                          puVar48 = puVar48 + 1;
                          uVar28 = *puVar48;
                          uVar3 = uVar28 - 0x30;
joined_r0x007a00fe:
                        } while (uVar3 < 10);
                        goto LAB_007a0110;
                      }
                      goto LAB_0079f840;
                    }
LAB_007a0110:
                    if (local_520 != -1) {
LAB_0079edb0:
                      if (uVar28 != 0x24) {
                        puVar47 = puVar48;
                        bVar78 = bVar5;
                        bVar6 = bVar7;
                        iVar27 = local_520;
                        bVar68 = bVar66;
                        bVar70 = bVar60;
                        bVar69 = bVar64;
                        bVar67 = bVar62;
                        sVar58 = sVar56;
                        sVar19 = local_4f4;
                        sVar20 = local_4f0;
                        bVar25 = bVar17;
                        bVar13 = bVar15;
                        sVar21 = sVar9;
                        sVar22 = sVar10;
                        sVar23 = sVar11;
                        sVar24 = sVar12;
                        switch(uVar28) {
                        case 0x25:
                          goto code_r0x0079ebc4;
                        case 0x2e:
                          goto code_r0x0079ecfc;
                        case 0x41:
                        case 0x45:
                        case 0x46:
                        case 0x47:
                        case 0x61:
                        case 0x65:
                        case 0x66:
                        case 0x67:
                          goto code_r0x0079e240;
                        case 0x42:
                        case 0x62:
                          goto code_r0x0079e684;
                        case 0x43:
                          goto code_r0x0079e3cc;
                        case 0x4c:
                        case 0x71:
                          goto code_r0x0079ec24;
                        case 0x53:
                        case 0x73:
                          goto code_r0x0079e4f4;
                        case 0x58:
                        case 0x78:
                          goto code_r0x0079eb0c;
                        case 0x5a:
                        case 0x7a:
                          goto code_r0x0079ec14;
                        case 99:
                          goto code_r0x0079e554;
                        case 100:
                        case 0x69:
                          goto code_r0x0079eb94;
                        case 0x68:
                          goto code_r0x0079ecc4;
                        case 0x6a:
                        case 0x74:
                          goto code_r0x0079e208;
                        case 0x6c:
                          goto code_r0x0079ec5c;
                        case 0x6d:
                          goto code_r0x0079e61c;
                        case 0x6e:
                          goto code_r0x0079e9e4;
                        case 0x6f:
                          goto code_r0x0079ea34;
                        case 0x70:
                          goto code_r0x0079eab4;
                        case 0x75:
                          goto code_r0x0079eaa4;
                        }
                        break;
                      }
                      goto LAB_0079e09e;
                    }
                    goto LAB_0079f840;
                  case 0x41:
                  case 0x45:
                  case 0x46:
                  case 0x47:
                  case 0x61:
                  case 0x65:
                  case 0x66:
                  case 0x67:
                    goto code_r0x0079e240;
                  case 0x42:
                  case 0x62:
                    goto code_r0x0079e684;
                  case 0x43:
                    goto code_r0x0079e3cc;
                  case 0x49:
                    goto code_r0x0079ef6c;
                  case 0x4c:
                  case 0x71:
code_r0x0079ec24:
                    sVar12 = sVar24;
                    sVar11 = sVar23;
                    sVar10 = sVar22;
                    sVar9 = sVar21;
                    local_4f0 = sVar20;
                    local_4f4 = sVar19;
                    local_520 = iVar27;
                    uVar71 = uVar75;
                    bVar68 = false;
                    uVar28 = puVar48[1];
                    puVar47 = puVar48 + 1;
                    bVar13 = true;
                    uVar42 = uVar71;
                    uVar76 = uVar71;
                    uVar73 = uVar71;
                    uVar74 = uVar71;
                    uVar75 = uVar71;
                    bVar78 = true;
                    bVar6 = bVar7;
                    iVar27 = local_520;
                    bVar70 = bVar68;
                    bVar69 = bVar68;
                    bVar67 = bVar68;
                    sVar58 = 1;
                    sVar19 = local_4f4;
                    sVar20 = local_4f0;
                    bVar25 = true;
                    sVar21 = sVar9;
                    sVar22 = sVar10;
                    sVar23 = sVar11;
                    sVar24 = sVar12;
                    switch(uVar28) {
                    case 0x25:
                      goto code_r0x0079ebc4;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                      goto code_r0x0079e240;
                    case 0x42:
                    case 0x62:
                      goto code_r0x0079e684;
                    case 0x43:
                      goto code_r0x0079e3cc;
                    case 0x53:
                    case 0x73:
                      goto code_r0x0079e4f4;
                    case 0x58:
                    case 0x78:
                      goto code_r0x0079eb0c;
                    case 99:
                      goto code_r0x0079e554;
                    case 100:
                    case 0x69:
                      goto code_r0x0079eb94;
                    case 0x6d:
                      goto code_r0x0079e61c;
                    case 0x6e:
                      goto code_r0x0079e9e4;
                    case 0x6f:
                      goto code_r0x0079ea34;
                    case 0x70:
                      goto code_r0x0079eab4;
                    case 0x75:
                      goto code_r0x0079eaa4;
                    }
                    break;
                  case 0x53:
                  case 0x73:
                    goto code_r0x0079e4f4;
                  case 0x58:
                  case 0x78:
                    goto code_r0x0079eb0c;
                  case 0x5a:
                  case 0x7a:
code_r0x0079ec14:
                  case 0x6a:
                  case 0x74:
code_r0x0079e208:
                    sVar12 = sVar24;
                    sVar11 = sVar23;
                    sVar10 = sVar22;
                    sVar9 = sVar21;
                    local_4f0 = sVar20;
                    local_4f4 = sVar19;
                    local_520 = iVar27;
                    uVar71 = uVar75;
                    bVar68 = false;
                    uVar28 = puVar48[1];
                    puVar47 = puVar48 + 1;
                    bVar13 = true;
                    uVar42 = uVar71;
                    uVar76 = uVar71;
                    uVar73 = uVar71;
                    uVar74 = uVar71;
                    uVar75 = uVar71;
                    bVar78 = false;
                    bVar6 = bVar7;
                    iVar27 = local_520;
                    bVar70 = bVar68;
                    bVar69 = bVar68;
                    bVar67 = bVar68;
                    sVar58 = 1;
                    sVar19 = local_4f4;
                    sVar20 = local_4f0;
                    bVar25 = true;
                    sVar21 = sVar9;
                    sVar22 = sVar10;
                    sVar23 = sVar11;
                    sVar24 = sVar12;
                    switch(uVar28) {
                    default:
                      goto code_r0x0079e095;
                    case 0x25:
code_r0x0079ebc4:
                      lVar77 = *(long *)(param_1 + 0x28);
                      if ((lVar77 == 0) ||
                         (puVar4 = *(undefined4 **)(lVar77 + 0x20),
                         *(undefined4 **)(lVar77 + 0x28) <= puVar4)) {
                        iVar27 = FUN_006ff380(param_1,0x25);
                        if (iVar27 == -1) goto LAB_0079e5f8;
                      }
                      else {
                        *(undefined4 **)(lVar77 + 0x20) = puVar4 + 1;
                        *puVar4 = 0x25;
                      }
                      if (uVar72 != 0x7fffffff) {
                        uVar72 = uVar72 + 1;
                        goto LAB_0079e450;
                      }
                      goto LAB_0079e5f8;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
code_r0x0079e240:
                      if ((param_4 & 1) != 0) {
                        bVar78 = false;
                      }
                      local_484 = local_520;
                      uVar26 = CONCAT11(4,bVar78) | sVar58 * 4 | local_4f4 << 3 | local_4f0 << 4 |
                               sVar9 << 5 | sVar12 << 6 | sVar10 << 7 | sVar11 << 0xb;
                      local_47c = (uint)uVar26;
                      local_478 = local_4f8;
                      if (bVar78) {
                        if ((param_4 & 8) == 0) {
                          pVar37 = (unkbyte10 *)(*(long *)(param_3 + 2) + 0xfU & 0xfffffffffffffff0)
                          ;
                          *(unkbyte10 **)(param_3 + 2) = pVar37 + 1;
                          Var1 = *pVar37;
                          local_498 = (undefined8)Var1;
                          uStack_490 = (undefined2)((unkuint10)Var1 >> 0x40);
                        }
                        else {
                          local_47c = uVar26 | 0x1000;
                          uVar42 = param_3[1];
                          if (uVar42 < 0xb0) {
                            puVar43 = (undefined8 *)((ulong)uVar42 + *(long *)(param_3 + 4));
                            param_3[1] = uVar42 + 0x10;
                          }
                          else {
                            puVar43 = (undefined8 *)
                                      (*(long *)(param_3 + 2) + 0xfU & 0xfffffffffffffff0);
                            *(undefined8 **)(param_3 + 2) = puVar43 + 2;
                          }
                          local_498 = *puVar43;
                          uStack_490 = (undefined2)puVar43[1];
                          uStack_48e = (undefined6)((ulong)puVar43[1] >> 0x10);
                        }
                      }
                      else {
                        uVar42 = param_3[1];
                        if (uVar42 < 0xb0) {
                          puVar43 = (undefined8 *)((ulong)uVar42 + *(long *)(param_3 + 4));
                          param_3[1] = uVar42 + 0x10;
                        }
                        else {
                          puVar43 = *(undefined8 **)(param_3 + 2);
                          *(undefined8 **)(param_3 + 2) = puVar43 + 1;
                        }
                        local_498 = *puVar43;
                      }
                      local_4a0 = &local_498;
                      local_488 = uVar71;
                      local_480 = uVar28;
                      if ((uVar28 & 0xffffffdf) == 0x41) {
                        uVar28 = FUN_007bdd60();
                      }
                      else {
                        uVar28 = FUN_007bdb10(param_1,&local_488,&local_4a0);
                      }
                      if (-1 < (int)uVar28) {
                        bVar78 = false;
                        uVar72 = uVar72 + uVar28;
                        if (((int)uVar72 < 0) || (uVar72 < uVar28)) {
                          bVar78 = true;
                        }
                        goto joined_r0x0079f159;
                      }
                      goto LAB_0079e5f8;
                    case 0x42:
                    case 0x62:
code_r0x0079e684:
                      uVar76 = uVar74;
                      iVar30 = 2;
                      bVar68 = bVar69;
                      goto LAB_0079e68a;
                    case 0x43:
code_r0x0079e3cc:
                      uVar28 = local_520 - 1;
                      if ((sVar21 == 0) && (0 < (int)uVar28)) {
                        lVar77 = FUN_007a2150(param_1,0x20,(long)(int)uVar28);
                        if ((int)uVar28 != lVar77) goto LAB_0079e5f8;
                        uVar72 = uVar72 + uVar28;
                        uVar32 = (ulong)uVar72;
                        if (((int)uVar72 < 0) || (uVar72 < uVar28)) goto LAB_0079f840;
                        if ((int)uVar72 < 0) goto LAB_0079e101;
                      }
                      uVar42 = *param_3;
                      if (uVar42 < 0x30) {
                        piVar34 = (int *)((ulong)uVar42 + *(long *)(param_3 + 4));
                        *param_3 = uVar42 + 8;
                      }
                      else {
                        piVar34 = *(int **)(param_3 + 2);
                        *(int **)(param_3 + 2) = piVar34 + 2;
                      }
                      lVar77 = *(long *)(param_1 + 0x28);
                      iVar27 = *piVar34;
                      if (lVar77 == 0) goto LAB_0079e5e0;
LAB_0079e40f:
                      piVar34 = *(int **)(lVar77 + 0x20);
                      if (*(int **)(lVar77 + 0x28) <= piVar34) goto LAB_0079e5e0;
                      *(int **)(lVar77 + 0x20) = piVar34 + 1;
                      *piVar34 = iVar27;
                      goto joined_r0x0079e5eb;
                    case 0x53:
                    case 0x73:
code_r0x0079e4f4:
                      uVar42 = *param_3;
                      if (uVar42 < 0x30) {
                        puVar43 = (undefined8 *)((ulong)uVar42 + *(long *)(param_3 + 4));
                        *param_3 = uVar42 + 8;
                      }
                      else {
                        puVar43 = *(undefined8 **)(param_3 + 2);
                        *(undefined8 **)(param_3 + 2) = puVar43 + 1;
                      }
                      puVar54 = (undefined *)*puVar43;
                      bVar25 = (bool)(bVar25 ^ 1);
                      uVar42 = uVar75;
                      if (puVar54 == (undefined *)0x0) {
                        if ((uVar75 == 0xffffffff) || (5 < (int)uVar75)) {
                          uVar53 = 6;
                          puVar54 = &DAT_0083f140;
                        }
                        else {
                          uVar53 = 0;
                          puVar54 = &DAT_0081da5c;
                        }
                      }
                      else {
LAB_0079e642:
                        if ((uVar28 != 0x53) && (bVar25)) {
                          uVar72 = FUN_0079b040(param_1,puVar54,uVar42,iVar27,sVar21);
                          uVar32 = (ulong)uVar72;
                          if (-1 < (int)uVar72) goto LAB_0079e450;
                          goto LAB_0079e101;
                        }
                        if (uVar42 != 0xffffffff) goto LAB_0079f74a;
                        uVar53 = thunk_FUN_007564d0(puVar54);
                      }
LAB_0079f758:
                      uVar28 = iVar27 - (int)uVar53;
                      if ((int)uVar28 < 0) {
                        lVar77 = *(long *)(param_1 + 0x36);
                        if (0x827 < lVar77 - 0x93f160U) {
                          FUN_00703130();
                        }
                        uVar32 = (**(code **)(lVar77 + 0x38))(param_1,puVar54,uVar53);
                        if (uVar32 == uVar53) {
                          bVar78 = false;
                          uVar33 = (long)(int)uVar72 + uVar53;
                          if (((long)uVar33 < 0) || (uVar33 < uVar53)) goto LAB_0079fd46;
                          goto LAB_0079e9b1;
                        }
                        goto LAB_0079e5f8;
                      }
                      if ((sVar21 == 0) && (uVar28 != 0)) {
                        lVar77 = FUN_007a2150(param_1,0x20);
                        if ((int)uVar28 != lVar77) goto LAB_0079e5f8;
                        uVar72 = uVar72 + uVar28;
                        uVar32 = (ulong)uVar72;
                        if (((int)uVar72 < 0) || (uVar72 < uVar28)) goto LAB_0079f840;
                        if ((int)uVar72 < 0) goto LAB_0079e101;
                      }
                      lVar77 = *(long *)(param_1 + 0x36);
                      if (0x827 < lVar77 - 0x93f160U) {
                        FUN_00703130();
                      }
                      uVar32 = (**(code **)(lVar77 + 0x38))(param_1,puVar54,uVar53);
                      if (uVar32 != uVar53) goto LAB_0079e5f8;
                      bVar78 = false;
                      uVar33 = (long)(int)uVar72 + uVar53;
                      if (((long)uVar33 < 0) || (uVar33 < uVar53)) {
                        bVar78 = true;
                      }
                      uVar72 = (uint)uVar33;
                      uVar32 = uVar33 & 0xffffffff;
                      if (uVar33 != (long)(int)uVar72) {
                        bVar78 = true;
                      }
                      if (bVar78) goto LAB_0079f840;
                      if (-1 < (int)uVar72) {
                        if ((sVar21 == 0) || (uVar28 == 0)) goto LAB_0079e450;
                        goto LAB_0079f13a;
                      }
                      goto LAB_0079e101;
                    case 0x58:
                    case 0x78:
code_r0x0079eb0c:
                      uVar76 = uVar73;
                      iVar30 = 0x10;
                      bVar68 = bVar69;
                      goto LAB_0079e68a;
                    case 99:
code_r0x0079e554:
                      if (bVar25) goto code_r0x0079e3cc;
                      uVar28 = local_520 - 1;
                      if ((sVar21 == 0) && (0 < (int)uVar28)) {
                        lVar77 = FUN_007a2150(param_1,0x20,(long)(int)uVar28);
                        if ((int)uVar28 != lVar77) goto LAB_0079e5f8;
                        uVar72 = uVar72 + uVar28;
                        uVar32 = (ulong)uVar72;
                        if (((int)uVar72 < 0) || (uVar72 < uVar28)) goto LAB_0079f840;
                        if ((int)uVar72 < 0) goto LAB_0079e101;
                      }
                      uVar42 = *param_3;
                      if (uVar42 < 0x30) {
                        puVar51 = (undefined1 *)((ulong)uVar42 + *(long *)(param_3 + 4));
                        *param_3 = uVar42 + 8;
                      }
                      else {
                        puVar51 = *(undefined1 **)(param_3 + 2);
                        *(undefined1 **)(param_3 + 2) = puVar51 + 8;
                      }
                      iVar27 = FUN_00756690(*puVar51);
                      lVar77 = *(long *)(param_1 + 0x28);
                      if (lVar77 != 0) goto LAB_0079e40f;
LAB_0079e5e0:
                      iVar27 = FUN_006ff380(param_1);
joined_r0x0079e5eb:
                      if ((iVar27 != -1) && (uVar72 != 0x7fffffff)) {
                        uVar72 = uVar72 + 1;
                        if ((sVar21 == 0) || ((int)uVar28 < 1)) goto LAB_0079e450;
                        lVar77 = FUN_007a2150(param_1,0x20,(long)(int)uVar28);
                        if ((int)uVar28 == lVar77) {
                          bVar78 = false;
                          uVar72 = uVar72 + uVar28;
                          if (((int)uVar72 < 0) || (uVar72 < uVar28)) {
                            bVar78 = true;
                          }
                          goto joined_r0x0079f159;
                        }
                      }
                      goto LAB_0079e5f8;
                    case 100:
                    case 0x69:
code_r0x0079eb94:
                      if (bVar13) {
                        uVar71 = *param_3;
                        if (uVar71 < 0x30) {
                          puVar44 = (ulong *)((ulong)uVar71 + *(long *)(param_3 + 4));
                          *param_3 = uVar71 + 8;
                        }
                        else {
                          puVar44 = *(ulong **)(param_3 + 2);
                          *(ulong **)(param_3 + 2) = puVar44 + 1;
                        }
                        uVar53 = *puVar44;
                      }
                      else {
                        uVar71 = *param_3;
                        if (bVar70) {
                          if (uVar71 < 0x30) {
                            pcVar49 = (char *)((ulong)uVar71 + *(long *)(param_3 + 4));
                            *param_3 = uVar71 + 8;
                          }
                          else {
                            pcVar49 = *(char **)(param_3 + 2);
                            *(char **)(param_3 + 2) = pcVar49 + 8;
                          }
                          uVar53 = (ulong)*pcVar49;
                        }
                        else if (bVar6) {
                          if (uVar71 < 0x30) {
                            psVar52 = (short *)((ulong)uVar71 + *(long *)(param_3 + 4));
                            *param_3 = uVar71 + 8;
                          }
                          else {
                            psVar52 = *(short **)(param_3 + 2);
                            *(short **)(param_3 + 2) = psVar52 + 4;
                          }
                          uVar53 = (ulong)*psVar52;
                        }
                        else {
                          if (uVar71 < 0x30) {
                            piVar34 = (int *)((ulong)uVar71 + *(long *)(param_3 + 4));
                            *param_3 = uVar71 + 8;
                          }
                          else {
                            piVar34 = *(int **)(param_3 + 2);
                            *(int **)(param_3 + 2) = piVar34 + 2;
                          }
                          uVar53 = (ulong)*piVar34;
                        }
                      }
                      if ((long)uVar53 < 0) {
                        uVar53 = -uVar53;
                        bVar13 = true;
                        iVar30 = 10;
                      }
                      else {
                        bVar13 = false;
                        iVar30 = 10;
                      }
                      break;
                    case 0x6d:
code_r0x0079e61c:
                      if (sVar19 == 0) {
                        puVar54 = (undefined *)FUN_00712950(iVar2,local_428,1000);
                      }
                      else {
                        puVar54 = (undefined *)FUN_007a0570(iVar2);
                      }
                      bVar25 = true;
                      uVar42 = uVar75;
                      if (puVar54 != (undefined *)0x0) goto LAB_0079e642;
                      uVar53 = (ulong)iVar2;
                      bVar13 = false;
                      iVar30 = 10;
                      if (iVar2 < 0) {
                        uVar53 = -uVar53;
                        bVar13 = true;
                      }
                      break;
                    case 0x6e:
code_r0x0079e9e4:
                      if (((param_4 & 2) != 0) && (local_4c8 == 0)) {
                        lVar77 = thunk_FUN_007564d0(param_2);
                        local_4c8 = FUN_007ac950(param_2,lVar77 * 4 + 4);
                        if (local_4c8 < 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00703110("*** %n in writable segment detected ***\n");
                        }
                      }
                      uVar28 = *param_3;
                      if (uVar28 < 0x30) {
                        puVar43 = (undefined8 *)((ulong)uVar28 + *(long *)(param_3 + 4));
                        *param_3 = uVar28 + 8;
                      }
                      else {
                        puVar43 = *(undefined8 **)(param_3 + 2);
                        *(undefined8 **)(param_3 + 2) = puVar43 + 1;
                      }
                      puVar48 = (uint *)*puVar43;
                      if (bVar13) {
                        *(long *)puVar48 = (long)(int)uVar72;
                      }
                      else if (bVar67) {
                        *(char *)puVar48 = (char)uVar32;
                      }
                      else if (bVar6) {
                        *(short *)puVar48 = (short)uVar32;
                      }
                      else {
                        *puVar48 = uVar72;
                      }
                      goto LAB_0079e450;
                    case 0x6f:
code_r0x0079ea34:
                      iVar30 = 8;
                      uVar71 = *param_3;
                      if (bVar13) goto LAB_0079e69a;
                      goto LAB_0079ea4a;
                    case 0x70:
code_r0x0079eab4:
                      uVar28 = *param_3;
                      if (uVar28 < 0x30) {
                        puVar44 = (ulong *)((ulong)uVar28 + *(long *)(param_3 + 4));
                        *param_3 = uVar28 + 8;
                      }
                      else {
                        puVar44 = *(ulong **)(param_3 + 2);
                        *(ulong **)(param_3 + 2) = puVar44 + 1;
                      }
                      uVar53 = *puVar44;
                      if (uVar53 == 0) {
                        puVar54 = &DAT_0083f094;
                        if ((int)uVar42 < 5) {
                          uVar42 = 5;
                        }
LAB_0079f74a:
                        uVar53 = FUN_00401110(puVar54,(long)(int)uVar42);
                        goto LAB_0079f758;
                      }
                      bVar13 = false;
                      uVar28 = 0x78;
                      iVar30 = 0x10;
                      sVar22 = 0;
                      sVar19 = 1;
                      break;
                    case 0x75:
code_r0x0079eaa4:
                      uVar76 = uVar73;
                      iVar30 = 10;
                      bVar68 = bVar69;
LAB_0079e68a:
                      uVar71 = *param_3;
                      if (bVar13) {
LAB_0079e69a:
                        if (uVar71 < 0x30) {
                          puVar44 = (ulong *)((ulong)uVar71 + *(long *)(param_3 + 4));
                          *param_3 = uVar71 + 8;
                        }
                        else {
                          puVar44 = *(ulong **)(param_3 + 2);
                          *(ulong **)(param_3 + 2) = puVar44 + 1;
                        }
                        uVar53 = *puVar44;
                        sVar24 = 0;
                        bVar13 = false;
                        sVar20 = 0;
                        uVar42 = uVar76;
                      }
                      else {
LAB_0079ea4a:
                        uVar42 = uVar76;
                        if (bVar68) {
                          if (uVar71 < 0x30) {
                            pbVar46 = (byte *)((ulong)uVar71 + *(long *)(param_3 + 4));
                            *param_3 = uVar71 + 8;
                          }
                          else {
                            pbVar46 = *(byte **)(param_3 + 2);
                            *(byte **)(param_3 + 2) = pbVar46 + 8;
                          }
                          uVar53 = (ulong)*pbVar46;
                          sVar24 = 0;
                          sVar20 = 0;
                        }
                        else if (bVar6) {
                          if (uVar71 < 0x30) {
                            puVar50 = (ushort *)((ulong)uVar71 + *(long *)(param_3 + 4));
                            *param_3 = uVar71 + 8;
                          }
                          else {
                            puVar50 = *(ushort **)(param_3 + 2);
                            *(ushort **)(param_3 + 2) = puVar50 + 4;
                          }
                          uVar53 = (ulong)*puVar50;
                          sVar24 = 0;
                          bVar13 = false;
                          sVar20 = 0;
                        }
                        else {
                          if (uVar71 < 0x30) {
                            puVar48 = (uint *)((ulong)uVar71 + *(long *)(param_3 + 4));
                            *param_3 = uVar71 + 8;
                          }
                          else {
                            puVar48 = *(uint **)(param_3 + 2);
                            *(uint **)(param_3 + 2) = puVar48 + 2;
                          }
                          uVar53 = (ulong)*puVar48;
                          sVar24 = 0;
                          bVar13 = false;
                          sVar20 = 0;
                        }
                      }
                    }
                    if (uVar42 == 0xffffffff) {
                      lVar77 = 1;
LAB_0079e6e7:
                      pwVar39 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                      if (uVar28 != 0x58) {
                        pwVar39 = (wchar_t *)&DAT_00842120;
                      }
                      if (iVar30 == 10) {
                        pwVar35 = (wchar_t *)local_40;
                        uVar32 = uVar53;
                        do {
                          pwVar35 = pwVar35 + -1;
                          *pwVar35 = pwVar39[uVar32 % 10];
                          bVar78 = 9 < uVar32;
                          uVar32 = uVar32 / 10;
                        } while (bVar78);
                        if ((local_4e0 != (char *)0x0) && (sVar22 != 0)) goto LAB_0079e765;
LAB_0079e7b2:
                        if ((iVar30 == 10) && (sVar23 != 0)) {
                          pwVar35 = (wchar_t *)FUN_0079ae50(pwVar35,local_40,local_40);
                        }
                      }
                      else {
                        if (iVar30 == 0x10) {
                          pwVar35 = (wchar_t *)local_40;
                          uVar32 = uVar53;
                          do {
                            pwVar35 = pwVar35 + -1;
                            *pwVar35 = pwVar39[(uint)uVar32 & 0xf];
                            bVar78 = 0xf < uVar32;
                            uVar32 = uVar32 >> 4;
                          } while (bVar78);
                        }
                        else if (iVar30 == 8) {
                          pwVar35 = (wchar_t *)local_40;
                          uVar32 = uVar53;
                          do {
                            pwVar35 = pwVar35 + -1;
                            *pwVar35 = pwVar39[(uint)uVar32 & 7];
                            bVar78 = 7 < uVar32;
                            uVar32 = uVar32 >> 3;
                          } while (bVar78);
                        }
                        else {
                          pwVar35 = (wchar_t *)local_40;
                          uVar33 = (ulong)iVar30;
                          uVar32 = uVar53;
                          do {
                            pwVar35 = pwVar35 + -1;
                            *pwVar35 = pwVar39[uVar32 % uVar33];
                            bVar78 = uVar33 <= uVar32;
                            uVar32 = uVar32 / uVar33;
                          } while (bVar78);
                        }
                        if ((local_4e0 != (char *)0x0) && (sVar22 != 0)) {
LAB_0079e765:
                          pwVar35 = (wchar_t *)
                                    FUN_0079ad70(local_428,pwVar35,local_40,local_4e0,local_4c4);
                          goto LAB_0079e7b2;
                        }
                      }
                      lVar40 = (long)local_40 - (long)pwVar35;
                      uVar36 = lVar40 >> 2;
                      pwVar39 = pwVar35;
                      if ((long)uVar36 < lVar77) {
                        lVar77 = lVar77 - uVar36;
                        if (lVar77 < 0) {
                          lVar77 = 0;
                        }
                        uVar42 = (uint)lVar77;
                        if (sVar21 == 0) {
                          uVar71 = (iVar27 - (int)uVar36) - uVar42;
                          if (uVar53 != 0) {
LAB_0079e83f:
                            if ((sVar19 != 0) && ((0x10004UL >> (sbyte)iVar30 & 1) != 0)) {
                              uVar71 = uVar71 - 2;
                            }
                          }
                          goto LAB_0079e85c;
                        }
                      }
                      else {
                        if (uVar53 == 0) {
                          lVar77 = lVar77 - uVar36;
                          if (lVar77 < 0) {
                            lVar77 = 0;
                          }
                          uVar42 = (uint)lVar77;
                          goto LAB_0079f872;
                        }
                        if ((iVar30 == 8) && (sVar19 != 0)) {
                          pwVar39 = pwVar35 + -1;
                          pwVar35[-1] = L'0';
                          lVar40 = (long)local_40 - (long)pwVar39;
                        }
                        uVar36 = lVar40 >> 2;
                        lVar77 = lVar77 - uVar36;
                        if (lVar77 < 0) {
                          lVar77 = 0;
                        }
                        uVar42 = (uint)lVar77;
                        if (sVar21 == 0) {
                          uVar71 = (iVar27 - (int)uVar36) - uVar42;
                          goto LAB_0079e83f;
                        }
                      }
LAB_0079f000:
                      if (bVar13) {
                        lVar77 = *(long *)(param_1 + 0x28);
                        if ((lVar77 == 0) ||
                           (puVar4 = *(undefined4 **)(lVar77 + 0x20),
                           *(undefined4 **)(lVar77 + 0x28) <= puVar4)) {
                          uVar55 = 0x2d;
LAB_0079ff4e:
                          iVar29 = FUN_006ff380(param_1,uVar55);
                          if (iVar29 == -1) goto LAB_0079e5f8;
                        }
                        else {
                          *(undefined4 **)(lVar77 + 0x20) = puVar4 + 1;
                          *puVar4 = 0x2d;
                        }
LAB_0079f036:
                        if (uVar72 == 0x7fffffff) goto LAB_0079e5f8;
                        iVar27 = iVar27 + -1;
                        uVar72 = uVar72 + 1;
                      }
                      else {
                        if (sVar24 != 0) {
                          lVar77 = *(long *)(param_1 + 0x28);
                          if ((lVar77 == 0) ||
                             (puVar4 = *(undefined4 **)(lVar77 + 0x20),
                             *(undefined4 **)(lVar77 + 0x28) <= puVar4)) {
                            uVar55 = 0x2b;
                            goto LAB_0079ff4e;
                          }
                          *(undefined4 **)(lVar77 + 0x20) = puVar4 + 1;
                          *puVar4 = 0x2b;
                          goto LAB_0079f036;
                        }
                        if (sVar20 != 0) {
                          lVar77 = *(long *)(param_1 + 0x28);
                          if ((lVar77 == 0) ||
                             (puVar4 = *(undefined4 **)(lVar77 + 0x20),
                             *(undefined4 **)(lVar77 + 0x28) <= puVar4)) {
                            uVar55 = 0x20;
                            goto LAB_0079ff4e;
                          }
                          *(undefined4 **)(lVar77 + 0x20) = puVar4 + 1;
                          *puVar4 = 0x20;
                          goto LAB_0079f036;
                        }
                      }
                      if (((uVar53 != 0) && (sVar19 != 0)) && ((0x10004UL >> iVar30 & 1) != 0)) {
                        lVar77 = *(long *)(param_1 + 0x28);
                        if (lVar77 == 0) {
LAB_007a0179:
                          iVar30 = FUN_006ff380(param_1,0x30);
                          if ((iVar30 == -1) || (uVar72 == 0x7fffffff)) goto LAB_0079e5f8;
                          lVar77 = *(long *)(param_1 + 0x28);
                          if (lVar77 != 0) {
                            puVar45 = *(uint **)(lVar77 + 0x20);
                            puVar41 = *(uint **)(lVar77 + 0x28);
                            goto LAB_0079f6dc;
                          }
LAB_007a01c1:
                          uVar28 = FUN_006ff380(param_1,uVar28);
                        }
                        else {
                          puVar48 = *(uint **)(lVar77 + 0x20);
                          puVar41 = *(uint **)(lVar77 + 0x28);
                          if (puVar41 <= puVar48) goto LAB_007a0179;
                          puVar45 = puVar48 + 1;
                          *(uint **)(lVar77 + 0x20) = puVar45;
                          *puVar48 = 0x30;
                          if (uVar72 == 0x7fffffff) goto LAB_0079e5f8;
LAB_0079f6dc:
                          if (puVar41 <= puVar45) goto LAB_007a01c1;
                          *(uint **)(lVar77 + 0x20) = puVar45 + 1;
                          *puVar45 = uVar28;
                        }
                        if ((uVar28 == 0xffffffff) || (uVar72 == 0x7ffffffe)) goto LAB_0079e5f8;
                        iVar27 = iVar27 + -2;
                        uVar72 = uVar72 + 2;
                      }
                      uVar53 = lVar40 >> 2;
                      uVar28 = iVar27 - (uVar42 + (int)uVar53);
                      if (0 < (int)uVar42) {
                        lVar77 = FUN_007a2150(param_1,0x30);
                        if ((int)uVar42 != lVar77) goto LAB_0079e5f8;
                        bVar78 = false;
                        uVar72 = uVar72 + uVar42;
                        uVar32 = (ulong)uVar72;
                        if (((int)uVar72 < 0) || (uVar72 < uVar42)) {
                          bVar78 = true;
                        }
                        if (bVar78) goto LAB_0079f840;
                        if ((int)uVar72 < 0) goto LAB_0079e101;
                      }
                      lVar77 = *(long *)(param_1 + 0x36);
                      if (0x827 < lVar77 - 0x93f160U) {
                        FUN_00703130();
                      }
                      uVar32 = (**(code **)(lVar77 + 0x38))(param_1,pwVar39,uVar53);
                      if (uVar32 != uVar53) goto LAB_0079e5f8;
                      bVar78 = false;
                      uVar33 = (long)(int)uVar72 + uVar53;
                      if (((long)uVar33 < 0) || (uVar33 < uVar53)) {
                        bVar78 = true;
                      }
                      uVar72 = (uint)uVar33;
                      uVar32 = uVar33 & 0xffffffff;
                      if (uVar33 != (long)(int)uVar72) {
                        bVar78 = true;
                      }
                      if (bVar78) goto LAB_0079f840;
                      if ((int)uVar72 < 0) goto LAB_0079e101;
                      if (0 < (int)uVar28) {
LAB_0079f13a:
                        lVar77 = FUN_007a2150(param_1,0x20,(long)(int)uVar28);
                        if ((int)uVar28 == lVar77) {
                          bVar78 = SCARRY4(uVar28,uVar72);
                          uVar72 = uVar28 + uVar72;
joined_r0x0079f159:
                          if (!bVar78) {
                            uVar32 = (ulong)uVar72;
                            goto joined_r0x0079e9cc;
                          }
                          goto LAB_0079f840;
                        }
                        goto LAB_0079e5f8;
                      }
                    }
                    else {
                      if (uVar42 != 0) {
                        local_4f8 = 0x20;
                        lVar77 = (long)(int)uVar42;
                        goto LAB_0079e6e7;
                      }
                      if (uVar53 != 0) {
                        local_4f8 = 0x20;
                        lVar77 = 0;
                        goto LAB_0079e6e7;
                      }
                      if ((iVar30 == 8) && (sVar19 != 0)) {
                        local_44 = L'0';
                        lVar40 = 4;
                        pwVar39 = &local_44;
                      }
                      else {
                        lVar40 = 0;
                        pwVar39 = (wchar_t *)local_40;
                      }
                      local_4f8 = 0x20;
                      uVar42 = 0;
LAB_0079f872:
                      if (sVar21 != 0) goto LAB_0079f000;
                      uVar36 = lVar40 >> 2;
                      uVar71 = (iVar27 - uVar42) - (int)uVar36;
LAB_0079e85c:
                      if ((sVar20 == 0 && !bVar13) && sVar24 == 0) {
                        if (local_4f8 == 0x20) {
                          if (0 < (int)uVar71) goto LAB_0079f344;
                          uVar71 = 0;
                        }
                      }
                      else {
                        uVar71 = uVar71 - 1;
                        if (local_4f8 == 0x20) {
                          if ((int)uVar71 < 1) {
                            uVar71 = 0;
                          }
                          else {
LAB_0079f344:
                            lVar77 = FUN_007a2150(param_1,0x20);
                            if ((int)uVar71 != lVar77) goto LAB_0079e5f8;
                            bVar78 = false;
                            uVar72 = uVar72 + uVar71;
                            uVar32 = (ulong)uVar72;
                            if (((int)uVar72 < 0) || (uVar72 < uVar71)) {
                              bVar78 = true;
                            }
                            if (bVar78) goto LAB_0079f840;
                            uVar71 = 0;
                            if ((int)uVar72 < 0) goto LAB_0079e101;
                          }
                        }
                        if (bVar13) {
                          lVar77 = *(long *)(param_1 + 0x28);
                          if ((lVar77 == 0) ||
                             (puVar4 = *(undefined4 **)(lVar77 + 0x20),
                             *(undefined4 **)(lVar77 + 0x28) <= puVar4)) {
                            uVar55 = 0x2d;
LAB_0079ff8c:
                            iVar27 = FUN_006ff380(param_1,uVar55);
                            if (iVar27 == -1) goto LAB_0079e5f8;
                          }
                          else {
                            *(undefined4 **)(lVar77 + 0x20) = puVar4 + 1;
                            *puVar4 = 0x2d;
                          }
                        }
                        else if (sVar24 == 0) {
                          if (sVar20 == 0) goto LAB_0079e8c3;
                          lVar77 = *(long *)(param_1 + 0x28);
                          if ((lVar77 == 0) ||
                             (puVar4 = *(undefined4 **)(lVar77 + 0x20),
                             *(undefined4 **)(lVar77 + 0x28) <= puVar4)) {
                            uVar55 = 0x20;
                            goto LAB_0079ff8c;
                          }
                          *(undefined4 **)(lVar77 + 0x20) = puVar4 + 1;
                          *puVar4 = 0x20;
                        }
                        else {
                          lVar77 = *(long *)(param_1 + 0x28);
                          if ((lVar77 == 0) ||
                             (puVar4 = *(undefined4 **)(lVar77 + 0x20),
                             *(undefined4 **)(lVar77 + 0x28) <= puVar4)) {
                            uVar55 = 0x2b;
                            goto LAB_0079ff8c;
                          }
                          *(undefined4 **)(lVar77 + 0x20) = puVar4 + 1;
                          *puVar4 = 0x2b;
                        }
                        if (uVar72 == 0x7fffffff) goto LAB_0079e5f8;
                        uVar72 = uVar72 + 1;
                      }
LAB_0079e8c3:
                      if (((uVar53 != 0) && (sVar19 != 0)) && ((0x10004UL >> iVar30 & 1) != 0)) {
                        lVar77 = *(long *)(param_1 + 0x28);
                        if (lVar77 == 0) {
LAB_0079fbb7:
                          iVar27 = FUN_006ff380(param_1,0x30);
                          if ((iVar27 == -1) || (uVar72 == 0x7fffffff)) goto LAB_0079e5f8;
                          lVar77 = *(long *)(param_1 + 0x28);
                          if (lVar77 != 0) {
                            puVar45 = *(uint **)(lVar77 + 0x20);
                            puVar41 = *(uint **)(lVar77 + 0x28);
                            goto LAB_0079e921;
                          }
LAB_0079fbff:
                          uVar28 = FUN_006ff380(param_1,uVar28);
                        }
                        else {
                          puVar48 = *(uint **)(lVar77 + 0x20);
                          puVar41 = *(uint **)(lVar77 + 0x28);
                          if (puVar41 <= puVar48) goto LAB_0079fbb7;
                          puVar45 = puVar48 + 1;
                          *(uint **)(lVar77 + 0x20) = puVar45;
                          *puVar48 = 0x30;
                          if (uVar72 == 0x7fffffff) goto LAB_0079e5f8;
LAB_0079e921:
                          if (puVar41 <= puVar45) goto LAB_0079fbff;
                          *(uint **)(lVar77 + 0x20) = puVar45 + 1;
                          *puVar45 = uVar28;
                        }
                        if ((uVar28 == 0xffffffff) || (uVar72 == 0x7ffffffe)) goto LAB_0079e5f8;
                        uVar72 = uVar72 + 2;
                      }
                      uVar71 = uVar71 + uVar42;
                      if (0 < (int)uVar71) {
                        lVar77 = FUN_007a2150(param_1,0x30,(long)(int)uVar71);
                        if ((int)uVar71 != lVar77) goto LAB_0079e5f8;
                        bVar78 = false;
                        uVar72 = uVar72 + uVar71;
                        uVar32 = (ulong)uVar72;
                        if (((int)uVar72 < 0) || (uVar72 < uVar71)) {
                          bVar78 = true;
                        }
                        if (bVar78) goto LAB_0079f840;
                        if ((int)uVar72 < 0) goto LAB_0079e101;
                      }
                      lVar77 = *(long *)(param_1 + 0x36);
                      if (0x827 < lVar77 - 0x93f160U) {
                        FUN_00703130();
                      }
                      uVar53 = (**(code **)(lVar77 + 0x38))(param_1,pwVar39,uVar36);
                      if (uVar36 != uVar53) goto LAB_0079e5f8;
                      bVar78 = false;
                      uVar33 = (long)(int)uVar72 + uVar36;
                      if (((long)uVar33 < 0) || (uVar33 < uVar36)) {
LAB_0079fd46:
                        bVar78 = true;
                      }
LAB_0079e9b1:
                      uVar72 = (uint)uVar33;
                      uVar32 = uVar33 & 0xffffffff;
                      if (uVar33 != (long)(int)uVar72) {
                        bVar78 = true;
                      }
                      if (bVar78) goto LAB_0079f840;
joined_r0x0079e9cc:
                      if ((int)uVar72 < 0) goto LAB_0079e101;
                    }
LAB_0079e450:
                    puVar47 = puVar47 + 1;
                    local_4ec = local_4ec + 1;
                    piVar34 = (int *)FUN_007a97c0(puVar47,0x25);
                    lVar77 = *(long *)(param_1 + 0x36);
                    uVar53 = (long)piVar34 - (long)puVar47 >> 2;
                    if (0x827 < lVar77 - 0x93f160U) {
                      FUN_00703130();
                    }
                    uVar32 = (**(code **)(lVar77 + 0x38))(param_1,puVar47,uVar53);
                    if (uVar32 == uVar53) {
                      bVar78 = false;
                      uVar33 = (long)(int)uVar72 + uVar53;
                      if (((long)uVar33 < 0) || (uVar33 < uVar53)) {
                        bVar78 = true;
                      }
                      uVar32 = uVar33 & 0xffffffff;
                      if (uVar33 != (long)(int)uVar33) {
                        bVar78 = true;
                      }
                      if (!bVar78) goto code_r0x0079e4d5;
                      goto LAB_0079f840;
                    }
                    goto LAB_0079e5f8;
                  case 99:
                    goto code_r0x0079e554;
                  case 100:
                  case 0x69:
                    goto code_r0x0079eb94;
                  case 0x68:
code_r0x0079ecc4:
                    sVar12 = sVar24;
                    sVar11 = sVar23;
                    sVar10 = sVar22;
                    sVar9 = sVar21;
                    local_4f0 = sVar20;
                    local_4f4 = sVar19;
                    local_520 = iVar27;
                    uVar71 = uVar75;
                    bVar68 = false;
                    bVar25 = false;
                    sVar58 = 0;
                    uVar28 = puVar48[1];
                    puVar47 = puVar48 + 1;
                    bVar6 = true;
                    uVar42 = uVar71;
                    uVar76 = uVar71;
                    uVar73 = uVar71;
                    uVar74 = uVar71;
                    iVar27 = local_520;
                    bVar70 = bVar68;
                    bVar69 = bVar68;
                    bVar67 = bVar68;
                    sVar19 = local_4f4;
                    sVar20 = local_4f0;
                    bVar13 = bVar25;
                    sVar21 = sVar9;
                    sVar22 = sVar10;
                    sVar23 = sVar11;
                    sVar24 = sVar12;
                    switch(uVar28) {
                    case 0x25:
                      goto code_r0x0079ebc4;
                    case 0x42:
                    case 0x62:
                      goto code_r0x0079e684;
                    case 0x58:
                    case 0x78:
                      goto code_r0x0079eb0c;
                    case 100:
                    case 0x69:
                      goto code_r0x0079eb94;
                    case 0x68:
                      uVar28 = puVar48[2];
                      puVar47 = puVar48 + 2;
                      bVar69 = true;
                      bVar68 = true;
                      bVar67 = true;
                      bVar6 = false;
                      uVar75 = uVar71;
                      bVar78 = bVar5;
                      bVar70 = bVar68;
                      switch(uVar28) {
                      case 0x25:
                        goto code_r0x0079ebc4;
                      case 0x41:
                      case 0x45:
                      case 0x46:
                      case 0x47:
                      case 0x61:
                      case 0x65:
                      case 0x66:
                      case 0x67:
                        goto code_r0x0079e240;
                      case 0x42:
                      case 0x62:
                        goto code_r0x0079e684;
                      case 0x43:
                        goto code_r0x0079e3cc;
                      case 0x53:
                      case 0x73:
                        goto code_r0x0079e4f4;
                      case 0x58:
                      case 0x78:
                        goto code_r0x0079eb0c;
                      case 99:
                        goto code_r0x0079e554;
                      case 100:
                      case 0x69:
                        goto code_r0x0079eb94;
                      case 0x6d:
                        goto code_r0x0079e61c;
                      case 0x6e:
                        goto code_r0x0079e9e4;
                      case 0x6f:
                        goto code_r0x0079ea34;
                      case 0x70:
                        goto code_r0x0079eab4;
                      case 0x75:
                        goto code_r0x0079eaa4;
                      }
                      break;
                    case 0x6e:
                      goto code_r0x0079e9e4;
                    case 0x6f:
                      goto code_r0x0079ea34;
                    case 0x75:
                      goto code_r0x0079eaa4;
                    }
                    break;
                  case 0x6c:
code_r0x0079ec5c:
                    sVar12 = sVar24;
                    sVar11 = sVar23;
                    sVar10 = sVar22;
                    sVar9 = sVar21;
                    local_4f0 = sVar20;
                    local_4f4 = sVar19;
                    local_520 = iVar27;
                    uVar71 = uVar75;
                    bVar68 = false;
                    uVar28 = puVar48[1];
                    puVar48 = puVar48 + 1;
                    bVar13 = true;
                    puVar47 = puVar48;
                    uVar42 = uVar71;
                    uVar76 = uVar71;
                    uVar73 = uVar71;
                    uVar74 = uVar71;
                    uVar75 = uVar71;
                    bVar78 = false;
                    bVar6 = bVar7;
                    iVar27 = local_520;
                    bVar70 = bVar68;
                    bVar69 = bVar68;
                    bVar67 = bVar68;
                    sVar58 = 1;
                    sVar19 = local_4f4;
                    sVar20 = local_4f0;
                    bVar25 = true;
                    sVar21 = sVar9;
                    sVar22 = sVar10;
                    sVar23 = sVar11;
                    sVar24 = sVar12;
                    switch(uVar28) {
                    case 0x25:
                      goto code_r0x0079ebc4;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                      goto code_r0x0079e240;
                    case 0x42:
                    case 0x62:
                      goto code_r0x0079e684;
                    case 0x43:
                      goto code_r0x0079e3cc;
                    case 0x53:
                    case 0x73:
                      goto code_r0x0079e4f4;
                    case 0x58:
                    case 0x78:
                      goto code_r0x0079eb0c;
                    case 99:
                      goto code_r0x0079e554;
                    case 100:
                    case 0x69:
                      goto code_r0x0079eb94;
                    case 0x6c:
                      goto code_r0x0079ec24;
                    case 0x6d:
                      goto code_r0x0079e61c;
                    case 0x6e:
                      goto code_r0x0079e9e4;
                    case 0x6f:
                      goto code_r0x0079ea34;
                    case 0x70:
                      goto code_r0x0079eab4;
                    case 0x75:
                      goto code_r0x0079eaa4;
                    }
                    break;
                  case 0x6d:
                    goto code_r0x0079e61c;
                  case 0x6e:
                    goto code_r0x0079e9e4;
                  case 0x6f:
                    goto code_r0x0079ea34;
                  case 0x70:
                    goto code_r0x0079eab4;
                  case 0x75:
                    goto code_r0x0079eaa4;
                  }
code_r0x0079e095:
                  if (uVar28 != 0) {
LAB_0079e09e:
                    uVar33 = (ulong)local_4c4;
                    goto LAB_0079e0a5;
                  }
                  uVar32 = 0xffffffff;
                  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
                  goto LAB_0079e101;
                }
                local_4c8 = 0;
                local_4ec = 0;
                local_4e0 = (char *)0xffffffffffffffff;
LAB_0079e0a5:
                uVar28 = FUN_0079b4d0(param_1,param_2,local_4c8,param_3,&local_440,uVar32,local_4ec,
                                      piVar31,local_428,iVar2,local_4e0,uVar33,param_4);
                uVar32 = (ulong)uVar28;
              }
            }
            else {
LAB_0079f840:
              uVar32 = 0xffffffff;
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4b;
            }
LAB_0079e101:
            uVar28 = *param_1;
          }
          else {
LAB_0079e5f8:
            uVar32 = 0xffffffff;
            uVar28 = *param_1;
          }
          if ((uVar28 & 0x8000) == 0) {
            piVar31 = *(int **)(param_1 + 0x22);
            iVar2 = piVar31[1];
            piVar31[1] = iVar2 + -1;
            if (iVar2 + -1 == 0) {
              piVar31[2] = 0;
              piVar31[3] = 0;
              LOCK();
              iVar2 = *piVar31;
              *piVar31 = 0;
              UNLOCK();
              if (1 < iVar2) {
                FUN_00709660();
              }
            }
          }
          if (bVar8) {
            FUN_00709560(&local_468);
          }
          goto LAB_0079e119;
        }
      }
      goto LAB_0079fcd0;
    }
    uVar32 = 0xffffffff;
    *param_1 = *param_1 | 0x20;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
  }
  else {
LAB_0079fcd0:
    uVar32 = 0xffffffff;
  }
LAB_0079e119:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar32;
  }
LAB_007a026d:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
code_r0x0079ed98:
  local_520 = local_520 * 10 + uVar38;
  puVar47 = puVar48;
  uVar38 = uVar3;
  if (9 < uVar3) goto LAB_0079edb0;
  goto LAB_0079ed62;
code_r0x0079e4d5:
  if (((int)uVar33 < 0) || (*piVar34 == 0)) goto LAB_0079e101;
  goto LAB_0079e080;
}

