
/* WARNING: Removing unreachable block (ram,0x006f807e) */
/* WARNING: Removing unreachable block (ram,0x006f9b49) */
/* WARNING: Removing unreachable block (ram,0x006f9b5e) */
/* WARNING: Removing unreachable block (ram,0x006f9829) */
/* WARNING: Removing unreachable block (ram,0x006f9c53) */
/* WARNING: Removing unreachable block (ram,0x006f7fc8) */
/* WARNING: Removing unreachable block (ram,0x006f8023) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_006f4eb0(char **param_1,char **param_2,ulong *param_3,uint param_4)

{
  uint *puVar1;
  long lVar2;
  code **ppcVar3;
  long *plVar4;
  unkbyte10 Var5;
  unkbyte10 Var6;
  unkbyte10 Var7;
  unkbyte10 Var8;
  unkbyte10 Var9;
  unkbyte10 Var10;
  unkbyte10 Var11;
  char **ppcVar12;
  byte bVar13;
  char cVar14;
  byte bVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  char **ppcVar21;
  long *plVar22;
  unkbyte10 *pVar23;
  char **ppcVar24;
  char *pcVar25;
  undefined2 *puVar26;
  undefined8 *puVar27;
  ulong *puVar28;
  undefined4 *puVar29;
  undefined1 *puVar30;
  long lVar31;
  uint uVar32;
  char *pcVar33;
  uint uVar34;
  int iVar35;
  undefined8 *puVar36;
  long lVar37;
  uint uVar38;
  ulong uVar39;
  char *pcVar40;
  byte *pbVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  int *piVar44;
  ulong uVar45;
  undefined1 uVar46;
  int iVar47;
  char **ppcVar48;
  char **ppcVar49;
  ulong uVar50;
  byte *pbVar51;
  byte *pbVar52;
  int iVar53;
  char **ppcVar54;
  long in_FS_OFFSET;
  bool bVar55;
  byte bVar56;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined8 extraout_XMM0_Qb;
  undefined1 auStack_708 [4];
  int iStack_704;
  char **ppcStack_700;
  undefined8 local_6f8;
  byte *local_6f0;
  uint local_6e8;
  uint local_6e4;
  byte *local_6e0;
  ulong *local_6d8;
  ulong *local_6d0;
  char **local_6c8;
  char **local_6c0;
  code **local_6b8;
  char *local_6b0;
  undefined8 local_6a8;
  char **local_6a0;
  uint local_698;
  int local_694;
  char **local_690;
  byte *local_688;
  long local_680;
  long *local_678;
  undefined8 local_670;
  char **local_668;
  long *local_660;
  undefined8 local_658;
  undefined8 local_650;
  uint local_648;
  uint local_644;
  undefined8 local_640;
  undefined8 local_638;
  long *plStack_630;
  undefined8 local_628;
  char **local_620;
  undefined8 local_618;
  long *plStack_610;
  ulong local_608;
  long *plStack_600;
  char *local_5f0;
  code *local_5e8;
  char **local_5e0;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  ulong local_5b0;
  long *plStack_5a8;
  ulong local_5a0;
  char *local_598 [5];
  int iStack_570;
  undefined4 uStack_56c;
  undefined8 local_548;
  long *plStack_540;
  ulong local_538;
  byte abStack_49e [17];
  char *apcStack_48d [2];
  undefined1 local_478 [16];
  char *local_468;
  long local_460;
  char local_458 [1024];
  undefined1 local_58 [24];
  long local_40;
  
  bVar56 = 0;
  puVar30 = auStack_708;
  puVar43 = auStack_708;
  puVar42 = auStack_708;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_660 = *(long **)(in_FS_OFFSET + -0x78);
  local_680 = *local_660;
  local_460 = 0x400;
  local_6b0 = local_458;
  local_608 = *param_3;
  plStack_600 = (long *)param_3[1];
  local_5a0 = param_3[2];
  local_6d0 = param_3;
  local_620 = param_2;
  local_5b0 = local_608;
  plStack_5a8 = plStack_600;
  local_468 = local_6b0;
  if (*(uint *)(param_1 + 0x18) == 0) {
    *(uint *)(param_1 + 0x18) = 0xffffffff;
LAB_006f4f5a:
    if (((ulong)*param_1 & 4) != 0) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
      local_648 = 0xffffffff;
      goto LAB_006f5642;
    }
    if (param_2 != (char **)0x0) {
      pbVar52 = *(byte **)(local_660[1] + 0x48);
      local_6e0 = *(byte **)(local_660[1] + 0x40);
      local_688 = (byte *)0x0;
      if (*pbVar52 != 0) {
        local_688 = pbVar52;
      }
      local_5e8 = FUN_00795710;
      local_6b8 = &local_5e8;
      local_5e0 = param_1;
      FUN_00709520(local_6b8);
      if (((ulong)*param_1 & 0x8000) == 0) {
        lVar37 = *(long *)(in_FS_OFFSET + 0x10);
        piVar44 = (int *)param_1[0x11];
        if (*(long *)(piVar44 + 2) != lVar37) {
          LOCK();
          iVar35 = *piVar44;
          if (iVar35 == 0) {
            *piVar44 = 1;
          }
          UNLOCK();
          if (iVar35 != 0) {
            FUN_00709590();
          }
          piVar44 = (int *)param_1[0x11];
          *(long *)(piVar44 + 2) = lVar37;
        }
        piVar44[1] = piVar44[1] + 1;
      }
      local_5c0 = 0;
      bVar13 = *(byte *)local_620;
      if (bVar13 != 0) {
        uVar39 = 0;
        local_608 = local_608 & 0xffffffff00000000;
        local_648 = 0;
        local_698 = param_4 & 2;
        local_6e8 = ~param_4 & 1;
        local_6e4 = param_4 & 4;
        local_6a0 = (char **)0x0;
        local_678 = (long *)0x0;
        local_6c0 = (char **)0x0;
        local_6c8 = (char **)0x0;
        local_6d8 = (ulong *)0x0;
        local_618 = (char **)((ulong)local_618 & 0xffffffff00000000);
        puVar42 = auStack_708;
        ppcVar49 = (char **)0x0;
LAB_006f5083:
        ppcVar48 = local_620;
        uVar18 = (uint)uVar39;
        plVar22 = local_660;
        ppcVar24 = local_618;
        if ((bVar13 & 0x80) != 0) {
          *(undefined8 *)(puVar42 + -8) = 0x6f519f;
          uVar20 = thunk_FUN_007129d0(ppcVar48);
          *(undefined8 *)(puVar42 + -8) = 0x6f51b1;
          iVar35 = FUN_007569c0(ppcVar48,uVar20,&local_5c0);
          ppcVar24 = local_620;
          if (iVar35 < 1) {
            bVar13 = *(byte *)ppcVar48;
            plVar22 = local_660;
            ppcVar24 = local_618;
            goto joined_r0x006f51ca;
          }
          ppcVar21 = (char **)((long)local_620 + (ulong)(iVar35 - 1) + 1);
          ppcVar48 = local_620;
          do {
            if ((int)uVar39 == -1) {
              *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006f57bd:
              uVar17 = 0xffffffff;
              ppcVar24 = local_618;
              if (local_648 != 0) {
                uVar17 = local_648;
              }
              goto switchD_006f555e_default;
            }
            pbVar52 = (byte *)param_1[1];
            if (pbVar52 < param_1[2]) {
              param_1[1] = (char *)(pbVar52 + 1);
              uVar39 = (ulong)*pbVar52;
            }
            else {
              local_620 = ppcVar21;
              *(undefined8 *)(puVar42 + -8) = 0x6f5d28;
              uVar18 = FUN_007067b0(param_1);
              uVar39 = (ulong)uVar18;
              ppcVar21 = local_620;
              if (uVar18 == 0xffffffff) goto LAB_006f57bd;
            }
            ppcVar54 = (char **)((byte *)((long)ppcVar49 + (1 - (long)ppcVar24)) + (long)ppcVar48);
            bVar13 = *(byte *)ppcVar48;
            ppcVar48 = (char **)((long)ppcVar48 + 1);
            if ((uint)bVar13 != (uint)uVar39) {
              *(undefined8 *)(puVar42 + -8) = 0x6f7e4c;
              FUN_007075f0(param_1,uVar39 & 0xff);
              uVar17 = local_648;
              ppcVar24 = local_618;
              goto switchD_006f555e_default;
            }
          } while (ppcVar48 != ppcVar21);
          goto LAB_006f510e;
        }
joined_r0x006f51ca:
        ppcVar48 = (char **)((long)local_620 + 1);
        local_618._4_4_ = (undefined4)((ulong)ppcVar24 >> 0x20);
        ppcVar54 = ppcVar49;
        local_660 = plVar22;
        local_618 = ppcVar24;
        if (bVar13 == 0x25) {
          local_640._4_4_ = (undefined4)((ulong)local_640 >> 0x20);
          uVar38 = (uint)*(byte *)((long)local_620 + 1);
          uVar17 = uVar38 - 0x30;
          local_478._8_8_ = local_468 + local_460;
          local_478._0_8_ = local_468;
          if (uVar17 < 10) {
            local_640 = (char **)CONCAT44(local_640._4_4_,uVar17);
            ppcVar21 = (char **)((long)local_620 + 2);
            uVar38 = (uint)*(byte *)((long)local_620 + 2);
            uVar34 = uVar38 - 0x30;
            if (uVar34 < 10) {
              do {
                ppcVar48 = (char **)((long)ppcVar21 + 1);
                uVar38 = (uint)*(byte *)((long)ppcVar21 + 1);
                uVar32 = uVar38 - 0x30;
                if ((int)uVar17 < 0) {
                  local_640 = (char **)CONCAT44(local_640._4_4_,uVar17);
                  ppcVar12 = ppcVar48;
                  ppcVar48 = ppcVar21;
                  while (ppcVar21 = ppcVar12, uVar32 < 10) {
                    uVar38 = (uint)*(byte *)((long)ppcVar21 + 1);
                    ppcVar12 = (char **)((long)ppcVar21 + 1);
                    ppcVar48 = ppcVar21;
                    uVar32 = uVar38 - 0x30;
                  }
                  goto LAB_006f5285;
                }
                if (((int)uVar17 < 0xccccccd) && ((int)(uVar17 * 10) <= (int)(0x7fffffff - uVar34)))
                {
                  uVar17 = uVar17 * 10 + uVar34;
                  ppcVar48 = ppcVar21;
                  goto LAB_006f526a;
                }
                if (9 < uVar32) {
                  if (*(byte *)((long)ppcVar21 + 1) != 0x24) {
                    local_644 = 0;
                    local_694 = 0;
                    local_640 = (char **)CONCAT44(local_640._4_4_,0xffffffff);
                    goto LAB_006f53b7;
                  }
                  local_694 = -1;
                  goto LAB_006f5803;
                }
                uVar17 = 0xffffffff;
LAB_006f526a:
                ppcVar21 = (char **)((long)ppcVar48 + 1);
                uVar38 = (uint)*(byte *)((long)ppcVar48 + 1);
                uVar34 = uVar38 - 0x30;
              } while (uVar34 < 10);
              local_640 = (char **)CONCAT44(local_640._4_4_,uVar17);
            }
LAB_006f5285:
            local_644 = 0;
            local_694 = 0;
            if ((char)uVar38 == '$') {
              local_694 = (uint)local_640;
              ppcVar21 = ppcVar48;
LAB_006f5803:
              uVar38 = (uint)*(byte *)((long)ppcVar21 + 2);
              ppcVar48 = (char **)((long)ppcVar21 + 2);
              goto LAB_006f532a;
            }
LAB_006f52a2:
            ppcVar48 = ppcVar21;
            if ((uint)local_640 == 0) {
              local_640 = (char **)CONCAT44(local_640._4_4_,0xffffffff);
            }
          }
          else {
            local_694 = 0;
LAB_006f532a:
            local_644 = 0;
            if (((byte)(uVar38 - 0x27) < 0x23) &&
               ((0xfffffffbfffffff6U >> ((ulong)(uVar38 - 0x27) & 0x3f) & 1) == 0)) {
              uVar17 = 0;
              local_644 = 0;
              if (local_688 == (byte *)0x0) {
                ppcVar48 = (char **)((long)ppcVar48 + 1);
                if ((char)uVar38 == '*') goto LAB_006f540e;
                do {
                  local_644 = uVar17;
                  if ((char)uVar38 == 'I') {
                    local_644 = uVar17 | 0x400;
                  }
                  while( true ) {
                    bVar13 = *(byte *)ppcVar48;
                    uVar38 = (uint)bVar13;
                    if ((0x22 < (byte)(bVar13 - 0x27)) ||
                       ((0xfffffffbfffffff6U >> ((ulong)(bVar13 - 0x27) & 0x3f) & 1) != 0))
                    goto LAB_006f539e;
                    ppcVar48 = (char **)((long)ppcVar48 + 1);
                    uVar17 = local_644;
                    if (bVar13 != 0x2a) break;
LAB_006f540e:
                    local_644 = local_644 | 8;
                  }
                } while( true );
              }
              do {
                ppcVar48 = (char **)((long)ppcVar48 + 1);
                cVar14 = (char)uVar38;
                if (cVar14 == '*') {
                  uVar17 = uVar17 | 8;
                }
                else if (cVar14 == 'I') {
                  uVar17 = uVar17 | 0x400;
                }
                else if (cVar14 == '\'') {
                  uVar17 = uVar17 | 0x80;
                }
                uVar38 = (uint)*(byte *)ppcVar48;
                uVar34 = *(byte *)ppcVar48 - 0x27;
                local_644 = uVar17;
              } while (((byte)uVar34 < 0x23) &&
                      ((0xfffffffbfffffff6U >> ((ulong)uVar34 & 0x3f) & 1) == 0));
            }
LAB_006f539e:
            local_640 = (char **)CONCAT44(local_640._4_4_,0xffffffff);
            uVar17 = uVar38 - 0x30;
            if (uVar17 < 10) {
              local_640 = (char **)CONCAT44(local_640._4_4_,uVar17);
              ppcVar21 = (char **)((long)ppcVar48 + 1);
              uVar38 = (uint)*(byte *)((long)ppcVar48 + 1);
              uVar34 = uVar38 - 0x30;
              if (uVar34 < 10) {
                do {
                  ppcVar48 = (char **)((long)ppcVar21 + 1);
                  uVar38 = (uint)*(byte *)((long)ppcVar21 + 1);
                  uVar32 = uVar38 - 0x30;
                  if ((int)uVar17 < 0) {
                    local_640 = (char **)CONCAT44(local_640._4_4_,uVar17);
                    if (uVar32 < 10) {
                      uVar39 = FUN_00404bad();
                      return uVar39;
                    }
                    goto LAB_006f53b7;
                  }
                  if ((int)uVar17 < 0xccccccd) {
                    if ((int)(0x7fffffff - uVar34) < (int)(uVar17 * 10)) {
                      if (uVar32 < 10) goto LAB_006f5d79;
                      local_640 = (char **)CONCAT44(local_640._4_4_,0xffffffff);
                      goto LAB_006f53b7;
                    }
                    uVar17 = uVar17 * 10 + uVar34;
                  }
                  else {
                    if (9 < uVar32) {
                      local_640 = (char **)CONCAT44(local_640._4_4_,0xffffffff);
                      goto LAB_006f53b7;
                    }
LAB_006f5d79:
                    uVar17 = 0xffffffff;
                    ppcVar21 = ppcVar48;
                  }
                  pbVar52 = (byte *)((long)ppcVar21 + 1);
                  ppcVar21 = (char **)((long)ppcVar21 + 1);
                  uVar38 = (uint)*pbVar52;
                  uVar34 = uVar38 - 0x30;
                } while (uVar34 < 10);
                local_640 = (char **)CONCAT44(local_640._4_4_,uVar17);
              }
              goto LAB_006f52a2;
            }
          }
LAB_006f53b7:
          cVar14 = (char)uVar38;
          local_620 = (char **)((long)ppcVar48 + 1);
          switch(uVar38 - 0x4c & 0xff) {
          case 0:
          case 0x25:
            uVar38 = (uint)*(byte *)((long)ppcVar48 + 1);
            local_644 = local_644 | 3;
            ppcVar48 = local_620;
            break;
          case 0x15:
            bVar13 = *(byte *)((long)ppcVar48 + 1);
            uVar38 = (uint)bVar13;
            if ((((bVar13 & 0xf7) == 0x53) || (bVar13 == 0x73)) && (local_698 == 0)) {
              local_644 = local_644 | 0x100;
              ppcVar48 = local_620;
              break;
            }
            goto LAB_006f5452;
          case 0x1c:
            uVar38 = (uint)*(byte *)((long)ppcVar48 + 1);
            if (*(byte *)((long)ppcVar48 + 1) == 0x68) {
              uVar38 = (uint)*(byte *)((long)ppcVar48 + 2);
              local_644 = local_644 | 0x200;
              ppcVar48 = (char **)((long)ppcVar48 + 2);
            }
            else {
              local_644 = local_644 | 4;
              ppcVar48 = local_620;
            }
            break;
          case 0x1e:
          case 0x28:
          case 0x2e:
            local_644 = local_644 | 1;
            uVar38 = (uint)*(byte *)((long)ppcVar48 + 1);
            ppcVar48 = local_620;
            break;
          case 0x20:
            uVar38 = (uint)*(byte *)((long)ppcVar48 + 1);
            if (*(byte *)((long)ppcVar48 + 1) == 0x6c) {
              uVar38 = (uint)*(byte *)((long)ppcVar48 + 2);
              local_644 = local_644 | 3;
              ppcVar48 = (char **)((long)ppcVar48 + 2);
            }
            else {
              local_644 = local_644 | 1;
              ppcVar48 = local_620;
            }
            break;
          case 0x21:
            uVar38 = (uint)*(byte *)((long)ppcVar48 + 1);
            if (*(byte *)((long)ppcVar48 + 1) == 0x6c) {
              uVar38 = (uint)*(byte *)((long)ppcVar48 + 2);
              local_644 = local_644 | 0x2001;
              ppcVar48 = (char **)((long)ppcVar48 + 2);
            }
            else {
              local_644 = local_644 | 0x2000;
              ppcVar48 = local_620;
            }
          }
          cVar14 = (char)uVar38;
          uVar17 = local_648;
          if (cVar14 == '\0') goto switchD_006f555e_default;
          local_618._0_4_ = (uint)ppcVar24;
          local_620 = (char **)((long)ppcVar48 + 1);
          if ((uint)local_618 == 0) {
            bVar13 = (byte)(uVar38 - 0x43);
            if ((0x2b < bVar13) ||
               ((0xfffff7fefefffffeU >> ((ulong)(uVar38 - 0x43) & 0x3f) & 1) != 0))
            goto LAB_006f5452;
            switch(bVar13) {
            case 0:
              goto switchD_006f5e94_caseD_43;
            default:
              goto switchD_006f555e_default;
            case 2:
            case 3:
            case 4:
            case 0x1e:
            case 0x22:
            case 0x23:
            case 0x24:
              goto switchD_006f5835_caseD_2;
            case 0x10:
              goto switchD_006f5e94_caseD_53;
            case 0x15:
              local_628 = ppcVar49;
              goto switchD_006f555e_caseD_58;
            case 0x18:
switchD_006f5e94_caseD_5b:
              local_628 = ppcVar49;
              goto switchD_006f555e_caseD_5b;
            case 0x20:
              goto switchD_006f5e94_caseD_63;
            case 0x21:
              local_628 = ppcVar49;
              goto switchD_006f555e_caseD_64;
            case 0x26:
              local_628 = ppcVar49;
              goto switchD_006f555e_caseD_69;
            case 0x2b:
              goto switchD_006f5835_caseD_2b;
            }
          }
LAB_006f5452:
          local_618 = (char **)CONCAT44(local_618._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
          local_628._1_7_ = (undefined7)((ulong)local_628 >> 8);
          local_628 = (char **)CONCAT71(local_628._1_7_,cVar14);
          iVar35 = (int)local_608;
          local_638 = ppcVar48;
          do {
            while ((int)uVar39 == -1) {
              iVar53 = *(int *)(in_FS_OFFSET + -0x58);
joined_r0x006f55b3:
              if (iVar53 == 4) {
                uVar17 = 0xffffffff;
                ppcVar24 = local_618;
                if (local_648 != 0) {
                  uVar17 = local_648;
                }
                goto switchD_006f555e_default;
              }
              uVar39 = 0xffffffff;
              uVar18 = 0xffffffff;
              ppcVar54 = ppcVar49;
              if ((*(ushort *)(plVar22[0xd] + -2) & 0x2000) == 0) goto LAB_006f54ee;
            }
            pbVar52 = (byte *)param_1[1];
            if (pbVar52 < param_1[2]) {
              param_1[1] = (char *)(pbVar52 + 1);
              uVar39 = (ulong)*pbVar52;
            }
            else {
              *(undefined8 *)(puVar42 + -8) = 0x6f55a0;
              uVar39 = FUN_007067b0(param_1);
              if ((int)uVar39 == -1) {
                iVar35 = *(int *)(in_FS_OFFSET + -0x58);
                iVar53 = iVar35;
                goto joined_r0x006f55b3;
              }
            }
            uVar18 = (uint)uVar39;
            ppcVar49 = (char **)((long)ppcVar49 + 1);
            ppcVar54 = ppcVar49;
          } while ((*(ushort *)(plVar22[0xd] + (long)(int)uVar18 * 2) & 0x2000) != 0);
LAB_006f54ee:
          ppcVar48 = local_638;
          uVar39 = (ulong)uVar18;
          local_608 = CONCAT44(local_608._4_4_,iVar35);
          bVar13 = (byte)local_628;
          *(uint *)(in_FS_OFFSET + -0x58) = (uint)local_618;
          if (uVar18 == 0xffffffff) {
            uVar17 = local_648;
            ppcVar24 = local_618;
            if (0x67 < (byte)local_628) {
              bVar13 = (byte)local_628 + 0x97;
              if (0xf < bVar13) goto switchD_006f555e_default;
              if ((1L << (bVar13 & 0x3f) & 0x90c1U) == 0) {
                ppcVar48 = (char **)0xffffffffffffffa8;
                if (bVar13 == 10) goto LAB_006f7873;
                if (bVar13 == 5) goto switchD_006f5835_caseD_2b;
                goto switchD_006f555e_default;
              }
switchD_006f5e94_caseD_58:
              goto LAB_006f623a;
            }
            if ((byte)local_628 < 0x25) goto switchD_006f555e_default;
            ppcVar49 = ppcVar54;
            switch((byte)local_628) {
            case 0x25:
              *(int *)(in_FS_OFFSET + -0x58) = iVar35;
LAB_006f86a4:
              uVar17 = 0xffffffff;
              ppcVar24 = local_618;
              if (local_648 != 0) {
                uVar17 = local_648;
              }
              goto switchD_006f555e_default;
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2a:
            case 0x2b:
            case 0x2c:
            case 0x2d:
            case 0x2e:
            case 0x2f:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
            case 0x3a:
            case 0x3b:
            case 0x3c:
            case 0x3d:
            case 0x3e:
            case 0x3f:
            case 0x40:
            case 0x42:
            case 0x44:
            case 0x48:
            case 0x49:
            case 0x4a:
            case 0x4b:
            case 0x4c:
            case 0x4d:
            case 0x4e:
            case 0x4f:
            case 0x50:
            case 0x51:
            case 0x52:
            case 0x54:
            case 0x55:
            case 0x56:
            case 0x57:
            case 0x59:
            case 0x5a:
            case 0x5c:
            case 0x5d:
            case 0x5e:
            case 0x5f:
            case 0x60:
            case 0x62:
              goto switchD_006f555e_default;
            case 0x41:
            case 0x45:
            case 0x46:
            case 0x47:
            case 0x61:
            case 0x65:
            case 0x66:
            case 0x67:
              goto LAB_006f6a75;
            case 0x43:
              goto switchD_006f5e94_caseD_43;
            case 0x53:
              goto switchD_006f5e94_caseD_53;
            case 0x58:
            case 100:
              goto switchD_006f5e94_caseD_58;
            case 0x5b:
              goto switchD_006f5e94_caseD_5b;
            case 99:
              goto switchD_006f5e94_caseD_63;
            default:
              goto switchD_006f555e_default;
            }
          }
          local_628 = (char **)((long)ppcVar54 + -1);
          local_618 = (char **)0xffffffffffffffa8;
          *(undefined8 *)(puVar42 + -8) = 0x6f553d;
          FUN_007075f0(param_1,uVar39 & 0xff);
          uVar17 = local_648;
          ppcVar24 = local_618;
          ppcVar49 = local_628;
          switch(bVar13) {
          case 0x25:
            pbVar52 = (byte *)param_1[1];
            if (pbVar52 < param_1[2]) {
              param_1[1] = (char *)(pbVar52 + 1);
              uVar39 = (ulong)*pbVar52;
            }
            else {
              *(undefined8 *)(puVar42 + -8) = 0x6f934c;
              uVar18 = FUN_007067b0(param_1);
              uVar39 = (ulong)uVar18;
              if (uVar18 == 0xffffffff) goto LAB_006f86a4;
            }
            if ((int)uVar39 == 0x25) goto LAB_006f6de8;
            *(undefined8 *)(puVar42 + -8) = 0x6f7e38;
            FUN_007075f0(param_1,uVar39 & 0xff);
            uVar17 = local_648;
            ppcVar24 = local_618;
            goto switchD_006f555e_default;
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x3b:
          case 0x3c:
          case 0x3d:
          case 0x3e:
          case 0x3f:
          case 0x40:
          case 0x42:
          case 0x44:
          case 0x48:
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x4c:
          case 0x4d:
          case 0x4e:
          case 0x4f:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x59:
          case 0x5a:
          case 0x5c:
          case 0x5d:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x62:
          case 0x68:
          case 0x6a:
          case 0x6b:
          case 0x6c:
          case 0x6d:
          case 0x71:
          case 0x72:
          case 0x74:
          case 0x76:
          case 0x77:
            goto switchD_006f555e_default;
          case 0x41:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x61:
          case 0x65:
          case 0x66:
          case 0x67:
            goto switchD_006f5835_caseD_2;
          case 0x43:
            ppcVar54 = local_628;
switchD_006f5e94_caseD_43:
            iVar35 = 1;
            if ((uint)local_640 != -1) {
              iVar35 = (uint)local_640;
            }
            local_640 = (char **)CONCAT44(local_640._4_4_,iVar35);
            local_618 = (char **)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000008);
            if ((local_644 & 8) == 0) {
              uVar17 = local_648;
              ppcVar24 = local_618;
              if ((local_644 & 0x2100) == 0) {
                if (local_694 == 0) {
                  if ((uint)local_5b0 < 0x30) {
                    uVar39 = local_5b0 & 0xffffffff;
                    local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                    plVar22 = (long *)(uVar39 + local_5a0);
                  }
                  else {
                    plVar22 = plStack_5a8;
                    plStack_5a8 = plStack_5a8 + 1;
                  }
                  local_6c0 = (char **)*plVar22;
                }
                else {
                  local_638 = (char **)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = local_6d0[2];
                  local_548._0_4_ = (uint)local_638;
                  iVar35 = local_694 + -1;
                  uVar38 = (uint)local_548;
                  local_548 = local_638;
                  plStack_540 = plStack_630;
                  if (iVar35 != 0) {
                    uVar39 = (ulong)local_638 & 0xffffffff;
                    bVar55 = false;
LAB_006fa062:
                    uVar34 = (uint)uVar39;
                    if (uVar34 < 0x30) goto code_r0x006fa067;
                    plStack_540 = plStack_630 + 1;
                    if (iVar35 != 1) {
                      plVar22 = plStack_630 + 2;
                      do {
                        plStack_540 = plVar22;
                        plVar22 = plStack_540 + 1;
                      } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                    }
                    local_548 = local_638;
                    if (!bVar55) goto LAB_006fa07d;
LAB_006fa075:
                    local_548._4_4_ = (undefined4)((ulong)local_638 >> 0x20);
                    local_548 = (char **)CONCAT44(local_548._4_4_,uVar34);
                    uVar38 = uVar34;
                  }
LAB_006fa07d:
                  if (uVar38 < 0x30) {
                    local_548 = (char **)CONCAT44(local_548._4_4_,uVar38 + 8);
                    plVar22 = (long *)(uVar38 + local_538);
                  }
                  else {
                    plVar22 = plStack_540;
                    plStack_540 = plStack_540 + 1;
                  }
                  local_6c0 = (char **)*plVar22;
                }
                if (local_6c0 == (char **)0x0) goto switchD_006f555e_default;
              }
              else {
                if (local_694 == 0) {
                  if ((uint)local_5b0 < 0x30) {
                    uVar39 = local_5b0 & 0xffffffff;
                    local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                    plVar22 = (long *)(uVar39 + local_5a0);
                  }
                  else {
                    plVar22 = plStack_5a8;
                    plStack_5a8 = plStack_5a8 + 1;
                  }
                  plVar22 = (long *)*plVar22;
                }
                else {
                  local_638 = (char **)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = local_6d0[2];
                  local_548._0_4_ = (uint)local_638;
                  iVar53 = local_694 + -1;
                  uVar38 = (uint)local_548;
                  local_548 = local_638;
                  plStack_540 = plStack_630;
                  if (iVar53 != 0) {
                    uVar39 = (ulong)local_638 & 0xffffffff;
                    bVar55 = false;
LAB_006f93a1:
                    uVar34 = (uint)uVar39;
                    if (uVar34 < 0x30) goto code_r0x006f93a6;
                    plStack_540 = plStack_630 + 1;
                    if (iVar53 != 1) {
                      plVar22 = plStack_630 + 2;
                      do {
                        plStack_540 = plVar22;
                        plVar22 = plStack_540 + 1;
                      } while (plStack_630 + (ulong)(iVar53 - 2) + 3 != plStack_540 + 1);
                    }
                    local_548 = local_638;
                    if (!bVar55) goto LAB_006f93bc;
LAB_006f93b4:
                    local_548._4_4_ = (undefined4)((ulong)local_638 >> 0x20);
                    local_548 = (char **)CONCAT44(local_548._4_4_,uVar34);
                    uVar38 = uVar34;
                  }
LAB_006f93bc:
                  if (uVar38 < 0x30) {
                    local_548 = (char **)CONCAT44(local_548._4_4_,uVar38 + 8);
                    plVar22 = (long *)(uVar38 + local_538);
                  }
                  else {
                    plVar22 = plStack_540;
                    plStack_540 = plStack_540 + 1;
                  }
                  plVar22 = (long *)*plVar22;
                }
                local_678 = plVar22;
                if (plVar22 == (long *)0x0) goto switchD_006f555e_default;
                local_6a0 = (char **)0x400;
                if (iVar35 < 0x401) {
                  local_6a0 = (char **)(long)iVar35;
                }
                lVar37 = (long)local_6a0 * 4;
                *(undefined8 *)(puVar42 + -8) = 0x6f5b72;
                local_6c0 = (char **)FUN_007101b0(lVar37);
                *plVar22 = (long)local_6c0;
                if (local_6c0 == (char **)0x0) {
                  uVar17 = 0xffffffff;
                  ppcVar24 = local_618;
                  if ((local_644 & 0x2000) == 0) {
                    uVar17 = local_648;
                  }
                  goto switchD_006f555e_default;
                }
                if (local_6d8 == (ulong *)0x0) {
LAB_006f8038:
                  puVar43 = puVar42 + -0x120;
                  *(undefined8 *)(puVar42 + -8) = *(undefined8 *)(puVar42 + -8);
                  uVar39 = 1;
                  puVar28 = (ulong *)((ulong)(puVar42 + -0x111) & 0xfffffffffffffff0);
                  *puVar28 = 0;
                  puVar28[1] = (ulong)local_6d8;
                  uVar50 = 0;
                  local_6d8 = puVar28;
                }
                else {
                  uVar50 = *local_6d8;
                  uVar39 = uVar50 + 1;
                  puVar43 = puVar42;
                  if (uVar50 == 0x20) goto LAB_006f8038;
                }
                *local_6d8 = uVar39;
                local_6d8[uVar50 + 2] = (ulong)local_678;
                puVar42 = puVar43;
              }
            }
            if (uVar18 == 0xffffffff) {
              *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
            }
            else {
              pbVar52 = (byte *)param_1[1];
              if (pbVar52 < param_1[2]) {
                param_1[1] = (char *)(pbVar52 + 1);
                uVar39 = (ulong)*pbVar52;
LAB_006f5be0:
                local_638 = (char **)&local_548;
                local_548 = (char **)0x0;
                local_644 = local_644 & 0x2100;
                local_628 = (char **)CONCAT44(local_628._4_4_,(uint)local_640 + -1);
                local_640 = (char **)(long)(int)(uint)local_640;
                do {
                  local_58[0] = (undefined1)uVar39;
                  if (((uint)local_618 == 0) && (local_644 != 0)) {
                    lVar31 = *local_678;
                    lVar37 = (long)local_6a0 * 4;
                    if (local_6c0 == (char **)(lVar31 + lVar37)) {
                      ppcVar49 = (char **)(long)(int)local_628;
                      if ((long)local_6a0 <= (long)local_640) {
                        ppcVar49 = local_6a0;
                      }
                      ppcVar49 = (char **)((long)ppcVar49 + (long)local_6a0);
                      *(undefined8 *)(puVar42 + -8) = 0x6f9afd;
                      lVar31 = FUN_00710840(lVar31,(long)ppcVar49 * 4);
                      plVar22 = local_678;
                      if (lVar31 == 0) {
                        local_6a0 = (char **)((long)local_6a0 + 1);
                        lVar31 = *local_678;
                        *(undefined8 *)(puVar42 + -8) = 0x6fc973;
                        lVar31 = FUN_00710840(lVar31,lVar37 + 4);
                        if (lVar31 == 0) {
                          local_648 = 0xffffffff;
                          uVar17 = local_648;
                          ppcVar24 = local_618;
                          goto switchD_006f555e_default;
                        }
                        *plVar22 = lVar31;
                        local_6c0 = (char **)(lVar31 + lVar37);
                      }
                      else {
                        *local_678 = lVar31;
                        local_6c0 = (char **)(lVar31 + lVar37);
                        local_6a0 = ppcVar49;
                      }
                    }
                  }
                  ppcVar49 = (char **)0x0;
                  if ((uint)local_618 == 0) {
                    ppcVar49 = local_6c0;
                  }
                  while( true ) {
                    ppcVar54 = (char **)((long)ppcVar54 + 1);
                    *(undefined8 *)(puVar42 + -8) = 0x6f5cb3;
                    lVar37 = FUN_007569f0(ppcVar49,local_58,1);
                    if (lVar37 != -2) break;
                    pbVar52 = (byte *)param_1[1];
                    if (pbVar52 < param_1[2]) {
                      param_1[1] = (char *)(pbVar52 + 1);
                      uVar39 = (ulong)*pbVar52;
                    }
                    else {
                      *(undefined8 *)(puVar42 + -8) = 0x6f5ccf;
                      uVar18 = FUN_007067b0(param_1);
                      uVar39 = (ulong)uVar18;
                      if (uVar18 == 0xffffffff) {
                        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
                        uVar17 = local_648;
                        ppcVar24 = local_618;
                        goto switchD_006f555e_default;
                      }
                    }
                    local_58[0] = (undefined1)uVar39;
                  }
                  if (lVar37 != 1) {
                    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
                    uVar17 = local_648;
                    ppcVar24 = local_618;
                    goto switchD_006f555e_default;
                  }
                  local_6c0 = (char **)((long)local_6c0 + 4);
                  if ((int)local_628 < 1) goto LAB_006f8d02;
                  pbVar52 = (byte *)param_1[1];
                  if (pbVar52 < param_1[2]) {
                    param_1[1] = (char *)(pbVar52 + 1);
                    uVar39 = (ulong)*pbVar52;
                  }
                  else {
                    *(undefined8 *)(puVar42 + -8) = 0x6f8ce5;
                    uVar18 = FUN_007067b0(param_1);
                    uVar39 = (ulong)uVar18;
                    if (uVar18 == 0xffffffff) goto code_r0x006f8cf1;
                  }
                  local_628 = (char **)CONCAT44(local_628._4_4_,(int)local_628 + -1);
                  local_640 = (char **)((long)local_640 + -1);
                } while( true );
              }
              *(undefined8 *)(puVar42 + -8) = 0x6f85e4;
              uVar18 = FUN_007067b0(param_1);
              uVar39 = (ulong)uVar18;
              if (uVar18 != 0xffffffff) goto LAB_006f5be0;
            }
            uVar17 = 0xffffffff;
            ppcVar24 = local_618;
            if (local_648 != 0) {
              uVar17 = local_648;
            }
            goto switchD_006f555e_default;
          case 0x53:
            goto switchD_006f5e94_caseD_53;
          case 0x58:
          case 0x78:
switchD_006f555e_caseD_58:
            local_618 = ppcVar24;
            local_618 = (char **)CONCAT44(local_618._4_4_,0x10);
            break;
          case 0x5b:
switchD_006f555e_caseD_5b:
            uVar34 = local_644;
            uVar38 = local_644 & 8;
            local_618 = (char **)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000001);
            uVar17 = local_648;
            ppcVar24 = local_618;
            if ((local_644 & 1) == 0) {
              if (uVar38 == 0) {
                if ((local_644 & 0x2100) != 0) {
                  if (local_694 == 0) {
                    if ((uint)local_5b0 < 0x30) {
                      uVar39 = local_5b0 & 0xffffffff;
                      local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                      plVar22 = (long *)(uVar39 + local_5a0);
                    }
                    else {
                      plVar22 = plStack_5a8;
                      plStack_5a8 = plStack_5a8 + 1;
                    }
                    plVar22 = (long *)*plVar22;
                    local_678 = plVar22;
                    if (plVar22 != (long *)0x0) {
                      *(undefined8 *)(puVar42 + -8) = 0x6f7f94;
                      local_6c8 = (char **)FUN_007101b0(100);
                      *plVar22 = (long)local_6c8;
                      if (local_6c8 != (char **)0x0) {
                        if ((local_6d8 == (ulong *)0x0) || (uVar39 = *local_6d8, uVar39 == 0x20))
                        goto LAB_006f7fdd;
LAB_006f692c:
                        uVar50 = uVar39 + 1;
                        puVar43 = puVar42;
                        goto LAB_006f6930;
                      }
                      uVar17 = 0xffffffff;
                      ppcVar24 = local_618;
                      if ((local_644 & 0x2000) == 0) {
                        uVar17 = local_648;
                      }
                    }
                    goto switchD_006f555e_default;
                  }
                  local_638 = (char **)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = local_6d0[2];
                  local_548._0_4_ = (uint)local_638;
                  iVar35 = local_694 + -1;
                  uVar18 = (uint)local_548;
                  pcVar33 = (char *)local_638;
                  plStack_540 = plStack_630;
                  if (iVar35 == 0) goto LAB_006fa161;
                  uVar39 = (ulong)local_638 & 0xffffffff;
                  bVar55 = false;
                  goto LAB_006fa12a;
                }
                if (local_694 == 0) {
                  if ((uint)local_5b0 < 0x30) {
                    uVar39 = local_5b0 & 0xffffffff;
                    local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                    plVar22 = (long *)(uVar39 + local_5a0);
                  }
                  else {
                    plVar22 = plStack_5a8;
                    plStack_5a8 = plStack_5a8 + 1;
                  }
                  local_6c8 = (char **)*plVar22;
                  ppcVar49 = local_6c8;
                }
                else {
                  local_638 = (char **)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = local_6d0[2];
                  local_548._0_4_ = (uint)local_638;
                  iVar35 = local_694 + -1;
                  uVar32 = (uint)local_548;
                  ppcVar49 = local_638;
                  plStack_540 = plStack_630;
                  if (iVar35 != 0) {
                    bVar55 = false;
LAB_006fc9cf:
                    if ((uint)local_548 < 0x30) goto code_r0x006fc9d4;
                    plStack_540 = plStack_630 + 1;
                    if (iVar35 != 1) {
                      plVar22 = plStack_630 + 2;
                      do {
                        plStack_540 = plVar22;
                        plVar22 = plStack_540 + 1;
                      } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                    }
                    if (bVar55) {
LAB_006fc9fd:
                      local_548._4_4_ = (undefined4)((ulong)local_638 >> 0x20);
                      uVar32 = (uint)local_548;
                      ppcVar49 = local_548;
                    }
                  }
                  local_548 = ppcVar49;
                  if (uVar32 < 0x30) {
                    local_548 = (char **)CONCAT44(local_548._4_4_,uVar32 + 8);
                    plVar22 = (long *)(uVar32 + local_538);
                  }
                  else {
                    plVar22 = plStack_540;
                    plStack_540 = plStack_540 + 1;
                  }
                  local_6c8 = (char **)*plVar22;
                  ppcVar49 = local_6c8;
                }
joined_r0x006f9f33:
                if (ppcVar49 == (char **)0x0) goto switchD_006f555e_default;
              }
            }
            else if (uVar38 == 0) {
              if ((local_644 & 0x2100) == 0) {
                if (local_694 == 0) {
                  if ((uint)local_5b0 < 0x30) {
                    uVar39 = local_5b0 & 0xffffffff;
                    local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                    plVar22 = (long *)(uVar39 + local_5a0);
                  }
                  else {
                    plVar22 = plStack_5a8;
                    plStack_5a8 = plStack_5a8 + 1;
                  }
                  local_6c0 = (char **)*plVar22;
                  ppcVar49 = local_6c0;
                }
                else {
                  local_638 = (char **)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = local_6d0[2];
                  local_548._0_4_ = (uint)local_638;
                  iVar35 = local_694 + -1;
                  uVar32 = (uint)local_548;
                  ppcVar49 = local_638;
                  plStack_540 = plStack_630;
                  if (iVar35 != 0) {
                    bVar55 = false;
LAB_006faf95:
                    if ((uint)local_548 < 0x30) goto code_r0x006faf9a;
                    plStack_540 = plStack_630 + 1;
                    if (iVar35 != 1) {
                      plVar22 = plStack_630 + 2;
                      do {
                        plStack_540 = plVar22;
                        plVar22 = plStack_540 + 1;
                      } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                    }
                    if (bVar55) {
LAB_006fafc3:
                      local_548._4_4_ = (undefined4)((ulong)local_638 >> 0x20);
                      uVar32 = (uint)local_548;
                      ppcVar49 = local_548;
                    }
                  }
                  local_548 = ppcVar49;
                  if (uVar32 < 0x30) {
                    local_548 = (char **)CONCAT44(local_548._4_4_,uVar32 + 8);
                    plVar22 = (long *)(uVar32 + local_538);
                  }
                  else {
                    plVar22 = plStack_540;
                    plStack_540 = plStack_540 + 1;
                  }
                  local_6c0 = (char **)*plVar22;
                  ppcVar49 = local_6c0;
                }
                goto joined_r0x006f9f33;
              }
              if (local_694 == 0) {
                if ((uint)local_5b0 < 0x30) {
                  uVar39 = local_5b0 & 0xffffffff;
                  local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                  plVar22 = (long *)(uVar39 + local_5a0);
                }
                else {
                  plVar22 = plStack_5a8;
                  plStack_5a8 = plStack_5a8 + 1;
                }
                plVar22 = (long *)*plVar22;
              }
              else {
                local_638 = (char **)*local_6d0;
                plStack_630 = (long *)local_6d0[1];
                local_538 = local_6d0[2];
                local_548._0_4_ = (uint)local_638;
                iVar35 = local_694 + -1;
                uVar32 = (uint)local_548;
                ppcVar49 = local_638;
                plStack_540 = plStack_630;
                if (iVar35 != 0) {
                  bVar55 = false;
LAB_006f9e95:
                  if ((uint)local_548 < 0x30) goto code_r0x006f9e9a;
                  plStack_540 = plStack_630 + 1;
                  if (iVar35 != 1) {
                    plVar22 = plStack_630 + 2;
                    do {
                      plStack_540 = plVar22;
                      plVar22 = plStack_540 + 1;
                    } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                  }
                  ppcVar49 = local_638;
                  if (bVar55) {
LAB_006f9ec3:
                    local_548._4_4_ = (undefined4)((ulong)local_638 >> 0x20);
                    uVar32 = (uint)local_548;
                    ppcVar49 = local_548;
                  }
                }
                local_548 = ppcVar49;
                if (uVar32 < 0x30) {
                  local_548 = (char **)CONCAT44(local_548._4_4_,uVar32 + 8);
                  plVar22 = (long *)(uVar32 + local_538);
                }
                else {
                  plVar22 = plStack_540;
                  plStack_540 = plStack_540 + 1;
                }
                plVar22 = (long *)*plVar22;
              }
              local_678 = plVar22;
              if (plVar22 == (long *)0x0) goto switchD_006f555e_default;
              *(undefined8 *)(puVar42 + -8) = 0x6f68fc;
              local_6c0 = (char **)FUN_007101b0(400);
              *plVar22 = (long)local_6c0;
              if (local_6c0 == (char **)0x0) {
                uVar17 = 0xffffffff;
                ppcVar24 = local_618;
                if ((local_644 & 0x2000) == 0) {
                  uVar17 = local_648;
                }
                goto switchD_006f555e_default;
              }
              if ((local_6d8 != (ulong *)0x0) && (uVar39 = *local_6d8, uVar39 != 0x20))
              goto LAB_006f692c;
LAB_006f7fdd:
              puVar43 = puVar42 + -0x120;
              *(undefined8 *)(puVar42 + -8) = *(undefined8 *)(puVar42 + -8);
              uVar50 = 1;
              puVar28 = (ulong *)((ulong)(puVar42 + -0x111) & 0xfffffffffffffff0);
              *puVar28 = 0;
              puVar28[1] = (ulong)local_6d8;
              uVar39 = 0;
              local_6d8 = puVar28;
LAB_006f6930:
              *local_6d8 = uVar50;
              local_6d8[uVar39 + 2] = (ulong)local_678;
              local_6a0 = (char **)0x64;
              puVar42 = puVar43;
            }
            ppcVar49 = local_650;
            local_650 = (char **)((ulong)local_650 & 0xffffffffffffff00);
            if (*(byte *)((long)ppcVar48 + 1) == 0x5e) {
              local_620 = (char **)((long)ppcVar48 + 2);
              local_650._1_7_ = SUB87(ppcVar49,1);
              local_650 = (char **)CONCAT71(local_650._1_7_,1);
            }
            *(undefined8 *)(puVar42 + -8) = 0x6f6989;
            cVar14 = FUN_007125e0(&local_468,0x100,1);
            ppcVar24 = local_618;
            if (cVar14 == '\0') {
              local_648 = 0xffffffff;
              uVar17 = local_648;
            }
            else {
              local_468[0] = '\0';
              local_468[1] = '\0';
              local_468[2] = '\0';
              local_468[3] = '\0';
              local_468[4] = '\0';
              local_468[5] = '\0';
              local_468[6] = '\0';
              local_468[7] = '\0';
              local_468[0xf8] = '\0';
              local_468[0xf9] = '\0';
              local_468[0xfa] = '\0';
              local_468[0xfb] = '\0';
              local_468[0xfc] = '\0';
              local_468[0xfd] = '\0';
              local_468[0xfe] = '\0';
              local_468[0xff] = '\0';
              puVar27 = (undefined8 *)((ulong)(local_468 + 8) & 0xfffffffffffffff8);
              for (uVar39 = (ulong)(((int)local_468 -
                                    (int)(undefined8 *)((ulong)(local_468 + 8) & 0xfffffffffffffff8)
                                    ) + 0x100U >> 3); uVar39 != 0; uVar39 = uVar39 - 1) {
                *puVar27 = 0;
                puVar27 = puVar27 + (ulong)bVar56 * -2 + 1;
              }
              bVar13 = *(byte *)local_620;
              uVar39 = (ulong)bVar13;
              if ((bVar13 == 0x5d) || (bVar13 == 0x2d)) {
                local_468[uVar39] = '\x01';
                uVar39 = (ulong)*(byte *)((long)local_620 + 1);
                local_620 = (char **)((long)local_620 + 1);
              }
              ppcVar49 = local_620;
              if ((char)uVar39 == '\0') {
                uVar39 = FUN_006f9df5();
                return uVar39;
              }
              while( true ) {
                ppcVar48 = (char **)((long)ppcVar49 + 1);
                if ((char)uVar39 == ']') break;
                if (((((char)uVar39 == '-') && (bVar13 = *(byte *)ppcVar48, bVar13 != 0)) &&
                    (bVar13 != 0x5d)) && (bVar15 = *(byte *)((long)ppcVar49 + -1), bVar15 <= bVar13)
                   ) {
                  if (bVar15 < bVar13) {
                    do {
                      uVar39 = (ulong)bVar15;
                      bVar15 = bVar15 + 1;
                      local_468[uVar39] = '\x01';
                      bVar13 = *(byte *)ppcVar48;
                    } while (bVar15 < bVar13);
                    goto LAB_006f6a06;
                  }
                }
                else {
                  local_468[uVar39] = '\x01';
                  bVar13 = *(byte *)ppcVar48;
LAB_006f6a06:
                  uVar17 = local_648;
                  if (bVar13 == 0) goto switchD_006f555e_default;
                }
                uVar39 = (ulong)bVar13;
                ppcVar49 = ppcVar48;
              }
              local_620 = ppcVar48;
              if ((uint)local_618 == 0) {
                if (uVar18 == 0xffffffff) {
                  *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006f99b8:
                  uVar17 = 0xffffffff;
                  ppcVar24 = local_618;
                  if (local_648 != 0) {
                    uVar17 = local_648;
                  }
                }
                else {
                  pbVar52 = (byte *)param_1[1];
                  if (pbVar52 < param_1[2]) {
                    param_1[1] = (char *)(pbVar52 + 1);
                    uVar39 = (ulong)*pbVar52;
                  }
                  else {
                    *(undefined8 *)(puVar42 + -8) = 0x6f9d5b;
                    uVar18 = FUN_007067b0(param_1);
                    uVar39 = (ulong)uVar18;
                    if (uVar18 == 0xffffffff) goto LAB_006f99b8;
                  }
                  ppcVar54 = local_628;
                  ppcVar49 = local_6c8;
                  if ((byte)local_650 != local_468[(int)uVar39]) {
                    local_638 = (char **)(CONCAT44(local_638._4_4_,local_644) & 0xffffffff00002100);
                    iVar35 = (uint)local_640;
                    do {
                      ppcVar54 = (char **)((long)ppcVar54 + 1);
                      if (uVar38 == 0) {
                        *(byte *)ppcVar49 = (byte)uVar39;
                        ppcVar49 = (char **)((long)ppcVar49 + 1);
                        if (((int)local_638 != 0) &&
                           (lVar37 = *local_678, ppcVar49 == (char **)(lVar37 + (long)local_6a0))) {
                          local_658 = (char **)((ulong)local_658 & 0xffffffff00000000);
                          ppcVar49 = (char **)((long)local_6a0 + 1);
                          ppcVar24 = (char **)((long)local_6a0 * 2);
                          local_640 = param_1;
                          while( true ) {
                            *(undefined8 *)(puVar42 + -8) = 0x6f9965;
                            lVar37 = FUN_00710840(lVar37,ppcVar24);
                            plVar22 = local_678;
                            param_1 = local_640;
                            if (lVar37 != 0) break;
                            if (ppcVar24 <= ppcVar49) {
                              ppcVar24 = local_618;
                              if ((local_644 & 0x2000) == 0) {
                                local_678 = (long *)0x0;
                                *(byte *)(*plVar22 + -1 + (long)local_6a0) = 0;
                                uVar17 = local_648 + 1;
                              }
                              else {
                                local_648 = 0xffffffff;
                                uVar17 = local_648;
                              }
                              goto switchD_006f555e_default;
                            }
                            lVar37 = *local_678;
                            ppcVar24 = ppcVar49;
                          }
                          *local_678 = lVar37;
                          ppcVar49 = (char **)(lVar37 + (long)local_6a0);
                          uVar38 = (uint)local_658;
                          local_6a0 = ppcVar24;
                        }
                      }
                      if ((-1 < iVar35) && (iVar35 = iVar35 + -1, iVar35 == 0)) goto LAB_006f855e;
                      pbVar52 = (byte *)param_1[1];
                      if (pbVar52 < param_1[2]) {
                        param_1[1] = (char *)(pbVar52 + 1);
                        uVar39 = (ulong)*pbVar52;
                      }
                      else {
                        local_640 = ppcVar49;
                        *(undefined8 *)(puVar42 + -8) = 0x6f852c;
                        uVar18 = FUN_007067b0(param_1);
                        uVar39 = (ulong)uVar18;
                        ppcVar49 = local_640;
                        if (uVar18 == 0xffffffff) {
                          local_6c8 = local_640;
                          local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58)
                                              );
                          ppcVar49 = local_6c8;
                          goto LAB_006f855e;
                        }
                      }
                    } while (local_468[(int)uVar39] != (byte)local_650);
                  }
                  local_6c8 = ppcVar49;
                  *(undefined8 *)(puVar42 + -8) = 0x6f9d4e;
                  FUN_007075f0(param_1,uVar39 & 0xff);
                  ppcVar49 = local_6c8;
LAB_006f855e:
                  local_6c8 = ppcVar49;
                  ppcVar49 = local_6c8;
                  uVar17 = local_648;
                  ppcVar24 = local_618;
                  if (ppcVar54 != local_628) goto LAB_006f7aa5;
                }
              }
              else {
                if (uVar18 != 0xffffffff) {
                  pbVar52 = (byte *)param_1[1];
                  if (pbVar52 < param_1[2]) {
                    param_1[1] = (char *)(pbVar52 + 1);
                    uVar39 = (ulong)*pbVar52;
                  }
                  else {
                    *(undefined8 *)(puVar42 + -8) = 0x6f9f71;
                    uVar18 = FUN_007067b0(param_1);
                    uVar39 = (ulong)uVar18;
                    if (uVar18 == 0xffffffff) goto LAB_006f977e;
                  }
                  local_548 = (char **)0x0;
                  local_638 = (char **)&local_548;
                  ppcVar54 = local_628;
                  if ((byte)local_650 != local_468[(int)uVar39]) {
                    local_618 = (char **)(CONCAT44(local_618._4_4_,uVar34) & 0xffffffff00000008);
                    local_658 = (char **)0x0;
                    local_670 = CONCAT44(local_670._4_4_,local_644) & 0xffffffff00002100;
                    local_668 = (char **)local_58;
                    ppcVar49 = local_6c0;
                    iVar35 = (uint)local_640;
LAB_006f82b1:
                    ppcVar24 = local_668;
                    ppcVar54 = (char **)((long)ppcVar54 + 1);
                    if ((uint)local_618 == 0) {
                      local_58[0] = (undefined1)uVar39;
                      *(undefined8 *)(puVar42 + -8) = 0x6f82da;
                      lVar37 = FUN_007569f0(ppcVar49,ppcVar24,1);
                      if (lVar37 == -2) {
                        local_658 = (char **)((long)local_658 + 1);
                        if ((char **)0xf < local_658) {
                    /* WARNING: Subroutine does not return */
                          *(undefined8 *)(puVar42 + -8) = 0x6f841a;
                          FUN_006e2220("cnt < MB_LEN_MAX","vfscanf-internal.c",0xa77,
                                       "__vfscanf_internal");
                        }
                        goto LAB_006f8272;
                      }
                      ppcVar49 = (char **)((long)ppcVar49 + 4);
                      if ((int)local_670 == 0) {
                        local_658 = (char **)0x0;
                      }
                      else {
                        local_658 = (char **)0x0;
                        lVar37 = *local_678;
                        if (ppcVar49 == (char **)(lVar37 + (long)local_6a0 * 4)) {
                          lVar31 = (long)local_6a0 * 8;
                          local_640 = (char **)((long)local_6a0 * 4);
                          *(undefined8 *)(puVar42 + -8) = 0x6f8342;
                          lVar37 = FUN_00710840(lVar37,lVar31);
                          if (lVar37 != 0) {
                            local_6a0 = (char **)((long)local_6a0 << 1);
                            *local_678 = lVar37;
                            ppcVar49 = (char **)(lVar37 + (long)local_640);
                            goto code_r0x006f8260;
                          }
                          puVar1 = (uint *)((long)local_640 + 4);
                          local_6a0 = (char **)((long)local_6a0 + 1);
                          lVar37 = *local_678;
                          *(undefined8 *)(puVar42 + -8) = 0x6fb5f6;
                          lVar37 = FUN_00710840(lVar37,puVar1);
                          plVar22 = local_678;
                          if (lVar37 != 0) {
                            *local_678 = lVar37;
                            uVar39 = FUN_006f8260();
                            return uVar39;
                          }
                          ppcVar24 = local_618;
                          if ((local_644 & 0x2000) == 0) {
                            local_678 = (long *)0x0;
                            pbVar52 = (byte *)(*plVar22 + -4 + (long)local_640);
                            pbVar52[0] = 0;
                            pbVar52[1] = 0;
                            pbVar52[2] = 0;
                            pbVar52[3] = 0;
                            uVar17 = local_648 + 1;
                          }
                          else {
                            local_648 = 0xffffffff;
                            uVar17 = local_648;
                          }
                          goto switchD_006f555e_default;
                        }
                      }
                    }
