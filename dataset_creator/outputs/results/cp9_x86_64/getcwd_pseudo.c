
/* WARNING: Removing unreachable block (ram,0x00764680) */
/* WARNING: Removing unreachable block (ram,0x00764686) */
/* WARNING: Removing unreachable block (ram,0x00764880) */
/* WARNING: Removing unreachable block (ram,0x00764690) */
/* WARNING: Removing unreachable block (ram,0x00764699) */
/* WARNING: Removing unreachable block (ram,0x00764808) */
/* WARNING: Removing unreachable block (ram,0x00764818) */
/* WARNING: Removing unreachable block (ram,0x007646a2) */
/* WARNING: Removing unreachable block (ram,0x00764898) */

char * getcwd(char *__buf,size_t __size)

{
  bool bVar1;
  __dev_t _Var2;
  __dev_t _Var3;
  __ino64_t _Var4;
  __ino64_t _Var5;
  int iVar6;
  int iVar7;
  DIR *__dirp;
  dirent64 *pdVar8;
  size_t sVar9;
  char *pcVar10;
  void *pvVar11;
  bool bVar12;
  size_t sVar13;
  char *pcVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  char *local_138;
  char *local_128;
  __dev_t local_120;
  __ino64_t local_118;
  size_t local_108;
  char *local_f8;
  stat64 local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (__size == 0) {
    if (__buf != (char *)0x0) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      local_128 = (char *)0x0;
      pcVar14 = local_128;
      goto LAB_007646b7;
    }
    iVar6 = getpagesize();
    iVar7 = 0x1000;
    if (0xfff < iVar6) {
      iVar7 = iVar6;
    }
    sVar9 = (long)iVar7;
LAB_00764342:
    local_138 = (char *)malloc(sVar9);
    if (local_138 != (char *)0x0) goto LAB_00764379;
    goto LAB_007646ae;
  }
  sVar9 = __size;
  local_138 = __buf;
  if (__buf == (char *)0x0) goto LAB_00764342;
