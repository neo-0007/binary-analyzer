
/* WARNING: Removing unreachable block (ram,0x007b1ce2) */
/* WARNING: Removing unreachable block (ram,0x007b2425) */

void FUN_007b1870(long *param_1,long *param_2,uint param_3,int param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  char *pcVar11;
  long *plVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  uint *puVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  uint *puVar28;
  ulong *puVar29;
  long *plVar30;
  char *pcVar31;
  long *plVar32;
  long in_FS_OFFSET;
  bool bVar33;
  undefined1 auStack_508 [8];
  int local_500;
  int local_4fc;
  uint *local_4f8;
  undefined1 *local_4f0;
  uint *local_4e8;
  long *local_4e0;
  long *local_4d8;
  uint *local_4d0;
  long local_4c8;
  undefined8 uStack_4c0;
  uint *local_4b8;
  long *local_4b0;
  undefined1 *local_4a8;
  long local_4a0;
  undefined1 local_498 [8];
  long local_490;
  long *local_478;
  long *local_470;
  long local_468;
  char *local_460;
  long local_458;
  undefined1 *local_448;
  undefined8 local_440;
  undefined1 local_438 [1032];
  
  local_4e0 = (long *)CONCAT44(param_5,param_4);
  uVar19 = (ulong)(param_3 + 2) * 0x18 + 0x17;
  puVar25 = auStack_508;
  puVar24 = auStack_508;
  puVar27 = auStack_508;
  while (puVar24 != auStack_508 + -(uVar19 & 0xfffffffffffff000)) {
    puVar25 = puVar27 + -0x1000;
    *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(puVar27 + -8);
    puVar24 = puVar27 + -0x1000;
    puVar27 = puVar27 + -0x1000;
  }
  uVar19 = (ulong)((uint)uVar19 & 0xff0);
  lVar22 = -uVar19;
  puVar27 = puVar25 + lVar22;
  if (uVar19 != 0) {
    *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
  }
  local_4f8 = (uint *)((ulong)(puVar25 + lVar22 + 0xf) & 0xfffffffffffffff0);
  bVar2 = *(byte *)((long)param_1 + 0x31c);
  *local_4f8 = 0;
  local_4a0 = CONCAT71(local_4a0._1_7_,bVar2);
  *(long **)(local_4f8 + 2) = param_1;
  *(uint **)(local_4f8 + 4) = local_4f8 + 6;
  *(byte *)((long)param_1 + 0x31c) = bVar2 & 0x9f | 0x20;
  if (param_3 == 0) {
    local_4d8._0_4_ = 1;
    local_4b8 = local_4f8;
    plVar30 = param_1;
  }
  else {
    local_4d8._0_4_ = param_3 + 1;
    uVar19 = 1;
    puVar17 = local_4f8 + 6;
    do {
      uVar8 = (uint)uVar19;
      uVar19 = (ulong)(uVar8 + 1);
      lVar22 = *param_2;
      *puVar17 = 0;
      param_2 = param_2 + 1;
      *(long *)(puVar17 + 2) = lVar22;
      *(uint **)(puVar17 + 4) = local_4f8 + uVar19 * 6;
      *(byte *)(lVar22 + 0x31c) = *(byte *)(lVar22 + 0x31c) & 0x9f | 0x20;
      puVar17 = puVar17 + 6;
    } while (param_3 != uVar8);
    local_4b8 = local_4f8 + (ulong)param_3 * 6;
    plVar30 = *(long **)(local_4f8 + 2);
  }
  local_4b8[4] = 0;
  local_4b8[5] = 0;
  local_4f0 = local_438;
  local_440 = 0x400;
  local_500 = *(int *)(in_FS_OFFSET + -0x58);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
  local_4fc = param_4;
  local_4d0 = local_4f8;
  local_4b0 = param_1;
  local_448 = local_4f0;
  do {
    *local_4d0 = 1;
    local_4a8 = (undefined1 *)plVar30[0x58];
    if (local_4a8 == (undefined1 *)0x0) {
      puVar25 = (undefined1 *)0x0;
      if (((plVar30[0x7a] == 0) && (local_4b0 != plVar30)) &&
         (sVar3 = *(short *)((long)plVar30 + 0x2ba), sVar3 != 0)) {
        *(undefined8 *)(puVar27 + -8) = 0x7b23c0;
        cVar6 = FUN_007125e0(&local_448,sVar3,8);
        if (cVar6 == '\0') {
          lVar22 = local_4b0[1];
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar27 + -8) = 0x7b29bc;
          FUN_0078db10(0xc,lVar22,0,"cannot allocate dependency buffer");
        }
        local_4a8 = local_448;
        puVar25 = local_4a8;
      }
    }
    else {
      local_4a8 = (undefined1 *)0x0;
      puVar25 = local_4a8;
    }
    local_4a8 = puVar25;
    if (((plVar30[9] != 0) || (plVar30[0x3d] != 0)) || (uVar19 = 0, plVar30[0x3b] != 0)) {
      local_4a0 = *(long *)(plVar30[0xd] + 8);
      if ((*(byte *)((long)plVar30 + 0x31e) & 0x20) != 0) {
        local_4a0 = local_4a0 + *plVar30;
      }
      local_468 = local_4a0;
      puVar29 = (ulong *)plVar30[2];
      local_470 = local_4e0;
      uVar16 = *puVar29;
      local_478 = plVar30;
      if (uVar16 == 0) {
        uVar19 = 0;
      }
      else {
        uVar13 = 0;
        local_4e8 = local_4d0;
        do {
          uVar19 = uVar13;
          if (uVar16 != 1) {
            puVar25 = puVar27;
            if ((uVar16 & 0xfffffffffffffffd) != 0x7ffffffd) goto LAB_007b1d5f;
            pcVar31 = (char *)(local_4a0 + puVar29[1]);
            *(undefined8 *)(puVar27 + -8) = 0x7b1d9b;
            lVar22 = FUN_007b5ab0(pcVar31);
            pcVar11 = pcVar31;
            if (lVar22 != 0) {
              if (DAT_0093ae30 != 0) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(puVar27 + -8) = 0x7b2a20;
                FUN_0078db10(0,pcVar31,0,"DST not allowed in SUID/SGID programs");
              }
              *(undefined8 *)(puVar27 + -8) = 0x7b1dbf;
              lVar10 = thunk_FUN_007129d0(pcVar31);
              lVar20 = plVar30[0x6a];
              if (lVar20 == 0) {
                if (*(char *)plVar30[1] != '\0') {
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)(puVar27 + -8) = 0x7b29fa;
                  FUN_006e2220("(l)->l_name[0] == \'\\0\' || IS_RTLD (l)","dl-deps.c",0x11f,
                               "_dl_map_object_deps");
                }
                *(undefined8 *)(puVar27 + -8) = 0x7b260d;
                local_4c8 = lVar10;
                lVar20 = FUN_007b99f0();
                plVar30[0x6a] = lVar20;
                lVar10 = local_4c8;
                if (lVar20 - 1U < 0xfffffffffffffffe) goto LAB_007b1ddc;
LAB_007b262c:
                uVar16 = 0;
              }
              else {
                if (lVar20 == -1) goto LAB_007b262c;
LAB_007b1ddc:
                *(undefined8 *)(puVar27 + -8) = 0x7b1de8;
                local_4c8 = lVar10;
                uVar16 = thunk_FUN_007129d0(lVar20);
                lVar10 = local_4c8;
              }
              uVar21 = DAT_0094b0e8;
              if (DAT_0094b0e8 < 0x14) {
                uVar21 = 0x14;
              }
              if (uVar16 <= uVar21) {
                uVar16 = uVar21;
              }
              uVar16 = lVar10 + 0x17 + (uVar16 - 4) * lVar22;
              for (; puVar25 != puVar27 + -(uVar16 & 0xfffffffffffff000);
                  puVar25 = puVar25 + -0x1000) {
                *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
              }
              uVar16 = (ulong)((uint)uVar16 & 0xff0);
              lVar22 = -uVar16;
              puVar26 = puVar25 + lVar22;
              puVar27 = puVar25 + lVar22;
              if (uVar16 != 0) {
                *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
              }
              *(undefined8 *)(puVar25 + lVar22 + -8) = 0x7b1e69;
              pcVar11 = (char *)FUN_007b5b60(plVar30,pcVar31,
                                             (ulong)(puVar25 + lVar22 + 0xf) & 0xfffffffffffffff0);
              if (*pcVar11 != '\0') goto LAB_007b23de;
              if (*puVar29 == 0x7ffffffd) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(puVar25 + lVar22 + -8) = 0x7b2a0d;
                FUN_0078db10(0,pcVar31,0,"empty dynamic string token substitution");
              }
              goto LAB_007b1e80;
            }
LAB_007b23de:
            local_460 = pcVar11;
            if (((byte)DAT_0094b0e4 & 1) != 0) {
              pcVar31 = (char *)plVar30[1];
              if ((*pcVar31 == '\0') &&
                 (pcVar31 = *(char **)PTR_PTR_0093adf8, pcVar31 == (char *)0x0)) {
                pcVar31 = "<main program>";
              }
              *(undefined8 *)(puVar27 + -8) = 0x7b2951;
              FUN_00787060("load auxiliary object=%s requested by file=%s\n",pcVar11,pcVar31);
            }
            *(undefined8 *)(puVar27 + -8) = 0x7b240f;
            iVar7 = FUN_0078db70(local_498,&LAB_007b1490,&local_478);
            if (local_490 == 0) {
              puVar25 = puVar27 + -0x20;
              *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(puVar27 + -8);
              local_4c8 = *(long *)local_4e8;
              uStack_4c0 = *(undefined8 *)(local_4e8 + 2);
              puVar17 = (uint *)((ulong)(puVar27 + -0x11) & 0xfffffffffffffff0);
              *(long *)puVar17 = local_4c8;
              *(undefined8 *)(puVar17 + 2) = uStack_4c0;
              *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(local_4e8 + 4);
              *local_4e8 = 0;
              *(long *)(local_4e8 + 2) = local_458;
              if (local_4a8 != (undefined1 *)0x0) {
                uVar19 = (ulong)((int)uVar13 + 1);
                *(long *)(local_4a8 + uVar13 * 8) = local_458;
              }
              puVar14 = puVar17;
              if ((*(byte *)(local_458 + 0x31c) & 0x60) == 0) {
                local_4d8 = (long *)CONCAT44(local_4d8._4_4_,(uint)local_4d8 + 1);
                *(uint **)(local_4e8 + 4) = puVar17;
                *(byte *)(local_458 + 0x31c) = *(byte *)(local_458 + 0x31c) & 0x9f | 0x20;
                lVar22 = *(long *)(local_458 + 0x20);
                puVar14 = local_4b8;
              }
              else {
                do {
                  puVar28 = puVar14;
                  puVar14 = *(uint **)(puVar28 + 4);
                  if (puVar14 == (uint *)0x0) {
                    uVar5 = *(undefined8 *)(puVar17 + 2);
                    *(undefined8 *)local_4e8 = *(undefined8 *)puVar17;
                    *(undefined8 *)(local_4e8 + 2) = uVar5;
                    *(undefined8 *)(local_4e8 + 4) = *(undefined8 *)(puVar17 + 4);
                    puVar25 = puVar27 + -0x20;
                    goto LAB_007b1d5f;
                  }
                } while (*(long *)(puVar14 + 2) != local_458);
                *(uint **)(local_4e8 + 4) = puVar17;
                if (*(uint **)(puVar28 + 4) == local_4b8) {
                  local_4b8 = puVar28;
                }
                *(undefined8 *)(puVar28 + 4) = *(undefined8 *)(*(uint **)(puVar28 + 4) + 4);
                lVar22 = *(long *)(local_458 + 0x20);
                puVar14 = local_4b8;
              }
              if (lVar22 != 0) {
                *(undefined8 *)(lVar22 + 0x18) = *(undefined8 *)(local_458 + 0x18);
              }
              if (*(long *)(local_458 + 0x18) != 0) {
                *(long *)(*(long *)(local_458 + 0x18) + 0x20) = lVar22;
              }
              lVar22 = *(long *)(puVar17 + 2);
              *(undefined8 *)(local_458 + 0x20) = *(undefined8 *)(lVar22 + 0x20);
              *(long *)(lVar22 + 0x20) = local_458;
              if (*(long *)(local_458 + 0x20) != 0) {
                *(long *)(*(long *)(local_458 + 0x20) + 0x18) = local_458;
              }
              *(long *)(local_458 + 0x18) = lVar22;
              bVar33 = puVar14 != local_4e8;
              local_4e8 = puVar17;
              local_4b8 = puVar17;
              if (bVar33) {
                puVar25 = puVar27 + -0x20;
                local_4b8 = puVar14;
              }
              goto LAB_007b1d5f;
            }
            if (*puVar29 == 0x7ffffffd) {
              *(undefined8 *)(puVar27 + -8) = 0x7b291a;
              FUN_00784810(local_498);
              puVar25 = puVar27;
              goto LAB_007b1d5f;
            }
LAB_007b1ef0:
            local_4b8 = (uint *)CONCAT44(local_4b8._4_4_,iVar7);
            if (iVar7 == 0) {
              local_4b8 = (uint *)CONCAT44(local_4b8._4_4_,0xffffffff);
            }
            goto LAB_007b1f0b;
          }
          pcVar31 = (char *)(local_4a0 + puVar29[1]);
          *(undefined8 *)(puVar27 + -8) = 0x7b1bc4;
          lVar22 = FUN_007b5ab0(pcVar31);
          pcVar11 = pcVar31;
          if (lVar22 == 0) {
LAB_007b1c9b:
            *(undefined8 *)(puVar27 + -8) = 0x7b1cbc;
            local_460 = pcVar11;
            iVar7 = FUN_0078db70(local_498,&LAB_007b1490,&local_478);
            if (local_490 != 0) goto LAB_007b1ef0;
            puVar25 = puVar27;
            if ((*(byte *)(local_458 + 0x31c) & 0x60) == 0) {
              puVar25 = puVar27 + -0x20;
              *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(puVar27 + -8);
              local_4d8 = (long *)CONCAT44(local_4d8._4_4_,(uint)local_4d8 + 1);
              puVar17 = (uint *)((ulong)(puVar27 + -0x11) & 0xfffffffffffffff0);
              *(long *)(puVar17 + 2) = local_458;
              *puVar17 = 0;
              puVar17[4] = 0;
              puVar17[5] = 0;
              *(uint **)(local_4b8 + 4) = puVar17;
              *(byte *)(local_458 + 0x31c) = *(byte *)(local_458 + 0x31c) & 0x9f | 0x20;
              local_4b8 = puVar17;
            }
            if (local_4a8 != (undefined1 *)0x0) {
              *(long *)(local_4a8 + uVar13 * 8) = local_458;
              uVar19 = (ulong)((int)uVar13 + 1);
            }
          }
          else {
            if (DAT_0093ae30 != 0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar27 + -8) = 0x7b299e;
              FUN_0078db10(0,pcVar31,0,"DST not allowed in SUID/SGID programs");
            }
            *(undefined8 *)(puVar27 + -8) = 0x7b1be6;
            lVar10 = thunk_FUN_007129d0(pcVar31);
            lVar20 = plVar30[0x6a];
            if (lVar20 == 0) {
              if (*(char *)plVar30[1] != '\0') {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(puVar27 + -8) = 0x7b29db;
                FUN_006e2220("(l)->l_name[0] == \'\\0\' || IS_RTLD (l)","dl-deps.c",0xf4,
                             "_dl_map_object_deps");
              }
              *(undefined8 *)(puVar27 + -8) = 0x7b1ec9;
              local_4c8 = lVar10;
              lVar20 = FUN_007b99f0();
              plVar30[0x6a] = lVar20;
              lVar10 = local_4c8;
              if (lVar20 - 1U < 0xfffffffffffffffe) goto LAB_007b1c03;
LAB_007b1ee8:
              uVar16 = 0;
            }
            else {
              if (lVar20 == -1) goto LAB_007b1ee8;
LAB_007b1c03:
              *(undefined8 *)(puVar27 + -8) = 0x7b1c0f;
              local_4c8 = lVar10;
              uVar16 = thunk_FUN_007129d0(lVar20);
              lVar10 = local_4c8;
            }
            uVar21 = DAT_0094b0e8;
            if (DAT_0094b0e8 < 0x14) {
              uVar21 = 0x14;
            }
            if (uVar21 < uVar16) {
              uVar21 = uVar16;
            }
            uVar16 = lVar10 + 0x17 + (uVar21 - 4) * lVar22;
            for (puVar25 = puVar27; puVar25 != puVar27 + -(uVar16 & 0xfffffffffffff000);
                puVar25 = puVar25 + -0x1000) {
              *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
            }
            uVar16 = (ulong)((uint)uVar16 & 0xff0);
            lVar22 = -uVar16;
            puVar27 = puVar25 + lVar22;
            puVar26 = puVar25 + lVar22;
            if (uVar16 != 0) {
              *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
            }
            *(undefined8 *)(puVar25 + lVar22 + -8) = 0x7b1c92;
            pcVar11 = (char *)FUN_007b5b60(plVar30,pcVar31,
                                           (ulong)(puVar25 + lVar22 + 0xf) & 0xfffffffffffffff0);
            if (*pcVar11 != '\0') goto LAB_007b1c9b;
LAB_007b1e80:
            puVar25 = puVar26;
            if (((byte)DAT_0094b0e4 & 1) != 0) {
              *(undefined8 *)(puVar26 + -8) = 0x7b1e9e;
              FUN_00787060("cannot load auxiliary `%s\' because of empty dynamic string token substitution\n"
                           ,pcVar31);
            }
          }
