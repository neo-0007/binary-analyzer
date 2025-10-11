
ulong FUN_006e9530(byte *param_1,undefined8 *param_2,uint param_3,int param_4,long param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  char *pcVar11;
  char cVar12;
  byte bVar13;
  long in_FS_OFFSET;
  byte local_46;
  int local_44;
  
  pbVar5 = (byte *)0x0;
  pcVar11 = (char *)0x0;
  if (param_4 != 0) {
    pbVar5 = *(byte **)(*(long *)(param_5 + 8) + 0x50);
    if ((byte)(*pbVar5 - 1) < 0x7e) {
      pcVar11 = *(char **)(*(long *)(param_5 + 8) + 0x48);
      if (*pcVar11 == '\0') {
        pbVar5 = (byte *)0x0;
        pcVar11 = (char *)0x0;
      }
    }
    else {
      pbVar5 = (byte *)0x0;
      pcVar11 = (char *)0x0;
    }
  }
  if ((param_3 == 1) || (0x24 < param_3)) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    return 0;
  }
  uVar2 = (ulong)(char)*param_1;
  bVar13 = *(byte *)(*(long *)(param_5 + 0x68) + 1 + uVar2 * 2);
  pbVar8 = param_1;
  while ((bVar13 & 0x20) != 0) {
    uVar2 = (ulong)(char)pbVar8[1];
    pbVar8 = pbVar8 + 1;
    bVar13 = *(byte *)(*(long *)(param_5 + 0x68) + 1 + uVar2 * 2);
  }
  cVar12 = (char)uVar2;
  if (cVar12 == '\0') {
    if (param_2 == (undefined8 *)0x0) {
      return 0;
    }
    goto LAB_006e98af;
  }
  if (cVar12 == '-') {
    uVar2 = (ulong)pbVar8[1];
    local_44 = 1;
    pbVar8 = pbVar8 + 1;
  }
  else {
    local_44 = 0;
    if (cVar12 == '+') {
      uVar2 = (ulong)pbVar8[1];
      pbVar8 = pbVar8 + 1;
    }
  }
  bVar13 = (byte)uVar2;
  if (bVar13 == 0x30) {
    pbVar9 = pbVar8;
    if ((param_3 & 0xffffffef) == 0) {
      if (*(int *)(PTR_DAT_00939cb8 + (long)(char)pbVar8[1] * 4) == 0x58) {
        uVar2 = (ulong)pbVar8[2];
        local_46 = 0xf;
        pbVar8 = pbVar8 + 2;
        uVar4 = 0;
        uVar10 = 0xfffffffffffffff;
        param_3 = 0x10;
        pbVar5 = (byte *)0x0;
        goto LAB_006e95f9;
      }
      if (param_3 != 0) goto LAB_006e97ec;
      local_46 = 7;
      param_3 = 8;
      pbVar5 = (byte *)0x0;
      uVar4 = 0;
      uVar10 = 0x1fffffffffffffff;
      uVar3 = 0x30;
    }
    else {
LAB_006e97ec:
      if (param_3 == 10) {
        if (pbVar5 != (byte *)0x0) goto LAB_006e9960;
        local_46 = 5;
        uVar4 = 0;
        uVar3 = 0x30;
        uVar10 = 0x1999999999999999;
      }
      else {
        pbVar5 = (byte *)0x0;
        uVar4 = 0;
        uVar10 = *(ulong *)(&DAT_00824e00 + (long)(int)(param_3 - 2) * 8);
        local_46 = (&DAT_00824dc0)[(int)(param_3 - 2)];
        uVar3 = 0x30;
      }
    }
LAB_006e9615:
    uVar2 = 0;
    bVar1 = false;
    pbVar8 = pbVar9;
LAB_006e965e:
    uVar6 = (int)uVar3 - 0x30;
    if ((byte)uVar6 < 10) {
LAB_006e967e:
      if ((int)param_3 <= (int)(uVar6 & 0xff)) goto LAB_006e96a0;
      if ((uVar2 <= uVar10) && ((uVar10 != uVar2 || ((byte)uVar6 <= local_46)))) {
        uVar2 = uVar2 * (long)(int)param_3 + ((ulong)uVar6 & 0xff);
        goto LAB_006e964d;
      }
      bVar1 = true;
      bVar13 = pbVar8[1];
joined_r0x006e9657:
      pbVar8 = pbVar8 + 1;
      if ((bVar13 == 0) || (uVar3 = (ulong)bVar13, pbVar8 == pbVar5)) goto LAB_006e96a0;
      goto LAB_006e965e;
    }
    if (uVar4 != 0) {
      uVar7 = 0;
      do {
        if (pcVar11[uVar7] != pbVar8[uVar7]) {
          if (uVar4 != uVar7) goto LAB_006e966f;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar4);
      pbVar8 = pbVar8 + (uVar4 - 1);
LAB_006e964d:
      bVar13 = pbVar8[1];
      goto joined_r0x006e9657;
    }
LAB_006e966f:
    if ((PTR_DAT_00939ca8[uVar3 * 2 + 1] & 4) != 0) {
      uVar6 = *(int *)(PTR_DAT_00939cb8 + uVar3 * 4) - 0x37;
      goto LAB_006e967e;
    }
LAB_006e96a0:
    if (pbVar9 != pbVar8) {
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = pbVar8;
      }
      if ((!bVar1) && (uVar2 <= (long)local_44 + 0x7fffffffffffffffU)) {
        uVar10 = -uVar2;
        if (local_44 == 0) {
          uVar10 = uVar2;
        }
        return uVar10;
      }
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
      if (local_44 == 0) {
        return 0x7fffffffffffffff;
      }
      return 0x8000000000000000;
    }
  }
  else if ((param_3 == 0) || (param_3 == 10)) {
    if (pbVar5 == (byte *)0x0) {
      local_46 = 5;
      param_3 = 10;
      uVar4 = 0;
      uVar10 = 0x1999999999999999;
      goto LAB_006e95f9;
    }
LAB_006e9960:
    uVar4 = thunk_FUN_007129d0(pcVar11);
    if (uVar4 != 0) {
      uVar10 = 0;
LAB_006e998d:
      if (pcVar11[uVar10] == pbVar8[uVar10]) goto LAB_006e9980;
      uVar2 = uVar2 & 0xff;
      pbVar9 = pbVar8;
      while (bVar13 != 0) {
        if (9 < (byte)((char)uVar2 - 0x30U)) {
          uVar10 = 0;
          do {
            if (pcVar11[uVar10] != pbVar9[uVar10]) {
              if ((uVar10 < uVar4) &&
                 (((PTR_DAT_00939ca8[uVar2 * 2 + 1] & 4) == 0 ||
                  (0x40 < *(int *)(PTR_DAT_00939cb8 + uVar2 * 4))))) goto LAB_006e99f7;
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar4);
        }
        bVar13 = pbVar9[1];
        uVar2 = (ulong)bVar13;
        pbVar9 = pbVar9 + 1;
      }
LAB_006e99f7:
      pbVar5 = (byte *)FUN_006f4720(pbVar8,pbVar9,pcVar11,pbVar5);
      local_46 = 5;
      uVar2 = (ulong)*pbVar8;
      uVar10 = 0x1999999999999999;
      param_3 = 10;
      goto LAB_006e95f9;
    }
  }
  else {
    uVar4 = 0;
    pbVar5 = (byte *)0x0;
    local_46 = (&DAT_00824dc0)[(int)(param_3 - 2)];
    uVar10 = *(ulong *)(&DAT_00824e00 + (long)(int)(param_3 - 2) * 8);
LAB_006e95f9:
    uVar3 = uVar2 & 0xff;
    if (((char)uVar2 != '\0') && (pbVar9 = pbVar8, pbVar5 != pbVar8)) goto LAB_006e9615;
  }
LAB_006e9881:
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  if (((1 < (long)pbVar8 - (long)param_1) &&
      (*(int *)(PTR_DAT_00939cb8 + (long)(char)pbVar8[-1] * 4) == 0x58)) && (pbVar8[-2] == 0x30)) {
    *param_2 = pbVar8 + -1;
    return 0;
  }
LAB_006e98af:
  *param_2 = param_1;
  return 0;
LAB_006e9980:
  uVar10 = uVar10 + 1;
  if (uVar10 == uVar4) goto LAB_006e9881;
  goto LAB_006e998d;
}

