
char * setlocale(int __category,char *__locale)

{
  int iVar1;
  char *pcVar2;
  char *__ptr;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long *__s;
  undefined **ppuVar11;
  long in_FS_OFFSET;
  long *local_158;
  void *local_128;
  undefined8 local_120;
  char *local_118 [14];
  char *local_a8 [13];
  long local_40;
  
  uVar8 = (ulong)__category;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0xc < uVar8) {
LAB_006d5481:
    pcVar5 = (char *)0x0;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    goto LAB_006d53a0;
  }
  if (__locale == (char *)0x0) {
    pcVar5 = (&PTR__nl_C_name_00930a60)[uVar8];
    goto LAB_006d53a0;
  }
  pthread_rwlock_wrlock((pthread_rwlock_t *)__libc_setlocale_lock);
  iVar4 = strcmp(__locale,(&_nl_global_locale)[uVar8 + 0x10]);
  if (iVar4 == 0) {
    pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
    pcVar5 = (&_nl_global_locale)[uVar8 + 0x10];
    goto LAB_006d53a0;
  }
  local_128 = (void *)0x0;
  local_120 = 0;
  pcVar5 = getenv("LOCPATH");
  if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
LAB_006d525b:
    if (__category != 6) {
      lVar9 = (&_nl_current_used)[uVar8];
      local_a8[0] = __locale;
      if (lVar9 == 0) {
        local_158 = (long *)0x0;
LAB_006d52c2:
        if ((local_a8[0] != "C") && (local_a8[0] = strdup(local_a8[0]), local_a8[0] == (char *)0x0))
        goto LAB_006d5622;
        puVar6 = (undefined *)new_composite_name(__category,local_a8);
        if (puVar6 == (undefined *)0x0) {
          if (local_a8[0] != "C") {
            free(local_a8[0]);
          }
          goto LAB_006d5622;
        }
        if (lVar9 != 0) {
          (&_nl_global_locale)[uVar8] = (undefined *)local_158;
          if ((code *)(&_nl_category_postload)[uVar8] != (code *)0x0) {
            (*(code *)(&_nl_category_postload)[uVar8])();
          }
        }
        pcVar2 = local_a8[0];
        pcVar5 = (&PTR__nl_C_name_00930a60)[uVar8];
        if (local_a8[0] != pcVar5) {
          if (pcVar5 != "C") {
            free(pcVar5);
          }
          (&PTR__nl_C_name_00930a60)[uVar8] = pcVar2;
        }
        puVar3 = PTR__nl_C_name_00930a90;
        if ((puVar6 != PTR__nl_C_name_00930a90) && (puVar3 = puVar6, PTR__nl_C_name_00930a90 != "C")
           ) {
          free(PTR__nl_C_name_00930a90);
        }
        PTR__nl_C_name_00930a90 = puVar3;
        _nl_msg_cat_cntr = _nl_msg_cat_cntr + 1;
      }
      else {
        local_158 = (long *)_nl_find_locale(local_128,local_120,__category,local_a8);
        if (local_158 != (long *)0x0) {
          if (*(int *)((long)local_158 + 0x30) != -1) {
            *(undefined4 *)((long)local_158 + 0x30) = 0xffffffff;
          }
          goto LAB_006d52c2;
        }
LAB_006d5622:
        local_a8[0] = (char *)0x0;
      }
      pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
      free(local_128);
      pcVar5 = local_a8[0];
      goto LAB_006d53a0;
    }
    local_118[0] = __locale;
    local_118[1] = __locale;
    local_118[2] = __locale;
    local_118[3] = __locale;
    local_118[4] = __locale;
    local_118[5] = __locale;
    local_118[7] = __locale;
    local_118[8] = __locale;
    local_118[9] = __locale;
    local_118[10] = __locale;
    local_118[0xb] = __locale;
    local_118[0xc] = __locale;
    local_158 = (long *)strchr(__locale,0x3b);
    if (local_158 == (long *)0x0) {
LAB_006d54e3:
      iVar4 = 0xc;
      iVar7 = 0xd;
LAB_006d5504:
      iVar10 = iVar4;
      pcVar5 = (char *)_nl_find_locale(local_128,local_120,iVar10,local_118 + iVar10);
      local_a8[iVar10] = pcVar5;
      if (pcVar5 == (char *)0x0) {
        if (local_118[iVar10] != "C") {
LAB_006d5658:
          lVar9 = (long)iVar7;
          if (iVar7 == 0xd) goto LAB_006d5692;
          goto LAB_006d5674;
        }
      }
      else {
        if (*(int *)(pcVar5 + 0x30) != -1) {
          pcVar5[0x30] = -1;
          pcVar5[0x31] = -1;
          pcVar5[0x32] = -1;
          pcVar5[0x33] = -1;
        }
        pcVar5 = local_118[iVar10];
        if (pcVar5 != "C") {
          pcVar2 = (&PTR__nl_C_name_00930a60)[iVar10];
          iVar4 = strcmp(pcVar5,pcVar2);
          if (iVar4 == 0) {
            local_118[iVar10] = pcVar2;
          }
          else {
            pcVar5 = strdup(pcVar5);
            local_118[iVar10] = pcVar5;
            if (pcVar5 == (char *)0x0) goto LAB_006d5658;
          }
        }
      }
      iVar1 = iVar10 + -1;
      if (iVar10 != 0) {
        iVar4 = iVar1;
        iVar7 = iVar10;
        if (iVar1 == 6) {
          iVar4 = 5;
          iVar7 = iVar1;
        }
        goto LAB_006d5504;
      }
      pcVar5 = (char *)new_composite_name(6,local_118);
      if (pcVar5 == (char *)0x0) {
        lVar9 = 0;
LAB_006d5674:
        do {
          if ((int)lVar9 != 6) {
            pcVar5 = local_118[lVar9];
            if ((pcVar5 != "C") && (pcVar5 != (&PTR__nl_C_name_00930a60)[lVar9])) {
              free(pcVar5);
            }
            if ((int)lVar9 == 0xc) goto LAB_006d5692;
          }
          lVar9 = lVar9 + 1;
        } while( true );
      }
      lVar9 = 0;
      ppuVar11 = &PTR__nl_C_name_00930a60;
      do {
        if (lVar9 != 6) {
          if ((&_nl_current_used)[lVar9] != 0) {
            ppuVar11[-0x10] = local_a8[lVar9];
            if ((code *)(&_nl_category_postload)[lVar9] != (code *)0x0) {
              (*(code *)(&_nl_category_postload)[lVar9])();
            }
          }
          pcVar2 = local_118[lVar9];
          __ptr = *ppuVar11;
          if (pcVar2 != __ptr) {
            if (__ptr != "C") {
              free(__ptr);
            }
            *ppuVar11 = pcVar2;
          }
          if (lVar9 == 0xc) goto code_r0x006d5777;
        }
        lVar9 = lVar9 + 1;
        ppuVar11 = ppuVar11 + 1;
      } while( true );
    }
    local_158 = (long *)strdup(__locale);
    __s = local_158;
    if (local_158 != (long *)0x0) {
      while (pcVar5 = strchr((char *)__s,0x3d), pcVar5 != (char *)0x0) {
        lVar9 = (long)pcVar5 - (long)__s;
        if (lVar9 == 8) {
          if (*__s == 0x45505954435f434c) {
            iVar4 = 0;
          }
          else {
            if (*__s != 0x52455041505f434c) goto LAB_006d5470;
            iVar4 = 7;
          }
        }
        else if (lVar9 == 10) {
          if (((*__s != 0x52454d554e5f434c) || (iVar4 = 1, (short)__s[1] != 0x4349)) &&
             ((*__s != 0x414c4c4f435f434c || (iVar4 = 3, (short)__s[1] != 0x4554)))) {
            if ((*__s != 0x45524444415f434c) || ((short)__s[1] != 0x5353)) goto LAB_006d5470;
            iVar4 = 9;
          }
        }
        else if (lVar9 == 7) {
          if ((((int)*__s != 0x545f434c) || (*(short *)((long)__s + 4) != 0x4d49)) ||
             (iVar4 = 2, *(char *)((long)__s + 6) != 'E')) {
            if ((((int)*__s != 0x4e5f434c) || (*(short *)((long)__s + 4) != 0x4d41)) ||
               (*(char *)((long)__s + 6) != 'E')) goto LAB_006d5470;
            iVar4 = 8;
          }
        }
        else if (lVar9 == 0xb) {
          if (((*__s != 0x54454e4f4d5f434c) || ((short)__s[1] != 0x5241)) ||
             (iVar4 = 4, *(char *)((long)__s + 10) != 'Y')) {
            if (((*__s != 0x415353454d5f434c) || ((short)__s[1] != 0x4547)) ||
               (*(char *)((long)__s + 10) != 'S')) goto LAB_006d5470;
            iVar4 = 5;
          }
        }
        else if (lVar9 == 0xc) {
          if ((*__s != 0x50454c45545f434c) || ((int)__s[1] != 0x454e4f48)) goto LAB_006d5470;
          iVar4 = 10;
        }
        else if (lVar9 == 0xe) {
          if (((*__s != 0x555341454d5f434c) || ((int)__s[1] != 0x454d4552)) ||
             (*(short *)((long)__s + 0xc) != 0x544e)) goto LAB_006d5470;
          iVar4 = 0xb;
        }
        else {
          if (((lVar9 != 0x11) || (__s[1] != 0x4f49544143494649 || *__s != 0x544e4544495f434c)) ||
             ((char)__s[2] != 'N')) goto LAB_006d5470;
          iVar4 = 0xc;
        }
        local_118[iVar4] = pcVar5 + 1;
        pcVar5 = strchr(pcVar5 + 1,0x3b);
        if (pcVar5 == (char *)0x0) break;
        *pcVar5 = '\0';
        __s = (long *)(pcVar5 + 1);
      }
      if (((local_118[0] != __locale) && (__locale != local_118[1])) &&
         (((__locale != local_118[2] && ((__locale != local_118[3] && (__locale != local_118[4]))))
          && ((local_118[5] != __locale &&
              (((((__locale != local_118[7] && (__locale != local_118[8])) &&
                 (__locale != local_118[9])) &&
                ((__locale != local_118[10] && (local_118[0xb] != __locale)))) &&
               (__locale != local_118[0xc])))))))) goto LAB_006d54e3;
LAB_006d5470:
      pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
      free(local_158);
      goto LAB_006d5481;
    }
  }
  else {
    iVar4 = argz_create_sep(pcVar5,0x3a,&local_128,&local_120);
    if ((iVar4 == 0) &&
       (iVar4 = argz_add_sep(&local_128,&local_120,"/usr/lib/locale",0x3a), iVar4 == 0))
    goto LAB_006d525b;
  }
  pcVar5 = (char *)0x0;
  pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
  goto LAB_006d53a0;
LAB_006d5692:
  pcVar5 = (char *)0x0;
  goto LAB_006d5695;
code_r0x006d5777:
  pcVar2 = PTR__nl_C_name_00930a90;
  if ((pcVar5 != PTR__nl_C_name_00930a90) && (pcVar2 = pcVar5, PTR__nl_C_name_00930a90 != "C")) {
    free(PTR__nl_C_name_00930a90);
  }
  PTR__nl_C_name_00930a90 = pcVar2;
  _nl_msg_cat_cntr = _nl_msg_cat_cntr + 1;
LAB_006d5695:
  pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
  free(local_128);
  free(local_158);
LAB_006d53a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pcVar5;
}