LAB_007b1d5f:
          uVar16 = puVar29[2];
          puVar29 = puVar29 + 2;
          puVar27 = puVar25;
          uVar13 = uVar19;
        } while (uVar16 != 0);
      }
    }
    if (local_4a8 != (undefined1 *)0x0) {
      iVar7 = (int)uVar19;
      *(undefined8 *)(local_4a8 + uVar19 * 8) = 0;
      *(undefined8 *)(puVar27 + -8) = 0x7b1a99;
      puVar9 = (undefined8 *)FUN_007101b0((ulong)(iVar7 * 2 + 3) << 3);
      if (puVar9 == (undefined8 *)0x0) {
        if (local_448 != local_4f0) {
          *(undefined8 *)(puVar27 + -8) = 0x7b2a35;
          FUN_007104f0();
        }
        lVar22 = local_4b0[1];
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar27 + -8) = 0x7b2a53;
        FUN_0078db10(0xc,lVar22,0,"cannot allocate dependency list");
      }
      *puVar9 = plVar30;
      lVar22 = (ulong)(iVar7 + 1) * 8;
      *(undefined8 *)(puVar27 + -8) = 0x7b1ac3;
      thunk_FUN_00713a50(puVar9 + 1,local_4a8,lVar22);
      *(undefined8 *)(puVar27 + -8) = 0x7b1ad6;
      thunk_FUN_00713a50(puVar9 + (iVar7 + 2),puVar9,lVar22);
      *(byte *)((long)plVar30 + 0x31e) = *(byte *)((long)plVar30 + 0x31e) | 0x10;
      plVar30[0x7a] = (long)puVar9;
    }
    puVar17 = local_4d0;
    if (*local_4d0 != 0) break;
