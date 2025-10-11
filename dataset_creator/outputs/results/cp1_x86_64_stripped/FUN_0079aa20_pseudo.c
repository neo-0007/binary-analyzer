
undefined4 FUN_0079aa20(uint *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long in_FS_OFFSET;
  code *local_2158;
  uint *local_2150;
  undefined4 local_2138 [8];
  undefined1 *local_2118;
  undefined1 *puStack_2110;
  undefined1 *local_2108;
  uint local_20c4;
  undefined8 local_20b0;
  undefined4 local_2078;
  undefined *local_2060;
  uint *local_2058;
  undefined1 local_2038 [8192];
  undefined1 local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0x30] == 0) {
    param_1[0x30] = 0xffffffff;
  }
  else if (param_1[0x30] != 0xffffffff) {
    uVar2 = 0xffffffff;
    goto LAB_0079ab94;
  }
  local_2108 = local_38;
  local_20c4 = param_1[0x1d];
  local_2078 = 0xffffffff;
  local_2138[0] = 0xfbad8004;
  local_20b0 = 0;
  local_2060 = &DAT_0093f760;
  local_2118 = local_2038;
  puStack_2110 = local_2038;
  local_2058 = param_1;
  uVar2 = FUN_007986e0(local_2138);
  local_2158 = FUN_00795710;
  local_2150 = param_1;
  FUN_00709520(&local_2158);
  if ((*param_1 & 0x8000) == 0) {
    lVar1 = *(long *)(in_FS_OFFSET + 0x10);
    piVar5 = *(int **)(param_1 + 0x22);
    if (*(long *)(piVar5 + 2) != lVar1) {
      LOCK();
      iVar3 = *piVar5;
      if (iVar3 == 0) {
        *piVar5 = 1;
      }
      UNLOCK();
      if (iVar3 != 0) {
        FUN_00709590();
      }
      piVar5 = *(int **)(param_1 + 0x22);
      *(long *)(piVar5 + 2) = lVar1;
    }
    piVar5[1] = piVar5[1] + 1;
    iVar3 = (int)puStack_2110 - (int)local_2118;
    if (0 < iVar3) goto LAB_0079ab21;
LAB_0079ab5f:
    if ((*param_1 & 0x8000) == 0) {
      piVar5 = *(int **)(param_1 + 0x22);
      iVar3 = piVar5[1];
      piVar5[1] = iVar3 + -1;
      if (iVar3 + -1 == 0) {
        piVar5[2] = 0;
        piVar5[3] = 0;
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = 0;
        UNLOCK();
        if (1 < iVar3) {
          FUN_00709660();
        }
      }
    }
  }
  else {
    iVar3 = (int)puStack_2110 - (int)local_2118;
    if (0 < iVar3) {
LAB_0079ab21:
      lVar1 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar1 - 0x93f160U) {
        FUN_00703130();
      }
      iVar4 = (**(code **)(lVar1 + 0x38))(param_1,local_2118,(long)iVar3);
      if (iVar3 != iVar4) {
        uVar2 = 0xffffffff;
      }
      goto LAB_0079ab5f;
    }
  }
  FUN_00709560(&local_2158);
LAB_0079ab94:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

