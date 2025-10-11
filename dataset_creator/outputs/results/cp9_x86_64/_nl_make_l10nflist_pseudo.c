
undefined8 *
_nl_make_l10nflist(long *param_1,char *param_2,size_t param_3,uint param_4,char *param_5,
                  char *param_6,char *param_7,char *param_8,char *param_9,char *param_10,
                  int param_11)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  size_t sVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  undefined8 *local_58;
  uint local_50;
  uint local_48;
  
  sVar4 = strlen(param_5);
  if ((param_4 & 4) == 0) {
    lVar14 = 0;
  }
  else {
    sVar5 = strlen(param_6);
    lVar14 = sVar5 + 1;
  }
  lVar13 = 0;
  local_58._0_4_ = param_4 & 2;
  if ((param_4 & 2) != 0) {
    sVar5 = strlen(param_7);
    lVar13 = sVar5 + 1;
  }
  lVar11 = 0;
  local_50 = param_4 & 1;
  if ((param_4 & 1) != 0) {
    sVar5 = strlen(param_8);
    lVar11 = sVar5 + 1;
  }
  lVar15 = 0;
  local_48 = param_4 & 8;
  if ((param_4 & 8) != 0) {
    sVar5 = strlen(param_9);
    lVar15 = sVar5 + 1;
  }
  sVar5 = strlen(param_10);
  pcVar6 = (char *)malloc(lVar11 + lVar13 + sVar4 + param_3 + 2 + lVar14 + lVar15 + sVar5);
  if (pcVar6 == (char *)0x0) {
    return (undefined8 *)0x0;
  }
  memcpy(pcVar6,param_2,param_3);
  sVar4 = param_3;
  pcVar8 = pcVar6;
  if (param_3 != 0) {
    while( true ) {
      sVar7 = strlen(pcVar8);
      sVar4 = (sVar4 - sVar7) - 1;
      if (sVar4 == 0) break;
      pcVar8[sVar7] = ':';
      pcVar8 = pcVar8 + sVar7 + 1;
    }
  }
  pcVar6[param_3 - 1] = '/';
  pcVar8 = stpcpy(pcVar6 + param_3,param_5);
  if ((param_4 & 4) != 0) {
    *pcVar8 = '_';
    pcVar8 = stpcpy(pcVar8 + 1,param_6);
  }
  if ((uint)local_58 != 0) {
    *pcVar8 = '.';
    pcVar8 = stpcpy(pcVar8 + 1,param_7);
  }
  if (local_50 != 0) {
    *pcVar8 = '.';
    pcVar8 = stpcpy(pcVar8 + 1,param_8);
  }
  if (local_48 != 0) {
    *pcVar8 = '@';
    pcVar8 = stpcpy(pcVar8 + 1,param_9);
  }
  *pcVar8 = '/';
  memcpy(pcVar8 + 1,param_10,sVar5 + 1);
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    local_58 = (undefined8 *)0x0;
  }
  else {
    local_58 = (undefined8 *)0x0;
    puVar9 = puVar1;
    do {
      puVar12 = local_58;
      if ((char *)*puVar9 != (char *)0x0) {
        iVar2 = strcmp((char *)*puVar9,pcVar6);
        if (iVar2 == 0) goto LAB_006dc6a0;
        puVar12 = puVar9;
        if (iVar2 < 0) break;
      }
      puVar9 = (undefined8 *)puVar9[3];
      local_58 = puVar12;
    } while (puVar9 != (undefined8 *)0x0);
  }
  if (param_11 == 0) {
    puVar9 = (undefined8 *)0x0;
LAB_006dc6a0:
    free(pcVar6);
    return puVar9;
  }
  lVar14 = 0;
  uVar3 = ((int)param_4 >> 1 & 0xffffd555U) + (param_4 & 0x5555);
  iVar2 = ((int)uVar3 >> 2 & 0xfffff333U) + (uVar3 & 0x3333);
  uVar3 = (iVar2 >> 4) + iVar2 & 0xf0f;
  sVar4 = param_3;
  pcVar8 = param_2;
  if (param_3 == 0) {
    puVar9 = (undefined8 *)malloc(0x28);
    if (puVar9 == (undefined8 *)0x0) goto LAB_006dc6e4;
    *puVar9 = pcVar6;
    uVar3 = 1;
  }
  else {
    do {
      lVar14 = lVar14 + 1;
      sVar5 = strlen(pcVar8);
      sVar4 = (sVar4 - sVar5) - 1;
      pcVar8 = pcVar8 + sVar5 + 1;
    } while (sVar4 != 0);
    puVar9 = (undefined8 *)malloc(lVar14 * (1 << (char)(uVar3 >> 8) + (char)uVar3) * 0x10 + 0x28);
    if (puVar9 == (undefined8 *)0x0) {
LAB_006dc6e4:
      free(pcVar6);
      return (undefined8 *)0x0;
    }
    *puVar9 = pcVar6;
    lVar14 = 0;
    sVar4 = param_3;
    pcVar6 = param_2;
    do {
      lVar14 = lVar14 + 1;
      sVar5 = strlen(pcVar6);
      pcVar6 = pcVar6 + sVar5 + 1;
      sVar4 = (sVar4 - sVar5) - 1;
    } while (sVar4 != 0);
    uVar3 = 1;
    if (lVar14 == 1) {
      uVar3 = (uint)((param_4 & 3) == 3);
    }
  }
  *(uint *)(puVar9 + 1) = uVar3;
  puVar9[2] = 0;
  if (local_58 == (undefined8 *)0x0) {
    puVar9[3] = puVar1;
    *param_1 = (long)puVar9;
  }
  else {
    puVar9[3] = local_58[3];
    local_58[3] = puVar9;
  }
  uVar3 = param_4;
  if (param_3 != 0) {
    lVar14 = 0;
    sVar4 = param_3;
    pcVar6 = param_2;
    do {
      lVar14 = lVar14 + 1;
      sVar5 = strlen(pcVar6);
      pcVar6 = pcVar6 + sVar5 + 1;
      sVar4 = (sVar4 - sVar5) - 1;
    } while (sVar4 != 0);
    uVar3 = param_4 - (lVar14 == 1);
  }
  lVar13 = 0;
  lVar14 = lVar13;
  if (-1 < (int)uVar3) {
    do {
      lVar14 = lVar13;
      if (((uVar3 & ~param_4) == 0) && (pcVar6 = param_2, param_3 != 0)) {
        do {
          lVar14 = lVar13 + 1;
          sVar4 = strlen(pcVar6);
          uVar10 = _nl_make_l10nflist(param_1,pcVar6,sVar4 + 1,uVar3,param_5,param_6,param_7,param_8
                                      ,param_9,param_10,1);
          puVar9[lVar13 + 4] = uVar10;
          if (param_2 + param_3 <= pcVar6) break;
          sVar4 = strlen(pcVar6);
          pcVar6 = pcVar6 + sVar4 + 1;
          lVar13 = lVar14;
        } while (pcVar6 < param_2 + param_3);
      }
      bVar16 = uVar3 != 0;
      uVar3 = uVar3 - 1;
      lVar13 = lVar14;
    } while (bVar16);
  }
  iVar2 = strncmp(param_10,"LC_MESSAGES",0xb);
  if ((iVar2 == 0) && (-1 < (int)param_4)) {
    uVar3 = ~param_4;
    lVar13 = lVar14;
    do {
      lVar14 = lVar13;
      if ((param_4 & uVar3) == 0) {
        lVar14 = lVar13 + 1;
        uVar10 = _nl_make_l10nflist(param_1,"/usr/share/locale-langpack",0x1b,param_4,param_5,
                                    param_6,param_7,param_8,param_9,param_10,1);
        puVar9[lVar13 + 4] = uVar10;
      }
      bVar16 = param_4 != 0;
      param_4 = param_4 - 1;
      lVar13 = lVar14;
    } while (bVar16);
  }
  puVar9[lVar14 + 4] = 0;
  return puVar9;
}

