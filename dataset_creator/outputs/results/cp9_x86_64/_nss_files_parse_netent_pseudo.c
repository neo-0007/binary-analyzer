
undefined8
_nss_files_parse_netent
          (char *param_1,undefined8 *param_2,char *param_3,long param_4,undefined4 *param_5)

{
  char *pcVar1;
  ushort uVar2;
  char cVar3;
  in_addr_t iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  size_t sVar8;
  ulong uVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar18;
  char *pcVar19;
  undefined8 *puVar20;
  long in_FS_OFFSET;
  long local_68;
  char *local_60;
  undefined4 *local_58;
  char *local_50;
  long local_40;
  long *plVar14;
  long *plVar17;
  
  pcVar1 = param_3 + param_4;
  plVar15 = &local_68;
  plVar14 = &local_68;
  plVar13 = &local_68;
  plVar17 = &local_68;
  plVar16 = &local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = param_5;
  local_50 = param_3;
  if ((param_1 < pcVar1) && (param_3 <= param_1)) {
    sVar8 = strlen(param_1);
    local_50 = param_1 + sVar8 + 1;
  }
  pcVar5 = strpbrk(param_1,"#\n");
  if (pcVar5 != (char *)0x0) {
    *pcVar5 = '\0';
  }
  *param_2 = param_1;
  cVar3 = *param_1;
  pcVar5 = param_1;
  if (cVar3 != '\0') {
LAB_007738c8:
    lVar12 = (long)cVar3;
    pcVar5 = param_1 + 1;
    cVar3 = param_1[1];
    if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar12 * 2) & 0x20) == 0)
    goto LAB_007738c0;
    *param_1 = '\0';
    do {
      pcVar6 = param_1 + 1;
      param_1 = param_1 + 1;
      uVar2 = *(ushort *)(*(long *)(in_FS_OFFSET + -0x40) + (long)*pcVar6 * 2);
    } while ((uVar2 & 0x2000) != 0);
    pcVar19 = param_1;
    pcVar5 = param_1;
    if (*pcVar6 != '\0') {
      while( true ) {
        if ((uVar2 & 0x2000) != 0) break;
        pcVar5 = pcVar19 + 1;
        if (pcVar19[1] == '\0') goto LAB_00773948;
        uVar2 = *(ushort *)(*(long *)(in_FS_OFFSET + -0x40) + (long)pcVar19[1] * 2);
        pcVar19 = pcVar19 + 1;
      }
      *pcVar19 = '\0';
      do {
        pcVar6 = pcVar19 + 1;
        pcVar19 = pcVar19 + 1;
        pcVar5 = pcVar19;
      } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*pcVar6 * 2) & 0x20) != 0);
    }
  }
