
char * __correctly_grouped_prefixmb(char *param_1,char *param_2,char *param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  size_t sVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  char *pcVar15;
  char *local_60;
  
  pcVar2 = param_2;
  if (param_4 != (char *)0x0) {
    sVar7 = strlen(param_3);
    local_60 = param_2;
    if (param_1 < param_2) {
      lVar1 = sVar7 - 1;
      pcVar2 = param_1 + -1;
LAB_006ead6e:
      if (local_60 + -1 < param_1) {
        return local_60;
      }
      cVar4 = *param_3;
      pcVar8 = local_60 + (sVar7 - 3);
      do {
        pcVar3 = pcVar8 + (2 - sVar7);
        if (pcVar8[1] == cVar4) {
          cVar6 = param_3[1];
          if (cVar6 == '\0') goto LAB_006eadd4;
          pcVar15 = param_3 + 2;
          pcVar11 = pcVar8;
          while (*pcVar11 == cVar6) {
            cVar6 = *pcVar15;
            pcVar11 = pcVar11 + -1;
            pcVar15 = pcVar15 + 1;
            if (cVar6 == '\0') goto LAB_006eadd4;
          }
        }
        pcVar8 = pcVar8 + -1;
        if (pcVar8 == param_1 + (sVar7 - 3)) {
          return local_60;
        }
      } while( true );
    }
LAB_006eae13:
    pcVar2 = param_1;
    if (param_1 <= local_60) {
      pcVar2 = local_60;
    }
  }
  local_60 = pcVar2;
  return local_60;
LAB_006eadd4:
  if (pcVar3 < param_1) {
    return local_60;
  }
  lVar9 = (long)*param_4;
  lVar10 = (long)(*param_4 + 1);
  if ((long)local_60 - (long)pcVar3 == lVar10) {
    pcVar3 = pcVar3 + -1;
    pcVar8 = pcVar3;
    pcVar15 = param_4;
    do {
      cVar6 = pcVar15[1];
      if (cVar6 != '\0') {
        pcVar15 = pcVar15 + 1;
        lVar9 = (long)cVar6;
      }
      bVar14 = (byte)lVar9;
      pcVar11 = pcVar8;
      if (bVar14 < 0x7f) {
        if (pcVar8 < param_1) {
          return local_60;
        }
        while (cVar4 != '\0') {
          pcVar12 = pcVar11 + lVar1;
          pcVar13 = param_3 + 1;
          cVar5 = cVar4;
          while (*pcVar12 == cVar5) {
            cVar5 = *pcVar13;
            pcVar12 = pcVar12 + -1;
            pcVar13 = pcVar13 + 1;
            if (cVar5 == '\0') goto LAB_006eb010;
          }
          pcVar11 = pcVar11 + -1;
          if (pcVar11 == pcVar2) goto LAB_006eaf1d;
        }
LAB_006eb010:
        if (pcVar11 < param_1) goto LAB_006eb02f;
        if ((long)pcVar8 - (long)pcVar11 != (long)(char)bVar14) goto LAB_006eae08;
      }
      else {
        if (pcVar8 < param_1) {
          return local_60;
        }
        while (cVar4 != '\0') {
          pcVar13 = pcVar11 + lVar1;
          pcVar8 = param_3 + 1;
          cVar5 = cVar4;
          while (*pcVar13 == cVar5) {
            cVar5 = *pcVar8;
            pcVar13 = pcVar13 + -1;
            pcVar8 = pcVar8 + 1;
            if (cVar5 == '\0') goto LAB_006eaeb8;
          }
          pcVar11 = pcVar11 + -1;
          if (pcVar11 == pcVar2) {
            return local_60;
          }
        }
LAB_006eaeb8:
        if (pcVar11 < param_1) {
          return local_60;
        }
      }
      if (cVar6 == '\0') goto LAB_006eaf40;
      pcVar8 = pcVar11 + -1;
    } while( true );
  }
  if (lVar10 < (long)local_60 - (long)pcVar3) {
    pcVar3 = pcVar3 + lVar9 + 1;
  }
  goto LAB_006eae08;
LAB_006eaf40:
  pcVar8 = pcVar11;
  do {
    while (pcVar8 = pcVar8 + -1, 0x7e < bVar14) {
      if (pcVar8 < param_1) {
        return local_60;
      }
      while (cVar4 != '\0') {
        pcVar11 = pcVar8 + lVar1;
        pcVar15 = param_3 + 1;
        cVar6 = cVar4;
        while (*pcVar11 == cVar6) {
          cVar6 = *pcVar15;
          pcVar11 = pcVar11 + -1;
          pcVar15 = pcVar15 + 1;
          if (cVar6 == '\0') goto LAB_006eaf98;
        }
        pcVar8 = pcVar8 + -1;
        if (pcVar8 == pcVar2) {
          return local_60;
        }
      }
LAB_006eaf98:
      if (pcVar8 < param_1) {
        return local_60;
      }
    }
    pcVar11 = pcVar8;
    if (pcVar8 < param_1) {
      return local_60;
    }
    while (cVar4 != '\0') {
      pcVar13 = pcVar11 + lVar1;
      pcVar15 = param_3 + 1;
      cVar6 = cVar4;
      while (*pcVar13 == cVar6) {
        cVar6 = *pcVar15;
        pcVar13 = pcVar13 + -1;
        pcVar15 = pcVar15 + 1;
        if (cVar6 == '\0') goto LAB_006eaff8;
      }
      pcVar11 = pcVar11 + -1;
      if (pcVar11 == pcVar2) goto LAB_006eaf1d;
    }
LAB_006eaff8:
    if (pcVar11 < param_1) goto LAB_006eb02f;
    lVar10 = (long)pcVar8 - (long)pcVar11;
    pcVar8 = pcVar11;
  } while ((char)bVar14 == lVar10);
  goto LAB_006eae08;
LAB_006eaf1d:
  lVar10 = (long)pcVar8 - (long)pcVar2;
  goto LAB_006eaf20;
LAB_006eb02f:
  lVar10 = (long)pcVar8 - (long)pcVar11;
LAB_006eaf20:
  if (lVar10 <= lVar9) {
    return local_60;
  }
LAB_006eae08:
  local_60 = pcVar3;
  if (local_60 <= param_1) goto LAB_006eae13;
  goto LAB_006ead6e;
}

