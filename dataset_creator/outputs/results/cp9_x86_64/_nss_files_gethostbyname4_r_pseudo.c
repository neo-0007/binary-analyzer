
int _nss_files_gethostbyname4_r
              (char *param_1,long *param_2,long *param_3,ulong param_4,int *param_5,
              undefined4 *param_6)

{
  long lVar1;
  void *__src;
  bool bVar2;
  long lVar3;
  bool bVar4;
  char *pcVar5;
  long lVar6;
  int iVar7;
  FILE *__stream;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long in_FS_OFFSET;
  int local_8c;
  char *local_68;
  long *local_60;
  undefined4 local_58;
  int local_54;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = (FILE *)__nss_files_fopen("/etc/hosts");
  bVar4 = false;
  if (__stream == (FILE *)0x0) {
    if (*(int *)(in_FS_OFFSET + -0x58) == 0xb) {
      local_8c = -2;
      *param_5 = 0xb;
      *param_6 = 2;
    }
    else {
      local_8c = -1;
      *param_5 = *(int *)(in_FS_OFFSET + -0x58);
      *param_6 = 1;
    }
LAB_0077370a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return local_8c;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
LAB_00773540:
  while( true ) {
    uVar8 = (ulong)(-(int)param_3 & 7);
    param_3 = (long *)((long)param_3 + uVar8);
    uVar10 = param_4 - uVar8;
    bVar2 = uVar8 < param_4;
    param_4 = 0;
    if (bVar2) {
      param_4 = uVar10;
    }
    local_8c = internal_getent(__stream,&local_68,param_3,param_4,param_5,param_6,0);
    pcVar5 = local_68;
    if (local_8c != 1) {
      if ((local_8c == 0) && (bVar4)) {
        if ((_res_hconf[0x40] & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("(_res_hconf.flags & HCONF_FLAG_MULTI) != 0","nss_files/files-hosts.c",0x1dc
                        ,"_nss_files_gethostbyname4_r");
        }
        local_8c = 1;
      }
      goto LAB_00773700;
    }
    iVar7 = strcasecmp(param_1,local_68);
    plVar13 = local_60;
    plVar12 = local_60;
    if (iVar7 == 0) break;
    pcVar9 = (char *)*local_60;
    if (pcVar9 != (char *)0x0) {
      lVar14 = 1;
      do {
        plVar12 = plVar12 + 1;
        iVar7 = strcasecmp(param_1,pcVar9);
        if (iVar7 == 0) {
          iVar7 = (int)lVar14;
          goto LAB_007735fe;
        }
        pcVar9 = (char *)*plVar12;
        lVar14 = lVar14 + 1;
      } while (pcVar9 != (char *)0x0);
    }
  }
  lVar14 = 0;
  iVar7 = 0;
LAB_007735fe:
  lVar1 = *plVar12;
  lVar6 = (long)(iVar7 + 1);
  while (lVar3 = lVar6, lVar1 != 0) {
    lVar6 = lVar3 + 1;
    lVar14 = lVar3;
    lVar1 = plVar13[lVar3];
  }
  plVar13 = plVar13 + lVar14 + 1;
  if (param_4 < (ulong)((long)plVar13 - (long)param_3)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("buflen >= bufferend - buffer","nss_files/files-hosts.c",0x1ab,
                  "_nss_files_gethostbyname4_r");
  }
  param_4 = param_4 - ((long)plVar13 - (long)param_3);
  if (local_50[1] != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("result.h_addr_list[1] == NULL","nss_files/files-hosts.c",0x1b4,
                  "_nss_files_gethostbyname4_r");
  }
  puVar11 = (undefined8 *)*param_2;
  if (puVar11 == (undefined8 *)0x0) {
    uVar8 = (ulong)(-(int)plVar13 & 7);
    puVar11 = (undefined8 *)((long)plVar13 + uVar8);
    if ((param_4 <= uVar8) || (param_4 - uVar8 < 0x28)) {
      local_8c = -2;
      *param_5 = 0x22;
      *param_6 = 0xffffffff;
LAB_00773700:
      fclose(__stream);
      goto LAB_0077370a;
    }
    *param_2 = (long)puVar11;
    plVar13 = puVar11 + 5;
    param_4 = (param_4 - uVar8) - 0x28;
  }
  *puVar11 = 0;
  lVar14 = *param_2;
  pcVar9 = (char *)0x0;
  if (!bVar4) {
    pcVar9 = pcVar5;
  }
  *(char **)(lVar14 + 8) = pcVar9;
  __src = (void *)*local_50;
  *(undefined4 *)(lVar14 + 0x10) = local_58;
  memcpy((void *)(lVar14 + 0x14),__src,(long)local_54);
  param_2 = (long *)*param_2;
  *(undefined4 *)((long)param_2 + 0x24) = 0;
  if ((_res_hconf[0x40] & 0x10) == 0) goto LAB_00773700;
  bVar4 = true;
  param_3 = plVar13;
  goto LAB_00773540;
}

