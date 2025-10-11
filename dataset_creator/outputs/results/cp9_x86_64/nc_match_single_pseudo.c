
ulong nc_match_single(int param_1,undefined4 *param_2,long param_3)

{
  char *__s2;
  X509_NAME *a;
  X509_NAME *a_00;
  void *__s;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  char *__s1;
  ulong uVar11;
  size_t sVar12;
  
  switch(*param_2) {
  case 0:
    uVar11 = 0x33;
    if (param_1 == 1) {
      uVar11 = nc_email_eai_isra_0(*(undefined8 *)(*(long *)(param_2 + 2) + 8),
                                   **(undefined4 **)(param_3 + 8),
                                   *(undefined8 *)(*(undefined4 **)(param_3 + 8) + 2));
      return uVar11;
    }
    break;
  case 1:
    iVar3 = **(int **)(param_3 + 8);
    __s1 = *(char **)(*(int **)(param_3 + 8) + 2);
    __s2 = *(char **)(*(int **)(param_2 + 2) + 2);
    if (iVar3 < 1) {
      if (iVar3 == 0) goto LAB_0060cda0;
      pcVar9 = __s1 + (long)iVar3 + -1;
    }
    else {
      pcVar9 = __s1 + (long)iVar3 + -1;
      iVar1 = iVar3;
      do {
        if (*pcVar9 == '@') goto LAB_0060cb52;
        pcVar9 = pcVar9 + -1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
LAB_0060cda0:
      pcVar9 = (char *)0x0;
    }
LAB_0060cb52:
    iVar1 = **(int **)(param_2 + 2);
    if (iVar1 < 1) {
      if (iVar1 != 0) {
        pcVar10 = __s2 + (long)iVar1 + -1;
LAB_0060cb85:
        if (pcVar9 == (char *)0x0) {
          pcVar9 = __s1;
          if ((0 < iVar3) && (*__s1 == '.')) {
            if (iVar3 < iVar1) {
              lVar8 = (long)iVar3;
              pcVar10 = __s2 + (iVar1 - iVar3);
              goto LAB_0060cc24;
            }
            goto LAB_0060cab0;
          }
        }
        else {
          if (__s1 != pcVar9) {
            sVar12 = (long)pcVar9 - (long)__s1;
            if (sVar12 == (long)pcVar10 - (long)__s2) {
              pvVar5 = memchr(__s1,0,sVar12);
              if (pvVar5 != (void *)0x0) {
                return 0x35;
              }
              pvVar5 = memchr(__s2,0,sVar12);
              if (pvVar5 != (void *)0x0) {
                return 0x35;
              }
              iVar2 = strncmp(__s1,__s2,sVar12);
              if (iVar2 == 0) goto LAB_0060cbfe;
            }
            goto LAB_0060cab0;
          }
LAB_0060cbfe:
          pcVar9 = pcVar9 + 1;
        }
        pcVar10 = pcVar10 + 1;
        lVar8 = (long)iVar3 - ((long)pcVar9 - (long)__s1);
        __s1 = pcVar9;
        if (lVar8 == (long)iVar1 - ((long)pcVar10 - (long)__s2)) goto LAB_0060cc24;
        goto LAB_0060cab0;
      }
    }
    else {
      pcVar10 = __s2 + (long)iVar1 + -1;
      iVar2 = iVar1;
      do {
        if (*pcVar10 == '@') goto LAB_0060cb85;
        pcVar10 = pcVar10 + -1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    goto LAB_0060cd90;
  case 2:
    iVar3 = **(int **)(param_2 + 2);
    pcVar10 = *(char **)(*(int **)(param_2 + 2) + 2);
    iVar1 = **(int **)(param_3 + 8);
    lVar8 = (long)iVar1;
    __s1 = *(char **)(*(int **)(param_3 + 8) + 2);
    if (iVar1 != 0) {
      if ((iVar3 < iVar1) ||
         (((iVar1 < iVar3 && (pcVar10 = pcVar10 + (iVar3 - iVar1), *__s1 != '.')) &&
          (pcVar10[-1] != '.')))) goto LAB_0060cab0;
LAB_0060cc24:
      iVar3 = ia5ncasecmp(__s1,pcVar10,lVar8);
      if (iVar3 != 0) goto LAB_0060cab0;
    }
LAB_0060ccc0:
    uVar11 = 0;
    break;
  default:
    uVar11 = 0x33;
    break;
  case 4:
    a = *(X509_NAME **)(param_3 + 8);
    a_00 = *(X509_NAME **)(param_2 + 2);
    if (((a_00->modified != 0) && (iVar3 = i2d_X509_NAME(a_00,(uchar **)0x0), iVar3 < 0)) ||
       ((a->modified != 0 && (iVar3 = i2d_X509_NAME(a,(uchar **)0x0), iVar3 < 0)))) {
      return 0x11;
    }
    if (a->canon_enclen <= a_00->canon_enclen) {
      iVar3 = bcmp(a->canon_enc,a_00->canon_enc,(long)a->canon_enclen);
joined_r0x0060cd83:
      if (iVar3 == 0) goto LAB_0060ccc0;
    }
    goto LAB_0060cab0;
  case 6:
    iVar3 = **(int **)(param_2 + 2);
    sVar12 = (size_t)iVar3;
    __s = *(void **)(*(int **)(param_2 + 2) + 2);
    pvVar5 = memchr(__s,0x3a,sVar12);
    if (pvVar5 != (void *)0x0) {
      if ((long)(sVar12 - ((long)pvVar5 - (long)__s)) < 3) {
        return 0x35;
      }
      if (*(char *)((long)pvVar5 + 1) != '/') {
        return 0x35;
      }
      if (*(char *)((long)pvVar5 + 2) != '/') {
        return 0x35;
      }
      pvVar5 = (void *)((long)pvVar5 + 3);
      sVar12 = sVar12 - ((long)pvVar5 - (long)__s);
      pvVar6 = memchr(pvVar5,0x3a,sVar12);
      if ((pvVar6 == (void *)0x0) && (pvVar6 = memchr(pvVar5,0x2f,sVar12), pvVar6 == (void *)0x0)) {
        iVar3 = iVar3 - (int)((long)pvVar5 - (long)__s);
      }
      else {
        iVar3 = (int)pvVar6 - (int)pvVar5;
      }
      if (iVar3 == 0) {
        return 0x35;
      }
      iVar1 = **(int **)(param_3 + 8);
      if ((iVar1 < 1) || (**(char **)(*(int **)(param_3 + 8) + 2) != '.')) {
        if (iVar1 == iVar3) {
          iVar3 = ia5ncasecmp(pvVar5);
          goto joined_r0x0060cd83;
        }
      }
      else if (iVar1 < iVar3) {
        uVar4 = ia5ncasecmp((long)pvVar5 + ((long)iVar3 - (long)iVar1));
        if (uVar4 == 0) {
          return (ulong)uVar4;
        }
      }
      goto LAB_0060cab0;
    }
LAB_0060cd90:
    uVar11 = 0x35;
    break;
  case 7:
    iVar3 = **(int **)(param_2 + 2);
    if ((iVar3 != 4) && (iVar3 != 0x10)) {
      return 0x35;
    }
    iVar1 = **(int **)(param_3 + 8);
    if ((iVar1 != 8) && (iVar1 != 0x20)) {
      return 0x35;
    }
    lVar8 = *(long *)(*(int **)(param_3 + 8) + 2);
    if (iVar1 == iVar3 * 2) {
      if (0 < iVar3) {
        lVar7 = 0;
        do {
          if (((*(byte *)(*(long *)(*(int **)(param_2 + 2) + 2) + lVar7) ^ *(byte *)(lVar8 + lVar7))
              & *(byte *)(lVar8 + iVar3 + lVar7)) != 0) goto LAB_0060cab0;
          lVar7 = lVar7 + 1;
        } while (iVar3 != lVar7);
      }
      goto LAB_0060ccc0;
    }
LAB_0060cab0:
    uVar11 = 0x2f;
  }
  return uVar11;
}

