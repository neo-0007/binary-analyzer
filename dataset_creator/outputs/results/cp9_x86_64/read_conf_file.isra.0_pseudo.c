
void read_conf_file_isra_0(char *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  FILE *__stream;
  __ssize_t _Var6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long *plVar11;
  int *piVar12;
  char *pcVar13;
  int *piVar14;
  int *piVar15;
  long in_FS_OFFSET;
  int *local_50;
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = fopen(param_1,"rce");
  local_50 = (int *)0x0;
  local_48 = 0;
  if (__stream != (FILE *)0x0) {
    uVar3 = __stream->_flags;
    __stream->_flags = uVar3 | 0x8000;
    uVar4 = _nl_C_locobj._104_8_;
    if ((uVar3 & 0x10) == 0) {
      do {
        _Var6 = getdelim((char **)&local_50,&local_48,10,__stream);
        piVar12 = local_50;
        if (_Var6 < 0) break;
        piVar7 = (int *)strchr((char *)local_50,0x23);
        if (piVar7 == (int *)0x0) {
          pcVar13 = (char *)((long)piVar12 + _Var6 + -1);
          if (*pcVar13 == '\n') {
            *pcVar13 = '\0';
          }
        }
        else {
          *(undefined1 *)piVar7 = 0;
        }
        while( true ) {
          uVar2 = *(ushort *)(uVar4 + (long)(char)*piVar12 * 2);
          if ((uVar2 & 0x2000) == 0) break;
          piVar12 = (int *)((long)piVar12 + 1);
        }
        if ((piVar7 != piVar12) && (piVar7 = piVar12, (char)*piVar12 != '\0')) {
          while ((uVar2 & 0x2000) == 0) {
            pcVar13 = (char *)((long)piVar7 + 1);
            piVar7 = (int *)((long)piVar7 + 1);
            if (*pcVar13 == '\0') break;
            uVar2 = *(ushort *)(uVar4 + (long)*pcVar13 * 2);
          }
          if ((long)piVar7 - (long)piVar12 == 5) {
            if ((*piVar12 == 0x61696c61) && ((char)piVar12[1] == 's')) {
              lVar8 = (long)(char)*piVar7;
              uVar2 = *(ushort *)(uVar4 + lVar8 * 2);
              while ((uVar2 & 0x2000) != 0) {
                lVar8 = (long)*(char *)((long)piVar7 + 1);
                piVar7 = (int *)((long)piVar7 + 1);
                uVar2 = *(ushort *)(uVar4 + lVar8 * 2);
              }
              piVar12 = piVar7;
              if ((char)lVar8 != '\0') {
                while (piVar1 = (int *)((long)piVar12 + 1), (uVar2 & 0x2000) == 0) {
                  *(char *)piVar12 = (char)*(undefined4 *)(_nl_C_locobj._120_8_ + lVar8 * 4);
                  lVar8 = (long)*(char *)((long)piVar12 + 1);
                  if (*(char *)((long)piVar12 + 1) == '\0') goto LAB_006cb310;
                  piVar12 = piVar1;
                  uVar2 = *(ushort *)(uVar4 + lVar8 * 2);
                }
                lVar8 = (long)*(char *)((long)piVar12 + 1);
                *(char *)piVar12 = '\0';
                uVar2 = *(ushort *)(uVar4 + lVar8 * 2);
                piVar12 = piVar1;
                while ((uVar2 & 0x2000) != 0) {
                  lVar8 = (long)*(char *)((long)piVar12 + 1);
                  piVar12 = (int *)((long)piVar12 + 1);
                  uVar2 = *(ushort *)(uVar4 + lVar8 * 2);
                }
                piVar15 = piVar1;
                if ((char)lVar8 != '\0') {
                  while (piVar14 = piVar15, (uVar2 & 0x2000) == 0) {
                    piVar12 = (int *)((long)piVar12 + 1);
                    piVar14 = (int *)((long)piVar15 + 1);
                    *(char *)piVar15 = (char)*(undefined4 *)(_nl_C_locobj._120_8_ + lVar8 * 4);
                    lVar8 = (long)*(char *)piVar12;
                    if (*(char *)piVar12 == '\0') break;
                    piVar15 = piVar14;
                    uVar2 = *(ushort *)(uVar4 + lVar8 * 2);
                  }
                  if (piVar14 != piVar1) {
                    *(char *)piVar14 = '\0';
                    for (puVar9 = __gconv_modules_db; puVar9 != (undefined8 *)0x0;
                        puVar9 = (undefined8 *)puVar9[6]) {
                      while( true ) {
                        iVar5 = strcmp((char *)piVar7,(char *)*puVar9);
                        if (iVar5 == 0) goto LAB_006cb310;
                        if (-1 < iVar5) break;
                        puVar9 = (undefined8 *)puVar9[4];
                        if (puVar9 == (undefined8 *)0x0) goto LAB_006cb4a2;
                      }
                    }
LAB_006cb4a2:
                    pcVar13 = (char *)((long)piVar14 + (1 - (long)piVar7));
                    puVar9 = (undefined8 *)malloc((size_t)(pcVar13 + 0x10));
                    if (puVar9 != (undefined8 *)0x0) {
                      pvVar10 = memcpy(puVar9 + 2,piVar7,(size_t)pcVar13);
                      *puVar9 = pvVar10;
                      puVar9[1] = (long)pvVar10 + ((long)piVar1 - (long)piVar7);
                      plVar11 = (long *)tsearch(puVar9,(void **)&__gconv_alias_db,
                                                __gconv_alias_compare);
                      if ((plVar11 == (long *)0x0) || (puVar9 != (undefined8 *)*plVar11)) {
                        free(puVar9);
                      }
                    }
                  }
                }
              }
            }
          }
          else if ((((long)piVar7 - (long)piVar12 == 6) && (*piVar12 == 0x75646f6d)) &&
                  ((short)piVar12[1] == 0x656c)) {
            modcounter_0 = modcounter_0 + 1;
            add_module(piVar7,param_2,param_3);
          }
        }
LAB_006cb310:
      } while ((__stream->_flags & 0x10) == 0);
    }
    free(local_50);
    fclose(__stream);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

