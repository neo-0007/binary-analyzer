
int FUN_007c4ed0(long *param_1,char *param_2,undefined4 param_3,undefined4 param_4,long param_5,
                undefined4 param_6,long *param_7,undefined8 *param_8,undefined4 *param_9,
                int *param_10,int *param_11)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
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
  cVar4 = *param_2;
  lVar10 = param_5;
  local_48c = param_6;
  if (cVar4 == '\0') {
    bVar14 = false;
LAB_007c5483:
    lVar9 = FUN_007c43c0(param_1,param_2,local_448);
    if (lVar9 != 0) {
      iVar5 = FUN_007c4580(param_1,lVar9,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_10,param_11);
      goto LAB_007c5344;
    }
    if (((*(byte *)(lVar1 + 0x188) & 0xf) == 0) || (bVar14)) {
      uVar12 = 0;
      local_470 = *param_1;
      goto LAB_007c51fa;
    }
    bVar14 = false;
    local_468 = -1;
LAB_007c52d6:
    uVar11 = *(ulong *)(lVar1 + 8);
    if ((uVar11 & 0x80) != 0) {
      uVar12 = 0;
      goto LAB_007c5003;
    }
LAB_007c52e9:
    local_450 = 0;
    local_458 = 0;
    if (!bVar14) goto LAB_007c5166;
    goto LAB_007c5305;
  }
  uVar12 = 0;
  pcVar7 = param_2;
  do {
    pcVar6 = pcVar7;
    pcVar7 = pcVar6 + 1;
    uVar12 = uVar12 + (cVar4 == '.');
    cVar4 = *pcVar7;
  } while (cVar4 != '\0');
  bVar14 = false;
  if (param_2 < pcVar7) {
    bVar14 = *pcVar6 == '.';
  }
  if (uVar12 == 0) goto LAB_007c5483;
  local_470 = lVar1;
  if ((uVar12 < (*(byte *)(lVar1 + 0x188) & 0xf)) && (!bVar14)) {
    bVar14 = false;
    local_468 = -1;
LAB_007c4fee:
    uVar11 = *(ulong *)(lVar1 + 8);
    if ((uVar11 & 0x200) != 0) {
LAB_007c5003:
      local_464 = 0;
      uVar13 = 0;
      bVar3 = 0;
      local_450 = 0;
      local_458 = 0;
      do {
        lVar9 = param_1[1];
        if (lVar9 != 0) {
          if (uVar13 < *(ulong *)(lVar9 + 0x20)) {
            pcVar7 = *(char **)(*(long *)(lVar9 + 0x18) + uVar13 * 8);
joined_r0x007c53e6:
            if (pcVar7 != (char *)0x0) goto LAB_007c5056;
          }
LAB_007c53ec:
          bVar2 = (bool)(bVar3 ^ 1);
          goto LAB_007c513d;
        }
        lVar9 = *param_1;
        pcVar7 = *(char **)(lVar9 + 0x48);
        if (pcVar7 == (char *)0x0) goto LAB_007c53ec;
        if (uVar13 != 0) {
          pcVar7 = *(char **)(lVar9 + 0x50);
          if (pcVar7 != (char *)0x0) {
            if (uVar13 == 1) goto LAB_007c5056;
            pcVar7 = *(char **)(lVar9 + 0x58);
            if (pcVar7 != (char *)0x0) {
              if (uVar13 == 2) goto LAB_007c5056;
              pcVar7 = *(char **)(lVar9 + 0x60);
              if (pcVar7 != (char *)0x0) {
                if (uVar13 == 3) goto LAB_007c5056;
                pcVar7 = *(char **)(lVar9 + 0x68);
                if (pcVar7 != (char *)0x0) {
                  if (uVar13 == 4) goto LAB_007c5056;
                  pcVar7 = *(char **)(lVar9 + 0x70);
                  if (uVar13 == 5) goto joined_r0x007c53e6;
                }
              }
            }
          }
          goto LAB_007c53ec;
        }
LAB_007c5056:
        cVar4 = *pcVar7;
        if (cVar4 == '.') {
          cVar4 = pcVar7[1];
          pcVar7 = pcVar7 + 1;
        }
        local_464 = local_464 + (uint)(cVar4 == '\0');
        iVar5 = FUN_007c4c00(param_1,param_2,pcVar7,param_3,param_4,lVar10,local_48c,param_7,param_8
                             ,param_9,param_10,param_11);
        if (0 < iVar5) goto LAB_007c5344;
        if (((iVar5 == 0) && (param_10 != (int *)0x0)) && (0 < *param_10)) goto LAB_007c5273;
        if ((param_7 != (long *)0x0) && (*param_7 != lVar10)) {
          local_48c = 0x10000;
          lVar10 = *param_7;
        }
        if ((param_8 != (undefined8 *)0x0) && (*param_11 != 0)) {
          FUN_007104f0(*param_8);
          *param_8 = 0;
          *param_9 = 0;
          *param_11 = 0;
        }
        if (*(int *)(in_FS_OFFSET + -0x58) == 0x6f) {
          *(undefined4 *)(lVar1 + 0x1f0) = 2;
          *(undefined4 *)(in_FS_OFFSET + -0x18) = 2;
          goto LAB_007c533c;
        }
        uVar11 = *(ulong *)(lVar1 + 8);
        iVar5 = *(int *)(lVar1 + 0x1f0);
        if (iVar5 == 2) {
          if ((*(byte *)(param_5 + 3) & 0xf) != 2) goto LAB_007c512d;
          local_450 = local_450 + 1;
        }
        else if (iVar5 == 4) {
          local_458 = local_458 + 1;
        }
        else if (iVar5 != 1) goto LAB_007c512d;
        if ((uVar11 & 0x200) == 0) goto LAB_007c512d;
        uVar13 = uVar13 + 1;
        bVar3 = 1;
      } while( true );
    }
    goto LAB_007c52e9;
  }