LAB_007b1af4:
    local_4d0 = puVar17;
    plVar30 = *(long **)(local_4d0 + 2);
  } while( true );
  while (puVar17 = *(uint **)(puVar17 + 4), puVar17 != (uint *)0x0) {
    if (*puVar17 == 0) goto LAB_007b1af4;
  }
  local_4b8 = (uint *)((ulong)local_4b8 & 0xffffffff00000000);
LAB_007b1f0b:
  puVar17 = local_4f8;
  if (local_448 != local_4f0) {
    *(undefined8 *)(puVar27 + -8) = 0x7b1f20;
    FUN_007104f0();
  }
  if ((*(int *)(in_FS_OFFSET + -0x58) == 0) && (local_500 != 0)) {
    *(int *)(in_FS_OFFSET + -0x58) = local_500;
  }
  local_4c8 = local_4b0[0x7a];
  if (local_4c8 != 0) {
    local_4a0 = CONCAT71(local_4a0._1_7_,*(byte *)((long)local_4b0 + 0x31c));
    if ((*(byte *)((long)local_4b0 + 0x31c) & 3) == 2) {
      if (local_4b0[0x58] != 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar27 + -8) = 0x7b257d;
        FUN_006e2220("map->l_searchlist.r_list == NULL","dl-deps.c",0x1d8,"_dl_map_object_deps");
      }
    }
    else {
      local_4c8 = 0;
    }
  }
  *(undefined8 *)(puVar27 + -8) = 0x7b1f94;
  plVar12 = (long *)FUN_007101b0((ulong)((uint)local_4d8 * 2 + 1) << 3);
  plVar30 = local_4b0;
  if (plVar12 == (long *)0x0) goto LAB_007b2ab0;
  *(uint *)(local_4b0 + 0x59) = (uint)local_4d8;
  plVar32 = plVar12 + ((uint)local_4d8 + 1);
  local_4b0[0x58] = (long)plVar32;
  if (local_4fc == 0) {
    uVar19 = 0;
    uVar16 = 0xffffffff;
    do {
      while( true ) {
        uVar13 = uVar19;
        plVar18 = *(long **)(puVar17 + 2);
        uVar19 = (ulong)((int)uVar13 + 1);
        if (local_4b0 == plVar18) break;
        plVar32[uVar13] = (long)plVar18;
        *(byte *)((long)plVar18 + 0x31c) = *(byte *)((long)plVar18 + 0x31c) & 0x9f;
        puVar17 = *(uint **)(puVar17 + 4);
        if (puVar17 == (uint *)0x0) {
          local_4a8 = (undefined1 *)CONCAT44(local_4a8._4_4_,(int)uVar16);
          goto LAB_007b202e;
        }
      }
      plVar32[uVar13] = (long)local_4b0;
      *(byte *)((long)local_4b0 + 0x31c) = *(byte *)((long)local_4b0 + 0x31c) & 0x9f;
      puVar17 = *(uint **)(puVar17 + 4);
      uVar16 = uVar13;
    } while (puVar17 != (uint *)0x0);
    local_4a8 = (undefined1 *)CONCAT44(local_4a8._4_4_,(int)uVar13);
  }
  else {
    uVar19 = 0;
    iVar7 = -1;
    do {
      plVar18 = *(long **)(puVar17 + 2);
      if ((*(byte *)((long)plVar18 + 0x31d) & 0x20) == 0) {
        if (local_4b0 == plVar18) {
          iVar7 = (int)uVar19;
        }
        plVar32[uVar19] = (long)plVar18;
        uVar19 = (ulong)((int)uVar19 + 1);
      }
      else {
        *(int *)(local_4b0 + 0x59) = (int)local_4b0[0x59] + -1;
      }
      *(byte *)((long)plVar18 + 0x31c) = *(byte *)((long)plVar18 + 0x31c) & 0x9f;
      puVar17 = *(uint **)(puVar17 + 4);
    } while (puVar17 != (uint *)0x0);
    local_4a8 = (undefined1 *)CONCAT44(local_4a8._4_4_,iVar7);
  }