LAB_00773948:
  pcVar6 = strchr(param_1,0x2e);
  if (pcVar6 == (char *)0x0) {
    local_68 = 6;
    uVar10 = 1;
LAB_00773b00:
    local_60 = (char *)CONCAT44(local_60._4_4_,uVar10);
    sVar8 = strlen(param_1);
    uVar9 = local_68 + 0x18 + sVar8;
    plVar16 = &local_68;
    while (plVar14 != (long *)((long)&local_68 - (uVar9 & 0xfffffffffffff000))) {
      plVar13 = (long *)((long)plVar16 + -0x1000);
      *(undefined8 *)((long)plVar16 + -8) = *(undefined8 *)((long)plVar16 + -8);
      plVar14 = (long *)((long)plVar16 + -0x1000);
      plVar16 = (long *)((long)plVar16 + -0x1000);
    }
    uVar9 = (ulong)((uint)uVar9 & 0xff0);
    lVar12 = -uVar9;
    if (uVar9 != 0) {
      *(undefined8 *)((long)plVar13 + -8) = *(undefined8 *)((long)plVar13 + -8);
    }
    local_68 = CONCAT44(local_68._4_4_,local_60._0_4_);
    local_60 = (char *)((ulong)((long)plVar13 + lVar12 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((long)plVar13 + lVar12 + -8) = 0x773b77;
    pcVar6 = stpcpy(local_60,param_1);
    builtin_strncpy(pcVar6,".0.0",4);
    plVar15 = (long *)((long)plVar13 + lVar12);
    iVar11 = (int)local_68;
    if ((int)local_68 == 1) {
      pcVar6[4] = '.';
      pcVar6[5] = '0';
      plVar15 = (long *)((long)plVar13 + lVar12);
    }
  }
  else {
    pcVar6 = strchr(pcVar6 + 1,0x2e);
    if (pcVar6 == (char *)0x0) {
      local_68 = 4;
      uVar10 = 2;
      goto LAB_00773b00;
    }
    pcVar6 = strchr(pcVar6 + 1,0x2e);
    if (pcVar6 != (char *)0x0) goto LAB_0077398c;
    sVar8 = strlen(param_1);
    plVar13 = &local_68;
    while (plVar17 != (long *)((long)&local_68 - (sVar8 + 0x1a & 0xfffffffffffff000))) {
      plVar16 = (long *)((long)plVar13 + -0x1000);
      *(undefined8 *)((long)plVar13 + -8) = *(undefined8 *)((long)plVar13 + -8);
      plVar17 = (long *)((long)plVar13 + -0x1000);
      plVar13 = (long *)((long)plVar13 + -0x1000);
    }
    uVar9 = (ulong)((uint)(sVar8 + 0x1a) & 0xff0);
    lVar12 = -uVar9;
    if (uVar9 != 0) {
      *(undefined8 *)((long)plVar16 + -8) = *(undefined8 *)((long)plVar16 + -8);
    }
    local_60 = (char *)((ulong)((long)plVar16 + lVar12 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((long)plVar16 + lVar12 + -8) = 0x773c07;
    pcVar6 = stpcpy(local_60,param_1);
    pcVar6[0] = '.';
    pcVar6[1] = '0';
    plVar15 = (long *)((long)plVar16 + lVar12);
    iVar11 = 3;
  }
  pcVar6[(ulong)(3 - iVar11) * 2 + 2] = '\0';
  param_1 = local_60;
LAB_0077398c:
  *(undefined8 *)((long)plVar15 + -8) = 0x773994;
  iVar4 = inet_network(param_1);
  *(undefined4 *)(param_2 + 2) = 2;
  *(in_addr_t *)((long)param_2 + 0x14) = iVar4;
  pcVar6 = local_50;
  if (((local_50 == (char *)0x0) && (pcVar6 = param_3, param_3 <= pcVar5)) &&
     (pcVar6 = param_3, pcVar5 < pcVar1)) {
    *(undefined8 *)((long)plVar15 + -8) = 0x773adf;
    sVar8 = strlen(pcVar5);
    pcVar6 = pcVar5 + sVar8 + 1;
  }
  local_50 = pcVar6;
  puVar20 = (undefined8 *)((ulong)(local_50 + 7) & 0xfffffffffffffff8);
  puVar18 = puVar20;
joined_r0x007739bf:
  if (pcVar1 < puVar18 + 2) {
    *local_58 = 0x22;
    uVar7 = 0xffffffff;
  }
  else {
    if (*pcVar5 != '\0') {
      lVar12 = *(long *)(in_FS_OFFSET + -0x40);
      uVar2 = *(ushort *)(lVar12 + (long)*pcVar5 * 2);
      pcVar6 = pcVar5;
      if ((uVar2 & 0x2000) != 0) goto LAB_007739f0;
      goto LAB_00773a25;
    }
    *puVar18 = 0;
    if (puVar20 == (undefined8 *)0x0) {
      uVar7 = 0xffffffff;
    }
    else {
      param_2[1] = puVar20;
      uVar7 = 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)plVar15 + -8) = 0x773c53;
  __stack_chk_fail_local();
LAB_007738c0:
  param_1 = pcVar5;
  if (cVar3 == '\0') goto LAB_00773948;
  goto LAB_007738c8;
LAB_007739f0:
  do {
    pcVar19 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    uVar2 = *(ushort *)(lVar12 + (long)*pcVar19 * 2);
  } while ((uVar2 & 0x2000) != 0);
  pcVar6 = pcVar5;
  if (*pcVar19 != '\0') {
LAB_00773a25:
    while ((uVar2 & 0x2000) == 0) {
      pcVar19 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
      if (*pcVar19 == '\0') {
        if (pcVar5 <= pcVar6) goto joined_r0x007739bf;
        goto LAB_00773a98;
      }
      uVar2 = *(ushort *)(lVar12 + (long)*pcVar19 * 2);
    }
    if (pcVar6 < pcVar5) {
LAB_00773a98:
      *puVar18 = pcVar6;
      puVar18 = puVar18 + 1;
      cVar3 = *pcVar5;
    }
    else {
      cVar3 = *pcVar5;
    }
    if (cVar3 != '\0') {
      *pcVar5 = '\0';
      pcVar5 = pcVar5 + 1;
    }
  }
  goto joined_r0x007739bf;
}

