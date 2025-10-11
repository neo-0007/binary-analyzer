
undefined8
_nss_files_parse_grent
          (char *param_1,undefined8 *param_2,char *param_3,long param_4,undefined4 *param_5)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  size_t sVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  pcVar1 = param_3 + param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar8 = param_3;
  if ((param_3 <= param_1) && (param_1 < pcVar1)) {
    sVar6 = strlen(param_1);
    pcVar8 = param_1 + sVar6 + 1;
  }
  pcVar3 = strchr(param_1,10);
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
  }
  *param_2 = param_1;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    if (cVar2 == ':') {
      pcVar3 = param_1 + 1;
      *param_1 = '\0';
      param_1 = param_1 + 1;
      if (*pcVar3 != '\0') goto LAB_007a17e9;
      break;
    }
    pcVar3 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar3;
  }
  if ((*(char *)*param_2 - 0x2bU & 0xfd) == 0) {
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
joined_r0x007a19ac:
    if (((pcVar8 == (char *)0x0) && (pcVar8 = param_3, param_3 <= param_1)) && (param_1 < pcVar1)) {
      sVar6 = strlen(param_1);
      pcVar8 = param_1 + sVar6 + 1;
    }
    puVar9 = (undefined8 *)((ulong)(pcVar8 + 7) & 0xfffffffffffffff8);
    puVar7 = puVar9;
    while (puVar7 + 2 <= pcVar1) {
      cVar2 = *param_1;
      if (cVar2 == '\0') {
        *puVar7 = 0;
        if (puVar9 == (undefined8 *)0x0) {
          uVar4 = 0xffffffff;
        }
        else {
          param_2[3] = puVar9;
          uVar4 = 1;
        }
        goto LAB_007a183b;
      }
      if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar2 * 2) & 0x20) == 0) {
        pcVar8 = param_1;
        if (cVar2 != ',') goto LAB_007a190c;
        goto LAB_007a1932;
      }
      do {
        cVar2 = param_1[1];
        param_1 = param_1 + 1;
      } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar2 * 2) & 0x20) != 0);
      if ((cVar2 != '\0') && (pcVar8 = param_1, cVar2 != ',')) {
LAB_007a190c:
        do {
          pcVar3 = param_1;
          cVar2 = pcVar3[1];
          param_1 = pcVar3 + 1;
          if (cVar2 == '\0') break;
        } while (cVar2 != ',');
        if (pcVar8 < param_1) {
          *puVar7 = pcVar8;
          cVar2 = pcVar3[1];
          puVar7 = puVar7 + 1;
        }
      }
      if (cVar2 != '\0') {
LAB_007a1932:
        *param_1 = '\0';
        param_1 = param_1 + 1;
      }
    }
    *param_5 = 0x22;
    uVar4 = 0xffffffff;
  }
  else {
LAB_007a17e9:
    param_2[1] = param_1;
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      if (cVar2 == ':') {
        *param_1 = '\0';
        param_1 = param_1 + 1;
        break;
      }
      pcVar3 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar3;
    }
    if ((*(char *)*param_2 - 0x2bU & 0xfd) == 0) {
      if ((*param_1 != '\0') &&
         (uVar5 = __strtoull_internal(param_1,&local_48,10), uVar5 >> 0x20 == 0)) {
        if (local_48 == param_1) {
          uVar5 = 0;
        }
        *(int *)(param_2 + 2) = (int)uVar5;
        cVar2 = *local_48;
        if (cVar2 == ':') goto LAB_007a19a5;
LAB_007a1a23:
        param_1 = local_48;
        if (cVar2 == '\0') goto joined_r0x007a19ac;
      }
    }
    else {
      uVar5 = __strtoull_internal(param_1,&local_48,10);
      if ((uVar5 >> 0x20 == 0) && (*(int *)(param_2 + 2) = (int)uVar5, local_48 != param_1)) {
        cVar2 = *local_48;
        if (cVar2 != ':') goto LAB_007a1a23;
LAB_007a19a5:
        param_1 = local_48 + 1;
        goto joined_r0x007a19ac;
      }
    }
    uVar4 = 0;
  }
LAB_007a183b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