LAB_00764379:
  syscall();
  if (*local_138 == '/') {
    local_128 = __buf;
    if (__size == 0 && __buf == (char *)0x0) {
      local_128 = (char *)realloc(local_138,0x4f);
    }
LAB_00764854:
    pcVar14 = local_138;
    if (local_128 != (char *)0x0) {
      pcVar14 = local_128;
    }
    goto LAB_007646b7;
  }
  if (__buf == (char *)0x0 && __size == 0) {
    free(local_138);
    local_138 = (char *)malloc(0x1000);
    if (local_138 == (char *)0x0) goto LAB_007646ae;
    local_128 = (char *)0x0;
    local_108 = 0x1000;
LAB_007643e3:
    pcVar14 = local_138 + local_108;
    pcVar14[-1] = '\0';
    iVar7 = lstat(".",&local_d8);
    _Var4 = local_d8.st_ino;
    _Var2 = local_d8.st_dev;
    if (iVar7 < 0) {
LAB_00764877:
      iVar7 = *(int *)(in_FS_OFFSET + -0x58);
    }
    else {
      local_120 = local_d8.st_dev;
      local_118 = local_d8.st_ino;
      iVar7 = lstat((char *)((long)&slashdot_0 + 3),&local_d8);
      _Var5 = local_d8.st_ino;
      _Var3 = local_d8.st_dev;
      if (iVar7 < 0) goto LAB_00764877;
      local_f8 = pcVar14 + -1;
      bVar16 = _Var4 != local_d8.st_ino;
      bVar17 = _Var2 != local_d8.st_dev;
      if (!bVar16 && !bVar17) {
LAB_0076496a:
        if (local_f8 == local_138 + (local_108 - 1)) {
          local_f8[-1] = '/';
          local_f8 = local_f8 + -1;
        }
        uVar15 = (long)pcVar14 - (long)local_f8;
        memmove(local_138,local_f8,uVar15);
        if (__size == 0) {
          pcVar14 = local_138;
          if (local_108 <= uVar15) goto LAB_007646b7;
          local_128 = (char *)realloc(local_138,uVar15);
        }
        goto LAB_00764854;
      }
      __dirp = (DIR *)0x0;
      iVar6 = -100;
      while (iVar6 = openat(iVar6,"..",0), -1 < iVar6) {
        iVar7 = fstat(iVar6,(stat *)&local_d8);
        if (iVar7 != 0) {
          iVar7 = *(int *)(in_FS_OFFSET + -0x58);
          if (__dirp != (DIR *)0x0) {
            closedir(__dirp);
          }
LAB_00764905:
          __close_nocancel(iVar6);
          goto LAB_0076478d;
        }
        if (((__dirp != (DIR *)0x0) && (iVar7 = closedir(__dirp), iVar7 != 0)) ||
           (_Var4 = local_d8.st_ino, _Var2 = local_d8.st_dev, __dirp = fdopendir(iVar6),
           bVar1 = bVar16 || bVar17, __dirp == (DIR *)0x0)) {
          iVar7 = *(int *)(in_FS_OFFSET + -0x58);
          goto LAB_00764905;
        }
LAB_007644f0:
        do {
          do {
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
            pdVar8 = readdir64(__dirp);
            if (pdVar8 == (dirent64 *)0x0) {
              iVar7 = *(int *)(in_FS_OFFSET + -0x58);
              if (iVar7 == 0) {
                if (bVar1) {
                  rewinddir(__dirp);
                  pdVar8 = readdir64(__dirp);
                  if (pdVar8 != (dirent64 *)0x0) {
                    bVar12 = false;
                    bVar1 = bVar12;
                    if (pdVar8->d_name[0] == '.') goto LAB_00764750;
                    break;
                  }
                  iVar7 = *(int *)(in_FS_OFFSET + -0x58);
                }
                if (iVar7 == 0) {
                  *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
                  iVar7 = 2;
                }
              }
              goto LAB_0076477d;
            }
            if (pdVar8->d_name[0] == '.') {
LAB_00764750:
              if ((pdVar8->d_name[1] == '\0') || (*(short *)(pdVar8->d_name + 1) == 0x2e))
              goto LAB_007644f0;
            }
            bVar12 = bVar1;
          } while ((bVar1) &&
                  (bVar18 = pdVar8->d_ino == local_118, bVar12 = bVar18 || _Var2 != local_120,
                  !bVar18 && _Var2 == local_120));
          pcVar14 = pdVar8->d_name;
          iVar7 = fstatat64(iVar6,pcVar14,&local_d8,0x100);
          bVar1 = bVar12;
        } while ((((iVar7 != 0) || ((local_d8.st_mode & 0xf000) != 0x4000)) ||
                 (local_d8.st_dev != local_120)) || (local_d8.st_ino != local_118));
        uVar15 = (long)local_f8 - (long)local_138;
        sVar9 = strlen(pcVar14);
        if (uVar15 <= sVar9) {
          if (__size != 0) {
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
            iVar7 = 0x22;
            goto LAB_0076477d;
          }
          sVar13 = local_108;
          if (local_108 <= sVar9) {
            sVar13 = sVar9;
          }
          if ((CARRY8(local_108,sVar13)) ||
             (pcVar10 = (char *)realloc(local_138,local_108 + sVar13), pcVar10 == (char *)0x0)) {
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
            iVar7 = 0xc;
            goto LAB_0076477d;
          }
          local_f8 = (char *)memcpy(pcVar10 + sVar13 + uVar15,pcVar10 + uVar15,local_108 - uVar15);
          local_138 = pcVar10;
          local_108 = local_108 + sVar13;
        }
        pvVar11 = memcpy(local_f8 + -sVar9,pcVar14,sVar9);
        local_f8 = (char *)((long)pvVar11 + -1);
        *(undefined1 *)((long)pvVar11 + -1) = 0x2f;
        if ((_Var3 == _Var2) && (_Var5 == _Var4)) {
          iVar7 = closedir(__dirp);
          if (iVar7 != 0) goto LAB_00764877;
          pcVar14 = local_138 + local_108;
          goto LAB_0076496a;
        }
        local_120 = _Var2;
        local_118 = _Var4;
      }
      iVar7 = *(int *)(in_FS_OFFSET + -0x58);
      if (__dirp != (DIR *)0x0) {
LAB_0076477d:
        closedir(__dirp);
      }
    }
LAB_0076478d:
    if (local_128 == (char *)0x0) {
      free(local_138);
    }
LAB_00764799:
    *(int *)(in_FS_OFFSET + -0x58) = iVar7;
    if ((__size != 0) && (__buf == (char *)0x0)) {
      free(local_128);
    }
  }
  else {
    if (__size == 1) {
      local_128 = local_138;
      iVar7 = 0x22;
      goto LAB_00764799;
    }
    if (__size != 0) {
      local_128 = local_138;
      local_108 = __size;
      goto LAB_007643e3;
    }
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  }
LAB_007646ae:
  local_128 = (char *)0x0;
  pcVar14 = local_128;
LAB_007646b7:
  local_128 = pcVar14;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_128;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