code_r0x006f8260:
                    if ((-1 < iVar35) && (iVar35 = iVar35 + -1, iVar35 < 1)) {
                      ppcVar48 = local_658;
                      uVar38 = (uint)local_618;
                      local_6c0 = ppcVar49;
                      goto LAB_006f83af;
                    }
LAB_006f8272:
                    pbVar52 = (byte *)param_1[1];
                    if (pbVar52 < param_1[2]) {
                      param_1[1] = (char *)(pbVar52 + 1);
                      uVar39 = (ulong)*pbVar52;
                    }
                    else {
                      *(undefined8 *)(puVar42 + -8) = 0x6f8378;
                      uVar18 = FUN_007067b0(param_1);
                      uVar39 = (ulong)uVar18;
                      if (uVar18 == 0xffffffff) {
                        local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
                        ppcVar48 = local_658;
                        uVar38 = (uint)local_618;
                        local_6c0 = ppcVar49;
                        goto LAB_006f83af;
                      }
                    }
                    if (local_468[(int)uVar39] == (byte)local_650) goto LAB_006f9c20;
                    goto LAB_006f82b1;
                  }
                  ppcVar48 = (char **)0x0;
                  goto LAB_006f9c3a;
                }
                *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006f977e:
                uVar17 = 0xffffffff;
                ppcVar24 = local_618;
                if (local_648 != 0) {
                  uVar17 = local_648;
                }
              }
            }
            goto switchD_006f555e_default;
          case 99:
