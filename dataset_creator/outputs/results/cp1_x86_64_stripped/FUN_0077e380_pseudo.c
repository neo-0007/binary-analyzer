
undefined8 FUN_0077e380(char *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined1 *)FUN_00401200(param_1,&DAT_0082ea21);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  lVar7 = 0;
  do {
    uVar3 = FUN_006e94f0(param_1,&local_38,0x10,0);
    if ((0xffffffff < uVar3) || (local_38 == param_1)) goto LAB_0077e4e8;
    param_1 = local_38 + 1;
    if (((*local_38 != ':') && (param_1 = local_38, *local_38 != '\0')) || (0xff < uVar3))
    goto LAB_0077e4e8;
    *(char *)((long)param_2 + lVar7 + 8) = (char)uVar3;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 5);
  uVar3 = FUN_006e94f0(param_1,&local_38,0x10);
  if ((uVar3 >> 0x20 == 0) && (local_38 != param_1)) {
    lVar7 = *(long *)(in_FS_OFFSET + -0x40);
    if ((*(byte *)(lVar7 + 1 + (long)*local_38 * 2) & 0x20) == 0) {
      if (*local_38 != '\0') goto LAB_0077e4e8;
    }
    else {
      do {
        local_38 = local_38 + 1;
      } while ((*(byte *)(lVar7 + 1 + (long)*local_38 * 2) & 0x20) != 0);
    }
    if (uVar3 < 0x100) {
      *(char *)((long)param_2 + 0xd) = (char)uVar3;
      *param_2 = local_38;
      cVar6 = *local_38;
      pcVar4 = local_38;
      if (cVar6 != '\0') {
LAB_0077e48c:
        lVar8 = (long)cVar6;
        cVar6 = pcVar4[1];
        if ((*(byte *)(lVar7 + 1 + lVar8 * 2) & 0x20) == 0) goto LAB_0077e488;
        *pcVar4 = '\0';
        do {
          pcVar1 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*pcVar1 * 2) & 0x20) != 0);
      }
LAB_0077e4c0:
      uVar5 = 1;
      goto LAB_0077e4c5;
    }
  }
LAB_0077e4e8:
  uVar5 = 0;
LAB_0077e4c5:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
LAB_0077e488:
  pcVar4 = pcVar4 + 1;
  if (cVar6 == '\0') goto LAB_0077e4c0;
  goto LAB_0077e48c;
}

