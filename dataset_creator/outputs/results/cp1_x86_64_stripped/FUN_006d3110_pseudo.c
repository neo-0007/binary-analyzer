
/* WARNING: Removing unreachable block (ram,0x006d3814) */
/* WARNING: Removing unreachable block (ram,0x006d332a) */
/* WARNING: Removing unreachable block (ram,0x006d32cd) */
/* WARNING: Removing unreachable block (ram,0x006d33df) */
/* WARNING: Removing unreachable block (ram,0x006d39e0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006d3110(char *param_1,char *param_2,long param_3,long param_4,long *param_5,
                  ulong *param_6)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long lVar19;
  char *pcVar20;
  code *pcVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  bool bVar23;
  int iVar24;
  undefined1 auStack_178 [8];
  long local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [16];
  long *local_148;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  long *local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [8];
  long **local_f0;
  code *local_e8;
  undefined8 *local_e0;
  long *local_d8;
  code *local_d0;
  long local_c8;
  undefined8 *local_c0;
  char *local_b8;
  char *local_b0;
  undefined8 *local_a8;
  code *pcStack_a0;
  char *local_98;
  int local_8c;
  ulong *local_88;
  long local_80;
  long local_78;
  code *local_70;
  long local_68;
  char *pcStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  puVar16 = auStack_f8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = param_1;
  if (param_2 != (char *)0x0) {
    local_b0 = param_2;
  }
  local_d8 = param_5;
  local_c8 = param_4;
  local_b8 = param_2;
  local_98 = param_1;
  local_88 = param_6;
  pcStack_60 = local_b0;
  if (param_4 == 0) {
    local_e8 = FUN_006d30d0;
    local_58 = 0;
    local_50 = 0;
    local_e0 = &DAT_009460c8;
    local_100 = 0x6d33ce;
    local_68 = param_3;
    plVar6 = (long *)FUN_0076f840(&local_68,&DAT_009460c8,FUN_006d30d0);
    if (plVar6 == (long *)0x0) {
      puVar16 = auStack_138;
      local_d0 = (code *)&local_130;
      local_140 = 0x6d341c;
      local_130 = param_3;
      local_128 = thunk_FUN_007129d0(param_3);
      local_f0 = &local_108;
      local_120 = 0;
      local_108 = (long *)0x0;
      local_118 = (undefined1  [16])0x0;
      local_c8 = param_3;
      goto LAB_006d344d;
    }
  }
  else {
    local_e8 = FUN_006d30d0;
    local_58 = 0;
    local_50 = 0;
    local_e0 = &DAT_009460c8;
    local_100 = 0x6d31c4;
    local_68 = param_4;
    plVar6 = (long *)FUN_0076f840(&local_68,&DAT_009460c8,FUN_006d30d0);
    if (plVar6 == (long *)0x0) {
      local_d0 = (code *)&local_130;
      local_130 = local_c8;
      local_140 = 0x6d330e;
      local_128 = thunk_FUN_007129d0(local_c8);
      local_120 = 0;
      local_118 = (undefined1  [16])0x0;
      puVar16 = auStack_178;
      local_170 = param_3;
      local_168 = thunk_FUN_007129d0(param_3);
      local_f0 = &local_148;
      local_160 = 0;
      local_148 = (long *)0x0;
      local_158 = (undefined1  [16])0x0;
      local_108 = &local_170;
LAB_006d344d:
      iVar5 = 0;
      local_c0 = (undefined8 *)0x0;
      iVar12 = 0x7fffffff;
      local_8c = 0x7fffffff;
      pcVar21 = local_d0;
LAB_006d3495:
      if ((iVar5 == iVar12 || iVar5 < iVar12) &&
         (((iVar5 != iVar12 || (*(int *)(pcVar21 + 0x10) < local_8c)) &&
          (DAT_009460b8 != (undefined8 *)0x0)))) {
        lVar19 = *(long *)pcVar21;
        puVar14 = DAT_009460b8;
        do {
          uVar11 = *puVar14;
          *(undefined8 *)(puVar16 + -8) = 0x6d34c4;
          iVar5 = thunk_FUN_00712780(lVar19,uVar11);
          if (iVar5 == 0) goto LAB_006d352d;
          if (iVar5 < 0) {
            puVar14 = (undefined8 *)puVar14[4];
          }
          else {
            puVar14 = (undefined8 *)puVar14[6];
          }
        } while (puVar14 != (undefined8 *)0x0);
      }
      pcVar21 = *(code **)(pcVar21 + 0x28);
      if (pcVar21 != (code *)0x0) goto LAB_006d3491;
      goto LAB_006d3621;
    }
  }
  uVar22 = *(ulong *)(*plVar6 + 0x18);
  lVar8 = *(long *)(*plVar6 + 0x10);
  *local_d8 = lVar8;
  lVar19 = uVar22 - 1;
  *local_88 = uVar22;
  if (uVar22 != 0) {
    plVar6 = (long *)(lVar8 + -0x68 + uVar22 * 0x68);
    do {
      lVar7 = plVar6[2];
      *(int *)(plVar6 + 2) = (int)lVar7 + 1;
      if (((int)lVar7 == 0) && (plVar6[1] != 0)) {
        local_100 = 0x6d3220;
        lVar7 = FUN_006de2e0();
        *plVar6 = lVar7;
        if (lVar7 == 0) {
          uVar18 = lVar19 + 1;
          *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
          if (uVar18 < uVar22) {
            plVar6 = (long *)(lVar8 + uVar18 * 0x68);
            do {
              lVar19 = *plVar6;
              if (lVar19 == 0) {
                if (plVar6[8] != 0) {
LAB_006d3d97:
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)(puVar16 + -8) = 0x6d3db6;
                  FUN_006e2220("step->__end_fct == NULL","gconv_db.c",0xe1,"__gconv_release_step");
                }
              }
              else {
                plVar2 = plVar6 + 2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                if ((int)*plVar2 == 0) {
                  pcVar21 = (code *)(((ulong)plVar6[8] >> 0x11 | plVar6[8] << 0x2f) ^
                                    *(ulong *)(in_FS_OFFSET + 0x30));
                  if (pcVar21 != (code *)0x0) {
                    local_100 = 0x6d3d66;
                    FUN_0078e430(pcVar21);
                    local_100 = 0x6d3d6c;
                    (*pcVar21)(plVar6);
                    lVar19 = *plVar6;
                  }
                  local_100 = 0x6d3d74;
                  FUN_006de4d0(lVar19);
                  *plVar6 = 0;
                }
              }
              uVar18 = uVar18 + 1;
              plVar6 = plVar6 + 0xd;
            } while (uVar18 < uVar22);
          }
          uVar18 = 1;
          puVar16 = auStack_f8;
          goto LAB_006d32a0;
        }
        uVar18 = *(ulong *)(lVar7 + 0x20);
        lVar10 = *(long *)(lVar7 + 0x18);
        lVar7 = *(long *)(lVar7 + 0x28);
        plVar6[6] = 0;
        plVar6[7] = uVar18;
        pcVar21 = (code *)((uVar18 >> 0x11 | uVar18 << 0x2f) ^ *(ulong *)(in_FS_OFFSET + 0x30));
        plVar6[5] = lVar10;
        plVar6[8] = lVar7;
        if (pcVar21 != (code *)0x0) {
          local_100 = 0x6d3269;
          FUN_0078e430();
          local_100 = 0x6d326f;
          (*pcVar21)(plVar6);
          pcVar21 = (code *)plVar6[6];
        }
        uVar18 = (ulong)pcVar21 ^ *(ulong *)(in_FS_OFFSET + 0x30);
        plVar6[6] = uVar18 << 0x11 | uVar18 >> 0x2f;
      }
      lVar19 = lVar19 + -1;
      plVar6 = plVar6 + -0xd;
    } while (lVar19 != -1);
  }
  uVar18 = 0;
  puVar16 = auStack_f8;
  goto LAB_006d32a0;
LAB_006d352d:
  do {
    local_70 = pcVar21;
    pcVar20 = (char *)puVar14[1];
    pcStack_a0 = local_70;
    if ((*pcVar20 == '-') && (pcVar20[1] == '\0')) {
      pcVar20 = local_b0;
    }
    iVar5 = (int)((ulong)puVar14[2] >> 0x20) + (int)*(long *)(local_70 + 0x10);
    iVar24 = (int)puVar14[2] + (int)((ulong)*(long *)(local_70 + 0x10) >> 0x20);
    local_80 = CONCAT44(iVar24,iVar5);
    local_78 = CONCAT44(local_78._4_4_,iVar5);
    *(undefined8 *)(puVar16 + -8) = 0x6d358f;
    local_a8 = puVar14;
    iVar5 = thunk_FUN_00712780(pcVar20,local_98);
    puVar13 = local_c0;
    if (iVar5 == 0) {
joined_r0x006d35a1:
      for (; puVar13 != (undefined8 *)0x0; puVar13 = (undefined8 *)puVar13[5]) {
        uVar11 = *puVar13;
        *(undefined8 *)(puVar16 + -8) = 0x6d35c8;
        iVar5 = thunk_FUN_00712780(pcVar20,uVar11);
        if (iVar5 == 0) {
          iVar5 = *(int *)((long)puVar13 + 0x14);
          puVar17 = puVar16;
          if ((iVar5 != iVar24 && iVar24 <= iVar5) ||
             ((iVar5 == iVar24 && ((int)local_78 < *(int *)(puVar13 + 2))))) {
            puVar13[3] = puVar14;
            puVar13[4] = local_70;
            puVar13[2] = local_80;
          }
          goto LAB_006d35dc;
        }
      }
      puVar17 = puVar16 + -0x40;
      *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + -8);
      puVar13 = (undefined8 *)((ulong)(puVar16 + -0x31) & 0xfffffffffffffff0);
      *puVar13 = pcVar20;
      *(undefined8 *)(puVar16 + -0x48) = 0x6d3a16;
      uVar11 = thunk_FUN_007129d0(pcVar20);
      puVar13[3] = puVar14;
      puVar13[1] = uVar11;
      puVar13[2] = local_80;
      puVar13[4] = local_70;
      puVar13[5] = local_c0;
      local_c0 = puVar13;
LAB_006d35dc:
      puVar16 = puVar17;
      if (iVar24 < iVar12) {
        local_8c = (int)local_78;
        iVar12 = iVar24;
        goto LAB_006d3520;
      }
      if (iVar12 != iVar24) goto LAB_006d3520;
      puVar14 = (undefined8 *)puVar14[5];
      iVar5 = (int)local_78;
      if (local_8c <= (int)local_78) {
        iVar5 = local_8c;
      }
    }
    else {
      if (local_b8 != (char *)0x0) {
        *(undefined8 *)(puVar16 + -8) = 0x6d34f7;
        iVar5 = thunk_FUN_00712780(pcVar20,local_b8);
        puVar13 = local_c0;
        if (iVar5 == 0) goto joined_r0x006d35a1;
      }
      pcVar21 = local_d0;
      if ((iVar24 < iVar12) || ((iVar12 == iVar24 && ((int)local_78 < local_8c)))) {
        do {
          lVar19 = *(long *)pcVar21;
          *(undefined8 *)(puVar16 + -8) = 0x6d37fb;
          iVar5 = thunk_FUN_00712780(pcVar20,lVar19);
          if (iVar5 == 0) {
            if ((iVar24 < *(int *)(pcVar21 + 0x14)) ||
               ((*(int *)(pcVar21 + 0x14) == iVar24 && ((int)local_78 < *(int *)(pcVar21 + 0x10)))))
            {
              *(undefined8 **)(pcVar21 + 0x18) = puVar14;
              *(code **)(pcVar21 + 0x20) = local_70;
              pcVar21 = local_d0;
              do {
                lVar19 = *(long *)(pcVar21 + 0x18);
                if (lVar19 == 0) {
                  pcVar21 = *(code **)(pcVar21 + 0x28);
                }
                else {
                  lVar8 = *(long *)(pcVar21 + 0x20);
                  iVar5 = *(int *)(lVar19 + 0x10);
                  iVar24 = *(int *)(lVar19 + 0x14);
                  lVar19 = *(long *)(lVar8 + 0x18);
                  while (lVar19 != 0) {
                    lVar8 = *(long *)(lVar8 + 0x20);
                    iVar5 = iVar5 + (int)*(undefined8 *)(lVar19 + 0x10);
                    iVar24 = iVar24 + (int)((ulong)*(undefined8 *)(lVar19 + 0x10) >> 0x20);
                    lVar19 = *(long *)(lVar8 + 0x18);
                  }
                  *(long *)(pcVar21 + 0x10) = CONCAT44(iVar5,iVar24);
                  pcVar21 = *(code **)(pcVar21 + 0x28);
                }
                puVar13 = local_c0;
              } while (pcVar21 != (code *)0x0);
              while (puVar13 != (undefined8 *)0x0) {
                iVar5 = (int)((ulong)*(undefined8 *)(puVar13[3] + 0x10) >> 0x20) +
                        (int)*(undefined8 *)(puVar13[4] + 0x10);
                iVar24 = (int)*(undefined8 *)(puVar13[3] + 0x10) +
                         (int)((ulong)*(undefined8 *)(puVar13[4] + 0x10) >> 0x20);
                puVar13[2] = CONCAT44(iVar24,iVar5);
                bVar23 = iVar12 == iVar24;
                puVar13 = (undefined8 *)puVar13[5];
                bVar4 = iVar24 < iVar12;
                if (iVar24 < iVar12) {
                  iVar12 = iVar24;
                }
                if (bVar23 && iVar5 < local_8c || bVar4) {
                  local_8c = iVar5;
                }
              }
            }
            goto LAB_006d3520;
          }
          pcVar1 = pcVar21 + 0x28;
          pcVar21 = *(code **)pcVar1;
        } while (*(code **)pcVar1 != (code *)0x0);
        *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + -8);
        plVar6 = (long *)((ulong)(puVar16 + -0x31) & 0xfffffffffffffff0);
        *plVar6 = (long)pcVar20;
        *(undefined8 *)(puVar16 + -0x48) = 0x6d3847;
        lVar19 = thunk_FUN_007129d0(pcVar20);
        plVar6[5] = 0;
        plVar6[1] = lVar19;
        plVar6[3] = (long)local_a8;
        plVar6[4] = (long)pcStack_a0;
        plVar6[2] = local_80;
        *local_f0 = plVar6;
        local_f0 = (long **)(plVar6 + 5);
        puVar16 = puVar16 + -0x40;
      }
LAB_006d3520:
      puVar14 = (undefined8 *)puVar14[5];
      iVar5 = local_8c;
    }
    local_8c = iVar5;
    pcVar21 = local_70;
  } while (puVar14 != (undefined8 *)0x0);
  pcVar21 = *(code **)(local_70 + 0x28);
  if (pcVar21 == (code *)0x0) goto LAB_006d3621;
LAB_006d3491:
  iVar5 = *(int *)(pcVar21 + 0x14);
  goto LAB_006d3495;
LAB_006d3621:
  if (local_c0 == (undefined8 *)0x0) {
    *local_d8 = 0;
    *local_88 = 0;
    goto LAB_006d3bcc;
  }
  puVar14 = (undefined8 *)local_c0[5];
  puVar13 = local_c0;
  if ((((puVar14 != (undefined8 *)0x0) &&
       (puVar13 = puVar14, *(int *)((long)local_c0 + 0x14) <= *(int *)((long)puVar14 + 0x14))) &&
      (puVar13 = local_c0, *(int *)((long)puVar14 + 0x14) == *(int *)((long)local_c0 + 0x14))) &&
     (*(int *)(puVar14 + 2) < *(int *)(local_c0 + 2))) {
    puVar13 = puVar14;
  }
  lVar19 = puVar13[4];
  if (lVar19 == 0) {
    *(undefined8 *)(puVar16 + -8) = 0x6d3c8f;
    lVar19 = FUN_007101b0(0);
    if (lVar19 == 0) goto LAB_006d3c97;
    uVar22 = 0;
    *local_88 = 0;
  }
  else {
    uVar22 = 0;
    do {
      uVar18 = uVar22;
      lVar19 = *(long *)(lVar19 + 0x20);
      uVar22 = uVar18 + 1;
    } while (lVar19 != 0);
    *(undefined8 *)(puVar16 + -8) = 0x6d369c;
    lVar8 = FUN_007101b0(uVar22 * 0x68);
    if (lVar8 == 0) {
LAB_006d3c97:
      lVar19 = 0;
      uVar22 = 0;
      *local_88 = 0;
      *local_d8 = 0;
      iVar5 = 3;
      goto LAB_006d3afc;
    }
    *local_88 = uVar22;
    lVar19 = lVar8;
    if (uVar22 != 0) {
      puVar14 = (undefined8 *)(lVar8 + -0x68 + uVar22 * 0x68);
      local_80 = 0;
      local_78 = 0;
      do {
        uVar15 = uVar18;
        lVar7 = local_c8;
        if (uVar15 == 0) {
          *(undefined8 *)(puVar16 + -8) = 0x6d3a54;
          local_78 = FUN_007128a0(lVar7);
          *(long *)(lVar8 + 0x18) = local_78;
          if (local_78 != 0) goto LAB_006d3718;
          uVar22 = 1;
LAB_006d3a8e:
          iVar5 = 0;
          uVar18 = *local_88;
          if (uVar22 < uVar18) {
LAB_006d3c05:
            plVar6 = (long *)(lVar8 + uVar22 * 0x68);
            goto LAB_006d3c63;
          }
          uVar22 = 0;
          lVar19 = 0;
          *(undefined8 *)(puVar16 + -8) = 0x6d3aaf;
          FUN_007104f0(lVar8);
          lVar8 = local_78;
          *(undefined8 *)(puVar16 + -8) = 0x6d3ab8;
          FUN_007104f0(lVar8);
          lVar8 = local_80;
          *(undefined8 *)(puVar16 + -8) = 0x6d3ac1;
          FUN_007104f0(lVar8);
          *local_88 = 0;
          *local_d8 = 0;
          iVar5 = 1;
          goto LAB_006d3afc;
        }
        puVar14[3] = *(undefined8 *)puVar13[4];
LAB_006d3718:
        if (*local_88 == uVar22) {
          uVar11 = *puVar13;
          *(undefined8 *)(puVar16 + -8) = 0x6d3a78;
          local_80 = FUN_007128a0(uVar11);
          puVar14[4] = local_80;
          if (local_80 != 0) goto LAB_006d3739;
LAB_006d3a8a:
          uVar22 = uVar15 + 1;
          goto LAB_006d3a8e;
        }
        puVar14[4] = *(undefined8 *)(lVar8 + 0x18 + uVar22 * 0x68);
LAB_006d3739:
        *(undefined4 *)(puVar14 + 2) = 1;
        lVar7 = puVar13[3];
        puVar14[0xc] = 0;
        pcVar20 = *(char **)(lVar7 + 0x18);
        if (*pcVar20 == '/') {
          *(undefined8 *)(puVar16 + -8) = 0x6d375d;
          puVar9 = (undefined8 *)FUN_006de2e0();
          if (puVar9 == (undefined8 *)0x0) goto LAB_006d3a8a;
          uVar11 = *puVar9;
          *puVar14 = puVar9;
          puVar14[1] = uVar11;
          uVar18 = puVar9[4];
          uVar11 = puVar9[3];
          uVar3 = puVar9[5];
          puVar14[6] = 0;
          puVar14[7] = uVar18;
          puVar14[8] = uVar3;
          puVar14[5] = uVar11;
          pcVar21 = (code *)((uVar18 >> 0x11 | uVar18 << 0x2f) ^ *(ulong *)(in_FS_OFFSET + 0x30));
          local_70 = pcVar21;
          if (pcVar21 == (code *)0x0) {
LAB_006d37ce:
            uVar22 = (ulong)pcVar21 ^ *(ulong *)(in_FS_OFFSET + 0x30);
            puVar14[6] = uVar22 << 0x11 | uVar22 >> 0x2f;
            goto LAB_006d36e8;
          }
          *(undefined8 *)(puVar16 + -8) = 0x6d37b8;
          FUN_0078e430();
          pcVar21 = local_70;
          *(undefined8 *)(puVar16 + -8) = 0x6d37c1;
          iVar5 = (*pcVar21)(puVar14);
          if (iVar5 == 0) {
            pcVar21 = (code *)puVar14[6];
            goto LAB_006d37ce;
          }
          puVar14[8] = *(ulong *)(in_FS_OFFSET + 0x30) << 0x11 |
                       *(ulong *)(in_FS_OFFSET + 0x30) >> 0x2f;
          uVar22 = uVar22 - 1;
          uVar18 = *local_88;
          if (uVar22 < uVar18) goto LAB_006d3c05;
          local_70 = (code *)CONCAT44(local_70._4_4_,iVar5);
          lVar19 = 0;
          uVar22 = 0;
          *(undefined8 *)(puVar16 + -8) = 0x6d3ddd;
          FUN_007104f0(lVar8);
          lVar8 = local_78;
          *(undefined8 *)(puVar16 + -8) = 0x6d3de6;
          FUN_007104f0(lVar8);
          lVar8 = local_80;
          *(undefined8 *)(puVar16 + -8) = 0x6d3def;
          FUN_007104f0(lVar8);
          *local_88 = 0;
          *local_d8 = 0;
          iVar5 = (int)local_70;
          goto LAB_006d3afc;
        }
        *(undefined8 *)(puVar16 + -8) = 0x6d36e8;
        FUN_006d5340(pcVar20,puVar14);
LAB_006d36e8:
        puVar13 = (undefined8 *)puVar13[4];
        puVar14 = puVar14 + -0xd;
        uVar18 = uVar15 - 1;
        uVar22 = uVar15;
      } while (uVar15 != 0);
      uVar22 = *local_88;
    }
  }
  *local_d8 = lVar19;
  iVar5 = 0;
  goto LAB_006d3afc;
LAB_006d3c63:
  do {
    lVar19 = *plVar6;
    if (lVar19 == 0) {
      if (plVar6[8] != 0) goto LAB_006d3d97;
    }
    else {
      plVar2 = plVar6 + 2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      if ((int)*plVar2 == 0) {
        pcVar21 = (code *)(((ulong)plVar6[8] >> 0x11 | plVar6[8] << 0x2f) ^
                          *(ulong *)(in_FS_OFFSET + 0x30));
        if (pcVar21 != (code *)0x0) {
          *(undefined8 *)(puVar16 + -8) = 0x6d3c3a;
          FUN_0078e430(pcVar21);
          *(undefined8 *)(puVar16 + -8) = 0x6d3c40;
          (*pcVar21)(plVar6);
          lVar19 = *plVar6;
        }
        *(undefined8 *)(puVar16 + -8) = 0x6d3c48;
        FUN_006de4d0(lVar19);
        *plVar6 = 0;
        uVar18 = *local_88;
      }
    }
    uVar22 = uVar22 + 1;
    plVar6 = plVar6 + 0xd;
  } while (uVar22 < uVar18);
  local_70 = (code *)CONCAT44(local_70._4_4_,iVar5);
  lVar19 = 0;
  uVar22 = 0;
  *(undefined8 *)(puVar16 + -8) = 0x6d3ce6;
  FUN_007104f0(lVar8);
  lVar8 = local_78;
  *(undefined8 *)(puVar16 + -8) = 0x6d3cef;
  FUN_007104f0(lVar8);
  lVar8 = local_80;
  *(undefined8 *)(puVar16 + -8) = 0x6d3cf8;
  FUN_007104f0(lVar8);
  *local_88 = 0;
  *local_d8 = 0;
  iVar5 = (int)local_70;
  if ((int)local_70 == 0) {
LAB_006d3bcc:
    uVar22 = 0;
    lVar19 = 0;
    iVar5 = 1;
  }
LAB_006d3afc:
  lVar8 = local_c8;
  local_70 = (code *)CONCAT44(local_70._4_4_,iVar5);
  *(undefined8 *)(puVar16 + -8) = 0x6d3b0c;
  lVar7 = thunk_FUN_007129d0(lVar8);
  pcVar20 = local_b0;
  *(undefined8 *)(puVar16 + -8) = 0x6d3b1c;
  lVar10 = thunk_FUN_007129d0(pcVar20);
  *(undefined8 *)(puVar16 + -8) = 0x6d3b2a;
  plVar6 = (long *)FUN_007101b0(lVar7 + 0x22 + lVar10);
  lVar8 = local_c8;
  uVar18 = (ulong)local_70 & 0xffffffff;
  if (plVar6 != (long *)0x0) {
    *plVar6 = (long)(plVar6 + 4);
    *(undefined8 *)(puVar16 + -8) = 0x6d3b50;
    uVar11 = thunk_FUN_00713820(plVar6 + 4,lVar8,lVar7 + 1);
    pcVar20 = local_b0;
    *(undefined8 *)(puVar16 + -8) = 0x6d3b62;
    lVar8 = thunk_FUN_00713a50(uVar11,pcVar20,lVar10 + 1);
    puVar14 = local_e0;
    pcVar21 = local_e8;
    plVar6[3] = uVar22;
    plVar6[1] = lVar8;
    plVar6[2] = lVar19;
    *(undefined8 *)(puVar16 + -8) = 0x6d3b8f;
    lVar19 = FUN_0076f440(plVar6,puVar14,pcVar21);
    uVar18 = (ulong)local_70 & 0xffffffff;
    if (lVar19 == 0) {
      *(undefined8 *)(puVar16 + -8) = 0x6d3ba4;
      FUN_007104f0(plVar6);
      uVar18 = (ulong)local_70 & 0xffffffff;
    }
  }
LAB_006d32a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar16 + -8) = &UNK_006d3e16;
    FUN_00771f60();
  }
  return uVar18;
}