switchD_006f5e94_caseD_63:
            local_618 = (char **)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000001);
            ppcVar54 = ppcVar49;
            if ((local_644 & 1) != 0) goto switchD_006f5e94_caseD_43;
            iVar35 = 1;
            if ((uint)local_640 != -1) {
              iVar35 = (uint)local_640;
            }
            local_640 = (char **)CONCAT44(local_640._4_4_,iVar35);
            uVar38 = local_644 & 8;
            if (uVar38 == 0) {
              uVar17 = local_648;
              ppcVar24 = local_618;
              if ((local_644 & 0x2100) == 0) {
                if (local_694 == 0) {
                  if ((uint)local_5b0 < 0x30) {
                    uVar39 = local_5b0 & 0xffffffff;
                    local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                    plVar22 = (long *)(uVar39 + local_5a0);
                  }
                  else {
                    plVar22 = plStack_5a8;
                    plStack_5a8 = plStack_5a8 + 1;
                  }
                  local_6c8 = (char **)*plVar22;
                }
                else {
                  local_638 = (char **)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = local_6d0[2];
                  local_548._0_4_ = (uint)local_638;
                  iVar35 = local_694 + -1;
                  uVar34 = (uint)local_548;
                  local_548 = local_638;
                  plStack_540 = plStack_630;
                  if (iVar35 != 0) {
                    uVar39 = (ulong)local_638 & 0xffffffff;
                    bVar55 = false;
LAB_006fb4ac:
                    uVar32 = (uint)uVar39;
                    if (uVar32 < 0x30) goto code_r0x006fb4b1;
                    plStack_540 = plStack_630 + 1;
                    if (iVar35 != 1) {
                      plVar22 = plStack_630 + 2;
                      do {
                        plStack_540 = plVar22;
                        plVar22 = plStack_540 + 1;
                      } while (plStack_540 + 1 != plStack_630 + (ulong)(iVar35 - 2) + 3);
                    }
                    local_548 = local_638;
                    if (bVar55) {
LAB_006fb4e1:
                      local_548._4_4_ = (undefined4)((ulong)local_638 >> 0x20);
                      local_548 = (char **)CONCAT44(local_548._4_4_,uVar32);
                      uVar34 = uVar32;
                    }
                  }
                  if (uVar34 < 0x30) {
                    local_548 = (char **)CONCAT44(local_548._4_4_,uVar34 + 8);
                    plVar22 = (long *)(uVar34 + local_538);
                  }
                  else {
                    plVar22 = plStack_540;
                    plStack_540 = plStack_540 + 1;
                  }
                  local_6c8 = (char **)*plVar22;
                }
                if (local_6c8 == (char **)0x0) goto switchD_006f555e_default;
              }
              else {
                if (local_694 == 0) {
                  if ((uint)local_5b0 < 0x30) {
                    uVar39 = local_5b0 & 0xffffffff;
                    local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                    plVar22 = (long *)(uVar39 + local_5a0);
                  }
                  else {
                    plVar22 = plStack_5a8;
                    plStack_5a8 = plStack_5a8 + 1;
                  }
                  plVar22 = (long *)*plVar22;
                }
                else {
                  local_638 = (char **)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = local_6d0[2];
                  local_548._0_4_ = (uint)local_638;
                  iVar53 = local_694 + -1;
                  uVar34 = (uint)local_548;
                  local_548 = local_638;
                  plStack_540 = plStack_630;
                  if (iVar53 != 0) {
                    uVar39 = (ulong)local_638 & 0xffffffff;
                    bVar55 = false;
LAB_006fb574:
                    uVar32 = (uint)uVar39;
                    if (uVar32 < 0x30) goto code_r0x006fb579;
                    plStack_540 = plStack_630 + 1;
                    if (iVar53 != 1) {
                      plVar22 = plStack_630 + 2;
                      do {
                        plStack_540 = plVar22;
                        plVar22 = plStack_540 + 1;
                      } while (plStack_540 + 1 != plStack_630 + (ulong)(iVar53 - 2) + 3);
                    }
                    local_548 = local_638;
                    if (bVar55) {
LAB_006fb5a2:
                      local_548._4_4_ = (undefined4)((ulong)local_638 >> 0x20);
                      local_548 = (char **)CONCAT44(local_548._4_4_,uVar32);
                      uVar34 = uVar32;
                    }
                  }
                  if (uVar34 < 0x30) {
                    local_548 = (char **)CONCAT44(local_548._4_4_,uVar34 + 8);
                    plVar22 = (long *)(uVar34 + local_538);
                  }
                  else {
                    plVar22 = plStack_540;
                    plStack_540 = plStack_540 + 1;
                  }
                  plVar22 = (long *)*plVar22;
                }
                local_678 = plVar22;
                if (plVar22 == (long *)0x0) goto switchD_006f555e_default;
                ppcVar24 = (char **)0x400;
                if (iVar35 < 0x401) {
                  ppcVar24 = (char **)(long)iVar35;
                }
                local_6a0 = ppcVar24;
                *(undefined8 *)(puVar42 + -8) = 0x6f66f5;
                local_6c8 = (char **)FUN_007101b0(ppcVar24);
                *plVar22 = (long)local_6c8;
                if (local_6c8 == (char **)0x0) {
                  uVar17 = 0xffffffff;
                  ppcVar24 = local_618;
                  if ((local_644 & 0x2000) == 0) {
                    uVar17 = local_648;
                  }
                  goto switchD_006f555e_default;
                }
                if (local_6d8 == (ulong *)0x0) {
LAB_006f9c68:
                  puVar43 = puVar42 + -0x120;
                  *(undefined8 *)(puVar42 + -8) = *(undefined8 *)(puVar42 + -8);
                  uVar39 = 1;
                  puVar28 = (ulong *)((ulong)(puVar42 + -0x111) & 0xfffffffffffffff0);
                  *puVar28 = 0;
                  puVar28[1] = (ulong)local_6d8;
                  uVar50 = 0;
                  local_6d8 = puVar28;
                }
                else {
                  uVar50 = *local_6d8;
                  uVar39 = uVar50 + 1;
                  puVar43 = puVar42;
                  if (uVar50 == 0x20) goto LAB_006f9c68;
                }
                *local_6d8 = uVar39;
                local_6d8[uVar50 + 2] = (ulong)local_678;
                puVar42 = puVar43;
              }
            }
            if (uVar18 != 0xffffffff) {
              pbVar52 = (byte *)param_1[1];
              if (pbVar52 < param_1[2]) {
                param_1[1] = (char *)(pbVar52 + 1);
                uVar39 = (ulong)*pbVar52;
              }
              else {
                *(undefined8 *)(puVar42 + -8) = 0x6f9438;
                uVar18 = FUN_007067b0(param_1);
                uVar39 = (ulong)uVar18;
                if (uVar18 == 0xffffffff) goto LAB_006f9447;
              }
              ppcVar54 = (char **)((long)ppcVar49 + 1);
              if (uVar38 != 0) {
                ppcVar48 = local_620;
                if (1 < (int)(uint)local_640) {
                  uVar18 = (uint)local_640 - 2;
                  do {
                    pbVar52 = (byte *)param_1[1];
                    if (pbVar52 < param_1[2]) {
                      param_1[1] = (char *)(pbVar52 + 1);
                      uVar39 = (ulong)*pbVar52;
                    }
                    else {
                      *(undefined8 *)(puVar42 + -8) = 0x6f8b70;
                      uVar17 = FUN_007067b0(param_1);
                      uVar39 = (ulong)uVar17;
                      if (uVar17 == 0xffffffff) {
                        local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
                        ppcVar48 = local_620;
                        break;
                      }
                    }
                    ppcVar54 = (char **)((long)ppcVar54 + 1);
                    ppcVar48 = local_620;
                  } while (ppcVar54 != (char **)((long)ppcVar49 + (ulong)uVar18 + 2));
                }
                goto LAB_006f510e;
              }
              if ((local_644 & 0x2100) != 0) {
                local_638 = (char **)(long)(int)(uint)local_640;
                local_618 = (char **)CONCAT44(local_618._4_4_,(uint)local_640 + -1);
                ppcVar49 = local_6c8;
                ppcVar24 = local_6a0;
                local_628 = ppcVar54;
                do {
                  ppcVar48 = ppcVar24;
                  if (ppcVar49 == (char **)(*local_678 + (long)ppcVar24)) {
                    local_640 = (char **)(long)(int)(uint)local_618;
                    if ((long)ppcVar24 < (long)((long)local_638 + (long)local_628) - (long)ppcVar54)
                    {
                      local_640 = ppcVar24;
                    }
                    local_640 = (char **)((long)local_640 + (long)ppcVar24);
                    *(undefined8 *)(puVar42 + -8) = 0x6f9594;
                    lVar37 = FUN_00710840();
                    if (lVar37 == 0) {
                      ppcVar48 = (char **)((long)ppcVar24 + 1);
                      lVar37 = *local_678;
                      *(undefined8 *)(puVar42 + -8) = 0x6fb89e;
                      lVar37 = FUN_00710840(lVar37,ppcVar48);
                      if (lVar37 == 0) {
                        local_648 = 0xffffffff;
                        uVar17 = local_648;
                        ppcVar24 = local_618;
                        goto switchD_006f555e_default;
                      }
                      *local_678 = lVar37;
                      ppcVar49 = (char **)(lVar37 + (long)ppcVar24);
                    }
                    else {
                      *local_678 = lVar37;
                      ppcVar49 = (char **)(lVar37 + (long)ppcVar24);
                      ppcVar48 = local_640;
                    }
                  }
                  *(byte *)ppcVar49 = (byte)uVar39;
                  ppcVar49 = (char **)((long)ppcVar49 + 1);
                  if ((int)(uint)local_618 < 1) goto LAB_006f952c;
                  pbVar52 = (byte *)param_1[1];
                  if (pbVar52 < param_1[2]) {
                    param_1[1] = (char *)(pbVar52 + 1);
                    uVar39 = (ulong)*pbVar52;
                  }
                  else {
                    *(undefined8 *)(puVar42 + -8) = 0x6f9506;
                    uVar18 = FUN_007067b0(param_1);
                    uVar39 = (ulong)uVar18;
                    if (uVar18 == 0xffffffff) goto code_r0x006f950e;
                  }
                  local_618 = (char **)CONCAT44(local_618._4_4_,(uint)local_618 + -1);
                  ppcVar54 = (char **)((long)ppcVar54 + 1);
                  ppcVar24 = ppcVar48;
                } while( true );
              }
              lVar37 = (long)ppcVar54 - (long)local_6c8;
              local_618 = (char **)CONCAT44(local_618._4_4_,(uint)local_640 + (int)local_6c8);
              ppcVar24 = local_6c8;
              do {
                while( true ) {
                  ppcVar54 = (char **)((long)ppcVar24 + lVar37);
                  ppcVar49 = (char **)((long)ppcVar24 + 1);
                  *(byte *)ppcVar24 = (byte)uVar39;
                  if ((int)((uint)local_618 - (int)ppcVar49) < 1) goto LAB_006f67ef;
                  pbVar52 = (byte *)param_1[1];
                  ppcVar24 = ppcVar49;
                  if (param_1[2] <= pbVar52) break;
                  param_1[1] = (char *)(pbVar52 + 1);
                  uVar39 = (ulong)*pbVar52;
                }
                *(undefined8 *)(puVar42 + -8) = 0x6f67d6;
                uVar18 = FUN_007067b0(param_1);
                uVar39 = (ulong)uVar18;
              } while (uVar18 != 0xffffffff);
              local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
              goto LAB_006f67ef;
            }
            *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006f9447:
            uVar17 = 0xffffffff;
            ppcVar24 = local_618;
            if (local_648 != 0) {
              uVar17 = local_648;
            }
            goto switchD_006f555e_default;
          case 100:
switchD_006f555e_caseD_64:
            local_618 = ppcVar24;
            local_644 = local_644 | 0x40;
            local_618 = (char **)CONCAT44(local_618._4_4_,10);
            break;
          case 0x69:
switchD_006f555e_caseD_69:
            local_618 = ppcVar24;
            local_644 = local_644 | 0x40;
            local_618 = (char **)((ulong)local_618 & 0xffffffff00000000);
            break;
          case 0x6e:
            ppcVar54 = local_628;
switchD_006f5835_caseD_2b:
            local_618 = (char **)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000008);
            if ((local_644 & 8) == 0) {
              ppcVar48 = local_620;
              if ((local_644 & 1) == 0) {
                if ((local_644 & 4) == 0) {
                  local_618 = (char **)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000200);
                  if ((local_644 & 0x200) == 0) {
                    if (local_694 == 0) {
                      if ((uint)local_5b0 < 0x30) {
                        uVar50 = local_5b0 & 0xffffffff;
                        local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                        plVar22 = (long *)(uVar50 + local_5a0);
                      }
                      else {
                        plVar22 = plStack_5a8;
                        plStack_5a8 = plStack_5a8 + 1;
                      }
                      puVar29 = (undefined4 *)*plVar22;
                    }
                    else {
                      local_638 = (char **)*local_6d0;
                      plStack_630 = (long *)local_6d0[1];
                      local_538 = local_6d0[2];
                      local_548._0_4_ = (uint)local_638;
                      iVar35 = local_694 + -1;
                      uVar18 = (uint)local_548;
                      ppcVar49 = local_638;
                      plStack_540 = plStack_630;
                      if (iVar35 != 0) {
                        bVar55 = false;
LAB_006fb04d:
                        if ((uint)local_548 < 0x30) goto code_r0x006fb052;
                        plStack_540 = plStack_630 + 1;
                        if (iVar35 != 1) {
                          plVar22 = plStack_630 + 2;
                          do {
                            plStack_540 = plVar22;
                            plVar22 = plStack_540 + 1;
                          } while (plStack_540 + 1 != plStack_630 + (ulong)(iVar35 - 2) + 3);
                        }
                        ppcVar49 = local_638;
                        if (bVar55) {
LAB_006fb081:
                          local_548._4_4_ = (undefined4)((ulong)local_638 >> 0x20);
                          uVar18 = (uint)local_548;
                          ppcVar49 = local_548;
                        }
                      }
                      local_548 = ppcVar49;
                      if (uVar18 < 0x30) {
                        local_548 = (char **)CONCAT44(local_548._4_4_,uVar18 + 8);
                        plVar22 = (long *)(uVar18 + local_538);
                      }
                      else {
                        plVar22 = plStack_540;
                        plStack_540 = plStack_540 + 1;
                      }
                      puVar29 = (undefined4 *)*plVar22;
                    }
                    *puVar29 = (int)ppcVar54;
                  }
                  else {
                    if (local_694 == 0) {
                      if ((uint)local_5b0 < 0x30) {
                        uVar50 = local_5b0 & 0xffffffff;
                        local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                        plVar22 = (long *)(uVar50 + local_5a0);
                      }
                      else {
                        plVar22 = plStack_5a8;
                        plStack_5a8 = plStack_5a8 + 1;
                      }
                      puVar43 = (undefined1 *)*plVar22;
                    }
                    else {
                      local_618 = (char **)*local_6d0;
                      plStack_610 = (long *)local_6d0[1];
                      local_538 = local_6d0[2];
                      local_548._0_4_ = (uint)local_618;
                      iVar35 = local_694 + -1;
                      uVar18 = (uint)local_548;
                      ppcVar49 = local_618;
                      plStack_540 = plStack_610;
                      if (iVar35 != 0) {
                        bVar55 = false;
LAB_006fc816:
                        if ((uint)local_548 < 0x30) goto code_r0x006fc81b;
                        plStack_540 = plStack_610 + 1;
                        if (iVar35 != 1) {
                          plVar22 = plStack_610 + 2;
                          do {
                            plStack_540 = plVar22;
                            plVar22 = plStack_540 + 1;
                          } while (plStack_540 + 1 != plStack_610 + (ulong)(iVar35 - 2) + 3);
                        }
                        ppcVar49 = local_618;
                        if (bVar55) {
LAB_006fc849:
                          local_548._4_4_ = (undefined4)((ulong)local_618 >> 0x20);
                          uVar18 = (uint)local_548;
                          ppcVar49 = local_548;
                        }
                      }
                      local_548 = ppcVar49;
                      if (uVar18 < 0x30) {
                        local_548 = (char **)CONCAT44(local_548._4_4_,uVar18 + 8);
                        plVar22 = (long *)(uVar18 + local_538);
                      }
                      else {
                        plVar22 = plStack_540;
                        plStack_540 = plStack_540 + 1;
                      }
                      puVar43 = (undefined1 *)*plVar22;
                    }
                    *puVar43 = (char)ppcVar54;
                    local_618 = (char **)((ulong)local_618 & 0xffffffff00000000);
                  }
                }
                else {
                  if (local_694 == 0) {
                    if ((uint)local_5b0 < 0x30) {
                      uVar50 = local_5b0 & 0xffffffff;
                      local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                      plVar22 = (long *)(uVar50 + local_5a0);
                    }
                    else {
                      plVar22 = plStack_5a8;
                      plStack_5a8 = plStack_5a8 + 1;
                    }
                    puVar26 = (undefined2 *)*plVar22;
                  }
                  else {
                    local_618 = (char **)*local_6d0;
                    plStack_610 = (long *)local_6d0[1];
                    local_538 = local_6d0[2];
                    local_548._0_4_ = (uint)local_618;
                    iVar35 = local_694 + -1;
                    uVar18 = (uint)local_548;
                    ppcVar49 = local_618;
                    plStack_540 = plStack_610;
                    if (iVar35 != 0) {
                      bVar55 = false;
LAB_006fb3c9:
                      if ((uint)local_548 < 0x30) goto code_r0x006fb3ce;
                      plStack_540 = plStack_610 + 1;
                      if (iVar35 != 1) {
                        plVar22 = plStack_610 + 2;
                        do {
                          plStack_540 = plVar22;
                          plVar22 = plStack_540 + 1;
                        } while (plStack_540 + 1 != plStack_610 + (ulong)(iVar35 - 2) + 3);
                      }
                      ppcVar49 = local_618;
                      if (bVar55) {
LAB_006fb3f7:
                        local_548._4_4_ = (undefined4)((ulong)local_618 >> 0x20);
                        uVar18 = (uint)local_548;
                        ppcVar49 = local_548;
                      }
                    }
                    local_548 = ppcVar49;
                    if (uVar18 < 0x30) {
                      local_548 = (char **)CONCAT44(local_548._4_4_,uVar18 + 8);
                      plVar22 = (long *)(uVar18 + local_538);
                    }
                    else {
                      plVar22 = plStack_540;
                      plStack_540 = plStack_540 + 1;
                    }
                    puVar26 = (undefined2 *)*plVar22;
                  }
                  *puVar26 = (short)ppcVar54;
                  local_618 = (char **)((ulong)local_618 & 0xffffffff00000000);
                }
              }
              else {
                if (local_694 == 0) {
                  if ((uint)local_5b0 < 0x30) {
                    uVar50 = local_5b0 & 0xffffffff;
                    local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                    plVar22 = (long *)(uVar50 + local_5a0);
                  }
                  else {
                    plVar22 = plStack_5a8;
                    plStack_5a8 = plStack_5a8 + 1;
                  }
                  puVar27 = (undefined8 *)*plVar22;
                }
                else {
                  local_638 = (char **)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = local_6d0[2];
                  local_548._0_4_ = (uint)local_638;
                  iVar35 = local_694 + -1;
                  uVar18 = (uint)local_548;
                  ppcVar49 = local_638;
                  plStack_540 = plStack_630;
                  if (iVar35 != 0) {
                    bVar55 = false;
LAB_006fa1cf:
                    if ((uint)local_548 < 0x30) goto code_r0x006fa1d4;
                    plStack_540 = plStack_630 + 1;
                    if (iVar35 != 1) {
                      plVar22 = plStack_630 + 2;
                      do {
                        plStack_540 = plVar22;
                        plVar22 = plStack_540 + 1;
                      } while (plStack_540 + 1 != plStack_630 + (ulong)(iVar35 - 2) + 3);
                    }
                    ppcVar49 = local_638;
                    if (!bVar55) goto LAB_006fa1ea;
LAB_006fa1e2:
                    local_548._4_4_ = (undefined4)((ulong)local_638 >> 0x20);
                    uVar18 = (uint)local_548;
                    ppcVar49 = local_548;
                  }
LAB_006fa1ea:
                  local_548 = ppcVar49;
                  if (uVar18 < 0x30) {
                    local_548 = (char **)CONCAT44(local_548._4_4_,uVar18 + 8);
                    plVar22 = (long *)(uVar18 + local_538);
                  }
                  else {
                    plVar22 = plStack_540;
                    plStack_540 = plStack_540 + 1;
                  }
                  puVar27 = (undefined8 *)*plVar22;
                }
                *puVar27 = ppcVar54;
              }
              goto LAB_006f510e;
            }
            goto LAB_006f6de8;
          case 0x6f:
            local_618 = (char **)CONCAT44(local_618._4_4_,8);
            goto LAB_006f62d6;
          case 0x70:
            local_618 = (char **)CONCAT44(local_618._4_4_,0x10);
            local_644 = local_644 & 0xfffffff9 | 0x1001;
            break;
          case 0x73:
            ppcVar48 = local_618;
            ppcVar54 = local_628;