LAB_007b202e:
  uVar8 = (uint)uVar19;
  if (((DAT_0094b0e4._1_1_ & 8) == 0) || ((long *)PTR_DAT_0093eb60 != local_4b0)) {
    puVar17 = (uint *)local_4b0[0x7b];
    if (puVar17 != (uint *)0x0) {
      if (uVar8 != 0) goto LAB_007b205b;
      goto LAB_007b25b8;
    }
LAB_007b2540:
    puVar14 = (uint *)0x0;
  }
  else {
    if (uVar8 == 0) {
      puVar17 = (uint *)local_4b0[0x7b];
      if (puVar17 == (uint *)0x0) goto LAB_007b25d5;
LAB_007b25b8:
      *(byte *)((long)local_4b0 + 0x31c) = *(byte *)((long)local_4b0 + 0x31c) & 0x9f;
      if (*puVar17 == 0) goto LAB_007b25d5;
LAB_007b20a0:
      puVar28 = puVar17 + 2;
      local_4d0 = puVar17 + 4;
      puVar14 = (uint *)0x0;
      uVar23 = 0;
      local_4e8 = (uint *)CONCAT44(local_4e8._4_4_,uVar8);
      local_4e0 = plVar12;
      local_4d8 = plVar32;
      do {
        while ((*(byte *)(*(long *)(puVar28 + (ulong)uVar23 * 2) + 0x31c) & 0x60) == 0) {
LAB_007b20d0:
          uVar23 = uVar23 + 1;
          if (*puVar17 <= uVar23) goto LAB_007b2198;
        }
        uVar8 = *(uint *)(local_4b0 + 0x7c);
        *(undefined8 *)(puVar27 + -8) = 0x7b2115;
        local_4a0 = (ulong)uVar23 * 8;
        puVar14 = (uint *)FUN_007101b0((ulong)uVar8 * 8 + 8);
        if (puVar14 == (uint *)0x0) goto LAB_007b20d0;
        uVar8 = uVar23 + 1;
        *(undefined8 *)(puVar27 + -8) = 0x7b2134;
        thunk_FUN_00713a50(puVar14 + 2,puVar28,local_4a0);
        uVar4 = *puVar17;
        if (uVar8 < uVar4) {
          puVar15 = puVar28 + (ulong)uVar8 * 2;
          uVar19 = (ulong)uVar23;
          do {
            uVar16 = uVar19;
            if ((*(byte *)(*(long *)puVar15 + 0x31c) & 0x60) == 0) {
              uVar16 = (ulong)((int)uVar19 + 1);
              *(long *)(puVar14 + uVar19 * 2 + 2) = *(long *)puVar15;
            }
            puVar15 = puVar15 + 2;
            uVar19 = uVar16;
          } while (puVar15 != local_4d0 + ((ulong)((uVar4 - 2) - uVar23) + (ulong)uVar8) * 2);
          uVar8 = ((uVar4 - 1) + uVar8) - uVar23;
          uVar23 = (uint)uVar16;
        }
        *puVar14 = uVar23;
        uVar23 = uVar8 + 1;
      } while (uVar23 < *puVar17);
LAB_007b2198:
      uVar19 = (ulong)local_4e8 & 0xffffffff;
      plVar12 = local_4e0;
      plVar32 = local_4d8;
      if ((int)local_4e8 == 0) goto LAB_007b25d5;
    }
    else {
      lVar22 = 0;
      local_4d8 = (long *)CONCAT44(local_4d8._4_4_,uVar8);
      while( true ) {
        plVar32 = *(long **)((long)plVar32 + lVar22);
        if ((plVar30 != plVar32) && ((plVar32[0x74] == 0 || (*(int *)(plVar32[0x74] + 8) == 0)))) {
          if ((plVar32[0x3d] != 0) || (plVar32[0x3b] != 0)) {
            lVar22 = plVar32[1];
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar27 + -8) = 0x7b2a89;
            FUN_0078db10(0x16,lVar22,0,"Filters not supported with LD_TRACE_PRELINKING");
          }
          *(undefined8 *)(puVar27 + -8) = 0x7b2737;
          puVar17 = (uint *)FUN_007b14d0(plVar12);
          uVar23 = (uint)puVar17;
          if ((uint)local_4d8 < uVar23) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar27 + -8) = 0x7b2a72;
            FUN_006e2220("cnt <= nlist","dl-deps.c",0x217,"_dl_map_object_deps");
          }
          if (uVar23 == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = (ulong)puVar17 & 0xffffffff;
            *(byte *)(*plVar12 + 0x31c) = *(byte *)(*plVar12 + 0x31c) & 0x9f;
            uVar16 = 1;
            if (uVar23 != 1) {
              do {
                *(byte *)(plVar12[uVar16] + 0x31c) = *(byte *)(plVar12[uVar16] + 0x31c) & 0x9f;
                if (*(long *)(plVar12[uVar16] + 0xc0) != 0) {
                  *(byte *)((long)plVar32 + 0x31e) = *(byte *)((long)plVar32 + 0x31e) | 8;
                }
                uVar16 = uVar16 + 1;
              } while (uVar19 != uVar16);
            }
          }
          local_4a0 = uVar19 * 8 + 0x10;
          *(undefined8 *)(puVar27 + -8) = 0x7b27b4;
          local_4d0 = puVar17;
          plVar18 = (long *)FUN_007101b0(local_4a0);
          plVar32[0x74] = (long)plVar18;
          if (plVar18 == (long *)0x0) goto LAB_007b2ab0;
          *(int *)(plVar18 + 1) = (int)local_4d0;
          *plVar18 = (long)(plVar18 + 2);
          *(undefined8 *)(puVar27 + -8) = 0x7b27e9;
          thunk_FUN_00713a50(plVar18 + 2,plVar12,local_4a0 + -0x10);
        }
        if ((ulong)(uVar8 - 1) << 3 == lVar22) break;
        plVar32 = (long *)plVar30[0x58];
        lVar22 = lVar22 + 8;
      }
      uVar19 = (ulong)local_4d8 & 0xffffffff;
      puVar17 = (uint *)local_4b0[0x7b];
      if (puVar17 == (uint *)0x0) goto LAB_007b2540;
      plVar32 = (long *)local_4b0[0x58];
