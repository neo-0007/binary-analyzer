
ulong ____strtol_l_internal(byte *param_1,undefined8 *param_2,uint param_3,int param_4,long param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  byte *pbVar5;
  uint uVar6;
  size_t sVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  char *__s;
  char cVar11;
  byte bVar12;
  long in_FS_OFFSET;
  byte local_46;
  int local_44;
  
  pbVar5 = (byte *)0x0;
  __s = (char *)0x0;
  if (param_4 != 0) {
    pbVar5 = *(byte **)(*(long *)(param_5 + 8) + 0x50);
    if ((byte)(*pbVar5 - 1) < 0x7e) {
      __s = *(char **)(*(long *)(param_5 + 8) + 0x48);
      if (*__s == '\0') {
        pbVar5 = (byte *)0x0;
        __s = (char *)0x0;
      }
    }
    else {
      pbVar5 = (byte *)0x0;
      __s = (char *)0x0;
    }
  }
  if ((param_3 == 1) || (0x24 < param_3)) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    return 0;
  }
  uVar2 = (ulong)(char)*param_1;
  bVar12 = *(byte *)(*(long *)(param_5 + 0x68) + 1 + uVar2 * 2);
  pbVar8 = param_1;
  while ((bVar12 & 0x20) != 0) {
    uVar2 = (ulong)(char)pbVar8[1];
    pbVar8 = pbVar8 + 1;
    bVar12 = *(byte *)(*(long *)(param_5 + 0x68) + 1 + uVar2 * 2);
  }
  cVar11 = (char)uVar2;
  if (cVar11 == '\0') {
    if (param_2 == (undefined8 *)0x0) {
      return 0;
    }
    goto LAB_006dfe9f;
  }
  if (cVar11 == '-') {
    uVar2 = (ulong)pbVar8[1];
    local_44 = 1;
    pbVar8 = pbVar8 + 1;
  }
  else {
    local_44 = 0;
    if (cVar11 == '+') {
      uVar2 = (ulong)pbVar8[1];
      pbVar8 = pbVar8 + 1;
    }
  }
  bVar12 = (byte)uVar2;
  if (bVar12 == 0x30) {
    pbVar9 = pbVar8;
    if ((param_3 & 0xffffffef) == 0) {
      if (*(int *)(_nl_C_locobj._120_8_ + (long)(char)pbVar8[1] * 4) == 0x58) {
        uVar2 = (ulong)pbVar8[2];
        local_46 = 0xf;
        pbVar8 = pbVar8 + 2;
        sVar4 = 0;
        uVar10 = 0xfffffffffffffff;
        param_3 = 0x10;
        pbVar5 = (byte *)0x0;
        goto LAB_006dfbe9;
      }
      if (param_3 != 0) goto LAB_006dfddc;
      local_46 = 7;
      param_3 = 8;
      pbVar5 = (byte *)0x0;
      sVar4 = 0;
      uVar10 = 0x1fffffffffffffff;
      uVar3 = 0x30;
    }
    else {
LAB_006dfddc:
      if (param_3 == 10) {
        if (pbVar5 != (byte *)0x0) goto LAB_006dff50;
        local_46 = 5;
        sVar4 = 0;
        uVar3 = 0x30;
        uVar10 = 0x1999999999999999;
      }
      else {
        pbVar5 = (byte *)0x0;
        sVar4 = 0;
        uVar10 = *(ulong *)(__strtol_ul_max_tab + (long)(int)(param_3 - 2) * 8);
        local_46 = __strtol_ul_rem_tab[(int)(param_3 - 2)];
        uVar3 = 0x30;
      }
    }
LAB_006dfc05:
    uVar2 = 0;
    bVar1 = false;
    pbVar8 = pbVar9;
LAB_006dfc4e:
    uVar6 = (int)uVar3 - 0x30;
    if ((byte)uVar6 < 10) {
LAB_006dfc6e:
      if ((int)param_3 <= (int)(uVar6 & 0xff)) goto LAB_006dfc90;
      if ((uVar2 <= uVar10) && ((uVar10 != uVar2 || ((byte)uVar6 <= local_46)))) {
        uVar2 = uVar2 * (long)(int)param_3 + ((ulong)uVar6 & 0xff);
        goto LAB_006dfc3d;
      }
      bVar1 = true;
      bVar12 = pbVar8[1];
joined_r0x006dfc47:
      pbVar8 = pbVar8 + 1;
      if ((bVar12 == 0) || (uVar3 = (ulong)bVar12, pbVar8 == pbVar5)) goto LAB_006dfc90;
      goto LAB_006dfc4e;
    }
    if (sVar4 != 0) {
      sVar7 = 0;
      do {
        if (__s[sVar7] != pbVar8[sVar7]) {
          if (sVar4 != sVar7) goto LAB_006dfc5f;
          break;
        }
        sVar7 = sVar7 + 1;
      } while (sVar7 != sVar4);
      pbVar8 = pbVar8 + (sVar4 - 1);
LAB_006dfc3d:
      bVar12 = pbVar8[1];
      goto joined_r0x006dfc47;
    }
LAB_006dfc5f:
    if ((*(byte *)(_nl_C_locobj._104_8_ + 1 + uVar3 * 2) & 4) != 0) {
      uVar6 = *(int *)(_nl_C_locobj._120_8_ + uVar3 * 4) - 0x37;
      goto LAB_006dfc6e;
    }
LAB_006dfc90:
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
      sVar4 = 0;
      uVar10 = 0x1999999999999999;
      goto LAB_006dfbe9;
    }