LAB_006f7873:
            local_618 = (char **)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000001);
            ppcVar49 = ppcVar54;
            if ((local_644 & 1) == 0) {
              uVar38 = local_644 & 8;
              if (uVar38 == 0) {
                uVar17 = local_648;
                ppcVar24 = local_618;
                if ((local_644 & 0x2100) == 0) {
                  if (local_694 == 0) {
                    if ((uint)local_5b0 < 0x30) {
                      uVar39 = local_5b0 & 0xffffffff;
                      local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                      plVar22 = (long *)(uVar39 + local_5a0);
                    }
                    else {
                      plVar22 = plStack_5a8;
                      plStack_5a8 = plStack_5a8 + 1;
                    }
                    local_6c8 = (char **)*plVar22;
                  }
                  else {
                    local_638 = (char **)*local_6d0;
                    plStack_630 = (long *)local_6d0[1];
                    local_538 = local_6d0[2];
                    local_548._0_4_ = (uint)local_638;
                    iVar35 = local_694 + -1;
                    uVar34 = (uint)local_548;
                    ppcVar49 = local_638;
                    plStack_540 = plStack_630;
                    if (iVar35 != 0) {
                      bVar55 = false;
LAB_006fb2eb:
                      if ((uint)local_548 < 0x30) goto code_r0x006fb2f0;
                      plStack_540 = plStack_630 + 1;
                      if (iVar35 != 1) {
                        plVar22 = plStack_630 + 2;
                        do {
                          plStack_540 = plVar22;
                          plVar22 = plStack_540 + 1;
                        } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                      }
                      ppcVar49 = local_638;
                      if (bVar55) {
LAB_006fb319:
                        local_548._4_4_ = (undefined4)((ulong)local_638 >> 0x20);
                        uVar34 = (uint)local_548;
                        ppcVar49 = local_548;
                      }
                    }
                    local_548 = ppcVar49;
                    if (uVar34 < 0x30) {
                      local_548 = (char **)CONCAT44(local_548._4_4_,uVar34 + 8);
                      plVar22 = (long *)(uVar34 + local_538);
                    }
                    else {
                      plVar22 = plStack_540;
                      plStack_540 = plStack_540 + 1;
                    }
                    local_6c8 = (char **)*plVar22;
                  }
                  if (local_6c8 == (char **)0x0) goto switchD_006f555e_default;
                }
                else {
                  if (local_694 == 0) {
                    if ((uint)local_5b0 < 0x30) {
                      uVar39 = local_5b0 & 0xffffffff;
                      local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                      plVar22 = (long *)(uVar39 + local_5a0);
                    }
                    else {
                      plVar22 = plStack_5a8;
                      plStack_5a8 = plStack_5a8 + 1;
                    }
                    plVar22 = (long *)*plVar22;
                  }
                  else {
                    local_548 = (char **)*local_6d0;
                    plStack_630 = (long *)local_6d0[1];
                    local_538 = local_6d0[2];
                    iVar35 = local_694 + -1;
                    uVar34 = (uint)local_548;
                    plStack_540 = plStack_630;
                    if (iVar35 != 0) {
                      bVar55 = false;
                      uVar32 = (uint)local_548;
LAB_006fa618:
                      if (uVar32 < 0x30) goto code_r0x006fa61d;
                      plStack_540 = plStack_630 + 1;
                      if (iVar35 != 1) {
                        plVar22 = plStack_630 + 2;
                        do {
                          plStack_540 = plVar22;
                          plVar22 = plStack_540 + 1;
                        } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                      }
                      if (!bVar55) goto LAB_006fa633;
LAB_006fa62b:
                      local_548._4_4_ = (undefined4)((ulong)local_548 >> 0x20);
                      local_548 = (char **)CONCAT44(local_548._4_4_,uVar32);
                      uVar34 = uVar32;
                    }
LAB_006fa633:
                    if (uVar34 < 0x30) {
                      local_548 = (char **)CONCAT44(local_548._4_4_,uVar34 + 8);
                      plVar22 = (long *)(uVar34 + local_538);
                    }
                    else {
                      plVar22 = plStack_540;
                      plStack_540 = plStack_540 + 1;
                    }
                    plVar22 = (long *)*plVar22;
                  }
                  local_678 = plVar22;
                  local_638 = ppcVar48;
                  if (plVar22 == (long *)0x0) goto switchD_006f555e_default;
                  *(undefined8 *)(puVar42 + -8) = 0x6f78f6;
                  local_6c8 = (char **)FUN_007101b0(100);
                  ppcVar48 = local_638;
                  *plVar22 = (long)local_6c8;
                  if (local_6c8 == (char **)0x0) {
                    uVar17 = 0xffffffff;
                    ppcVar24 = local_618;
                    if ((local_644 & 0x2000) == 0) {
                      uVar17 = local_648;
                    }
                    goto switchD_006f555e_default;
                  }
                  if (local_6d8 == (ulong *)0x0) {
LAB_006f983e:
                    puVar43 = puVar42 + -0x120;
                    *(undefined8 *)(puVar42 + -8) = *(undefined8 *)(puVar42 + -8);
                    uVar39 = 1;
                    puVar28 = (ulong *)((ulong)(puVar42 + -0x111) & 0xfffffffffffffff0);
                    *puVar28 = 0;
                    puVar28[1] = (ulong)local_6d8;
                    uVar50 = 0;
                    local_6d8 = puVar28;
                  }
                  else {
                    uVar50 = *local_6d8;
                    uVar39 = uVar50 + 1;
                    puVar43 = puVar42;
                    if (uVar50 == 0x20) goto LAB_006f983e;
                  }
                  local_6a0 = (char **)0x64;
                  *local_6d8 = uVar39;
                  local_6d8[uVar50 + 2] = (ulong)local_678;
                  puVar42 = puVar43;
                }
              }
              if (uVar18 != 0xffffffff) {
                pbVar52 = (byte *)param_1[1];
                if (pbVar52 < param_1[2]) {
                  param_1[1] = (char *)(pbVar52 + 1);
                  uVar39 = (ulong)*pbVar52;
                }
                else {
                  local_638 = ppcVar48;
                  *(undefined8 *)(puVar42 + -8) = 0x6f9b72;
                  uVar18 = FUN_007067b0(param_1);
                  uVar39 = (ulong)uVar18;
                  ppcVar48 = local_638;
                  if (uVar18 == 0xffffffff) goto LAB_006f9b88;
                }
                plVar22 = local_660;
                ppcVar49 = local_6c8;
                if ((*(byte *)(local_660[0xd] + 1 + (long)(int)uVar39 * 2) & 0x20) == 0) {
                  local_628 = (char **)(CONCAT44(local_628._4_4_,local_644) & 0xffffffff00002100);
                  iVar35 = (uint)local_640;
                  local_650 = ppcVar48;
                  do {
                    ppcVar54 = (char **)((long)ppcVar54 + 1);
                    if (uVar38 == 0) {
                      *(byte *)ppcVar49 = (byte)uVar39;
                      ppcVar49 = (char **)((long)ppcVar49 + 1);
                      if (((int)local_628 != 0) &&
                         (local_638 = local_6a0, ppcVar49 == (char **)((long)local_6a0 + *local_678)
                         )) {
                        local_658 = (char **)((ulong)local_658 & 0xffffffff00000000);
                        local_640 = (char **)((long)local_6a0 * 2);
                        local_668 = param_1;
                        *(undefined8 *)(puVar42 + -8) = 0x6f8be6;
                        lVar37 = FUN_00710840();
                        uVar18 = (uint)local_658;
                        if (lVar37 == 0) {
                          ppcVar49 = (char **)((long)local_6a0 + 1);
                          local_658 = local_668;
                          lVar37 = *local_678;
                          local_640 = (char **)CONCAT44(local_640._4_4_,uVar18);
                          local_6a0 = ppcVar49;
                          *(undefined8 *)(puVar42 + -8) = 0x6fb166;
                          lVar37 = FUN_00710840(lVar37,ppcVar49);
                          plVar4 = local_678;
                          param_1 = local_658;
                          if (lVar37 == 0) {
                            ppcVar24 = local_618;
                            if ((local_644 & 0x2000) == 0) {
                              local_678 = (long *)0x0;
                              *(byte *)(*plVar4 + -1 + (long)local_638) = 0;
                              uVar17 = local_648 + 1;
                            }
                            else {
                              local_648 = 0xffffffff;
                              uVar17 = local_648;
                            }
                            goto switchD_006f555e_default;
                          }
                          *local_678 = lVar37;
                          ppcVar49 = (char **)(lVar37 + (long)local_638);
                          uVar38 = (uint)local_640;
                        }
                        else {
                          *local_678 = lVar37;
                          ppcVar49 = (char **)(lVar37 + (long)local_6a0);
                          param_1 = local_668;
                          local_6a0 = local_640;
                          uVar38 = (uint)local_658;
                        }
                      }
                    }
                    if ((0 < iVar35) && (iVar35 = iVar35 + -1, iVar35 == 0)) goto LAB_006f7aa5;
                    pbVar52 = (byte *)param_1[1];
                    if (pbVar52 < param_1[2]) {
                      param_1[1] = (char *)(pbVar52 + 1);
                      uVar39 = (ulong)*pbVar52;
                    }
                    else {
                      local_640 = (char **)CONCAT44(local_640._4_4_,uVar38);
                      local_638 = param_1;
                      *(undefined8 *)(puVar42 + -8) = 0x6f7a6b;
                      uVar18 = FUN_007067b0(param_1);
                      uVar39 = (ulong)uVar18;
                      param_1 = local_638;
                      uVar38 = (uint)local_640;
                      if (uVar18 == 0xffffffff) {
                        uVar39 = 0xffffffff;
                        local_608 = CONCAT44(local_608._4_4_,
                                             *(undefined4 *)(in_FS_OFFSET + (long)local_650));
                        goto LAB_006f7aa5;
                      }
                    }
                  } while ((*(byte *)(plVar22[0xd] + 1 + (long)(int)uVar39 * 2) & 0x20) == 0);
                }
                local_6c8 = ppcVar49;
                *(undefined8 *)(puVar42 + -8) = 0x6f981c;
                FUN_007075f0(param_1,uVar39 & 0xff);
                ppcVar49 = local_6c8;
LAB_006f7aa5:
                local_6c8 = ppcVar49;
                plVar22 = local_678;
                ppcVar48 = local_620;
                if (uVar38 == 0) {
                  *(byte *)local_6c8 = 0;
                  ppcVar49 = (char **)((long)local_6c8 + 1);
                  if (((local_644 & 0x2100) != 0) &&
                     ((char **)((long)ppcVar49 - *local_678) != local_6a0)) {
                    *(undefined8 *)(puVar42 + -8) = 0x6f7ae6;
                    lVar37 = FUN_00710840();
                    if (lVar37 != 0) {
                      *plVar22 = lVar37;
                    }
                  }
                  local_648 = local_648 + 1;
                  local_618 = (char **)((ulong)local_618 & 0xffffffff00000000);
                  local_678 = (long *)0x0;
                  local_6c8 = ppcVar49;
                  ppcVar48 = local_620;
                }
                goto LAB_006f510e;
              }
              *(int *)(in_FS_OFFSET + (long)ppcVar48) = (int)local_608;
LAB_006f9b88:
              uVar17 = 0xffffffff;
              ppcVar24 = local_618;
              if (local_648 != 0) {
                uVar17 = local_648;
              }
            }
            else {
switchD_006f5e94_caseD_53:
              local_618 = (char **)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000008);
              if ((local_644 & 8) == 0) {
                uVar17 = local_648;
                ppcVar24 = local_618;
                if ((local_644 & 0x2100) == 0) {
                  if (local_694 == 0) {
                    if ((uint)local_5b0 < 0x30) {
                      uVar39 = local_5b0 & 0xffffffff;
                      local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                      plVar22 = (long *)(uVar39 + local_5a0);
                    }
                    else {
                      plVar22 = plStack_5a8;
                      plStack_5a8 = plStack_5a8 + 1;
                    }
                    local_6c0 = (char **)*plVar22;
                  }
                  else {
                    local_638 = (char **)*local_6d0;
                    plStack_630 = (long *)local_6d0[1];
                    local_538 = local_6d0[2];
                    local_548._0_4_ = (uint)local_638;
                    iVar35 = local_694 + -1;
                    uVar38 = (uint)local_548;
                    local_548 = local_638;
                    plStack_540 = plStack_630;
                    if (iVar35 != 0) {
                      uVar39 = (ulong)local_638 & 0xffffffff;
                      bVar55 = false;
LAB_006faa93:
                      uVar34 = (uint)uVar39;
                      if (uVar34 < 0x30) goto code_r0x006faa98;
                      plStack_540 = plStack_630 + 1;
                      if (iVar35 != 1) {
                        plVar22 = plStack_630 + 2;
                        do {
                          plStack_540 = plVar22;
                          plVar22 = plStack_540 + 1;
                        } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                      }
                      local_548 = local_638;
                      if (!bVar55) goto LAB_006faaae;
LAB_006faaa6:
                      local_548._4_4_ = (undefined4)((ulong)local_638 >> 0x20);
                      local_548 = (char **)CONCAT44(local_548._4_4_,uVar34);
                      uVar38 = uVar34;
                    }
LAB_006faaae:
                    if (uVar38 < 0x30) {
                      local_548 = (char **)CONCAT44(local_548._4_4_,uVar38 + 8);
                      plVar22 = (long *)(uVar38 + local_538);
                    }
                    else {
                      plVar22 = plStack_540;
                      plStack_540 = plStack_540 + 1;
                    }
                    local_6c0 = (char **)*plVar22;
                  }
                  if (local_6c0 == (char **)0x0) goto switchD_006f555e_default;
                }
                else {
                  if (local_694 == 0) {
                    if ((uint)local_5b0 < 0x30) {
                      uVar39 = local_5b0 & 0xffffffff;
                      local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                      plVar22 = (long *)(uVar39 + local_5a0);
                    }
                    else {
                      plVar22 = plStack_5a8;
                      plStack_5a8 = plStack_5a8 + 1;
                    }
                    plVar22 = (long *)*plVar22;
                  }
                  else {
                    local_638 = (char **)*local_6d0;
                    plStack_630 = (long *)local_6d0[1];
                    local_538 = local_6d0[2];
                    local_548._0_4_ = (uint)local_638;
                    iVar35 = local_694 + -1;
                    uVar38 = (uint)local_548;
                    local_548 = local_638;
                    plStack_540 = plStack_630;
                    if (iVar35 != 0) {
                      uVar39 = (ulong)local_638 & 0xffffffff;
                      bVar55 = false;
LAB_006f8c7a:
                      uVar34 = (uint)uVar39;
                      if (uVar34 < 0x30) goto code_r0x006f8c7f;
                      plStack_540 = plStack_630 + 1;
                      if (iVar35 != 1) {
                        plVar22 = plStack_630 + 2;
                        do {
                          plStack_540 = plVar22;
                          plVar22 = plStack_540 + 1;
                        } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                      }
                      local_548 = local_638;
                      if (!bVar55) goto LAB_006f8c95;
LAB_006f8c8d:
                      local_548._4_4_ = (undefined4)((ulong)local_638 >> 0x20);
                      local_548 = (char **)CONCAT44(local_548._4_4_,uVar34);
                      uVar38 = uVar34;
                    }
LAB_006f8c95:
                    if (uVar38 < 0x30) {
                      local_548 = (char **)CONCAT44(local_548._4_4_,uVar38 + 8);
                      plVar22 = (long *)(uVar38 + local_538);
                    }
                    else {
                      plVar22 = plStack_540;
                      plStack_540 = plStack_540 + 1;
                    }
                    plVar22 = (long *)*plVar22;
                  }
                  local_678 = plVar22;
                  if (plVar22 == (long *)0x0) goto switchD_006f555e_default;
                  *(undefined8 *)(puVar42 + -8) = 0x6f5987;
                  local_6c0 = (char **)FUN_007101b0(400);
                  *plVar22 = (long)local_6c0;
                  if (local_6c0 == (char **)0x0) {
                    uVar17 = 0xffffffff;
                    ppcVar24 = local_618;
                    if ((local_644 & 0x2000) == 0) {
                      uVar17 = local_648;
                    }
                    goto switchD_006f555e_default;
                  }
                  if (local_6d8 == (ulong *)0x0) {
LAB_006f8093:
                    puVar43 = puVar42 + -0x120;
                    *(undefined8 *)(puVar42 + -8) = *(undefined8 *)(puVar42 + -8);
                    uVar39 = 1;
                    puVar28 = (ulong *)((ulong)(puVar42 + -0x111) & 0xfffffffffffffff0);
                    *puVar28 = 0;
                    puVar28[1] = (ulong)local_6d8;
                    uVar50 = 0;
                    local_6d8 = puVar28;
                  }
                  else {
                    uVar50 = *local_6d8;
                    uVar39 = uVar50 + 1;
                    puVar43 = puVar42;
                    if (uVar50 == 0x20) goto LAB_006f8093;
                  }
                  local_6a0 = (char **)0x64;
                  *local_6d8 = uVar39;
                  local_6d8[uVar50 + 2] = (ulong)local_678;
                  puVar42 = puVar43;
                }
              }
              if (uVar18 != 0xffffffff) {
                pbVar52 = (byte *)param_1[1];
                if (pbVar52 < param_1[2]) {
                  param_1[1] = (char *)(pbVar52 + 1);
                  uVar39 = (ulong)*pbVar52;
                }
                else {
                  *(undefined8 *)(puVar42 + -8) = 0x6f85c8;
                  uVar18 = FUN_007067b0(param_1);
                  uVar39 = (ulong)uVar18;
                  if (uVar18 == 0xffffffff) goto LAB_006f6272;
                }
                local_638 = (char **)&local_548;
                ppcVar54 = (char **)((long)ppcVar49 + 1);
                local_548 = (char **)0x0;
                if ((*(byte *)(local_660[0xd] + 1 + (long)(int)uVar39 * 2) & 0x20) == 0) {
                  local_628 = (char **)(CONCAT44(local_628._4_4_,local_644) & 0xffffffff00002100);
                  do {
                    ppcVar49 = (char **)0x0;
                    if ((uint)local_618 == 0) {
                      ppcVar49 = local_6c0;
                    }
                    while( true ) {
                      local_58[0] = (undefined1)uVar39;
                      *(undefined8 *)(puVar42 + -8) = 0x6f5a8f;
                      lVar37 = FUN_007569f0(ppcVar49,local_58,1);
                      if (lVar37 != -2) break;
                      pbVar52 = (byte *)param_1[1];
                      if (pbVar52 < param_1[2]) {
                        param_1[1] = (char *)(pbVar52 + 1);
                        uVar39 = (ulong)*pbVar52;
                      }
                      else {
                        *(undefined8 *)(puVar42 + -8) = 0x6f5aab;
                        uVar18 = FUN_007067b0(param_1);
                        uVar39 = (ulong)uVar18;
                        if (uVar18 == 0xffffffff) {
                          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
                          uVar17 = local_648;
                          ppcVar24 = local_618;
                          goto switchD_006f555e_default;
                        }
                      }
                      ppcVar54 = (char **)((long)ppcVar54 + 1);
                    }
                    if (lVar37 != 1) {
                      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
                      uVar17 = local_648;
                      ppcVar24 = local_618;
                      goto switchD_006f555e_default;
                    }
                    local_6c0 = (char **)((long)local_6c0 + 4);
                    if (((uint)local_618 == 0) && ((int)local_628 != 0)) {
                      lVar31 = *local_678;
                      lVar37 = (long)local_6a0 * 4;
                      if (local_6c0 == (char **)(lVar31 + lVar37)) {
                        lVar2 = (long)local_6a0 * 8;
                        *(undefined8 *)(puVar42 + -8) = 0x6fbb6b;
                        lVar31 = FUN_00710840(lVar31,lVar2);
                        if (lVar31 == 0) {
                          local_6a0 = (char **)((long)local_6a0 + 1);
                          lVar31 = *local_678;
                          *(undefined8 *)(puVar42 + -8) = 0x6fbc01;
                          lVar31 = FUN_00710840(lVar31,lVar37 + 4);
                          plVar22 = local_678;
                          if (lVar31 == 0) {
                            ppcVar24 = local_618;
                            if ((local_644 & 0x2000) == 0) {
                              local_678 = (long *)0x0;
                              *(undefined4 *)(*plVar22 + -4 + lVar37) = 0;
                              uVar17 = local_648 + 1;
                            }
                            else {
                              local_648 = 0xffffffff;
                              uVar17 = local_648;
                            }
                            goto switchD_006f555e_default;
                          }
                          *local_678 = lVar31;
                          local_6c0 = (char **)(lVar31 + lVar37);
                        }
                        else {
                          *local_678 = lVar31;
                          local_6c0 = (char **)(lVar31 + lVar37);
                          local_6a0 = (char **)((long)local_6a0 * 2);
                        }
                      }
                    }
                    if (0 < (int)(uint)local_640) {
                      iVar35 = (uint)local_640 + -1;
                      local_640 = (char **)CONCAT44(local_640._4_4_,iVar35);
                      if (iVar35 == 0) goto LAB_006f7d2d;
                    }
                    pbVar52 = (byte *)param_1[1];
                    if (pbVar52 < param_1[2]) {
                      param_1[1] = (char *)(pbVar52 + 1);
                      uVar39 = (ulong)*pbVar52;
                    }
                    else {
                      *(undefined8 *)(puVar42 + -8) = 0x6f9322;
                      uVar18 = FUN_007067b0(param_1);
                      uVar39 = (ulong)uVar18;
                      if (uVar18 == 0xffffffff) {
                        local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
                        goto LAB_006f7d2d;
                      }
                    }
                    ppcVar54 = (char **)((long)ppcVar54 + 1);
                  } while ((*(byte *)(local_660[0xd] + 1 + (long)(int)uVar39 * 2) & 0x20) == 0);
                }
                ppcVar54 = (char **)((long)ppcVar54 + -1);
                *(undefined8 *)(puVar42 + -8) = 0x6f7d2d;
                FUN_007075f0(param_1,uVar39 & 0xff);
LAB_006f7d2d:
                if ((uint)local_618 != 0) goto LAB_006f6de8;
                goto LAB_006f7d3d;
              }
              *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006f6272:
              uVar17 = 0xffffffff;
              ppcVar24 = local_618;
              if (local_648 != 0) {
                uVar17 = local_648;
              }
            }
            goto switchD_006f555e_default;
          case 0x75:
            local_618 = (char **)CONCAT44(local_618._4_4_,10);
            goto LAB_006f62d6;
          default:
            goto switchD_006f555e_default;
          }
          if (uVar18 != 0xffffffff) {
LAB_006f62d6:
            pbVar52 = (byte *)param_1[1];
            if (pbVar52 < param_1[2]) {
              param_1[1] = (char *)(pbVar52 + 1);
              uVar50 = (ulong)*pbVar52;
            }
            else {
              *(undefined8 *)(puVar42 + -8) = 0x6f7721;
              uVar18 = FUN_007067b0(param_1);
              uVar50 = (ulong)uVar18;
              if (uVar18 == 0xffffffff) goto LAB_006f6244;
            }
            ppcVar54 = (char **)((long)local_628 + 1);
            if (((int)uVar50 - 0x2bU & 0xfffffffd) == 0) {
              uVar20 = local_478._0_8_;
              if (local_478._8_8_ == local_478._0_8_) {
                if ((char *)local_478._8_8_ != (char *)0x0) {
                  lVar37 = local_478._8_8_ - (long)local_468;
                  *(undefined8 *)(puVar42 + -8) = 0x6f87a6;
                  cVar14 = FUN_00712520(&local_468);
                  if (cVar14 == '\0') {
                    local_478 = (undefined1  [16])0x0;
                  }
                  else {
                    local_478._8_8_ = local_468 + local_460;
                    local_478._0_8_ = local_468 + lVar37 + 1;
                    local_468[lVar37] = (char)uVar50;
                  }
                }
              }
              else {
                local_478._0_8_ = (char *)(local_478._0_8_ + 1);
                *(char *)uVar20 = (char)uVar50;
              }
              pbVar52 = (byte *)param_1[1];
              local_640 = (char **)CONCAT44(local_640._4_4_,
                                            (uint)local_640 - (0 < (int)(uint)local_640));
              if (pbVar52 < param_1[2]) {
                param_1[1] = (char *)(pbVar52 + 1);
                uVar50 = (ulong)*pbVar52;
LAB_006f6358:
                ppcVar54 = (char **)((long)local_628 + 2);
                goto LAB_006f6363;
              }
              *(undefined8 *)(puVar42 + -8) = 0x6f6dff;
              uVar39 = FUN_007067b0(param_1);
              uVar50 = uVar39 & 0xffffffff;
              if ((int)uVar39 != -1) goto LAB_006f6358;
              bVar55 = false;
              local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
LAB_006f6e1e:
              if ((uint)local_618 != 0) {
LAB_006f765a:
                if ((uint)local_618 == 10) goto LAB_006f6e2c;
LAB_006f641c:
                uVar18 = (uint)uVar50;
                if (bVar55 == false) {
LAB_006f813c:
                  pcVar33 = (char *)local_478._0_8_;
                }
                else {
LAB_006f6424:
                  uVar50 = (ulong)uVar18;
                  local_658 = (char **)(CONCAT44(local_658._4_4_,local_644) & 0xffffffff00000080);
                  local_650 = &local_468;
                  iVar35 = (uint)local_640;
                  do {
                    uVar18 = (uint)uVar50;
                    if ((uint)local_618 != 0x10) {
                      if ((uVar18 - 0x30 < 10) && ((int)(uVar18 - 0x2f) <= (int)(uint)local_618))
                      goto LAB_006f647d;
                      if ((uint)local_618 != 10) {
                        local_640 = (char **)CONCAT44(local_640._4_4_,iVar35);
                        local_618 = (char **)CONCAT44(local_618._4_4_,8);
                        pcVar33 = (char *)local_478._0_8_;
                        goto LAB_006f651d;
                      }
                      if ((uint)local_658 != 0) {
                        iVar53 = 0x7fffffff;
                        if (0 < iVar35) {
                          iVar53 = iVar35;
                        }
                        pbVar52 = local_688;
                        if (uVar18 == *local_688) {
                          local_638 = (char **)CONCAT44(local_638._4_4_,iVar35);
                          uVar39 = uVar50;
                          do {
                            ppcVar49 = local_650;
                            uVar18 = (uint)uVar39;
                            uVar20 = local_478._0_8_;
                            bVar13 = (byte)uVar39;
                            if (local_478._0_8_ == local_478._8_8_) {
                              local_628 = (char **)CONCAT71(local_628._1_7_,bVar13);
                              if ((byte *)local_478._0_8_ != (byte *)0x0) {
                                local_640 = (char **)(local_478._0_8_ + -(long)local_468);
                                *(undefined8 *)(puVar42 + -8) = 0x6f6be3;
                                cVar14 = FUN_00712520(ppcVar49);
                                uVar50 = (ulong)local_628 & 0xff;
                                if (cVar14 == '\0') {
                                  local_478 = (undefined1  [16])0x0;
                                  goto LAB_006f6b5e;
                                }
                                local_478._8_8_ = local_468 + local_460;
                                local_478._0_8_ = (byte *)((long)local_640 + (long)local_468) + 1;
                                *(byte *)((long)local_640 + (long)local_468) = bVar13;
                                if (pbVar52[1] != 0) goto LAB_006f6b6d;
                                goto LAB_006f6c36;
                              }
                              if (pbVar52[1] == 0) goto LAB_006f6c55;
                            }
                            else {
                              local_478._0_8_ = (byte *)(local_478._0_8_ + 1);
                              *(byte *)uVar20 = bVar13;
                              uVar50 = uVar39;
LAB_006f6b5e:
                              if (pbVar52[1] == 0) {
LAB_006f6c36:
                                pcVar33 = (char *)local_478._0_8_;
                                iVar35 = (int)local_638;
                                if ((char *)local_478._0_8_ == (char *)0x0) goto LAB_006f6c55;
                                goto LAB_006f6cc7;
                              }
                            }
LAB_006f6b6d:
                            pbVar52 = pbVar52 + 1;
                            if (iVar53 == 0) {
                              local_640 = (char **)CONCAT44(local_640._4_4_,(int)local_638);
                              if ((char *)local_478._0_8_ == (char *)0x0) goto LAB_006f6c55;
                              pcVar33 = (char *)local_478._0_8_;
                              if (pbVar52 <= local_688) goto LAB_006f6526;
                              local_478._0_8_ = local_478._0_8_ - ((long)pbVar52 - (long)local_688);
                              uVar50 = uVar39;
                              goto LAB_006f8639;
                            }
                            pbVar51 = (byte *)param_1[1];
                            if (pbVar51 < param_1[2]) {
                              param_1[1] = (char *)(pbVar51 + 1);
                              uVar50 = (ulong)*pbVar51;
                            }
                            else {
                              *(undefined8 *)(puVar42 + -8) = 0x6f6c80;
                              uVar18 = FUN_007067b0(param_1);
                              uVar50 = (ulong)uVar18;
                              if (uVar18 == 0xffffffff) {
                                local_608 = CONCAT44(local_608._4_4_,
                                                     *(undefined4 *)(in_FS_OFFSET + -0x58));
                                iVar35 = (int)local_638;
                                goto LAB_006f6caf;
                              }
                            }
                            ppcVar54 = (char **)((long)ppcVar54 + 1);
                            iVar53 = iVar53 + -1;
                            uVar39 = uVar50;
                          } while ((uint)*pbVar52 == (uint)uVar50);
                          iVar35 = (int)local_638;
                        }
LAB_006f6caf:
                        uVar18 = (uint)uVar50;
                        if ((char *)local_478._0_8_ != (char *)0x0) {
                          pcVar33 = (char *)local_478._0_8_;
                          if (*pbVar52 == 0) {
LAB_006f6cc7:
                            uVar46 = (undefined1)uVar50;
                            pcVar25 = pcVar33 + -1;
                            local_478._0_8_ = pcVar25;
                            if (0 < iVar35) {
                              iVar35 = iVar53;
                            }
                            pcVar40 = (char *)local_478._8_8_;
                            if (pcVar25 == (char *)local_478._8_8_) goto LAB_006f6ce9;
                            goto LAB_006f649b;
                          }
                          local_640 = (char **)CONCAT44(local_640._4_4_,iVar35);
                          uVar39 = uVar50;
                          if (local_688 < pbVar52) {
                            local_478._0_8_ = local_478._0_8_ - ((long)pbVar52 - (long)local_688);
                            if (uVar18 != 0xffffffff) {
LAB_006f8639:
                              ppcVar54 = (char **)((long)ppcVar54 + -1);
                              *(undefined8 *)(puVar42 + -8) = 0x6f8649;
                              FUN_007075f0(param_1,uVar50 & 0xff);
                            }
                            pbVar51 = pbVar52 + -1;
                            pbVar41 = pbVar51;
                            if (local_688 < pbVar51) {
                              do {
                                bVar13 = *pbVar41;
                                pbVar41 = pbVar41 + -1;
                                *(undefined8 *)(puVar42 + -8) = 0x6f8669;
                                FUN_007075f0(param_1,bVar13);
                              } while (local_688 != pbVar41);
                              ppcVar54 = (char **)((long)ppcVar54 +
                                                  (long)(local_688 + (1 - (long)pbVar52)));
                              pbVar51 = pbVar51 + (long)(local_688 + (1 - (long)pbVar52));
                            }
                            uVar50 = (ulong)*pbVar51;
                            pcVar33 = (char *)local_478._0_8_;
                            goto LAB_006f651d;
                          }
                          goto LAB_006f6526;
                        }
LAB_006f6c55:
                        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
                        local_648 = 0xffffffff;
                        uVar17 = local_648;
                        ppcVar24 = local_618;
                        goto switchD_006f555e_default;
                      }
                      break;
                    }
                    if ((*(byte *)(local_660[0xd] + 1 + (long)(int)uVar18 * 2) & 0x10) == 0) break;
LAB_006f647d:
                    uVar46 = (undefined1)uVar50;
                    if (local_478._0_8_ == local_478._8_8_) {
                      pcVar40 = (char *)local_478._8_8_;
                      if ((char *)local_478._8_8_ != (char *)0x0) {
LAB_006f6ce9:
                        ppcVar49 = local_650;
                        local_638 = (char **)CONCAT71(local_638._1_7_,uVar46);
                        lVar37 = (long)pcVar40 - (long)local_468;
                        *(undefined8 *)(puVar42 + -8) = 0x6f6d03;
                        cVar14 = FUN_00712520(ppcVar49);
                        if (cVar14 == '\0') {
                          local_478 = (undefined1  [16])0x0;
                        }
                        else {
                          local_478._8_8_ = local_468 + local_460;
                          local_478._0_8_ = local_468 + lVar37 + 1;
                          local_468[lVar37] = (byte)local_638;
                        }
                      }
                    }
                    else {
                      pcVar33 = (char *)(local_478._0_8_ + 1);
                      pcVar25 = (char *)local_478._0_8_;
LAB_006f649b:
                      local_478._0_8_ = pcVar33;
                      *pcVar25 = (char)uVar50;
                    }
                    iVar35 = iVar35 - (uint)(0 < iVar35);
                    if (uVar18 == 0xffffffff) {
                      *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006f6ae6:
                      local_640 = (char **)CONCAT44(local_640._4_4_,iVar35);
                      uVar50 = 0xffffffff;
                      pcVar33 = (char *)local_478._0_8_;
                      goto LAB_006f651d;
                    }
                    pbVar52 = (byte *)param_1[1];
                    if (pbVar52 < param_1[2]) {
                      param_1[1] = (char *)(pbVar52 + 1);
                      uVar50 = (ulong)*pbVar52;
                    }
                    else {
                      *(undefined8 *)(puVar42 + -8) = 0x6f6d4d;
                      uVar18 = FUN_007067b0(param_1);
                      uVar50 = (ulong)uVar18;
                      if (uVar18 == 0xffffffff) {
                        local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
                        goto LAB_006f6ae6;
                      }
                    }
                    ppcVar54 = (char **)((long)ppcVar54 + 1);
                  } while (iVar35 != 0);
                  local_640 = (char **)CONCAT44(local_640._4_4_,iVar35);
                  pcVar33 = (char *)local_478._0_8_;
                }
                goto LAB_006f651d;
              }
LAB_006f6e2c:
              local_618 = (char **)CONCAT44(local_618._4_4_,10);
              if ((local_644 & 0x400) == 0) goto LAB_006f641c;
              local_638 = (char **)CONCAT71(local_638._1_7_,bVar55);
              *(undefined8 *)(puVar42 + -8) = 0x6f6e58;
              local_6a8 = (char **)FUN_007712d0("to_inpunct");
              cVar14 = (byte)local_638;
              iVar35 = *(int *)(local_680 + 0xd8);
              local_618 = (char **)CONCAT44(local_618._4_4_,iVar35);
              local_6f0 = (byte *)CONCAT44(local_6f0._4_4_,iVar35 + -1);
              if (local_6a8 != (char **)0x0) {
                local_638 = (char **)0x0;
                local_6f0 = (byte *)CONCAT44(local_6f0._4_4_,iVar35);
                local_658 = local_598;
                local_668 = (char **)CONCAT44(local_668._4_4_,(int)uVar50);
                local_670 = CONCAT71(local_670._1_7_,cVar14);
                local_690 = param_1;
                local_650 = ppcVar54;
                do {
                  ppcVar49 = local_6a8;
                  pcVar33 = *(char **)(local_680 + 0xe0 + (long)local_638 * 8);
                  local_658[(long)local_638] = pcVar33;
                  iVar35 = (int)local_638;
                  *(undefined8 *)(puVar42 + -8) = 0x6fa498;
                  uVar19 = FUN_00771360(iVar35 + 0x30,ppcVar49);
                  uStack_5b8 = 0;
                  *(undefined1 **)(puVar42 + -8) = &LAB_006fa4ac;
                  local_628 = (char **)FUN_00756c20(local_58,uVar19,&uStack_5b8);
                  if (local_628 == (char **)0xffffffffffffffff) {
                    uVar50 = (ulong)local_668 & 0xffffffff;
                    local_6a8 = (char **)0x0;
                    ppcVar54 = local_650;
                    param_1 = local_690;
                    cVar14 = (byte)local_670;
                    goto LAB_006f6e8b;
                  }
                  iVar35 = 0;
                  lVar37 = 0;
                  pcVar25 = pcVar33;
                  if (0 < (int)(uint)local_618) {
                    do {
                      iVar35 = iVar35 + 1;
                      *(undefined1 **)(puVar42 + -8) = &LAB_006fa4db;
                      lVar37 = thunk_FUN_007129d0(pcVar25);
                      pcVar25 = pcVar25 + lVar37 + 1;
                    } while ((uint)local_618 != iVar35);
                    lVar37 = (long)pcVar25 - (long)pcVar33;
                  }
                  pbVar52 = (byte *)((long)local_628 + lVar37 + 0x18);
                  for (puVar43 = puVar42;
                      puVar43 != puVar42 + -((ulong)pbVar52 & 0xfffffffffffff000);
                      puVar43 = puVar43 + -0x1000) {
                    *(undefined8 *)(puVar43 + -8) = *(undefined8 *)(puVar43 + -8);
                  }
                  uVar39 = (ulong)((uint)pbVar52 & 0xff0);
                  lVar37 = -uVar39;
                  puVar42 = puVar43 + lVar37;
                  if (uVar39 != 0) {
                    *(undefined8 *)(puVar43 + -8) = *(undefined8 *)(puVar43 + -8);
                  }
                  local_6f8 = (char **)((ulong)(puVar43 + lVar37 + 0xf) & 0xfffffffffffffff0);
                  *(undefined8 *)(puVar43 + lVar37 + -8) = 0x6fa557;
                  uVar20 = thunk_FUN_00713820(local_6f8,pcVar33);
                  *(undefined8 *)(puVar43 + lVar37 + -8) = 0x6fa569;
                  puVar30 = (undefined1 *)thunk_FUN_00713820(uVar20,local_58,local_628);
                  *puVar30 = 0;
                  (&local_548)[(long)local_638] = local_6f8;
                  local_638 = (char **)((long)local_638 + 1);
                } while (local_638 != (char **)0xa);
                uVar50 = (ulong)local_668 & 0xffffffff;
                puVar42 = puVar43 + lVar37;
                ppcVar54 = local_650;
                param_1 = local_690;
                cVar14 = (byte)local_670;
              }
LAB_006f6e8b:
              local_690 = (char **)((ulong)local_690 & 0xffffffff00000000);
              local_6f8 = (char **)(CONCAT44(local_6f8._4_4_,local_644) & 0xffffffff00000080);
              local_658 = local_598;
              uVar39 = uVar50;
              if (cVar14 != '\0') {
LAB_006f6ec0:
                local_638 = (char **)0x0;
                iVar35 = 0x7fffffff;
                if (0 < (int)(uint)local_640) {
                  iVar35 = (uint)local_640;
                }
                local_670 = CONCAT44(local_670._4_4_,iVar35);
                local_650 = local_658;
                do {
                  ppcVar49 = local_650;
                  local_668 = (char **)CONCAT44(local_668._4_4_,(int)local_638);
                  if (local_6a8 == (char **)0x0) {
                    ppcVar24 = *(char ***)(local_680 + 0xe0 + (long)local_638 * 8);
                  }
                  else {
                    ppcVar24 = (char **)(&local_548)[(long)local_638];
                  }
                  iVar35 = (int)local_690;
                  *local_650 = (char *)ppcVar24;
                  if ((int)local_690 != 0) {
                    local_628 = (char **)CONCAT44(local_628._4_4_,(int)uVar39);
                    iVar53 = 0;
                    local_618 = ppcVar54;
                    do {
                      iVar53 = iVar53 + 1;
                      *(undefined8 *)(puVar42 + -8) = 0x6f6f64;
                      lVar37 = thunk_FUN_007129d0(ppcVar24);
                      ppcVar24 = (char **)((long)ppcVar24 + lVar37 + 1);
                      *ppcVar49 = (char *)ppcVar24;
                    } while (iVar35 != iVar53);
                    uVar39 = (ulong)local_628 & 0xffffffff;
                    ppcVar54 = local_618;
                  }
                  iVar35 = (int)local_670;
                  if ((uint)*(byte *)ppcVar24 == (uint)uVar39) {
                    local_628 = ppcVar24;
                    do {
                      ppcVar49 = (char **)((long)ppcVar24 + 1);
                      if (*(byte *)ppcVar49 == 0) goto LAB_006f7335;
                      if (iVar35 == 0) {
                        ppcVar48 = ppcVar24;
                        ppcVar24 = local_628;
                        if (local_628 < ppcVar49) goto LAB_006f74a3;
                        goto LAB_006f7043;
                      }
                      pbVar52 = (byte *)param_1[1];
                      if (pbVar52 < param_1[2]) {
                        param_1[1] = (char *)(pbVar52 + 1);
                        uVar39 = (ulong)*pbVar52;
                        ppcVar48 = ppcVar24;
                      }
                      else {
                        local_618 = ppcVar24;
                        *(undefined8 *)(puVar42 + -8) = 0x6f7002;
                        uVar18 = FUN_007067b0(param_1);
                        uVar39 = (ulong)uVar18;
                        ppcVar48 = local_618;
                        if (uVar18 == 0xffffffff) {
                          local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58)
                                              );
                          break;
                        }
                      }
                      ppcVar54 = (char **)((long)ppcVar54 + 1);
                      iVar35 = iVar35 + -1;
                      ppcVar24 = ppcVar49;
                    } while ((uint)*(byte *)ppcVar49 == (uint)uVar39);
                    if (*(byte *)ppcVar49 == 0) goto LAB_006f7335;
                    ppcVar24 = local_628;
                    if (local_628 < ppcVar49) {
                      if ((int)uVar39 != -1) {
LAB_006f74a3:
                        ppcVar24 = local_628;
                        ppcVar54 = (char **)((long)ppcVar54 + -1);
                        local_618 = ppcVar48;
                        *(undefined8 *)(puVar42 + -8) = 0x6f74ba;
                        FUN_007075f0(param_1,uVar39 & 0xff);
                        ppcVar48 = local_618;
                      }
                      ppcVar49 = ppcVar48;
                      if (ppcVar24 < ppcVar48) {
                        do {
                          bVar13 = *(byte *)ppcVar49;
                          ppcVar49 = (char **)((long)ppcVar49 + -1);
                          *(undefined8 *)(puVar42 + -8) = 0x6f74e1;
                          FUN_007075f0(param_1,bVar13);
                        } while (ppcVar49 != ppcVar24);
                        ppcVar54 = (char **)((long)ppcVar54 + ((long)ppcVar24 - (long)ppcVar48));
                        ppcVar48 = ppcVar24;
                      }
                      uVar39 = (ulong)*(byte *)ppcVar48;
                    }
                  }
                  else if (*(byte *)ppcVar24 == 0) goto LAB_006f7335;
LAB_006f7043:
                  *(undefined8 *)(puVar42 + -8) = 0x6f704b;
                  lVar37 = thunk_FUN_007129d0(ppcVar24);
                  local_638 = (char **)((long)local_638 + 1);
                  *local_650 = (char *)((long)ppcVar24 + lVar37 + 1);
                  local_650 = local_650 + 1;
                } while (local_638 != (char **)0xa);
                local_650._4_4_ = (undefined4)((ulong)local_650 >> 0x20);
                local_650 = (char **)CONCAT44(local_650._4_4_,(int)local_690 + 1);
                if ((int)local_690 + 1 <= (int)local_6f0) {
                  do {
                    local_628 = (char **)0x0;
                    do {
                      local_638 = (char **)local_658[(long)local_628];
                      local_668 = (char **)CONCAT44(local_668._4_4_,(int)local_628);
                      ppcVar49 = local_638;
                      iVar35 = (int)local_670;
                      if ((uint)*(byte *)local_638 == (uint)uVar39) {
                        do {
                          ppcVar24 = ppcVar49;
                          ppcVar49 = (char **)((long)ppcVar24 + 1);
                          if (*(byte *)ppcVar49 == 0) goto LAB_006f7329;
                          if (iVar35 == 0) {
                            if (local_638 < ppcVar49) goto LAB_006f7403;
                            goto LAB_006f718d;
                          }
                          pbVar52 = (byte *)param_1[1];
                          if (pbVar52 < param_1[2]) {
                            param_1[1] = (char *)(pbVar52 + 1);
                            uVar39 = (ulong)*pbVar52;
                          }
                          else {
                            local_618 = ppcVar24;
                            *(undefined8 *)(puVar42 + -8) = 0x6f7152;
                            uVar18 = FUN_007067b0(param_1);
                            uVar39 = (ulong)uVar18;
                            ppcVar24 = local_618;
                            if (uVar18 == 0xffffffff) {
                              local_608 = CONCAT44(local_608._4_4_,
                                                   *(undefined4 *)(in_FS_OFFSET + -0x58));
                              break;
                            }
                          }
                          ppcVar54 = (char **)((long)ppcVar54 + 1);
                          iVar35 = iVar35 + -1;
                        } while ((uint)*(byte *)ppcVar49 == (uint)uVar39);
                        if (*(byte *)ppcVar49 == 0) {
LAB_006f7329:
                          local_690 = (char **)CONCAT44(local_690._4_4_,(int)local_650);
                          goto LAB_006f7335;
                        }
                        if (local_638 < ppcVar49) {
                          if ((int)uVar39 != -1) {
LAB_006f7403:
                            ppcVar54 = (char **)((long)ppcVar54 + -1);
                            *(undefined8 *)(puVar42 + -8) = 0x6f7413;
                            FUN_007075f0(param_1,uVar39 & 0xff);
                          }
                          ppcVar49 = local_638;
                          ppcVar48 = ppcVar24;
                          if (local_638 < ppcVar24) {
                            do {
                              bVar13 = *(byte *)ppcVar48;
                              ppcVar48 = (char **)((long)ppcVar48 + -1);
                              *(undefined8 *)(puVar42 + -8) = 0x6f7438;
                              FUN_007075f0(param_1,bVar13);
                            } while (ppcVar49 != ppcVar48);
                            ppcVar54 = (char **)((long)ppcVar54 + ((long)local_638 - (long)ppcVar24)
                                                );
                            ppcVar24 = local_638;
                          }
                          uVar39 = (ulong)*(byte *)ppcVar24;
                        }
                      }
                      else if (*(byte *)local_638 == 0) goto LAB_006f7329;
LAB_006f718d:
                      ppcVar49 = local_638;
                      *(undefined8 *)(puVar42 + -8) = 0x6f719c;
                      lVar37 = thunk_FUN_007129d0(ppcVar49);
                      local_658[(long)local_628] = (char *)((long)ppcVar49 + lVar37 + 1);
                      local_628 = (char **)((long)local_628 + 1);
                    } while (local_628 != (char **)0xa);
                    iVar35 = (int)local_650 + 1;
                    local_650 = (char **)CONCAT44(local_650._4_4_,iVar35);
                  } while (iVar35 <= (int)local_6f0);
                }
                if ((int)local_6f8 != 0) {
                  uVar45 = 0x7fffffff;
                  if (0 < (int)(uint)local_640) {
                    uVar45 = (ulong)local_640 & 0xffffffff;
                  }
                  uVar18 = (uint)uVar45;
                  pbVar52 = local_688;
                  if ((uint)*local_688 == (uint)uVar39) {
                    local_638 = &local_468;
                    uVar50 = uVar39;
                    do {
                      ppcVar49 = local_638;
                      iVar53 = (int)uVar50;
                      uVar20 = local_478._0_8_;
                      bVar13 = (byte)uVar50;
                      uVar18 = (uint)uVar45;
                      if (local_478._8_8_ == local_478._0_8_) {
                        local_628 = (char **)CONCAT71(local_628._1_7_,bVar13);
                        if ((byte *)local_478._8_8_ != (byte *)0x0) {
                          local_618 = (char **)(local_478._8_8_ + -(long)local_468);
                          *(undefined8 *)(puVar42 + -8) = 0x6f72d5;
                          cVar14 = FUN_00712520(ppcVar49);
                          uVar39 = (ulong)local_628 & 0xff;
                          if (cVar14 == '\0') {
                            local_478 = (undefined1  [16])0x0;
                          }
                          else {
                            local_478._8_8_ = local_468 + local_460;
                            local_478._0_8_ = (byte *)((long)local_618 + (long)local_468) + 1;
                            *(byte *)((long)local_618 + (long)local_468) = bVar13;
                          }
                          goto LAB_006f724e;
                        }
                        if (pbVar52[1] == 0) goto LAB_006f86db;
                      }
                      else {
                        local_478._0_8_ = (byte *)(local_478._0_8_ + 1);
                        *(byte *)uVar20 = bVar13;
                        uVar39 = uVar50;
LAB_006f724e:
                        if (pbVar52[1] == 0) {
                          pcVar33 = (char *)local_478._0_8_;
                          if ((char *)local_478._0_8_ != (char *)0x0) goto LAB_006f757b;
                          goto LAB_006f86db;
                        }
                      }
                      pbVar52 = pbVar52 + 1;
                      if (uVar18 == 0) {
                        if ((char *)local_478._0_8_ == (char *)0x0) goto LAB_006f86db;
                        if (pbVar52 <= local_688) goto LAB_006f73db;
                        local_478._0_8_ = local_478._0_8_ - ((long)pbVar52 - (long)local_688);
                        goto LAB_006fb799;
                      }
                      pbVar51 = (byte *)param_1[1];
                      if (pbVar51 < param_1[2]) {
                        param_1[1] = (char *)(pbVar51 + 1);
                        uVar39 = (ulong)*pbVar51;
                      }
                      else {
                        *(undefined8 *)(puVar42 + -8) = 0x6f753c;
                        uVar17 = FUN_007067b0(param_1);
                        uVar39 = (ulong)uVar17;
                        if (uVar17 == 0xffffffff) {
                          local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58)
                                              );
                          break;
                        }
                      }
                      ppcVar54 = (char **)((long)ppcVar54 + 1);
                      uVar18 = uVar18 - 1;
                      uVar45 = (ulong)uVar18;
                      uVar50 = uVar39;
                    } while ((uint)*pbVar52 == (uint)uVar39);
                  }
                  iVar53 = (int)uVar39;
                  if ((char *)local_478._0_8_ != (char *)0x0) {
                    pcVar33 = (char *)local_478._0_8_;
                    if (*pbVar52 == 0) {
LAB_006f757b:
                      cVar14 = (char)uVar39;
                      if ((int)(uint)local_640 < 1) {
                        uVar18 = (uint)local_640;
                      }
                      local_478._0_8_ = pcVar33 + -1;
                      local_640 = (char **)CONCAT44(local_640._4_4_,uVar18);
                      pcVar25 = (char *)local_478._0_8_;
                      pcVar40 = (char *)local_478._8_8_;
                      if (local_478._0_8_ != local_478._8_8_) goto LAB_006f737d;
                      goto LAB_006f75a9;
                    }
                    uVar50 = uVar39;
                    if (local_688 < pbVar52) {
                      local_478._0_8_ = local_478._0_8_ - ((long)pbVar52 - (long)local_688);
                      if (iVar53 != -1) {
LAB_006fb799:
                        ppcVar54 = (char **)((long)ppcVar54 + -1);
                        *(undefined8 *)(puVar42 + -8) = 0x6fb7a9;
                        FUN_007075f0(param_1,uVar50 & 0xff);
                      }
                      pbVar51 = pbVar52 + -1;
                      pbVar41 = pbVar51;
                      if (local_688 < pbVar51) {
                        do {
                          bVar13 = *pbVar41;
                          pbVar41 = pbVar41 + -1;
                          *(undefined8 *)(puVar42 + -8) = 0x6fb6d0;
                          FUN_007075f0(param_1,bVar13);
                        } while (local_688 != pbVar41);
                        ppcVar54 = (char **)((long)ppcVar54 +
                                            (long)(local_688 + (1 - (long)pbVar52)));
                        pbVar51 = pbVar51 + (long)(local_688 + (1 - (long)pbVar52));
                      }
                      uVar50 = (ulong)*pbVar51;
                    }
                    goto LAB_006f73db;
                  }
