
undefined8
get_next_alias(FILE *param_1,char *param_2,undefined8 *param_3,char *param_4,ulong param_5,
              undefined4 *param_6)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint __c;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  FILE *__stream;
  undefined8 uVar11;
  long *plVar12;
  size_t sVar13;
  char *pcVar14;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  byte *__s1;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  long in_FS_OFFSET;
  bool bVar22;
  
  uVar18 = param_5 & 0xfffffffffffffff8;
  param_3[1] = 0;
  if (uVar18 < 2) {
LAB_00775eb1:
    *param_6 = 0x22;
    uVar11 = 0xfffffffe;
  }
  else {
    bVar22 = false;
LAB_00775aa8:
    param_4[uVar18 - 1] = -1;
    pcVar5 = fgets_unlocked(param_4,(uint)param_5 & 0xfffffff8,param_1);
    if (pcVar5 != (char *)0x0) {
      if (param_4[uVar18 - 1] == -1) {
        if ((!bVar22) ||
           ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*param_4 * 2) & 0x20) == 0))
        goto LAB_00775b00;
        goto LAB_00775aee;
      }
      goto LAB_00775eb1;
    }
    uVar11 = 0;
  }
  return uVar11;
LAB_00775b00:
  pcVar6 = strpbrk(param_4,"#\n");
  if (pcVar6 != (char *)0x0) {
    *pcVar6 = '\0';
  }
  bVar3 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*pcVar5 * 2);
  while ((bVar3 & 0x20) != 0) {
    pcVar6 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    bVar3 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*pcVar6 * 2);
  }
  *param_3 = param_4;
  cVar2 = *pcVar5;
  if ((cVar2 != '\0') && (pcVar6 = param_4, cVar2 != ':')) {
    do {
      pcVar17 = pcVar5;
      pcVar14 = pcVar6;
      pcVar6 = pcVar14 + 1;
      *pcVar14 = cVar2;
      cVar2 = pcVar17[1];
      pcVar5 = pcVar17 + 1;
    } while (cVar2 != '\0' && cVar2 != ':');
    if ((cVar2 != '\0') && ((char *)*param_3 != pcVar6)) {
      *pcVar6 = '\0';
      __s1 = (byte *)(pcVar14 + 2);
      uVar19 = (long)__s1 - (long)*param_3;
      if (uVar18 < uVar19) goto LAB_00775eb1;
      if ((param_2 == (char *)0x0) || (iVar4 = strcasecmp((char *)*param_3,param_2), iVar4 == 0)) {
        uVar7 = (ulong)(byte)pcVar17[2];
        uVar18 = uVar18 - uVar19;
        pbVar20 = (byte *)(pcVar17 + 2);
        goto LAB_00775c00;
      }
LAB_00775aee:
      bVar22 = true;
    }
  }
  goto LAB_00775aa8;
code_r0x00775dd7:
  if (*pbVar20 == 0xff) {
    pcVar6 = strpbrk((char *)pbVar9,"#\n");
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = '\0';
    }
    lVar10 = *(long *)(in_FS_OFFSET + -0x40);
    bVar3 = *pbVar9;
    do {
      bVar1 = *(byte *)(lVar10 + 1 + (long)(char)bVar3 * 2);
      while ((bVar1 & 0x20) == 0) {
        pbVar20 = __s1;
        if (bVar3 != 0x2c) {
          if (bVar3 == 0) goto LAB_00775d96;
          do {
            pbVar9 = pbVar9 + 1;
            *pbVar20 = bVar3;
            pbVar20 = pbVar20 + 1;
            bVar3 = *pbVar9;
            if (bVar3 == 0) goto LAB_00775e3f;
          } while (bVar3 != 0x2c);
        }
        pbVar9 = pbVar9 + 1;
LAB_00775e3f:
        if (__s1 == pbVar20) {
          bVar3 = *pbVar9;
        }
        else {
          *pbVar20 = 0;
          lVar10 = (long)(pbVar20 + 1) - (long)__s1;
          if (uVar18 < lVar10 + 8U) goto LAB_00775e9f;
          param_3[1] = param_3[1] + 1;
          uVar18 = (uVar18 - 8) - lVar10;
          bVar3 = *pbVar9;
          __s1 = pbVar20 + 1;
        }
        if (bVar3 == 0) goto LAB_00775d96;
        lVar10 = *(long *)(in_FS_OFFSET + -0x40);
        bVar1 = *(byte *)(lVar10 + 1 + (long)(char)bVar3 * 2);
      }
      bVar3 = pbVar9[1];
      pbVar9 = pbVar9 + 1;
    } while( true );
  }
