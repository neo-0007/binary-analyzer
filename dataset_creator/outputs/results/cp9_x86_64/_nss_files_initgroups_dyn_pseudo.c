
int _nss_files_initgroups_dyn
              (char *param_1,int param_2,long *param_3,long *param_4,undefined8 *param_5,
              long param_6,int *param_7)

{
  undefined8 *puVar1;
  char *__s1;
  bool bVar2;
  char cVar3;
  int iVar4;
  FILE *__stream;
  __ssize_t _Var5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long in_FS_OFFSET;
  int local_4d4;
  void *local_4c0;
  char *local_498;
  size_t local_490;
  undefined1 local_488 [16];
  int local_478;
  undefined8 *local_470;
  fpos64_t local_468;
  undefined1 *local_458;
  undefined8 local_450;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = (FILE *)__nss_files_fopen("/etc/group");
  if (__stream == (FILE *)0x0) {
    iVar4 = *(int *)(in_FS_OFFSET + -0x58);
    *param_7 = iVar4;
    iVar4 = (iVar4 != 0xc) - 2;
  }
  else {
    local_498 = (char *)0x0;
    local_490 = 0;
    local_4c0 = (void *)*param_5;
    bVar2 = false;
    local_450 = 0x400;
    local_458 = local_448;
LAB_00776c00:
    fgetpos(__stream,&local_468);
    _Var5 = getline(&local_498,&local_490,__stream);
    if (-1 < _Var5) {
      iVar4 = _nss_files_parse_grent(local_498,local_488,local_458,local_450,param_7);
      if (iVar4 == -1) {
        cVar3 = __libc_scratch_buffer_grow(&local_458);
        if (cVar3 == '\0') {
LAB_00776de0:
          *param_7 = 0xc;
          iVar4 = -2;
          bVar2 = true;
          goto LAB_00776d85;
        }
        fsetpos(__stream,(fpos_t *)&local_468);
      }
      else if ((0 < iVar4) && (local_4d4 = local_478, local_478 != param_2)) {
        __s1 = (char *)*local_470;
        puVar7 = local_470;
        while (__s1 != (char *)0x0) {
          iVar4 = strcmp(__s1,param_1);
          if (iVar4 == 0) {
            lVar6 = *param_3;
            if (lVar6 == *param_4) {
              if (param_6 < 1) {
                lVar8 = lVar6 * 2;
              }
              else {
                if (lVar6 == param_6) {
                  iVar4 = 1;
                  goto LAB_00776d85;
                }
                lVar8 = lVar6 * 2;
                if (param_6 < lVar6 * 2) {
                  lVar8 = param_6;
                }
              }
              local_4c0 = realloc(local_4c0,lVar8 * 4);
              if (local_4c0 == (void *)0x0) goto LAB_00776de0;
              *param_5 = local_4c0;
              local_4d4 = local_478;
              *param_4 = lVar8;
              lVar6 = *param_3;
            }
            bVar2 = true;
            *(int *)((long)local_4c0 + lVar6 * 4) = local_4d4;
            *param_3 = lVar6 + 1;
            break;
          }
          puVar1 = puVar7 + 1;
          puVar7 = puVar7 + 1;
          __s1 = (char *)*puVar1;
        }
      }
      goto LAB_00776c00;
    }
    iVar4 = 1;
    if ((__stream->_flags & 0x10) == 0) {
      iVar4 = *(int *)(in_FS_OFFSET + -0x58);
      bVar2 = true;
      *param_7 = iVar4;
      iVar4 = (iVar4 != 0xc) - 2;
    }
LAB_00776d85:
    if (local_458 != local_448) {
      free(local_458);
    }
    free(local_498);
    fclose(__stream);
    if (!bVar2) {
      iVar4 = 0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

