
int _nss_netgroup_parseline
              (undefined8 *param_1,undefined4 *param_2,void *param_3,ulong param_4,
              undefined4 *param_5)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  size_t __n;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  
  pcVar9 = (char *)*param_1;
  if (pcVar9 == (char *)0x0) {
    return 0;
  }
  while( true ) {
    cVar2 = *pcVar9;
    uVar3 = *(ushort *)(*(long *)(in_FS_OFFSET + -0x40) + (long)cVar2 * 2);
    if ((uVar3 & 0x2000) == 0) break;
    pcVar9 = pcVar9 + 1;
  }
  if (cVar2 == '(') {
    pcVar8 = pcVar9 + 1;
    do {
      cVar2 = *pcVar8;
      pcVar6 = pcVar8 + 1;
      if (cVar2 == ',') {
        cVar2 = *pcVar6;
        pcVar10 = pcVar8 + 2;
        goto joined_r0x00775838;
      }
      pcVar8 = pcVar6;
    } while (cVar2 != '\0');
  }
  else {
    pcVar8 = pcVar9;
    if (cVar2 != '\0') {
      while ((uVar3 & 0x2000) == 0) {
        pcVar6 = pcVar8 + 1;
        if (pcVar8[1] == '\0') {
          if (pcVar6 == pcVar9) goto LAB_007757e8;
          *param_2 = 1;
          *(char **)(param_2 + 2) = pcVar9;
          *pcVar6 = '\0';
          goto LAB_007759f0;
        }
        uVar3 = *(ushort *)(*(long *)(in_FS_OFFSET + -0x40) + (long)pcVar8[1] * 2);
        pcVar8 = pcVar6;
      }
      if (pcVar9 != pcVar8) {
        *param_2 = 1;
        *(char **)(param_2 + 2) = pcVar9;
        *pcVar8 = '\0';
LAB_007759f0:
        *param_1 = pcVar8 + 1;
        param_2[0xe] = 0;
        return 1;
      }
    }
  }
LAB_007757e8:
  return (uint)(param_2[0xe] == 0) * 2;
joined_r0x00775838:
  if (cVar2 == ',') goto LAB_0077585c;
  if (cVar2 == '\0') goto LAB_007757e8;
  cVar2 = *pcVar10;
  pcVar6 = pcVar10;
  pcVar10 = pcVar10 + 1;
  goto joined_r0x00775838;
LAB_0077585c:
  cVar2 = *pcVar10;
  if (cVar2 != ')') {
    pcVar10 = pcVar10 + 1;
    if (cVar2 == '\0') goto LAB_007757e8;
    goto LAB_0077585c;
  }
  __n = (long)pcVar10 - (long)pcVar9;
  if (param_4 < __n) {
    *param_5 = 0x22;
    return -2;
  }
  pcVar5 = (char *)memcpy(param_3,pcVar9 + 1,__n);
  *param_2 = 0;
  pcVar5[((long)pcVar8 - (long)pcVar9) + -1] = '\0';
  cVar2 = *pcVar5;
  lVar4 = *(long *)(in_FS_OFFSET + -0x40);
  uVar3 = *(ushort *)(lVar4 + (long)cVar2 * 2);
  pcVar7 = pcVar5;
  while ((uVar3 & 0x2000) != 0) {
    cVar2 = pcVar7[1];
    pcVar7 = pcVar7 + 1;
    uVar3 = *(ushort *)(lVar4 + (long)cVar2 * 2);
  }
  pcVar11 = pcVar7;
  if (cVar2 != '\0') {
    while ((uVar3 & 0x2000) == 0) {
      pcVar1 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
      if (*pcVar1 == '\0') break;
      uVar3 = *(ushort *)(lVar4 + (long)*pcVar1 * 2);
    }
  }
  *pcVar11 = '\0';
  if (*pcVar7 == '\0') {
    pcVar7 = (char *)0x0;
  }
  *(char **)(param_2 + 2) = pcVar7;
  pcVar8 = pcVar5 + ((long)pcVar8 - (long)pcVar9);
  pcVar5[((long)pcVar6 - (long)pcVar9) + -1] = '\0';
  while( true ) {
    uVar3 = *(ushort *)(*(long *)(in_FS_OFFSET + -0x40) + (long)*pcVar8 * 2);
    if ((uVar3 & 0x2000) == 0) break;
    pcVar8 = pcVar8 + 1;
  }
  pcVar7 = pcVar8;
  if (*pcVar8 != '\0') {
    while ((uVar3 & 0x2000) == 0) {
      pcVar11 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      if (*pcVar11 == '\0') break;
      uVar3 = *(ushort *)(*(long *)(in_FS_OFFSET + -0x40) + (long)*pcVar11 * 2);
    }
  }
  *pcVar7 = '\0';
  if (*pcVar8 == '\0') {
    pcVar8 = (char *)0x0;
  }
  *(char **)(param_2 + 4) = pcVar8;
  pcVar5[__n - 1] = '\0';
  pcVar5 = pcVar5 + ((long)pcVar6 - (long)pcVar9);
  while( true ) {
    uVar3 = *(ushort *)(*(long *)(in_FS_OFFSET + -0x40) + (long)*pcVar5 * 2);
    if ((uVar3 & 0x2000) == 0) break;
    pcVar5 = pcVar5 + 1;
  }
  pcVar9 = pcVar5;
  if (*pcVar5 != '\0') {
    while ((uVar3 & 0x2000) == 0) {
      pcVar8 = pcVar9 + 1;
      pcVar9 = pcVar9 + 1;
      if (*pcVar8 == '\0') break;
      uVar3 = *(ushort *)(*(long *)(in_FS_OFFSET + -0x40) + (long)*pcVar8 * 2);
    }
  }
  *pcVar9 = '\0';
  if (*pcVar5 == '\0') {
    pcVar5 = (char *)0x0;
  }
  *(char **)(param_2 + 6) = pcVar5;
  *param_1 = pcVar10 + 1;
  param_2[0xe] = 0;
  return 1;
}

