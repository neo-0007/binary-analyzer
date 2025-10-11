
undefined8
FUN_007ab090(char *param_1,undefined8 *param_2,char *param_3,long param_4,undefined4 *param_5)

{
  char *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  pcVar1 = param_3 + param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar9 = param_3;
  if ((param_3 <= param_1) && (param_1 < pcVar1)) {
    lVar6 = thunk_FUN_007129d0();
    pcVar9 = param_1 + lVar6 + 1;
  }
  puVar3 = (undefined1 *)thunk_FUN_00712710(param_1,10);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  *param_2 = param_1;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    if (cVar2 == ':') {
      pcVar7 = param_1 + 1;
      *param_1 = '\0';
      param_1 = param_1 + 1;
      if (*pcVar7 != '\0') goto LAB_007ab129;
      break;
    }
    pcVar7 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar7;
  }
  if ((*(char *)*param_2 - 0x2bU & 0xfd) == 0) {
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
joined_r0x007ab2ec:
    if (((pcVar9 == (char *)0x0) && (pcVar9 = param_3, param_3 <= param_1)) && (param_1 < pcVar1)) {
      lVar6 = thunk_FUN_007129d0(param_1);
      pcVar9 = param_1 + lVar6 + 1;
    }
    puVar10 = (undefined8 *)((ulong)(pcVar9 + 7) & 0xfffffffffffffff8);
    puVar8 = puVar10;
    while (puVar8 + 2 <= pcVar1) {
      cVar2 = *param_1;
      if (cVar2 == '\0') {
        *puVar8 = 0;
        if (puVar10 == (undefined8 *)0x0) {
          uVar4 = 0xffffffff;
        }
        else {
          param_2[3] = puVar10;
          uVar4 = 1;
        }
        goto LAB_007ab17b;
      }
      if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar2 * 2) & 0x20) == 0) {
        pcVar9 = param_1;
        if (cVar2 != ',') goto LAB_007ab24c;
        goto LAB_007ab272;
      }
      do {
        cVar2 = param_1[1];
        param_1 = param_1 + 1;
      } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar2 * 2) & 0x20) != 0);
      if ((cVar2 != '\0') && (pcVar9 = param_1, cVar2 != ',')) {
LAB_007ab24c:
        do {
          pcVar7 = param_1;
          cVar2 = pcVar7[1];
          param_1 = pcVar7 + 1;
          if (cVar2 == '\0') break;
        } while (cVar2 != ',');
        if (pcVar9 < param_1) {
          *puVar8 = pcVar9;
          cVar2 = pcVar7[1];
          puVar8 = puVar8 + 1;
        }
      }
      if (cVar2 != '\0') {
LAB_007ab272:
        *param_1 = '\0';
        param_1 = param_1 + 1;
      }
    }
    *param_5 = 0x22;
    uVar4 = 0xffffffff;
  }
  else {
LAB_007ab129:
    param_2[1] = param_1;
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      if (cVar2 == ':') {
        *param_1 = '\0';
        param_1 = param_1 + 1;
        break;
      }
      pcVar7 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar7;
    }
    if ((*(char *)*param_2 - 0x2bU & 0xfd) == 0) {
      if ((*param_1 != '\0') && (uVar5 = FUN_006e94f0(param_1,&local_48,10), uVar5 >> 0x20 == 0)) {
        if (local_48 == param_1) {
          uVar5 = 0;
        }
        *(int *)(param_2 + 2) = (int)uVar5;
        cVar2 = *local_48;
        if (cVar2 == ':') goto LAB_007ab2e5;
LAB_007ab363:
        param_1 = local_48;
        if (cVar2 == '\0') goto joined_r0x007ab2ec;
      }
    }
    else {
      uVar5 = FUN_006e94f0(param_1,&local_48,10);
      if ((uVar5 >> 0x20 == 0) && (*(int *)(param_2 + 2) = (int)uVar5, local_48 != param_1)) {
        cVar2 = *local_48;
        if (cVar2 != ':') goto LAB_007ab363;
LAB_007ab2e5:
        param_1 = local_48 + 1;
        goto joined_r0x007ab2ec;
      }
    }
    uVar4 = 0;
  }
LAB_007ab17b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

