
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __tunables_init(long *param_1)

{
  char *pcVar1;
  long *plVar2;
  char *pcVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  char cVar12;
  char cVar13;
  long lVar14;
  char *pcVar15;
  long *plVar16;
  char *pcVar17;
  int iVar18;
  bool bVar19;
  char *local_40 [2];
  
  if (__libc_enable_secure != 0) {
    syscall();
    _DAT_0092ddd4 = 2;
  }
joined_r0x0078352b:
  do {
    do {
      iVar5 = __libc_enable_secure;
      plVar4 = param_1;
      if ((plVar4 == (long *)0x0) || (pcVar3 = (char *)*plVar4, pcVar3 == (char *)0x0)) {
        __libc_enable_secure = iVar5;
        return;
      }
      cVar12 = *pcVar3;
      param_1 = plVar4 + 1;
      __libc_enable_secure = iVar5;
      if ((cVar12 == '=') || (cVar12 == '\0')) {
        lVar10 = 0;
      }
      else {
        lVar8 = 1;
        do {
          lVar10 = lVar8;
          cVar12 = pcVar3[lVar10];
          if (cVar12 == '\0') goto joined_r0x0078352b;
          lVar8 = lVar10 + 1;
        } while (cVar12 != '=');
      }
    } while (cVar12 == '\0');
    pcVar15 = "GLIBC_TUNABLES";
    cVar12 = 'G';
    pcVar7 = pcVar3 + lVar10 + 1;
    pcVar17 = pcVar3;
    do {
      pcVar11 = pcVar17;
      if ((*pcVar11 == '\0') || (*pcVar11 != cVar12)) goto LAB_007835c2;
      cVar12 = pcVar15[1];
      pcVar15 = pcVar15 + 1;
      pcVar17 = pcVar11 + 1;
    } while (cVar12 != '\0');
    if (pcVar11[1] != '=') {
LAB_007835c2:
      pcVar17 = "";
      iVar18 = 0;
      do {
        if ((pcVar17[-8] == '\0') &&
           (cVar12 = *pcVar17, pcVar15 = pcVar3, pcVar11 = pcVar17, cVar13 = cVar12, cVar12 != '\0')
           ) {
          do {
            if ((*pcVar15 != cVar13) || (*pcVar15 == '\0')) goto LAB_007835d8;
            pcVar1 = pcVar11 + 1;
            pcVar15 = pcVar15 + 1;
            pcVar11 = pcVar11 + 1;
            cVar13 = *pcVar1;
          } while (*pcVar1 != '\0');
          if (*pcVar15 == '=') {
            if (iVar5 != 0) {
              iVar6 = *(int *)(pcVar17 + -4);
              if (iVar6 == 0) {
                pcVar15 = (char *)*plVar4;
                param_1 = plVar4;
                if (pcVar15 == (char *)0x0) goto LAB_007835d8;
                pcVar11 = pcVar17;
                plVar16 = plVar4;
                if (cVar12 != '\0') goto LAB_00783746;
LAB_00783770:
                plVar9 = plVar16;
                if (*pcVar15 != '=') goto LAB_0078374d;
                do {
                  plVar2 = plVar9 + 1;
                  *plVar9 = *plVar2;
                  plVar9 = plVar9 + 1;
                } while (*plVar2 != 0);
                pcVar15 = (char *)*plVar16;
                while (pcVar15 != (char *)0x0) {
                  cVar12 = *pcVar17;
                  pcVar11 = pcVar17;
                  while( true ) {
                    if (cVar12 == '\0') goto LAB_00783770;
LAB_00783746:
                    if ((*pcVar15 == '\0') || (cVar12 != *pcVar15)) break;
                    cVar12 = pcVar11[1];
                    pcVar11 = pcVar11 + 1;
                    pcVar15 = pcVar15 + 1;
                  }
LAB_0078374d:
                  plVar9 = plVar16 + 1;
                  plVar16 = plVar16 + 1;
                  pcVar15 = (char *)*plVar9;
                }
                iVar6 = *(int *)(pcVar17 + -4);
              }
              if (iVar6 != 2) goto LAB_007835d8;
            }
            if (*(int *)(&DAT_0092ced0 + (long)iVar18 * 0x70) != 3) {
              pcVar7 = (char *)_dl_strtoul(pcVar7,0);
            }
            local_40[0] = pcVar7;
            do_tunable_update_val(pcVar17 + -0x58,local_40,0);
            break;
          }
        }
LAB_007835d8:
        iVar18 = iVar18 + 1;
        pcVar17 = pcVar17 + 0x70;
      } while (iVar18 != 0x23);
      goto joined_r0x0078352b;
    }
    lVar8 = 0;
    do {
      lVar14 = lVar8;
      lVar8 = lVar14 + 1;
    } while (pcVar3[lVar14] != '\0');
    lVar8 = __minimal_malloc(lVar14 + 2);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      _dl_fatal_printf("failed to allocate memory to process tunables\n");
    }
    do {
      *(char *)(lVar8 + lVar14) = pcVar3[lVar14];
      bVar19 = lVar14 != 0;
      lVar14 = lVar14 + -1;
    } while (bVar19);
    parse_tunables(lVar8 + lVar10 + 1,pcVar7);
    *plVar4 = lVar8;
  } while( true );
}

