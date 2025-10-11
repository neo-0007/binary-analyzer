
undefined8
_nss_files_parse_sgent
          (byte *param_1,undefined8 *param_2,byte *param_3,long param_4,undefined4 *param_5)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  char *pcVar4;
  size_t sVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  
  pbVar1 = param_3 + param_4;
  pbVar6 = param_3;
  if ((param_3 <= param_1) && (param_1 < pbVar1)) {
    sVar5 = strlen((char *)param_1);
    pbVar6 = param_1 + sVar5 + 1;
  }
  pcVar4 = strchr((char *)param_1,10);
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
  *param_2 = param_1;
  bVar3 = *param_1;
  while (bVar3 != 0) {
    if (bVar3 == 0x3a) {
      pbVar8 = param_1 + 1;
      *param_1 = 0;
      param_1 = param_1 + 1;
      if (*pbVar8 != 0) goto LAB_007a2c7d;
      break;
    }
    pbVar8 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar3 = *pbVar8;
  }
  if ((*(char *)*param_2 - 0x2bU & 0xfd) == 0) {
    param_2[3] = 0;
    *(undefined1 (*) [16])(param_2 + 1) = (undefined1  [16])0x0;
    if (((pbVar6 == (byte *)0x0) && (pbVar6 = param_3, param_3 <= param_1)) && (param_1 < pbVar1)) {
      sVar5 = strlen((char *)param_1);
      pbVar6 = param_1 + sVar5 + 1;
    }
    goto LAB_007a2dd0;
  }
LAB_007a2c7d:
  param_2[1] = param_1;
  bVar3 = *param_1;
  if (bVar3 == 0x3a) {
LAB_007a2f27:
    if (bVar3 != 0) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  else if (bVar3 != 0) {
    do {
      bVar3 = param_1[1];
      param_1 = param_1 + 1;
      if (bVar3 == 0) goto LAB_007a2cac;
    } while (bVar3 != 0x3a);
    goto LAB_007a2f27;
  }
LAB_007a2cac:
  plVar11 = (long *)((ulong)(pbVar6 + 7) & 0xfffffffffffffff8);
  plVar10 = plVar11;
  do {
    do {
      if (pbVar1 < plVar10 + 2) goto LAB_007a2d69;
      bVar3 = *param_1;
      uVar7 = (ulong)bVar3;
      if (bVar3 == 0) goto LAB_007a2ef1;
      if (bVar3 == 0x3a) {
        param_1 = param_1 + 1;
        goto LAB_007a2ef1;
      }
      bVar3 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)bVar3 * 2);
      pbVar6 = param_1;
      while ((bVar3 & 0x20) != 0) {
        uVar7 = (ulong)(char)pbVar6[1];
        pbVar6 = pbVar6 + 1;
        bVar3 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + uVar7 * 2);
      }
      bVar3 = (byte)uVar7;
      param_1 = pbVar6;
      if ((0x3a < bVar3) || ((0xfbffeffffffffffeU >> (uVar7 & 0x3f) & 1) != 0)) {
        do {
          do {
            pbVar8 = param_1;
            bVar3 = pbVar8[1];
            param_1 = pbVar8 + 1;
          } while (0x3a < bVar3);
        } while ((0xfbffeffffffffffeU >> ((ulong)bVar3 & 0x3f) & 1) != 0);
        if (pbVar6 < param_1) {
          *plVar10 = (long)pbVar6;
          bVar3 = pbVar8[1];
          plVar10 = plVar10 + 1;
        }
      }
    } while (bVar3 == 0);
    *param_1 = 0;
    param_1 = param_1 + 1;
  } while (bVar3 != 0x3a);
LAB_007a2ef1:
  *plVar10 = 0;
  if (plVar11 == (long *)0x0) {
    return 0xffffffff;
  }
  lVar2 = *plVar11;
  param_2[2] = plVar11;
  while (lVar2 != 0) {
    plVar11 = plVar11 + 1;
    lVar2 = *plVar11;
  }
  pbVar6 = (byte *)(plVar11 + 1);
LAB_007a2dd0:
  puVar12 = (undefined8 *)((ulong)(pbVar6 + 7) & 0xfffffffffffffff8);
  if (puVar12 + 2 <= pbVar1) {
    bVar3 = *param_1;
    puVar9 = puVar12;
    do {
      if (bVar3 == 0) {
        *puVar9 = 0;
        if (puVar12 == (undefined8 *)0x0) {
          return 0xffffffff;
        }
        param_2[3] = puVar12;
        return 1;
      }
      if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)bVar3 * 2) & 0x20) == 0) {
        pbVar6 = param_1;
        if (bVar3 != 0x2c) goto LAB_007a2e44;
LAB_007a2e6a:
        *param_1 = 0;
        param_1 = param_1 + 1;
      }
      else {
        do {
          bVar3 = param_1[1];
          param_1 = param_1 + 1;
        } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)bVar3 * 2) & 0x20) !=
                 0);
        if ((bVar3 != 0) && (pbVar6 = param_1, bVar3 != 0x2c)) {
LAB_007a2e44:
          do {
            pbVar8 = param_1;
            bVar3 = pbVar8[1];
            param_1 = pbVar8 + 1;
            if (bVar3 == 0) break;
          } while (bVar3 != 0x2c);
          if (pbVar6 < param_1) {
            *puVar9 = pbVar6;
            bVar3 = pbVar8[1];
            puVar9 = puVar9 + 1;
          }
        }
        if (bVar3 != 0) goto LAB_007a2e6a;
      }
      if (pbVar1 < puVar9 + 2) break;
      bVar3 = *param_1;
    } while( true );
  }
LAB_007a2d69:
  *param_5 = 0x22;
  return 0xffffffff;
}

