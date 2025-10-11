
ulong __vfprintf_internal(_IO_FILE *param_1,char *param_2,uint *param_3,uint param_4)

{
  unkbyte10 Var1;
  char cVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  short sVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  short sVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  short sVar17;
  byte bVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  bool bVar25;
  ushort uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  char *pcVar31;
  ulong uVar32;
  ulong uVar33;
  size_t sVar34;
  char *pcVar35;
  __ssize_t _Var36;
  unkbyte10 *pVar37;
  uint uVar38;
  uint uVar39;
  wchar_t *pwVar40;
  uint uVar41;
  long *plVar42;
  undefined8 *puVar43;
  ulong *puVar44;
  byte *pbVar45;
  uint *puVar46;
  int *piVar47;
  ushort *puVar48;
  byte *pbVar49;
  short *psVar50;
  byte bVar51;
  ulong uVar52;
  bool bVar53;
  uint uVar54;
  bool bVar55;
  short sVar56;
  short sVar58;
  ushort uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar63;
  uint uVar64;
  size_t sVar65;
  byte *pbVar66;
  long in_FS_OFFSET;
  bool bVar67;
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
  _IO_FILE *local_470;
  mbstate_t local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  char local_438 [16];
  char local_428 [999];
  undefined1 local_41;
  long local_40 [2];
  short sVar57;
  uint uVar62;
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)(in_FS_OFFSET + -0x58);
  if (param_1->_mode == 0) {
    param_1->_mode = -1;
LAB_0078ee0d:
    uVar27 = param_1->_flags;
    if ((uVar27 & 8) == 0) {
      if (param_2 == (char *)0x0) {
        uVar32 = 0xffffffff;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      }
      else {
        if ((uVar27 & 2) != 0) {
          if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar32 = buffered_vfprintf(param_1,param_2,param_3,param_4);
            return uVar32;
          }
          goto LAB_0079107c;
        }
        local_450 = *(undefined8 *)param_3;
        uStack_448 = *(undefined8 *)(param_3 + 2);
        local_440 = *(undefined8 *)(param_3 + 4);
        pcVar31 = strchrnul(param_2,0x25);
        bVar5 = false;
        local_470 = param_1;
        if ((uVar27 & 0x8000) == 0) {
          local_478 = funlockfile;
          __libc_cleanup_push_defer(&local_478);
          if ((param_1->_flags & 0x8000U) == 0) {
            lVar4 = *(long *)(in_FS_OFFSET + 0x10);
            piVar47 = (int *)param_1->_lock;
            if (*(long *)(piVar47 + 2) != lVar4) {
              LOCK();
              iVar29 = *piVar47;
              if (iVar29 == 0) {
                *piVar47 = 1;
              }
              UNLOCK();
              if (iVar29 != 0) {
                __lll_lock_wait_private();
              }
              piVar47 = (int *)param_1->_lock;
              *(long *)(piVar47 + 2) = lVar4;
            }
            piVar47[1] = piVar47[1] + 1;
            bVar5 = true;
          }
          else {
            bVar5 = true;
          }
        }
        lVar4 = *(long *)(param_1 + 1);
        uVar52 = (long)pcVar31 - (long)param_2;
        if (0x827 < lVar4 - 0x932180U) {
          _IO_vtable_check();
        }
        uVar32 = (**(code **)(lVar4 + 0x38))(param_1,param_2,uVar52);
        if (uVar52 == uVar32) {
          uVar32 = uVar52 & 0xffffffff;
          uVar33 = uVar52 >> 0x3f;
          if (uVar52 != (long)(int)uVar52) {
            uVar33 = 1;
          }
          if ((int)uVar33 == 0) {
            if ((-1 < (int)uVar52) && (*pcVar31 != '\0')) {
              local_4d0 = __printf_function_table;
              if (__printf_function_table == (char *)0x0) {
                if ((__printf_modifier_table == 0) && (__printf_va_arg_table == 0)) {
                  local_4c8 = 0;
                  local_500 = 0;
                  local_4e8 = (char *)0xffffffffffffffff;
                  pcVar35 = pcVar31;
LAB_0078ef80:
                  uVar60 = (uint)uVar32;
                  bVar51 = pcVar35[1];
                  uVar27 = (uint)bVar51;
                  if (0x5a < (byte)(bVar51 - 0x20)) goto code_r0x0078ef94;
                  bVar67 = false;
                  bVar25 = false;
                  bVar16 = false;
                  sVar56 = 0;
                  bVar10 = false;
                  bVar15 = false;
                  sVar57 = 0;
                  bVar8 = false;
                  bVar14 = false;
                  bVar12 = false;
                  uVar26 = 0;
                  pbVar45 = (byte *)(pcVar35 + 1);
                  uVar63 = 0xffffffff;
                  uVar62 = 0xffffffff;
                  uVar64 = 0xffffffff;
                  uVar61 = 0xffffffff;
                  uVar41 = 0xffffffff;
                  uVar54 = 0xffffffff;
                  sVar22 = 0;
                  local_4f0 = 0;
                  iVar29 = 0;
                  local_540 = 0;
                  sVar24 = 0;
                  sVar11 = 0;
                  sVar21 = 0;
                  local_514 = 0;
                  sVar23 = 0;
                  sVar6 = 0;
                  sVar20 = 0;
                  local_50c = 0;
                  sVar19 = 0;
                  local_510 = 0;
                  bVar18 = 0x20;
                  local_528 = 0x20;
                  pbVar66 = pbVar45;
                  uVar59 = 0;
                  bVar7 = bVar10;
                  bVar9 = bVar10;
                  bVar53 = bVar14;
                  bVar13 = bVar14;
                  sVar58 = sVar56;
                  bVar55 = bVar16;
                  sVar17 = 0;
                  switch(bVar51) {
                  case 0x20:
code_r0x0078fd14:
                    sVar11 = sVar24;
                    sVar6 = sVar23;
                    local_4f0 = sVar22;
                    local_514 = sVar21;
                    local_510 = sVar19;
                    local_528 = bVar18;
                    bVar51 = pbVar45[1];
                    uVar27 = (uint)bVar51;
                    pbVar45 = pbVar45 + 1;
                    sVar20 = 1;
                    local_50c = 1;
                    pbVar66 = pbVar45;
                    bVar67 = bVar25;
                    uVar59 = uVar26;
                    bVar7 = bVar8;
                    bVar9 = bVar8;
                    bVar18 = local_528;
                    bVar53 = bVar12;
                    bVar13 = bVar12;
                    sVar58 = sVar57;
                    sVar19 = local_510;
                    sVar21 = local_514;
                    sVar22 = local_4f0;
                    bVar55 = bVar15;
                    sVar17 = sVar6;
                    sVar23 = sVar6;
                    sVar24 = sVar11;
                    switch(bVar51) {
                    case 0x20:
                      goto code_r0x0078fd14;
                    default:
                      break;
                    case 0x23:
code_r0x0078fc44:
                      sVar11 = sVar24;
                      sVar6 = sVar23;
                      local_4f0 = sVar22;
                      local_514 = sVar21;
                      local_50c = sVar20;
                      local_528 = bVar18;
                      bVar51 = pbVar45[1];
                      uVar27 = (uint)bVar51;
                      pbVar45 = pbVar45 + 1;
                      sVar19 = 1;
                      local_510 = 1;
                      pbVar66 = pbVar45;
                      bVar67 = bVar25;
                      uVar59 = uVar26;
                      bVar7 = bVar8;
                      bVar9 = bVar8;
                      bVar18 = local_528;
                      bVar53 = bVar12;
                      bVar13 = bVar12;
                      sVar58 = sVar57;
                      sVar20 = local_50c;
                      sVar21 = local_514;
                      sVar22 = local_4f0;
                      bVar55 = bVar15;
                      sVar23 = sVar6;
                      sVar17 = sVar6;
                      sVar24 = sVar11;
                      switch(bVar51) {
                      case 0x20:
                        goto code_r0x0078fd14;
                      default:
                        break;
                      case 0x23:
                        goto code_r0x0078fc44;
                      case 0x25:
                        goto code_r0x0078fb7c;
                      case 0x27:
code_r0x0078ff54:
                        sVar6 = sVar23;
                        local_4f0 = sVar22;
                        local_514 = sVar21;
                        local_50c = sVar20;
                        local_510 = sVar19;
                        local_528 = bVar18;
                        if (local_4e8 == (char *)0xffffffffffffffff) {
                          pcVar35 = *(char **)(**(long **)(in_FS_OFFSET + -0xc0) + 0x50);
                          local_4d0 = *(char **)(**(long **)(in_FS_OFFSET + -0xc0) + 0x48);
                          cVar2 = *pcVar35;
                          if ((cVar2 == '\0') || (cVar2 == '\x7f')) {
                            local_4e8 = (char *)0x0;
                          }
                          else {
                            local_4e8 = (char *)0x0;
                            if (*local_4d0 != '\0') {
                              local_4e8 = pcVar35;
                            }
                          }
                        }
                        bVar51 = pbVar45[1];
                        uVar27 = (uint)bVar51;
                        pbVar45 = pbVar45 + 1;
                        sVar24 = 1;
                        sVar11 = 1;
                        pbVar66 = pbVar45;
                        bVar67 = bVar25;
                        uVar59 = uVar26;
                        bVar7 = bVar8;
                        bVar9 = bVar8;
                        bVar18 = local_528;
                        bVar13 = bVar12;
                        bVar53 = bVar12;
                        sVar58 = sVar57;
                        sVar19 = local_510;
                        sVar20 = local_50c;
                        sVar21 = local_514;
                        sVar22 = local_4f0;
                        bVar55 = bVar15;
                        sVar17 = sVar6;
                        sVar23 = sVar6;
                        switch(bVar51) {
                        case 0x20:
                          goto code_r0x0078fd14;
                        default:
                          break;
                        case 0x23:
                          goto code_r0x0078fc44;
                        case 0x25:
                          goto code_r0x0078fb7c;
                        case 0x27:
                          goto code_r0x0078ff54;
                        case 0x2a:
                          goto code_r0x0078fec4;
                        case 0x2b:
code_r0x0078fccc:
                          sVar11 = sVar24;
                          sVar6 = sVar23;
                          local_4f0 = sVar22;
                          local_50c = sVar20;
                          local_510 = sVar19;
                          local_528 = bVar18;
                          bVar51 = pbVar45[1];
                          uVar27 = (uint)bVar51;
                          pbVar45 = pbVar45 + 1;
                          sVar21 = 1;
                          local_514 = 1;
                          pbVar66 = pbVar45;
                          bVar67 = bVar25;
                          uVar59 = uVar26;
                          bVar7 = bVar8;
                          bVar9 = bVar8;
                          bVar18 = local_528;
                          bVar53 = bVar12;
                          bVar13 = bVar12;
                          sVar58 = sVar57;
                          sVar19 = local_510;
                          sVar20 = local_50c;
                          sVar22 = local_4f0;
                          bVar55 = bVar15;
                          sVar17 = sVar6;
                          sVar23 = sVar6;
                          sVar24 = sVar11;
                          switch(bVar51) {
                          case 0x20:
                            goto code_r0x0078fd14;
                          default:
                            break;
                          case 0x23:
                            goto code_r0x0078fc44;
                          case 0x25:
                            goto code_r0x0078fb7c;
                          case 0x27:
                            goto code_r0x0078ff54;
                          case 0x2a:
                            goto code_r0x0078fec4;
                          case 0x2b:
                            goto code_r0x0078fccc;
                          case 0x2d:
code_r0x0078fc84:
                            sVar11 = sVar24;
                            local_4f0 = sVar22;
                            local_514 = sVar21;
                            local_50c = sVar20;
                            local_510 = sVar19;
                            bVar51 = pbVar45[1];
                            uVar27 = (uint)bVar51;
                            pbVar45 = pbVar45 + 1;
                            bVar18 = 0x20;
                            local_528 = 0x20;
                            sVar23 = 1;
                            sVar6 = 1;
                            pbVar66 = pbVar45;
                            bVar67 = bVar25;
                            uVar59 = uVar26;
                            bVar7 = bVar8;
                            bVar9 = bVar8;
                            bVar13 = bVar12;
                            bVar53 = bVar12;
                            sVar58 = sVar57;
                            sVar19 = local_510;
                            sVar20 = local_50c;
                            sVar21 = local_514;
                            sVar22 = local_4f0;
                            bVar55 = bVar15;
                            sVar17 = 1;
                            sVar24 = sVar11;
                            switch(bVar51) {
                            case 0x20:
                              goto code_r0x0078fd14;
                            default:
                              break;
                            case 0x23:
                              goto code_r0x0078fc44;
                            case 0x25:
                              goto code_r0x0078fb7c;
                            case 0x27:
                              goto code_r0x0078ff54;
                            case 0x2a:
                              goto code_r0x0078fec4;
                            case 0x2b:
                              goto code_r0x0078fccc;
                            case 0x2d:
                              goto code_r0x0078fc84;
                            case 0x2e:
                              goto code_r0x0078fdd4;
                            case 0x30:
code_r0x0078ffa4:
                              sVar11 = sVar24;
                              sVar6 = sVar23;
                              local_4f0 = sVar22;
                              local_514 = sVar21;
                              local_50c = sVar20;
                              local_510 = sVar19;
                              bVar51 = pbVar45[1];
                              uVar27 = (uint)bVar51;
                              pbVar45 = pbVar45 + 1;
                              local_528 = bVar18;
                              if (sVar6 == 0) {
                                local_528 = 0x30;
                              }
                              pbVar66 = pbVar45;
                              bVar67 = bVar25;
                              uVar59 = uVar26;
                              bVar7 = bVar8;
                              bVar9 = bVar8;
                              bVar18 = local_528;
                              bVar53 = bVar12;
                              bVar13 = bVar12;
                              sVar58 = sVar57;
                              sVar19 = local_510;
                              sVar20 = local_50c;
                              sVar21 = local_514;
                              sVar22 = local_4f0;
                              bVar55 = bVar15;
                              sVar17 = sVar6;
                              sVar23 = sVar6;
                              sVar24 = sVar11;
                              switch(bVar51) {
                              case 0x20:
                                goto code_r0x0078fd14;
                              default:
                                break;
                              case 0x23:
                                goto code_r0x0078fc44;
                              case 0x25:
                                goto code_r0x0078fb7c;
                              case 0x27:
                                goto code_r0x0078ff54;
                              case 0x2a:
                                goto code_r0x0078fec4;
                              case 0x2b:
                                goto code_r0x0078fccc;
                              case 0x2d:
                                goto code_r0x0078fc84;
                              case 0x2e:
                                goto code_r0x0078fdd4;
                              case 0x30:
                                goto code_r0x0078ffa4;
                              case 0x31:
                              case 0x32:
                              case 0x33:
                              case 0x34:
                              case 0x35:
                              case 0x36:
                              case 0x37:
                              case 0x38:
                              case 0x39:
                                goto code_r0x0078fe24;
                              case 0x41:
                              case 0x45:
                              case 0x46:
                              case 0x47:
                              case 0x61:
                              case 0x65:
                              case 0x66:
                              case 0x67:
                                goto code_r0x0078f148;
                              case 0x42:
                              case 0x62:
                                goto code_r0x0078fa74;
                              case 0x43:
                                goto code_r0x0078f344;
                              case 0x49:
code_r0x0078fff4:
                                sVar11 = sVar24;
                                sVar6 = sVar23;
                                local_514 = sVar21;
                                local_50c = sVar20;
                                local_510 = sVar19;
                                local_528 = bVar18;
                                bVar51 = pbVar45[1];
                                uVar27 = (uint)bVar51;
                                pbVar45 = pbVar45 + 1;
                                sVar22 = 1;
                                local_4f0 = 1;
                                pbVar66 = pbVar45;
                                bVar67 = bVar25;
                                uVar59 = uVar26;
                                bVar7 = bVar10;
                                bVar9 = bVar10;
                                bVar18 = local_528;
                                bVar53 = bVar12;
                                bVar13 = bVar12;
                                sVar58 = sVar56;
                                sVar19 = local_510;
                                sVar20 = local_50c;
                                sVar21 = local_514;
                                bVar55 = bVar16;
                                sVar17 = sVar6;
                                sVar23 = sVar6;
                                sVar24 = sVar11;
                                switch(bVar51) {
                                case 0x20:
                                  goto code_r0x0078fd14;
                                default:
                                  break;
                                case 0x23:
                                  goto code_r0x0078fc44;
                                case 0x25:
                                  goto code_r0x0078fb7c;
                                case 0x27:
                                  goto code_r0x0078ff54;
                                case 0x2a:
                                  goto code_r0x0078fec4;
                                case 0x2b:
                                  goto code_r0x0078fccc;
                                case 0x2d:
                                  goto code_r0x0078fc84;
                                case 0x2e:
                                  goto code_r0x0078fdd4;
                                case 0x30:
                                  goto code_r0x0078ffa4;
                                case 0x31:
                                case 0x32:
                                case 0x33:
                                case 0x34:
                                case 0x35:
                                case 0x36:
                                case 0x37:
                                case 0x38:
                                case 0x39:
                                  goto code_r0x0078fe24;
                                case 0x41:
                                case 0x45:
                                case 0x46:
                                case 0x47:
                                case 0x61:
                                case 0x65:
                                case 0x66:
                                case 0x67:
                                  goto code_r0x0078f148;
                                case 0x42:
                                case 0x62:
                                  goto code_r0x0078fa74;
                                case 0x43:
                                  goto code_r0x0078f344;
                                case 0x49:
                                  goto code_r0x0078fff4;
                                case 0x4c:
                                case 0x71:
                                  goto code_r0x0078fbc4;
                                case 0x53:
                                case 0x73:
                                  goto code_r0x0078f4d4;
                                case 0x58:
                                case 0x78:
                                  goto code_r0x0078fad4;
                                case 0x5a:
                                case 0x7a:
                                  goto code_r0x0078fbb4;
                                case 99:
                                  goto code_r0x0078f534;
                                case 100:
                                case 0x69:
                                  goto code_r0x0078fb44;
                                case 0x68:
                                  goto code_r0x0078fd94;
                                case 0x6a:
                                case 0x74:
                                  goto code_r0x0078f108;
                                case 0x6c:
                                  goto code_r0x0078fc04;
                                case 0x6d:
                                  goto code_r0x0078f614;
                                case 0x6e:
                                  goto code_r0x0078f714;
                                case 0x6f:
                                  goto code_r0x0078fb24;
                                case 0x70:
                                  goto code_r0x0078f764;
                                case 0x75:
                                  goto code_r0x0078fb34;
                                }
                              case 0x4c:
                              case 0x71:
                                goto code_r0x0078fbc4;
                              case 0x53:
                              case 0x73:
                                goto code_r0x0078f4d4;
                              case 0x58:
                              case 0x78:
                                goto code_r0x0078fad4;
                              case 0x5a:
                              case 0x7a:
                                goto code_r0x0078fbb4;
                              case 99:
                                goto code_r0x0078f534;
                              case 100:
                              case 0x69:
                                goto code_r0x0078fb44;
                              case 0x68:
                                goto code_r0x0078fd94;
                              case 0x6a:
                              case 0x74:
                                goto code_r0x0078f108;
                              case 0x6c:
                                goto code_r0x0078fc04;
                              case 0x6d:
                                goto code_r0x0078f614;
                              case 0x6e:
                                goto code_r0x0078f714;
                              case 0x6f:
                                goto code_r0x0078fb24;
                              case 0x70:
                                goto code_r0x0078f764;
                              case 0x75:
                                goto code_r0x0078fb34;
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
                              goto code_r0x0078fe24;
                            case 0x41:
                            case 0x45:
                            case 0x46:
                            case 0x47:
                            case 0x61:
                            case 0x65:
                            case 0x66:
                            case 0x67:
                              goto code_r0x0078f148;
                            case 0x42:
                            case 0x62:
                              goto code_r0x0078fa74;
                            case 0x43:
                              goto code_r0x0078f344;
                            case 0x49:
                              goto code_r0x0078fff4;
                            case 0x4c:
                            case 0x71:
                              goto code_r0x0078fbc4;
                            case 0x53:
                            case 0x73:
                              goto code_r0x0078f4d4;
                            case 0x58:
                            case 0x78:
                              goto code_r0x0078fad4;
                            case 0x5a:
                            case 0x7a:
                              goto code_r0x0078fbb4;
                            case 99:
                              goto code_r0x0078f534;
                            case 100:
                            case 0x69:
                              goto code_r0x0078fb44;
                            case 0x68:
                              goto code_r0x0078fd94;
                            case 0x6a:
                            case 0x74:
                              goto code_r0x0078f108;
                            case 0x6c:
                              goto code_r0x0078fc04;
                            case 0x6d:
                              goto code_r0x0078f614;
                            case 0x6e:
                              goto code_r0x0078f714;
                            case 0x6f:
                              goto code_r0x0078fb24;
                            case 0x70:
                              goto code_r0x0078f764;
                            case 0x75:
                              goto code_r0x0078fb34;
                            }
                          case 0x2e:
                            goto code_r0x0078fdd4;
                          case 0x30:
                            goto code_r0x0078ffa4;
                          case 0x31:
                          case 0x32:
                          case 0x33:
                          case 0x34:
                          case 0x35:
                          case 0x36:
                          case 0x37:
                          case 0x38:
                          case 0x39:
                            goto code_r0x0078fe24;
                          case 0x41:
                          case 0x45:
                          case 0x46:
                          case 0x47:
                          case 0x61:
                          case 0x65:
                          case 0x66:
                          case 0x67:
                            goto code_r0x0078f148;
                          case 0x42:
                          case 0x62:
                            goto code_r0x0078fa74;
                          case 0x43:
                            goto code_r0x0078f344;
                          case 0x49:
                            goto code_r0x0078fff4;
                          case 0x4c:
                          case 0x71:
                            goto code_r0x0078fbc4;
                          case 0x53:
                          case 0x73:
                            goto code_r0x0078f4d4;
                          case 0x58:
                          case 0x78:
                            goto code_r0x0078fad4;
                          case 0x5a:
                          case 0x7a:
                            goto code_r0x0078fbb4;
                          case 99:
                            goto code_r0x0078f534;
                          case 100:
                          case 0x69:
                            goto code_r0x0078fb44;
                          case 0x68:
                            goto code_r0x0078fd94;
                          case 0x6a:
                          case 0x74:
                            goto code_r0x0078f108;
                          case 0x6c:
                            goto code_r0x0078fc04;
                          case 0x6d:
                            goto code_r0x0078f614;
                          case 0x6e:
                            goto code_r0x0078f714;
                          case 0x6f:
                            goto code_r0x0078fb24;
                          case 0x70:
                            goto code_r0x0078f764;
                          case 0x75:
                            goto code_r0x0078fb34;
                          }
                        case 0x2d:
                          goto code_r0x0078fc84;
                        case 0x2e:
                          goto code_r0x0078fdd4;
                        case 0x30:
                          goto code_r0x0078ffa4;
                        case 0x31:
                        case 0x32:
                        case 0x33:
                        case 0x34:
                        case 0x35:
                        case 0x36:
                        case 0x37:
                        case 0x38:
                        case 0x39:
                          goto code_r0x0078fe24;
                        case 0x41:
                        case 0x45:
                        case 0x46:
                        case 0x47:
                        case 0x61:
                        case 0x65:
                        case 0x66:
                        case 0x67:
                          goto code_r0x0078f148;
                        case 0x42:
                        case 0x62:
                          goto code_r0x0078fa74;
                        case 0x43:
                          goto code_r0x0078f344;
                        case 0x49:
                          goto code_r0x0078fff4;
                        case 0x4c:
                        case 0x71:
                          goto code_r0x0078fbc4;
                        case 0x53:
                        case 0x73:
                          goto code_r0x0078f4d4;
                        case 0x58:
                        case 0x78:
                          goto code_r0x0078fad4;
                        case 0x5a:
                        case 0x7a:
                          goto code_r0x0078fbb4;
                        case 99:
                          goto code_r0x0078f534;
                        case 100:
                        case 0x69:
                          goto code_r0x0078fb44;
                        case 0x68:
                          goto code_r0x0078fd94;
                        case 0x6a:
                        case 0x74:
                          goto code_r0x0078f108;
                        case 0x6c:
                          goto code_r0x0078fc04;
                        case 0x6d:
                          goto code_r0x0078f614;
                        case 0x6e:
                          goto code_r0x0078f714;
                        case 0x6f:
                          goto code_r0x0078fb24;
                        case 0x70:
                          goto code_r0x0078f764;
                        case 0x75:
                          goto code_r0x0078fb34;
                        }
                      case 0x2a:
                        goto code_r0x0078fec4;
                      case 0x2b:
                        goto code_r0x0078fccc;
                      case 0x2d:
                        goto code_r0x0078fc84;
                      case 0x2e:
                        goto code_r0x0078fdd4;
                      case 0x30:
                        goto code_r0x0078ffa4;
                      case 0x31:
                      case 0x32:
                      case 0x33:
                      case 0x34:
                      case 0x35:
                      case 0x36:
                      case 0x37:
                      case 0x38:
                      case 0x39:
                        goto code_r0x0078fe24;
                      case 0x41:
                      case 0x45:
                      case 0x46:
                      case 0x47:
                      case 0x61:
                      case 0x65:
                      case 0x66:
                      case 0x67:
                        goto code_r0x0078f148;
                      case 0x42:
                      case 0x62:
                        goto code_r0x0078fa74;
                      case 0x43:
                        goto code_r0x0078f344;
                      case 0x49:
                        goto code_r0x0078fff4;
                      case 0x4c:
                      case 0x71:
                        goto code_r0x0078fbc4;
                      case 0x53:
                      case 0x73:
                        goto code_r0x0078f4d4;
                      case 0x58:
                      case 0x78:
                        goto code_r0x0078fad4;
                      case 0x5a:
                      case 0x7a:
                        goto code_r0x0078fbb4;
                      case 99:
                        goto code_r0x0078f534;
                      case 100:
                      case 0x69:
                        goto code_r0x0078fb44;
                      case 0x68:
                        goto code_r0x0078fd94;
                      case 0x6a:
                      case 0x74:
                        goto code_r0x0078f108;
                      case 0x6c:
                        goto code_r0x0078fc04;
                      case 0x6d:
                        goto code_r0x0078f614;
                      case 0x6e:
                        goto code_r0x0078f714;
                      case 0x6f:
                        goto code_r0x0078fb24;
                      case 0x70:
                        goto code_r0x0078f764;
                      case 0x75:
                        goto code_r0x0078fb34;
                      }
                    case 0x25:
                      goto code_r0x0078fb7c;
                    case 0x27:
                      goto code_r0x0078ff54;
                    case 0x2a:
                      goto code_r0x0078fec4;
                    case 0x2b:
                      goto code_r0x0078fccc;
                    case 0x2d:
                      goto code_r0x0078fc84;
                    case 0x2e:
                      goto code_r0x0078fdd4;
                    case 0x30:
                      goto code_r0x0078ffa4;
                    case 0x31:
                    case 0x32:
                    case 0x33:
                    case 0x34:
                    case 0x35:
                    case 0x36:
                    case 0x37:
                    case 0x38:
                    case 0x39:
                      goto code_r0x0078fe24;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                      goto code_r0x0078f148;
                    case 0x42:
                    case 0x62:
                      goto code_r0x0078fa74;
                    case 0x43:
                      goto code_r0x0078f344;
                    case 0x49:
                      goto code_r0x0078fff4;
                    case 0x4c:
                    case 0x71:
                      goto code_r0x0078fbc4;
                    case 0x53:
                    case 0x73:
                      goto code_r0x0078f4d4;
                    case 0x58:
                    case 0x78:
                      goto code_r0x0078fad4;
                    case 0x5a:
                    case 0x7a:
                      goto code_r0x0078fbb4;
                    case 99:
                      goto code_r0x0078f534;
                    case 100:
                    case 0x69:
                      goto code_r0x0078fb44;
                    case 0x68:
                      goto code_r0x0078fd94;
                    case 0x6a:
                    case 0x74:
                      goto code_r0x0078f108;
                    case 0x6c:
                      goto code_r0x0078fc04;
                    case 0x6d:
                      goto code_r0x0078f614;
                    case 0x6e:
                      goto code_r0x0078f714;
                    case 0x6f:
                      goto code_r0x0078fb24;
                    case 0x70:
                      goto code_r0x0078f764;
                    case 0x75:
                      goto code_r0x0078fb34;
                    }
                  case 0x23:
                    goto code_r0x0078fc44;
                  case 0x25:
                    goto code_r0x0078fb7c;
                  case 0x27:
                    goto code_r0x0078ff54;
                  case 0x2a:
code_r0x0078fec4:
                    sVar11 = sVar24;
                    local_4f0 = sVar22;
                    local_514 = sVar21;
                    local_50c = sVar20;
                    local_510 = sVar19;
                    pbVar45 = pbVar66 + 1;
                    uVar27 = pbVar66[1] - 0x30;
                    if (uVar27 < 10) {
                      bVar51 = pbVar66[2];
                      pbVar49 = pbVar66 + 2;
                      uVar38 = bVar51 - 0x30;
                      while (uVar38 < 10) {
                        bVar51 = pbVar49[1];
                        if ((0xccccccc < (int)uVar27) ||
                           ((int)(0x7fffffff - uVar38) < (int)(uVar27 * 10))) {
                          if ((bVar51 - 0x30 < 10) &&
                             ((pbVar49[2] - 0x30 < 10 && (pbVar49[3] - 0x30 < 10)))) {
                            pbVar49 = pbVar49 + 4;
                            do {
                              bVar51 = *pbVar49;
                              pbVar49 = pbVar49 + 1;
                            } while (bVar51 - 0x30 < 10);
                          }
                          goto LAB_0078f5f0;
                        }
                        uVar27 = uVar27 * 10 + uVar38;
                        pbVar49 = pbVar49 + 1;
                        uVar38 = bVar51 - 0x30;
                      }
                      if ((bVar51 == 0x24) && (uVar27 != 0)) goto LAB_0078ef9c;
                    }
                    uVar27 = *param_3;
                    if (uVar27 < 0x30) {
                      piVar47 = (int *)((ulong)uVar27 + *(long *)(param_3 + 4));
                      *param_3 = uVar27 + 8;
                    }
                    else {
                      piVar47 = *(int **)(param_3 + 2);
                      *(int **)(param_3 + 2) = piVar47 + 2;
                    }
                    local_540 = *piVar47;
                    local_528 = bVar18;
                    sVar6 = sVar23;
                    if (local_540 < 0) {
                      local_540 = -local_540;
                      local_528 = 0x20;
                      sVar6 = 1;
                    }
                    bVar51 = pbVar66[1];
                    uVar27 = (uint)bVar51;
                    pbVar66 = pbVar45;
                    bVar67 = bVar25;
                    uVar59 = uVar26;
                    iVar29 = local_540;
                    bVar7 = bVar8;
                    bVar9 = bVar8;
                    bVar18 = local_528;
                    bVar13 = bVar12;
                    bVar53 = bVar12;
                    sVar58 = sVar57;
                    sVar19 = local_510;
                    sVar20 = local_50c;
                    sVar21 = local_514;
                    sVar22 = local_4f0;
                    bVar55 = bVar15;
                    sVar17 = sVar6;
                    sVar23 = sVar6;
                    sVar24 = sVar11;
                    switch(bVar51) {
                    case 0x25:
                      goto code_r0x0078fb7c;
                    case 0x2e:
                      goto code_r0x0078fdd4;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                      goto code_r0x0078f148;
                    case 0x42:
                    case 0x62:
                      goto code_r0x0078fa74;
                    case 0x43:
                      goto code_r0x0078f344;
                    case 0x4c:
                    case 0x71:
                      goto code_r0x0078fbc4;
                    case 0x53:
                    case 0x73:
                      goto code_r0x0078f4d4;
                    case 0x58:
                    case 0x78:
                      goto code_r0x0078fad4;
                    case 0x5a:
                    case 0x7a:
                      goto code_r0x0078fbb4;
                    case 99:
                      goto code_r0x0078f534;
                    case 100:
                    case 0x69:
                      goto code_r0x0078fb44;
                    case 0x68:
                      goto code_r0x0078fd94;
                    case 0x6a:
                    case 0x74:
                      goto code_r0x0078f108;
                    case 0x6c:
                      goto code_r0x0078fc04;
                    case 0x6d:
                      goto code_r0x0078f614;
                    case 0x6e:
                      goto code_r0x0078f714;
                    case 0x6f:
                      goto code_r0x0078fb24;
                    case 0x70:
                      goto code_r0x0078f764;
                    case 0x75:
                      goto code_r0x0078fb34;
                    }
                    break;
                  case 0x2b:
                    goto code_r0x0078fccc;
                  case 0x2d:
                    goto code_r0x0078fc84;
                  case 0x2e:
code_r0x0078fdd4:
                    sVar11 = sVar24;
                    sVar6 = sVar23;
                    local_4f0 = sVar22;
                    local_514 = sVar21;
                    local_50c = sVar20;
                    local_510 = sVar19;
                    local_528 = bVar18;
                    local_540 = iVar29;
                    if (pbVar45[1] == 0x2a) {
                      pbVar66 = pbVar45 + 2;
                      uVar27 = pbVar45[2] - 0x30;
                      if (uVar27 < 10) {
                        bVar51 = pbVar45[3];
                        pbVar45 = pbVar45 + 3;
                        uVar41 = bVar51 - 0x30;
                        while (uVar41 < 10) {
                          bVar51 = pbVar45[1];
                          if ((0xccccccc < (int)uVar27) ||
                             ((int)(0x7fffffff - uVar41) < (int)(uVar27 * 10))) {
                            if ((bVar51 - 0x30 < 10) &&
                               ((pbVar45[2] - 0x30 < 10 && (pbVar45[3] - 0x30 < 10)))) {
                              pbVar45 = pbVar45 + 4;
                              do {
                                bVar51 = *pbVar45;
                                pbVar45 = pbVar45 + 1;
                              } while (bVar51 - 0x30 < 10);
                            }
                            goto LAB_0078f5f0;
                          }
                          uVar27 = uVar27 * 10 + uVar41;
                          pbVar45 = pbVar45 + 1;
                          uVar41 = bVar51 - 0x30;
                        }
                        if ((uVar27 != 0) && (bVar51 == 0x24)) goto LAB_0078ef9c;
                      }
                      uVar27 = *param_3;
                      if (uVar27 < 0x30) {
                        *param_3 = uVar27 + 8;
                        puVar46 = (uint *)((ulong)uVar27 + *(long *)(param_3 + 4));
                      }
                      else {
                        puVar46 = *(uint **)(param_3 + 2);
                        *(uint **)(param_3 + 2) = puVar46 + 2;
                      }
                      uVar27 = (uint)*pbVar66;
                      pbVar45 = pbVar66;
                      uVar54 = 0xffffffff;
                      if (-1 < (int)*puVar46) {
                        uVar54 = *puVar46;
                      }
                    }
                    else {
                      uVar54 = pbVar45[1] - 0x30;
                      if (uVar54 < 10) {
                        uVar27 = (uint)pbVar45[2];
                        pbVar45 = pbVar45 + 2;
                        uVar41 = uVar27 - 0x30;
                        while (uVar41 < 10) {
                          uVar27 = (uint)pbVar45[1];
                          if ((0xccccccc < (int)uVar54) ||
                             ((int)(0x7fffffff - uVar41) < (int)(uVar54 * 10))) {
                            if ((uVar27 - 0x30 < 10) &&
                               ((pbVar45[2] - 0x30 < 10 && (pbVar45[3] - 0x30 < 10)))) {
                              pbVar45 = pbVar45 + 4;
                              do {
                                bVar51 = *pbVar45;
                                pbVar45 = pbVar45 + 1;
                              } while (bVar51 - 0x30 < 10);
                            }
                            goto LAB_0078f5f0;
                          }
                          uVar54 = uVar54 * 10 + uVar41;
                          pbVar45 = pbVar45 + 1;
                          uVar41 = uVar27 - 0x30;
                        }
                      }
                      else {
                        uVar27 = (uint)pbVar45[1];
                        pbVar45 = pbVar45 + 1;
                        uVar54 = 0;
                      }
                    }
                    bVar51 = (byte)uVar27;
                    pbVar66 = pbVar45;
                    uVar41 = uVar54;
                    uVar61 = uVar54;
                    uVar64 = uVar54;
                    uVar62 = uVar54;
                    uVar63 = uVar54;
                    bVar67 = bVar25;
                    uVar59 = uVar26;
                    iVar29 = local_540;
                    bVar7 = bVar8;
                    bVar9 = bVar8;
                    bVar18 = local_528;
                    bVar53 = bVar12;
                    bVar13 = bVar12;
                    sVar58 = sVar57;
                    sVar19 = local_510;
                    sVar20 = local_50c;
                    sVar21 = local_514;
                    sVar22 = local_4f0;
                    bVar55 = bVar15;
                    sVar17 = sVar6;
                    sVar23 = sVar6;
                    sVar24 = sVar11;
                    switch(bVar51) {
                    case 0x25:
                      goto code_r0x0078fb7c;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                      goto code_r0x0078f148;
                    case 0x42:
                    case 0x62:
                      goto code_r0x0078fa74;
                    case 0x43:
                      goto code_r0x0078f344;
                    case 0x4c:
                    case 0x71:
                      goto code_r0x0078fbc4;
                    case 0x53:
                    case 0x73:
                      goto code_r0x0078f4d4;
                    case 0x58:
                    case 0x78:
                      goto code_r0x0078fad4;
                    case 0x5a:
                    case 0x7a:
                      goto code_r0x0078fbb4;
                    case 99:
                      goto code_r0x0078f534;
                    case 100:
                    case 0x69:
                      goto code_r0x0078fb44;
                    case 0x68:
                      goto code_r0x0078fd94;
                    case 0x6a:
                    case 0x74:
                      goto code_r0x0078f108;
                    case 0x6c:
                      goto code_r0x0078fc04;
                    case 0x6d:
                      goto code_r0x0078f614;
                    case 0x6e:
                      goto code_r0x0078f714;
                    case 0x6f:
                      goto code_r0x0078fb24;
                    case 0x70:
                      goto code_r0x0078f764;
                    case 0x75:
                      goto code_r0x0078fb34;
                    }
                    break;
                  case 0x30:
                    goto code_r0x0078ffa4;
                  case 0x31:
                  case 0x32:
                  case 0x33:
                  case 0x34:
                  case 0x35:
                  case 0x36:
                  case 0x37:
                  case 0x38:
                  case 0x39:
code_r0x0078fe24:
                    sVar11 = sVar24;
                    sVar6 = sVar23;
                    local_4f0 = sVar22;
                    local_514 = sVar21;
                    local_50c = sVar20;
                    local_510 = sVar19;
                    local_528 = bVar18;
                    local_540 = *pbVar45 - 0x30;
                    uVar27 = (uint)pbVar45[1];
                    pbVar45 = pbVar45 + 1;
                    pbVar66 = pbVar45;
                    uVar38 = uVar27 - 0x30;
                    if (uVar27 - 0x30 < 10) {
LAB_0078fe46:
                      uVar27 = (uint)pbVar66[1];
                      pbVar45 = pbVar66 + 1;
                      uVar39 = uVar27 - 0x30;
                      if (local_540 < 0) goto joined_r0x00790ebe;
                      if ((local_540 < 0xccccccd) && (local_540 * 10 <= (int)(0x7fffffff - uVar38)))
                      goto code_r0x0078fe81;
                      if (((uVar39 < 10) && (pbVar66[2] - 0x30 < 10)) &&
                         (pbVar45 = pbVar66 + 3, pbVar66[3] - 0x30 < 10)) {
                        local_540 = -1;
                        do {
                          pbVar45 = pbVar45 + 1;
                          uVar27 = (uint)*pbVar45;
                          uVar39 = uVar27 - 0x30;
joined_r0x00790ebe:
                        } while (uVar39 < 10);
                        goto LAB_00790ed0;
                      }
                      goto LAB_0078f5f0;
                    }
LAB_00790ed0:
                    if (local_540 != -1) {
LAB_0078fe90:
                      bVar51 = (byte)uVar27;
                      if (bVar51 != 0x24) {
                        pbVar66 = pbVar45;
                        bVar67 = bVar25;
                        uVar59 = uVar26;
                        iVar29 = local_540;
                        bVar7 = bVar10;
                        bVar9 = bVar8;
                        bVar18 = local_528;
                        bVar53 = bVar12;
                        bVar13 = bVar12;
                        sVar58 = sVar56;
                        sVar19 = local_510;
                        sVar20 = local_50c;
                        sVar21 = local_514;
                        sVar22 = local_4f0;
                        bVar55 = bVar15;
                        sVar23 = sVar6;
                        sVar17 = sVar6;
                        sVar24 = sVar11;
                        switch(bVar51) {
                        case 0x25:
                          goto code_r0x0078fb7c;
                        case 0x2e:
                          goto code_r0x0078fdd4;
                        case 0x41:
                        case 0x45:
                        case 0x46:
                        case 0x47:
                        case 0x61:
                        case 0x65:
                        case 0x66:
                        case 0x67:
                          goto code_r0x0078f148;
                        case 0x42:
                        case 0x62:
                          goto code_r0x0078fa74;
                        case 0x43:
                          goto code_r0x0078f344;
                        case 0x4c:
                        case 0x71:
                          goto code_r0x0078fbc4;
                        case 0x53:
                        case 0x73:
                          goto code_r0x0078f4d4;
                        case 0x58:
                        case 0x78:
                          goto code_r0x0078fad4;
                        case 0x5a:
                        case 0x7a:
                          goto code_r0x0078fbb4;
                        case 99:
                          goto code_r0x0078f534;
                        case 100:
                        case 0x69:
                          goto code_r0x0078fb44;
                        case 0x68:
                          goto code_r0x0078fd94;
                        case 0x6a:
                        case 0x74:
                          goto code_r0x0078f108;
                        case 0x6c:
                          goto code_r0x0078fc04;
                        case 0x6d:
                          goto code_r0x0078f614;
                        case 0x6e:
                          goto code_r0x0078f714;
                        case 0x6f:
                          goto code_r0x0078fb24;
                        case 0x70:
                          goto code_r0x0078f764;
                        case 0x75:
                          goto code_r0x0078fb34;
                        }
                        break;
                      }
                      goto LAB_0078ef9c;
                    }
                    goto LAB_0078f5f0;
                  case 0x41:
                  case 0x45:
                  case 0x46:
                  case 0x47:
                  case 0x61:
                  case 0x65:
                  case 0x66:
                  case 0x67:
                    goto code_r0x0078f148;
                  case 0x42:
                  case 0x62:
                    goto code_r0x0078fa74;
                  case 0x43:
                    goto code_r0x0078f344;
                  case 0x49:
                    goto code_r0x0078fff4;
                  case 0x4c:
                  case 0x71:
code_r0x0078fbc4:
                    sVar11 = sVar24;
                    sVar6 = sVar23;
                    local_4f0 = sVar22;
                    local_514 = sVar21;
                    local_50c = sVar20;
                    local_510 = sVar19;
                    local_528 = bVar18;
                    local_540 = iVar29;
                    uVar54 = uVar63;
                    bVar51 = pbVar45[1];
                    uVar27 = (uint)bVar51;
                    pbVar66 = pbVar45 + 1;
                    bVar55 = true;
                    bVar7 = true;
                    uVar41 = uVar54;
                    uVar61 = uVar54;
                    uVar64 = uVar54;
                    uVar62 = uVar54;
                    uVar63 = uVar54;
                    bVar67 = bVar25;
                    uVar59 = 1;
                    iVar29 = local_540;
                    bVar9 = bVar7;
                    bVar18 = local_528;
                    bVar53 = bVar14;
                    bVar13 = bVar14;
                    sVar58 = 1;
                    sVar19 = local_510;
                    sVar20 = local_50c;
                    sVar21 = local_514;
                    sVar22 = local_4f0;
                    sVar23 = sVar6;
                    sVar17 = sVar6;
                    sVar24 = sVar11;
                    switch(bVar51) {
                    case 0x25:
                      goto code_r0x0078fb7c;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                      goto code_r0x0078f148;
                    case 0x42:
                    case 0x62:
                      goto code_r0x0078fa74;
                    case 0x43:
                      goto code_r0x0078f344;
                    case 0x53:
                    case 0x73:
                      goto code_r0x0078f4d4;
                    case 0x58:
                    case 0x78:
                      goto code_r0x0078fad4;
                    case 99:
                      goto code_r0x0078f534;
                    case 100:
                    case 0x69:
                      goto code_r0x0078fb44;
                    case 0x6d:
                      goto code_r0x0078f614;
                    case 0x6e:
                      goto code_r0x0078f714;
                    case 0x6f:
                      goto code_r0x0078fb24;
                    case 0x70:
                      goto code_r0x0078f764;
                    case 0x75:
                      goto code_r0x0078fb34;
                    }
                    break;
                  case 0x53:
                  case 0x73:
                    goto code_r0x0078f4d4;
                  case 0x58:
                  case 0x78:
                    goto code_r0x0078fad4;
                  case 0x5a:
                  case 0x7a:
code_r0x0078fbb4:
                  case 0x6a:
                  case 0x74:
code_r0x0078f108:
                    sVar11 = sVar24;
                    sVar6 = sVar23;
                    local_4f0 = sVar22;
                    local_514 = sVar21;
                    local_50c = sVar20;
                    local_510 = sVar19;
                    local_528 = bVar18;
                    local_540 = iVar29;
                    uVar54 = uVar63;
                    bVar51 = pbVar45[1];
                    uVar27 = (uint)bVar51;
                    pbVar66 = pbVar45 + 1;
                    bVar55 = true;
                    bVar7 = true;
                    uVar41 = uVar54;
                    uVar61 = uVar54;
                    uVar64 = uVar54;
                    uVar62 = uVar54;
                    uVar63 = uVar54;
                    bVar67 = bVar25;
                    uVar59 = 0;
                    iVar29 = local_540;
                    bVar9 = bVar7;
                    bVar18 = local_528;
                    bVar53 = bVar14;
                    bVar13 = bVar14;
                    sVar58 = 1;
                    sVar19 = local_510;
                    sVar20 = local_50c;
                    sVar21 = local_514;
                    sVar22 = local_4f0;
                    sVar23 = sVar6;
                    sVar17 = sVar6;
                    sVar24 = sVar11;
                    switch(bVar51) {
                    default:
                      goto code_r0x0078ef94;
                    case 0x25:
code_r0x0078fb7c:
                      pcVar35 = param_1->_IO_write_ptr;
                      if (pcVar35 < param_1->_IO_write_end) {
                        param_1->_IO_write_ptr = pcVar35 + 1;
                        *pcVar35 = '%';
                      }
                      else {
                        iVar29 = __overflow(param_1,0x25);
                        if (iVar29 == -1) goto LAB_007903a8;
                      }
                      if (uVar60 == 0x7fffffff) goto LAB_007903a8;
                      uVar60 = uVar60 + 1;
                      break;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
code_r0x0078f148:
                      if ((param_4 & 1) != 0) {
                        uVar59 = 0;
                      }
                      local_490 = (uint)(char)bVar51;
                      local_494 = local_540;
                      uVar26 = uVar59 | sVar58 * 4 | local_510 << 3 | local_50c << 4 | sVar6 << 5 |
                               local_514 << 6 | sVar11 << 7 | local_4f0 << 0xb;
                      local_48c = (uint)uVar26;
                      local_488 = (uint)local_528;
                      if (uVar59 == 0) {
                        uVar27 = param_3[1];
                        if (uVar27 < 0xb0) {
                          puVar43 = (undefined8 *)((ulong)uVar27 + *(long *)(param_3 + 4));
                          param_3[1] = uVar27 + 0x10;
                        }
                        else {
                          puVar43 = *(undefined8 **)(param_3 + 2);
                          *(undefined8 **)(param_3 + 2) = puVar43 + 1;
                        }
                        local_4a8 = *puVar43;
                      }
                      else if ((param_4 & 8) == 0) {
                        pVar37 = (unkbyte10 *)(*(long *)(param_3 + 2) + 0xfU & 0xfffffffffffffff0);
                        *(unkbyte10 **)(param_3 + 2) = pVar37 + 1;
                        Var1 = *pVar37;
                        local_4a8 = (undefined8)Var1;
                        uStack_4a0 = (undefined2)((unkuint10)Var1 >> 0x40);
                      }
                      else {
                        local_48c = uVar26 | 0x1000;
                        uVar27 = param_3[1];
                        if (uVar27 < 0xb0) {
                          puVar43 = (undefined8 *)((ulong)uVar27 + *(long *)(param_3 + 4));
                          param_3[1] = uVar27 + 0x10;
                        }
                        else {
                          puVar43 = (undefined8 *)
                                    (*(long *)(param_3 + 2) + 0xfU & 0xfffffffffffffff0);
                          *(undefined8 **)(param_3 + 2) = puVar43 + 2;
                        }
                        local_4a8 = *puVar43;
                        uStack_4a0 = (undefined2)puVar43[1];
                        uStack_49e = (undefined6)((ulong)puVar43[1] >> 0x10);
                      }
                      local_4b0 = &local_4a8;
                      local_498 = uVar54;
                      if ((local_490 & 0xffffffdf) == 0x41) {
                        uVar27 = __printf_fphex();
                      }
                      else {
                        uVar27 = __printf_fp(param_1,&local_498,&local_4b0);
                      }
                      if (-1 < (int)uVar27) {
                        bVar67 = false;
                        uVar60 = uVar60 + uVar27;
                        if (((int)uVar60 < 0) || (uVar60 < uVar27)) {
                          bVar67 = true;
                        }
joined_r0x0078f5e0:
                        if (!bVar67) goto LAB_007901cb;
                        goto LAB_0078f5f0;
                      }
                      goto LAB_007903a8;
                    case 0x42:
                    case 0x62:
code_r0x0078fa74:
                      uVar64 = uVar62;
                      iVar30 = 2;
                      goto LAB_0078fa7a;
                    case 0x43:
code_r0x0078f344:
                      local_458.__count = 0;
                      local_458.__value = (_union_27)0x0;
                      uVar27 = *param_3;
                      if (uVar27 < 0x30) {
                        pwVar40 = (wchar_t *)((ulong)uVar27 + *(long *)(param_3 + 4));
                        *param_3 = uVar27 + 8;
                      }
                      else {
                        pwVar40 = *(wchar_t **)(param_3 + 2);
                        *(wchar_t **)(param_3 + 2) = pwVar40 + 2;
                      }
                      sVar65 = wcrtomb(local_438,*pwVar40,&local_458);
                      if (sVar65 == 0xffffffffffffffff) goto LAB_007903a8;
                      uVar27 = local_540 - (int)sVar65;
                      if ((sVar17 == 0) && (0 < (int)uVar27)) {
                        _Var36 = _IO_padn(param_1,0x20,(long)(int)uVar27);
                        if ((int)uVar27 != _Var36) goto LAB_007903a8;
                        uVar60 = uVar60 + uVar27;
                        uVar32 = (ulong)uVar60;
                        if (((int)uVar60 < 0) || (uVar60 < uVar27)) goto LAB_0078f5f0;
                        if ((int)uVar60 < 0) goto LAB_0078eff8;
                      }
                      lVar4 = *(long *)(param_1 + 1);
                      if (0x827 < lVar4 - 0x932180U) {
                        _IO_vtable_check();
                      }
                      sVar34 = (**(code **)(lVar4 + 0x38))(param_1,local_438,sVar65);
                      if (sVar65 != sVar34) goto LAB_007903a8;
                      bVar67 = false;
                      uVar52 = (long)(int)uVar60 + sVar65;
                      if (((long)uVar52 < 0) || (uVar52 < sVar65)) {
                        bVar67 = true;
                      }
                      uVar60 = (uint)uVar52;
                      uVar32 = uVar52 & 0xffffffff;
                      if (uVar52 != (long)(int)uVar60) {
                        bVar67 = true;
                      }
                      if (bVar67) goto LAB_0078f5f0;
                      if (-1 < (int)uVar60) {
                        if (sVar17 == 0) break;
                        goto LAB_0079019b;
                      }
                      goto LAB_0078eff8;
                    case 0x53:
                    case 0x73:
code_r0x0078f4d4:
                      uVar27 = *param_3;
                      if (uVar27 < 0x30) {
                        plVar42 = (long *)((ulong)uVar27 + *(long *)(param_3 + 4));
                        *param_3 = uVar27 + 8;
                      }
                      else {
                        plVar42 = *(long **)(param_3 + 2);
                        *(long **)(param_3 + 2) = plVar42 + 1;
                      }
                      pcVar35 = (char *)*plVar42;
                      bVar7 = (bool)(bVar7 ^ 1);
                      uVar41 = uVar63;
                      if (pcVar35 != (char *)0x0) {
LAB_0078f63c:
                        if ((bVar51 != 0x53) && (bVar7)) {
                          if (uVar41 != 0xffffffff) goto LAB_0078f657;
                          sVar65 = strlen(pcVar35);
                          goto LAB_0078f66f;
                        }
LAB_007907d4:
                        uVar60 = outstring_converted_wide_string(param_1,pcVar35,uVar41,iVar29);
                        uVar32 = (ulong)uVar60;
                        goto joined_r0x007907f3;
                      }
                      if ((uVar63 == 0xffffffff) || (5 < (int)uVar63)) {
                        sVar65 = 6;
                        pcVar35 = "(null)";
                      }
                      else {
                        sVar65 = 0;
                        pcVar35 = "";
                      }
LAB_0078f66f:
                      uVar27 = iVar29 - (int)sVar65;
                      if ((int)uVar27 < 0) {
                        lVar4 = *(long *)(param_1 + 1);
                        if (0x827 < lVar4 - 0x932180U) {
                          _IO_vtable_check();
                        }
                        uVar32 = (**(code **)(lVar4 + 0x38))(param_1,pcVar35,sVar65);
                        if (uVar32 == sVar65) {
                          bVar67 = false;
                          uVar52 = (long)(int)uVar60 + sVar65;
                          if (((long)uVar52 < 0) || (uVar52 < sVar65)) goto LAB_00790b24;
                          goto LAB_0078fa46;
                        }
                        goto LAB_007903a8;
                      }
                      if ((sVar23 == 0) && (uVar27 != 0)) {
                        _Var36 = _IO_padn(param_1,0x20,(long)(int)uVar27);
                        if ((int)uVar27 != _Var36) goto LAB_007903a8;
                        uVar60 = uVar60 + uVar27;
                        uVar32 = (ulong)uVar60;
                        if (((int)uVar60 < 0) || (uVar60 < uVar27)) goto LAB_0078f5f0;
                        if ((int)uVar60 < 0) goto LAB_0078eff8;
                      }
                      lVar4 = *(long *)(param_1 + 1);
                      if (0x827 < lVar4 - 0x932180U) {
                        _IO_vtable_check();
                      }
                      uVar32 = (**(code **)(lVar4 + 0x38))(param_1,pcVar35,sVar65);
                      if (uVar32 != sVar65) goto LAB_007903a8;
                      bVar67 = false;
                      uVar52 = (long)(int)uVar60 + sVar65;
                      if (((long)uVar52 < 0) || (uVar52 < sVar65)) {
                        bVar67 = true;
                      }
                      uVar60 = (uint)uVar52;
                      uVar32 = uVar52 & 0xffffffff;
                      if (uVar52 != (long)(int)uVar60) {
                        bVar67 = true;
                      }
                      if (bVar67) goto LAB_0078f5f0;
                      if (-1 < (int)uVar60) {
                        if ((sVar23 == 0) || (uVar27 == 0)) break;
                        goto LAB_007901a3;
                      }
                      goto LAB_0078eff8;
                    case 0x58:
                    case 0x78:
code_r0x0078fad4:
                      iVar30 = 0x10;
                      uVar54 = *param_3;
                      uVar41 = uVar61;
                      goto joined_r0x0078fae4;
                    case 99:
code_r0x0078f534:
                      local_540 = iVar29;
                      sVar17 = sVar23;
                      if (bVar7) goto code_r0x0078f344;
                      uVar27 = local_540 - 1;
                      if ((sVar23 == 0) && (0 < (int)uVar27)) {
                        _Var36 = _IO_padn(param_1,0x20,(long)(int)uVar27);
                        if ((int)uVar27 != _Var36) goto LAB_007903a8;
                        uVar60 = uVar60 + uVar27;
                        uVar32 = (ulong)uVar60;
                        if (((int)uVar60 < 0) || (uVar60 < uVar27)) goto LAB_0078f5f0;
                        if ((int)uVar60 < 0) goto LAB_0078eff8;
                      }
                      uVar41 = *param_3;
                      if (uVar41 < 0x30) {
                        puVar46 = (uint *)((ulong)uVar41 + *(long *)(param_3 + 4));
                        *param_3 = uVar41 + 8;
                      }
                      else {
                        puVar46 = *(uint **)(param_3 + 2);
                        *(uint **)(param_3 + 2) = puVar46 + 2;
                      }
                      uVar41 = *puVar46;
                      pcVar35 = param_1->_IO_write_ptr;
                      if (pcVar35 < param_1->_IO_write_end) {
                        param_1->_IO_write_ptr = pcVar35 + 1;
                        *pcVar35 = (char)uVar41;
                      }
                      else {
                        iVar29 = __overflow(param_1,uVar41 & 0xff);
                        if (iVar29 == -1) goto LAB_007903a8;
                      }
                      if (uVar60 == 0x7fffffff) goto LAB_007903a8;
                      uVar60 = uVar60 + 1;
                      if ((sVar23 != 0) && (0 < (int)uVar27)) {
                        _Var36 = _IO_padn(param_1,0x20,(long)(int)uVar27);
                        if ((int)uVar27 == _Var36) {
                          bVar67 = false;
                          uVar60 = uVar60 + uVar27;
                          if (((int)uVar60 < 0) || (uVar60 < uVar27)) {
                            bVar67 = true;
                          }
                          goto joined_r0x0078f5e0;
                        }
                        goto LAB_007903a8;
                      }
                      break;
                    case 100:
                    case 0x69:
code_r0x0078fb44:
                      if (bVar55) {
                        uVar54 = *param_3;
                        if (uVar54 < 0x30) {
                          puVar44 = (ulong *)((ulong)uVar54 + *(long *)(param_3 + 4));
                          *param_3 = uVar54 + 8;
                        }
                        else {
                          puVar44 = *(ulong **)(param_3 + 2);
                          *(ulong **)(param_3 + 2) = puVar44 + 1;
                        }
                        uVar52 = *puVar44;
                      }
                      else {
                        uVar54 = *param_3;
                        if (bVar67) {
                          if (uVar54 < 0x30) {
                            pcVar35 = (char *)((ulong)uVar54 + *(long *)(param_3 + 4));
                            *param_3 = uVar54 + 8;
                          }
                          else {
                            pcVar35 = *(char **)(param_3 + 2);
                            *(char **)(param_3 + 2) = pcVar35 + 8;
                          }
                          uVar52 = (ulong)*pcVar35;
                        }
                        else if (bVar13) {
                          if (uVar54 < 0x30) {
                            psVar50 = (short *)((ulong)uVar54 + *(long *)(param_3 + 4));
                            *param_3 = uVar54 + 8;
                          }
                          else {
                            psVar50 = *(short **)(param_3 + 2);
                            *(short **)(param_3 + 2) = psVar50 + 4;
                          }
                          uVar52 = (ulong)*psVar50;
                        }
                        else {
                          if (uVar54 < 0x30) {
                            piVar47 = (int *)((ulong)uVar54 + *(long *)(param_3 + 4));
                            *param_3 = uVar54 + 8;
                          }
                          else {
                            piVar47 = *(int **)(param_3 + 2);
                            *(int **)(param_3 + 2) = piVar47 + 2;
                          }
                          uVar52 = (ulong)*piVar47;
                        }
                      }
                      if ((long)uVar52 < 0) {
                        uVar52 = -uVar52;
                        iVar30 = 10;
                        bVar67 = true;
                      }
                      else {
                        bVar67 = false;
                        iVar30 = 10;
                      }
                      goto LAB_0078f7b0;
                    case 0x6d:
code_r0x0078f614:
                      uVar41 = uVar63;
                      bVar51 = (byte)uVar27;
                      if (sVar19 == 0) {
                        pcVar35 = strerror_r(iVar3,local_428,1000);
                      }
                      else {
                        pcVar35 = (char *)__get_errname(iVar3);
                      }
                      bVar7 = true;
                      if (pcVar35 != (char *)0x0) goto LAB_0078f63c;
                      uVar52 = (ulong)iVar3;
                      bVar67 = false;
                      iVar30 = 10;
                      if (iVar3 < 0) {
                        uVar52 = -uVar52;
                        bVar67 = true;
                      }
                      goto LAB_0078f7b0;
                    case 0x6e:
code_r0x0078f714:
                      if (((param_4 & 2) != 0) && (local_4c8 == 0)) {
                        sVar65 = strlen(param_2);
                        local_4c8 = __readonly_area(param_2,sVar65 + 1);
                        if (local_4c8 < 0) {
                    /* WARNING: Subroutine does not return */
                          __libc_fatal("*** %n in writable segment detected ***\n");
                        }
                      }
                      uVar27 = *param_3;
                      if (uVar27 < 0x30) {
                        puVar43 = (undefined8 *)((ulong)uVar27 + *(long *)(param_3 + 4));
                        *param_3 = uVar27 + 8;
                      }
                      else {
                        puVar43 = *(undefined8 **)(param_3 + 2);
                        *(undefined8 **)(param_3 + 2) = puVar43 + 1;
                      }
                      puVar46 = (uint *)*puVar43;
                      if (bVar9) {
                        *(long *)puVar46 = (long)(int)uVar60;
                      }
                      else if (bVar67) {
                        *(char *)puVar46 = (char)uVar32;
                      }
                      else if (bVar53) {
                        *(short *)puVar46 = (short)uVar32;
                      }
                      else {
                        *puVar46 = uVar60;
                      }
                      break;
                    case 0x6f:
code_r0x0078fb24:
                      iVar30 = 8;
                      goto LAB_0078fa7a;
                    case 0x70:
code_r0x0078f764:
                      uVar41 = uVar63;
                      uVar27 = *param_3;
                      if (uVar27 < 0x30) {
                        puVar44 = (ulong *)((ulong)uVar27 + *(long *)(param_3 + 4));
                        *param_3 = uVar27 + 8;
                      }
                      else {
                        puVar44 = *(ulong **)(param_3 + 2);
                        *(ulong **)(param_3 + 2) = puVar44 + 1;
                      }
                      uVar52 = *puVar44;
                      if (uVar52 == 0) {
                        pcVar35 = "(nil)";
                        if ((int)uVar41 < 5) {
                          uVar41 = 5;
                        }
                        if (bVar51 == 0x53) goto LAB_007907d4;
LAB_0078f657:
                        sVar65 = strnlen(pcVar35,(long)(int)uVar41);
                        goto LAB_0078f66f;
                      }
                      sVar24 = 0;
                      uVar27 = 0x78;
                      bVar67 = false;
                      sVar19 = 1;
                      iVar30 = 0x10;
LAB_0078f7b0:
                      if (uVar41 == 0xffffffff) {
LAB_0078faba:
                        local_508 = 1;
                        local_528 = bVar18;
LAB_0078f7d0:
                        local_530 = (long *)_itoa_word(uVar52,local_40,iVar30,(char)uVar27 == 'X');
                        if ((local_4e8 != (char *)0x0) && (sVar24 != 0)) {
                          local_530 = (long *)group_number(local_428,local_530,local_40);
                        }
                        if ((iVar30 == 10) && (sVar22 != 0)) {
                          local_530 = (long *)_i18n_number_rewrite(local_530,local_40,local_40);
                        }
                        uVar33 = (long)local_40 - (long)local_530;
                        if ((long)uVar33 < local_508) {
                          local_508 = local_508 - uVar33;
                          if (local_508 < 0) {
                            local_508 = 0;
                          }
                          uVar41 = (uint)local_508;
                          if (sVar23 == 0) {
                            uVar54 = (iVar29 - (int)uVar33) - uVar41;
                            if (uVar52 != 0) {
LAB_0078f911:
                              if ((sVar19 != 0) && ((0x10004UL >> (sbyte)iVar30 & 1) != 0)) {
                                uVar54 = uVar54 - 2;
                              }
                            }
                            goto LAB_0078f92e;
                          }
                        }
                        else {
                          if (uVar52 == 0) {
                            local_508 = local_508 - uVar33;
                            if (local_508 < 0) {
                              local_508 = 0;
                            }
                            uVar41 = (uint)local_508;
                            goto LAB_00790221;
                          }
                          if ((iVar30 == 8) && (sVar19 != 0)) {
                            *(undefined1 *)((long)local_530 + -1) = 0x30;
                            uVar33 = (long)local_40 - ((long)local_530 + -1);
                            local_530 = (long *)((long)local_530 + -1);
                          }
                          local_508 = local_508 - uVar33;
                          if (local_508 < 0) {
                            local_508 = 0;
                          }
                          uVar41 = (uint)local_508;
                          if (sVar23 == 0) {
                            uVar54 = (iVar29 - (int)uVar33) - uVar41;
                            goto LAB_0078f911;
                          }
                        }
                      }
                      else {
LAB_0078f7ba:
                        if (uVar41 != 0) {
                          local_508 = (long)(int)uVar41;
                          local_528 = 0x20;
                          goto LAB_0078f7d0;
                        }
                        if (uVar52 != 0) {
                          local_508 = 0;
                          local_528 = 0x20;
                          goto LAB_0078f7d0;
                        }
                        if ((iVar30 == 8) && (sVar19 != 0)) {
                          local_530 = (long *)&local_41;
                          local_41 = 0x30;
                          uVar33 = 1;
                        }
                        else {
                          local_530 = local_40;
                          uVar33 = 0;
                        }
                        local_528 = 0x20;
                        uVar41 = 0;
LAB_00790221:
                        if (sVar23 == 0) {
                          uVar54 = iVar29 - (uVar41 + (int)uVar33);
LAB_0078f92e:
                          if ((sVar20 == 0 && !bVar67) && sVar21 == 0) {
                            if (local_528 == 0x20) {
                              if (0 < (int)uVar54) goto LAB_007902f4;
                              uVar54 = 0;
                            }
                          }
                          else {
                            uVar54 = uVar54 - 1;
                            if (local_528 == 0x20) {
                              if ((int)uVar54 < 1) {
                                uVar54 = 0;
                              }
                              else {
LAB_007902f4:
                                _Var36 = _IO_padn(param_1,0x20,(long)(int)uVar54);
                                if ((int)uVar54 != _Var36) goto LAB_007903a8;
                                bVar25 = false;
                                uVar60 = uVar60 + uVar54;
                                uVar32 = (ulong)uVar60;
                                if (((int)uVar60 < 0) || (uVar60 < uVar54)) {
                                  bVar25 = true;
                                }
                                if (bVar25) goto LAB_0078f5f0;
                                uVar54 = 0;
                                if ((int)uVar60 < 0) goto LAB_0078eff8;
                              }
                            }
                            if (bVar67) {
                              pcVar35 = param_1->_IO_write_ptr;
                              if (pcVar35 < param_1->_IO_write_end) {
                                param_1->_IO_write_ptr = pcVar35 + 1;
                                *pcVar35 = '-';
                              }
                              else {
                                iVar29 = 0x2d;
LAB_00790d6c:
                                iVar29 = __overflow(param_1,iVar29);
                                if (iVar29 == -1) goto LAB_007903a8;
                              }
                            }
                            else if (sVar21 == 0) {
                              if (sVar20 == 0) goto LAB_0078f981;
                              pcVar35 = param_1->_IO_write_ptr;
                              if (param_1->_IO_write_end <= pcVar35) {
                                iVar29 = 0x20;
                                goto LAB_00790d6c;
                              }
                              param_1->_IO_write_ptr = pcVar35 + 1;
                              *pcVar35 = ' ';
                            }
                            else {
                              pcVar35 = param_1->_IO_write_ptr;
                              if (param_1->_IO_write_end <= pcVar35) {
                                iVar29 = 0x2b;
                                goto LAB_00790d6c;
                              }
                              param_1->_IO_write_ptr = pcVar35 + 1;
                              *pcVar35 = '+';
                            }
                            if (uVar60 == 0x7fffffff) goto LAB_007903a8;
                            uVar60 = uVar60 + 1;
                          }
LAB_0078f981:
                          if (((uVar52 != 0) && (sVar19 != 0)) && ((0x10004UL >> iVar30 & 1) != 0))
                          {
                            pcVar35 = param_1->_IO_write_ptr;
                            if (pcVar35 < param_1->_IO_write_end) {
                              param_1->_IO_write_ptr = pcVar35 + 1;
                              *pcVar35 = '0';
                            }
                            else {
                              iVar29 = __overflow(param_1,0x30);
                              if (iVar29 == -1) goto LAB_007903a8;
                            }
                            if (uVar60 == 0x7fffffff) goto LAB_007903a8;
                            pcVar35 = param_1->_IO_write_ptr;
                            if (pcVar35 < param_1->_IO_write_end) {
                              param_1->_IO_write_ptr = pcVar35 + 1;
                              *pcVar35 = (char)uVar27;
                            }
                            else {
                              iVar29 = __overflow(param_1,uVar27);
                              if (iVar29 == -1) goto LAB_007903a8;
                            }
                            if (uVar60 == 0x7ffffffe) goto LAB_007903a8;
                            uVar60 = uVar60 + 2;
                          }
                          uVar54 = uVar54 + uVar41;
                          if (0 < (int)uVar54) {
                            _Var36 = _IO_padn(param_1,0x30,(long)(int)uVar54);
                            if ((int)uVar54 != _Var36) goto LAB_007903a8;
                            bVar67 = false;
                            uVar60 = uVar60 + uVar54;
                            uVar32 = (ulong)uVar60;
                            if (((int)uVar60 < 0) || (uVar60 < uVar54)) {
                              bVar67 = true;
                            }
                            if (bVar67) goto LAB_0078f5f0;
                            if ((int)uVar60 < 0) goto LAB_0078eff8;
                          }
                          lVar4 = *(long *)(param_1 + 1);
                          if (0x827 < lVar4 - 0x932180U) {
                            _IO_vtable_check();
                          }
                          uVar32 = (**(code **)(lVar4 + 0x38))(param_1,local_530,uVar33);
                          if (uVar33 != uVar32) goto LAB_007903a8;
                          bVar67 = false;
                          uVar52 = (long)(int)uVar60 + uVar33;
                          if (((long)uVar52 < 0) || (uVar52 < uVar33)) {
LAB_00790b24:
                            bVar67 = true;
                          }
LAB_0078fa46:
                          uVar60 = (uint)uVar52;
                          uVar32 = uVar52 & 0xffffffff;
                          if (uVar52 != (long)(int)uVar60) {
                            bVar67 = true;
                          }
                          if (bVar67) goto LAB_0078f5f0;
joined_r0x007907f3:
                          if (-1 < (int)uVar60) break;
                          goto LAB_0078eff8;
                        }
                      }
                      if (bVar67) {
                        pcVar35 = param_1->_IO_write_ptr;
                        if (pcVar35 < param_1->_IO_write_end) {
                          param_1->_IO_write_ptr = pcVar35 + 1;
                          *pcVar35 = '-';
                        }
                        else {
                          iVar28 = 0x2d;
LAB_00790384:
                          iVar28 = __overflow(param_1,iVar28);
                          if (iVar28 == -1) goto LAB_007903a8;
                        }
LAB_007900b2:
                        if (uVar60 == 0x7fffffff) goto LAB_007903a8;
                        iVar29 = iVar29 + -1;
                        uVar60 = uVar60 + 1;
                      }
                      else {
                        if (sVar21 != 0) {
                          pcVar35 = param_1->_IO_write_ptr;
                          if (param_1->_IO_write_end <= pcVar35) {
                            iVar28 = 0x2b;
                            goto LAB_00790384;
                          }
                          param_1->_IO_write_ptr = pcVar35 + 1;
                          *pcVar35 = '+';
                          goto LAB_007900b2;
                        }
                        if (sVar20 != 0) {
                          pcVar35 = param_1->_IO_write_ptr;
                          if (param_1->_IO_write_end <= pcVar35) {
                            iVar28 = 0x20;
                            goto LAB_00790384;
                          }
                          param_1->_IO_write_ptr = pcVar35 + 1;
                          *pcVar35 = ' ';
                          goto LAB_007900b2;
                        }
                      }
                      if (((uVar52 != 0) && (sVar19 != 0)) && ((0x10004UL >> iVar30 & 1) != 0)) {
                        pcVar35 = param_1->_IO_write_ptr;
                        if (pcVar35 < param_1->_IO_write_end) {
                          param_1->_IO_write_ptr = pcVar35 + 1;
                          *pcVar35 = '0';
                        }
                        else {
                          iVar30 = __overflow(param_1,0x30);
                          if (iVar30 == -1) goto LAB_007903a8;
                        }
                        if (uVar60 == 0x7fffffff) goto LAB_007903a8;
                        pcVar35 = param_1->_IO_write_ptr;
                        if (pcVar35 < param_1->_IO_write_end) {
                          param_1->_IO_write_ptr = pcVar35 + 1;
                          *pcVar35 = (char)uVar27;
                        }
                        else {
                          iVar30 = __overflow(param_1,uVar27);
                          if (iVar30 == -1) goto LAB_007903a8;
                        }
                        if (uVar60 == 0x7ffffffe) goto LAB_007903a8;
                        iVar29 = iVar29 + -2;
                        uVar60 = uVar60 + 2;
                      }
                      uVar27 = iVar29 - (uVar41 + (int)uVar33);
                      if (0 < (int)uVar41) {
                        _Var36 = _IO_padn(param_1,0x30,(long)(int)uVar41);
                        if ((int)uVar41 != _Var36) goto LAB_007903a8;
                        bVar67 = false;
                        uVar60 = uVar60 + uVar41;
                        uVar32 = (ulong)uVar60;
                        if (((int)uVar60 < 0) || (uVar60 < uVar41)) {
                          bVar67 = true;
                        }
                        if (bVar67) goto LAB_0078f5f0;
                        if ((int)uVar60 < 0) goto LAB_0078eff8;
                      }
                      lVar4 = *(long *)(param_1 + 1);
                      if (0x827 < lVar4 - 0x932180U) {
                        _IO_vtable_check();
                      }
                      uVar32 = (**(code **)(lVar4 + 0x38))(param_1,local_530,uVar33);
                      if (uVar32 != uVar33) goto LAB_007903a8;
                      bVar67 = false;
                      uVar52 = (long)(int)uVar60 + uVar33;
                      if (((long)uVar52 < 0) || (uVar52 < uVar33)) {
                        bVar67 = true;
                      }
                      uVar60 = (uint)uVar52;
                      uVar32 = uVar52 & 0xffffffff;
                      if (uVar52 != (long)(int)uVar60) {
                        bVar67 = true;
                      }
                      if (bVar67) goto LAB_0078f5f0;
                      if ((int)uVar60 < 0) goto LAB_0078eff8;
LAB_0079019b:
                      if (0 < (int)uVar27) {
LAB_007901a3:
                        _Var36 = _IO_padn(param_1,0x20,(long)(int)uVar27);
                        if ((int)uVar27 != _Var36) goto LAB_007903a8;
                        bVar67 = SCARRY4(uVar27,uVar60);
                        uVar60 = uVar27 + uVar60;
                        if (bVar67) goto LAB_0078f5f0;
LAB_007901cb:
                        uVar32 = (ulong)uVar60;
                        if ((int)uVar60 < 0) goto LAB_0078eff8;
                      }
                      break;
                    case 0x75:
code_r0x0078fb34:
                      iVar30 = 10;
LAB_0078fa7a:
                      uVar54 = *param_3;
                      uVar41 = uVar64;
joined_r0x0078fae4:
                      if (!bVar55) {
                        if (bVar67) {
                          if (uVar54 < 0x30) {
                            pbVar45 = (byte *)((ulong)uVar54 + *(long *)(param_3 + 4));
                            *param_3 = uVar54 + 8;
                          }
                          else {
                            pbVar45 = *(byte **)(param_3 + 2);
                            *(byte **)(param_3 + 2) = pbVar45 + 8;
                          }
                          sVar21 = 0;
                          uVar52 = (ulong)*pbVar45;
                          sVar20 = 0;
                          bVar67 = false;
                        }
                        else if (bVar53) {
                          if (uVar54 < 0x30) {
                            puVar48 = (ushort *)((ulong)uVar54 + *(long *)(param_3 + 4));
                            *param_3 = uVar54 + 8;
                          }
                          else {
                            puVar48 = *(ushort **)(param_3 + 2);
                            *(ushort **)(param_3 + 2) = puVar48 + 4;
                          }
                          sVar21 = 0;
                          uVar52 = (ulong)*puVar48;
                          bVar67 = false;
                          sVar20 = 0;
                        }
                        else {
                          if (uVar54 < 0x30) {
                            puVar46 = (uint *)((ulong)uVar54 + *(long *)(param_3 + 4));
                            *param_3 = uVar54 + 8;
                          }
                          else {
                            puVar46 = *(uint **)(param_3 + 2);
                            *(uint **)(param_3 + 2) = puVar46 + 2;
                          }
                          sVar21 = 0;
                          uVar52 = (ulong)*puVar46;
                          bVar67 = false;
                          sVar20 = 0;
                        }
                        goto LAB_0078f7b0;
                      }
                      if (uVar54 < 0x30) {
                        puVar44 = (ulong *)((ulong)uVar54 + *(long *)(param_3 + 4));
                        *param_3 = uVar54 + 8;
                      }
                      else {
                        puVar44 = *(ulong **)(param_3 + 2);
                        *(ulong **)(param_3 + 2) = puVar44 + 1;
                      }
                      sVar21 = 0;
                      uVar52 = *puVar44;
                      bVar67 = false;
                      sVar20 = 0;
                      if (uVar41 != 0xffffffff) goto LAB_0078f7ba;
                      goto LAB_0078faba;
                    }
                    pbVar66 = pbVar66 + 1;
                    local_500 = local_500 + 1;
                    pcVar35 = strchrnul((char *)pbVar66,0x25);
                    lVar4 = *(long *)(param_1 + 1);
                    uVar32 = (long)pcVar35 - (long)pbVar66;
                    if (0x827 < lVar4 - 0x932180U) {
                      _IO_vtable_check();
                    }
                    uVar52 = (**(code **)(lVar4 + 0x38))(param_1,pbVar66,uVar32);
                    if (uVar52 == uVar32) {
                      bVar67 = false;
                      uVar52 = (long)(int)uVar60 + uVar32;
                      if (((long)uVar52 < 0) || (uVar52 < uVar32)) {
                        bVar67 = true;
                      }
                      uVar32 = uVar52 & 0xffffffff;
                      if (uVar52 != (long)(int)uVar52) {
                        bVar67 = true;
                      }
                      if (!bVar67) goto code_r0x0078f4b1;
                      goto LAB_0078f5f0;
                    }
                    goto LAB_007903a8;
                  case 99:
                    goto code_r0x0078f534;
                  case 100:
                  case 0x69:
                    goto code_r0x0078fb44;
                  case 0x68:
code_r0x0078fd94:
                    sVar11 = sVar24;
                    sVar6 = sVar23;
                    local_4f0 = sVar22;
                    local_514 = sVar21;
                    local_50c = sVar20;
                    local_510 = sVar19;
                    local_528 = bVar18;
                    local_540 = iVar29;
                    uVar54 = uVar63;
                    bVar51 = pbVar45[1];
                    uVar27 = (uint)bVar51;
                    pbVar66 = pbVar45 + 1;
                    bVar53 = true;
                    uVar41 = uVar54;
                    uVar61 = uVar54;
                    uVar64 = uVar54;
                    uVar62 = uVar54;
                    bVar67 = bVar25;
                    iVar29 = local_540;
                    bVar9 = bVar10;
                    bVar18 = local_528;
                    bVar13 = true;
                    sVar19 = local_510;
                    sVar20 = local_50c;
                    sVar21 = local_514;
                    sVar22 = local_4f0;
                    bVar55 = bVar16;
                    sVar23 = sVar6;
                    sVar24 = sVar11;
                    switch(bVar51) {
                    case 0x25:
                      goto code_r0x0078fb7c;
                    case 0x42:
                    case 0x62:
                      goto code_r0x0078fa74;
                    case 0x58:
                    case 0x78:
                      goto code_r0x0078fad4;
                    case 100:
                    case 0x69:
                      goto code_r0x0078fb44;
                    case 0x68:
                      bVar51 = pbVar45[2];
                      uVar27 = (uint)bVar51;
                      pbVar66 = pbVar45 + 2;
                      bVar13 = false;
                      bVar53 = false;
                      bVar67 = true;
                      uVar63 = uVar54;
                      uVar59 = uVar26;
                      bVar7 = bVar8;
                      bVar9 = bVar8;
                      sVar58 = sVar57;
                      bVar55 = bVar15;
                      sVar17 = sVar6;
                      switch(bVar51) {
                      case 0x25:
                        goto code_r0x0078fb7c;
                      case 0x41:
                      case 0x45:
                      case 0x46:
                      case 0x47:
                      case 0x61:
                      case 0x65:
                      case 0x66:
                      case 0x67:
                        goto code_r0x0078f148;
                      case 0x42:
                      case 0x62:
                        goto code_r0x0078fa74;
                      case 0x43:
                        goto code_r0x0078f344;
                      case 0x53:
                      case 0x73:
                        goto code_r0x0078f4d4;
                      case 0x58:
                      case 0x78:
                        goto code_r0x0078fad4;
                      case 99:
                        goto code_r0x0078f534;
                      case 100:
                      case 0x69:
                        goto code_r0x0078fb44;
                      case 0x6d:
                        goto code_r0x0078f614;
                      case 0x6e:
                        goto code_r0x0078f714;
                      case 0x6f:
                        goto code_r0x0078fb24;
                      case 0x70:
                        goto code_r0x0078f764;
                      case 0x75:
                        goto code_r0x0078fb34;
                      }
                      break;
                    case 0x6e:
                      goto code_r0x0078f714;
                    case 0x6f:
                      goto code_r0x0078fb24;
                    case 0x75:
                      goto code_r0x0078fb34;
                    }
                    break;
                  case 0x6c:
code_r0x0078fc04:
                    sVar11 = sVar24;
                    sVar6 = sVar23;
                    local_4f0 = sVar22;
                    local_514 = sVar21;
                    local_50c = sVar20;
                    local_510 = sVar19;
                    local_528 = bVar18;
                    local_540 = iVar29;
                    uVar54 = uVar63;
                    bVar51 = pbVar45[1];
                    uVar27 = (uint)bVar51;
                    pbVar45 = pbVar45 + 1;
                    bVar55 = true;
                    bVar7 = true;
                    pbVar66 = pbVar45;
                    uVar41 = uVar54;
                    uVar61 = uVar54;
                    uVar64 = uVar54;
                    uVar62 = uVar54;
                    uVar63 = uVar54;
                    bVar67 = bVar25;
                    uVar59 = 0;
                    iVar29 = local_540;
                    bVar9 = bVar7;
                    bVar18 = local_528;
                    bVar13 = bVar12;
                    bVar53 = bVar12;
                    sVar58 = 1;
                    sVar19 = local_510;
                    sVar20 = local_50c;
                    sVar21 = local_514;
                    sVar22 = local_4f0;
                    sVar23 = sVar6;
                    sVar17 = sVar6;
                    sVar24 = sVar11;
                    switch(bVar51) {
                    case 0x25:
                      goto code_r0x0078fb7c;
                    case 0x41:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x61:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                      goto code_r0x0078f148;
                    case 0x42:
                    case 0x62:
                      goto code_r0x0078fa74;
                    case 0x43:
                      goto code_r0x0078f344;
                    case 0x53:
                    case 0x73:
                      goto code_r0x0078f4d4;
                    case 0x58:
                    case 0x78:
                      goto code_r0x0078fad4;
                    case 99:
                      goto code_r0x0078f534;
                    case 100:
                    case 0x69:
                      goto code_r0x0078fb44;
                    case 0x6c:
                      goto code_r0x0078fbc4;
                    case 0x6d:
                      goto code_r0x0078f614;
                    case 0x6e:
                      goto code_r0x0078f714;
                    case 0x6f:
                      goto code_r0x0078fb24;
                    case 0x70:
                      goto code_r0x0078f764;
                    case 0x75:
                      goto code_r0x0078fb34;
                    }
                    break;
                  case 0x6d:
                    goto code_r0x0078f614;
                  case 0x6e:
                    goto code_r0x0078f714;
                  case 0x6f:
                    goto code_r0x0078fb24;
                  case 0x70:
                    goto code_r0x0078f764;
                  case 0x75:
                    goto code_r0x0078fb34;
                  }
code_r0x0078ef94:
                  if (bVar51 != 0) {
LAB_0078ef9c:
                    uVar33 = (ulong)local_500;
                    goto LAB_0078efa0;
                  }
                  uVar32 = 0xffffffff;
                  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
                  goto LAB_0078eff8;
                }
                local_4c8 = 0;
                local_4e8 = (char *)0xffffffffffffffff;
              }
              else {
                local_4c8 = 0;
                local_4e8 = (char *)0xffffffffffffffff;
                local_4d0 = (char *)0x0;
              }
LAB_0078efa0:
              uVar27 = printf_positional(param_1,param_2,local_4c8,param_3,&local_450,uVar32,uVar33,
                                         pcVar31,local_428,iVar3,local_4e8,local_4d0,param_4);
              uVar32 = (ulong)uVar27;
            }
          }
          else {
LAB_0078f5f0:
            uVar32 = 0xffffffff;
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4b;
          }
LAB_0078eff8:
          uVar27 = param_1->_flags;
        }
        else {
LAB_007903a8:
          uVar32 = 0xffffffff;
          uVar27 = param_1->_flags;
        }
        if ((uVar27 & 0x8000) == 0) {
          piVar47 = (int *)param_1->_lock;
          iVar3 = piVar47[1];
          piVar47[1] = iVar3 + -1;
          if (iVar3 + -1 == 0) {
            piVar47[2] = 0;
            piVar47[3] = 0;
            LOCK();
            iVar3 = *piVar47;
            *piVar47 = 0;
            UNLOCK();
            if (1 < iVar3) {
              __lll_lock_wake_private();
            }
          }
        }
        if (bVar5) {
          __libc_cleanup_pop_restore(&local_478);
        }
      }
    }
    else {
      uVar32 = 0xffffffff;
      param_1->_flags = uVar27 | 0x20;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
    }
  }
  else {
    if (param_1->_mode == -1) goto LAB_0078ee0d;
    uVar32 = 0xffffffff;
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar32;
  }
LAB_0079107c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
code_r0x0078fe81:
  local_540 = local_540 * 10 + uVar38;
  pbVar66 = pbVar45;
  uVar38 = uVar39;
  if (9 < uVar39) goto LAB_0078fe90;
  goto LAB_0078fe46;
code_r0x0078f4b1:
  if (((int)uVar52 < 0) || (*pcVar35 == '\0')) goto LAB_0078eff8;
  goto LAB_0078ef80;
}

