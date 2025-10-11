
ulong ____strtoul_l_internal
                (byte *param_1,undefined8 *param_2,uint param_3,int param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  size_t sVar6;
  byte *pbVar7;
  uint uVar8;
  size_t sVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *__s;
  char cVar13;
  byte bVar14;
  long in_FS_OFFSET;
  byte local_46;
  
  pbVar7 = (byte *)0x0;
  __s = (char *)0x0;
  if (param_4 != 0) {
    pbVar7 = *(byte **)(*(long *)(param_5 + 8) + 0x50);
    if ((byte)(*pbVar7 - 1) < 0x7e) {
      __s = *(char **)(*(long *)(param_5 + 8) + 0x48);
      if (*__s == '\0') {
        pbVar7 = (byte *)0x0;
        __s = (char *)0x0;
      }
    }
    else {
      pbVar7 = (byte *)0x0;
      __s = (char *)0x0;
    }
  }
  if ((param_3 == 1) || (0x24 < param_3)) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    return 0;
  }
  uVar4 = (ulong)(char)*param_1;
  bVar14 = *(byte *)(*(long *)(param_5 + 0x68) + 1 + uVar4 * 2);
  pbVar11 = param_1;
  while ((bVar14 & 0x20) != 0) {
    uVar4 = (ulong)(char)pbVar11[1];
    pbVar11 = pbVar11 + 1;
    bVar14 = *(byte *)(*(long *)(param_5 + 0x68) + 1 + uVar4 * 2);
  }
  cVar13 = (char)uVar4;
  if (cVar13 == '\0') {
    if (param_2 == (undefined8 *)0x0) {
      return 0;
    }
    goto LAB_006e036f;
  }
  if (cVar13 == '-') {
    uVar4 = (ulong)pbVar11[1];
    bVar2 = true;
    pbVar11 = pbVar11 + 1;
  }
  else {
    bVar2 = false;
    if (cVar13 == '+') {
      uVar4 = (ulong)pbVar11[1];
      pbVar11 = pbVar11 + 1;
    }
  }
  bVar14 = (byte)uVar4;
  if (bVar14 == 0x30) {
    pbVar12 = pbVar11;
    if ((param_3 & 0xffffffef) == 0) {
      if (*(int *)(_nl_C_locobj._120_8_ + (long)(char)pbVar11[1] * 4) == 0x58) {
        uVar4 = (ulong)pbVar11[2];
        iVar3 = 0xe;
        pbVar11 = pbVar11 + 2;
        sVar6 = 0;
        param_3 = 0x10;
        pbVar7 = (byte *)0x0;
        goto LAB_006e010f;
      }
      if (param_3 != 0) goto LAB_006e02ac;
      local_46 = __strtol_ul_rem_tab[6];
      pbVar7 = (byte *)0x0;
      sVar6 = 0;
      param_3 = 8;
      uVar5 = 0x30;
      uVar10 = __strtol_ul_max_tab._48_8_;
    }
    else {
LAB_006e02ac:
      if (param_3 == 10) {
        if (pbVar7 != (byte *)0x0) goto LAB_006e0420;
        local_46 = __strtol_ul_rem_tab[8];
        sVar6 = 0;
        uVar5 = 0x30;
        uVar10 = __strtol_ul_max_tab._64_8_;
      }
      else {
        pbVar7 = (byte *)0x0;
        sVar6 = 0;
        local_46 = __strtol_ul_rem_tab[(int)(param_3 - 2)];
        uVar5 = 0x30;
        uVar10 = *(ulong *)(__strtol_ul_max_tab + (long)(int)(param_3 - 2) * 8);
      }
    }
LAB_006e0147:
    uVar4 = 0;
    bVar1 = false;
    pbVar11 = pbVar12;
LAB_006e018e:
    uVar8 = (int)uVar5 - 0x30;
    if ((byte)uVar8 < 10) {
LAB_006e01ae:
      if ((int)param_3 <= (int)(uVar8 & 0xff)) goto LAB_006e01d0;
      if ((uVar4 <= uVar10) && ((uVar10 != uVar4 || ((byte)uVar8 <= local_46)))) {
        uVar4 = uVar4 * (long)(int)param_3 + ((ulong)uVar8 & 0xff);
        goto LAB_006e017d;
      }
      bVar1 = true;
      bVar14 = pbVar11[1];
joined_r0x006e0187:
      pbVar11 = pbVar11 + 1;
      if ((bVar14 == 0) || (uVar5 = (ulong)bVar14, pbVar11 == pbVar7)) goto LAB_006e01d0;
      goto LAB_006e018e;
    }
    if (sVar6 != 0) {
      sVar9 = 0;
      do {
        if (__s[sVar9] != pbVar11[sVar9]) {
          if (sVar6 != sVar9) goto LAB_006e019f;
          break;
        }
        sVar9 = sVar9 + 1;
      } while (sVar9 != sVar6);
      pbVar11 = pbVar11 + (sVar6 - 1);
LAB_006e017d:
      bVar14 = pbVar11[1];
      goto joined_r0x006e0187;
    }
LAB_006e019f:
    if ((*(byte *)(_nl_C_locobj._104_8_ + 1 + uVar5 * 2) & 4) != 0) {
      uVar8 = *(int *)(_nl_C_locobj._120_8_ + uVar5 * 4) - 0x37;
      goto LAB_006e01ae;
    }
LAB_006e01d0:
    if (pbVar12 != pbVar11) {
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = pbVar11;
      }
      if (bVar1) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
        return 0xffffffffffffffff;
      }
      if (bVar2) {
        return -uVar4;
      }
      return uVar4;
    }
  }
  else if ((param_3 == 0) || (param_3 == 10)) {
    if (pbVar7 == (byte *)0x0) {
      iVar3 = 8;
      param_3 = 10;
      sVar6 = 0;
      goto LAB_006e010f;
    }
LAB_006e0420:
    sVar6 = strlen(__s);
    if (sVar6 != 0) {
      sVar9 = 0;
LAB_006e044d:
      if (__s[sVar9] == pbVar11[sVar9]) goto LAB_006e0440;
      uVar4 = uVar4 & 0xff;
      pbVar12 = pbVar11;
      while (bVar14 != 0) {
        if (9 < (byte)((char)uVar4 - 0x30U)) {
          uVar10 = 0;
          do {
            if (__s[uVar10] != pbVar12[uVar10]) {
              if ((uVar10 < sVar6) &&
                 (((*(byte *)(_nl_C_locobj._104_8_ + 1 + uVar4 * 2) & 4) == 0 ||
                  (0x40 < *(int *)(_nl_C_locobj._120_8_ + uVar4 * 4))))) goto LAB_006e04b7;
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != sVar6);
        }
        bVar14 = pbVar12[1];
        uVar4 = (ulong)bVar14;
        pbVar12 = pbVar12 + 1;
      }
LAB_006e04b7:
      pbVar7 = (byte *)__correctly_grouped_prefixmb(pbVar11,pbVar12,__s,pbVar7);
      uVar4 = (ulong)*pbVar11;
      param_3 = 10;
      iVar3 = 8;
      goto LAB_006e010f;
    }
  }
  else {
    iVar3 = param_3 - 2;
    sVar6 = 0;
    pbVar7 = (byte *)0x0;
LAB_006e010f:
    uVar10 = *(ulong *)(__strtol_ul_max_tab + (long)iVar3 * 8);
    local_46 = __strtol_ul_rem_tab[iVar3];
    uVar5 = uVar4 & 0xff;
    if (((char)uVar4 != '\0') && (pbVar12 = pbVar11, pbVar7 != pbVar11)) goto LAB_006e0147;
  }
LAB_006e0341:
  if (param_2 != (undefined8 *)0x0) {
    if ((((long)pbVar11 - (long)param_1 < 2) ||
        (*(int *)(_nl_C_locobj._120_8_ + (long)(char)pbVar11[-1] * 4) != 0x58)) ||
       (pbVar11[-2] != 0x30)) {
LAB_006e036f:
      *param_2 = param_1;
      return 0;
    }
    *param_2 = pbVar11 + -1;
  }
  return 0;
LAB_006e0440:
  sVar9 = sVar9 + 1;
  if (sVar6 == sVar9) goto LAB_006e0341;
  goto LAB_006e044d;
}