LAB_00775e9f:
  free(pcVar5);
  fclose(__stream);
  goto LAB_00775eb1;
LAB_00775c00:
  do {
    bVar3 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)uVar7 * 2);
    while ((bVar3 & 0x20) != 0) {
      uVar7 = (ulong)(char)pbVar20[1];
      pbVar20 = pbVar20 + 1;
      bVar3 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + uVar7 * 2);
    }
    if ((char)uVar7 == '\0') break;
    pbVar9 = __s1;
    if ((char)uVar7 == ',') goto LAB_00775cc6;
    do {
      pbVar21 = pbVar20;
      pbVar8 = pbVar9;
      pbVar20 = pbVar21 + 1;
      pbVar9 = pbVar8 + 1;
      *pbVar8 = (byte)uVar7;
      bVar3 = *pbVar20;
      uVar7 = (ulong)bVar3;
      if (bVar3 == 0) break;
    } while (bVar3 != 0x2c);
    if (__s1 != pbVar9) {
      *pbVar9 = 0;
      if (bVar3 != 0) {
        pbVar20 = pbVar21 + 2;
      }
      iVar4 = strncmp((char *)__s1,":include:",9);
      if (iVar4 == 0) {
        __stream = (FILE *)__nss_files_fopen(__s1 + 9);
        if ((__stream == (FILE *)0x0) || (pcVar5 = strdup((char *)pbVar20), pcVar5 == (char *)0x0))
        {
          uVar7 = (ulong)*pbVar20;
        }
        else {
LAB_00775d96:
          if ((__stream->_flags & 0x10) == 0) {
            if (uVar18 < 2) goto LAB_00775e9f;
            pbVar20 = __s1 + (uVar18 - 1);
            *pbVar20 = 0xff;
            pbVar9 = (byte *)fgets_unlocked((char *)__s1,(int)uVar18,__stream);
            if (pbVar9 != (byte *)0x0) goto code_r0x00775dd7;
          }
          else {
            pbVar20 = __s1 + (uVar18 - 1);
          }
          fclose(__stream);
          *pbVar20 = 0;
          strncpy((char *)__s1,pcVar5,uVar18);
          free(pcVar5);
          if (*pbVar20 != 0) goto LAB_00775eb1;
          uVar7 = (ulong)*__s1;
          pbVar20 = __s1;
        }
      }
      else {
        lVar10 = (long)(pbVar8 + 2) - (long)__s1;
        if (uVar18 < lVar10 + 8U) goto LAB_00775eb1;
        param_3[1] = param_3[1] + 1;
        uVar7 = (ulong)*pbVar20;
        uVar18 = (uVar18 - 8) - lVar10;
        __s1 = pbVar8 + 2;
      }
    }
LAB_00775cc6:
  } while ((char)uVar7 != '\0');
  pbVar20 = (byte *)param_1->_IO_read_ptr;
  if (pbVar20 < param_1->_IO_read_end) {
    param_1->_IO_read_ptr = (char *)(pbVar20 + 1);
    __c = (uint)*pbVar20;
    bVar22 = false;
  }
  else {
    __c = __uflow(param_1);
    bVar22 = __c == 0xffffffff;
  }
  if ((__c == 10) || (bVar22)) {
    if (__c == 0xffffffff) goto LAB_00775f11;
  }
  else if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(int)__c * 2) & 0x20) != 0) {
    __s1[uVar18 - 1] = 0xff;
    pbVar20 = (byte *)fgets_unlocked((char *)__s1,(int)uVar18,param_1);
    if (pbVar20 == (byte *)0x0) {
      *__s1 = 0;
      pbVar20 = __s1;
    }
    else {
      if (__s1[uVar18 - 1] != 0xff) goto LAB_00775eb1;
      pcVar5 = strpbrk((char *)pbVar20,"#\n");
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\0';
      }
      uVar7 = (ulong)*pbVar20;
    }
    goto LAB_00775c00;
  }
  ungetc(__c,param_1);
LAB_00775f11:
  lVar10 = param_3[1];
  pcVar5 = (char *)*param_3;
  plVar12 = (long *)((ulong)(__s1 + 7) & 0xfffffffffffffff8);
  param_3[2] = plVar12;
  if (lVar10 != 0) {
    plVar15 = plVar12;
    do {
      plVar16 = plVar15 + 1;
      sVar13 = strlen(pcVar5);
      pcVar5 = pcVar5 + sVar13 + 1;
      *plVar15 = (long)pcVar5;
      plVar15 = plVar16;
    } while (plVar12 + lVar10 != plVar16);
    return 1;
  }
  return 2;
}

