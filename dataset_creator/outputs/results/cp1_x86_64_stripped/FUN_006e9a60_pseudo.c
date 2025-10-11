
ulong FUN_006e9a60(byte *param_1,undefined8 *param_2,uint param_3,int param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  char cVar14;
  byte bVar15;
  long in_FS_OFFSET;
  byte local_46;
  
  pbVar7 = (byte *)0x0;
  pcVar13 = (char *)0x0;
  if (param_4 != 0) {
    pbVar7 = *(byte **)(*(long *)(param_5 + 8) + 0x50);
    if ((byte)(*pbVar7 - 1) < 0x7e) {
      pcVar13 = *(char **)(*(long *)(param_5 + 8) + 0x48);
      if (*pcVar13 == '\0') {
        pbVar7 = (byte *)0x0;
        pcVar13 = (char *)0x0;
      }
    }
    else {
      pbVar7 = (byte *)0x0;
      pcVar13 = (char *)0x0;
    }
  }
  if ((param_3 == 1) || (0x24 < param_3)) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    return 0;
  }
  uVar4 = (ulong)(char)*param_1;
  bVar15 = *(byte *)(*(long *)(param_5 + 0x68) + 1 + uVar4 * 2);
  pbVar11 = param_1;
  while ((bVar15 & 0x20) != 0) {
    uVar4 = (ulong)(char)pbVar11[1];
    pbVar11 = pbVar11 + 1;
    bVar15 = *(byte *)(*(long *)(param_5 + 0x68) + 1 + uVar4 * 2);
  }
  cVar14 = (char)uVar4;
  if (cVar14 == '\0') {
    if (param_2 == (undefined8 *)0x0) {
      return 0;
    }
    goto LAB_006e9d7f;
  }
  if (cVar14 == '-') {
    uVar4 = (ulong)pbVar11[1];
    bVar2 = true;
    pbVar11 = pbVar11 + 1;
  }
  else {
    bVar2 = false;
    if (cVar14 == '+') {
      uVar4 = (ulong)pbVar11[1];
      pbVar11 = pbVar11 + 1;
    }
  }
  bVar15 = (byte)uVar4;
  if (bVar15 == 0x30) {
    pbVar12 = pbVar11;
    if ((param_3 & 0xffffffef) == 0) {
      if (*(int *)(PTR_DAT_00939cb8 + (long)(char)pbVar11[1] * 4) == 0x58) {
        uVar4 = (ulong)pbVar11[2];
        iVar3 = 0xe;
        pbVar11 = pbVar11 + 2;
        uVar6 = 0;
        param_3 = 0x10;
        pbVar7 = (byte *)0x0;
        goto LAB_006e9b1f;
      }
      if (param_3 != 0) goto LAB_006e9cbc;
      local_46 = DAT_00824dc6;
      pbVar7 = (byte *)0x0;
      uVar6 = 0;
      param_3 = 8;
      uVar5 = 0x30;
      uVar10 = DAT_00824e30;
    }
    else {
LAB_006e9cbc:
      if (param_3 == 10) {
        if (pbVar7 != (byte *)0x0) goto LAB_006e9e30;
        local_46 = DAT_00824dc8;
        uVar6 = 0;
        uVar5 = 0x30;
        uVar10 = DAT_00824e40;
      }
      else {
        pbVar7 = (byte *)0x0;
        uVar6 = 0;
        local_46 = (&DAT_00824dc0)[(int)(param_3 - 2)];
        uVar5 = 0x30;
        uVar10 = *(ulong *)(&DAT_00824e00 + (long)(int)(param_3 - 2) * 8);
      }
    }
LAB_006e9b57:
    uVar4 = 0;
    bVar1 = false;
    pbVar11 = pbVar12;
LAB_006e9b9e:
    uVar8 = (int)uVar5 - 0x30;
    if ((byte)uVar8 < 10) {
LAB_006e9bbe:
      if ((int)param_3 <= (int)(uVar8 & 0xff)) goto LAB_006e9be0;
      if ((uVar4 <= uVar10) && ((uVar10 != uVar4 || ((byte)uVar8 <= local_46)))) {
        uVar4 = uVar4 * (long)(int)param_3 + ((ulong)uVar8 & 0xff);
        goto LAB_006e9b8d;
      }
      bVar1 = true;
      bVar15 = pbVar11[1];
joined_r0x006e9b97:
      pbVar11 = pbVar11 + 1;
      if ((bVar15 == 0) || (uVar5 = (ulong)bVar15, pbVar11 == pbVar7)) goto LAB_006e9be0;
      goto LAB_006e9b9e;
    }
    if (uVar6 != 0) {
      uVar9 = 0;
      do {
        if (pcVar13[uVar9] != pbVar11[uVar9]) {
          if (uVar6 != uVar9) goto LAB_006e9baf;
          break;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar6);
      pbVar11 = pbVar11 + (uVar6 - 1);
LAB_006e9b8d:
      bVar15 = pbVar11[1];
      goto joined_r0x006e9b97;
    }
LAB_006e9baf:
    if ((PTR_DAT_00939ca8[uVar5 * 2 + 1] & 4) != 0) {
      uVar8 = *(int *)(PTR_DAT_00939cb8 + uVar5 * 4) - 0x37;
      goto LAB_006e9bbe;
    }
LAB_006e9be0:
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
      uVar6 = 0;
      goto LAB_006e9b1f;
    }
LAB_006e9e30:
    uVar6 = thunk_FUN_007129d0(pcVar13);
    if (uVar6 != 0) {
      uVar10 = 0;
LAB_006e9e5d:
      if (pcVar13[uVar10] == pbVar11[uVar10]) goto LAB_006e9e50;
      uVar4 = uVar4 & 0xff;
      pbVar12 = pbVar11;
      while (bVar15 != 0) {
        if (9 < (byte)((char)uVar4 - 0x30U)) {
          uVar10 = 0;
          do {
            if (pcVar13[uVar10] != pbVar12[uVar10]) {
              if ((uVar10 < uVar6) &&
                 (((PTR_DAT_00939ca8[uVar4 * 2 + 1] & 4) == 0 ||
                  (0x40 < *(int *)(PTR_DAT_00939cb8 + uVar4 * 4))))) goto LAB_006e9ec7;
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar6);
        }
        bVar15 = pbVar12[1];
        uVar4 = (ulong)bVar15;
        pbVar12 = pbVar12 + 1;
      }
LAB_006e9ec7:
      pbVar7 = (byte *)FUN_006f4720(pbVar11,pbVar12,pcVar13,pbVar7);
      uVar4 = (ulong)*pbVar11;
      param_3 = 10;
      iVar3 = 8;
      goto LAB_006e9b1f;
    }
  }
  else {
    iVar3 = param_3 - 2;
    uVar6 = 0;
    pbVar7 = (byte *)0x0;
LAB_006e9b1f:
    uVar10 = *(ulong *)(&DAT_00824e00 + (long)iVar3 * 8);
    local_46 = (&DAT_00824dc0)[iVar3];
    uVar5 = uVar4 & 0xff;
    if (((char)uVar4 != '\0') && (pbVar12 = pbVar11, pbVar7 != pbVar11)) goto LAB_006e9b57;
  }
LAB_006e9d51:
  if (param_2 != (undefined8 *)0x0) {
    if ((((long)pbVar11 - (long)param_1 < 2) ||
        (*(int *)(PTR_DAT_00939cb8 + (long)(char)pbVar11[-1] * 4) != 0x58)) || (pbVar11[-2] != 0x30)
       ) {
LAB_006e9d7f:
      *param_2 = param_1;
      return 0;
    }
    *param_2 = pbVar11 + -1;
  }
  return 0;
LAB_006e9e50:
  uVar10 = uVar10 + 1;
  if (uVar6 == uVar10) goto LAB_006e9d51;
  goto LAB_006e9e5d;
}

