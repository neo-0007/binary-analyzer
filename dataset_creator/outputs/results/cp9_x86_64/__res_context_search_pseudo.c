
int __res_context_search
              (long *param_1,char *param_2,undefined4 param_3,undefined4 param_4,long param_5,
              undefined4 param_6,long *param_7,undefined8 *param_8,undefined4 *param_9,int *param_10
              ,int *param_11)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  size_t sVar7;
  long lVar8;
  char cVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  undefined4 local_48c;
  long local_470;
  int local_468;
  int local_464;
  int local_458;
  int local_450;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *param_1;
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
  *(undefined4 *)(lVar1 + 0x1f0) = 1;
  *(undefined4 *)(in_FS_OFFSET + -0x18) = 1;
  cVar9 = *param_2;
  lVar10 = param_5;
  local_48c = param_6;
  if (cVar9 == '\0') {
    bVar14 = false;
LAB_007bbb43:
    lVar8 = __res_context_hostalias(param_1,param_2,local_448);
    if (lVar8 != 0) {
      iVar4 = __res_context_query(param_1,lVar8,param_3,param_4,param_5,param_6,param_7,param_8,
                                  param_9,param_10,param_11);
      goto LAB_007bba04;
    }
    if (((*(byte *)(lVar1 + 0x188) & 0xf) == 0) || (bVar14)) {
      uVar12 = 0;
      local_470 = *param_1;
      goto LAB_007bb8ba;
    }
    bVar14 = false;
    local_468 = -1;
LAB_007bb996:
    uVar11 = *(ulong *)(lVar1 + 8);
    if ((uVar11 & 0x80) != 0) {
      uVar12 = 0;
      goto LAB_007bb6c3;
    }
LAB_007bb9a9:
    local_450 = 0;
    local_458 = 0;
    if (!bVar14) goto LAB_007bb826;
    goto LAB_007bb9c5;
  }
  uVar12 = 0;
  pcVar6 = param_2;
  do {
    pcVar5 = pcVar6;
    pcVar6 = pcVar5 + 1;
    uVar12 = uVar12 + (cVar9 == '.');
    cVar9 = *pcVar6;
  } while (cVar9 != '\0');
  bVar14 = false;
  if (param_2 < pcVar6) {
    bVar14 = *pcVar5 == '.';
  }
  if (uVar12 == 0) goto LAB_007bbb43;
  local_470 = lVar1;
  if ((uVar12 < (*(byte *)(lVar1 + 0x188) & 0xf)) && (!bVar14)) {
    bVar14 = false;
    local_468 = -1;
LAB_007bb6ae:
    uVar11 = *(ulong *)(lVar1 + 8);
    if ((uVar11 & 0x200) != 0) {
LAB_007bb6c3:
      local_464 = 0;
      uVar13 = 0;
      bVar3 = 0;
      local_450 = 0;
      local_458 = 0;
      do {
        lVar8 = param_1[1];
        if (lVar8 != 0) {
          if (uVar13 < *(ulong *)(lVar8 + 0x20)) {
            pcVar6 = *(char **)(*(long *)(lVar8 + 0x18) + uVar13 * 8);
joined_r0x007bbaa6:
            if (pcVar6 != (char *)0x0) goto LAB_007bb716;
          }
LAB_007bbaac:
          bVar2 = (bool)(bVar3 ^ 1);
          goto LAB_007bb7fd;
        }
        lVar8 = *param_1;
        pcVar6 = *(char **)(lVar8 + 0x48);
        if (pcVar6 == (char *)0x0) goto LAB_007bbaac;
        if (uVar13 != 0) {
          pcVar6 = *(char **)(lVar8 + 0x50);
          if (pcVar6 != (char *)0x0) {
            if (uVar13 == 1) goto LAB_007bb716;
            pcVar6 = *(char **)(lVar8 + 0x58);
            if (pcVar6 != (char *)0x0) {
              if (uVar13 == 2) goto LAB_007bb716;
              pcVar6 = *(char **)(lVar8 + 0x60);
              if (pcVar6 != (char *)0x0) {
                if (uVar13 == 3) goto LAB_007bb716;
                pcVar6 = *(char **)(lVar8 + 0x68);
                if (pcVar6 != (char *)0x0) {
                  if (uVar13 == 4) goto LAB_007bb716;
                  pcVar6 = *(char **)(lVar8 + 0x70);
                  if (uVar13 == 5) goto joined_r0x007bbaa6;
                }
              }
            }
          }
          goto LAB_007bbaac;
        }
LAB_007bb716:
        cVar9 = *pcVar6;
        if (cVar9 == '.') {
          cVar9 = pcVar6[1];
          pcVar6 = pcVar6 + 1;
        }
        local_464 = local_464 + (uint)(cVar9 == '\0');
        iVar4 = __res_context_querydomain
                          (param_1,param_2,pcVar6,param_3,param_4,lVar10,local_48c,param_7,param_8,
                           param_9,param_10,param_11);
        if (0 < iVar4) goto LAB_007bba04;
        if (((iVar4 == 0) && (param_10 != (int *)0x0)) && (0 < *param_10)) goto LAB_007bb933;
        if ((param_7 != (long *)0x0) && (*param_7 != lVar10)) {
          local_48c = 0x10000;
          lVar10 = *param_7;
        }
        if ((param_8 != (undefined8 *)0x0) && (*param_11 != 0)) {
          free((void *)*param_8);
          *param_8 = 0;
          *param_9 = 0;
          *param_11 = 0;
        }
        if (*(int *)(in_FS_OFFSET + -0x58) == 0x6f) {
          *(undefined4 *)(lVar1 + 0x1f0) = 2;
          *(undefined4 *)(in_FS_OFFSET + -0x18) = 2;
          goto LAB_007bb9fc;
        }
        uVar11 = *(ulong *)(lVar1 + 8);
        iVar4 = *(int *)(lVar1 + 0x1f0);
        if (iVar4 == 2) {
          if ((*(byte *)(param_5 + 3) & 0xf) != 2) goto LAB_007bb7ed;
          local_450 = local_450 + 1;
        }
        else if (iVar4 == 4) {
          local_458 = local_458 + 1;
        }
        else if (iVar4 != 1) goto LAB_007bb7ed;
        if ((uVar11 & 0x200) == 0) goto LAB_007bb7ed;
        uVar13 = uVar13 + 1;
        bVar3 = 1;
      } while( true );
    }
    goto LAB_007bb9a9;
  }
