
long FUN_00712c60(long param_1,ulong param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
  ulong local_870;
  ulong local_848 [257];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 < 2) {
    local_870 = 1;
    uVar3 = 0;
  }
  else {
    local_870 = 1;
    uVar10 = 1;
    uVar3 = 1;
    uVar7 = 0xffffffffffffffff;
    uVar9 = 0;
    do {
      while (param_3[uVar3] < param_3[uVar7 + uVar10]) {
        uVar10 = 1;
        local_870 = uVar3 - uVar7;
        uVar9 = uVar3;
LAB_00712cc6:
        uVar3 = uVar9 + uVar10;
        if (param_4 <= uVar3) goto LAB_00712cfd;
      }
      if (param_3[uVar3] == param_3[uVar7 + uVar10]) {
        if (uVar10 == local_870) {
          uVar9 = uVar9 + uVar10;
          uVar10 = 1;
        }
        else {
          uVar10 = uVar10 + 1;
        }
        goto LAB_00712cc6;
      }
      uVar10 = 1;
      local_870 = 1;
      uVar3 = uVar9 + 2;
      uVar7 = uVar9;
      uVar9 = uVar9 + 1;
    } while (uVar3 < param_4);
LAB_00712cfd:
    uVar13 = 1;
    uVar11 = 1;
    uVar3 = 1;
    uVar9 = 0;
    uVar10 = 0xffffffffffffffff;
    do {
      while (uVar12 = uVar9, param_3[uVar10 + uVar11] < param_3[uVar3]) {
        uVar11 = 1;
        uVar13 = uVar3 - uVar10;
        uVar12 = uVar3;
LAB_00712d2e:
        uVar3 = uVar11 + uVar12;
        uVar9 = uVar12;
        if (param_4 <= uVar3) goto LAB_00712d67;
      }
      if (param_3[uVar10 + uVar11] == param_3[uVar3]) {
        if (uVar13 == uVar11) {
          uVar11 = 1;
          uVar12 = uVar12 + uVar13;
        }
        else {
          uVar11 = uVar11 + 1;
        }
        goto LAB_00712d2e;
      }
      uVar11 = 1;
      uVar13 = 1;
      uVar3 = uVar12 + 2;
      uVar9 = uVar12 + 1;
      uVar10 = uVar12;
    } while (uVar3 < param_4);
LAB_00712d67:
    uVar3 = uVar7 + 1;
    if (uVar7 + 1 <= uVar10 + 1) {
      uVar3 = uVar10 + 1;
      local_870 = uVar13;
    }
  }
  puVar4 = local_848;
  do {
    *puVar4 = param_4;
    puVar4[1] = param_4;
    puVar4 = puVar4 + 2;
  } while (puVar4 != local_848 + 0x100);
  if (param_4 != 0) {
    pbVar5 = param_3;
    do {
      bVar1 = *pbVar5;
      lVar6 = (param_4 - 1) - (long)pbVar5;
      pbVar5 = pbVar5 + 1;
      local_848[bVar1] = (ulong)(param_3 + lVar6);
    } while (param_3 + param_4 != pbVar5);
  }
  iVar2 = thunk_FUN_00713570(param_3,param_3 + local_870,uVar3);
  if (iVar2 != 0) {
    uVar7 = param_4 - uVar3;
    if (param_4 - uVar3 < uVar3) {
      uVar7 = uVar3;
    }
    lVar14 = 0;
    lVar6 = uVar3 - 1;
LAB_00712ff3:
    uVar9 = lVar14 + param_4;
    if (param_2 < uVar9) {
      lVar8 = thunk_FUN_00712a40(param_1 + param_2,param_4 + 0x200);
      param_2 = param_2 + lVar8;
      if (param_2 < uVar9) goto LAB_00712f69;
    }
    uVar9 = local_848[*(byte *)(param_1 + -1 + uVar9)];
    if (uVar9 == 0) {
      for (uVar9 = uVar3; uVar9 < param_4 - 1; uVar9 = uVar9 + 1) {
        if (param_3[uVar9] != *(byte *)(param_1 + lVar14 + uVar9)) {
          lVar14 = lVar14 + (1 - uVar3);
          goto LAB_00712ff0;
        }
      }
      if (lVar6 == -1) goto LAB_007130c6;
      lVar8 = lVar6;
      while (param_3[lVar8] == *(byte *)(lVar8 + 1 + ((lVar14 + lVar6) - uVar3) + param_1)) {
        bVar15 = lVar8 == 0;
        lVar8 = lVar8 + -1;
        if (bVar15) goto LAB_007130c6;
      }
      lVar14 = lVar14 + uVar7 + 1;
    }
    else {
LAB_00712ff0:
      lVar14 = lVar14 + uVar9;
    }
    goto LAB_00712ff3;
  }
  lVar14 = 0;
  uVar7 = 0;
  do {
    while( true ) {
      uVar9 = lVar14 + param_4;
      if (param_2 < uVar9) {
        lVar6 = thunk_FUN_00712a40(param_1 + param_2,param_4 + 0x200);
        param_2 = param_2 + lVar6;
        if (param_2 < uVar9) goto LAB_00712f69;
      }
      uVar9 = local_848[*(byte *)(param_1 + -1 + uVar9)];
      if (uVar9 == 0) break;
      if ((uVar7 != 0) && (uVar9 < local_870)) {
        uVar9 = param_4 - local_870;
      }
LAB_00712e50:
      lVar14 = lVar14 + uVar9;
      uVar7 = 0;
    }
    uVar9 = uVar3;
    if (uVar3 <= uVar7) {
      uVar9 = uVar7;
    }
    for (; uVar9 < param_4 - 1; uVar9 = uVar9 + 1) {
      if (param_3[uVar9] != *(byte *)(param_1 + lVar14 + uVar9)) {
        lVar14 = lVar14 + (1 - uVar3);
        goto LAB_00712e50;
      }
    }
    uVar9 = uVar3 - 1;
    uVar10 = uVar3;
    if (uVar7 < uVar3) {
      do {
        uVar10 = uVar9 + 1;
        if (param_3[uVar9] != *(byte *)(uVar9 + 1 + ((lVar14 + (uVar3 - 1)) - uVar3) + param_1))
        break;
        bVar15 = uVar7 != uVar9;
        uVar9 = uVar9 - 1;
        uVar10 = uVar7;
      } while (bVar15);
    }
    if (uVar10 < uVar7 + 1) goto LAB_007130c6;
    lVar14 = lVar14 + local_870;
    uVar7 = param_4 - local_870;
  } while( true );
LAB_00712f69:
  param_1 = 0;
  goto LAB_00712f6b;
LAB_007130c6:
  param_1 = param_1 + lVar14;
LAB_00712f6b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}