LAB_006f86db:
                  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
                  local_648 = 0xffffffff;
                  uVar17 = local_648;
                  ppcVar24 = local_618;
                  goto switchD_006f555e_default;
                }
                goto LAB_006f73d1;
              }
              goto LAB_006f73db;
            }
LAB_006f6363:
            bVar55 = (uint)local_640 != 0;
            if (((int)uVar50 != 0x30) || (!bVar55)) goto LAB_006f6e1e;
            local_640 = (char **)CONCAT44(local_640._4_4_,
                                          (uint)local_640 - (0 < (int)(uint)local_640));
            uVar20 = local_478._0_8_;
            if (local_478._8_8_ == local_478._0_8_) {
              if ((undefined1 *)local_478._8_8_ != (undefined1 *)0x0) {
                lVar37 = local_478._8_8_ - (long)local_468;
                *(undefined8 *)(puVar42 + -8) = 0x6f8aef;
                cVar14 = FUN_00712520(&local_468);
                if (cVar14 == '\0') {
                  local_478 = (undefined1  [16])0x0;
                }
                else {
                  local_478._8_8_ = local_468 + local_460;
                  local_478._0_8_ = local_468 + lVar37 + 1;
                  local_468[lVar37] = '0';
                }
              }
            }
            else {
              local_478._0_8_ = (undefined1 *)(local_478._0_8_ + 1);
              *(undefined1 *)uVar20 = 0x30;
            }
            pbVar52 = (byte *)param_1[1];
            if (pbVar52 < param_1[2]) {
              param_1[1] = (char *)(pbVar52 + 1);
              uVar50 = (ulong)*pbVar52;
LAB_006f63d0:
              ppcVar54 = (char **)((long)ppcVar54 + 1);
            }
            else {
              *(undefined8 *)(puVar42 + -8) = 0x6f7b1f;
              uVar18 = FUN_007067b0(param_1);
              uVar50 = (ulong)uVar18;
              if (uVar18 != 0xffffffff) goto LAB_006f63d0;
              local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
            }
            if ((uint)local_640 == 0) {
              if ((uint)local_618 != 0) {
                bVar55 = false;
                goto LAB_006f765a;
              }
              local_618 = (char **)CONCAT44(local_618._4_4_,8);
              goto LAB_006f813c;
            }
            iVar35 = (int)uVar50;
            if (*(int *)(local_660[0xe] + (uVar50 & 0xff) * 4) != 0x78) {
              bVar55 = iVar35 != -1;
              if ((uint)local_618 != 0) goto LAB_006f765a;
              local_618 = (char **)CONCAT44(local_618._4_4_,8);
              goto LAB_006f641c;
            }
            bVar55 = iVar35 != -1;
            if (((ulong)local_618 & 10) != 0) goto LAB_006f765a;
            local_640 = (char **)CONCAT44(local_640._4_4_,
                                          (uint)local_640 - (0 < (int)(uint)local_640));
            if (iVar35 != -1) {
              pbVar52 = (byte *)param_1[1];
              if (pbVar52 < param_1[2]) {
                param_1[1] = (char *)(pbVar52 + 1);
                uVar50 = (ulong)*pbVar52;
              }
              else {
                *(undefined8 *)(puVar42 + -8) = 0x6fa83d;
                uVar18 = FUN_007067b0(param_1);
                uVar50 = (ulong)uVar18;
                if (uVar18 == 0xffffffff) {
                  local_618 = (char **)CONCAT44(local_618._4_4_,0x10);
                  local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
                  pcVar33 = (char *)local_478._0_8_;
                  goto LAB_006f651d;
                }
              }
              uVar18 = (uint)uVar50;
              ppcVar54 = (char **)((long)ppcVar54 + 1);
              local_618 = (char **)CONCAT44(local_618._4_4_,0x10);
              if ((uint)local_640 == 0) goto LAB_006f813c;
              goto LAB_006f6424;
            }
            *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
            local_618 = (char **)CONCAT44(local_618._4_4_,0x10);
            pcVar33 = (char *)local_478._0_8_;
            goto LAB_006f651d;
          }
LAB_006f623a:
          *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006f6244:
          uVar17 = 0xffffffff;
          ppcVar24 = local_618;
          if (local_648 != 0) {
            uVar17 = local_648;
          }
          goto switchD_006f555e_default;
        }
        if ((*(byte *)(plVar22[0xd] + 1 + (ulong)bVar13 * 2) & 0x20) == 0) {
          if (uVar18 == 0xffffffff) {
            *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006f56a3:
            uVar17 = 0xffffffff;
            ppcVar24 = local_618;
            if (local_648 != 0) {
              uVar17 = local_648;
            }
          }
          else {
            pbVar52 = (byte *)param_1[1];
            if (pbVar52 < param_1[2]) {
              param_1[1] = (char *)(pbVar52 + 1);
              uVar39 = (ulong)*pbVar52;
            }
            else {
              *(undefined8 *)(puVar42 + -8) = 0x6f57e0;
              uVar18 = FUN_007067b0(param_1);
              uVar39 = (ulong)uVar18;
              if (uVar18 == 0xffffffff) goto LAB_006f56a3;
            }
            ppcVar54 = (char **)((long)ppcVar49 + 1);
            if ((uint)local_618 != 0) {
              lVar37 = local_660[0xd];
              bVar15 = *(byte *)(lVar37 + 1 + (long)(int)uVar39 * 2);
              while ((bVar15 & 0x20) != 0) {
                pbVar52 = (byte *)param_1[1];
                if (pbVar52 < param_1[2]) {
                  param_1[1] = (char *)(pbVar52 + 1);
                  uVar39 = (ulong)*pbVar52;
                }
                else {
                  *(undefined8 *)(puVar42 + -8) = 0x6f5780;
                  uVar18 = FUN_007067b0(param_1);
                  uVar39 = (ulong)uVar18;
                  if (uVar18 == 0xffffffff) {
                    uVar17 = 0xffffffff;
                    ppcVar24 = local_618;
                    if (local_648 != 0) {
                      uVar17 = local_648;
                    }
                    goto switchD_006f555e_default;
                  }
                  lVar37 = local_660[0xd];
                }
                ppcVar54 = (char **)((long)ppcVar54 + 1);
                bVar15 = *(byte *)(lVar37 + 1 + (long)(int)uVar39 * 2);
              }
            }
            if ((uint)bVar13 == (uint)uVar39) {
              local_618 = (char **)((ulong)local_618 & 0xffffffff00000000);
              goto LAB_006f510e;
            }
            *(undefined8 *)(puVar42 + -8) = 0x6f5e64;
            FUN_007075f0(param_1,uVar39 & 0xff);
            uVar17 = local_648;
            ppcVar24 = local_618;
          }
          goto switchD_006f555e_default;
        }
        local_618 = (char **)CONCAT44(local_618._4_4_,1);
        goto LAB_006f510e;
      }
      local_648 = 0;
      local_678 = (long *)0x0;
      local_6d8 = (ulong *)0x0;
      uVar17 = local_648;
      ppcVar24 = local_618;
      goto switchD_006f555e_default;
    }
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    puVar43 = auStack_708;
  }
  else if (*(uint *)(param_1 + 0x18) == 0xffffffff) goto LAB_006f4f5a;
  goto LAB_006f52d1;
code_r0x006fb2f0:
  local_548._0_4_ = (uint)local_548 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006fb319;
  goto LAB_006fb2eb;
code_r0x006fa61d:
  uVar32 = uVar32 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006fa62b;
  goto LAB_006fa618;
code_r0x006fa1d4:
  local_548._0_4_ = (uint)local_548 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006fa1e2;
  goto LAB_006fa1cf;
code_r0x006fc81b:
  local_548._0_4_ = (uint)local_548 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006fc849;
  goto LAB_006fc816;
code_r0x006fb052:
  local_548._0_4_ = (uint)local_548 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006fb081;
  goto LAB_006fb04d;
code_r0x006fb3ce:
  local_548._0_4_ = (uint)local_548 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006fb3f7;
  goto LAB_006fb3c9;
code_r0x006fb4b1:
  uVar32 = uVar32 + 8;
  uVar39 = (ulong)uVar32;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006fb4e1;
  goto LAB_006fb4ac;
code_r0x006fb579:
  uVar32 = uVar32 + 8;
  uVar39 = (ulong)uVar32;
  bVar55 = true;
  iVar53 = iVar53 + -1;
  if (iVar53 == 0) goto LAB_006fb5a2;
  goto LAB_006fb574;
code_r0x006f950e:
  uVar39 = 0xffffffff;
  local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
LAB_006f952c:
  local_6a0 = ppcVar48;
  if ((char **)((long)ppcVar49 - *local_678) != ppcVar48) {
    *(undefined8 *)(puVar42 + -8) = 0x6f954e;
    lVar37 = FUN_00710840();
    if (lVar37 != 0) {
      *local_678 = lVar37;
    }
  }
LAB_006f67ef:
  local_648 = local_648 + 1;
  local_618 = (char **)((ulong)local_618 & 0xffffffff00000000);
  local_678 = (long *)0x0;
  local_6c8 = ppcVar49;
  ppcVar48 = local_620;
  goto LAB_006f510e;
code_r0x006f9e9a:
  local_548._0_4_ = (uint)local_548 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f9ec3;
  goto LAB_006f9e95;
code_r0x006faf9a:
  local_548._0_4_ = (uint)local_548 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006fafc3;
  goto LAB_006faf95;
code_r0x006fc9d4:
  local_548._0_4_ = (uint)local_548 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006fc9fd;
  goto LAB_006fc9cf;
LAB_006f9c20:
  ppcVar48 = local_658;
  uVar38 = (uint)local_618;
  local_6c0 = ppcVar49;
LAB_006f9c3a:
  *(undefined8 *)(puVar42 + -8) = 0x6f9c46;
  FUN_007075f0(param_1,uVar39 & 0xff);
LAB_006f83af:
  uVar17 = local_648;
  ppcVar24 = local_618;
  if (ppcVar48 != (char **)0x0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
    goto switchD_006f555e_default;
  }
  if (ppcVar54 == local_628) goto switchD_006f555e_default;
  if (uVar38 == 0) {
LAB_006f7d3d:
    plVar22 = local_678;
    *(uint *)local_6c0 = 0;
    ppcVar49 = (char **)((long)local_6c0 + 4);
    if (((local_644 & 0x2100) != 0) && ((char **)((long)ppcVar49 - *local_678 >> 2) != local_6a0)) {
      *(undefined8 *)(puVar42 + -8) = 0x6f7d80;
      lVar37 = FUN_00710840();
      if (lVar37 != 0) {
        *plVar22 = lVar37;
      }
    }
    local_648 = local_648 + 1;
    local_678 = (long *)0x0;
    local_6c0 = ppcVar49;
  }
  goto LAB_006f6de8;
LAB_006f7335:
  if ((int)(uint)local_640 < 1) {
    iVar35 = (uint)local_640;
  }
  iVar53 = (int)local_668 + 0x30;
  cVar14 = (char)iVar53;
  local_640 = (char **)CONCAT44(local_640._4_4_,iVar35);
  if (local_478._8_8_ == local_478._0_8_) {
    local_6f0 = (byte *)CONCAT44(local_6f0._4_4_,(int)local_690);
    pcVar40 = (char *)local_478._8_8_;
    if ((char *)local_478._8_8_ != (char *)0x0) {
LAB_006f75a9:
      local_618 = (char **)CONCAT71(local_618._1_7_,cVar14);
      lVar37 = (long)pcVar40 - (long)local_468;
      *(undefined8 *)(puVar42 + -8) = 0x6f75c3;
      cVar14 = FUN_00712520(&local_468);
      if (cVar14 == '\0') {
        local_478 = (undefined1  [16])0x0;
      }
      else {
        local_478._8_8_ = local_468 + local_460;
        local_478._0_8_ = local_468 + lVar37 + 1;
        local_468[lVar37] = (char)local_618;
      }
      goto LAB_006f7387;
    }
    if (0 < iVar35) goto LAB_006f7391;
  }
  else {
    pcVar33 = (char *)(local_478._0_8_ + 1);
    local_6f0 = (byte *)CONCAT44(local_6f0._4_4_,(int)local_690);
    pcVar25 = (char *)local_478._0_8_;
LAB_006f737d:
    local_478._0_8_ = pcVar33;
    *pcVar25 = cVar14;
LAB_006f7387:
    if (0 < (int)(uint)local_640) {
LAB_006f7391:
      local_640 = (char **)CONCAT44(local_640._4_4_,(uint)local_640 + -1);
    }
    if (iVar53 == -1) {
      *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
      goto LAB_006f7618;
    }
  }
  pbVar52 = (byte *)param_1[1];
  if (pbVar52 < param_1[2]) {
    param_1[1] = (char *)(pbVar52 + 1);
    uVar39 = (ulong)*pbVar52;
  }
  else {
    *(undefined8 *)(puVar42 + -8) = 0x6f7690;
    uVar18 = FUN_007067b0(param_1);
    uVar39 = (ulong)uVar18;
    if (uVar18 == 0xffffffff) {
      local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
LAB_006f7618:
      uVar50 = 0xffffffff;
      goto LAB_006f73db;
    }
  }
  ppcVar54 = (char **)((long)ppcVar54 + 1);
  if ((uint)local_640 == 0) goto LAB_006f73d1;
  goto LAB_006f6ec0;
LAB_006f73d1:
  uVar50 = uVar39;
LAB_006f73db:
  local_618 = (char **)CONCAT44(local_618._4_4_,10);
  pcVar33 = (char *)local_478._0_8_;
LAB_006f651d:
  uVar39 = uVar50;
  if (pcVar33 == (char *)0x0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    local_648 = 0xffffffff;
    uVar17 = local_648;
    ppcVar24 = local_618;
    goto switchD_006f555e_default;
  }
