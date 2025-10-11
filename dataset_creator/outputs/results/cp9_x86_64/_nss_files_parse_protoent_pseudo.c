
undefined8
_nss_files_parse_protoent
          (char *param_1,undefined8 *param_2,char *param_3,long param_4,undefined4 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  ushort uVar3;
  char cVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  pcVar1 = param_3 + param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar11 = param_3;
  if ((param_1 < pcVar1) && (param_3 <= param_1)) {
    sVar8 = strlen(param_1);
    pcVar11 = param_1 + sVar8 + 1;
  }
  pcVar5 = strpbrk(param_1,"#\n");
  if (pcVar5 != (char *)0x0) {
    *pcVar5 = '\0';
  }
  *param_2 = param_1;
  cVar4 = *param_1;
  if (cVar4 != '\0') {
    pcVar5 = param_1;
LAB_0077152c:
    lVar9 = (long)cVar4;
    param_1 = pcVar5 + 1;
    cVar4 = *param_1;
    if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar9 * 2) & 0x20) == 0) goto LAB_00771528;
    *pcVar5 = '\0';
    param_1 = pcVar5;
    do {
      pcVar5 = param_1 + 1;
      param_1 = param_1 + 1;
    } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*pcVar5 * 2) & 0x20) != 0);
  }
LAB_00771560:
  uVar6 = __strtoull_internal(param_1,&local_48,10);
  if ((uVar6 >> 0x20 == 0) && (*(int *)(param_2 + 2) = (int)uVar6, local_48 != param_1)) {
    if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*local_48 * 2) & 0x20) == 0) {
      if (*local_48 != '\0') goto LAB_00771682;
    }
    else {
      do {
        local_48 = local_48 + 1;
      } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*local_48 * 2) & 0x20) != 0);
    }
    pcVar5 = local_48;
    if (((pcVar11 == (char *)0x0) && (pcVar11 = param_3, local_48 < pcVar1)) &&
       (param_3 <= local_48)) {
      sVar8 = strlen(local_48);
      pcVar11 = pcVar5 + sVar8 + 1;
    }
    puVar12 = (undefined8 *)((ulong)(pcVar11 + 7) & 0xfffffffffffffff8);
    puVar10 = puVar12;
joined_r0x007715eb:
    if (pcVar1 < puVar10 + 2) {
      *param_5 = 0x22;
      uVar7 = 0xffffffff;
    }
    else {
      if (*pcVar5 != '\0') {
        lVar9 = *(long *)(in_FS_OFFSET + -0x40);
        uVar3 = *(ushort *)(lVar9 + (long)*pcVar5 * 2);
        pcVar11 = pcVar5;
        if ((uVar3 & 0x2000) != 0) goto LAB_00771610;
        goto LAB_00771645;
      }
      *puVar10 = 0;
      if (puVar12 == (undefined8 *)0x0) {
        uVar7 = 0xffffffff;
      }
      else {
        param_2[1] = puVar12;
        uVar7 = 1;
      }
    }
    goto LAB_00771684;
  }
LAB_00771682:
  uVar7 = 0;
LAB_00771684:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
LAB_00771528:
  pcVar5 = param_1;
  if (cVar4 == '\0') goto LAB_00771560;
  goto LAB_0077152c;
LAB_00771610:
  do {
    pcVar2 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    uVar3 = *(ushort *)(lVar9 + (long)*pcVar2 * 2);
  } while ((uVar3 & 0x2000) != 0);
  pcVar11 = pcVar5;
  if (*pcVar2 != '\0') {
LAB_00771645:
    while ((uVar3 & 0x2000) == 0) {
      pcVar2 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
      if (*pcVar2 == '\0') {
        if (pcVar5 <= pcVar11) goto joined_r0x007715eb;
        goto LAB_007716c0;
      }
      uVar3 = *(ushort *)(lVar9 + (long)*pcVar2 * 2);
    }
    if (pcVar11 < pcVar5) {
LAB_007716c0:
      *puVar10 = pcVar11;
      puVar10 = puVar10 + 1;
      cVar4 = *pcVar5;
    }
    else {
      cVar4 = *pcVar5;
    }
    if (cVar4 != '\0') {
      *pcVar5 = '\0';
      pcVar5 = pcVar5 + 1;
    }
  }
  goto joined_r0x007715eb;
}

