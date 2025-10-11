
undefined8 _nss_files_parse_etherent(char *param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = strpbrk(param_1,"#\n");
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  lVar6 = 0;
  do {
    uVar3 = __strtoull_internal(param_1,&local_38,0x10,0);
    if ((0xffffffff < uVar3) || (local_38 == param_1)) goto LAB_00774bb8;
    param_1 = local_38 + 1;
    if (((*local_38 != ':') && (param_1 = local_38, *local_38 != '\0')) || (0xff < uVar3))
    goto LAB_00774bb8;
    *(char *)((long)param_2 + lVar6 + 8) = (char)uVar3;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 5);
  uVar3 = __strtoull_internal(param_1,&local_38,0x10);
  if ((uVar3 >> 0x20 == 0) && (local_38 != param_1)) {
    lVar6 = *(long *)(in_FS_OFFSET + -0x40);
    if ((*(byte *)(lVar6 + 1 + (long)*local_38 * 2) & 0x20) == 0) {
      if (*local_38 != '\0') goto LAB_00774bb8;
    }
    else {
      do {
        local_38 = local_38 + 1;
      } while ((*(byte *)(lVar6 + 1 + (long)*local_38 * 2) & 0x20) != 0);
    }
    if (uVar3 < 0x100) {
      *(char *)((long)param_2 + 0xd) = (char)uVar3;
      *param_2 = local_38;
      cVar5 = *local_38;
      pcVar2 = local_38;
      if (cVar5 != '\0') {
LAB_00774b5c:
        lVar7 = (long)cVar5;
        cVar5 = pcVar2[1];
        if ((*(byte *)(lVar6 + 1 + lVar7 * 2) & 0x20) == 0) goto LAB_00774b58;
        *pcVar2 = '\0';
        do {
          pcVar1 = pcVar2 + 1;
          pcVar2 = pcVar2 + 1;
        } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*pcVar1 * 2) & 0x20) != 0);
      }
LAB_00774b90:
      uVar4 = 1;
      goto LAB_00774b95;
    }
  }
LAB_00774bb8:
  uVar4 = 0;
LAB_00774b95:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
LAB_00774b58:
  pcVar2 = pcVar2 + 1;
  if (cVar5 == '\0') goto LAB_00774b90;
  goto LAB_00774b5c;
}

