
long FUN_00713b60(long param_1,long param_2,byte *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  ulong local_848 [257];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 < 2) {
    uVar15 = 0xffffffffffffffff;
    uVar11 = 1;
    uVar5 = 0;
  }
  else {
    uVar11 = 1;
    uVar12 = 1;
    uVar5 = 1;
    uVar1 = 0;
    uVar15 = 0xffffffffffffffff;
    do {
      while (uVar13 = uVar1, param_3[uVar5] < param_3[uVar15 + uVar12]) {
        uVar12 = 1;
        uVar11 = uVar5 - uVar15;
        uVar13 = uVar5;
LAB_00713bc6:
        uVar5 = uVar12 + uVar13;
        uVar1 = uVar13;
        if (param_4 <= uVar5) goto LAB_00713bfe;
      }
      if (param_3[uVar15 + uVar12] == param_3[uVar5]) {
        if (uVar11 == uVar12) {
          uVar12 = 1;
          uVar13 = uVar13 + uVar11;
        }
        else {
          uVar12 = uVar12 + 1;
        }
        goto LAB_00713bc6;
      }
      uVar12 = 1;
      uVar11 = 1;
      uVar5 = uVar13 + 2;
      uVar1 = uVar13 + 1;
      uVar15 = uVar13;
    } while (uVar5 < param_4);
LAB_00713bfe:
    uVar14 = 1;
    uVar13 = 1;
    uVar5 = 1;
    uVar1 = 0;
    uVar12 = 0xffffffffffffffff;
    do {
      while (uVar9 = uVar1, param_3[uVar12 + uVar13] < param_3[uVar5]) {
        uVar13 = 1;
        uVar14 = uVar5 - uVar12;
        uVar9 = uVar5;
LAB_00713c2e:
        uVar5 = uVar13 + uVar9;
        uVar1 = uVar9;
        if (param_4 <= uVar5) goto LAB_00713c67;
      }
      if (param_3[uVar12 + uVar13] == param_3[uVar5]) {
        if (uVar14 == uVar13) {
          uVar13 = 1;
          uVar9 = uVar9 + uVar14;
        }
        else {
          uVar13 = uVar13 + 1;
        }
        goto LAB_00713c2e;
      }
      uVar13 = 1;
      uVar14 = 1;
      uVar5 = uVar9 + 2;
      uVar1 = uVar9 + 1;
      uVar12 = uVar9;
    } while (uVar5 < param_4);
LAB_00713c67:
    uVar5 = uVar15 + 1;
    if (uVar15 + 1 <= uVar12 + 1) {
      uVar11 = uVar14;
      uVar15 = uVar12;
      uVar5 = uVar12 + 1;
    }
  }
  puVar6 = local_848;
  do {
    *puVar6 = param_4;
    puVar6[1] = param_4;
    puVar6 = puVar6 + 2;
  } while (local_848 + 0x100 != puVar6);
  uVar1 = param_4 - 1;
  pbVar7 = param_3;
  if (param_4 != 0) {
    do {
      pbVar8 = pbVar7 + 1;
      local_848[*pbVar7] = (ulong)(param_3 + (uVar1 - (long)pbVar7));
      pbVar7 = pbVar8;
    } while (param_3 + param_4 != pbVar8);
  }
  iVar4 = thunk_FUN_00713570(param_3,param_3 + uVar11,uVar5);
  uVar12 = param_2 - param_4;
  if (iVar4 == 0) {
    uVar14 = 0;
    uVar13 = 0;
    do {
      while( true ) {
        lVar10 = param_1 + uVar14;
        uVar9 = local_848[*(byte *)(lVar10 + uVar1)];
        if (uVar9 != 0) break;
        uVar9 = uVar5;
        if (uVar5 <= uVar13) {
          uVar9 = uVar13;
        }
        for (; uVar3 = uVar15, uVar2 = uVar5, uVar9 < uVar1; uVar9 = uVar9 + 1) {
          if (param_3[uVar9] != *(byte *)(lVar10 + uVar9)) {
            uVar14 = uVar14 + (1 - uVar5);
            goto LAB_00713d24;
          }
        }
        while ((uVar9 = uVar3, uVar13 < uVar2 && (param_3[uVar9] == *(byte *)(lVar10 + uVar9)))) {
          uVar2 = uVar9;
          uVar3 = uVar9 - 1;
        }
        if (uVar2 < uVar13 + 1) goto LAB_00713df8;
        uVar14 = uVar14 + uVar11;
        uVar13 = param_4 - uVar11;
        if (uVar12 < uVar14) goto LAB_00713df6;
      }
      if ((uVar13 != 0) && (uVar9 < uVar11)) {
        uVar9 = param_4 - uVar11;
      }
LAB_00713d24:
      uVar14 = uVar14 + uVar9;
      uVar13 = 0;
    } while (uVar14 <= uVar12);
  }
  else {
    uVar11 = param_4 - uVar5;
    if (param_4 - uVar5 < uVar5) {
      uVar11 = uVar5;
    }
    uVar13 = 0;
    do {
      lVar10 = param_1 + uVar13;
      uVar14 = local_848[*(byte *)(lVar10 + uVar1)];
      uVar9 = uVar5;
      if (uVar14 == 0) {
        while (uVar14 = uVar9, uVar14 < uVar1) {
          if (param_3[uVar14] != *(byte *)(lVar10 + uVar14)) {
            uVar13 = uVar13 + (1 - uVar5);
            goto LAB_00713e40;
          }
          uVar9 = uVar14 + 1;
        }
        uVar14 = uVar15;
        if (uVar15 == 0xffffffffffffffff) goto LAB_00713df8;
        while (param_3[uVar14] == *(byte *)(lVar10 + uVar14)) {
          bVar16 = uVar14 == 0;
          uVar14 = uVar14 - 1;
          if (bVar16) goto LAB_00713df8;
        }
        uVar13 = uVar13 + uVar11 + 1;
      }
      else {
LAB_00713e40:
        uVar13 = uVar13 + uVar14;
      }
    } while (uVar13 <= uVar12);
  }
LAB_00713df6:
  lVar10 = 0;
LAB_00713df8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar10;
}

