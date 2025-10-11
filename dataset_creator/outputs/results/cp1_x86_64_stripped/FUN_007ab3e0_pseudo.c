
undefined8 FUN_007ab3e0(char *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined1 *)thunk_FUN_00712710(param_1,10);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  *param_2 = param_1;
  cVar1 = *param_1;
  if (cVar1 == ':') {
LAB_007ab444:
    if (cVar1 == '\0') goto LAB_007ab4d0;
    pcVar5 = param_1 + 1;
    *param_1 = '\0';
    param_1 = param_1 + 1;
    if (*pcVar5 == '\0') goto LAB_007ab4d0;
  }
  else {
    if (cVar1 != '\0') {
      do {
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
        if (cVar1 == '\0') goto LAB_007ab4d0;
      } while (cVar1 != ':');
      goto LAB_007ab444;
    }
LAB_007ab4d0:
    if ((*(char *)*param_2 - 0x2bU & 0xfd) == 0) {
      uVar4 = 1;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      *(undefined1 (*) [16])(param_2 + 3) = (undefined1  [16])0x0;
      goto LAB_007ab4a6;
    }
  }
  param_2[1] = param_1;
  cVar1 = *param_1;
  if (cVar1 == ':') {
LAB_007ab480:
    if (cVar1 != '\0') {
      *param_1 = '\0';
      param_1 = param_1 + 1;
    }
  }
  else if (cVar1 != '\0') {
    do {
      cVar1 = param_1[1];
      param_1 = param_1 + 1;
      if (cVar1 == '\0') goto LAB_007ab48c;
    } while (cVar1 != ':');
    goto LAB_007ab480;
  }
LAB_007ab48c:
  if ((*(char *)*param_2 - 0x2bU & 0xfd) == 0) {
    if ((*param_1 != '\0') && (uVar3 = FUN_006e94f0(param_1,&local_38,10), uVar3 >> 0x20 == 0)) {
      if (local_38 == param_1) {
        uVar3 = 0;
      }
      *(int *)(param_2 + 2) = (int)uVar3;
      if (*local_38 == ':') {
        pcVar5 = local_38 + 1;
      }
      else {
        pcVar5 = local_38;
        if (*local_38 != '\0') goto LAB_007ab4a4;
      }
      if ((*pcVar5 != '\0') && (uVar3 = FUN_006e94f0(pcVar5,&local_38,10), uVar3 >> 0x20 == 0)) {
        if (local_38 == pcVar5) {
          uVar3 = 0;
        }
        *(int *)((long)param_2 + 0x14) = (int)uVar3;
        cVar1 = *local_38;
        if (cVar1 != ':') goto LAB_007ab69f;
LAB_007ab5ac:
        local_38 = local_38 + 1;
LAB_007ab5b0:
        param_2[3] = local_38;
        cVar1 = *local_38;
        while (cVar1 != '\0') {
          if (cVar1 == ':') {
            *local_38 = '\0';
            local_38 = local_38 + 1;
            break;
          }
          pcVar5 = local_38 + 1;
          local_38 = local_38 + 1;
          cVar1 = *pcVar5;
        }
        param_2[4] = local_38;
        cVar1 = *local_38;
        while (cVar1 != '\0') {
          if (cVar1 == ':') {
            *local_38 = '\0';
            local_38 = local_38 + 1;
            break;
          }
          pcVar5 = local_38 + 1;
          local_38 = local_38 + 1;
          cVar1 = *pcVar5;
        }
        param_2[5] = local_38;
        uVar4 = 1;
        goto LAB_007ab4a6;
      }
    }
  }
  else {
    uVar3 = FUN_006e94f0(param_1,&local_38,10);
    if ((uVar3 >> 0x20 == 0) && (*(int *)(param_2 + 2) = (int)uVar3, local_38 != param_1)) {
      if (*local_38 == ':') {
        pcVar5 = local_38 + 1;
      }
      else {
        pcVar5 = local_38;
        if (*local_38 != '\0') goto LAB_007ab4a4;
      }
      uVar3 = FUN_006e94f0(pcVar5,&local_38,10);
      if ((uVar3 >> 0x20 == 0) && (*(int *)((long)param_2 + 0x14) = (int)uVar3, local_38 != pcVar5))
      {
        cVar1 = *local_38;
        if (cVar1 == ':') goto LAB_007ab5ac;
LAB_007ab69f:
        if (cVar1 == '\0') goto LAB_007ab5b0;
      }
    }
  }
LAB_007ab4a4:
  uVar4 = 0;
LAB_007ab4a6:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