LAB_007c51fa:
  lVar9 = thunk_FUN_007129d0(param_2);
  if (lVar9 - 1U < 0x400) {
    iVar5 = FUN_007c4580(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11);
    if ((0 < iVar5) || (bVar14)) goto LAB_007c5344;
    if ((iVar5 != 0) || ((param_10 == (int *)0x0 || (*param_10 < 1)))) {
      local_468 = *(int *)(in_FS_OFFSET + -0x18);
      goto LAB_007c528e;
    }
    goto LAB_007c5273;
  }
  *(undefined4 *)(local_470 + 0x1f0) = 3;
  *(undefined4 *)(in_FS_OFFSET + -0x18) = 3;
  local_468 = 3;
  if (!bVar14) {
LAB_007c528e:
    if (param_7 != (long *)0x0) {
      lVar10 = *param_7;
      local_48c = 0x10000;
      if (lVar10 == param_5) {
        local_48c = param_6;
      }
    }
    if ((param_8 != (undefined8 *)0x0) && (*param_11 != 0)) {
      FUN_007104f0(*param_8);
      *param_8 = 0;
      *param_9 = 0;
      *param_11 = 0;
    }
    bVar14 = true;
    if (uVar12 == 0) goto LAB_007c52d6;
    goto LAB_007c4fee;
  }
  goto LAB_007c533c;
LAB_007c512d:
  bVar2 = false;
LAB_007c513d:
  if ((((uVar12 != 0) || (bVar2)) || ((uVar11 & 0x1000000) == 0)) && (!bVar14 && local_464 == 0)) {
LAB_007c5166:
    lVar9 = *param_1;
    lVar8 = thunk_FUN_007129d0(param_2);
    if (lVar8 - 1U < 0x400) {
      iVar5 = FUN_007c4580(param_1,param_2,param_3,param_4,lVar10,local_48c,param_7,param_8,param_9,
                           param_10,param_11);
      if (0 < iVar5) goto LAB_007c5344;
      if (((iVar5 == 0) && (param_10 != (int *)0x0)) && (0 < *param_10)) {
LAB_007c5273:
        local_468 = 0;
        iVar5 = local_468;
        goto LAB_007c5344;
      }
    }
    else {
      *(undefined4 *)(lVar9 + 0x1f0) = 3;
      *(undefined4 *)(in_FS_OFFSET + -0x18) = 3;
    }
  }
LAB_007c5305:
  if ((param_8 != (undefined8 *)0x0) && (*param_11 != 0)) {
    FUN_007104f0(*param_8);
    *param_8 = 0;
    *param_9 = 0;
    *param_11 = 0;
  }
  if (local_468 != -1) {
    *(int *)(lVar1 + 0x1f0) = local_468;
    *(int *)(in_FS_OFFSET + -0x18) = local_468;
    local_468 = -1;
    iVar5 = local_468;
    goto LAB_007c5344;
  }
  iVar5 = local_468;
  if (local_458 != 0) {
    *(undefined4 *)(lVar1 + 0x1f0) = 4;
    *(undefined4 *)(in_FS_OFFSET + -0x18) = 4;
    goto LAB_007c5344;
  }
  if (local_450 != 0) {
    *(undefined4 *)(lVar1 + 0x1f0) = 2;
    *(undefined4 *)(in_FS_OFFSET + -0x18) = 2;
    goto LAB_007c5344;
  }
LAB_007c533c:
  local_468 = -1;
  iVar5 = local_468;
LAB_007c5344:
  local_468 = iVar5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_468;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

