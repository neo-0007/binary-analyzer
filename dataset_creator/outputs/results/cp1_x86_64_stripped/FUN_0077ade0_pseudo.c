
undefined8
FUN_0077ade0(char *param_1,undefined8 *param_2,char *param_3,long param_4,undefined4 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  ushort uVar3;
  char cVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  pcVar1 = param_3 + param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar11 = param_3;
  if ((param_1 < pcVar1) && (param_3 <= param_1)) {
    lVar8 = thunk_FUN_007129d0();
    pcVar11 = param_1 + lVar8 + 1;
  }
  puVar5 = (undefined1 *)FUN_00401200(param_1,&DAT_0082ea21);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 0;
  }
  *param_2 = param_1;
  cVar4 = *param_1;
  if (cVar4 != '\0') {
    pcVar10 = param_1;
LAB_0077ae5c:
    lVar8 = (long)cVar4;
    param_1 = pcVar10 + 1;
    cVar4 = *param_1;
    if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar8 * 2) & 0x20) == 0) goto LAB_0077ae58;
    *pcVar10 = '\0';
    param_1 = pcVar10;
    do {
      pcVar10 = param_1 + 1;
      param_1 = param_1 + 1;
    } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*pcVar10 * 2) & 0x20) != 0);
  }
LAB_0077ae90:
  uVar6 = FUN_006e94f0(param_1,&local_48,10);
  if ((uVar6 >> 0x20 == 0) && (*(int *)(param_2 + 2) = (int)uVar6, local_48 != param_1)) {
    if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*local_48 * 2) & 0x20) == 0) {
      if (*local_48 != '\0') goto LAB_0077afb2;
    }
    else {
      do {
        local_48 = local_48 + 1;
      } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*local_48 * 2) & 0x20) != 0);
    }
    pcVar10 = local_48;
    if (((pcVar11 == (char *)0x0) && (pcVar11 = param_3, local_48 < pcVar1)) &&
       (param_3 <= local_48)) {
      lVar8 = thunk_FUN_007129d0(local_48);
      pcVar11 = pcVar10 + lVar8 + 1;
    }
    puVar12 = (undefined8 *)((ulong)(pcVar11 + 7) & 0xfffffffffffffff8);
    puVar9 = puVar12;
joined_r0x0077af1b:
    if (pcVar1 < puVar9 + 2) {
      *param_5 = 0x22;
      uVar7 = 0xffffffff;
    }
    else {
      if (*pcVar10 != '\0') {
        lVar8 = *(long *)(in_FS_OFFSET + -0x40);
        uVar3 = *(ushort *)(lVar8 + (long)*pcVar10 * 2);
        pcVar11 = pcVar10;
        if ((uVar3 & 0x2000) != 0) goto LAB_0077af40;
        goto LAB_0077af75;
      }
      *puVar9 = 0;
      if (puVar12 == (undefined8 *)0x0) {
        uVar7 = 0xffffffff;
      }
      else {
        param_2[1] = puVar12;
        uVar7 = 1;
      }
    }
    goto LAB_0077afb4;
  }
LAB_0077afb2:
  uVar7 = 0;
LAB_0077afb4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
LAB_0077ae58:
  pcVar10 = param_1;
  if (cVar4 == '\0') goto LAB_0077ae90;
  goto LAB_0077ae5c;
LAB_0077af40:
  do {
    pcVar2 = pcVar10 + 1;
    pcVar10 = pcVar10 + 1;
    uVar3 = *(ushort *)(lVar8 + (long)*pcVar2 * 2);
  } while ((uVar3 & 0x2000) != 0);
  pcVar11 = pcVar10;
  if (*pcVar2 != '\0') {
LAB_0077af75:
    while ((uVar3 & 0x2000) == 0) {
      pcVar2 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
      if (*pcVar2 == '\0') {
        if (pcVar10 <= pcVar11) goto joined_r0x0077af1b;
        goto LAB_0077aff0;
      }
      uVar3 = *(ushort *)(lVar8 + (long)*pcVar2 * 2);
    }
    if (pcVar11 < pcVar10) {
LAB_0077aff0:
      *puVar9 = pcVar11;
      puVar9 = puVar9 + 1;
      cVar4 = *pcVar10;
    }
    else {
      cVar4 = *pcVar10;
    }
    if (cVar4 != '\0') {
      *pcVar10 = '\0';
      pcVar10 = pcVar10 + 1;
    }
  }
  goto joined_r0x0077af1b;
}