LAB_006f6526:
  iVar35 = (int)uVar39;
  if (local_468 == pcVar33) {
    if ((((local_644 & 0x1000) != 0) && (4 < (uint)local_640)) && (iVar35 == 0x28)) {
      lVar37 = local_660[0xe];
      pbVar52 = (byte *)param_1[1];
      if (pbVar52 < param_1[2]) {
        param_1[1] = (char *)(pbVar52 + 1);
        uVar39 = (ulong)*pbVar52;
        uVar18 = (uint)*pbVar52;
      }
      else {
        *(undefined8 *)(puVar42 + -8) = 0x6f8b96;
        uVar18 = FUN_007067b0(param_1);
        uVar17 = local_648;
        ppcVar24 = local_618;
        if (uVar18 == 0xffffffff) goto switchD_006f555e_default;
        uVar39 = (ulong)(uVar18 & 0xff);
      }
      if (*(int *)(lVar37 + uVar39 * 4) == 0x6e) {
        lVar37 = local_660[0xe];
        pbVar52 = (byte *)param_1[1];
        if (pbVar52 < param_1[2]) {
          param_1[1] = (char *)(pbVar52 + 1);
          uVar39 = (ulong)*pbVar52;
          uVar18 = (uint)*pbVar52;
        }
        else {
          *(undefined8 *)(puVar42 + -8) = 0x6f96db;
          uVar18 = FUN_007067b0(param_1);
          if (uVar18 == 0xffffffff) {
            uVar19 = *(undefined4 *)(in_FS_OFFSET + -0x58);
            uVar17 = local_648;
            ppcVar24 = local_618;
            if (*(int *)(lVar37 + 0x3fc) != 0x69) goto switchD_006f555e_default;
            iVar35 = *(int *)(local_660[0xe] + 0x3fc);
            goto joined_r0x006f9714;
          }
          uVar39 = (ulong)(uVar18 & 0xff);
        }
        if (*(int *)(lVar37 + uVar39 * 4) == 0x69) {
          lVar37 = local_660[0xe];
          pbVar52 = (byte *)param_1[1];
          if (pbVar52 < param_1[2]) {
            param_1[1] = (char *)(pbVar52 + 1);
            uVar39 = (ulong)*pbVar52;
            uVar18 = (uint)*pbVar52;
          }
          else {
            *(undefined8 *)(puVar42 + -8) = 0x6f9628;
            uVar18 = FUN_007067b0(param_1);
            if (uVar18 == 0xffffffff) {
              iVar35 = *(int *)(lVar37 + 0x3fc);
              uVar19 = *(undefined4 *)(in_FS_OFFSET + -0x58);
joined_r0x006f9714:
              uVar17 = local_648;
              ppcVar24 = local_618;
              if (iVar35 == 0x6c) {
                *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar19;
              }
              goto switchD_006f555e_default;
            }
            uVar39 = (ulong)(uVar18 & 0xff);
          }
          if (*(int *)(lVar37 + uVar39 * 4) == 0x6c) {
            pbVar52 = (byte *)param_1[1];
            if (pbVar52 < param_1[2]) {
              param_1[1] = (char *)(pbVar52 + 1);
              uVar39 = (ulong)*pbVar52;
            }
            else {
              *(undefined8 *)(puVar42 + -8) = 0x6f894f;
              uVar18 = FUN_007067b0(param_1);
              uVar39 = (ulong)uVar18;
              uVar17 = local_648;
              ppcVar24 = local_618;
              if (uVar18 == 0xffffffff) goto switchD_006f555e_default;
            }
            ppcVar54 = (char **)((long)ppcVar54 + 4);
            uVar18 = (uint)uVar39;
            if (uVar18 == 0x29) {
              uVar20 = local_478._0_8_;
              if (local_478._0_8_ != local_478._8_8_) {
                local_478._0_8_ = (undefined1 *)(local_478._0_8_ + 1);
                *(undefined1 *)uVar20 = 0x30;
LAB_006f6560:
                pcVar33 = (char *)local_478._0_8_;
                if (local_478._0_8_ != local_478._8_8_) goto LAB_006f6574;
                if ((char *)local_478._0_8_ == (char *)0x0) goto LAB_006f87e3;
                goto LAB_006f7b4e;
              }
              if ((undefined1 *)local_478._0_8_ == (undefined1 *)0x0) goto LAB_006f87e3;
              lVar37 = local_478._0_8_ - (long)local_468;
              *(undefined8 *)(puVar42 + -8) = 0x6f9674;
              cVar14 = FUN_00712520(&local_468);
              if (cVar14 != '\0') {
                local_478._8_8_ = local_468 + local_460;
                local_478._0_8_ = local_468 + lVar37 + 1;
                local_468[lVar37] = '0';
                goto LAB_006f6560;
              }
              goto LAB_006fa321;
            }
          }
        }
      }
      uVar39 = (ulong)uVar18;
      goto LAB_006f7c6d;
    }
  }
  else if (((long)pcVar33 - (long)local_468 != 1) || ((*local_468 - 0x2bU & 0xfd) != 0)) {
    if (iVar35 != -1) {
      ppcVar54 = (char **)((long)ppcVar54 + -1);
      *(undefined8 *)(puVar42 + -8) = 0x6f6560;
      FUN_007075f0(param_1,uVar39 & 0xff);
      goto LAB_006f6560;
    }
    if ((char *)local_478._8_8_ == pcVar33) {
LAB_006f7b4e:
      lVar37 = (long)pcVar33 - (long)local_468;
      *(undefined8 *)(puVar42 + -8) = 0x6f7b60;
      cVar14 = FUN_00712520(&local_468);
      if (cVar14 == '\0') {
LAB_006fa321:
        local_478 = (undefined1  [16])0x0;
        goto LAB_006f87e3;
      }
      local_478._8_8_ = local_468 + local_460;
      local_478._0_8_ = local_468 + lVar37 + 1;
      local_468[lVar37] = '\0';
    }
    else {
LAB_006f6574:
      local_478._0_8_ = pcVar33 + 1;
      *pcVar33 = '\0';
    }
    pcVar33 = local_468;
    if (local_478._0_8_ == 0) {
LAB_006f87e3:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
      local_648 = 0xffffffff;
      uVar17 = local_648;
      ppcVar24 = local_618;
      goto switchD_006f555e_default;
    }
    uVar50 = (ulong)local_618 & 0xffffffff;
    uVar18 = local_644 & 0x40;
    if (uVar18 == 0) {
      *(undefined8 *)(puVar42 + -8) = 0x6f773a;
      uVar20 = FUN_006e94f0(pcVar33,&local_5f0,uVar50);
    }
    else {
      *(undefined8 *)(puVar42 + -8) = 0x6f65c2;
      uVar20 = FUN_006e94b0();
    }
    uVar17 = local_648;
    ppcVar24 = local_618;
    if (local_5f0 == local_468) goto switchD_006f555e_default;
    local_618 = (char **)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000008);
    if ((local_644 & 8) != 0) goto LAB_006f6de8;
    if (uVar18 == 0) {
      if ((local_644 & 1) != 0) {
        if (local_694 != 0) {
          local_638 = (char **)*local_6d0;
          plStack_630 = (long *)local_6d0[1];
          local_538 = local_6d0[2];
          local_548._0_4_ = (uint)local_638;
          iVar35 = local_694 + -1;
          uVar18 = (uint)local_548;
          ppcVar49 = local_638;
          plStack_540 = plStack_630;
          if (iVar35 != 0) {
            bVar55 = false;
            uVar17 = (uint)local_548;
            do {
              if (0x2f < uVar17) {
                plStack_540 = plStack_630 + 1;
                local_548 = local_638;
                if (iVar35 != 1) {
                  plVar22 = plStack_630 + 2;
                  do {
                    plStack_540 = plVar22;
                    plVar22 = plStack_540 + 1;
                    local_548 = local_638;
                  } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                }
                goto LAB_006f8a35;
              }
              uVar17 = uVar17 + 8;
              bVar55 = true;
              iVar35 = iVar35 + -1;
              local_548 = local_638;
            } while (iVar35 != 0);
LAB_006f7f00:
            local_638 = local_548;
            local_548 = (char **)CONCAT44(local_548._4_4_,uVar17);
            uVar18 = uVar17;
            ppcVar49 = local_548;
          }
          goto LAB_006f7f08;
        }
LAB_006f6611:
        if ((uint)local_5b0 < 0x30) {
          uVar50 = local_5b0 & 0xffffffff;
          local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
          plVar22 = (long *)(uVar50 + local_5a0);
        }
        else {
          plVar22 = plStack_5a8;
          plStack_5a8 = plStack_5a8 + 1;
        }
        puVar27 = (undefined8 *)*plVar22;
        goto LAB_006f6635;
      }
      if ((local_644 & 4) != 0) {
        if (local_694 != 0) {
          local_638 = (char **)*local_6d0;
          plStack_630 = (long *)local_6d0[1];
          local_538 = local_6d0[2];
          local_548._0_4_ = (uint)local_638;
          iVar35 = local_694 + -1;
          uVar18 = (uint)local_548;
          ppcVar49 = local_638;
          plStack_540 = plStack_630;
          if (iVar35 != 0) {
            bVar55 = false;
            uVar17 = (uint)local_548;
            do {
              if (0x2f < uVar17) {
                plStack_540 = plStack_630 + 1;
                ppcVar49 = local_638;
                if (iVar35 != 1) {
                  plVar22 = plStack_630 + 2;
                  do {
                    plStack_540 = plVar22;
                    plVar22 = plStack_540 + 1;
                    ppcVar49 = local_638;
                  } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                }
                goto LAB_006f97a6;
              }
              uVar17 = uVar17 + 8;
              bVar55 = true;
              iVar35 = iVar35 + -1;
              ppcVar49 = local_638;
            } while (iVar35 != 0);
LAB_006f97b2:
            local_548 = ppcVar49;
            local_638 = local_548;
            local_548 = (char **)CONCAT44(local_548._4_4_,uVar17);
            uVar18 = uVar17;
            ppcVar49 = local_548;
          }
          goto LAB_006f97ba;
        }
LAB_006f881b:
        if ((uint)local_5b0 < 0x30) {
          uVar50 = local_5b0 & 0xffffffff;
          local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
          plVar22 = (long *)(uVar50 + local_5a0);
        }
        else {
          plVar22 = plStack_5a8;
          plStack_5a8 = plStack_5a8 + 1;
        }
        puVar26 = (undefined2 *)*plVar22;
        goto LAB_006f883f;
      }
      if ((local_644 & 0x200) == 0) {
        if (local_694 == 0) goto LAB_006f95f5;
        local_638 = (char **)*local_6d0;
        plStack_630 = (long *)local_6d0[1];
        local_538 = local_6d0[2];
        local_548._0_4_ = (uint)local_638;
        iVar35 = local_694 + -1;
        uVar18 = (uint)local_548;
        ppcVar49 = local_638;
        plStack_540 = plStack_630;
        if (iVar35 != 0) {
          bVar55 = false;
          uVar17 = (uint)local_548;
          do {
            if (0x2f < uVar17) {
              plStack_540 = plStack_630 + 1;
              ppcVar49 = local_638;
              if (iVar35 != 1) {
                plVar22 = plStack_630 + 2;
                do {
                  plStack_540 = plVar22;
                  plVar22 = plStack_540 + 1;
                  ppcVar49 = local_638;
                } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
              }
              goto LAB_006fa88d;
            }
            uVar17 = uVar17 + 8;
            bVar55 = true;
            iVar35 = iVar35 + -1;
            ppcVar49 = local_638;
          } while (iVar35 != 0);
LAB_006fa899:
          local_548 = ppcVar49;
          local_638 = local_548;
          local_548 = (char **)CONCAT44(local_548._4_4_,uVar17);
          uVar18 = uVar17;
          ppcVar49 = local_548;
        }
LAB_006fa8a1:
        local_548 = ppcVar49;
        if (uVar18 < 0x30) {
          local_548 = (char **)CONCAT44(local_548._4_4_,uVar18 + 8);
          plVar22 = (long *)(uVar18 + local_538);
        }
        else {
          plVar22 = plStack_540;
          plStack_540 = plStack_540 + 1;
        }
        *(int *)*plVar22 = (int)uVar20;
      }
      else {
        if (local_694 == 0) goto LAB_006fa29a;
        local_638 = (char **)*local_6d0;
        plStack_630 = (long *)local_6d0[1];
        local_538 = local_6d0[2];
        local_548._0_4_ = (uint)local_638;
        iVar35 = local_694 + -1;
        uVar18 = (uint)local_548;
        ppcVar49 = local_638;
        plStack_540 = plStack_630;
        if (iVar35 != 0) {
          bVar55 = false;
          uVar17 = (uint)local_548;
          do {
            if (0x2f < uVar17) {
              plStack_540 = plStack_630 + 1;
              ppcVar49 = local_638;
              if (iVar35 != 1) {
                plVar22 = plStack_630 + 2;
                do {
                  plStack_540 = plVar22;
                  plVar22 = plStack_540 + 1;
                  ppcVar49 = local_638;
                } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
              }
              goto LAB_006fac56;
            }
            uVar17 = uVar17 + 8;
            bVar55 = true;
            iVar35 = iVar35 + -1;
            ppcVar49 = local_638;
          } while (iVar35 != 0);
LAB_006fac62:
          local_548 = ppcVar49;
          local_638 = local_548;
          local_548 = (char **)CONCAT44(local_548._4_4_,uVar17);
          uVar18 = uVar17;
          ppcVar49 = local_548;
        }
LAB_006fac6a:
        local_548 = ppcVar49;
        if (uVar18 < 0x30) {
          local_548 = (char **)CONCAT44(local_548._4_4_,uVar18 + 8);
          plVar22 = (long *)(uVar18 + local_538);
        }
        else {
          plVar22 = plStack_540;
          plStack_540 = plStack_540 + 1;
        }
        *(char *)*plVar22 = (char)uVar20;
      }
    }
    else if ((local_644 & 1) == 0) {
      if ((local_644 & 4) == 0) {
        if ((local_644 & 0x200) == 0) {
          if (local_694 != 0) {
            local_638 = (char **)*local_6d0;
            plStack_630 = (long *)local_6d0[1];
            local_538 = local_6d0[2];
            local_548._0_4_ = (uint)local_638;
            iVar35 = local_694 + -1;
            uVar18 = (uint)local_548;
            ppcVar49 = local_638;
            plStack_540 = plStack_630;
            if (iVar35 != 0) {
              bVar55 = false;
              uVar17 = (uint)local_548;
LAB_006f9905:
              if (uVar17 < 0x30) goto code_r0x006f990e;
              plStack_540 = plStack_630 + 1;
              ppcVar49 = local_638;
              if (iVar35 != 1) {
                plVar22 = plStack_630 + 2;
                do {
                  plStack_540 = plVar22;
                  plVar22 = plStack_540 + 1;
                  ppcVar49 = local_638;
                } while (plStack_540 + 1 != plStack_630 + (ulong)(iVar35 - 2) + 3);
              }
LAB_006fa88d:
              local_548 = ppcVar49;
              uVar18 = (uint)local_548;
              local_638 = local_548;
              ppcVar49 = local_548;
              if (bVar55) goto LAB_006fa899;
            }
            goto LAB_006fa8a1;
          }
LAB_006f95f5:
          if ((uint)local_5b0 < 0x30) {
            uVar50 = local_5b0 & 0xffffffff;
            local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
            plVar22 = (long *)(uVar50 + local_5a0);
          }
          else {
            plVar22 = plStack_5a8;
            plStack_5a8 = plStack_5a8 + 1;
          }
          *(int *)*plVar22 = (int)uVar20;
        }
        else {
          if (local_694 != 0) {
            local_638 = (char **)*local_6d0;
            plStack_630 = (long *)local_6d0[1];
            local_538 = local_6d0[2];
            local_548._0_4_ = (uint)local_638;
            iVar35 = local_694 + -1;
            uVar18 = (uint)local_548;
            ppcVar49 = local_638;
            plStack_540 = plStack_630;
            if (iVar35 != 0) {
              bVar55 = false;
              uVar17 = (uint)local_548;
LAB_006fa919:
              if (uVar17 < 0x30) goto code_r0x006fa922;
              plStack_540 = plStack_630 + 1;
              ppcVar49 = local_638;
              if (iVar35 != 1) {
                plVar22 = plStack_630 + 2;
                do {
                  plStack_540 = plVar22;
                  plVar22 = plStack_540 + 1;
                  ppcVar49 = local_638;
                } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
              }
LAB_006fac56:
              local_548 = ppcVar49;
              uVar18 = (uint)local_548;
              local_638 = local_548;
              ppcVar49 = local_548;
              if (bVar55) goto LAB_006fac62;
            }
            goto LAB_006fac6a;
          }
LAB_006fa29a:
          if ((uint)local_5b0 < 0x30) {
            uVar50 = local_5b0 & 0xffffffff;
            local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
            plVar22 = (long *)(uVar50 + local_5a0);
          }
          else {
            plVar22 = plStack_5a8;
            plStack_5a8 = plStack_5a8 + 1;
          }
          *(char *)*plVar22 = (char)uVar20;
        }
      }
      else {
        if (local_694 == 0) goto LAB_006f881b;
        local_638 = (char **)*local_6d0;
        plStack_630 = (long *)local_6d0[1];
        local_538 = local_6d0[2];
        local_548._0_4_ = (uint)local_638;
        iVar35 = local_694 + -1;
        uVar18 = (uint)local_548;
        ppcVar49 = local_638;
        plStack_540 = plStack_630;
        if (iVar35 != 0) {
          bVar55 = false;
          uVar17 = (uint)local_548;
LAB_006faa21:
          if (uVar17 < 0x30) goto code_r0x006faa26;
          plStack_540 = plStack_630 + 1;
          ppcVar49 = local_638;
          if (iVar35 != 1) {
            plVar22 = plStack_630 + 2;
            do {
              plStack_540 = plVar22;
              plVar22 = plStack_540 + 1;
              ppcVar49 = local_638;
            } while (plStack_540 + 1 != plStack_630 + (ulong)(iVar35 - 2) + 3);
          }
LAB_006f97a6:
          local_548 = ppcVar49;
          uVar18 = (uint)local_548;
          local_638 = local_548;
          ppcVar49 = local_548;
          if (bVar55) goto LAB_006f97b2;
        }
LAB_006f97ba:
        local_548 = ppcVar49;
        if (uVar18 < 0x30) {
          local_548 = (char **)CONCAT44(local_548._4_4_,uVar18 + 8);
          plVar22 = (long *)(uVar18 + local_538);
        }
        else {
          plVar22 = plStack_540;
          plStack_540 = plStack_540 + 1;
        }
        puVar26 = (undefined2 *)*plVar22;
LAB_006f883f:
        *puVar26 = (short)uVar20;
      }
    }
    else {
      if (local_694 == 0) goto LAB_006f6611;
      local_638 = (char **)*local_6d0;
      plStack_630 = (long *)local_6d0[1];
      local_538 = local_6d0[2];
      local_548._0_4_ = (uint)local_638;
      iVar35 = local_694 + -1;
      uVar18 = (uint)local_548;
      ppcVar49 = local_638;
      plStack_540 = plStack_630;
      if (iVar35 != 0) {
        bVar55 = false;
        uVar17 = (uint)local_548;
LAB_006f9d02:
        if (uVar17 < 0x30) goto code_r0x006f9d07;
        plStack_540 = plStack_630 + 1;
        local_548 = local_638;
        if (iVar35 != 1) {
          plVar22 = plStack_630 + 2;
          do {
            plStack_540 = plVar22;
            plVar22 = plStack_540 + 1;
            local_548 = local_638;
          } while (plStack_540 + 1 != plStack_630 + (ulong)(iVar35 - 2) + 3);
        }
LAB_006f8a35:
        local_638 = local_548;
        ppcVar49 = local_548;
        if (bVar55) goto LAB_006f7f00;
      }
LAB_006f7f08:
      local_548 = ppcVar49;
      if (uVar18 < 0x30) {
        local_548 = (char **)CONCAT44(local_548._4_4_,uVar18 + 8);
        plVar22 = (long *)(uVar18 + local_538);
      }
      else {
        plVar22 = plStack_540;
        plStack_540 = plStack_540 + 1;
      }
      puVar27 = (undefined8 *)*plVar22;
LAB_006f6635:
      *puVar27 = uVar20;
    }
    local_648 = local_648 + 1;
    ppcVar48 = local_620;
    goto LAB_006f510e;
  }
  uVar17 = local_648;
  ppcVar24 = local_618;
  if (iVar35 == -1) goto switchD_006f555e_default;
LAB_006f7c6d:
  *(undefined8 *)(puVar42 + -8) = 0x6f7c79;
  FUN_007075f0(param_1,uVar39 & 0xff);
  uVar17 = local_648;
  ppcVar24 = local_618;
  goto switchD_006f555e_default;
code_r0x006fa922:
  uVar17 = uVar17 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  ppcVar49 = local_638;
  if (iVar35 == 0) goto LAB_006fac62;
  goto LAB_006fa919;
code_r0x006f990e:
  uVar17 = uVar17 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  ppcVar49 = local_638;
  if (iVar35 == 0) goto LAB_006fa899;
  goto LAB_006f9905;
code_r0x006faa26:
  uVar17 = uVar17 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  ppcVar49 = local_638;
  if (iVar35 == 0) goto LAB_006f97b2;
  goto LAB_006faa21;
code_r0x006f9d07:
  uVar17 = uVar17 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  local_548 = local_638;
  if (iVar35 == 0) goto LAB_006f7f00;
  goto LAB_006f9d02;
code_r0x006faa98:
  uVar34 = uVar34 + 8;
  uVar39 = (ulong)uVar34;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006faaa6;
  goto LAB_006faa93;
code_r0x006f8c7f:
  uVar34 = uVar34 + 8;
  uVar39 = (ulong)uVar34;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f8c8d;
  goto LAB_006f8c7a;
code_r0x006fa067:
  uVar34 = uVar34 + 8;
  uVar39 = (ulong)uVar34;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006fa075;
  goto LAB_006fa062;
code_r0x006f93a6:
  uVar34 = uVar34 + 8;
  uVar39 = (ulong)uVar34;
  bVar55 = true;
  iVar53 = iVar53 + -1;
  if (iVar53 == 0) goto LAB_006f93b4;
  goto LAB_006f93a1;
code_r0x006f8cf1:
  local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
LAB_006f8d02:
  plVar22 = local_678;
  if ((uint)local_618 == 0) {
    if ((local_644 != 0) && ((char **)((long)local_6c0 - *local_678 >> 2) != local_6a0)) {
      *(undefined8 *)(puVar42 + -8) = 0x6f8d44;
      lVar37 = FUN_00710840();
      if (lVar37 != 0) {
        *plVar22 = lVar37;
      }
    }
    local_648 = local_648 + 1;
    local_678 = (long *)0x0;
    ppcVar48 = local_620;
    goto LAB_006f510e;
  }
  goto LAB_006f6de8;
