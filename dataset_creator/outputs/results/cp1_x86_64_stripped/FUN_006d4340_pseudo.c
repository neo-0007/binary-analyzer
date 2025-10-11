
/* WARNING: Removing unreachable block (ram,0x006d45e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006d4340(void)

{
  long **pplVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char **ppcVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  long *plVar12;
  long **pplVar13;
  undefined1 *puVar15;
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  int iVar19;
  long lVar20;
  long *plVar21;
  long in_FS_OFFSET;
  undefined1 auStack_98 [8];
  char local_90 [8];
  char acStack_88 [8];
  char local_80 [8];
  char acStack_78 [8];
  undefined8 local_70;
  long *local_68;
  long local_60;
  char **local_58;
  char *local_50;
  char *local_48;
  long local_40;
  long **pplVar14;
  
  lVar9 = DAT_009460d0;
  pplVar14 = &local_68;
  pplVar13 = &local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_009460e0 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    local_70 = 0x6d46f3;
    FUN_006e2220("result == NULL","gconv_conf.c",0x16a,"__gconv_get_path");
  }
  if (DAT_009460d0 == 0) {
    puVar15 = auStack_98;
    local_58 = (char **)0x1;
    local_48 = local_90;
    local_60 = 0;
    local_50 = (char *)0x20;
    local_90 = (char  [8])s__usr_lib_x86_64_linux_gnu_gconv_00823320._0_8_;
    acStack_88 = (char  [8])s__usr_lib_x86_64_linux_gnu_gconv_00823320._8_8_;
    local_80 = (char  [8])s__usr_lib_x86_64_linux_gnu_gconv_00823320._16_8_;
    acStack_78 = (char  [8])s__usr_lib_x86_64_linux_gnu_gconv_00823320._24_8_;
    lVar9 = 0;
  }
  else {
    local_70 = 0x6d4388;
    lVar7 = thunk_FUN_007129d0(DAT_009460d0);
    local_50 = (char *)(lVar7 + 0x21);
    pplVar1 = &local_68;
    while (pplVar14 != (long **)((long)&local_68 - (lVar7 + 0x38U & 0xfffffffffffff000))) {
      pplVar13 = (long **)((long)pplVar1 + -0x1000);
      *(undefined8 *)((long)pplVar1 + -8) = *(undefined8 *)((long)pplVar1 + -8);
      pplVar14 = (long **)((long)pplVar1 + -0x1000);
      pplVar1 = (long **)((long)pplVar1 + -0x1000);
    }
    uVar16 = (ulong)((uint)(lVar7 + 0x38U) & 0xff0);
    lVar7 = -uVar16;
    puVar15 = (undefined1 *)((long)pplVar13 + lVar7);
    if (uVar16 != 0) {
      *(undefined8 *)((long)pplVar13 + -8) = *(undefined8 *)((long)pplVar13 + -8);
    }
    local_48 = (char *)((ulong)((long)pplVar13 + lVar7 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((long)pplVar13 + lVar7 + -8) = 0x6d43eb;
    puVar8 = (undefined1 *)thunk_FUN_00713820(local_48,lVar9);
    uVar5 = s__usr_lib_x86_64_linux_gnu_gconv_00823320._24_8_;
    uVar4 = s__usr_lib_x86_64_linux_gnu_gconv_00823320._16_8_;
    uVar3 = s__usr_lib_x86_64_linux_gnu_gconv_00823320._8_8_;
    uVar2 = s__usr_lib_x86_64_linux_gnu_gconv_00823320._0_8_;
    *puVar8 = 0x3a;
    *(undefined8 *)(puVar8 + 1) = uVar2;
    *(undefined8 *)(puVar8 + 9) = uVar3;
    *(undefined8 *)(puVar8 + 0x11) = uVar4;
    *(undefined8 *)(puVar8 + 0x19) = uVar5;
    *(undefined8 *)((long)pplVar13 + lVar7 + -8) = 0x6d440f;
    lVar9 = FUN_0076dcf0(0,0);
    if (lVar9 == 0) {
      local_58 = (char **)0x1;
      local_60 = 0;
    }
    else {
      *(undefined8 *)((long)pplVar13 + lVar7 + -8) = 0x6d4423;
      local_60 = thunk_FUN_007129d0(lVar9);
      local_58 = (char **)(local_60 + 1);
      puVar15 = (undefined1 *)((long)pplVar13 + lVar7);
    }
  }
  pcVar10 = local_48;
  *(undefined8 *)(puVar15 + -8) = 0x6d4440;
  lVar7 = thunk_FUN_00712710(pcVar10,0x3a);
  if (lVar7 == 0) {
    lVar7 = 0;
    lVar20 = 1;
    lVar17 = 0x20;
  }
  else {
    iVar19 = 1;
    lVar17 = 0;
    do {
      lVar20 = lVar7;
      iVar19 = iVar19 + (uint)(lVar20 != lVar17 + 1);
      *(undefined8 *)(puVar15 + -8) = 0x6d447b;
      lVar7 = thunk_FUN_00712710(lVar20 + 1,0x3a);
      lVar17 = lVar20;
    } while (lVar7 != 0);
    lVar20 = (long)iVar19;
    lVar7 = (long)(iVar19 + -1) * (long)local_58;
    lVar17 = (long)(iVar19 + 1) << 4;
  }
  pcVar18 = local_50 + lVar7 + lVar17 + lVar20;
  *(undefined8 *)(puVar15 + -8) = 0x6d44a9;
  local_68 = (long *)FUN_007101b0(pcVar18);
  if (local_68 == (long *)0x0) {
    local_68 = &DAT_00823310;
  }
  else {
    DAT_009460d8 = 0;
    plVar21 = local_68 + (lVar20 + 1) * 2;
    local_58 = &local_48;
    *(undefined8 *)(puVar15 + -8) = 0x6d44e9;
    pcVar10 = (char *)FUN_00713470(pcVar10,":",&local_48);
    if (pcVar10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar15 + -8) = 0x6d46cf;
      FUN_006e2220("elem != NULL","gconv_conf.c",0x1a8,"__gconv_get_path");
    }
    iVar19 = 0;
    plVar12 = local_68;
    do {
      lVar7 = local_60;
      *plVar12 = (long)plVar21;
      if (*pcVar10 != '/') {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar15 + -8) = 0x6d46a0;
          FUN_006e2220("cwd != NULL","gconv_conf.c",0x1ae,"__gconv_get_path");
        }
        local_50 = pcVar10;
        *(undefined8 *)(puVar15 + -8) = 0x6d4525;
        puVar8 = (undefined1 *)thunk_FUN_00713820(plVar21,lVar9,lVar7);
        *puVar8 = 0x2f;
        plVar21 = (long *)(puVar8 + 1);
        pcVar10 = local_50;
      }
      *(undefined8 *)(puVar15 + -8) = 0x6d453b;
      puVar8 = (undefined1 *)thunk_FUN_00713930(plVar21,pcVar10);
      ppcVar6 = local_58;
      if (puVar8[-1] != '/') {
        *puVar8 = 0x2f;
        puVar8 = puVar8 + 1;
      }
      uVar16 = DAT_009460d8;
      uVar11 = (long)puVar8 - *plVar12;
      plVar12[1] = uVar11;
      if (uVar16 < uVar11) {
        DAT_009460d8 = uVar11;
      }
      *puVar8 = 0;
      plVar21 = (long *)(puVar8 + 1);
      iVar19 = iVar19 + 1;
      plVar12 = plVar12 + 2;
      *(undefined8 *)(puVar15 + -8) = 0x6d457f;
      pcVar10 = (char *)FUN_00713470(0,":",ppcVar6);
    } while (pcVar10 != (char *)0x0);
    local_68[(long)iVar19 * 2] = 0;
    (local_68 + (long)iVar19 * 2)[1] = 0;
  }
  DAT_009460e0 = local_68;
  *(undefined8 *)(puVar15 + -8) = 0x6d45bb;
  FUN_007104f0(lVar9);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar15 + -8) = 0x6d46d4;
    FUN_00771f60();
  }
  return;
}

