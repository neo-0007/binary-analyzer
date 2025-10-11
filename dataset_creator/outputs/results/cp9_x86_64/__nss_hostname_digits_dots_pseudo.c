
undefined8
__nss_hostname_digits_dots
          (byte *param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_4,ulong param_5,
          undefined8 *param_6,undefined4 *param_7,int param_8,undefined4 *param_9)

{
  ulong __size;
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  size_t sVar9;
  byte *pbVar10;
  void *pvVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined8 uVar14;
  long in_FS_OFFSET;
  undefined4 local_40;
  
  lVar8 = __resolv_context_get();
  if (lVar8 == 0) {
    if (param_9 != (undefined4 *)0x0) {
      *param_9 = 0xffffffff;
    }
    if (param_4 != (ulong *)0x0) {
      *param_6 = 0;
      return 0xffffffff;
    }
    *param_7 = 0xfffffffe;
    return 0xffffffff;
  }
  bVar1 = *param_1;
  if ((((int)(char)bVar1 - 0x30U < 10) ||
      ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)bVar1 * 2) & 0x10) != 0)) ||
     (bVar1 == 0x3a)) {
    if (param_8 == 10) {
      local_40 = 0x10;
    }
    else {
      local_40 = 4;
      param_8 = 2;
    }
    sVar9 = strlen((char *)param_1);
    __size = sVar9 + 0x29;
    if (param_4 != (ulong *)0x0) {
      pvVar11 = (void *)*param_3;
      if (__size <= *param_4) goto LAB_0076f506;
      *param_4 = __size;
      pvVar11 = realloc(pvVar11,__size);
      if (pvVar11 != (void *)0x0) {
        *param_3 = pvVar11;
        goto LAB_0076f506;
      }
      uVar4 = *(undefined4 *)(in_FS_OFFSET + -0x58);
      free((void *)*param_3);
      *param_3 = 0;
      *param_4 = 0;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar4;
      if (param_9 != (undefined4 *)0x0) {
        *param_9 = 0xffffffff;
      }
LAB_0076f6af:
      *param_6 = 0;
      uVar14 = 1;
      goto LAB_0076f590;
    }
    if (param_5 < __size) {
      *param_7 = 0xfffffffe;
      if (param_9 != (undefined4 *)0x0) {
        *param_9 = 0xffffffff;
      }
      uVar14 = 1;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
      goto LAB_0076f590;
    }
    pvVar11 = (void *)*param_3;
LAB_0076f506:
    memset(pvVar11,0,__size);
    pvVar11 = (void *)*param_3;
    bVar1 = *param_1;
    uVar6 = (uint)(char)bVar1;
    if (uVar6 - 0x30 < 10) {
      pbVar13 = param_1;
      if (bVar1 != 0) {
        do {
          bVar2 = pbVar13[1];
          pbVar13 = pbVar13 + 1;
          if (bVar2 == 0) goto LAB_0076f6c8;
        } while (((int)(char)bVar2 - 0x30U < 10) || (bVar2 == 0x2e));
        goto LAB_0076f568;
      }
LAB_0076f6c8:
      if (pbVar13[-1] == 0x2e) goto LAB_0076f568;
      if (param_8 != 2) {
        iVar7 = inet_pton(10,(char *)param_1,pvVar11);
        if (0 < iVar7) goto LAB_0076f6f1;
        goto LAB_0076f698;
      }
      iVar7 = __inet_aton_exact(param_1,pvVar11);
      if (iVar7 == 0) goto LAB_0076f698;
LAB_0076f6f1:
      pcVar12 = strcpy((char *)((long)pvVar11 + 0x28),(char *)param_1);
      *param_2 = pcVar12;
      *(undefined8 *)((long)pvVar11 + 0x20) = 0;
      param_2[1] = (long)pvVar11 + 0x20;
      *(void **)((long)pvVar11 + 0x10) = pvVar11;
      *(undefined8 *)((long)pvVar11 + 0x18) = 0;
      param_2[3] = (long)pvVar11 + 0x10;
      *(int *)(param_2 + 2) = param_8;
      *(undefined4 *)((long)param_2 + 0x14) = local_40;
      if (param_9 != (undefined4 *)0x0) {
        *param_9 = 0;
      }
    }
    else {
LAB_0076f568:
      lVar5 = *(long *)(in_FS_OFFSET + -0x40);
      uVar3 = *(ushort *)(lVar5 + (long)(char)bVar1 * 2);
      pbVar13 = param_1;
      if ((uVar3 & 0x1000) == 0) {
LAB_0076f584:
        if ((char)uVar6 != ':') goto LAB_0076f58d;
        if (param_8 != 10) goto LAB_0076f698;
LAB_0076f649:
        while( true ) {
          if (((char)uVar6 != '.' && (char)uVar6 != ':') && ((uVar3 & 0x1000) == 0))
          goto LAB_0076f58d;
          bVar1 = pbVar13[1];
          uVar6 = (uint)bVar1;
          pbVar10 = pbVar13 + 1;
          if (bVar1 == 0) break;
          uVar3 = *(ushort *)(lVar5 + (long)(char)bVar1 * 2);
          pbVar13 = pbVar13 + 1;
        }
      }
      else {
        pcVar12 = strchr((char *)param_1,0x3a);
        uVar6 = (uint)bVar1;
        if (pcVar12 == (char *)0x0) goto LAB_0076f584;
        if (param_8 != 10) goto LAB_0076f698;
        pbVar10 = param_1;
        if (bVar1 != 0) goto LAB_0076f649;
      }
      if (pbVar10[-1] == 0x2e) goto LAB_0076f58d;
      iVar7 = inet_pton(10,(char *)param_1,pvVar11);
      if (iVar7 < 1) {
LAB_0076f698:
        *param_9 = 1;
        if (param_4 == (ulong *)0x0) {
          uVar14 = 1;
          *param_7 = 0;
          goto LAB_0076f590;
        }
        goto LAB_0076f6af;
      }
      pcVar12 = strcpy((char *)((long)pvVar11 + 0x28),(char *)param_1);
      *param_2 = pcVar12;
      *(undefined8 *)((long)pvVar11 + 0x20) = 0;
      param_2[1] = (long)pvVar11 + 0x20;
      *(void **)((long)pvVar11 + 0x10) = pvVar11;
      *(undefined8 *)((long)pvVar11 + 0x18) = 0;
      param_2[3] = (long)pvVar11 + 0x10;
      param_2[2] = DAT_008240b8;
      *param_9 = 0;
    }
    if (param_4 == (ulong *)0x0) {
      uVar14 = 1;
      *param_7 = 1;
    }
    else {
      *param_6 = param_2;
      uVar14 = 1;
    }
  }
  else {
LAB_0076f58d:
    uVar14 = 0;
  }
LAB_0076f590:
  __resolv_context_put(lVar8);
  return uVar14;
}