switchD_006f5835_caseD_2:
  if (uVar18 != 0xffffffff) {
    pbVar52 = (byte *)param_1[1];
    if (pbVar52 < param_1[2]) {
      param_1[1] = (char *)(pbVar52 + 1);
      uVar39 = (ulong)*pbVar52;
    }
    else {
      *(undefined8 *)(puVar42 + -8) = 0x6f9280;
      uVar50 = FUN_007067b0(param_1);
      uVar39 = uVar50 & 0xffffffff;
      if ((int)uVar50 == -1) goto LAB_006f6a7f;
    }
    ppcVar48 = (char **)((long)ppcVar49 + 1);
    local_640 = (char **)CONCAT44(local_640._4_4_,(uint)local_640 - (0 < (int)(uint)local_640));
    uVar20 = local_478._0_8_;
    if (((int)uVar39 - 0x2bU & 0xfffffffd) == 0) {
      if (local_478._8_8_ == local_478._0_8_) {
        if ((char *)local_478._8_8_ != (char *)0x0) {
          lVar37 = local_478._8_8_ - (long)local_468;
          *(undefined8 *)(puVar42 + -8) = 0x6f9dbb;
          cVar14 = FUN_00712520(&local_468);
          if (cVar14 == '\0') {
            local_478 = (undefined1  [16])0x0;
          }
          else {
            local_478._8_8_ = local_468 + local_460;
            local_478._0_8_ = local_468 + lVar37 + 1;
            local_468[lVar37] = (char)uVar39;
          }
        }
      }
      else {
        local_478._0_8_ = (char *)(local_478._0_8_ + 1);
        *(char *)uVar20 = (char)uVar39;
      }
      uVar17 = local_648;
      ppcVar24 = local_618;
      if ((uint)local_640 == 0) goto switchD_006f555e_default;
      pbVar52 = (byte *)param_1[1];
      if (pbVar52 < param_1[2]) {
        param_1[1] = (char *)(pbVar52 + 1);
        uVar50 = (ulong)*pbVar52;
        uVar39 = uVar50;
      }
      else {
        *(undefined8 *)(puVar42 + -8) = 0x6f95c1;
        uVar18 = FUN_007067b0(param_1);
        uVar39 = (ulong)uVar18;
        uVar17 = local_648;
        ppcVar24 = local_618;
        if (uVar18 == 0xffffffff) goto switchD_006f555e_default;
        uVar50 = (ulong)(uVar18 & 0xff);
      }
      ppcVar48 = (char **)((long)ppcVar49 + 2);
      pcVar33 = (char *)local_478._0_8_;
      if ((int)(uint)local_640 < 1) {
        local_670 = CONCAT71(local_670._1_7_,1);
        local_628 = (char **)0x1;
      }
      else {
        local_670 = CONCAT71(local_670._1_7_,1);
        local_628 = (char **)0x1;
        local_640 = (char **)CONCAT44(local_640._4_4_,(uint)local_640 + -1);
      }
    }
    else {
      local_628 = (char **)0x0;
      uVar50 = uVar39 & 0xff;
      local_670 = local_670 & 0xffffffffffffff00;
      pcVar33 = (char *)local_478._0_8_;
    }
    iVar35 = *(int *)(local_660[0xe] + uVar50 * 4);
    cVar14 = (char)uVar39;
    if (iVar35 == 0x6e) {
      if ((char *)local_478._8_8_ == pcVar33) {
        *(undefined8 *)(puVar42 + -8) = 0x6fb923;
        FUN_006f4e40(local_478,(int)cVar14);
      }
      else {
        local_478._0_8_ = pcVar33 + 1;
        *pcVar33 = cVar14;
      }
      uVar17 = local_648;
      ppcVar24 = local_618;
      if ((uint)local_640 == 0) goto switchD_006f555e_default;
      pbVar52 = (byte *)param_1[1];
      if (pbVar52 < param_1[2]) {
        param_1[1] = (char *)(pbVar52 + 1);
        uVar39 = (ulong)*pbVar52;
        uVar50 = uVar39;
      }
      else {
        *(undefined8 *)(puVar42 + -8) = 0x6fa71f;
        uVar39 = FUN_007067b0(param_1);
        uVar17 = local_648;
        ppcVar24 = local_618;
        if ((int)uVar39 == -1) goto switchD_006f555e_default;
        uVar50 = uVar39 & 0xff;
      }
      uVar17 = local_648;
      ppcVar24 = local_618;
      if (*(int *)(local_660[0xe] + uVar50 * 4) != 0x61) goto switchD_006f555e_default;
      uVar20 = local_478._0_8_;
      local_640 = (char **)CONCAT44(local_640._4_4_,(uint)local_640 - (0 < (int)(uint)local_640));
      if (local_478._0_8_ == local_478._8_8_) {
        *(undefined8 *)(puVar42 + -8) = 0x6fb0fd;
        FUN_006f4e40(local_478,(int)(char)uVar39);
      }
      else {
        local_478._0_8_ = (char *)(local_478._0_8_ + 1);
        *(char *)uVar20 = (char)uVar39;
      }
      uVar17 = local_648;
      ppcVar24 = local_618;
      if ((uint)local_640 == 0) goto switchD_006f555e_default;
      pbVar52 = (byte *)param_1[1];
      if (pbVar52 < param_1[2]) {
        param_1[1] = (char *)(pbVar52 + 1);
        uVar50 = (ulong)*pbVar52;
        uVar39 = uVar50;
      }
      else {
        *(undefined8 *)(puVar42 + -8) = 0x6fa6fb;
        uVar18 = FUN_007067b0(param_1);
        uVar39 = (ulong)uVar18;
        uVar17 = local_648;
        ppcVar24 = local_618;
        if (uVar18 == 0xffffffff) goto switchD_006f555e_default;
        uVar50 = (ulong)(uVar18 & 0xff);
      }
      ppcVar54 = (char **)((long)ppcVar48 + 2);
      uVar17 = local_648;
      ppcVar24 = local_618;
      if (*(int *)(local_660[0xe] + uVar50 * 4) != 0x6e) goto switchD_006f555e_default;
LAB_006f8920:
      uVar20 = local_478._0_8_;
      if (local_478._0_8_ == local_478._8_8_) {
        *(undefined8 *)(puVar42 + -8) = 0x6fbea7;
        FUN_006f4e40(local_478,(int)(char)uVar39);
      }
      else {
        local_478._0_8_ = (char *)(local_478._0_8_ + 1);
        *(char *)uVar20 = (char)uVar39;
      }
    }
    else {
      if (iVar35 != 0x69) {
        if (((uint)local_640 == 0) || ((int)uVar39 != 0x30)) {
          local_618 = (char **)CONCAT71(local_618._1_7_,0x65);
          cVar14 = '\0';
        }
        else {
          if ((char *)local_478._8_8_ == pcVar33) {
            *(undefined8 *)(puVar42 + -8) = 0x6fb861;
            FUN_006f4e40(local_478,0x30);
          }
          else {
            local_478._0_8_ = pcVar33 + 1;
            *pcVar33 = '0';
          }
          pbVar52 = (byte *)param_1[1];
          if (pbVar52 < param_1[2]) {
            param_1[1] = (char *)(pbVar52 + 1);
            uVar39 = (ulong)*pbVar52;
LAB_006f8db7:
            ppcVar48 = (char **)((long)ppcVar48 + 1);
          }
          else {
            *(undefined8 *)(puVar42 + -8) = 0x6fa2ff;
            uVar18 = FUN_007067b0(param_1);
            uVar39 = (ulong)uVar18;
            if (uVar18 != 0xffffffff) goto LAB_006f8db7;
            local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
          }
          uVar20 = local_478._0_8_;
          if ((int)(uint)local_640 < 1) {
LAB_006fab30:
            if (*(int *)(local_660[0xe] + (uVar39 & 0xff) * 4) == 0x78) {
              if (local_478._8_8_ == local_478._0_8_) {
                *(undefined8 *)(puVar42 + -8) = 0x6fcab0;
                FUN_006f4e40(local_478,(int)(char)uVar39);
              }
              else {
                local_478._0_8_ = (char *)(local_478._0_8_ + 1);
                *(char *)uVar20 = (char)uVar39;
              }
              local_644 = local_644 & 0xffffff7f | 0x800;
              if ((int)uVar39 == -1) {
                *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
              }
              else {
                pbVar52 = (byte *)param_1[1];
                if (pbVar52 < param_1[2]) {
                  param_1[1] = (char *)(pbVar52 + 1);
                  uVar39 = (ulong)*pbVar52;
                }
                else {
                  *(undefined8 *)(puVar42 + -8) = 0x6fca67;
                  uVar18 = FUN_007067b0(param_1);
                  uVar39 = (ulong)uVar18;
                  if (uVar18 == 0xffffffff) {
                    local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
                    goto LAB_006faba4;
                  }
                }
                ppcVar48 = (char **)((long)ppcVar48 + 1);
              }
LAB_006faba4:
              pcVar33 = (char *)local_478._0_8_;
              if ((int)(uint)local_640 < 1) {
                local_618 = (char **)CONCAT71(local_618._1_7_,0x70);
                cVar14 = '\0';
              }
              else {
                local_618 = (char **)CONCAT71(local_618._1_7_,0x70);
                cVar14 = '\0';
                local_640 = (char **)CONCAT44(local_640._4_4_,(uint)local_640 + -1);
              }
              goto LAB_006f8deb;
            }
          }
          else {
            iVar35 = (uint)local_640 + -1;
            local_640 = (char **)CONCAT44(local_640._4_4_,iVar35);
            if (iVar35 != 0) goto LAB_006fab30;
          }
          local_618 = (char **)CONCAT71(local_618._1_7_,0x65);
          cVar14 = '\x01';
          pcVar33 = (char *)local_478._0_8_;
        }
LAB_006f8deb:
        if (pcVar33 != (char *)0x0) {
          local_668 = (char **)((ulong)local_668 & 0xffffffffffffff00);
          local_6a8 = (char **)(CONCAT44(local_6a8._4_4_,local_644) & 0xffffffff00000080);
          local_690 = (char **)CONCAT71(local_690._1_7_,(local_644 & 0x80) != 0);
          local_638 = (char **)((ulong)local_638 & 0xffffffffffffff00);
          local_658 = (char **)(CONCAT44(local_658._4_4_,local_644) & 0xffffffff00000800);
          local_6f0 = (byte *)CONCAT44(local_6f0._4_4_,(int)(char)local_618);
          iVar35 = (uint)local_640;
          local_650 = ppcVar48;
          do {
            uVar18 = (uint)uVar39;
            cVar16 = (char)uVar39;
            if (uVar18 - 0x30 < 10) {
              if (pcVar33 == (char *)local_478._8_8_) {
                lVar37 = (long)pcVar33 - (long)local_468;
                *(undefined8 *)(puVar42 + -8) = 0x6f9fdf;
                cVar14 = FUN_00712520(&local_468);
                if (cVar14 != '\0') {
                  local_478._8_8_ = local_468 + local_460;
                  local_478._0_8_ = local_468 + lVar37 + 1;
                  local_468[lVar37] = cVar16;
                  goto LAB_006f8e66;
                }
                local_478 = (undefined1  [16])0x0;
                if (iVar35 == 0) goto LAB_006fb8c9;
              }
              else {
                local_478._0_8_ = pcVar33 + 1;
                *pcVar33 = cVar16;
LAB_006f8e66:
                if (iVar35 == 0) goto LAB_006fb0a8;
              }
              cVar14 = '\x01';
            }
            else {
              iVar53 = iStack_704;
              if ((char)local_668 == '\0') {
                if (((uint)local_658 == 0) ||
                   ((*(byte *)(local_660[0xd] + 1 + (long)(int)uVar18 * 2) & 0x10) == 0)) {
                  if ((cVar14 == '\0') ||
                     ((char)local_618 != *(char *)(local_660[0xe] + (uVar39 & 0xff) * 4)))
                  goto LAB_006f8ed8;
                  if (pcVar33 == (char *)local_478._8_8_) {
                    uVar50 = (ulong)local_6f0 & 0xffffffff;
                    *(undefined8 *)(puVar42 + -8) = 0x6fb434;
                    FUN_006f4e40(local_478,uVar50);
                    local_668 = (char **)CONCAT71(local_668._1_7_,cVar14);
                    local_638 = (char **)CONCAT71(local_638._1_7_,cVar14);
                    iVar53 = iStack_704;
                  }
                  else {
                    local_668 = (char **)CONCAT71(local_668._1_7_,cVar14);
                    local_478._0_8_ = pcVar33 + 1;
                    local_638 = (char **)CONCAT71(local_638._1_7_,cVar14);
                    *pcVar33 = (char)local_618;
                  }
                }
                else if (pcVar33 == (char *)local_478._8_8_) {
                  cVar14 = '\x01';
                  *(undefined8 *)(puVar42 + -8) = 0x6fc7a4;
                  FUN_006f4e40(local_478,(int)cVar16);
                  iVar53 = iStack_704;
                }
                else {
                  cVar14 = '\x01';
                  local_478._0_8_ = pcVar33 + 1;
                  *pcVar33 = cVar16;
                }
              }
              else if ((pcVar33[-1] == (char)local_618) && ((uVar18 - 0x2b & 0xfffffffd) == 0)) {
                if (pcVar33 == (char *)local_478._8_8_) {
                  *(undefined8 *)(puVar42 + -8) = 0x6fc7b9;
                  FUN_006f4e40(local_478,(int)cVar16);
                  iVar53 = iStack_704;
                }
                else {
                  local_478._0_8_ = pcVar33 + 1;
                  *pcVar33 = cVar16;
                }
              }
              else {
LAB_006f8ed8:
                iVar47 = 0x7fffffff;
                if (0 < iVar35) {
                  iVar47 = iVar35;
                }
                if ((byte)local_638 == '\0') {
                  pbVar52 = local_6e0;
                  if (uVar18 == *local_6e0) {
                    local_640 = (char **)CONCAT71(local_640._1_7_,cVar14);
                    do {
                      pbVar52 = pbVar52 + 1;
                      cVar14 = (char)local_640;
                      if (*pbVar52 == 0) {
                        bVar13 = *local_6e0;
                        goto LAB_006f91fc;
                      }
                      if (iVar47 == 0) goto LAB_006fa73b;
                      pbVar51 = (byte *)param_1[1];
                      if (pbVar51 < param_1[2]) {
                        param_1[1] = (char *)(pbVar51 + 1);
                        uVar39 = (ulong)*pbVar51;
                      }
                      else {
                        *(undefined8 *)(puVar42 + -8) = 0x6f91c6;
                        uVar18 = FUN_007067b0(param_1);
                        uVar39 = (ulong)uVar18;
                        if (uVar18 == 0xffffffff) {
                          local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58)
                                              );
                          cVar14 = (char)local_640;
                          goto LAB_006f91e9;
                        }
                      }
                      local_650 = (char **)((long)local_650 + 1);
                      iVar47 = iVar47 + -1;
                    } while ((uint)*pbVar52 == (uint)uVar39);
                    cVar14 = (char)local_640;
                  }
LAB_006f91e9:
                  if (*pbVar52 != 0) {
LAB_006fa73b:
                    if ((int)local_6a8 == 0) {
LAB_006f8f03:
                      pbVar51 = local_688;
                      if (local_688 != (byte *)0x0) goto LAB_006f8f16;
                    }
                    else {
                      lVar37 = (long)pbVar52 - (long)local_6e0;
                      lVar31 = 0;
                      pbVar51 = local_688;
                      if (lVar37 < 1) {
                        if (pbVar52 == local_6e0) goto LAB_006fa792;
                        goto LAB_006f8f03;
                      }
                      do {
                        if (*pbVar51 != local_6e0[lVar31]) goto LAB_006f8f16;
                        pbVar51 = pbVar51 + 1;
                        lVar31 = (long)pbVar51 - (long)local_688;
                      } while (lVar31 < lVar37);
                      if (lVar31 == lVar37) {
LAB_006fa792:
                        if ((uint)*pbVar51 == (uint)uVar39) {
                          local_640 = (char **)CONCAT71(local_640._1_7_,cVar14);
                          do {
                            pbVar51 = pbVar51 + 1;
                            if (*pbVar51 == 0) {
                              cVar14 = (char)local_640;
                              goto LAB_006f8f1f;
                            }
                            if (iVar47 == 0) {
                              local_640 = (char **)CONCAT44(local_640._4_4_,iVar35);
                              bVar13 = (byte)local_638;
                              goto LAB_006fb1ff;
                            }
                            pbVar52 = (byte *)param_1[1];
                            if (pbVar52 < param_1[2]) {
                              param_1[1] = (char *)(pbVar52 + 1);
                              uVar39 = (ulong)*pbVar52;
                            }
                            else {
                              *(undefined8 *)(puVar42 + -8) = 0x6fa7f6;
                              uVar18 = FUN_007067b0(param_1);
                              uVar39 = (ulong)uVar18;
                              if (uVar18 == 0xffffffff) {
                                local_608 = CONCAT44(local_608._4_4_,
                                                     *(undefined4 *)(in_FS_OFFSET + -0x58));
                                cVar14 = (char)local_640;
                                goto LAB_006f8f16;
                              }
                            }
                            local_650 = (char **)((long)local_650 + 1);
                            iVar47 = iVar47 + -1;
                          } while ((uint)*pbVar51 == (uint)uVar39);
                          cVar14 = (char)local_640;
                        }
                      }
LAB_006f8f16:
                      if (*pbVar51 == 0) {
LAB_006f8f1f:
                        bVar13 = *local_688;
                        ppcVar24 = &local_468;
                        iVar53 = iStack_704;
                        ppcVar49 = ppcStack_700;
                        pbVar52 = local_688;
                        iStack_704 = iVar47;
                        while (ppcStack_700 = ppcVar24, bVar13 != 0) {
                          uVar20 = local_478._0_8_;
                          ppcVar24 = ppcStack_700;
                          local_6f8 = param_1;
                          iVar47 = iStack_704;
                          if (local_478._0_8_ == local_478._8_8_) {
                            if ((byte *)local_478._0_8_ != (byte *)0x0) {
                              local_640 = (char **)(local_478._0_8_ + -(long)local_468);
                              *(undefined8 *)(puVar42 + -8) = 0x6f9a0c;
                              cVar16 = FUN_00712520();
                              ppcVar24 = ppcStack_700;
                              iVar47 = iStack_704;
                              if (cVar16 == '\0') {
                                local_478 = (undefined1  [16])0x0;
                                iVar53 = iStack_704;
                                ppcVar49 = ppcStack_700;
                              }
                              else {
                                local_478._8_8_ = local_468 + local_460;
                                local_478._0_8_ = (byte *)((long)local_640 + (long)local_468) + 1;
                                *(byte *)((long)local_640 + (long)local_468) = bVar13;
                                iVar53 = iStack_704;
                                ppcVar49 = ppcStack_700;
                              }
                            }
                          }
                          else {
                            local_478._0_8_ = (byte *)(local_478._0_8_ + 1);
                            *(byte *)uVar20 = bVar13;
                          }
                          ppcStack_700 = ppcVar49;
                          iStack_704 = iVar53;
                          pbVar51 = pbVar52 + 1;
                          pbVar52 = pbVar52 + 1;
                          param_1 = local_6f8;
                          iVar53 = iStack_704;
                          ppcVar49 = ppcStack_700;
                          iStack_704 = iVar47;
                          bVar13 = *pbVar51;
                        }
                        ppcStack_700 = ppcVar49;
                        if (0 < iVar35) {
                          iVar35 = iStack_704;
                        }
                        goto LAB_006f8f93;
                      }
                    }
                    local_640 = (char **)CONCAT44(local_640._4_4_,iVar35);
                    ppcVar54 = local_650;
                    bVar13 = (byte)local_638;
                    if ((int)uVar39 != -1) {
LAB_006fb1ff:
                      ppcVar54 = (char **)((long)local_650 + -1);
                      *(undefined8 *)(puVar42 + -8) = 0x6fb20f;
                      FUN_007075f0(param_1,uVar39 & 0xff);
                    }
                    goto LAB_006f8fcd;
                  }
                  bVar13 = *local_6e0;
LAB_006f91fc:
                  if (bVar13 != 0) {
                    ppcVar49 = &local_468;
                    pbVar52 = local_6e0;
                    local_640 = param_1;
                    do {
                      uVar20 = local_478._0_8_;
                      if (local_478._0_8_ == local_478._8_8_) {
                        if ((byte *)local_478._0_8_ != (byte *)0x0) {
                          local_638 = (char **)(local_478._0_8_ + -(long)local_468);
                          ppcStack_700 = (char **)CONCAT44(ppcStack_700._4_4_,iVar47);
                          local_6f8 = ppcVar49;
                          *(undefined8 *)(puVar42 + -8) = 0x6f9a83;
                          cVar16 = FUN_00712520();
                          ppcVar49 = local_6f8;
                          iVar47 = (int)ppcStack_700;
                          if (cVar16 == '\0') {
                            local_478 = (undefined1  [16])0x0;
                          }
                          else {
                            local_478._8_8_ = local_468 + local_460;
                            local_478._0_8_ = (byte *)((long)local_638 + (long)local_468) + 1;
                            *(byte *)((long)local_638 + (long)local_468) = bVar13;
                          }
                        }
                      }
                      else {
                        local_478._0_8_ = (byte *)(local_478._0_8_ + 1);
                        *(byte *)uVar20 = bVar13;
                      }
                      bVar13 = pbVar52[1];
                      pbVar52 = pbVar52 + 1;
                      param_1 = local_640;
                    } while (bVar13 != 0);
                  }
                }
                else if (*local_6e0 != 0) goto LAB_006f8f03;
                local_638 = (char **)CONCAT71(local_638._1_7_,1);
                iVar53 = iStack_704;
                if (0 < iVar35) {
                  iVar35 = iVar47;
                }
              }
LAB_006f8f93:
              iStack_704 = iVar53;
              if (iVar35 == 0) {
LAB_006fb0a8:
                local_640 = (char **)CONCAT44(local_640._4_4_,iVar35);
                ppcVar54 = local_650;
                bVar13 = (byte)local_638;
                goto LAB_006f8fcd;
              }
              if ((int)uVar39 == -1) {
                local_640 = (char **)CONCAT44(local_640._4_4_,iVar35);
                *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
                ppcVar54 = local_650;
                bVar13 = (byte)local_638;
                goto LAB_006f8fcd;
              }
            }
            pbVar52 = (byte *)param_1[1];
            if (pbVar52 < param_1[2]) {
              param_1[1] = (char *)(pbVar52 + 1);
              uVar39 = (ulong)*pbVar52;
            }
            else {
              *(undefined8 *)(puVar42 + -8) = 0x6f9088;
              uVar18 = FUN_007067b0(param_1);
              uVar39 = (ulong)uVar18;
              if (uVar18 == 0xffffffff) goto code_r0x006f9094;
            }
            local_650 = (char **)((long)local_650 + 1);
            iVar35 = iVar35 - (uint)(0 < iVar35);
            pcVar33 = (char *)local_478._0_8_;
            if ((char *)local_478._0_8_ == (char *)0x0) break;
          } while( true );
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
        local_648 = 0xffffffff;
        uVar17 = local_648;
        ppcVar24 = local_618;
        goto switchD_006f555e_default;
      }
      if ((char *)local_478._8_8_ == pcVar33) {
        if (pcVar33 != (char *)0x0) {
          lVar37 = (long)pcVar33 - (long)local_468;
          *(undefined8 *)(puVar42 + -8) = 0x6fcb5f;
          cVar16 = FUN_00712520(&local_468);
          if (cVar16 == '\0') {
            local_478 = (undefined1  [16])0x0;
          }
          else {
            local_478._8_8_ = local_468 + local_460;
            local_478._0_8_ = local_468 + lVar37 + 1;
            local_468[lVar37] = cVar14;
          }
        }
      }
      else {
        local_478._0_8_ = pcVar33 + 1;
        *pcVar33 = cVar14;
      }
      uVar17 = local_648;
      ppcVar24 = local_618;
      if ((uint)local_640 == 0) goto switchD_006f555e_default;
      pbVar52 = (byte *)param_1[1];
      if (pbVar52 < param_1[2]) {
        param_1[1] = (char *)(pbVar52 + 1);
        uVar39 = (ulong)*pbVar52;
        uVar50 = uVar39;
      }
      else {
        *(undefined8 *)(puVar42 + -8) = 0x6fa247;
        uVar39 = FUN_007067b0(param_1);
        uVar17 = local_648;
        ppcVar24 = local_618;
        if ((int)uVar39 == -1) goto switchD_006f555e_default;
        uVar50 = uVar39 & 0xff;
      }
      uVar17 = local_648;
      ppcVar24 = local_618;
      if (*(int *)(local_660[0xe] + uVar50 * 4) != 0x6e) goto switchD_006f555e_default;
      uVar20 = local_478._0_8_;
      local_640 = (char **)CONCAT44(local_640._4_4_,(uint)local_640 - (0 < (int)(uint)local_640));
      if (local_478._0_8_ == local_478._8_8_) {
        *(undefined8 *)(puVar42 + -8) = 0x6fb843;
        FUN_006f4e40(local_478,(int)(char)uVar39);
      }
      else {
        local_478._0_8_ = (char *)(local_478._0_8_ + 1);
        *(char *)uVar20 = (char)uVar39;
      }
      uVar17 = local_648;
      ppcVar24 = local_618;
      if ((uint)local_640 == 0) goto switchD_006f555e_default;
      pbVar52 = (byte *)param_1[1];
      if (pbVar52 < param_1[2]) {
        param_1[1] = (char *)(pbVar52 + 1);
        uVar50 = (ulong)*pbVar52;
        uVar39 = uVar50;
      }
      else {
        *(undefined8 *)(puVar42 + -8) = 0x6fa260;
        uVar18 = FUN_007067b0(param_1);
        uVar39 = (ulong)uVar18;
        uVar17 = local_648;
        ppcVar24 = local_618;
        if (uVar18 == 0xffffffff) goto switchD_006f555e_default;
        uVar50 = (ulong)(uVar18 & 0xff);
      }
      ppcVar54 = (char **)((long)ppcVar48 + 2);
      uVar17 = local_648;
      ppcVar24 = local_618;
      if (*(int *)(local_660[0xe] + uVar50 * 4) != 0x66) goto switchD_006f555e_default;
      uVar20 = local_478._0_8_;
      local_640 = (char **)CONCAT44(local_640._4_4_,(uint)local_640 - (0 < (int)(uint)local_640));
      if (local_478._0_8_ == local_478._8_8_) {
        *(undefined8 *)(puVar42 + -8) = 0x6faf47;
        FUN_006f4e40(local_478,(int)(char)uVar39);
      }
      else {
        local_478._0_8_ = (char *)(local_478._0_8_ + 1);
        *(char *)uVar20 = (char)uVar39;
      }
      if ((uint)local_640 != 0) {
        pbVar52 = (byte *)param_1[1];
        if (pbVar52 < param_1[2]) {
          param_1[1] = (char *)(pbVar52 + 1);
          uVar50 = (ulong)*pbVar52;
          uVar39 = uVar50;
        }
        else {
          *(undefined8 *)(puVar42 + -8) = 0x6faee7;
          uVar18 = FUN_007067b0(param_1);
          uVar39 = (ulong)uVar18;
          if (uVar18 == 0xffffffff) {
            local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
            goto LAB_006f611e;
          }
          uVar50 = (ulong)(uVar18 & 0xff);
        }
        if (*(int *)(local_660[0xe] + uVar50 * 4) == 0x69) {
          uVar20 = local_478._0_8_;
          local_640 = (char **)CONCAT44(local_640._4_4_,(uint)local_640 - (0 < (int)(uint)local_640)
                                       );
          if (local_478._0_8_ == local_478._8_8_) {
            *(undefined8 *)(puVar42 + -8) = 0x6fbe56;
            FUN_006f4e40(local_478,(int)(char)uVar39);
          }
          else {
            local_478._0_8_ = (char *)(local_478._0_8_ + 1);
            *(char *)uVar20 = (char)uVar39;
          }
          uVar17 = local_648;
          ppcVar24 = local_618;
          if ((uint)local_640 != 0) {
            pbVar52 = (byte *)param_1[1];
            if (pbVar52 < param_1[2]) {
              param_1[1] = (char *)(pbVar52 + 1);
              uVar39 = (ulong)*pbVar52;
              uVar50 = uVar39;
            }
            else {
              *(undefined8 *)(puVar42 + -8) = 0x6fbe31;
              uVar39 = FUN_007067b0(param_1);
              uVar17 = local_648;
              ppcVar24 = local_618;
              if ((int)uVar39 == -1) goto switchD_006f555e_default;
              uVar50 = uVar39 & 0xff;
            }
            uVar17 = local_648;
            ppcVar24 = local_618;
            if (*(int *)(local_660[0xe] + uVar50 * 4) == 0x6e) {
              uVar20 = local_478._0_8_;
              local_640 = (char **)CONCAT44(local_640._4_4_,
                                            (uint)local_640 - (0 < (int)(uint)local_640));
              if (local_478._0_8_ == local_478._8_8_) {
                *(undefined8 *)(puVar42 + -8) = 0x6fbe1c;
                FUN_006f4e40(local_478,(int)(char)uVar39);
              }
              else {
                local_478._0_8_ = (char *)(local_478._0_8_ + 1);
                *(char *)uVar20 = (char)uVar39;
              }
              uVar17 = local_648;
              ppcVar24 = local_618;
              if ((uint)local_640 != 0) {
                pbVar52 = (byte *)param_1[1];
                if (pbVar52 < param_1[2]) {
                  param_1[1] = (char *)(pbVar52 + 1);
                  uVar39 = (ulong)*pbVar52;
                }
                else {
                  *(undefined8 *)(puVar42 + -8) = 0x6fbdf4;
                  uVar39 = FUN_007067b0(param_1);
                  uVar17 = local_648;
                  ppcVar24 = local_618;
                  if ((int)uVar39 == -1) goto switchD_006f555e_default;
                }
                uVar17 = local_648;
                ppcVar24 = local_618;
                if (*(int *)(local_660[0xe] + (uVar39 & 0xff) * 4) == 0x69) {
                  uVar20 = local_478._0_8_;
                  local_640 = (char **)CONCAT44(local_640._4_4_,
                                                (uint)local_640 - (0 < (int)(uint)local_640));
                  if (local_478._0_8_ == local_478._8_8_) {
                    *(undefined8 *)(puVar42 + -8) = 0x6fbddf;
                    FUN_006f4e40(local_478,(int)(char)uVar39);
                  }
                  else {
                    local_478._0_8_ = (char *)(local_478._0_8_ + 1);
                    *(char *)uVar20 = (char)uVar39;
                  }
                  uVar17 = local_648;
                  ppcVar24 = local_618;
                  if ((uint)local_640 != 0) {
                    pbVar52 = (byte *)param_1[1];
                    if (pbVar52 < param_1[2]) {
                      param_1[1] = (char *)(pbVar52 + 1);
                      uVar39 = (ulong)*pbVar52;
                    }
                    else {
                      *(undefined8 *)(puVar42 + -8) = 0x6fbdb7;
                      uVar39 = FUN_007067b0(param_1);
                      uVar17 = local_648;
                      ppcVar24 = local_618;
                      if ((int)uVar39 == -1) goto switchD_006f555e_default;
                    }
                    uVar17 = local_648;
                    ppcVar24 = local_618;
                    if (*(int *)(local_660[0xe] + (uVar39 & 0xff) * 4) == 0x74) {
                      uVar20 = local_478._0_8_;
                      local_640 = (char **)CONCAT44(local_640._4_4_,
                                                    (uint)local_640 - (0 < (int)(uint)local_640));
                      if (local_478._0_8_ == local_478._8_8_) {
                        *(undefined8 *)(puVar42 + -8) = 0x6fbda2;
                        FUN_006f4e40(local_478,(int)(char)uVar39);
                      }
                      else {
                        local_478._0_8_ = (char *)(local_478._0_8_ + 1);
                        *(char *)uVar20 = (char)uVar39;
                      }
                      uVar17 = local_648;
                      ppcVar24 = local_618;
                      if ((uint)local_640 != 0) {
                        pbVar52 = (byte *)param_1[1];
                        if (pbVar52 < param_1[2]) {
                          param_1[1] = (char *)(pbVar52 + 1);
                          uVar39 = (ulong)*pbVar52;
                        }
                        else {
                          *(undefined8 *)(puVar42 + -8) = 0x6fbd77;
                          uVar18 = FUN_007067b0(param_1);
                          uVar39 = (ulong)uVar18;
                          uVar17 = local_648;
                          ppcVar24 = local_618;
                          if (uVar18 == 0xffffffff) goto switchD_006f555e_default;
                        }
                        ppcVar54 = (char **)((long)ppcVar48 + 7);
                        uVar17 = local_648;
                        ppcVar24 = local_618;
                        if (*(int *)(local_660[0xe] + (uVar39 & 0xff) * 4) == 0x79)
                        goto LAB_006f8920;
                      }
                    }
                  }
                }
              }
            }
          }
          goto switchD_006f555e_default;
        }
        *(undefined8 *)(puVar42 + -8) = 0x6fac44;
        FUN_007075f0(param_1,uVar39 & 0xff);
      }
    }
LAB_006f611e:
    puVar43 = (undefined1 *)local_478._0_8_;
    if (local_478._0_8_ != local_478._8_8_) goto LAB_006f6132;
    if ((undefined1 *)local_478._0_8_ != (undefined1 *)0x0) goto LAB_006f9029;
    goto LAB_006fa36e;
  }
LAB_006f6a75:
  *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006f6a7f:
  uVar17 = 0xffffffff;
  ppcVar24 = local_618;
  if (local_648 != 0) {
    uVar17 = local_648;
  }
  goto switchD_006f555e_default;
code_r0x006f9094:
  local_640 = (char **)CONCAT44(local_640._4_4_,iVar35);
  local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
  ppcVar54 = local_650;
  bVar13 = (byte)local_638;
