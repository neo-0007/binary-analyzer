
ulong FUN_007986e0(uint *param_1,long param_2,uint *param_3,uint param_4)

{
  unkbyte10 Var1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  short sVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  short sVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  short sVar20;
  byte bVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  bool bVar28;
  ushort uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  char *pcVar34;
  ulong uVar35;
  ulong uVar36;
  char *pcVar37;
  long lVar38;
  unkbyte10 *pVar39;
  uint uVar40;
  uint uVar41;
  undefined4 *puVar42;
  uint uVar43;
  undefined8 *puVar44;
  ulong *puVar45;
  byte *pbVar46;
  uint *puVar47;
  int *piVar48;
  ushort *puVar49;
  byte *pbVar50;
  short *psVar51;
  byte bVar52;
  ulong uVar53;
  undefined8 uVar54;
  uint uVar55;
  bool bVar56;
  short sVar57;
  short sVar59;
  ushort uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar64;
  uint uVar65;
  byte *pbVar66;
  ulong uVar67;
  long in_FS_OFFSET;
  bool bVar68;
  int local_540;
  long *local_530;
  byte local_528;
  short local_514;
  short local_510;
  short local_50c;
  long local_508;
  uint local_500;
  short local_4f0;
  char *local_4e8;
  char *local_4d0;
  int local_4c8;
  undefined8 *local_4b0;
  undefined8 local_4a8;
  undefined2 uStack_4a0;
  undefined6 uStack_49e;
  uint local_498;
  int local_494;
  uint local_490;
  uint local_48c;
  uint local_488;
  code *local_478;
  uint *local_470;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined1 local_438 [16];
  undefined1 local_428 [999];
  undefined1 local_41;
  long local_40 [2];
  short sVar58;
  uint uVar63;
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)(in_FS_OFFSET + -0x58);
  if (param_1[0x30] == 0) {
    param_1[0x30] = 0xffffffff;
LAB_0079873d:
    uVar30 = *param_1;
    if ((uVar30 & 8) == 0) {
      if (param_2 == 0) {
        uVar35 = 0xffffffff;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      }
      else {
        if ((uVar30 & 2) != 0) {
          if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar35 = FUN_0079aa20(param_1,param_2,param_3,param_4);
            return uVar35;
          }
          goto LAB_0079a9ac;
        }
        local_450 = *(undefined8 *)param_3;
        uStack_448 = *(undefined8 *)(param_3 + 2);
        local_440 = *(undefined8 *)(param_3 + 4);
        pcVar34 = (char *)thunk_FUN_00714230(param_2,0x25);
        bVar9 = false;
        local_470 = param_1;
        if ((uVar30 & 0x8000) == 0) {
          local_478 = FUN_00795710;
          FUN_00709520(&local_478);
          if ((*param_1 & 0x8000) == 0) {
            lVar38 = *(long *)(in_FS_OFFSET + 0x10);
            piVar48 = *(int **)(param_1 + 0x22);
            if (*(long *)(piVar48 + 2) != lVar38) {
              LOCK();
              iVar32 = *piVar48;
              if (iVar32 == 0) {
                *piVar48 = 1;
              }
              UNLOCK();
              if (iVar32 != 0) {
                FUN_00709590();
              }
              piVar48 = *(int **)(param_1 + 0x22);
              *(long *)(piVar48 + 2) = lVar38;
            }
            piVar48[1] = piVar48[1] + 1;
            bVar9 = true;
          }
          else {
            bVar9 = true;
          }
        }
        lVar38 = *(long *)(param_1 + 0x36);
        uVar53 = (long)pcVar34 - param_2;
        if (0x827 < lVar38 - 0x93f160U) {
          FUN_00703130();
        }
        uVar35 = (**(code **)(lVar38 + 0x38))(param_1,param_2,uVar53);
        if (uVar53 == uVar35) {
          uVar35 = uVar53 & 0xffffffff;
          uVar36 = uVar53 >> 0x3f;
          if (uVar53 != (long)(int)uVar53) {
            uVar36 = 1;
          }
          if ((int)uVar36 == 0) {
            if ((-1 < (int)uVar53) && (*pcVar34 != '\0')) {
              local_4d0 = DAT_0094b478;
              if (DAT_0094b478 == (char *)0x0) {
                if ((DAT_0094b488 == 0) && (DAT_0094b5e0 == 0)) {
                  local_4c8 = 0;
                  local_500 = 0;
                  local_4e8 = (char *)0xffffffffffffffff;
                  pcVar37 = pcVar34;
LAB_007988b0:
                  uVar61 = (uint)uVar35;
                  bVar52 = pcVar37[1];
                  uVar30 = (uint)bVar52;
                  if (0x5a < (byte)(bVar52 - 0x20)) goto code_r0x007988c4;
                  bVar68 = false;
                  bVar28 = false;
                  bVar19 = false;
                  sVar57 = 0;
                  bVar13 = false;
                  bVar18 = false;
                  sVar58 = 0;
                  bVar12 = false;
                  bVar17 = false;
                  bVar8 = false;
                  bVar16 = false;
                  bVar6 = false;
                  uVar29 = 0;
                  pbVar46 = (byte *)(pcVar37 + 1);
                  uVar64 = 0xffffffff;
                  uVar63 = 0xffffffff;
                  uVar65 = 0xffffffff;
                  uVar62 = 0xffffffff;
                  uVar43 = 0xffffffff;
                  uVar55 = 0xffffffff;
                  sVar25 = 0;
                  local_4f0 = 0;
                  iVar32 = 0;
                  local_540 = 0;
                  sVar27 = 0;
                  sVar14 = 0;
                  sVar24 = 0;
                  local_514 = 0;
                  sVar26 = 0;
                  sVar10 = 0;
                  sVar23 = 0;
                  local_50c = 0;
                  sVar22 = 0;
                  local_510 = 0;
                  bVar21 = 0x20;
                  local_528 = 0x20;
                  pbVar66 = pbVar46;
                  bVar5 = bVar8;
                  bVar7 = bVar8;
                  uVar60 = 0;
                  bVar11 = bVar13;
                  bVar15 = bVar17;
                  sVar59 = sVar57;
                  bVar56 = bVar19;
                  sVar20 = 0;
                  switch(bVar52) {
                  case 0x20:
code_r0x00799644:
                    sVar14 = sVar27;
                    sVar10 = sVar26;
                    local_4f0 = sVar25;
                    local_514 = sVar24;
                    local_510 = sVar22;
                    local_528 = bVar21;
                    bVar52 = pbVar46[1];
                    uVar30 = (uint)bVar52;
                    pbVar46 = pbVar46 + 1;
                    sVar23 = 1;
                    local_50c = 1;
                    pbVar66 = pbVar46;
                    bVar68 = bVar28;
                    bVar5 = bVar6;
                    bVar7 = bVar6;
                    uVar60 = uVar29;
                    bVar11 = bVar12;
                    bVar21 = local_528;
                    bVar15 = bVar16;
                    sVar59 = sVar58;
                    sVar22 = local_510;
                    sVar24 = local_514;
                    sVar25 = local_4f0;
                    bVar56 = bVar18;
                    sVar20 = sVar10;
                    sVar26 = sVar10;
                    sVar27 = sVar14;
                    switch(bVar52) {
                    case 0x20:
                      goto code_r0x00799644;
                    default:
                      break;
                    case 0x23:
code_r0x00799574:
                      sVar14 = sVar27;
                      sVar10 = sVar26;
                      local_4f0 = sVar25;
                      local_514 = sVar24;
                      local_50c = sVar23;
                      local_528 = bVar21;
                      bVar52 = pbVar46[1];
                      uVar30 = (uint)bVar52;
                      pbVar46 = pbVar46 + 1;
                      sVar22 = 1;
                      local_510 = 1;
                      pbVar66 = pbVar46;
                      bVar68 = bVar28;
                      bVar5 = bVar6;
                      bVar7 = bVar6;
                      uVar60 = uVar29;
                      bVar11 = bVar12;
                      bVar21 = local_528;
                      bVar15 = bVar16;
                      sVar59 = sVar58;
                      sVar23 = local_50c;
                      sVar24 = local_514;
                      sVar25 = local_4f0;
                      bVar56 = bVar18;
                      sVar20 = sVar10;
                      sVar26 = sVar10;
                      sVar27 = sVar14;
                      switch(bVar52) {
                      case 0x20:
                        goto code_r0x00799644;
                      default:
                        break;
                      case 0x23:
                        goto code_r0x00799574;
                      case 0x25:
                        goto code_r0x007994ac;
                      case 0x27:
code_r0x00799884:
                        sVar10 = sVar26;
                        local_4f0 = sVar25;
                        local_514 = sVar24;
                        local_50c = sVar23;
                        local_510 = sVar22;
                        local_528 = bVar21;
                        if (local_4e8 == (char *)0xffffffffffffffff) {
                          pcVar37 = *(char **)(**(long **)(in_FS_OFFSET + -0xc0) + 0x50);
                          local_4d0 = *(char **)(**(long **)(in_FS_OFFSET + -0xc0) + 0x48);
                          cVar2 = *pcVar37;
                          if ((cVar2 == '\0') || (cVar2 == '\x7f')) {
                            local_4e8 = (char *)0x0;
                          }
                          else {
                            local_4e8 = (char *)0x0;
                            if (*local_4d0 != '\0') {
                              local_4e8 = pcVar37;
                            }
                          }
                        }
                        bVar52 = pbVar46[1];
                        uVar30 = (uint)bVar52;
                        pbVar46 = pbVar46 + 1;
                        sVar27 = 1;
                        sVar14 = 1;
                        pbVar66 = pbVar46;
                        bVar68 = bVar28;
                        bVar7 = bVar6;
                        bVar5 = bVar6;
                        uVar60 = uVar29;
                        bVar11 = bVar12;
                        bVar21 = local_528;
                        bVar15 = bVar16;
                        sVar59 = sVar58;
                        sVar22 = local_510;
                        sVar23 = local_50c;
                        sVar24 = local_514;
                        sVar25 = local_4f0;
                        bVar56 = bVar18;
                        sVar26 = sVar10;
                        sVar20 = sVar10;
                        switch(bVar52) {
                        case 0x20:
                          goto code_r0x00799644;
                        default:
                          break;
                        case 0x23:
                          goto code_r0x00799574;
                        case 0x25:
                          goto code_r0x007994ac;
                        case 0x27:
                          goto code_r0x00799884;
                        case 0x2a:
                          goto code_r0x007997f4;
                        case 0x2b:
code_r0x007995fc:
                          sVar14 = sVar27;
                          sVar10 = sVar26;
                          local_4f0 = sVar25;
                          local_50c = sVar23;
                          local_510 = sVar22;
                          local_528 = bVar21;
                          bVar52 = pbVar46[1];
                          uVar30 = (uint)bVar52;
                          pbVar46 = pbVar46 + 1;
                          sVar24 = 1;
                          local_514 = 1;
                          pbVar66 = pbVar46;
                          bVar68 = bVar28;
                          bVar5 = bVar6;
                          bVar7 = bVar6;
                          uVar60 = uVar29;
                          bVar11 = bVar12;
                          bVar21 = local_528;
                          bVar15 = bVar16;
                          sVar59 = sVar58;
                          sVar22 = local_510;
                          sVar23 = local_50c;
                          sVar25 = local_4f0;
                          bVar56 = bVar18;
                          sVar20 = sVar10;
                          sVar26 = sVar10;
                          sVar27 = sVar14;
                          switch(bVar52) {
                          case 0x20:
                            goto code_r0x00799644;
                          default:
                            break;
                          case 0x23:
                            goto code_r0x00799574;
                          case 0x25:
                            goto code_r0x007994ac;
                          case 0x27:
                            goto code_r0x00799884;
                          case 0x2a:
                            goto code_r0x007997f4;
                          case 0x2b:
                            goto code_r0x007995fc;
                          case 0x2d:
code_r0x007995b4:
                            sVar14 = sVar27;
                            local_4f0 = sVar25;
                            local_514 = sVar24;
                            local_50c = sVar23;
                            local_510 = sVar22;
                            bVar52 = pbVar46[1];
                            uVar30 = (uint)bVar52;
                            pbVar46 = pbVar46 + 1;
                            bVar21 = 0x20;
                            local_528 = 0x20;
                            sVar26 = 1;
                            sVar10 = 1;
                            pbVar66 = pbVar46;
                            bVar68 = bVar28;
                            bVar5 = bVar6;
                            bVar7 = bVar6;
                            uVar60 = uVar29;
                            bVar11 = bVar12;
                            bVar15 = bVar16;
                            sVar59 = sVar58;
                            sVar22 = local_510;
                            sVar23 = local_50c;
                            sVar24 = local_514;
                            sVar25 = local_4f0;
                            bVar56 = bVar18;
                            sVar20 = 1;
                            sVar27 = sVar14;
                            switch(bVar52) {
                            case 0x20:
                              goto code_r0x00799644;
                            default:
                              break;
                            case 0x23:
                              goto code_r0x00799574;
                            case 0x25:
                              goto code_r0x007994ac;
                            case 0x27:
                              goto code_r0x00799884;
                            case 0x2a:
                              goto code_r0x007997f4;
                            case 0x2b:
                              goto code_r0x007995fc;
                            case 0x2d:
                              goto code_r0x007995b4;
                            case 0x2e:
                              goto code_r0x00799704;
                            case 0x30:
code_r0x007998d4:
                              sVar14 = sVar27;
                              sVar10 = sVar26;
                              local_4f0 = sVar25;
                              local_514 = sVar24;
                              local_50c = sVar23;
                              local_510 = sVar22;
                              bVar52 = pbVar46[1];
                              uVar30 = (uint)bVar52;
                              pbVar46 = pbVar46 + 1;
                              local_528 = bVar21;
                              if (sVar10 == 0) {
                                local_528 = 0x30;
                              }
                              pbVar66 = pbVar46;
                              bVar68 = bVar28;
                              bVar5 = bVar6;
                              bVar7 = bVar6;
                              uVar60 = uVar29;
                              bVar11 = bVar12;
                              bVar21 = local_528;
                              bVar15 = bVar16;
                              sVar59 = sVar58;
                              sVar22 = local_510;
                              sVar23 = local_50c;
                              sVar24 = local_514;
                              sVar25 = local_4f0;
                              bVar56 = bVar18;
                              sVar20 = sVar10;
                              sVar26 = sVar10;
                              sVar27 = sVar14;
                              switch(bVar52) {
                              case 0x20:
                                goto code_r0x00799644;
                              default:
                                break;
                              case 0x23:
                                goto code_r0x00799574;
                              case 0x25:
                                goto code_r0x007994ac;
                              case 0x27:
                                goto code_r0x00799884;
                              case 0x2a:
                                goto code_r0x007997f4;
                              case 0x2b:
                                goto code_r0x007995fc;
                              case 0x2d:
                                goto code_r0x007995b4;
                              case 0x2e:
                                goto code_r0x00799704;
                              case 0x30:
                                goto code_r0x007998d4;
                              case 0x31:
                              case 0x32:
                              case 0x33:
                              case 0x34:
                              case 0x35:
                              case 0x36:
                              case 0x37:
                              case 0x38:
                              case 0x39:
                                goto code_r0x00799754;
                              case 0x41:
                              case 0x45:
                              case 0x46:
                              case 0x47:
                              case 0x61:
                              case 0x65:
                              case 0x66:
                              case 0x67:
                                goto code_r0x00798a78;
                              case 0x42:
                              case 0x62:
                                goto code_r0x007993a4;
                              case 0x43:
                                goto code_r0x00798c74;
                              case 0x49:
code_r0x00799924:
                                sVar14 = sVar27;
                                sVar10 = sVar26;
                                local_514 = sVar24;
                                local_50c = sVar23;
                                local_510 = sVar22;
                                local_528 = bVar21;
                                bVar52 = pbVar46[1];
                                uVar30 = (uint)bVar52;
                                pbVar46 = pbVar46 + 1;
                                sVar25 = 1;
                                local_4f0 = 1;
                                pbVar66 = pbVar46;
                                bVar68 = bVar28;
                                bVar5 = bVar6;
                                bVar7 = bVar6;
                                uVar60 = uVar29;
                                bVar11 = bVar13;
                                bVar21 = local_528;
                                bVar15 = bVar16;
                                sVar59 = sVar57;
                                sVar22 = local_510;
                                sVar23 = local_50c;
                                sVar24 = local_514;
                                bVar56 = bVar19;
                                sVar20 = sVar10;
                                sVar26 = sVar10;
                                sVar27 = sVar14;
                                switch(bVar52) {
                                case 0x20:
                                  goto code_r0x00799644;
                                default:
                                  break;
                                case 0x23:
                                  goto code_r0x00799574;
                                case 0x25:
                                  goto code_r0x007994ac;
                                case 0x27:
                                  goto code_r0x00799884;
                                case 0x2a:
                                  goto code_r0x007997f4;
                                case 0x2b:
                                  goto code_r0x007995fc;
                                case 0x2d:
                                  goto code_r0x007995b4;
                                case 0x2e:
                                  goto code_r0x00799704;
                                case 0x30:
                                  goto code_r0x007998d4;
                                case 0x31:
                                case 0x32:
                                case 0x33:
                                case 0x34:
                                case 0x35:
                                case 0x36:
                                case 0x37:
                                case 0x38:
                                case 0x39:
                                  goto code_r0x00799754;
                                case 0x41:
                                case 0x45:
                                case 0x46:
                                case 0x47:
                                case 0x61:
                                case 0x65:
                                case 0x66:
                                case 0x67:
                                  goto code_r0x00798a78;
                                case 0x42:
                                case 0x62:
                                  goto code_r0x007993a4;
                                case 0x43:
                                  goto code_r0x00798c74;
                                case 0x49:
                                  goto code_r0x00799924;
                                case 0x4c:
                                case 0x71:
                                  goto code_r0x007994f4;
                                case 0x53:
                                case 0x73:
                                  goto code_r0x00798e04;
                                case 0x58:
                                case 0x78:
                                  goto code_r0x00799404;
                                case 0x5a:
                                case 0x7a:
                                  goto code_r0x007994e4;
                                case 99:
                                  goto code_r0x00798e64;
                                case 100:
                                case 0x69:
                                  goto code_r0x00799474;
                                case 0x68:
                                  goto code_r0x007996c4;
                                case 0x6a:
                                case 0x74:
                                  goto code_r0x00798a38;
                                case 0x6c:
                                  goto code_r0x00799534;
                                case 0x6d:
                                  goto code_r0x00798f44;
                                case 0x6e:
                                  goto code_r0x00799044;
                                case 0x6f:
                                  goto code_r0x00799454;
                                case 0x70:
                                  goto code_r0x00799094;
                                case 0x75:
                                  goto code_r0x00799464;
                                }
                              case 0x4c:
                              case 0x71:
                                goto code_r0x007994f4;
                              case 0x53:
                              case 0x73:
                                goto code_r0x00798e04;
                              case 0x58:
                              case 0x78:
                                goto code_r0x00799404;
                              case 0x5a:
                              case 0x7a:
                                goto code_r0x007994e4;
                              case 99:
                                goto code_r0x00798e64;
                              case 100:
                              case 0x69:
                                goto code_r0x00799474;
                              case 0x68:
                                goto code_r0x007996c4;
                              case 0x6a:
                              case 0x74:
                                goto code_r0x00798a38;
                              case 0x6c:
                                goto code_r0x00799534;
                              case 0x6d:
                                goto code_r0x00798f44;
                              case 0x6e:
                                goto code_r0x00799044;
                              case 0x6f:
                                goto code_r0x00799454;
                              case 0x70:
                                goto code_r0x00799094;
                              case 0x75:
                                goto code_r0x00799464;
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
                              goto code_r0x00799754;
                            case 0x41:
                            case 0x45:
                            case 0x46:
                            case 0x47:
                            case 0x61:
                            case 0x65:
                            case 0x66:
                            case 0x67:
                              goto code_r0x00798a78;
                            case 0x42:
                            case 0x62:
                              goto code_r0x007993a4;
                            case 0x43:
                              goto code_r0x00798c74;
                            case 0x49:
                              goto code_r0x00799924;
                            case 0x4c:
                            case 0x71:
                              goto code_r0x007994f4;
                            case 0x53:
                            case 0x73:
                              goto code_r0x00798e04;
                            case 0x58:
                            case 0x78:
                              goto code_r0x00799404;
                            case 0x5a:
                            case 0x7a:
                              goto code_r0x007994e4;
                            case 99:
                              goto code_r0x00798e64;
                            case 100:
                            case 0x69:
                              goto code_r0x00799474;
                            case 0x68:
                              goto code_r0x007996c4;
                            case 0x6a:
                            case 0x74:
                              goto code_r0x00798a38;
                            case 0x6c:
                              goto code_r0x00799534;
                            case 0x6d:
                              goto code_r0x00798f44;
                            case 0x6e:
                              goto code_r0x00799044;
                            case 0x6f:
                              goto code_r0x00799454;
                            case 0x70:
                              goto code_r0x00799094;
                            case 0x75:
                              goto code_r0x00799464;
                            }
                          case 0x2e:
                            goto code_r0x00799704;
                          case 0x30:
                            goto code_r0x007998d4;
                          case 0x31:
                          case 0x32:
                          case 0x33:
                          case 0x34:
                          case 0x35:
                          case 0x36:
                          case 0x37:
                          case 0x38:
                          case 0x39:
                            goto code_r0x00799754;
                          case 0x41:
                          case 0x45:
                          case 0x46:
                          case 0x47:
                          case 0x61:
                          case 0x65:
                          case 0x66:
                          case 0x67:
                            goto code_r0x00798a78;
                          case 0x42:
                          case 0x62:
                            goto code_r0x007993a4;
                          case 0x43:
                            goto code_r0x00798c74;
                          case 0x49:
                            goto code_r0x00799924;
                          case 0x4c:
                          case 0x71:
                            goto code_r0x007994f4;
                          case 0x53:
                          case 0x73:
                            goto code_r0x00798e04;
                          case 0x58:
                          case 0x78:
                            goto code_r0x00799404;
                          case 0x5a:
                          case 0x7a:
                            goto code_r0x007994e4;
                          case 99:
                            goto code_r0x00798e64;
                          case 100:
                          case 0x69:
                            goto code_r0x00799474;
                          case 0x68:
                            goto code_r0x007996c4;
                          case 0x6a:
                          case 0x74:
                            goto code_r0x00798a38;
                          case 0x6c:
                            goto code_r0x00799534;
                          case 0x6d:
                            goto code_r0x00798f44;
                          case 0x6e:
                            goto code_r0x00799044;
                          case 0x6f:
                            goto code_r0x00799454;
                          case 0x70:
                            goto code_r0x00799094;
                          case 0x75:
                            goto code_r0x00799464;
                          }
                        case 0x2d:
                          goto code_r0x007995b4;
                        case 0x2e:
                          goto code_r0x00799704;
                        case 0x30:
                          goto code_r0x007998d4;
                        case 0x31:
                        case 0x32:
                        case 0x33:
                        case 0x34:
                        case 0x35:
                        case 0x36:
                        case 0x37:
                        case 0x38:
                        case 0x39:
                          goto code_r0x00799754;
                        case 0x41:
                        case 0x45:
                        case 0x46:
                        case 0x47:
                        case 0x61:
                        case 0x65:
                        case 0x66:
                        case 0x67:
                          goto code_r0x00798a78;
                        case 0x42:
                        case 0x62:
                          goto code_r0x007993a4;
                        case 0x43:
                          goto code_r0x00798c74;
                        case 0x49:
                          goto code_r0x00799924;
                        case 0x4c:
                        case 0x71:
                          goto code_r0x007994f4;
                        case 0x53:
                        case 0x73:
                          goto code_r0x00798e04;
                        case 0x58:
                        case 0x78:
                          goto code_r0x00799404;
                        case 0x5a:
                        case 0x7a:
                          goto code_r0x007994e4;
                        case 99:
                          goto code_r0x00798e64;
                        case 100:
                        case 0x69:
                          goto code_r0x00799474;
                        case 0x68:
                          goto code_r0x007996c4;
                        case 0x6a:
                        case 0x74:
                          goto code_r0x00798a38;
                        case 0x6c:
                          goto code_r0x00799534;
                        case 0x6d:
                          goto code_r0x00798f44;
                        case 0x6e:
                          goto code_r0x00799044;
                        case 0x6f:
                          goto code_r0x00799454;
                        case 0x70:
                          goto code_r0x00799094;
                        case 0x75:
                          goto code_r0x00799464;
                        }
                      case 0x2a:
                        goto code_r0x007997f4;
                      case 0x2b:
                        goto code_r0x007995fc;
                      case 0x2d:
                        goto code_r0x007995b4;
                      case 0x2e:
                        goto code_r0x00799704;
                      case 0x30:
                        goto code_r0x007998d4;
                      case 0x31:
                      case 0x32:
                      case 0x33:
                      case 0x34:
                      case 0x35:
                      case 0x36:
                      case 0x37:
                      case 0x38:
                      case 0x39:
                        goto code_r0x00799754;
                      case 0x41:
                      case 0x45:
                      case 0x46:
                      case 0x47:
                      case 0x61:
                      case 0x65:
                      case 0x66:
                      case 0x67:
                        goto code_r0x00798a78;
                      case 0x42:
                      case 0x62:
                        goto code_r0x007993a4;
                      case 0x43:
                        goto code_r0x00798c74;
                      case 0x49:
                        goto code_r0x00799924;
                      case 0x4c:
                      case 0x71:
                        goto code_r0x007994f4;
                      case 0x53:
                      case 0x73:
                        goto code_r0x00798e04;
                      case 0x58:
                      case 0x78:
                        goto code_r0x00799404;
                      case 0x5a:
                      case 0x7a:
                        goto code_r0x007994e4;
                      case 99:
                        goto code_r0x00798e64;
                      case 100:
                      case 0x69:
                        goto code_r0x00799474;
                      case 0x68:
                        goto code_r0x007996c4;
                      case 0x6a:
                      case 0x74:
                        goto code_r0x00798a38;
                      case 0x6c:
                        goto code_r0x00799534;
                      case 0x6d:
                        goto code_r0x00798f44;
                      case 0x6e:
                        goto code_r0x00799044;
                      case 0x6f:
                        goto code_r0x00799454;
                      case 0x70:
                        goto code_r0x00799094;
                      case 0x75:
                        goto code_r0x00799464;
                      }
                    case 0x25:
                      goto code_r0x007994ac;
                    case 0x27:
                      goto code_r0x00799884;
                    case 0x2a:
                      goto code_r0x007997f4;
                    case 0x2b:
                      goto code_r0x007995fc;
                    case 0x2d:
                      goto code_r0x007995b4;
                    case 0x2e:
                      goto code_r0x00799704;
                    case 0x30:
                      goto code_r0x007998d4;
                    case 0x31:
                    case 0x32:
                    case 0x33:
                    case 0x34:
                    case 0x35:
                    case 0x36:
                    case 0x37:
                    case 0x38:
                    case 0x39:
                      goto code_r0x00799754;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                      goto code_r0x00798a78;
                    case 0x42:
                    case 0x62:
                      goto code_r0x007993a4;
                    case 0x43:
                      goto code_r0x00798c74;
                    case 0x49:
                      goto code_r0x00799924;
                    case 0x4c:
                    case 0x71:
                      goto code_r0x007994f4;
                    case 0x53:
                    case 0x73:
                      goto code_r0x00798e04;
                    case 0x58:
                    case 0x78:
                      goto code_r0x00799404;
                    case 0x5a:
                    case 0x7a:
                      goto code_r0x007994e4;
                    case 99:
                      goto code_r0x00798e64;
                    case 100:
                    case 0x69:
                      goto code_r0x00799474;
                    case 0x68:
                      goto code_r0x007996c4;
                    case 0x6a:
                    case 0x74:
                      goto code_r0x00798a38;
                    case 0x6c:
                      goto code_r0x00799534;
                    case 0x6d:
                      goto code_r0x00798f44;
                    case 0x6e:
                      goto code_r0x00799044;
                    case 0x6f:
                      goto code_r0x00799454;
                    case 0x70:
                      goto code_r0x00799094;
                    case 0x75:
                      goto code_r0x00799464;
                    }
                  case 0x23:
                    goto code_r0x00799574;
                  case 0x25:
                    goto code_r0x007994ac;
                  case 0x27:
                    goto code_r0x00799884;
                  case 0x2a:
code_r0x007997f4:
                    sVar14 = sVar27;
                    local_4f0 = sVar25;
                    local_514 = sVar24;
                    local_50c = sVar23;
                    local_510 = sVar22;
                    pbVar46 = pbVar66 + 1;
                    uVar30 = pbVar66[1] - 0x30;
                    if (uVar30 < 10) {
                      bVar52 = pbVar66[2];
                      pbVar50 = pbVar66 + 2;
                      uVar40 = bVar52 - 0x30;
                      while (uVar40 < 10) {
                        bVar52 = pbVar50[1];
                        if ((0xccccccc < (int)uVar30) ||
                           ((int)(0x7fffffff - uVar40) < (int)(uVar30 * 10))) {
                          if ((bVar52 - 0x30 < 10) &&
                             ((pbVar50[2] - 0x30 < 10 && (pbVar50[3] - 0x30 < 10)))) {
                            pbVar50 = pbVar50 + 4;
                            do {
                              bVar52 = *pbVar50;
                              pbVar50 = pbVar50 + 1;
                            } while (bVar52 - 0x30 < 10);
                          }
                          goto LAB_00798f20;
                        }
                        uVar30 = uVar30 * 10 + uVar40;
                        pbVar50 = pbVar50 + 1;
                        uVar40 = bVar52 - 0x30;
                      }
                      if ((bVar52 == 0x24) && (uVar30 != 0)) goto LAB_007988cc;
                    }
                    uVar30 = *param_3;
                    if (uVar30 < 0x30) {
                      piVar48 = (int *)((ulong)uVar30 + *(long *)(param_3 + 4));
                      *param_3 = uVar30 + 8;
                    }
                    else {
                      piVar48 = *(int **)(param_3 + 2);
                      *(int **)(param_3 + 2) = piVar48 + 2;
                    }
                    local_540 = *piVar48;
                    local_528 = bVar21;
                    sVar10 = sVar26;
                    if (local_540 < 0) {
                      local_540 = -local_540;
                      local_528 = 0x20;
                      sVar10 = 1;
                    }
                    bVar52 = pbVar66[1];
                    uVar30 = (uint)bVar52;
                    pbVar66 = pbVar46;
                    bVar68 = bVar28;
                    bVar5 = bVar6;
                    bVar7 = bVar6;
                    uVar60 = uVar29;
                    iVar32 = local_540;
                    bVar11 = bVar12;
                    bVar21 = local_528;
                    bVar15 = bVar16;
                    sVar59 = sVar58;
                    sVar22 = local_510;
                    sVar23 = local_50c;
                    sVar24 = local_514;
                    sVar25 = local_4f0;
                    bVar56 = bVar18;
                    sVar20 = sVar10;
                    sVar26 = sVar10;
                    sVar27 = sVar14;
                    switch(bVar52) {
                    case 0x25:
                      goto code_r0x007994ac;
                    case 0x2e:
                      goto code_r0x00799704;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                      goto code_r0x00798a78;
                    case 0x42:
                    case 0x62:
                      goto code_r0x007993a4;
                    case 0x43:
                      goto code_r0x00798c74;
                    case 0x4c:
                    case 0x71:
                      goto code_r0x007994f4;
                    case 0x53:
                    case 0x73:
                      goto code_r0x00798e04;
                    case 0x58:
                    case 0x78:
                      goto code_r0x00799404;
                    case 0x5a:
                    case 0x7a:
                      goto code_r0x007994e4;
                    case 99:
                      goto code_r0x00798e64;
                    case 100:
                    case 0x69:
                      goto code_r0x00799474;
                    case 0x68:
                      goto code_r0x007996c4;
                    case 0x6a:
                    case 0x74:
                      goto code_r0x00798a38;
                    case 0x6c:
                      goto code_r0x00799534;
                    case 0x6d:
                      goto code_r0x00798f44;
                    case 0x6e:
                      goto code_r0x00799044;
                    case 0x6f:
                      goto code_r0x00799454;
                    case 0x70:
                      goto code_r0x00799094;
                    case 0x75:
                      goto code_r0x00799464;
                    }
                    break;
                  case 0x2b:
                    goto code_r0x007995fc;
                  case 0x2d:
                    goto code_r0x007995b4;
                  case 0x2e:
code_r0x00799704:
                    sVar14 = sVar27;
                    sVar10 = sVar26;
                    local_4f0 = sVar25;
                    local_514 = sVar24;
                    local_50c = sVar23;
                    local_510 = sVar22;
                    local_528 = bVar21;
                    local_540 = iVar32;
                    if (pbVar46[1] == 0x2a) {
                      pbVar66 = pbVar46 + 2;
                      uVar30 = pbVar46[2] - 0x30;
                      if (uVar30 < 10) {
                        bVar52 = pbVar46[3];
                        pbVar46 = pbVar46 + 3;
                        uVar43 = bVar52 - 0x30;
                        while (uVar43 < 10) {
                          bVar52 = pbVar46[1];
                          if ((0xccccccc < (int)uVar30) ||
                             ((int)(0x7fffffff - uVar43) < (int)(uVar30 * 10))) {
                            if ((bVar52 - 0x30 < 10) &&
                               ((pbVar46[2] - 0x30 < 10 && (pbVar46[3] - 0x30 < 10)))) {
                              pbVar46 = pbVar46 + 4;
                              do {
                                bVar52 = *pbVar46;
                                pbVar46 = pbVar46 + 1;
                              } while (bVar52 - 0x30 < 10);
                            }
                            goto LAB_00798f20;
                          }
                          uVar30 = uVar30 * 10 + uVar43;
                          pbVar46 = pbVar46 + 1;
                          uVar43 = bVar52 - 0x30;
                        }
                        if ((uVar30 != 0) && (bVar52 == 0x24)) goto LAB_007988cc;
                      }
                      uVar30 = *param_3;
                      if (uVar30 < 0x30) {
                        *param_3 = uVar30 + 8;
                        puVar47 = (uint *)((ulong)uVar30 + *(long *)(param_3 + 4));
                      }
                      else {
                        puVar47 = *(uint **)(param_3 + 2);
                        *(uint **)(param_3 + 2) = puVar47 + 2;
                      }
                      uVar30 = (uint)*pbVar66;
                      pbVar46 = pbVar66;
                      uVar55 = 0xffffffff;
                      if (-1 < (int)*puVar47) {
                        uVar55 = *puVar47;
                      }
                    }
                    else {
                      uVar55 = pbVar46[1] - 0x30;
                      if (uVar55 < 10) {
                        uVar30 = (uint)pbVar46[2];
                        pbVar46 = pbVar46 + 2;
                        uVar43 = uVar30 - 0x30;
                        while (uVar43 < 10) {
                          uVar30 = (uint)pbVar46[1];
                          if ((0xccccccc < (int)uVar55) ||
                             ((int)(0x7fffffff - uVar43) < (int)(uVar55 * 10))) {
                            if ((uVar30 - 0x30 < 10) &&
                               ((pbVar46[2] - 0x30 < 10 && (pbVar46[3] - 0x30 < 10)))) {
                              pbVar46 = pbVar46 + 4;
                              do {
                                bVar52 = *pbVar46;
                                pbVar46 = pbVar46 + 1;
                              } while (bVar52 - 0x30 < 10);
                            }
                            goto LAB_00798f20;
                          }
                          uVar55 = uVar55 * 10 + uVar43;
                          pbVar46 = pbVar46 + 1;
                          uVar43 = uVar30 - 0x30;
                        }
                      }
                      else {
                        uVar30 = (uint)pbVar46[1];
                        pbVar46 = pbVar46 + 1;
                        uVar55 = 0;
                      }
                    }
                    bVar52 = (byte)uVar30;
                    pbVar66 = pbVar46;
                    uVar43 = uVar55;
                    uVar62 = uVar55;
                    uVar65 = uVar55;
                    uVar63 = uVar55;
                    uVar64 = uVar55;
                    bVar68 = bVar28;
                    bVar5 = bVar6;
                    bVar7 = bVar6;
                    uVar60 = uVar29;
                    iVar32 = local_540;
                    bVar11 = bVar12;
                    bVar21 = local_528;
                    bVar15 = bVar16;
                    sVar59 = sVar58;
                    sVar22 = local_510;
                    sVar23 = local_50c;
                    sVar24 = local_514;
                    sVar25 = local_4f0;
                    bVar56 = bVar18;
                    sVar20 = sVar10;
                    sVar26 = sVar10;
                    sVar27 = sVar14;
                    switch(bVar52) {
                    case 0x25:
                      goto code_r0x007994ac;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                      goto code_r0x00798a78;
                    case 0x42:
                    case 0x62:
                      goto code_r0x007993a4;
                    case 0x43:
                      goto code_r0x00798c74;
                    case 0x4c:
                    case 0x71:
                      goto code_r0x007994f4;
                    case 0x53:
                    case 0x73:
                      goto code_r0x00798e04;
                    case 0x58:
                    case 0x78:
                      goto code_r0x00799404;
                    case 0x5a:
                    case 0x7a:
                      goto code_r0x007994e4;
                    case 99:
                      goto code_r0x00798e64;
                    case 100:
                    case 0x69:
                      goto code_r0x00799474;
                    case 0x68:
                      goto code_r0x007996c4;
                    case 0x6a:
                    case 0x74:
                      goto code_r0x00798a38;
                    case 0x6c:
                      goto code_r0x00799534;
                    case 0x6d:
                      goto code_r0x00798f44;
                    case 0x6e:
                      goto code_r0x00799044;
                    case 0x6f:
                      goto code_r0x00799454;
                    case 0x70:
                      goto code_r0x00799094;
                    case 0x75:
                      goto code_r0x00799464;
                    }
                    break;
                  case 0x30:
                    goto code_r0x007998d4;
                  case 0x31:
                  case 0x32:
                  case 0x33:
                  case 0x34:
                  case 0x35:
                  case 0x36:
                  case 0x37:
                  case 0x38:
                  case 0x39:
code_r0x00799754:
                    sVar14 = sVar27;
                    sVar10 = sVar26;
                    local_4f0 = sVar25;
                    local_514 = sVar24;
                    local_50c = sVar23;
                    local_510 = sVar22;
                    local_528 = bVar21;
                    local_540 = *pbVar46 - 0x30;
                    uVar30 = (uint)pbVar46[1];
                    pbVar46 = pbVar46 + 1;
                    pbVar66 = pbVar46;
                    uVar40 = uVar30 - 0x30;
                    if (uVar30 - 0x30 < 10) {
LAB_00799776:
                      uVar30 = (uint)pbVar66[1];
                      pbVar46 = pbVar66 + 1;
                      uVar41 = uVar30 - 0x30;
                      if (local_540 < 0) goto joined_r0x0079a7ee;
                      if ((local_540 < 0xccccccd) && (local_540 * 10 <= (int)(0x7fffffff - uVar40)))
                      goto code_r0x007997b1;
                      if (((uVar41 < 10) && (pbVar66[2] - 0x30 < 10)) &&
                         (pbVar46 = pbVar66 + 3, pbVar66[3] - 0x30 < 10)) {
                        local_540 = -1;
                        do {
                          pbVar46 = pbVar46 + 1;
                          uVar30 = (uint)*pbVar46;
                          uVar41 = uVar30 - 0x30;
joined_r0x0079a7ee:
                        } while (uVar41 < 10);
                        goto LAB_0079a800;
                      }
                      goto LAB_00798f20;
                    }
LAB_0079a800:
                    if (local_540 != -1) {
LAB_007997c0:
                      bVar52 = (byte)uVar30;
                      if (bVar52 != 0x24) {
                        pbVar66 = pbVar46;
                        bVar68 = bVar28;
                        bVar5 = bVar6;
                        bVar7 = bVar6;
                        uVar60 = uVar29;
                        iVar32 = local_540;
                        bVar11 = bVar13;
                        bVar21 = local_528;
                        bVar15 = bVar16;
                        sVar59 = sVar57;
                        sVar22 = local_510;
                        sVar23 = local_50c;
                        sVar24 = local_514;
                        sVar25 = local_4f0;
                        bVar56 = bVar18;
                        sVar26 = sVar10;
                        sVar20 = sVar10;
                        sVar27 = sVar14;
                        switch(bVar52) {
                        case 0x25:
                          goto code_r0x007994ac;
                        case 0x2e:
                          goto code_r0x00799704;
                        case 0x41:
                        case 0x45:
                        case 0x46:
                        case 0x47:
                        case 0x61:
                        case 0x65:
                        case 0x66:
                        case 0x67:
                          goto code_r0x00798a78;
                        case 0x42:
                        case 0x62:
                          goto code_r0x007993a4;
                        case 0x43:
                          goto code_r0x00798c74;
                        case 0x4c:
                        case 0x71:
                          goto code_r0x007994f4;
                        case 0x53:
                        case 0x73:
                          goto code_r0x00798e04;
                        case 0x58:
                        case 0x78:
                          goto code_r0x00799404;
                        case 0x5a:
                        case 0x7a:
                          goto code_r0x007994e4;
                        case 99:
                          goto code_r0x00798e64;
                        case 100:
                        case 0x69:
                          goto code_r0x00799474;
                        case 0x68:
                          goto code_r0x007996c4;
                        case 0x6a:
                        case 0x74:
                          goto code_r0x00798a38;
                        case 0x6c:
                          goto code_r0x00799534;
                        case 0x6d:
                          goto code_r0x00798f44;
                        case 0x6e:
                          goto code_r0x00799044;
                        case 0x6f:
                          goto code_r0x00799454;
                        case 0x70:
                          goto code_r0x00799094;
                        case 0x75:
                          goto code_r0x00799464;
                        }
                        break;
                      }
                      goto LAB_007988cc;
                    }
                    goto LAB_00798f20;
                  case 0x41:
                  case 0x45:
                  case 0x46:
                  case 0x47:
                  case 0x61:
                  case 0x65:
                  case 0x66:
                  case 0x67:
                    goto code_r0x00798a78;
                  case 0x42:
                  case 0x62:
                    goto code_r0x007993a4;
                  case 0x43:
                    goto code_r0x00798c74;
                  case 0x49:
                    goto code_r0x00799924;
                  case 0x4c:
                  case 0x71:
code_r0x007994f4:
                    sVar14 = sVar27;
                    sVar10 = sVar26;
                    local_4f0 = sVar25;
                    local_514 = sVar24;
                    local_50c = sVar23;
                    local_510 = sVar22;
                    local_528 = bVar21;
                    local_540 = iVar32;
                    uVar55 = uVar64;
                    bVar52 = pbVar46[1];
                    uVar30 = (uint)bVar52;
                    pbVar66 = pbVar46 + 1;
                    bVar56 = true;
                    uVar43 = uVar55;
                    uVar62 = uVar55;
                    uVar65 = uVar55;
                    uVar63 = uVar55;
                    uVar64 = uVar55;
                    bVar68 = bVar28;
                    bVar5 = bVar8;
                    bVar7 = bVar8;
                    uVar60 = 1;
                    iVar32 = local_540;
                    bVar11 = true;
                    bVar21 = local_528;
                    bVar15 = bVar17;
                    sVar59 = 1;
                    sVar22 = local_510;
                    sVar23 = local_50c;
                    sVar24 = local_514;
                    sVar25 = local_4f0;
                    sVar26 = sVar10;
                    sVar20 = sVar10;
                    sVar27 = sVar14;
                    switch(bVar52) {
                    case 0x25:
                      goto code_r0x007994ac;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                      goto code_r0x00798a78;
                    case 0x42:
                    case 0x62:
                      goto code_r0x007993a4;
                    case 0x43:
                      goto code_r0x00798c74;
                    case 0x53:
                    case 0x73:
                      goto code_r0x00798e04;
                    case 0x58:
                    case 0x78:
                      goto code_r0x00799404;
                    case 99:
                      goto code_r0x00798e64;
                    case 100:
                    case 0x69:
                      goto code_r0x00799474;
                    case 0x6d:
                      goto code_r0x00798f44;
                    case 0x6e:
                      goto code_r0x00799044;
                    case 0x6f:
                      goto code_r0x00799454;
                    case 0x70:
                      goto code_r0x00799094;
                    case 0x75:
                      goto code_r0x00799464;
                    }
                    break;
                  case 0x53:
                  case 0x73:
                    goto code_r0x00798e04;
                  case 0x58:
                  case 0x78:
                    goto code_r0x00799404;
                  case 0x5a:
                  case 0x7a:
code_r0x007994e4:
                  case 0x6a:
                  case 0x74:
code_r0x00798a38:
                    sVar14 = sVar27;
                    sVar10 = sVar26;
                    local_4f0 = sVar25;
                    local_514 = sVar24;
                    local_50c = sVar23;
                    local_510 = sVar22;
                    local_528 = bVar21;
                    local_540 = iVar32;
                    uVar55 = uVar64;
                    bVar52 = pbVar46[1];
                    uVar30 = (uint)bVar52;
                    pbVar66 = pbVar46 + 1;
                    bVar56 = true;
                    uVar43 = uVar55;
                    uVar62 = uVar55;
                    uVar65 = uVar55;
                    uVar63 = uVar55;
                    uVar64 = uVar55;
                    bVar68 = bVar28;
                    bVar5 = bVar8;
                    bVar7 = bVar8;
                    uVar60 = 0;
                    iVar32 = local_540;
                    bVar11 = true;
                    bVar21 = local_528;
                    bVar15 = bVar17;
                    sVar59 = 1;
                    sVar22 = local_510;
                    sVar23 = local_50c;
                    sVar24 = local_514;
                    sVar25 = local_4f0;
                    sVar26 = sVar10;
                    sVar20 = sVar10;
                    sVar27 = sVar14;
                    switch(bVar52) {
                    default:
                      goto code_r0x007988c4;
                    case 0x25:
code_r0x007994ac:
                      puVar4 = *(undefined1 **)(param_1 + 10);
                      if (puVar4 < *(undefined1 **)(param_1 + 0xc)) {
                        *(undefined1 **)(param_1 + 10) = puVar4 + 1;
                        *puVar4 = 0x25;
                      }
                      else {
                        iVar32 = FUN_00706570(param_1,0x25);
                        if (iVar32 == -1) goto LAB_00799cd8;
                      }
                      if (uVar61 == 0x7fffffff) goto LAB_00799cd8;
                      uVar61 = uVar61 + 1;
                      break;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
code_r0x00798a78:
                      if ((param_4 & 1) != 0) {
                        uVar60 = 0;
                      }
                      local_490 = (uint)(char)bVar52;
                      local_494 = local_540;
                      uVar29 = uVar60 | sVar59 * 4 | local_510 << 3 | local_50c << 4 | sVar10 << 5 |
                               local_514 << 6 | sVar14 << 7 | local_4f0 << 0xb;
                      local_48c = (uint)uVar29;
                      local_488 = (uint)local_528;
                      if (uVar60 == 0) {
                        uVar30 = param_3[1];
                        if (uVar30 < 0xb0) {
                          puVar44 = (undefined8 *)((ulong)uVar30 + *(long *)(param_3 + 4));
                          param_3[1] = uVar30 + 0x10;
                        }
                        else {
                          puVar44 = *(undefined8 **)(param_3 + 2);
                          *(undefined8 **)(param_3 + 2) = puVar44 + 1;
                        }
                        local_4a8 = *puVar44;
                      }
                      else if ((param_4 & 8) == 0) {
                        pVar39 = (unkbyte10 *)(*(long *)(param_3 + 2) + 0xfU & 0xfffffffffffffff0);
                        *(unkbyte10 **)(param_3 + 2) = pVar39 + 1;
                        Var1 = *pVar39;
                        local_4a8 = (undefined8)Var1;
                        uStack_4a0 = (undefined2)((unkuint10)Var1 >> 0x40);
                      }
                      else {
                        local_48c = uVar29 | 0x1000;
                        uVar30 = param_3[1];
                        if (uVar30 < 0xb0) {
                          puVar44 = (undefined8 *)((ulong)uVar30 + *(long *)(param_3 + 4));
                          param_3[1] = uVar30 + 0x10;
                        }
                        else {
                          puVar44 = (undefined8 *)
                                    (*(long *)(param_3 + 2) + 0xfU & 0xfffffffffffffff0);
                          *(undefined8 **)(param_3 + 2) = puVar44 + 2;
                        }
                        local_4a8 = *puVar44;
                        uStack_4a0 = (undefined2)puVar44[1];
                        uStack_49e = (undefined6)((ulong)puVar44[1] >> 0x10);
                      }
                      local_4b0 = &local_4a8;
                      local_498 = uVar55;
                      if ((local_490 & 0xffffffdf) == 0x41) {
                        uVar30 = FUN_007bdd60();
                      }
                      else {
                        uVar30 = FUN_007bdb10(param_1,&local_498,&local_4b0);
                      }
                      if (-1 < (int)uVar30) {
                        bVar68 = false;
                        uVar61 = uVar61 + uVar30;
                        if (((int)uVar61 < 0) || (uVar61 < uVar30)) {
                          bVar68 = true;
                        }
joined_r0x00798f10:
                        if (!bVar68) goto LAB_00799afb;
                        goto LAB_00798f20;
                      }
                      goto LAB_00799cd8;
                    case 0x42:
                    case 0x62:
code_r0x007993a4:
                      uVar65 = uVar63;
                      iVar33 = 2;
                      goto LAB_007993aa;
                    case 0x43:
code_r0x00798c74:
                      local_458 = 0;
                      uVar30 = *param_3;
                      if (uVar30 < 0x30) {
                        puVar42 = (undefined4 *)((ulong)uVar30 + *(long *)(param_3 + 4));
                        *param_3 = uVar30 + 8;
                      }
                      else {
                        puVar42 = *(undefined4 **)(param_3 + 2);
                        *(undefined4 **)(param_3 + 2) = puVar42 + 2;
                      }
                      uVar53 = FUN_00756c20(local_438,*puVar42,&local_458);
                      if (uVar53 == 0xffffffffffffffff) goto LAB_00799cd8;
                      uVar30 = local_540 - (int)uVar53;
                      if ((sVar20 == 0) && (0 < (int)uVar30)) {
                        lVar38 = FUN_007a1c80(param_1,0x20,(long)(int)uVar30);
                        if ((int)uVar30 != lVar38) goto LAB_00799cd8;
                        uVar61 = uVar61 + uVar30;
                        uVar35 = (ulong)uVar61;
                        if (((int)uVar61 < 0) || (uVar61 < uVar30)) goto LAB_00798f20;
                        if ((int)uVar61 < 0) goto LAB_00798928;
                      }
                      lVar38 = *(long *)(param_1 + 0x36);
                      if (0x827 < lVar38 - 0x93f160U) {
                        FUN_00703130();
                      }
                      uVar35 = (**(code **)(lVar38 + 0x38))(param_1,local_438,uVar53);
                      if (uVar53 != uVar35) goto LAB_00799cd8;
                      bVar68 = false;
                      uVar36 = (long)(int)uVar61 + uVar53;
                      if (((long)uVar36 < 0) || (uVar36 < uVar53)) {
                        bVar68 = true;
                      }
                      uVar61 = (uint)uVar36;
                      uVar35 = uVar36 & 0xffffffff;
                      if (uVar36 != (long)(int)uVar61) {
                        bVar68 = true;
                      }
                      if (bVar68) goto LAB_00798f20;
                      if (-1 < (int)uVar61) {
                        if (sVar20 == 0) break;
                        goto LAB_00799acb;
                      }
                      goto LAB_00798928;
                    case 0x53:
                    case 0x73:
code_r0x00798e04:
                      uVar30 = *param_3;
                      if (uVar30 < 0x30) {
                        puVar44 = (undefined8 *)((ulong)uVar30 + *(long *)(param_3 + 4));
                        *param_3 = uVar30 + 8;
                      }
                      else {
                        puVar44 = *(undefined8 **)(param_3 + 2);
                        *(undefined8 **)(param_3 + 2) = puVar44 + 1;
                      }
                      pcVar37 = (char *)*puVar44;
                      bVar11 = (bool)(bVar11 ^ 1);
                      uVar43 = uVar64;
                      if (pcVar37 != (char *)0x0) {
LAB_00798f6c:
                        if ((bVar52 != 0x53) && (bVar11)) {
                          if (uVar43 != 0xffffffff) goto LAB_00798f87;
                          uVar53 = thunk_FUN_007129d0(pcVar37);
                          goto LAB_00798f9f;
                        }
LAB_0079a104:
                        uVar61 = FUN_00795c90(param_1,pcVar37,uVar43,iVar32);
                        uVar35 = (ulong)uVar61;
                        goto joined_r0x0079a123;
                      }
                      if ((uVar64 == 0xffffffff) || (5 < (int)uVar64)) {
                        uVar53 = 6;
                        pcVar37 = "(null)";
                      }
                      else {
                        uVar53 = 0;
                        pcVar37 = "";
                      }
LAB_00798f9f:
                      uVar30 = iVar32 - (int)uVar53;
                      if ((int)uVar30 < 0) {
                        lVar38 = *(long *)(param_1 + 0x36);
                        if (0x827 < lVar38 - 0x93f160U) {
                          FUN_00703130();
                        }
                        uVar35 = (**(code **)(lVar38 + 0x38))(param_1,pcVar37,uVar53);
                        if (uVar35 == uVar53) {
                          bVar68 = false;
                          uVar36 = (long)(int)uVar61 + uVar53;
                          if (((long)uVar36 < 0) || (uVar36 < uVar53)) goto LAB_0079a454;
                          goto LAB_00799376;
                        }
                        goto LAB_00799cd8;
                      }
                      if ((sVar26 == 0) && (uVar30 != 0)) {
                        lVar38 = FUN_007a1c80(param_1,0x20,(long)(int)uVar30);
                        if ((int)uVar30 != lVar38) goto LAB_00799cd8;
                        uVar61 = uVar61 + uVar30;
                        uVar35 = (ulong)uVar61;
                        if (((int)uVar61 < 0) || (uVar61 < uVar30)) goto LAB_00798f20;
                        if ((int)uVar61 < 0) goto LAB_00798928;
                      }
                      lVar38 = *(long *)(param_1 + 0x36);
                      if (0x827 < lVar38 - 0x93f160U) {
                        FUN_00703130();
                      }
                      uVar35 = (**(code **)(lVar38 + 0x38))(param_1,pcVar37,uVar53);
                      if (uVar35 != uVar53) goto LAB_00799cd8;
                      bVar68 = false;
                      uVar36 = (long)(int)uVar61 + uVar53;
                      if (((long)uVar36 < 0) || (uVar36 < uVar53)) {
                        bVar68 = true;
                      }
                      uVar61 = (uint)uVar36;
                      uVar35 = uVar36 & 0xffffffff;
                      if (uVar36 != (long)(int)uVar61) {
                        bVar68 = true;
                      }
                      if (bVar68) goto LAB_00798f20;
                      if (-1 < (int)uVar61) {
                        if ((sVar26 == 0) || (uVar30 == 0)) break;
                        goto LAB_00799ad3;
                      }
                      goto LAB_00798928;
                    case 0x58:
                    case 0x78:
code_r0x00799404:
                      iVar33 = 0x10;
                      uVar55 = *param_3;
                      uVar43 = uVar62;
                      goto joined_r0x00799414;
                    case 99:
code_r0x00798e64:
                      local_540 = iVar32;
                      sVar20 = sVar26;
                      if (bVar11) goto code_r0x00798c74;
                      uVar30 = local_540 - 1;
                      if ((sVar26 == 0) && (0 < (int)uVar30)) {
                        lVar38 = FUN_007a1c80(param_1,0x20,(long)(int)uVar30);
                        if ((int)uVar30 != lVar38) goto LAB_00799cd8;
                        uVar61 = uVar61 + uVar30;
                        uVar35 = (ulong)uVar61;
                        if (((int)uVar61 < 0) || (uVar61 < uVar30)) goto LAB_00798f20;
                        if ((int)uVar61 < 0) goto LAB_00798928;
                      }
                      uVar43 = *param_3;
                      if (uVar43 < 0x30) {
                        puVar47 = (uint *)((ulong)uVar43 + *(long *)(param_3 + 4));
                        *param_3 = uVar43 + 8;
                      }
                      else {
                        puVar47 = *(uint **)(param_3 + 2);
                        *(uint **)(param_3 + 2) = puVar47 + 2;
                      }
                      uVar43 = *puVar47;
                      puVar4 = *(undefined1 **)(param_1 + 10);
                      if (puVar4 < *(undefined1 **)(param_1 + 0xc)) {
                        *(undefined1 **)(param_1 + 10) = puVar4 + 1;
                        *puVar4 = (char)uVar43;
                      }
                      else {
                        iVar32 = FUN_00706570(param_1,uVar43 & 0xff);
                        if (iVar32 == -1) goto LAB_00799cd8;
                      }
                      if (uVar61 == 0x7fffffff) goto LAB_00799cd8;
                      uVar61 = uVar61 + 1;
                      if ((sVar26 != 0) && (0 < (int)uVar30)) {
                        lVar38 = FUN_007a1c80(param_1,0x20,(long)(int)uVar30);
                        if ((int)uVar30 == lVar38) {
                          bVar68 = false;
                          uVar61 = uVar61 + uVar30;
                          if (((int)uVar61 < 0) || (uVar61 < uVar30)) {
                            bVar68 = true;
                          }
                          goto joined_r0x00798f10;
                        }
                        goto LAB_00799cd8;
                      }
                      break;
                    case 100:
                    case 0x69:
code_r0x00799474:
                      if (bVar56) {
                        uVar55 = *param_3;
                        if (uVar55 < 0x30) {
                          puVar45 = (ulong *)((ulong)uVar55 + *(long *)(param_3 + 4));
                          *param_3 = uVar55 + 8;
                        }
                        else {
                          puVar45 = *(ulong **)(param_3 + 2);
                          *(ulong **)(param_3 + 2) = puVar45 + 1;
                        }
                        uVar53 = *puVar45;
                      }
                      else {
                        uVar55 = *param_3;
                        if (bVar68) {
                          if (uVar55 < 0x30) {
                            pcVar37 = (char *)((ulong)uVar55 + *(long *)(param_3 + 4));
                            *param_3 = uVar55 + 8;
                          }
                          else {
                            pcVar37 = *(char **)(param_3 + 2);
                            *(char **)(param_3 + 2) = pcVar37 + 8;
                          }
                          uVar53 = (ulong)*pcVar37;
                        }
                        else if (bVar7) {
                          if (uVar55 < 0x30) {
                            psVar51 = (short *)((ulong)uVar55 + *(long *)(param_3 + 4));
                            *param_3 = uVar55 + 8;
                          }
                          else {
                            psVar51 = *(short **)(param_3 + 2);
                            *(short **)(param_3 + 2) = psVar51 + 4;
                          }
                          uVar53 = (ulong)*psVar51;
                        }
                        else {
                          if (uVar55 < 0x30) {
                            piVar48 = (int *)((ulong)uVar55 + *(long *)(param_3 + 4));
                            *param_3 = uVar55 + 8;
                          }
                          else {
                            piVar48 = *(int **)(param_3 + 2);
                            *(int **)(param_3 + 2) = piVar48 + 2;
                          }
                          uVar53 = (ulong)*piVar48;
                        }
                      }
                      if ((long)uVar53 < 0) {
                        uVar53 = -uVar53;
                        iVar33 = 10;
                        bVar68 = true;
                      }
                      else {
                        bVar68 = false;
                        iVar33 = 10;
                      }
                      goto LAB_007990e0;
                    case 0x6d:
code_r0x00798f44:
                      uVar43 = uVar64;
                      bVar52 = (byte)uVar30;
                      if (sVar22 == 0) {
                        pcVar37 = (char *)FUN_00712950(iVar3,local_428,1000);
                      }
                      else {
                        pcVar37 = (char *)FUN_007a0570(iVar3);
                      }
                      bVar11 = true;
                      if (pcVar37 != (char *)0x0) goto LAB_00798f6c;
                      uVar53 = (ulong)iVar3;
                      bVar68 = false;
                      iVar33 = 10;
                      if (iVar3 < 0) {
                        uVar53 = -uVar53;
                        bVar68 = true;
                      }
                      goto LAB_007990e0;
                    case 0x6e:
code_r0x00799044:
                      if (((param_4 & 2) != 0) && (local_4c8 == 0)) {
                        lVar38 = thunk_FUN_007129d0(param_2);
                        local_4c8 = FUN_007ac950(param_2,lVar38 + 1);
                        if (local_4c8 < 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00703110("*** %n in writable segment detected ***\n");
                        }
                      }
                      uVar30 = *param_3;
                      if (uVar30 < 0x30) {
                        puVar44 = (undefined8 *)((ulong)uVar30 + *(long *)(param_3 + 4));
                        *param_3 = uVar30 + 8;
                      }
                      else {
                        puVar44 = *(undefined8 **)(param_3 + 2);
                        *(undefined8 **)(param_3 + 2) = puVar44 + 1;
                      }
                      puVar47 = (uint *)*puVar44;
                      if (bVar56) {
                        *(long *)puVar47 = (long)(int)uVar61;
                      }
                      else if (bVar68) {
                        *(char *)puVar47 = (char)uVar35;
                      }
                      else if (bVar15) {
                        *(short *)puVar47 = (short)uVar35;
                      }
                      else {
                        *puVar47 = uVar61;
                      }
                      break;
                    case 0x6f:
code_r0x00799454:
                      iVar33 = 8;
                      goto LAB_007993aa;
                    case 0x70:
code_r0x00799094:
                      uVar43 = uVar64;
                      uVar30 = *param_3;
                      if (uVar30 < 0x30) {
                        puVar45 = (ulong *)((ulong)uVar30 + *(long *)(param_3 + 4));
                        *param_3 = uVar30 + 8;
                      }
                      else {
                        puVar45 = *(ulong **)(param_3 + 2);
                        *(ulong **)(param_3 + 2) = puVar45 + 1;
                      }
                      uVar53 = *puVar45;
                      if (uVar53 == 0) {
                        pcVar37 = "(nil)";
                        if ((int)uVar43 < 5) {
                          uVar43 = 5;
                        }
                        if (bVar52 == 0x53) goto LAB_0079a104;
LAB_00798f87:
                        uVar53 = thunk_FUN_00712a40(pcVar37,(long)(int)uVar43);
                        goto LAB_00798f9f;
                      }
                      sVar27 = 0;
                      uVar30 = 0x78;
                      bVar68 = false;
                      sVar22 = 1;
                      iVar33 = 0x10;
LAB_007990e0:
                      if (uVar43 == 0xffffffff) {
LAB_007993ea:
                        local_508 = 1;
                        local_528 = bVar21;
LAB_00799100:
                        local_530 = (long *)FUN_00795230(uVar53,local_40,iVar33,(char)uVar30 == 'X')
                        ;
                        if ((local_4e8 != (char *)0x0) && (sVar27 != 0)) {
                          local_530 = (long *)FUN_00795750(local_428,local_530,local_40);
                        }
                        if ((iVar33 == 10) && (sVar25 != 0)) {
                          local_530 = (long *)FUN_00795950(local_530,local_40,local_40);
                        }
                        uVar67 = (long)local_40 - (long)local_530;
                        if ((long)uVar67 < local_508) {
                          local_508 = local_508 - uVar67;
                          if (local_508 < 0) {
                            local_508 = 0;
                          }
                          uVar43 = (uint)local_508;
                          if (sVar26 == 0) {
                            uVar55 = (iVar32 - (int)uVar67) - uVar43;
                            if (uVar53 != 0) {
LAB_00799241:
                              if ((sVar22 != 0) && ((0x10004UL >> (sbyte)iVar33 & 1) != 0)) {
                                uVar55 = uVar55 - 2;
                              }
                            }
                            goto LAB_0079925e;
                          }
                        }
                        else {
                          if (uVar53 == 0) {
                            local_508 = local_508 - uVar67;
                            if (local_508 < 0) {
                              local_508 = 0;
                            }
                            uVar43 = (uint)local_508;
                            goto LAB_00799b51;
                          }
                          if ((iVar33 == 8) && (sVar22 != 0)) {
                            *(undefined1 *)((long)local_530 + -1) = 0x30;
                            uVar67 = (long)local_40 - ((long)local_530 + -1);
                            local_530 = (long *)((long)local_530 + -1);
                          }
                          local_508 = local_508 - uVar67;
                          if (local_508 < 0) {
                            local_508 = 0;
                          }
                          uVar43 = (uint)local_508;
                          if (sVar26 == 0) {
                            uVar55 = (iVar32 - (int)uVar67) - uVar43;
                            goto LAB_00799241;
                          }
                        }
                      }
                      else {
LAB_007990ea:
                        if (uVar43 != 0) {
                          local_508 = (long)(int)uVar43;
                          local_528 = 0x20;
                          goto LAB_00799100;
                        }
                        if (uVar53 != 0) {
                          local_508 = 0;
                          local_528 = 0x20;
                          goto LAB_00799100;
                        }
                        if ((iVar33 == 8) && (sVar22 != 0)) {
                          local_530 = (long *)&local_41;
                          local_41 = 0x30;
                          uVar67 = 1;
                        }
                        else {
                          local_530 = local_40;
                          uVar67 = 0;
                        }
                        local_528 = 0x20;
                        uVar43 = 0;
LAB_00799b51:
                        if (sVar26 == 0) {
                          uVar55 = iVar32 - (uVar43 + (int)uVar67);
LAB_0079925e:
                          if ((sVar23 == 0 && !bVar68) && sVar24 == 0) {
                            if (local_528 == 0x20) {
                              if (0 < (int)uVar55) goto LAB_00799c24;
                              uVar55 = 0;
                            }
                          }
                          else {
                            uVar55 = uVar55 - 1;
                            if (local_528 == 0x20) {
                              if ((int)uVar55 < 1) {
                                uVar55 = 0;
                              }
                              else {
LAB_00799c24:
                                lVar38 = FUN_007a1c80(param_1,0x20);
                                if ((int)uVar55 != lVar38) goto LAB_00799cd8;
                                bVar28 = false;
                                uVar61 = uVar61 + uVar55;
                                uVar35 = (ulong)uVar61;
                                if (((int)uVar61 < 0) || (uVar61 < uVar55)) {
                                  bVar28 = true;
                                }
                                if (bVar28) goto LAB_00798f20;
                                uVar55 = 0;
                                if ((int)uVar61 < 0) goto LAB_00798928;
                              }
                            }
                            if (bVar68) {
                              puVar4 = *(undefined1 **)(param_1 + 10);
                              if (puVar4 < *(undefined1 **)(param_1 + 0xc)) {
                                *(undefined1 **)(param_1 + 10) = puVar4 + 1;
                                *puVar4 = 0x2d;
                              }
                              else {
                                uVar54 = 0x2d;
LAB_0079a69c:
                                iVar32 = FUN_00706570(param_1,uVar54);
                                if (iVar32 == -1) goto LAB_00799cd8;
                              }
                            }
                            else if (sVar24 == 0) {
                              if (sVar23 == 0) goto LAB_007992b1;
                              puVar4 = *(undefined1 **)(param_1 + 10);
                              if (*(undefined1 **)(param_1 + 0xc) <= puVar4) {
                                uVar54 = 0x20;
                                goto LAB_0079a69c;
                              }
                              *(undefined1 **)(param_1 + 10) = puVar4 + 1;
                              *puVar4 = 0x20;
                            }
                            else {
                              puVar4 = *(undefined1 **)(param_1 + 10);
                              if (*(undefined1 **)(param_1 + 0xc) <= puVar4) {
                                uVar54 = 0x2b;
                                goto LAB_0079a69c;
                              }
                              *(undefined1 **)(param_1 + 10) = puVar4 + 1;
                              *puVar4 = 0x2b;
                            }
                            if (uVar61 == 0x7fffffff) goto LAB_00799cd8;
                            uVar61 = uVar61 + 1;
                          }
LAB_007992b1:
                          if (((uVar53 != 0) && (sVar22 != 0)) && ((0x10004UL >> iVar33 & 1) != 0))
                          {
                            puVar4 = *(undefined1 **)(param_1 + 10);
                            if (puVar4 < *(undefined1 **)(param_1 + 0xc)) {
                              *(undefined1 **)(param_1 + 10) = puVar4 + 1;
                              *puVar4 = 0x30;
                            }
                            else {
                              iVar32 = FUN_00706570(param_1,0x30);
                              if (iVar32 == -1) goto LAB_00799cd8;
                            }
                            if (uVar61 == 0x7fffffff) goto LAB_00799cd8;
                            puVar4 = *(undefined1 **)(param_1 + 10);
                            if (puVar4 < *(undefined1 **)(param_1 + 0xc)) {
                              *(undefined1 **)(param_1 + 10) = puVar4 + 1;
                              *puVar4 = (char)uVar30;
                            }
                            else {
                              iVar32 = FUN_00706570(param_1,uVar30);
                              if (iVar32 == -1) goto LAB_00799cd8;
                            }
                            if (uVar61 == 0x7ffffffe) goto LAB_00799cd8;
                            uVar61 = uVar61 + 2;
                          }
                          uVar55 = uVar55 + uVar43;
                          if (0 < (int)uVar55) {
                            lVar38 = FUN_007a1c80(param_1,0x30,(long)(int)uVar55);
                            if ((int)uVar55 != lVar38) goto LAB_00799cd8;
                            bVar68 = false;
                            uVar61 = uVar61 + uVar55;
                            uVar35 = (ulong)uVar61;
                            if (((int)uVar61 < 0) || (uVar61 < uVar55)) {
                              bVar68 = true;
                            }
                            if (bVar68) goto LAB_00798f20;
                            if ((int)uVar61 < 0) goto LAB_00798928;
                          }
                          lVar38 = *(long *)(param_1 + 0x36);
                          if (0x827 < lVar38 - 0x93f160U) {
                            FUN_00703130();
                          }
                          uVar35 = (**(code **)(lVar38 + 0x38))(param_1,local_530,uVar67);
                          if (uVar67 != uVar35) goto LAB_00799cd8;
                          bVar68 = false;
                          uVar36 = (long)(int)uVar61 + uVar67;
                          if (((long)uVar36 < 0) || (uVar36 < uVar67)) {
LAB_0079a454:
                            bVar68 = true;
                          }
LAB_00799376:
                          uVar61 = (uint)uVar36;
                          uVar35 = uVar36 & 0xffffffff;
                          if (uVar36 != (long)(int)uVar61) {
                            bVar68 = true;
                          }
                          if (bVar68) goto LAB_00798f20;
joined_r0x0079a123:
                          if (-1 < (int)uVar61) break;
                          goto LAB_00798928;
                        }
                      }
                      if (bVar68) {
                        puVar4 = *(undefined1 **)(param_1 + 10);
                        if (puVar4 < *(undefined1 **)(param_1 + 0xc)) {
                          *(undefined1 **)(param_1 + 10) = puVar4 + 1;
                          *puVar4 = 0x2d;
                        }
                        else {
                          uVar54 = 0x2d;
LAB_00799cb4:
                          iVar31 = FUN_00706570(param_1,uVar54);
                          if (iVar31 == -1) goto LAB_00799cd8;
                        }
LAB_007999e2:
                        if (uVar61 == 0x7fffffff) goto LAB_00799cd8;
                        iVar32 = iVar32 + -1;
                        uVar61 = uVar61 + 1;
                      }
                      else {
                        if (sVar24 != 0) {
                          puVar4 = *(undefined1 **)(param_1 + 10);
                          if (*(undefined1 **)(param_1 + 0xc) <= puVar4) {
                            uVar54 = 0x2b;
                            goto LAB_00799cb4;
                          }
                          *(undefined1 **)(param_1 + 10) = puVar4 + 1;
                          *puVar4 = 0x2b;
                          goto LAB_007999e2;
                        }
                        if (sVar23 != 0) {
                          puVar4 = *(undefined1 **)(param_1 + 10);
                          if (*(undefined1 **)(param_1 + 0xc) <= puVar4) {
                            uVar54 = 0x20;
                            goto LAB_00799cb4;
                          }
                          *(undefined1 **)(param_1 + 10) = puVar4 + 1;
                          *puVar4 = 0x20;
                          goto LAB_007999e2;
                        }
                      }
                      if (((uVar53 != 0) && (sVar22 != 0)) && ((0x10004UL >> iVar33 & 1) != 0)) {
                        puVar4 = *(undefined1 **)(param_1 + 10);
                        if (puVar4 < *(undefined1 **)(param_1 + 0xc)) {
                          *(undefined1 **)(param_1 + 10) = puVar4 + 1;
                          *puVar4 = 0x30;
                        }
                        else {
                          iVar33 = FUN_00706570(param_1,0x30);
                          if (iVar33 == -1) goto LAB_00799cd8;
                        }
                        if (uVar61 == 0x7fffffff) goto LAB_00799cd8;
                        puVar4 = *(undefined1 **)(param_1 + 10);
                        if (puVar4 < *(undefined1 **)(param_1 + 0xc)) {
                          *(undefined1 **)(param_1 + 10) = puVar4 + 1;
                          *puVar4 = (char)uVar30;
                        }
                        else {
                          iVar33 = FUN_00706570(param_1,uVar30);
                          if (iVar33 == -1) goto LAB_00799cd8;
                        }
                        if (uVar61 == 0x7ffffffe) goto LAB_00799cd8;
                        iVar32 = iVar32 + -2;
                        uVar61 = uVar61 + 2;
                      }
                      uVar30 = iVar32 - (uVar43 + (int)uVar67);
                      if (0 < (int)uVar43) {
                        lVar38 = FUN_007a1c80(param_1,0x30);
                        if ((int)uVar43 != lVar38) goto LAB_00799cd8;
                        bVar68 = false;
                        uVar61 = uVar61 + uVar43;
                        uVar35 = (ulong)uVar61;
                        if (((int)uVar61 < 0) || (uVar61 < uVar43)) {
                          bVar68 = true;
                        }
                        if (bVar68) goto LAB_00798f20;
                        if ((int)uVar61 < 0) goto LAB_00798928;
                      }
                      lVar38 = *(long *)(param_1 + 0x36);
                      if (0x827 < lVar38 - 0x93f160U) {
                        FUN_00703130();
                      }
                      uVar35 = (**(code **)(lVar38 + 0x38))(param_1,local_530,uVar67);
                      if (uVar35 != uVar67) goto LAB_00799cd8;
                      bVar68 = false;
                      uVar53 = (long)(int)uVar61 + uVar67;
                      if (((long)uVar53 < 0) || (uVar53 < uVar67)) {
                        bVar68 = true;
                      }
                      uVar61 = (uint)uVar53;
                      uVar35 = uVar53 & 0xffffffff;
                      if (uVar53 != (long)(int)uVar61) {
                        bVar68 = true;
                      }
                      if (bVar68) goto LAB_00798f20;
                      if ((int)uVar61 < 0) goto LAB_00798928;
LAB_00799acb:
                      if (0 < (int)uVar30) {
LAB_00799ad3:
                        lVar38 = FUN_007a1c80(param_1,0x20,(long)(int)uVar30);
                        if ((int)uVar30 != lVar38) goto LAB_00799cd8;
                        bVar68 = SCARRY4(uVar30,uVar61);
                        uVar61 = uVar30 + uVar61;
                        if (bVar68) goto LAB_00798f20;
LAB_00799afb:
                        uVar35 = (ulong)uVar61;
                        if ((int)uVar61 < 0) goto LAB_00798928;
                      }
                      break;
                    case 0x75:
code_r0x00799464:
                      iVar33 = 10;
LAB_007993aa:
                      uVar55 = *param_3;
                      uVar43 = uVar65;
joined_r0x00799414:
                      if (!bVar56) {
                        if (bVar68) {
                          if (uVar55 < 0x30) {
                            pbVar46 = (byte *)((ulong)uVar55 + *(long *)(param_3 + 4));
                            *param_3 = uVar55 + 8;
                          }
                          else {
                            pbVar46 = *(byte **)(param_3 + 2);
                            *(byte **)(param_3 + 2) = pbVar46 + 8;
                          }
                          sVar24 = 0;
                          uVar53 = (ulong)*pbVar46;
                          sVar23 = 0;
                          bVar68 = false;
                        }
                        else if (bVar5) {
                          if (uVar55 < 0x30) {
                            puVar49 = (ushort *)((ulong)uVar55 + *(long *)(param_3 + 4));
                            *param_3 = uVar55 + 8;
                          }
                          else {
                            puVar49 = *(ushort **)(param_3 + 2);
                            *(ushort **)(param_3 + 2) = puVar49 + 4;
                          }
                          sVar24 = 0;
                          uVar53 = (ulong)*puVar49;
                          bVar68 = false;
                          sVar23 = 0;
                        }
                        else {
                          if (uVar55 < 0x30) {
                            puVar47 = (uint *)((ulong)uVar55 + *(long *)(param_3 + 4));
                            *param_3 = uVar55 + 8;
                          }
                          else {
                            puVar47 = *(uint **)(param_3 + 2);
                            *(uint **)(param_3 + 2) = puVar47 + 2;
                          }
                          sVar24 = 0;
                          uVar53 = (ulong)*puVar47;
                          bVar68 = false;
                          sVar23 = 0;
                        }
                        goto LAB_007990e0;
                      }
                      if (uVar55 < 0x30) {
                        puVar45 = (ulong *)((ulong)uVar55 + *(long *)(param_3 + 4));
                        *param_3 = uVar55 + 8;
                      }
                      else {
                        puVar45 = *(ulong **)(param_3 + 2);
                        *(ulong **)(param_3 + 2) = puVar45 + 1;
                      }
                      sVar24 = 0;
                      uVar53 = *puVar45;
                      bVar68 = false;
                      sVar23 = 0;
                      if (uVar43 != 0xffffffff) goto LAB_007990ea;
                      goto LAB_007993ea;
                    }
                    pbVar66 = pbVar66 + 1;
                    local_500 = local_500 + 1;
                    pcVar37 = (char *)thunk_FUN_00714230(pbVar66,0x25);
                    lVar38 = *(long *)(param_1 + 0x36);
                    uVar35 = (long)pcVar37 - (long)pbVar66;
                    if (0x827 < lVar38 - 0x93f160U) {
                      FUN_00703130();
                    }
                    uVar53 = (**(code **)(lVar38 + 0x38))(param_1,pbVar66,uVar35);
                    if (uVar53 == uVar35) {
                      bVar68 = false;
                      uVar53 = (long)(int)uVar61 + uVar35;
                      if (((long)uVar53 < 0) || (uVar53 < uVar35)) {
                        bVar68 = true;
                      }
                      uVar35 = uVar53 & 0xffffffff;
                      if (uVar53 != (long)(int)uVar53) {
                        bVar68 = true;
                      }
                      if (!bVar68) goto code_r0x00798de1;
                      goto LAB_00798f20;
                    }
                    goto LAB_00799cd8;
                  case 99:
                    goto code_r0x00798e64;
                  case 100:
                  case 0x69:
                    goto code_r0x00799474;
                  case 0x68:
code_r0x007996c4:
                    sVar14 = sVar27;
                    sVar10 = sVar26;
                    local_4f0 = sVar25;
                    local_514 = sVar24;
                    local_50c = sVar23;
                    local_510 = sVar22;
                    local_528 = bVar21;
                    local_540 = iVar32;
                    uVar55 = uVar64;
                    bVar52 = pbVar46[1];
                    uVar30 = (uint)bVar52;
                    pbVar66 = pbVar46 + 1;
                    bVar5 = true;
                    uVar43 = uVar55;
                    uVar62 = uVar55;
                    uVar65 = uVar55;
                    uVar63 = uVar55;
                    bVar68 = bVar28;
                    bVar7 = true;
                    iVar32 = local_540;
                    bVar21 = local_528;
                    bVar15 = true;
                    sVar22 = local_510;
                    sVar23 = local_50c;
                    sVar24 = local_514;
                    sVar25 = local_4f0;
                    bVar56 = bVar19;
                    sVar26 = sVar10;
                    sVar27 = sVar14;
                    switch(bVar52) {
                    case 0x25:
                      goto code_r0x007994ac;
                    case 0x42:
                    case 0x62:
                      goto code_r0x007993a4;
                    case 0x58:
                    case 0x78:
                      goto code_r0x00799404;
                    case 100:
                    case 0x69:
                      goto code_r0x00799474;
                    case 0x68:
                      bVar52 = pbVar46[2];
                      uVar30 = (uint)bVar52;
                      pbVar66 = pbVar46 + 2;
                      bVar15 = false;
                      bVar7 = false;
                      bVar5 = false;
                      bVar68 = true;
                      uVar64 = uVar55;
                      uVar60 = uVar29;
                      bVar11 = bVar12;
                      sVar59 = sVar58;
                      bVar56 = bVar18;
                      sVar20 = sVar10;
                      switch(bVar52) {
                      case 0x25:
                        goto code_r0x007994ac;
                      case 0x41:
                      case 0x45:
                      case 0x46:
                      case 0x47:
                      case 0x61:
                      case 0x65:
                      case 0x66:
                      case 0x67:
                        goto code_r0x00798a78;
                      case 0x42:
                      case 0x62:
                        goto code_r0x007993a4;
                      case 0x43:
                        goto code_r0x00798c74;
                      case 0x53:
                      case 0x73:
                        goto code_r0x00798e04;
                      case 0x58:
                      case 0x78:
                        goto code_r0x00799404;
                      case 99:
                        goto code_r0x00798e64;
                      case 100:
                      case 0x69:
                        goto code_r0x00799474;
                      case 0x6d:
                        goto code_r0x00798f44;
                      case 0x6e:
                        goto code_r0x00799044;
                      case 0x6f:
                        goto code_r0x00799454;
                      case 0x70:
                        goto code_r0x00799094;
                      case 0x75:
                        goto code_r0x00799464;
                      }
                      break;
                    case 0x6e:
                      goto code_r0x00799044;
                    case 0x6f:
                      goto code_r0x00799454;
                    case 0x75:
                      goto code_r0x00799464;
                    }
                    break;
                  case 0x6c:
code_r0x00799534:
                    sVar14 = sVar27;
                    sVar10 = sVar26;
                    local_4f0 = sVar25;
                    local_514 = sVar24;
                    local_50c = sVar23;
                    local_510 = sVar22;
                    local_528 = bVar21;
                    local_540 = iVar32;
                    uVar55 = uVar64;
                    bVar52 = pbVar46[1];
                    uVar30 = (uint)bVar52;
                    pbVar46 = pbVar46 + 1;
                    bVar56 = true;
                    pbVar66 = pbVar46;
                    uVar43 = uVar55;
                    uVar62 = uVar55;
                    uVar65 = uVar55;
                    uVar63 = uVar55;
                    uVar64 = uVar55;
                    bVar68 = bVar28;
                    bVar5 = bVar6;
                    bVar7 = bVar6;
                    uVar60 = 0;
                    iVar32 = local_540;
                    bVar11 = true;
                    bVar21 = local_528;
                    bVar15 = bVar16;
                    sVar59 = 1;
                    sVar22 = local_510;
                    sVar23 = local_50c;
                    sVar24 = local_514;
                    sVar25 = local_4f0;
                    sVar26 = sVar10;
                    sVar20 = sVar10;
                    sVar27 = sVar14;
                    switch(bVar52) {
                    case 0x25:
                      goto code_r0x007994ac;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                      goto code_r0x00798a78;
                    case 0x42:
                    case 0x62:
                      goto code_r0x007993a4;
                    case 0x43:
                      goto code_r0x00798c74;
                    case 0x53:
                    case 0x73:
                      goto code_r0x00798e04;
                    case 0x58:
                    case 0x78:
                      goto code_r0x00799404;
                    case 99:
                      goto code_r0x00798e64;
                    case 100:
                    case 0x69:
                      goto code_r0x00799474;
                    case 0x6c:
                      goto code_r0x007994f4;
                    case 0x6d:
                      goto code_r0x00798f44;
                    case 0x6e:
                      goto code_r0x00799044;
                    case 0x6f:
                      goto code_r0x00799454;
                    case 0x70:
                      goto code_r0x00799094;
                    case 0x75:
                      goto code_r0x00799464;
                    }
                    break;
                  case 0x6d:
                    goto code_r0x00798f44;
                  case 0x6e:
                    goto code_r0x00799044;
                  case 0x6f:
                    goto code_r0x00799454;
                  case 0x70:
                    goto code_r0x00799094;
                  case 0x75:
                    goto code_r0x00799464;
                  }
code_r0x007988c4:
                  if (bVar52 != 0) {
LAB_007988cc:
                    uVar36 = (ulong)local_500;
                    goto LAB_007988d0;
                  }
                  uVar35 = 0xffffffff;
                  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
                  goto LAB_00798928;
                }
                local_4c8 = 0;
                local_4e8 = (char *)0xffffffffffffffff;
              }
              else {
                local_4c8 = 0;
                local_4e8 = (char *)0xffffffffffffffff;
                local_4d0 = (char *)0x0;
              }
LAB_007988d0:
              uVar30 = FUN_00796120(param_1,param_2,local_4c8,param_3,&local_450,uVar35,uVar36,
                                    pcVar34,local_428,iVar3,local_4e8,local_4d0,param_4);
              uVar35 = (ulong)uVar30;
            }
          }
          else {
LAB_00798f20:
            uVar35 = 0xffffffff;
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4b;
          }
LAB_00798928:
          uVar30 = *param_1;
        }
        else {
LAB_00799cd8:
          uVar35 = 0xffffffff;
          uVar30 = *param_1;
        }
        if ((uVar30 & 0x8000) == 0) {
          piVar48 = *(int **)(param_1 + 0x22);
          iVar3 = piVar48[1];
          piVar48[1] = iVar3 + -1;
          if (iVar3 + -1 == 0) {
            piVar48[2] = 0;
            piVar48[3] = 0;
            LOCK();
            iVar3 = *piVar48;
            *piVar48 = 0;
            UNLOCK();
            if (1 < iVar3) {
              FUN_00709660();
            }
          }
        }
        if (bVar9) {
          FUN_00709560(&local_478);
        }
      }
    }
    else {
      uVar35 = 0xffffffff;
      *param_1 = uVar30 | 0x20;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
    }
  }
  else {
    if (param_1[0x30] == 0xffffffff) goto LAB_0079873d;
    uVar35 = 0xffffffff;
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar35;
  }
LAB_0079a9ac:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
code_r0x007997b1:
  local_540 = local_540 * 10 + uVar40;
  pbVar66 = pbVar46;
  uVar40 = uVar41;
  if (9 < uVar41) goto LAB_007997c0;
  goto LAB_00799776;
code_r0x00798de1:
  if (((int)uVar53 < 0) || (*pcVar37 == '\0')) goto LAB_00798928;
  goto LAB_007988b0;
}