LAB_006dff50:
    sVar4 = strlen(__s);
    if (sVar4 != 0) {
      sVar7 = 0;
LAB_006dff7d:
      if (__s[sVar7] == pbVar8[sVar7]) goto LAB_006dff70;
      uVar2 = uVar2 & 0xff;
      pbVar9 = pbVar8;
      while (bVar12 != 0) {
        if (9 < (byte)((char)uVar2 - 0x30U)) {
          uVar10 = 0;
          do {
            if (__s[uVar10] != pbVar9[uVar10]) {
              if ((uVar10 < sVar4) &&
                 (((*(byte *)(_nl_C_locobj._104_8_ + 1 + uVar2 * 2) & 4) == 0 ||
                  (0x40 < *(int *)(_nl_C_locobj._120_8_ + uVar2 * 4))))) goto LAB_006dffe7;
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != sVar4);
        }
        bVar12 = pbVar9[1];
        uVar2 = (ulong)bVar12;
        pbVar9 = pbVar9 + 1;
      }
LAB_006dffe7:
      pbVar5 = (byte *)__correctly_grouped_prefixmb(pbVar8,pbVar9,__s,pbVar5);
      local_46 = 5;
      uVar2 = (ulong)*pbVar8;
      uVar10 = 0x1999999999999999;
      param_3 = 10;
      goto LAB_006dfbe9;
    }
  }
  else {
    sVar4 = 0;
    pbVar5 = (byte *)0x0;
    local_46 = __strtol_ul_rem_tab[(int)(param_3 - 2)];
    uVar10 = *(ulong *)(__strtol_ul_max_tab + (long)(int)(param_3 - 2) * 8);
LAB_006dfbe9:
    uVar3 = uVar2 & 0xff;
    if (((char)uVar2 != '\0') && (pbVar9 = pbVar8, pbVar5 != pbVar8)) goto LAB_006dfc05;
  }
LAB_006dfe71:
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  if (((1 < (long)pbVar8 - (long)param_1) &&
      (*(int *)(_nl_C_locobj._120_8_ + (long)(char)pbVar8[-1] * 4) == 0x58)) && (pbVar8[-2] == 0x30)
     ) {
    *param_2 = pbVar8 + -1;
    return 0;
  }
LAB_006dfe9f:
  *param_2 = param_1;
  return 0;
LAB_006dff70:
  sVar7 = sVar7 + 1;
  if (sVar7 == sVar4) goto LAB_006dfe71;
  goto LAB_006dff7d;
}