LAB_007bb8ba:
  sVar7 = strlen(param_2);
  if (sVar7 - 1 < 0x400) {
    iVar4 = __res_context_query(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_9,param_10,param_11);
    if ((0 < iVar4) || (bVar14)) goto LAB_007bba04;
    if ((iVar4 != 0) || ((param_10 == (int *)0x0 || (*param_10 < 1)))) {
      local_468 = *(int *)(in_FS_OFFSET + -0x18);
      goto LAB_007bb94e;
    }
    goto LAB_007bb933;
  }
  *(undefined4 *)(local_470 + 0x1f0) = 3;
  *(undefined4 *)(in_FS_OFFSET + -0x18) = 3;
  local_468 = 3;
  if (!bVar14) {
LAB_007bb94e:
    if (param_7 != (long *)0x0) {
      lVar10 = *param_7;
      local_48c = 0x10000;
      if (lVar10 == param_5) {
        local_48c = param_6;
      }
    }
    if ((param_8 != (undefined8 *)0x0) && (*param_11 != 0)) {
      free((void *)*param_8);
      *param_8 = 0;
      *param_9 = 0;
      *param_11 = 0;
    }
    bVar14 = true;
    if (uVar12 == 0) goto LAB_007bb996;
    goto LAB_007bb6ae;
  }
  goto LAB_007bb9fc;
LAB_007bb7ed:
  bVar2 = false;
LAB_007bb7fd:
  if ((((uVar12 != 0) || (bVar2)) || ((uVar11 & 0x1000000) == 0)) && (!bVar14 && local_464 == 0)) {
LAB_007bb826:
    lVar8 = *param_1;
    sVar7 = strlen(param_2);
    if (sVar7 - 1 < 0x400) {
      iVar4 = __res_context_query(param_1,param_2,param_3,param_4,lVar10,local_48c,param_7,param_8,
                                  param_9,param_10,param_11);
      if (0 < iVar4) goto LAB_007bba04;
      if (((iVar4 == 0) && (param_10 != (int *)0x0)) && (0 < *param_10)) {
LAB_007bb933:
        local_468 = 0;
        iVar4 = local_468;
        goto LAB_007bba04;
      }
    }
    else {
      *(undefined4 *)(lVar8 + 0x1f0) = 3;
      *(undefined4 *)(in_FS_OFFSET + -0x18) = 3;
    }
  }
LAB_007bb9c5:
  if ((param_8 != (undefined8 *)0x0) && (*param_11 != 0)) {
    free((void *)*param_8);
    *param_8 = 0;
    *param_9 = 0;
    *param_11 = 0;
  }
  if (local_468 != -1) {
    *(int *)(lVar1 + 0x1f0) = local_468;
    *(int *)(in_FS_OFFSET + -0x18) = local_468;
    local_468 = -1;
    iVar4 = local_468;
    goto LAB_007bba04;
  }
  iVar4 = local_468;
  if (local_458 != 0) {
    *(undefined4 *)(lVar1 + 0x1f0) = 4;
    *(undefined4 *)(in_FS_OFFSET + -0x18) = 4;
    goto LAB_007bba04;
  }
  if (local_450 != 0) {
    *(undefined4 *)(lVar1 + 0x1f0) = 2;
    *(undefined4 *)(in_FS_OFFSET + -0x18) = 2;
    goto LAB_007bba04;
  }
LAB_007bb9fc:
  local_468 = -1;
  iVar4 = local_468;
LAB_007bba04:
  local_468 = iVar4;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_468;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