LAB_006f8fcd:
  if ((undefined1 *)local_478._0_8_ == (undefined1 *)0x0) {
LAB_006fb8c9:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    local_648 = 0xffffffff;
    uVar17 = local_648;
    ppcVar24 = local_618;
    goto switchD_006f555e_default;
  }
  puVar43 = (undefined1 *)local_478._0_8_;
  uVar17 = local_648;
  ppcVar24 = local_618;
  if ((local_644 & 0x400) != 0) {
    if ((uint)local_658 != 0) {
      ppcVar49 = (char **)(local_478._0_8_ + -(long)local_468);
      if (ppcVar49 == local_628) goto switchD_006f555e_default;
      goto LAB_006fbebf;
    }
    if (((char **)(local_478._0_8_ + -(long)local_468) != local_628) && ((bVar13 & 1) == 0))
    goto LAB_006f9019;
    *(undefined8 *)(puVar42 + -8) = 0x6fbf0d;
    local_670 = FUN_007712d0("to_inpunct");
    if (local_670 == 0) goto LAB_006fc008;
    if ((int)uVar39 == -1) {
      *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
    }
    else {
      pbVar52 = (byte *)param_1[1];
      if (pbVar52 < param_1[2]) {
        param_1[1] = (char *)(pbVar52 + 1);
        uVar39 = (ulong)*pbVar52;
      }
      else {
        *(undefined8 *)(puVar42 + -8) = 0x6fc705;
        uVar18 = FUN_007067b0(param_1);
        uVar39 = (ulong)uVar18;
        if (uVar18 == 0xffffffff) {
          local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
          goto LAB_006fbf45;
        }
      }
      ppcVar54 = (char **)((long)ppcVar54 + 1);
    }
LAB_006fbf45:
    uVar50 = local_670;
    *(undefined8 *)(puVar42 + -8) = 0x6fbf5d;
    uVar19 = FUN_00771360(0x2e,uVar50);
    uStack_5b8 = 0;
    local_638 = (char **)CONCAT71(local_638._1_7_,
                                  (char **)(local_478._0_8_ - (long)local_468) == local_628);
    local_650 = apcStack_48d;
    uStack_56c = uVar19;
    *(undefined8 *)(puVar42 + -8) = 0x6fbfa5;
    lVar37 = FUN_00756c20(apcStack_48d,uVar19,&uStack_5b8);
    pbVar52 = local_6e0;
    if (lVar37 != -1) {
      *(undefined1 *)((long)apcStack_48d + lVar37) = 0;
      *(undefined8 *)(puVar42 + -8) = 0x6fbfc3;
      lVar37 = thunk_FUN_007129d0(pbVar52);
      ppcVar49 = local_650;
      pbVar52 = local_6e0;
      bVar55 = false;
      if ((byte *)(lVar37 + (long)local_628) == (byte *)(local_478._0_8_ - (long)local_468)) {
        *(undefined8 *)(puVar42 + -8) = 0x6fbff6;
        iVar35 = thunk_FUN_00712780(pbVar52,ppcVar49);
        bVar55 = iVar35 == 0;
      }
      bVar15 = bVar55 | (byte)local_638;
LAB_006fc004:
      if (bVar15 != 0) {
        ppcVar49 = (char **)0x0;
        local_650 = (char **)CONCAT71(local_650._1_7_,(byte)local_690);
        local_638 = (char **)&local_548;
        local_658 = local_598;
        local_6f0 = abStack_49e;
        do {
          uVar50 = local_670;
          ppcStack_700 = (char **)((long)ppcVar49 * 0x11 + (long)local_638);
          local_6a8 = (char **)CONCAT44(local_6a8._4_4_,(int)ppcVar49);
          local_6f8 = ppcVar49;
          if (ppcVar49 == (char **)0xa) {
            *(undefined8 *)(puVar42 + -8) = 0x6fc2a2;
            iStack_570 = FUN_00771360(0x2c,uVar50);
            ppcVar49 = ppcStack_700;
            uStack_5b8 = 0;
            local_650 = (char **)CONCAT71(local_650._1_7_,(byte)local_650 & iStack_570 != 0);
            uVar18 = *(uint *)(local_658 + 5);
            *(undefined8 *)(puVar42 + -8) = 0x6fc2d3;
            lVar37 = FUN_00756c20(ppcVar49,uVar18,&uStack_5b8);
            pbVar52 = local_688;
            if (lVar37 != -1) goto LAB_006fc0e7;
            ppcVar49 = local_6f8;
            if ((byte)local_650 != '\0') {
              local_6a8 = local_6f8;
              *(undefined8 *)(puVar42 + -8) = 0x6fc304;
              uVar50 = thunk_FUN_007129d0(pbVar52);
              ppcVar49 = local_6a8;
              if (uVar50 < 0x11) {
                pbVar52 = local_688;
                pbVar51 = local_6f0;
                for (uVar50 = (ulong)((int)uVar50 + 1); uVar50 != 0; uVar50 = uVar50 - 1) {
                  *pbVar51 = *pbVar52;
                  pbVar52 = pbVar52 + (ulong)bVar56 * -2 + 1;
                  pbVar51 = pbVar51 + (ulong)bVar56 * -2 + 1;
                }
              }
              else {
                local_650 = (char **)((ulong)local_650 & 0xffffffffffffff00);
              }
            }
          }
          else {
            *(undefined8 *)(puVar42 + -8) = 0x6fc0ac;
            uVar18 = FUN_00771360((int)ppcVar49 + 0x30,uVar50);
            ppcVar49 = ppcStack_700;
            uStack_5b8 = 0;
            *(uint *)((long)local_658 + (long)local_6f8 * 4) = uVar18;
            *(undefined8 *)(puVar42 + -8) = 0x6fc0d6;
            lVar37 = FUN_00756c20(ppcVar49,uVar18,&uStack_5b8);
            if (lVar37 == -1) goto LAB_006fc008;
LAB_006fc0e7:
            *(undefined1 *)((long)&local_548 + lVar37 + (long)(int)local_6a8 * 0x11) = 0;
            ppcVar49 = local_6f8;
          }
          ppcVar49 = (char **)((long)ppcVar49 + 1);
        } while (ppcVar49 != (char **)0xb);
        local_6f8 = (char **)CONCAT44(local_6f8._4_4_,(int)(char)local_618);
LAB_006fc11d:
        uVar20 = local_478._0_8_;
        if ((char *)local_478._0_8_ != (char *)0x0) {
          if ((char)local_668 == '\0') {
            if ((local_628 < (char **)(local_478._0_8_ + -(long)local_468)) &&
               ((char)local_618 == *(char *)(local_660[0xe] + (uVar39 & 0xff) * 4))) {
              if (local_478._8_8_ == local_478._0_8_) {
                uVar50 = (ulong)local_6f8 & 0xffffffff;
                bVar13 = 1;
                *(undefined8 *)(puVar42 + -8) = 0x6fc686;
                FUN_006f4e40(local_478,uVar50);
                local_668 = (char **)CONCAT71(local_668._1_7_,1);
              }
              else {
                local_668 = (char **)CONCAT71(local_668._1_7_,1);
                bVar13 = 1;
                local_478._0_8_ = (char *)(local_478._0_8_ + 1);
                *(char *)uVar20 = (char)local_618;
              }
              goto LAB_006fc3c9;
            }
LAB_006fc14a:
            local_670 = CONCAT71(local_670._1_7_,bVar13);
            iVar35 = 0x7fffffff;
            if (0 < (int)(uint)local_640) {
              iVar35 = (uint)local_640;
            }
            local_650 = (char **)((ulong)local_650 & 0xffffffff00000000);
            local_6a8 = (char **)CONCAT44(local_6a8._4_4_,iVar35);
            ppcVar49 = local_638;
            do {
              local_6f0 = (byte *)((long)ppcVar54 - (long)ppcVar49);
              iVar35 = (int)local_6a8;
              local_658 = ppcVar49;
              while (ppcVar54 = (char **)((long)ppcVar49 + (long)local_6f0),
                    (uint)*(byte *)ppcVar49 == (uint)uVar39) {
                ppcVar49 = (char **)((long)ppcVar49 + 1);
                if (*(byte *)ppcVar49 == 0) {
                  bVar13 = (byte)local_670;
                  goto LAB_006fc38b;
                }
                if (iVar35 == 0) {
                  ppcVar24 = local_658;
                  if (local_658 < ppcVar49) goto LAB_006fc426;
                  goto LAB_006fc225;
                }
                pbVar52 = (byte *)param_1[1];
                if (pbVar52 < param_1[2]) {
                  param_1[1] = (char *)(pbVar52 + 1);
                  uVar39 = (ulong)*pbVar52;
                }
                else {
                  *(undefined8 *)(puVar42 + -8) = 0x6fc1f0;
                  uVar18 = FUN_007067b0(param_1);
                  uVar39 = (ulong)uVar18;
                  if (uVar18 == 0xffffffff) {
                    local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
                    break;
                  }
                }
                iVar35 = iVar35 + -1;
              }
              if (*(byte *)ppcVar49 == 0) goto LAB_006fc374;
              ppcVar24 = local_658;
              if (local_658 < ppcVar49) {
                ppcVar48 = ppcVar49;
                if ((int)uVar39 != -1) {
LAB_006fc426:
                  ppcVar54 = (char **)((long)ppcVar54 + -1);
                  local_658 = param_1;
                  *(undefined8 *)(puVar42 + -8) = 0x6fc43d;
                  FUN_007075f0(param_1,uVar39 & 0xff);
                  ppcVar48 = ppcVar49;
                  param_1 = local_658;
                }
                while (ppcVar49 = (char **)((long)ppcVar49 + -1), ppcVar24 != ppcVar49) {
                  bVar13 = *(byte *)ppcVar49;
                  *(undefined8 *)(puVar42 + -8) = 0x6fc354;
                  FUN_007075f0(param_1,bVar13);
                }
                uVar39 = (ulong)*(byte *)ppcVar24;
                ppcVar54 = (char **)((byte *)((long)ppcVar54 + (1 - (long)ppcVar48)) +
                                    (long)ppcVar24);
              }
LAB_006fc225:
              iVar35 = (int)local_650 + 1;
              local_650 = (char **)CONCAT44(local_650._4_4_,iVar35);
              ppcVar49 = (char **)((long)ppcVar24 + 0x11);
            } while (iVar35 != 0xc);
            goto LAB_006fc245;
          }
          if ((*(char *)(local_478._0_8_ + -1) != (char)local_618) ||
             (((int)uVar39 - 0x2bU & 0xfffffffd) != 0)) goto LAB_006fc14a;
          if (local_478._8_8_ == local_478._0_8_) {
            *(undefined8 *)(puVar42 + -8) = 0x6fc669;
            FUN_006f4e40(local_478,(int)(char)uVar39);
          }
          else {
            local_478._0_8_ = (char *)(local_478._0_8_ + 1);
            *(char *)uVar20 = (char)uVar39;
          }
          goto LAB_006fc3c9;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
        local_648 = 0xffffffff;
        uVar17 = local_648;
        ppcVar24 = local_618;
        goto switchD_006f555e_default;
      }
      goto LAB_006fc008;
    }
    *(undefined8 *)(puVar42 + -8) = 0x6fc6b4;
    uVar50 = thunk_FUN_007129d0(pbVar52);
    if (uVar50 < 0x11) {
      pbVar52 = local_6e0;
      ppcVar49 = local_650;
      for (uVar45 = (ulong)((int)uVar50 + 1); uVar45 != 0; uVar45 = uVar45 - 1) {
        *(byte *)ppcVar49 = *pbVar52;
        pbVar52 = pbVar52 + (ulong)bVar56 * -2 + 1;
        ppcVar49 = (char **)((long)ppcVar49 + (ulong)bVar56 * -2 + 1);
      }
      bVar15 = (byte *)(local_478._0_8_ + -(long)local_468) == (byte *)((long)local_628 + uVar50) |
               (byte)local_638;
      goto LAB_006fc004;
    }
    goto LAB_006fc00f;
  }
  ppcVar49 = (char **)(local_478._0_8_ + -(long)local_468);
  if (ppcVar49 == local_628) goto switchD_006f555e_default;
  if ((uint)local_658 != 0) {
LAB_006fbebf:
    if ((char **)(long)(char)((byte)local_670 + '\x02') == ppcVar49) goto switchD_006f555e_default;
  }
LAB_006f9019:
  if ((undefined1 *)local_478._8_8_ == puVar43) {
LAB_006f9029:
    lVar37 = (long)puVar43 - (long)local_468;
    *(undefined8 *)(puVar42 + -8) = 0x6f903f;
    cVar14 = FUN_00712520(&local_468);
    if (cVar14 == '\0') {
      local_478 = (undefined1  [16])0x0;
      goto LAB_006fa36e;
    }
    local_478._8_8_ = local_468 + local_460;
    local_478._0_8_ = local_468 + lVar37 + 1;
    local_468[lVar37] = '\0';
  }
  else {
LAB_006f6132:
    local_478._0_8_ = puVar43 + 1;
    *puVar43 = 0;
  }
  pcVar33 = local_468;
  if (local_478._0_8_ == 0) {
LAB_006fa36e:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    local_648 = 0xffffffff;
    uVar17 = local_648;
    ppcVar24 = local_618;
    goto switchD_006f555e_default;
  }
  uVar18 = local_644 & 0x80;
  uVar17 = local_644 & 8;
  if ((local_644 & 2) == 0) {
LAB_006f92a3:
    if ((local_644 & 3) == 0) {
      *(undefined8 *)(puVar42 + -8) = 0x6fa390;
      uVar19 = FUN_00791dc0(pcVar33,&local_5f0);
      Var5 = in_ST0;
      Var6 = in_ST1;
      Var7 = in_ST2;
      Var8 = in_ST3;
      Var9 = in_ST4;
      Var10 = in_ST5;
      Var11 = in_ST6;
      if (uVar17 == 0) {
        uVar17 = local_648;
        ppcVar24 = local_618;
        if (local_5f0 == local_468) goto switchD_006f555e_default;
        if (local_694 == 0) {
          if ((uint)local_5b0 < 0x30) {
            uVar50 = local_5b0 & 0xffffffff;
            local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
            plVar22 = (long *)(uVar50 + local_5a0);
          }
          else {
            plVar22 = plStack_5a8;
            plStack_5a8 = plStack_5a8 + 1;
          }
          puVar29 = (undefined4 *)*plVar22;
        }
        else {
          local_618 = (char **)*local_6d0;
          plStack_610 = (long *)local_6d0[1];
          local_538 = local_6d0[2];
          local_548._0_4_ = (uint)local_618;
          iVar35 = local_694 + -1;
          uVar18 = (uint)local_548;
          ppcVar49 = local_618;
          plStack_540 = plStack_610;
          if (iVar35 != 0) {
            bVar55 = false;
LAB_006fbc64:
            if ((uint)local_548 < 0x30) goto code_r0x006fbc69;
            plStack_540 = plStack_610 + 1;
            if (iVar35 != 1) {
              plVar22 = plStack_610 + 2;
              do {
                plStack_540 = plVar22;
                plVar22 = plStack_540 + 1;
              } while (plStack_540 + 1 != plStack_610 + (ulong)(iVar35 - 2) + 3);
            }
            ppcVar49 = local_618;
            if (bVar55) {
LAB_006fbc99:
              local_548._4_4_ = (undefined4)((ulong)local_618 >> 0x20);
              uVar18 = (uint)local_548;
              ppcVar49 = local_548;
            }
          }
          local_548 = ppcVar49;
          if (uVar18 < 0x30) {
            local_548 = (char **)CONCAT44(local_548._4_4_,uVar18 + 8);
            plVar22 = (long *)(uVar18 + local_538);
          }
          else {
            plVar22 = plStack_540;
            plStack_540 = plStack_540 + 1;
          }
          puVar29 = (undefined4 *)*plVar22;
        }
        *puVar29 = uVar19;
        goto LAB_006f61f0;
      }
    }
    else {
      *(undefined8 *)(puVar42 + -8) = 0x6f92bc;
      uVar20 = FUN_00791e00();
      Var5 = in_ST0;
      Var6 = in_ST1;
      Var7 = in_ST2;
      Var8 = in_ST3;
      Var9 = in_ST4;
      Var10 = in_ST5;
      Var11 = in_ST6;
      if (uVar17 == 0) {
        uVar17 = local_648;
        ppcVar24 = local_618;
        if (local_5f0 == local_468) goto switchD_006f555e_default;
        if (local_694 == 0) {
          if ((uint)local_5b0 < 0x30) {
            uVar50 = local_5b0 & 0xffffffff;
            local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
            plVar22 = (long *)(uVar50 + local_5a0);
          }
          else {
            plVar22 = plStack_5a8;
            plStack_5a8 = plStack_5a8 + 1;
          }
          puVar27 = (undefined8 *)*plVar22;
        }
        else {
          local_618 = (char **)*local_6d0;
          plStack_610 = (long *)local_6d0[1];
          local_538 = local_6d0[2];
          local_548._0_4_ = (uint)local_618;
          iVar35 = local_694 + -1;
          uVar18 = (uint)local_548;
          ppcVar49 = local_618;
          plStack_540 = plStack_610;
          if (iVar35 != 0) {
            bVar55 = false;
LAB_006fbafe:
            if ((uint)local_548 < 0x30) goto code_r0x006fbb03;
            plStack_540 = plStack_610 + 1;
            if (iVar35 != 1) {
              plVar22 = plStack_610 + 2;
              do {
                plStack_540 = plVar22;
                plVar22 = plStack_540 + 1;
              } while (plStack_540 + 1 != plStack_610 + (ulong)(iVar35 - 2) + 3);
            }
            ppcVar49 = local_618;
            if (bVar55) {
LAB_006fbb2c:
              local_548._4_4_ = (undefined4)((ulong)local_618 >> 0x20);
              uVar18 = (uint)local_548;
              ppcVar49 = local_548;
            }
          }
          local_548 = ppcVar49;
          if (uVar18 < 0x30) {
            local_548 = (char **)CONCAT44(local_548._4_4_,uVar18 + 8);
            plVar22 = (long *)(uVar18 + local_538);
          }
          else {
            plVar22 = plStack_540;
            plStack_540 = plStack_540 + 1;
          }
          puVar27 = (undefined8 *)*plVar22;
        }
        *puVar27 = uVar20;
LAB_006f61f0:
        uVar17 = local_648;
        ppcVar24 = local_618;
        if (local_5f0 == local_468) goto switchD_006f555e_default;
        local_648 = local_648 + 1;
        local_618 = (char **)((ulong)local_618 & 0xffffffff00000000);
        ppcVar48 = local_620;
        goto LAB_006f510e;
      }
    }
  }
  else if (local_6e4 == 0) {
    if (local_6e8 == 0) goto LAB_006f92a3;
    *(undefined8 *)(puVar42 + -8) = 0x6f6198;
    FUN_00791e40(pcVar33,&local_5f0);
    Var5 = in_ST1;
    Var6 = in_ST2;
    Var7 = in_ST3;
    Var8 = in_ST4;
    Var9 = in_ST5;
    Var10 = in_ST6;
    Var11 = in_ST7;
    if (uVar17 == 0) {
      uVar17 = local_648;
      ppcVar24 = local_618;
      if (local_5f0 == local_468) goto switchD_006f555e_default;
      if (local_694 == 0) {
        if ((uint)local_5b0 < 0x30) {
          uVar50 = local_5b0 & 0xffffffff;
          local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
          plVar22 = (long *)(uVar50 + local_5a0);
        }
        else {
          plVar22 = plStack_5a8;
          plStack_5a8 = plStack_5a8 + 1;
        }
        pVar23 = (unkbyte10 *)*plVar22;
      }
      else {
        local_618 = (char **)*local_6d0;
        plStack_610 = (long *)local_6d0[1];
        local_538 = local_6d0[2];
        local_548._0_4_ = (uint)local_618;
        iVar35 = local_694 + -1;
        uVar18 = (uint)local_548;
        ppcVar49 = local_618;
        plStack_540 = plStack_610;
        if (iVar35 != 0) {
          bVar55 = false;
LAB_006fc8e1:
          if ((uint)local_548 < 0x30) goto code_r0x006fc8e6;
          plStack_540 = plStack_610 + 1;
          if (iVar35 != 1) {
            plVar22 = plStack_610 + 2;
            do {
              plStack_540 = plVar22;
              plVar22 = plStack_540 + 1;
            } while (plStack_540 + 1 != plStack_610 + (ulong)(iVar35 - 2) + 3);
          }
          ppcVar49 = local_618;
          if (bVar55) {
LAB_006fc90f:
            local_548._4_4_ = (undefined4)((ulong)local_618 >> 0x20);
            uVar18 = (uint)local_548;
            ppcVar49 = local_548;
          }
        }
        local_548 = ppcVar49;
        if (uVar18 < 0x30) {
          local_548 = (char **)CONCAT44(local_548._4_4_,uVar18 + 8);
          plVar22 = (long *)(uVar18 + local_538);
        }
        else {
          plVar22 = plStack_540;
          plStack_540 = plStack_540 + 1;
        }
        pVar23 = (unkbyte10 *)*plVar22;
      }
      *pVar23 = in_ST0;
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      in_ST6 = in_ST7;
      goto LAB_006f61f0;
    }
  }
  else {
    *(undefined8 *)(puVar42 + -8) = 0x6fa968;
    uVar20 = FUN_007920d0(pcVar33,&local_5f0,uVar18);
    Var5 = in_ST0;
    Var6 = in_ST1;
    Var7 = in_ST2;
    Var8 = in_ST3;
    Var9 = in_ST4;
    Var10 = in_ST5;
    Var11 = in_ST6;
    if (uVar17 == 0) {
      uVar17 = local_648;
      ppcVar24 = local_618;
      if (local_5f0 == local_468) goto switchD_006f555e_default;
      if (local_694 == 0) {
        if ((uint)local_5b0 < 0x30) {
          uVar50 = local_5b0 & 0xffffffff;
          local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
          plVar22 = (long *)(uVar50 + local_5a0);
        }
        else {
          plVar22 = plStack_5a8;
          plStack_5a8 = plStack_5a8 + 1;
        }
        puVar27 = (undefined8 *)*plVar22;
      }
      else {
        local_618 = (char **)*local_6d0;
        plStack_610 = (long *)local_6d0[1];
        local_538 = local_6d0[2];
        local_548._0_4_ = (uint)local_618;
        iVar35 = local_694 + -1;
        uVar18 = (uint)local_548;
        ppcVar49 = local_618;
        plStack_540 = plStack_610;
        if (iVar35 != 0) {
          bVar55 = false;
LAB_006fba25:
          if ((uint)local_548 < 0x30) goto code_r0x006fba2a;
          plStack_540 = plStack_610 + 1;
          if (iVar35 != 1) {
            plVar22 = plStack_610 + 2;
            do {
              plStack_540 = plVar22;
              plVar22 = plStack_540 + 1;
            } while (plStack_540 + 1 != plStack_610 + (ulong)(iVar35 - 2) + 3);
          }
          ppcVar49 = local_618;
          if (!bVar55) goto LAB_006fba40;
LAB_006fba38:
          local_548._4_4_ = (undefined4)((ulong)local_618 >> 0x20);
          uVar18 = (uint)local_548;
          ppcVar49 = local_548;
        }
LAB_006fba40:
        local_548 = ppcVar49;
        if (uVar18 < 0x30) {
          local_548 = (char **)CONCAT44(local_548._4_4_,uVar18 + 8);
          plVar22 = (long *)(uVar18 + local_538);
        }
        else {
          plVar22 = plStack_540;
          plStack_540 = plStack_540 + 1;
        }
        puVar27 = (undefined8 *)*plVar22;
      }
      *puVar27 = uVar20;
      puVar27[1] = extraout_XMM0_Qb;
      goto LAB_006f61f0;
    }
  }
  in_ST6 = Var11;
  in_ST5 = Var10;
  in_ST4 = Var9;
  in_ST3 = Var8;
  in_ST2 = Var7;
  in_ST1 = Var6;
  in_ST0 = Var5;
  uVar17 = local_648;
  ppcVar24 = local_618;
  if (local_468 == local_5f0) goto switchD_006f555e_default;
LAB_006f6de8:
  local_618 = (char **)((ulong)local_618 & 0xffffffff00000000);
  ppcVar48 = local_620;
LAB_006f510e:
  local_620 = ppcVar48;
  plVar22 = local_660;
  bVar13 = *(byte *)local_620;
  ppcVar49 = ppcVar54;
  if (bVar13 == 0) goto code_r0x006f5120;
  goto LAB_006f5083;
LAB_006fc374:
  bVar13 = (byte)local_670;
LAB_006fc38b:
  if ((int)(uint)local_640 < 1) {
    iVar35 = (uint)local_640;
  }
  local_640 = (char **)CONCAT44(local_640._4_4_,iVar35);
  if ((int)local_650 < 10) {
    uVar20 = local_478._0_8_;
    uVar18 = (int)local_650 + 0x30;
    if (local_478._0_8_ == local_478._8_8_) {
      *(undefined8 *)(puVar42 + -8) = 0x6fc4b7;
      FUN_006f4e40(local_478,uVar18 & 0xff);
    }
    else {
      local_478._0_8_ = (undefined1 *)(local_478._0_8_ + 1);
      *(char *)uVar20 = (char)uVar18;
    }
  }
  else if (((int)local_650 == 0xb) && ((bVar13 & 1) == 0)) {
    for (pbVar52 = local_6e0; bVar13 = *pbVar52, bVar13 != 0; pbVar52 = pbVar52 + 1) {
      uVar20 = local_478._0_8_;
      if (local_478._0_8_ == local_478._8_8_) {
        *(undefined8 *)(puVar42 + -8) = 0x6fc595;
        FUN_006f4e40(local_478,(int)(char)bVar13);
      }
      else {
        local_478._0_8_ = (byte *)(local_478._0_8_ + 1);
        *(byte *)uVar20 = bVar13;
      }
    }
    bVar13 = 1;
  }
  else {
    if ((((byte)local_690 & (bVar13 ^ 1)) == 0) || ((int)local_650 != 10)) {
LAB_006fc245:
      if ((int)uVar39 == -1) goto LAB_006fc008;
      ppcVar54 = (char **)((long)ppcVar54 + -1);
      *(undefined8 *)(puVar42 + -8) = 0x6fc25f;
      FUN_007075f0(param_1,uVar39 & 0xff);
      goto LAB_006fc00f;
    }
    local_650 = param_1;
    for (pbVar52 = local_688; bVar13 = *pbVar52, bVar13 != 0; pbVar52 = pbVar52 + 1) {
      uVar20 = local_478._0_8_;
      if (local_478._0_8_ == local_478._8_8_) {
        *(undefined8 *)(puVar42 + -8) = 0x6fc588;
        FUN_006f4e40(local_478,(int)(char)bVar13);
      }
      else {
        local_478._0_8_ = (byte *)(local_478._0_8_ + 1);
        *(byte *)uVar20 = bVar13;
      }
    }
    bVar13 = 0;
    param_1 = local_650;
  }
LAB_006fc3c9:
  if ((uint)local_640 == 0) goto LAB_006fc008;
  if ((int)uVar39 == -1) {
    *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
    goto LAB_006fc00f;
  }
  pbVar52 = (byte *)param_1[1];
  if (pbVar52 < param_1[2]) {
    param_1[1] = (char *)(pbVar52 + 1);
    uVar39 = (ulong)*pbVar52;
  }
  else {
    *(undefined8 *)(puVar42 + -8) = 0x6fc46d;
    uVar18 = FUN_007067b0(param_1);
    uVar39 = (ulong)uVar18;
    if (uVar18 == 0xffffffff) goto code_r0x006fc475;
  }
  ppcVar54 = (char **)((long)ppcVar54 + 1);
  if (0 < (int)(uint)local_640) {
    local_640 = (char **)CONCAT44(local_640._4_4_,(uint)local_640 + -1);
  }
  goto LAB_006fc11d;
code_r0x006fc475:
  local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
LAB_006fc008:
LAB_006fc00f:
  ppcVar24 = local_618;
  if ((undefined1 *)local_478._0_8_ == (undefined1 *)0x0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    local_648 = 0xffffffff;
    uVar17 = local_648;
    goto switchD_006f555e_default;
  }
  puVar43 = (undefined1 *)local_478._0_8_;
  uVar17 = local_648;
  if ((char **)(local_478._0_8_ + -(long)local_468) == local_628) goto switchD_006f555e_default;
  goto LAB_006f9019;
code_r0x006fba2a:
  local_548._0_4_ = (uint)local_548 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006fba38;
  goto LAB_006fba25;
code_r0x006fc8e6:
  local_548._0_4_ = (uint)local_548 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006fc90f;
  goto LAB_006fc8e1;
code_r0x006fbc69:
  local_548._0_4_ = (uint)local_548 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006fbc99;
  goto LAB_006fbc64;
code_r0x006fbb03:
  local_548._0_4_ = (uint)local_548 + 8;
  bVar55 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006fbb2c;
  goto LAB_006fbafe;
  while( true ) {
    uVar17 = uVar17 + 8;
    uVar39 = (ulong)uVar17;
    bVar55 = true;
    iVar35 = iVar35 + -1;
    if (iVar35 == 0) break;
LAB_006fa12a:
    uVar17 = (uint)uVar39;
    if (0x2f < uVar17) {
      plStack_540 = plStack_630 + 1;
      if (iVar35 != 1) {
        puVar27 = plStack_630 + 2;
        do {
          puVar36 = puVar27;
          puVar27 = puVar36 + 1;
        } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != puVar27);
        local_548 = local_638;
        plStack_540 = plStack_630;
        uVar39 = FUN_006fa14d(puVar36);
        return uVar39;
      }
      pcVar33 = (char *)local_638;
      if (!bVar55) goto LAB_006fa161;
      break;
    }
  }
  local_548._4_4_ = (undefined4)((ulong)local_638 >> 0x20);
  local_548 = (char **)CONCAT44(local_548._4_4_,uVar17);
  uVar18 = uVar17;
  pcVar33 = (char *)local_548;
LAB_006fa161:
  local_548 = (char **)pcVar33;
  if (uVar18 < 0x30) {
    local_548 = (char **)CONCAT44(local_548._4_4_,uVar18 + 8);
    local_678 = (undefined8 *)(uVar18 + local_538);
  }
  else {
    local_678 = plStack_540;
    plStack_540 = plStack_540 + 1;
  }
  local_678 = (long *)*local_678;
  uVar39 = FUN_006f7f81();
  return uVar39;
code_r0x006f5120:
  uVar17 = local_648;
  ppcVar24 = local_618;
  if ((uint)local_618 != 0) {
    uVar19 = (int)local_608;
    do {
      if ((int)uVar39 == -1) {
        lVar37 = -2;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar19;
      }
      else {
        pbVar52 = (byte *)param_1[1];
        if (pbVar52 < param_1[2]) {
          param_1[1] = (char *)(pbVar52 + 1);
          uVar39 = (ulong)*pbVar52;
          lVar37 = uVar39 * 2;
        }
        else {
          *(undefined8 *)(puVar42 + -8) = 0x6f76e8;
          uVar18 = FUN_007067b0(param_1);
          uVar39 = (ulong)uVar18;
          if (uVar18 == 0xffffffff) {
            lVar37 = -2;
            uVar19 = *(undefined4 *)(in_FS_OFFSET + -0x58);
          }
          else {
            lVar37 = (long)(int)uVar18 * 2;
          }
        }
      }
    } while ((*(ushort *)(plVar22[0xd] + lVar37) & 0x2000) != 0);
    uVar17 = local_648;
    ppcVar24 = local_618;
    if ((int)uVar39 != -1) {
      *(undefined8 *)(puVar42 + -8) = 0x6f7c46;
      FUN_007075f0(param_1,uVar39 & 0xff);
      uVar17 = local_648;
      ppcVar24 = local_618;
    }
  }
switchD_006f555e_default:
  local_618 = ppcVar24;
  local_648 = uVar17;
  if (((ulong)*param_1 & 0x8000) == 0) {
    piVar44 = (int *)param_1[0x11];
    iVar35 = piVar44[1];
    piVar44[1] = iVar35 + -1;
    if (iVar35 + -1 == 0) {
      piVar44[2] = 0;
      piVar44[3] = 0;
      LOCK();
      iVar35 = *piVar44;
      *piVar44 = 0;
      UNLOCK();
      if (1 < iVar35) {
        *(undefined8 *)(puVar42 + -8) = 0x6f7e56;
        FUN_00709660();
      }
    }
  }
  ppcVar3 = local_6b8;
  *(undefined8 *)(puVar42 + -8) = 0x6f5612;
  FUN_00709560(ppcVar3);
  if (local_468 != local_6b0) {
    *(undefined8 *)(puVar42 + -8) = 0x6f5627;
    FUN_007104f0();
  }
  plVar22 = local_678;
  if (local_648 != 0xffffffff) {
    puVar30 = puVar42;
    if (local_678 != (long *)0x0) {
      lVar37 = *local_678;
      *(undefined8 *)(puVar42 + -8) = 0x6f5e41;
      FUN_007104f0(lVar37);
      *plVar22 = 0;
    }
    goto LAB_006f5642;
  }
  local_648 = 0xffffffff;
  for (puVar28 = local_6d8; puVar43 = puVar42, puVar28 != (ulong *)0x0;
      puVar28 = (ulong *)puVar28[1]) {
    uVar39 = 0;
    if (*puVar28 != 0) {
      do {
        uVar20 = *(undefined8 *)puVar28[uVar39 + 2];
        *(undefined8 *)(puVar42 + -8) = 0x6f5e0d;
        FUN_007104f0(uVar20);
        lVar37 = uVar39 + 2;
        uVar39 = uVar39 + 1;
        *(undefined8 *)puVar28[lVar37] = 0;
      } while (uVar39 < *puVar28);
    }
  }
LAB_006f52d1:
  local_648 = 0xffffffff;
  puVar30 = puVar43;
LAB_006f5642:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)local_648;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar30 + -8) = 0x6fbbe6;
  FUN_00771f60();
}

