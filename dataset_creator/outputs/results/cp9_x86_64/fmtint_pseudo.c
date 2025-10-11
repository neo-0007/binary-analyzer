
undefined8
fmtint(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
      int param_6,int param_7,int param_8,uint param_9)

{
  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  char *pcVar9;
  ulong uVar10;
  int iVar11;
  long in_FS_OFFSET;
  bool bVar12;
  char *local_88;
  uint local_80;
  uint local_7c;
  undefined8 local_70;
  char local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar11 = 0;
  if (-1 < param_8) {
    iVar11 = param_8;
  }
  if ((param_9 & 0x40) == 0) {
    if ((long)param_5 < 0) {
      local_80 = 1;
      param_5 = -param_5;
      local_7c = 0x2d;
    }
    else if ((param_9 & 2) == 0) {
      local_7c = param_9 * 8 & 0x20;
      local_80 = (uint)(local_7c != 0);
    }
    else {
      local_80 = 1;
      local_7c = 0x2b;
    }
  }
  else {
    local_80 = 0;
    local_7c = 0;
  }
  local_88 = "";
  if ((((param_9 & 8) != 0) && (local_88 = "0", param_6 != 8)) && (local_88 = "", param_6 == 0x10))
  {
    local_88 = "0x";
  }
  local_70 = (long)&local_70 + 7;
  uVar10 = (ulong)param_6;
  lVar7 = 1;
  pcVar9 = "0123456789ABCDEF";
  if ((param_9 & 0x20) == 0) {
    pcVar9 = "0123456789abcdef";
  }
  do {
    iVar4 = (int)lVar7;
    *(char *)(local_70 + lVar7) = pcVar9[param_5 % uVar10];
    bVar12 = uVar10 <= param_5;
    lVar7 = lVar7 + 1;
    param_5 = param_5 / uVar10;
  } while (bVar12 && iVar4 < 0x1a);
  if (iVar4 == 0x1a) {
    iVar4 = 0x19;
  }
  lVar7 = (long)iVar4;
  local_68[lVar7] = '\0';
  sVar5 = strlen(local_88);
  iVar8 = iVar4;
  if (iVar4 <= iVar11) {
    iVar8 = iVar11;
  }
  iVar3 = ((param_7 - iVar8) - local_80) - (int)sVar5;
  iVar8 = 0;
  if (-1 < iVar11 - iVar4) {
    iVar8 = iVar11 - iVar4;
  }
  iVar11 = 0;
  if (-1 < iVar3) {
    iVar11 = iVar3;
  }
  if ((param_9 & 0x10) == 0) {
    if ((param_9 & 1) == 0) {
      if (0 < iVar3) {
        do {
          iVar4 = doapr_outch(param_1,param_2,param_3,param_4,0x20);
          if (iVar4 == 0) goto LAB_004aa9a7;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        iVar11 = 0;
      }
    }
    else {
      iVar11 = -iVar11;
    }
  }
  else {
    iVar4 = iVar11;
    if (iVar11 <= iVar8) {
      iVar4 = iVar8;
    }
    iVar11 = 0;
    iVar8 = iVar4;
  }
  if ((local_7c == 0) || (iVar4 = doapr_outch(param_1,param_2,param_3,param_4,local_7c), iVar4 != 0)
     ) {
    cVar1 = *local_88;
    while (lVar2 = local_70, cVar1 != '\0') {
      iVar4 = doapr_outch(param_1,param_2,param_3,param_4);
      if (iVar4 == 0) goto LAB_004aa9a7;
      pcVar9 = local_88 + 1;
      local_88 = local_88 + 1;
      cVar1 = *pcVar9;
    }
    for (; local_70 = lVar2, iVar8 != 0; iVar8 = iVar8 + -1) {
      iVar4 = doapr_outch(param_1,param_2,param_3,param_4,0x30);
      if (iVar4 == 0) goto LAB_004aa9a7;
      lVar2 = local_70;
    }
    do {
      iVar4 = doapr_outch(param_1,param_2,param_3,param_4,(int)*(char *)(lVar2 + lVar7));
      if (iVar4 == 0) goto LAB_004aa9a7;
      lVar7 = lVar7 + -1;
    } while ((int)lVar7 != 0);
    for (; iVar11 != 0; iVar11 = iVar11 + 1) {
      iVar4 = doapr_outch(param_1,param_2,param_3,param_4,0x20);
      if (iVar4 == 0) goto LAB_004aa9a7;
    }
    uVar6 = 1;
  }
  else {
LAB_004aa9a7:
    uVar6 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

