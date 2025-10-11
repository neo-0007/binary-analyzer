
undefined8 * __gconv_create_spec(undefined8 *param_1,char *param_2,char *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  char *__ptr;
  char *__ptr_00;
  size_t sVar5;
  undefined1 *puVar6;
  undefined1 *__s;
  char cVar7;
  char *pcVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  char *local_68 [2];
  char *local_58;
  undefined2 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = strdup(param_2);
  local_68[0] = __ptr;
  __ptr_00 = strdup(param_3);
  local_58 = __ptr_00;
  if ((__ptr == (char *)0x0) || (__ptr_00 == (char *)0x0)) {
    puVar11 = (undefined8 *)0x0;
    goto LAB_006d4ebd;
  }
  gconv_parse_code(local_68);
  gconv_parse_code(&local_58);
  *(undefined2 *)(param_1 + 2) = local_50;
  sVar5 = strlen(param_2);
  puVar6 = (undefined1 *)malloc(sVar5 + 3);
  *param_1 = puVar6;
  if (puVar6 == (undefined1 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    __ptr_00 = local_58;
    __ptr = local_68[0];
    goto LAB_006d4ebd;
  }
  sVar5 = strlen(param_3);
  __s = (undefined1 *)malloc(sVar5 + 3);
  __ptr_00 = local_58;
  __ptr = local_68[0];
  param_1[1] = __s;
  uVar2 = _nl_C_locobj._120_8_;
  uVar1 = _nl_C_locobj._104_8_;
  if (__s == (undefined1 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    free(puVar6);
    *param_1 = 0;
    goto LAB_006d4ebd;
  }
  cVar7 = *local_68[0];
  if (cVar7 == '\0') {
    iVar4 = 1;
LAB_006d4daa:
    sVar5 = (ulong)(2 - iVar4) + 1;
    if (2 < iVar4) {
      sVar5 = 1;
    }
    puVar10 = puVar6 + sVar5;
    memset(puVar6,0x2f,sVar5);
  }
  else {
    iVar9 = 0;
    pcVar8 = local_68[0];
    do {
      while( true ) {
        bVar3 = (byte)(*(ushort *)(uVar1 + (long)cVar7 * 2) >> 3) & 1;
        if ((byte)(cVar7 - 0x2cU) < 0x34) {
          bVar3 = bVar3 | (byte)(-0x8000000004008 >> (cVar7 - 0x2cU & 0x3f)) & 1 ^ 1;
        }
        if (bVar3 == 0) break;
        *puVar6 = (char)*(undefined4 *)(uVar2 + (long)cVar7 * 4);
        puVar6 = puVar6 + 1;
LAB_006d4d3c:
        cVar7 = pcVar8[1];
        pcVar8 = pcVar8 + 1;
        if (cVar7 == '\0') goto LAB_006d4da0;
      }
      if (cVar7 != '/') goto LAB_006d4d3c;
      iVar9 = iVar9 + 1;
      puVar10 = puVar6;
      if (iVar9 == 3) goto LAB_006d4dd6;
      pcVar8 = pcVar8 + 1;
      *puVar6 = 0x2f;
      puVar6 = puVar6 + 1;
      cVar7 = *pcVar8;
    } while (cVar7 != '\0');
LAB_006d4da0:
    iVar4 = iVar9 + 1;
    puVar10 = puVar6;
    if (iVar9 < 2) goto LAB_006d4daa;
  }
LAB_006d4dd6:
  *puVar10 = 0;
  uVar2 = _nl_C_locobj._120_8_;
  uVar1 = _nl_C_locobj._104_8_;
  cVar7 = *__ptr_00;
  if (cVar7 == '\0') {
    iVar4 = 1;
LAB_006d4e8a:
    sVar5 = (ulong)(2 - iVar4) + 1;
    if (2 < iVar4) {
      sVar5 = 1;
    }
    puVar6 = __s + sVar5;
    memset(__s,0x2f,sVar5);
  }
  else {
    iVar9 = 0;
    pcVar8 = __ptr_00;
    do {
      while( true ) {
        bVar3 = (byte)(*(ushort *)(uVar1 + (long)cVar7 * 2) >> 3) & 1;
        if ((byte)(cVar7 - 0x2cU) < 0x34) {
          bVar3 = bVar3 | (byte)(-0x8000000004008 >> (cVar7 - 0x2cU & 0x3f)) & 1 ^ 1;
        }
        if (bVar3 == 0) break;
        *__s = (char)*(undefined4 *)(uVar2 + (long)cVar7 * 4);
        __s = __s + 1;
LAB_006d4e1b:
        cVar7 = pcVar8[1];
        pcVar8 = pcVar8 + 1;
        if (cVar7 == '\0') goto LAB_006d4e80;
      }
      if (cVar7 != '/') goto LAB_006d4e1b;
      iVar9 = iVar9 + 1;
      puVar6 = __s;
      if (iVar9 == 3) goto LAB_006d4eb6;
      pcVar8 = pcVar8 + 1;
      *__s = 0x2f;
      __s = __s + 1;
      cVar7 = *pcVar8;
    } while (cVar7 != '\0');
LAB_006d4e80:
    iVar4 = iVar9 + 1;
    puVar6 = __s;
    if (iVar9 < 2) goto LAB_006d4e8a;
  }
LAB_006d4eb6:
  *puVar6 = 0;
  puVar11 = param_1;
LAB_006d4ebd:
  free(__ptr);
  free(__ptr_00);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return puVar11;
}

