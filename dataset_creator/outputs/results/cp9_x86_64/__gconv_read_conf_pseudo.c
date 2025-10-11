
void __gconv_read_conf(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  DIR *__dirp;
  dirent64 *pdVar5;
  size_t sVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long *plVar11;
  size_t sVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long in_FS_OFFSET;
  long local_108;
  char *local_e8 [2];
  stat64 local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  iVar2 = __gconv_load_cache();
  if (iVar2 != 0) {
    __gconv_get_path();
    local_108 = 0x10;
    pvVar7 = (void *)*__gconv_path_elem;
    puVar9 = __gconv_path_elem;
    puVar13 = __gconv_path_elem;
    while (pvVar7 != (void *)0x0) {
      sVar12 = puVar9[1];
      pcVar3 = (char *)malloc(sVar12 + 0x10);
      if (pcVar3 != (char *)0x0) {
        pcVar4 = (char *)mempcpy(pcVar3,pvVar7,sVar12);
        *(undefined8 *)pcVar4 = gconv_conf_filename._0_8_;
        *(undefined4 *)(pcVar4 + 8) = gconv_conf_filename._8_4_;
        *(undefined2 *)(pcVar4 + 0xc) = gconv_conf_filename._12_2_;
        read_conf_file_isra_0(pcVar3,pvVar7,sVar12);
        pcVar4[0xf] = '\0';
        pcVar4[0xd] = '.';
        pcVar4[0xe] = 'd';
        __dirp = opendir(pcVar3);
        if (__dirp != (DIR *)0x0) {
LAB_006cb6a0:
          pdVar5 = readdir64(__dirp);
          if (pdVar5 != (dirent64 *)0x0) {
            while ((pdVar5->d_type & 0xf7) == 0) {
              sVar6 = strlen(pdVar5->d_name);
              if (((sVar6 < 6) || (iVar2 = strcmp(pdVar5->d_name + (sVar6 - 5),".conf"), iVar2 != 0)
                  ) || (iVar2 = asprintf(local_e8,"%s/%s",pcVar3,pdVar5->d_name), iVar2 < 0)) break;
              if ((pdVar5->d_type != '\0') ||
                 ((iVar2 = lstat(local_e8[0],&local_d8), iVar2 != -1 &&
                  ((local_d8.st_mode & 0xf000) == 0x8000)))) {
                read_conf_file_isra_0(local_e8[0],pvVar7,sVar12);
              }
              free(local_e8[0]);
              pdVar5 = readdir64(__dirp);
              if (pdVar5 == (dirent64 *)0x0) goto LAB_006cb758;
            }
            goto LAB_006cb6a0;
          }
LAB_006cb758:
          closedir(__dirp);
        }
        free(pcVar3);
        puVar13 = __gconv_path_elem;
      }
      puVar9 = (undefined8 *)((long)puVar13 + local_108);
      local_108 = local_108 + 0x10;
      pvVar7 = (void *)*puVar9;
    }
    ppuVar14 = &builtin_modules;
    do {
      while( true ) {
        local_e8[0] = *ppuVar14;
        pvVar7 = tfind(local_e8,(void **)&__gconv_alias_db,__gconv_alias_compare);
        if (pvVar7 == (void *)0x0) break;
        ppuVar14 = ppuVar14 + 7;
        if (ppuVar14 == &_nl_global_locale) goto LAB_006cb7d9;
      }
      ppuVar15 = ppuVar14 + 7;
      insert_module(ppuVar14);
      ppuVar14 = ppuVar15;
    } while (ppuVar15 != &_nl_global_locale);
LAB_006cb7d9:
    pcVar3 = "UCS4//";
    do {
      pvVar7 = rawmemchr(pcVar3,0);
      pvVar8 = rawmemchr((void *)((long)pvVar7 + 1),0);
      for (puVar9 = __gconv_modules_db; puVar9 != (undefined8 *)0x0;
          puVar9 = (undefined8 *)puVar9[4]) {
        while( true ) {
          iVar2 = strcmp(pcVar3,(char *)*puVar9);
          if (iVar2 == 0) goto LAB_006cb8a8;
          if (iVar2 < 0) break;
          puVar9 = (undefined8 *)puVar9[6];
          if (puVar9 == (undefined8 *)0x0) goto LAB_006cb833;
        }
      }
LAB_006cb833:
      sVar12 = ((long)pvVar8 + 1) - (long)pcVar3;
      puVar9 = (undefined8 *)malloc(sVar12 + 0x10);
      if (puVar9 != (undefined8 *)0x0) {
        pvVar10 = memcpy(puVar9 + 2,pcVar3,sVar12);
        *puVar9 = pvVar10;
        puVar9[1] = (long)pvVar10 + (((long)pvVar7 + 1) - (long)pcVar3);
        plVar11 = (long *)tsearch(puVar9,(void **)&__gconv_alias_db,__gconv_alias_compare);
        if ((plVar11 == (long *)0x0) || (puVar9 != (undefined8 *)*plVar11)) {
          free(puVar9);
        }
      }
LAB_006cb8a8:
      pcVar3 = (char *)((long)pvVar8 + 1);
    } while (*(char *)((long)pvVar8 + 1) != '\0');
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

