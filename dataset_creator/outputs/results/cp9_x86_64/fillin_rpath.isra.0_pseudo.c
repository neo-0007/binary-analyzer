
void fillin_rpath_isra_0(char *param_1,long param_2,char *param_3,undefined8 param_4,char *param_5,
                        undefined8 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  char *__s;
  size_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  void *pvVar8;
  long lVar9;
  size_t sVar10;
  char *local_80;
  size_t local_58;
  char *local_40 [2];
  
  lVar9 = 0;
  local_40[0] = param_1;
LAB_007ac570:
  while( true ) {
    __s = strsep(local_40,param_3);
    if (__s == (char *)0x0) {
      *(undefined8 *)(param_2 + lVar9 * 8) = 0;
      return;
    }
    if (*__s == '\0') break;
    __s = (char *)expand_dynamic_string_token(param_6,__s);
    if (__s != (char *)0x0) {
      sVar4 = strlen(__s);
      if (sVar4 != 0) {
        do {
          sVar10 = sVar4;
          local_80 = __s;
          if (sVar10 == 1) {
            sVar4 = 1;
            puVar6 = _dl_all_dirs;
            puVar1 = _dl_all_dirs;
            if (*__s == '/') goto joined_r0x007ac676;
            break;
          }
          sVar4 = sVar10 - 1;
        } while (__s[sVar10 - 1] == '/');
        __s[sVar10] = '/';
        sVar4 = sVar10 + 1;
        puVar6 = _dl_all_dirs;
        puVar1 = _dl_all_dirs;
joined_r0x007ac676:
        do {
          if (puVar6 == (undefined8 *)0x0) goto LAB_007ac680;
          if ((puVar6[4] == sVar4) && (iVar3 = bcmp(__s,(void *)puVar6[3],sVar4), iVar3 == 0)) {
            lVar5 = 0;
            if (lVar9 != 0) goto LAB_007ac630;
            goto LAB_007ac640;
          }
          puVar6 = (undefined8 *)*puVar6;
        } while( true );
      }
      free(__s);
    }
  }
  sVar4 = 0;
  local_80 = (char *)0x0;
  puVar6 = _dl_all_dirs;
  puVar1 = _dl_all_dirs;
  goto joined_r0x007ac676;
  while (lVar5 = lVar5 + 1, lVar5 != lVar9) {
LAB_007ac630:
    if (*(undefined8 **)(param_2 + lVar5 * 8) == puVar6) goto LAB_007ac649;
  }
LAB_007ac640:
  *(undefined8 **)(param_2 + lVar9 * 8) = puVar6;
  lVar9 = lVar9 + 1;
LAB_007ac649:
  free(local_80);
  goto LAB_007ac570;
LAB_007ac680:
  if (param_5 == (char *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = strlen(param_5);
    local_58 = local_58 + 1;
  }
  puVar6 = (undefined8 *)malloc(local_58 + sVar4 + 0x2d);
  if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _dl_signal_error(0xc,0,0,"cannot create cache for search path");
  }
  puVar6[3] = (void *)((long)puVar6 + 0x2c);
  puVar7 = (undefined1 *)mempcpy((void *)((long)puVar6 + 0x2c),__s,sVar4);
  uVar2 = max_dirnamelen;
  *puVar7 = 0;
  puVar6[4] = sVar4;
  if (uVar2 < sVar4) {
    max_dirnamelen = sVar4;
  }
  *(uint *)(puVar6 + 5) = (uint)(*__s != '/') * 2;
  puVar6[1] = param_4;
  if (param_5 == (char *)0x0) {
    pvVar8 = (void *)0x0;
  }
  else {
    pvVar8 = memcpy((void *)(sVar4 + 0x2d + (long)puVar6),param_5,local_58);
  }
  puVar6[2] = pvVar8;
  *puVar6 = puVar1;
  _dl_all_dirs = puVar6;
  goto LAB_007ac640;
}

