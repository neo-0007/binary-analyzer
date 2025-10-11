
undefined8 _nss_files_parse_pwent(char *param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = strchr(param_1,10);
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  *param_2 = param_1;
  cVar1 = *param_1;
  if (cVar1 == ':') {
LAB_007a1b04:
    if (cVar1 == '\0') goto LAB_007a1b90;
    pcVar2 = param_1 + 1;
    *param_1 = '\0';
    param_1 = param_1 + 1;
    if (*pcVar2 == '\0') goto LAB_007a1b90;
  }
  else {
    if (cVar1 != '\0') {
      do {
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
        if (cVar1 == '\0') goto LAB_007a1b90;
      } while (cVar1 != ':');
      goto LAB_007a1b04;
    }
LAB_007a1b90:
    if ((*(char *)*param_2 - 0x2bU & 0xfd) == 0) {
      uVar4 = 1;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      *(undefined1 (*) [16])(param_2 + 3) = (undefined1  [16])0x0;
      goto LAB_007a1b66;
    }
  }
  param_2[1] = param_1;
  cVar1 = *param_1;
  if (cVar1 == ':') {
LAB_007a1b40:
    if (cVar1 != '\0') {
      *param_1 = '\0';
      param_1 = param_1 + 1;
    }
  }
  else if (cVar1 != '\0') {
    do {
      cVar1 = param_1[1];
      param_1 = param_1 + 1;
      if (cVar1 == '\0') goto LAB_007a1b4c;
    } while (cVar1 != ':');
    goto LAB_007a1b40;
  }
LAB_007a1b4c:
  if ((*(char *)*param_2 - 0x2bU & 0xfd) == 0) {
    if ((*param_1 != '\0') &&
       (uVar3 = __strtoull_internal(param_1,&local_38,10), uVar3 >> 0x20 == 0)) {
      if (local_38 == param_1) {
        uVar3 = 0;
      }
      *(int *)(param_2 + 2) = (int)uVar3;
      if (*local_38 == ':') {
        pcVar2 = local_38 + 1;
      }
      else {
        pcVar2 = local_38;
        if (*local_38 != '\0') goto LAB_007a1b64;
      }
      if ((*pcVar2 != '\0') &&
         (uVar3 = __strtoull_internal(pcVar2,&local_38,10), uVar3 >> 0x20 == 0)) {
        if (local_38 == pcVar2) {
          uVar3 = 0;
        }
        *(int *)((long)param_2 + 0x14) = (int)uVar3;
        cVar1 = *local_38;
        if (cVar1 != ':') goto LAB_007a1d5f;
LAB_007a1c6c:
        local_38 = local_38 + 1;
LAB_007a1c70:
        param_2[3] = local_38;
        cVar1 = *local_38;
        while (cVar1 != '\0') {
          if (cVar1 == ':') {
            *local_38 = '\0';
            local_38 = local_38 + 1;
            break;
          }
          pcVar2 = local_38 + 1;
          local_38 = local_38 + 1;
          cVar1 = *pcVar2;
        }
        param_2[4] = local_38;
        cVar1 = *local_38;
        while (cVar1 != '\0') {
          if (cVar1 == ':') {
            *local_38 = '\0';
            local_38 = local_38 + 1;
            break;
          }
          pcVar2 = local_38 + 1;
          local_38 = local_38 + 1;
          cVar1 = *pcVar2;
        }
        param_2[5] = local_38;
        uVar4 = 1;
        goto LAB_007a1b66;
      }
    }
  }
  else {
    uVar3 = __strtoull_internal(param_1,&local_38,10);
    if ((uVar3 >> 0x20 == 0) && (*(int *)(param_2 + 2) = (int)uVar3, local_38 != param_1)) {
      if (*local_38 == ':') {
        pcVar2 = local_38 + 1;
      }
      else {
        pcVar2 = local_38;
        if (*local_38 != '\0') goto LAB_007a1b64;
      }
      uVar3 = __strtoull_internal(pcVar2,&local_38,10);
      if ((uVar3 >> 0x20 == 0) && (*(int *)((long)param_2 + 0x14) = (int)uVar3, local_38 != pcVar2))
      {
        cVar1 = *local_38;
        if (cVar1 == ':') goto LAB_007a1c6c;
LAB_007a1d5f:
        if (cVar1 == '\0') goto LAB_007a1c70;
      }
    }
  }
LAB_007a1b64:
  uVar4 = 0;
LAB_007a1b66:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

