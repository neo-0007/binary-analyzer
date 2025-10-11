
undefined8
__nss_hostname_digits_dots_context
          (undefined8 param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4,size_t *param_5,
          ulong param_6,undefined8 *param_7,undefined4 *param_8,int param_9,undefined4 *param_10)

{
  char *__dest;
  byte bVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  void *pvVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ushort uVar12;
  undefined4 uVar13;
  long in_FS_OFFSET;
  
  bVar1 = *param_2;
  if ((((int)(char)bVar1 - 0x30U < 10) ||
      ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)bVar1 * 2) & 0x10) != 0)) ||
     (bVar1 == 0x3a)) {
    uVar13 = 0x10;
    if (param_9 != 10) {
      param_9 = 2;
      uVar13 = 4;
    }
    sVar6 = strlen((char *)param_2);
    sVar6 = sVar6 + 0x29;
    if (param_5 == (size_t *)0x0) {
      if (param_6 < sVar6) {
        *param_8 = 0xfffffffe;
        if (param_10 != (undefined4 *)0x0) {
          *param_10 = 0xffffffff;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
        return 1;
      }
      pvVar8 = (void *)*param_4;
    }
    else {
      pvVar8 = (void *)*param_4;
      if (*param_5 < sVar6) {
        *param_5 = sVar6;
        pvVar8 = realloc(pvVar8,sVar6);
        if (pvVar8 == (void *)0x0) {
          uVar13 = *(undefined4 *)(in_FS_OFFSET + -0x58);
          free((void *)*param_4);
          *param_4 = 0;
          *param_5 = 0;
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar13;
          if (param_10 != (undefined4 *)0x0) {
            *param_10 = 0xffffffff;
          }
          goto LAB_0076fa88;
        }
        *param_4 = pvVar8;
      }
    }
    memset(pvVar8,0,sVar6);
    pvVar8 = (void *)*param_4;
    bVar1 = *param_2;
    uVar4 = (uint)(char)bVar1;
    __dest = (char *)((long)pvVar8 + 0x28);
    if (uVar4 - 0x30 < 10) {
      pbVar11 = param_2;
      if (bVar1 != 0) {
        do {
          bVar2 = pbVar11[1];
          pbVar11 = pbVar11 + 1;
          if (bVar2 == 0) goto LAB_0076fad0;
        } while (((int)(char)bVar2 - 0x30U < 10) || (bVar2 == 0x2e));
        goto LAB_0076fa28;
      }
LAB_0076fad0:
      if (pbVar11[-1] == 0x2e) goto LAB_0076fa28;
      if (param_9 == 2) {
        iVar5 = __inet_aton_exact(param_2,pvVar8);
        if (iVar5 != 0) goto LAB_0076fafd;
      }
      else {
        iVar5 = inet_pton(10,(char *)param_2,pvVar8);
        if (0 < iVar5) {
LAB_0076fafd:
          strcpy(__dest,(char *)param_2);
          *param_3 = __dest;
          *(undefined8 *)((long)pvVar8 + 0x20) = 0;
          param_3[1] = (long)pvVar8 + 0x20;
          *(void **)((long)pvVar8 + 0x10) = pvVar8;
          *(undefined8 *)((long)pvVar8 + 0x18) = 0;
          param_3[3] = (long)pvVar8 + 0x10;
          *(undefined4 *)((long)param_3 + 0x14) = uVar13;
          *(int *)(param_3 + 2) = param_9;
          if (param_10 != (undefined4 *)0x0) {
            *param_10 = 0;
          }
          goto joined_r0x0076fb54;
        }
      }
    }
    else {
LAB_0076fa28:
      lVar3 = *(long *)(in_FS_OFFSET + -0x40);
      uVar12 = *(ushort *)(lVar3 + (long)(char)bVar1 * 2);
      pbVar11 = param_2;
      if ((uVar12 & 0x1000) == 0) {
LAB_0076fab0:
        if ((char)uVar4 != ':') goto LAB_0076fab9;
        if (param_9 != 10) goto LAB_0076fa74;
LAB_0076fbc9:
        while( true ) {
          if (((char)uVar4 != ':' && (char)uVar4 != '.') && ((uVar12 & 0x1000) == 0))
          goto LAB_0076fab9;
          bVar1 = pbVar11[1];
          uVar4 = (uint)bVar1;
          pbVar9 = pbVar11 + 1;
          if (bVar1 == 0) break;
          uVar12 = *(ushort *)(lVar3 + (long)(char)bVar1 * 2);
          pbVar11 = pbVar11 + 1;
        }
      }
      else {
        pcVar7 = strchr((char *)param_2,0x3a);
        uVar4 = (uint)bVar1;
        if (pcVar7 == (char *)0x0) goto LAB_0076fab0;
        if (param_9 != 10) goto LAB_0076fa74;
        pbVar9 = param_2;
        if (bVar1 != 0) goto LAB_0076fbc9;
      }
      if (pbVar9[-1] == 0x2e) goto LAB_0076fab9;
      iVar5 = inet_pton(10,(char *)param_2,pvVar8);
      if (0 < iVar5) {
        strcpy(__dest,(char *)param_2);
        *param_3 = __dest;
        *(undefined8 *)((long)pvVar8 + 0x20) = 0;
        param_3[1] = (long)pvVar8 + 0x20;
        *(void **)((long)pvVar8 + 0x10) = pvVar8;
        *(undefined8 *)((long)pvVar8 + 0x18) = 0;
        param_3[3] = (long)pvVar8 + 0x10;
        param_3[2] = DAT_008240b8;
        *param_10 = 0;
joined_r0x0076fb54:
        if (param_5 == (size_t *)0x0) {
          *param_8 = 1;
          return 1;
        }
        *param_7 = param_3;
        return 1;
      }
    }
LAB_0076fa74:
    *param_10 = 1;
    if (param_5 != (size_t *)0x0) {
LAB_0076fa88:
      *param_7 = 0;
      return 1;
    }
    *param_8 = 0;
    uVar10 = 1;
  }
  else {
LAB_0076fab9:
    uVar10 = 0;
  }
  return uVar10;
}