LAB_007b205b:
      uVar8 = (uint)uVar19;
      lVar22 = 0;
      do {
        plVar30 = plVar32 + lVar22;
        lVar22 = lVar22 + 1;
        *(byte *)(*plVar30 + 0x31c) = *(byte *)(*plVar30 + 0x31c) & 0x9f | 0x20;
      } while ((uint)lVar22 < uVar8);
      puVar14 = (uint *)0x0;
      *(byte *)((long)local_4b0 + 0x31c) = *(byte *)((long)local_4b0 + 0x31c) & 0x9f;
      if (*puVar17 != 0) goto LAB_007b20a0;
    }
    lVar22 = 0;
    do {
      plVar30 = plVar32 + lVar22;
      lVar22 = lVar22 + 1;
      *(byte *)(*plVar30 + 0x31c) = *(byte *)(*plVar30 + 0x31c) & 0x9f;
    } while ((uint)lVar22 < (uint)uVar19);
  }
  uVar8 = (uint)uVar19;
  if ((uint)local_4a8 < uVar8) {
    plVar30 = (long *)local_4b0[0x58];
    if ((uint)local_4a8 == 0) {
      *(undefined8 *)(puVar27 + -8) = 0x7b2538;
      thunk_FUN_00713a50(plVar12,plVar30,uVar19 * 8);
    }
    else {
      *plVar12 = plVar30[(ulong)local_4a8 & 0xffffffff];
      if (((uint)local_4a8 - 1 < 3) || (plVar12 == plVar30)) {
        uVar16 = 0;
        do {
          plVar12[uVar16 + 1] = plVar30[uVar16];
          uVar16 = uVar16 + 1;
        } while (((ulong)local_4a8 & 0xffffffff) != uVar16);
      }
      else {
        lVar22 = 0;
        do {
          uVar5 = ((undefined8 *)((long)plVar30 + lVar22))[1];
          puVar9 = (undefined8 *)((long)plVar12 + lVar22 + 8);
          *puVar9 = *(undefined8 *)((long)plVar30 + lVar22);
          puVar9[1] = uVar5;
          lVar22 = lVar22 + 0x10;
        } while (lVar22 != (ulong)((uint)local_4a8 >> 1) << 4);
        if (((ulong)local_4a8 & 1) != 0) {
          plVar12[((uint)local_4a8 & 0xfffffffe) + 1] = plVar30[(uint)local_4a8 & 0xfffffffe];
        }
      }
      uVar23 = (uint)local_4a8 + 1;
      if (uVar23 < uVar8) {
        uVar16 = (ulong)uVar23;
        if ((plVar12 + uVar16 == plVar30 + uVar16 + 1) || ((uVar8 - (uint)local_4a8) - 2 < 3)) {
          lVar22 = uVar16 * 8;
          do {
            lVar20 = lVar22 + 8;
            *(undefined8 *)((long)plVar12 + lVar22) = *(undefined8 *)((long)plVar30 + lVar22);
            lVar22 = lVar20;
          } while (((ulong)((uVar8 - 2) - (uint)local_4a8) + uVar16 + 1) * 8 != lVar20);
        }
        else {
          uVar8 = (uVar8 - (uint)local_4a8) - 1;
          lVar22 = 0;
          do {
            puVar9 = (undefined8 *)((long)plVar30 + lVar22 + uVar16 * 8);
            uVar5 = puVar9[1];
            puVar1 = (undefined8 *)((long)(plVar12 + uVar16) + lVar22);
            *puVar1 = *puVar9;
            puVar1[1] = uVar5;
            lVar22 = lVar22 + 0x10;
          } while (lVar22 != (ulong)(uVar8 >> 1) << 4);
          uVar23 = uVar23 + (uVar8 & 0xfffffffe);
          if ((uVar8 & 0xfffffffe) != uVar8) {
            plVar12[uVar23] = plVar30[uVar23];
          }
        }
      }
    }
    lVar22 = *plVar12;
    lVar20 = *(long *)(&DAT_0093eb80 + *(long *)(lVar22 + 0x30) * 0xa0);
    *(undefined8 *)(puVar27 + -8) = 0x7b2317;
    FUN_00789640(plVar12,uVar19,lVar20 != lVar22,0);
    plVar12[uVar19] = 0;
    *(byte *)((long)local_4b0 + 0x31e) = *(byte *)((long)local_4b0 + 0x31e) | 0x10;
    local_4b0[0x7a] = (long)plVar12;
    if (puVar14 != (uint *)0x0) {
      lVar22 = local_4b0[0x7b];
      local_4b0[0x7b] = (long)puVar14;
      *(undefined8 *)(puVar27 + -8) = 0x7b234d;
      FUN_00789440(lVar22);
    }
    if (local_4c8 != 0) {
      *(undefined8 *)(puVar27 + -8) = 0x7b2361;
      FUN_00789440(local_4c8);
    }
    if ((int)local_4b8 == 0) {
      return;
    }
    if ((int)local_4b8 == -1) {
      local_4b8 = (uint *)((ulong)local_4b8 & 0xffffffff00000000);
    }
    *(undefined8 *)(puVar27 + -8) = 0x7b2ab0;
    FUN_0078dac0((ulong)local_4b8 & 0xffffffff,local_498,0);
LAB_007b2ab0:
    lVar22 = local_4b0[1];
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar27 + -8) = &UNK_007b2ace;
    FUN_0078db10(0xc,lVar22,0,"cannot allocate symbol search list");
  }
LAB_007b25d5:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar27 + -8) = 0x7b25f4;
  FUN_006e2220("map_index < nlist","dl-deps.c",0x256,"_dl_map_object_deps");
}

