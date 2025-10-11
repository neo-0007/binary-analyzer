
undefined8
FUN_004ad840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ulong param_5,int param_6,int param_7,int param_8,uint param_9)

{
  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  int iVar10;
  long in_FS_OFFSET;
  bool bVar11;
  char *local_88;
  uint local_80;
  uint local_7c;
  undefined8 local_70;
  char local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar10 = 0;
  if (-1 < param_8) {
    iVar10 = param_8;
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
  uVar9 = (ulong)param_6;
  lVar6 = 1;
  pcVar8 = "0123456789ABCDEF";
  if ((param_9 & 0x20) == 0) {
    pcVar8 = "0123456789abcdef";
  }
  do {
    iVar4 = (int)lVar6;
    *(char *)(local_70 + lVar6) = pcVar8[param_5 % uVar9];
    bVar11 = uVar9 <= param_5;
    lVar6 = lVar6 + 1;
    param_5 = param_5 / uVar9;
  } while (bVar11 && iVar4 < 0x1a);
  if (iVar4 == 0x1a) {
    iVar4 = 0x19;
  }
  lVar6 = (long)iVar4;
  local_68[lVar6] = '\0';
  iVar3 = thunk_FUN_007129d0(local_88);
  iVar7 = iVar4;
  if (iVar4 <= iVar10) {
    iVar7 = iVar10;
  }
  iVar3 = ((param_7 - iVar7) - local_80) - iVar3;
  iVar7 = 0;
  if (-1 < iVar10 - iVar4) {
    iVar7 = iVar10 - iVar4;
  }
  iVar10 = 0;
  if (-1 < iVar3) {
    iVar10 = iVar3;
  }
  if ((param_9 & 0x10) == 0) {
    if ((param_9 & 1) == 0) {
      if (0 < iVar3) {
        do {
          iVar4 = FUN_004accc0(param_1,param_2,param_3,param_4,0x20);
          if (iVar4 == 0) goto LAB_004ada27;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar10 = 0;
      }
    }
    else {
      iVar10 = -iVar10;
    }
  }
  else {
    iVar4 = iVar10;
    if (iVar10 <= iVar7) {
      iVar4 = iVar7;
    }
    iVar10 = 0;
    iVar7 = iVar4;
  }
  if ((local_7c == 0) ||
     (iVar4 = FUN_004accc0(param_1,param_2,param_3,param_4,local_7c), iVar4 != 0)) {
    cVar1 = *local_88;
    while (lVar2 = local_70, cVar1 != '\0') {
      iVar4 = FUN_004accc0(param_1,param_2,param_3,param_4);
      if (iVar4 == 0) goto LAB_004ada27;
      pcVar8 = local_88 + 1;
      local_88 = local_88 + 1;
      cVar1 = *pcVar8;
    }
    for (; local_70 = lVar2, iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar4 = FUN_004accc0(param_1,param_2,param_3,param_4,0x30);
      if (iVar4 == 0) goto LAB_004ada27;
      lVar2 = local_70;
    }
    do {
      iVar4 = FUN_004accc0(param_1,param_2,param_3,param_4,(int)*(char *)(lVar2 + lVar6));
      if (iVar4 == 0) goto LAB_004ada27;
      lVar6 = lVar6 + -1;
    } while ((int)lVar6 != 0);
    for (; iVar10 != 0; iVar10 = iVar10 + 1) {
      iVar4 = FUN_004accc0(param_1,param_2,param_3,param_4,0x20);
      if (iVar4 == 0) goto LAB_004ada27;
    }
    uVar5 = 1;
  }
  else {
LAB_004ada27:
    uVar5 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

