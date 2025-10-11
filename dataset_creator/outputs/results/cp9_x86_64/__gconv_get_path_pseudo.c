
/* WARNING: Removing unreachable block (ram,0x006cabd8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __gconv_get_path(void)

{
  long **pplVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char **__save_ptr;
  size_t sVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  long *plVar15;
  long **pplVar16;
  undefined1 *puVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  long *__dest;
  long in_FS_OFFSET;
  undefined1 auStack_98 [8];
  char local_90 [8];
  char acStack_88 [8];
  char local_80 [8];
  char acStack_78 [8];
  undefined *local_70;
  long *local_68;
  size_t local_60;
  char **local_58;
  char *local_50;
  char *local_48;
  long local_40;
  long **pplVar17;
  
  pcVar8 = __gconv_path_envvar;
  pplVar17 = &local_68;
  pplVar16 = &local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (__gconv_path_elem != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    local_70 = &UNK_006cace3;
    __assert_fail("result == NULL","gconv_conf.c",0x16a,"__gconv_get_path");
  }
  if (__gconv_path_envvar == (char *)0x0) {
    puVar18 = auStack_98;
    local_58 = (char **)0x1;
    local_48 = local_90;
    local_60 = 0;
    local_50 = (char *)0x20;
    local_90 = (char  [8])default_gconv_path._0_8_;
    acStack_88 = (char  [8])default_gconv_path._8_8_;
    local_80 = (char  [8])default_gconv_path._16_8_;
    acStack_78 = (char  [8])default_gconv_path._24_8_;
    pcVar8 = (char *)0x0;
  }
  else {
    local_70 = (undefined *)0x6ca978;
    sVar6 = strlen(__gconv_path_envvar);
    local_50 = (char *)(sVar6 + 0x21);
    pplVar1 = &local_68;
    while (pplVar17 != (long **)((long)&local_68 - (sVar6 + 0x38 & 0xfffffffffffff000))) {
      pplVar16 = (long **)((long)pplVar1 + -0x1000);
      *(undefined8 *)((long)pplVar1 + -8) = *(undefined8 *)((long)pplVar1 + -8);
      pplVar17 = (long **)((long)pplVar1 + -0x1000);
      pplVar1 = (long **)((long)pplVar1 + -0x1000);
    }
    uVar19 = (ulong)((uint)(sVar6 + 0x38) & 0xff0);
    lVar12 = -uVar19;
    puVar18 = (undefined1 *)((long)pplVar16 + lVar12);
    if (uVar19 != 0) {
      *(undefined8 *)((long)pplVar16 + -8) = *(undefined8 *)((long)pplVar16 + -8);
    }
    local_48 = (char *)((ulong)((long)pplVar16 + lVar12 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((long)pplVar16 + lVar12 + -8) = 0x6ca9db;
    puVar7 = (undefined1 *)mempcpy(local_48,pcVar8,sVar6);
    uVar5 = default_gconv_path._24_8_;
    uVar4 = default_gconv_path._16_8_;
    uVar3 = default_gconv_path._8_8_;
    uVar2 = default_gconv_path._0_8_;
    *puVar7 = 0x3a;
    *(undefined8 *)(puVar7 + 1) = uVar2;
    *(undefined8 *)(puVar7 + 9) = uVar3;
    *(undefined8 *)(puVar7 + 0x11) = uVar4;
    *(undefined8 *)(puVar7 + 0x19) = uVar5;
    *(undefined8 *)((long)pplVar16 + lVar12 + -8) = 0x6ca9ff;
    pcVar8 = getcwd((char *)0x0,0);
    if (pcVar8 == (char *)0x0) {
      local_58 = (char **)0x1;
      local_60 = 0;
    }
    else {
      *(undefined8 *)((long)pplVar16 + lVar12 + -8) = 0x6caa13;
      local_60 = strlen(pcVar8);
      local_58 = (char **)(local_60 + 1);
      puVar18 = (undefined1 *)((long)pplVar16 + lVar12);
    }
  }
  pcVar11 = local_48;
  *(undefined8 *)(puVar18 + -8) = 0x6caa30;
  pcVar9 = strchr(pcVar11,0x3a);
  if (pcVar9 == (char *)0x0) {
    lVar12 = 0;
    lVar22 = 1;
    lVar20 = 0x20;
  }
  else {
    iVar21 = 1;
    pcVar14 = (char *)0x0;
    do {
      pcVar10 = pcVar9;
      iVar21 = iVar21 + (uint)(pcVar10 != pcVar14 + 1);
      *(undefined8 *)(puVar18 + -8) = 0x6caa6b;
      pcVar9 = strchr(pcVar10 + 1,0x3a);
      pcVar14 = pcVar10;
    } while (pcVar9 != (char *)0x0);
    lVar22 = (long)iVar21;
    lVar12 = (long)(iVar21 + -1) * (long)local_58;
    lVar20 = (long)(iVar21 + 1) << 4;
  }
  pcVar9 = local_50 + lVar12 + lVar20 + lVar22;
  *(undefined8 *)(puVar18 + -8) = 0x6caa99;
  local_68 = (long *)malloc((size_t)pcVar9);
  if (local_68 == (long *)0x0) {
    local_68 = &in6addr_any;
  }
  else {
    __gconv_max_path_elem_len = 0;
    __dest = local_68 + (lVar22 + 1) * 2;
    local_58 = &local_48;
    *(undefined8 *)(puVar18 + -8) = 0x6caad9;
    pcVar11 = strtok_r(pcVar11,":",&local_48);
    if (pcVar11 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar18 + -8) = 0x6cacbf;
      __assert_fail("elem != NULL","gconv_conf.c",0x1a8,"__gconv_get_path");
    }
    iVar21 = 0;
    plVar15 = local_68;
    do {
      sVar6 = local_60;
      *plVar15 = (long)__dest;
      if (*pcVar11 != '/') {
        if (pcVar8 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar18 + -8) = 0x6cac90;
          __assert_fail("cwd != NULL","gconv_conf.c",0x1ae,"__gconv_get_path");
        }
        local_50 = pcVar11;
        *(undefined8 *)(puVar18 + -8) = 0x6cab15;
        puVar7 = (undefined1 *)mempcpy(__dest,pcVar8,sVar6);
        *puVar7 = 0x2f;
        __dest = (long *)(puVar7 + 1);
        pcVar11 = local_50;
      }
      *(undefined8 *)(puVar18 + -8) = 0x6cab2b;
      pcVar11 = stpcpy((char *)__dest,pcVar11);
      __save_ptr = local_58;
      if (pcVar11[-1] != '/') {
        *pcVar11 = '/';
        pcVar11 = pcVar11 + 1;
      }
      uVar19 = __gconv_max_path_elem_len;
      uVar13 = (long)pcVar11 - *plVar15;
      plVar15[1] = uVar13;
      if (uVar19 < uVar13) {
        __gconv_max_path_elem_len = uVar13;
      }
      *pcVar11 = '\0';
      __dest = (long *)(pcVar11 + 1);
      iVar21 = iVar21 + 1;
      plVar15 = plVar15 + 2;
      *(undefined8 *)(puVar18 + -8) = 0x6cab6f;
      pcVar11 = strtok_r((char *)0x0,":",__save_ptr);
    } while (pcVar11 != (char *)0x0);
    local_68[(long)iVar21 * 2] = 0;
    (local_68 + (long)iVar21 * 2)[1] = 0;
  }
  __gconv_path_elem = local_68;
  *(undefined8 *)(puVar18 + -8) = 0x6cabab;
  free(pcVar8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar18 + -8) = 0x6cacc4;
    __stack_chk_fail_local();
  }
  return;
}

