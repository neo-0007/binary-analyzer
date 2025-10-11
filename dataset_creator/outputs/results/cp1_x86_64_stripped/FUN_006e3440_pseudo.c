
long * FUN_006e3440(undefined *param_1,long *param_2,long *param_3,int param_4,long param_5,
                   uint param_6)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  long *plVar18;
  char **ppcVar19;
  undefined1 *puVar21;
  char **ppcVar23;
  long *plVar24;
  undefined8 *puVar25;
  long in_FS_OFFSET;
  bool bVar26;
  char *local_108;
  char *local_100;
  undefined8 local_f8;
  long *local_f0;
  long local_e8;
  undefined *local_e0;
  long *local_d8;
  undefined4 local_cc;
  long *local_c8;
  long *plStack_c0;
  long local_b8;
  long *local_b0;
  uint local_a8;
  int local_a4;
  long *local_a0;
  long *local_98;
  long local_90;
  undefined *local_88;
  uint local_80;
  undefined8 local_78;
  undefined8 local_68;
  long *local_50;
  long local_40;
  char **ppcVar20;
  undefined1 *puVar22;
  
  ppcVar20 = &local_108;
  ppcVar19 = &local_108;
  ppcVar23 = &local_108;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (long *)0x0;
  local_d8 = param_3;
  local_b8 = param_5;
  local_a8 = param_6;
  local_a4 = param_4;
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
  }
  else {
    ppcVar23 = &local_108;
    if ((param_6 < 0xd) && (ppcVar23 = &local_108, param_6 != 6)) {
      local_cc = *(undefined4 *)(in_FS_OFFSET + -0x58);
      FUN_0070af10(&DAT_00946120);
      FUN_0070af10(&DAT_009462c0);
      if (param_1 == (undefined *)0x0) {
        param_1 = PTR_s_messages_0093daa8;
      }
      local_68 = 0;
      local_80 = local_a8;
      local_88 = param_1;
      local_50 = param_2;
      local_f8 = FUN_007908e0(local_a8);
      local_78 = local_f8;
      FUN_0070af10(&DAT_00946340);
      plVar6 = (long *)FUN_0076f840(&local_88,&DAT_00946330,FUN_006e2a30);
      local_f0 = plVar6;
      FUN_0070b100(&DAT_00946340);
      puVar25 = DAT_009462f8;
      if ((plVar6 != (long *)0x0) && (lVar8 = *plVar6, *(int *)(lVar8 + 0x18) == DAT_009463c0)) {
        local_a0 = *(long **)(lVar8 + 0x28);
        plVar6 = local_a0;
        if (local_a4 != 0) {
          lVar11 = *(long *)(lVar8 + 0x30);
          lVar8 = *(long *)(*(long *)(lVar8 + 0x20) + 0x10);
          uVar14 = FUN_006e2840(*(undefined8 *)(lVar8 + 0xb8),local_b8);
          plVar24 = local_a0;
          plVar6 = plVar24;
          if (uVar14 < *(ulong *)(lVar8 + 0xc0)) {
            plVar18 = (long *)((long)local_a0 + lVar11);
            plVar12 = local_a0;
            do {
              bVar26 = uVar14 == 0;
              uVar14 = uVar14 - 1;
              plVar6 = plVar12;
              if (bVar26) break;
              lVar8 = FUN_00401230(plVar12,0);
              plVar12 = (long *)(lVar8 + 1);
              plVar6 = plVar24;
            } while (plVar12 < plVar18);
          }
        }
        local_a0 = plVar6;
        FUN_0070b100(&DAT_009462c0);
        FUN_0070b100(&DAT_00946120);
        *(undefined4 *)(in_FS_OFFSET + -0x58) = local_cc;
        ppcVar23 = &local_108;
        param_2 = local_a0;
        goto LAB_006e3850;
      }
      for (; puVar25 != (undefined8 *)0x0; puVar25 = (undefined8 *)*puVar25) {
        iVar5 = thunk_FUN_00712780(param_1,puVar25 + 3);
        if (iVar5 == 0) {
          local_a0 = (long *)puVar25[1];
          if ((char)*local_a0 == '/') goto LAB_006e35a9;
          lVar8 = FUN_0076dcf0(0,0);
          ppcVar23 = &local_108;
          if (lVar8 == 0) goto LAB_006e38e0;
          iVar5 = FUN_006f4ae0(&local_98,"%s/%s",lVar8,local_a0);
          FUN_007104f0(lVar8);
          ppcVar23 = &local_108;
          if (iVar5 < 0) goto LAB_006e38e0;
          local_a0 = local_98;
          goto LAB_006e35a9;
        }
        if (iVar5 < 0) {
          puVar25 = (undefined8 *)0x0;
          break;
        }
      }
      local_a0 = (long *)0x824400;
LAB_006e35a9:
      bVar1 = (&DAT_00823a20)[(int)local_a8];
      pcVar7 = (char *)FUN_007908e0((long)(int)local_a8);
      if ((((*pcVar7 != 'C') || (pcVar7[1] != '\0')) &&
          (pcVar13 = (char *)FUN_006e8e30("LANGUAGE"), pcVar13 != (char *)0x0)) &&
         (*pcVar13 != '\0')) {
        pcVar7 = pcVar13;
      }
      local_e8 = thunk_FUN_007129d0(param_1);
      lVar8 = thunk_FUN_007129d0("LC_COLLATE" + bVar1);
      uVar14 = local_e8 + 0x1c + lVar8;
      ppcVar23 = &local_108;
      while (ppcVar20 != (char **)((long)&local_108 - (uVar14 & 0xfffffffffffff000))) {
        ppcVar19 = (char **)((long)ppcVar23 + -0x1000);
        *(undefined8 *)((long)ppcVar23 + -8) = *(undefined8 *)((long)ppcVar23 + -8);
        ppcVar20 = (char **)((long)ppcVar23 + -0x1000);
        ppcVar23 = (char **)((long)ppcVar23 + -0x1000);
      }
      uVar14 = (ulong)((uint)uVar14 & 0xff0);
      lVar8 = -uVar14;
      puVar21 = (undefined1 *)((long)ppcVar19 + lVar8);
      puVar22 = (undefined1 *)((long)ppcVar19 + lVar8);
      if (uVar14 != 0) {
        *(undefined8 *)((long)ppcVar19 + -8) = *(undefined8 *)((long)ppcVar19 + -8);
      }
      local_c8 = (long *)((ulong)((long)ppcVar19 + lVar8 + 0xf) & 0xfffffffffffffff0);
      *(undefined8 *)((long)ppcVar19 + lVar8 + -8) = 0x6e3661;
      puVar9 = (undefined1 *)thunk_FUN_00713930(local_c8,"LC_COLLATE" + bVar1);
      *puVar9 = 0x2f;
      *(undefined8 *)((long)ppcVar19 + lVar8 + -8) = 0x6e3677;
      puVar10 = (undefined4 *)thunk_FUN_00713820(puVar9 + 1,param_1,local_e8);
      *puVar10 = 0x6f6d2e;
      *(undefined8 *)((long)ppcVar19 + lVar8 + -8) = 0x6e3685;
      lVar11 = thunk_FUN_007129d0(pcVar7);
      puVar9 = (undefined1 *)((long)ppcVar19 + lVar8);
      while (puVar21 !=
             (undefined1 *)((long)ppcVar19 + (lVar8 - (lVar11 + 0x18U & 0xfffffffffffff000)))) {
        puVar22 = puVar9 + -0x1000;
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        puVar21 = puVar9 + -0x1000;
        puVar9 = puVar9 + -0x1000;
      }
      uVar14 = (ulong)((uint)(lVar11 + 0x18U) & 0xff0);
      lVar8 = -uVar14;
      if (uVar14 != 0) {
        *(undefined8 *)(puVar22 + -8) = *(undefined8 *)(puVar22 + -8);
      }
      pcVar13 = (char *)((ulong)(puVar22 + lVar8 + 0xf) & 0xfffffffffffffff0);
      local_e0 = param_1;
LAB_006e36e0:
      do {
        do {
          for (; cVar4 = *pcVar7, cVar4 == ':'; pcVar7 = pcVar7 + 1) {
          }
          pcVar17 = pcVar13;
          if (cVar4 == '\0') {
            pcVar13[0] = 'C';
            pcVar13[1] = '\0';
            break;
          }
          do {
            pcVar7 = pcVar7 + 1;
            *pcVar17 = cVar4;
            iVar5 = DAT_0093ae30;
            pcVar17 = pcVar17 + 1;
            cVar4 = *pcVar7;
            if (cVar4 == '\0') break;
          } while (cVar4 != ':');
          *pcVar17 = '\0';
          if (iVar5 == 0) break;
          *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e3b03;
          lVar11 = thunk_FUN_00712710(pcVar13,0x2f);
        } while (lVar11 != 0);
        if ((*pcVar13 == 'C') && (ppcVar23 = (char **)(puVar22 + lVar8), pcVar13[1] == '\0'))
        goto LAB_006e38e0;
        *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e371c;
        iVar5 = thunk_FUN_00712780(pcVar13,"POSIX");
        ppcVar23 = (char **)(puVar22 + lVar8);
        if (iVar5 == 0) goto LAB_006e38e0;
        *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e373d;
        plVar6 = (long *)FUN_006e3d20(local_a0,pcVar13,local_c8,puVar25);
      } while (plVar6 == (long *)0x0);
      local_b0 = &local_90;
      *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e3766;
      plVar12 = (long *)FUN_006e2ab0(plVar6,puVar25,param_2,1);
      plVar24 = local_b0;
      if (plVar12 == (long *)0x0) {
        lVar11 = plVar6[4];
        if (lVar11 != 0) {
          lVar15 = 0;
          local_108 = pcVar13;
          local_100 = pcVar7;
          do {
            local_b0 = (long *)CONCAT44(local_b0._4_4_,(int)lVar15);
            *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e38d5;
            plVar12 = (long *)FUN_006e2ab0(lVar11,puVar25,param_2,1,plVar24);
            ppcVar23 = (char **)(puVar22 + lVar8);
            if (plVar12 == (long *)0xffffffffffffffff) goto LAB_006e38e0;
            if (plVar12 != (long *)0x0) {
              plVar6 = (long *)plVar6[(long)(int)local_b0 + 4];
              goto LAB_006e378d;
            }
            lVar11 = plVar6[lVar15 + 5];
            pcVar7 = local_100;
            pcVar13 = local_108;
            lVar15 = lVar15 + 1;
          } while (lVar11 != 0);
        }
        goto LAB_006e36e0;
      }
      ppcVar23 = (char **)(puVar22 + lVar8);
      if (plVar12 != (long *)0xffffffffffffffff) {
LAB_006e378d:
        puVar3 = local_e0;
        *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e37bc;
        local_c8 = plVar6;
        plStack_c0 = plVar12;
        local_b0 = plVar6;
        local_a0 = plVar12;
        FUN_007104f0(local_98);
        plVar6 = local_b0;
        if (local_f0 == (long *)0x0) {
          local_b0 = local_a0;
          local_a0 = plVar6;
          *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e3bc8;
          lVar15 = thunk_FUN_007129d0(param_2);
          *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e3bd8;
          lVar16 = thunk_FUN_007129d0(local_f8);
          lVar11 = local_e8;
          *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e3bec;
          plVar12 = (long *)FUN_007101b0(local_e8 + 0x3a + lVar16 + lVar15 + 1);
          plVar6 = local_a0;
          plVar24 = local_b0;
          if (plVar12 != (long *)0x0) {
            local_c8 = local_b0;
            *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e3c20;
            lVar15 = thunk_FUN_00713820(plVar12 + 7,param_2,lVar15 + 1);
            *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e3c31;
            thunk_FUN_00713a50(lVar15,puVar3,lVar11 + 1);
            lVar11 = lVar11 + 1 + lVar15;
            *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e3c43;
            thunk_FUN_00712800(lVar11,local_f8);
            plVar12[2] = lVar11;
            *plVar12 = lVar15;
            *(uint *)(plVar12 + 1) = local_a8;
            iVar5 = DAT_009463c0;
            plVar12[4] = (long)local_a0;
            *(int *)(plVar12 + 3) = iVar5;
            plVar12[5] = (long)local_c8;
            plVar12[6] = local_90;
            local_b0 = local_a0;
            local_a0 = local_c8;
            *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e3ca0;
            FUN_0070b2d0(&DAT_00946340);
            *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e3cb6;
            plVar18 = (long *)FUN_0076f440(plVar12,&DAT_00946330,FUN_006e2a30);
            *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e3cc5;
            FUN_0070b100(&DAT_00946340);
            plVar6 = local_b0;
            if ((plVar18 == (long *)0x0) || (plVar24 = local_a0, (long *)*plVar18 != plVar12)) {
              local_b0 = local_a0;
              local_a0 = plVar6;
              *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e3cf7;
              FUN_007104f0(plVar12);
              plVar6 = local_a0;
              plVar24 = local_b0;
            }
          }
        }
        else {
          lVar11 = *local_f0;
          *(int *)(lVar11 + 0x18) = DAT_009463c0;
          *(long **)(lVar11 + 0x20) = local_c8;
          *(long **)(lVar11 + 0x28) = plStack_c0;
          *(long *)(lVar11 + 0x30) = local_90;
          plVar24 = local_a0;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = local_cc;
        if (local_a4 == 0) goto LAB_006e3820;
        lVar11 = plVar6[2];
        uVar2 = *(undefined8 *)(lVar11 + 0xb8);
        *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e3b67;
        local_a0 = plVar24;
        uVar14 = FUN_006e2840(uVar2,local_b8);
        plVar6 = local_a0;
        plVar24 = plVar6;
        if (*(ulong *)(lVar11 + 0xc0) <= uVar14) goto LAB_006e3820;
        plVar18 = (long *)((long)local_a0 + local_90);
        plVar12 = local_a0;
        goto LAB_006e3b90;
      }
LAB_006e38e0:
      *(undefined8 *)((long)ppcVar23 + -8) = 0x6e38ec;
      FUN_007104f0(local_98);
      *(undefined8 *)((long)ppcVar23 + -8) = 0x6e38f8;
      FUN_0070b100(&DAT_009462c0);
      *(undefined8 *)((long)ppcVar23 + -8) = 0x6e3904;
      FUN_0070b100(&DAT_00946120);
      *(undefined4 *)(in_FS_OFFSET + -0x58) = local_cc;
    }
    if ((local_a4 != 0) && (local_b8 != 1)) {
      param_2 = local_d8;
    }
  }
  goto LAB_006e3850;
  while( true ) {
    *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e3ba1;
    lVar11 = FUN_00401230(plVar12,0);
    plVar12 = (long *)(lVar11 + 1);
    plVar24 = plVar6;
    if (plVar18 <= plVar12) break;
LAB_006e3b90:
    bVar26 = uVar14 == 0;
    uVar14 = uVar14 - 1;
    plVar24 = plVar12;
    if (bVar26) break;
  }
LAB_006e3820:
  *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e3833;
  local_a0 = plVar24;
  FUN_0070b100(&DAT_009462c0);
  *(undefined8 *)(puVar22 + lVar8 + -8) = 0x6e383f;
  FUN_0070b100(&DAT_00946120);
  ppcVar23 = (char **)(puVar22 + lVar8);
  param_2 = local_a0;
LAB_006e3850:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppcVar23 + -8) = 0x6e3d0f;
  FUN_00771f60();
}

