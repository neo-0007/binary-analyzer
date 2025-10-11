
void FUN_004ba490(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                 long param_7)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  
  if (param_4 < 8) {
    FUN_004b9e30(param_1,param_2,param_4 + param_5,param_3,param_4 + param_6);
    return;
  }
  lVar6 = (long)param_4 * 8;
  lVar1 = param_2 + lVar6;
  iVar15 = param_6 - param_4;
  iVar4 = FUN_004b7990(param_2,lVar1,param_5,param_4 - param_5);
  lVar8 = lVar6 + param_3;
  iVar5 = FUN_004b7990(lVar8,param_3,param_6,iVar15);
  lVar14 = param_7 + lVar6;
  iVar5 = iVar4 * 3 + iVar5;
  if (2 < iVar5) {
    bVar3 = false;
    if (iVar5 - 3U < 2) {
      FUN_004b9c80(param_7,param_2,lVar1,param_5);
      FUN_004b9c80(lVar14,lVar8,param_3,param_6,iVar15);
    }
    goto LAB_004ba5b5;
  }
  if (iVar5 < -1) {
    if (iVar5 == -4) {
      FUN_004b9c80(param_7,lVar1,param_2,param_5,param_5 - param_4);
      FUN_004b9c80(lVar14,param_3,lVar8,param_6,param_4 - param_6);
      bVar3 = false;
      goto LAB_004ba5b5;
    }
    bVar3 = false;
    if ((iVar5 < -4) || (1 < iVar5 + 3U)) goto LAB_004ba5b5;
    FUN_004b9c80(param_7,lVar1,param_2,param_5,param_5 - param_4);
    lVar7 = param_3;
    lVar11 = lVar8;
  }
  else {
    FUN_004b9c80(param_7,param_2,lVar1,param_5);
    iVar15 = param_4 - param_6;
    lVar7 = lVar8;
    lVar11 = param_3;
  }
  FUN_004b9c80(lVar14,lVar11,lVar7,param_6,iVar15);
  bVar3 = true;
LAB_004ba5b5:
  iVar15 = param_4 * 2;
  lVar11 = lVar6 + lVar14;
  lVar7 = param_1 + (long)iVar15 * 8;
  if (param_4 == 8) {
    FUN_005c10a0(param_7 + 0x80,param_7,lVar14);
    FUN_005c10a0(param_1,param_2,param_3);
    FUN_004b9e30(param_1 + 0x80,lVar1,param_5,lVar8,param_6);
    thunk_FUN_00713720(param_1 + (long)(param_5 + 0x10 + param_6) * 8,0,
                       (long)((0x10 - param_5) - param_6) << 3);
  }
  else {
    lVar9 = (long)param_4 * 0x10 + lVar11;
    FUN_004b9f50(lVar11,param_7,lVar14,param_4,0,0,lVar9);
    FUN_004b9f50(param_1,param_2,param_3,param_4,0,0,lVar9);
    iVar5 = param_4 >> 1;
    iVar12 = param_5 - iVar5;
    iVar13 = param_6 - iVar5;
    iVar4 = iVar12;
    if (param_5 <= param_6) {
      iVar4 = iVar13;
    }
    if (iVar4 == 0) {
      FUN_004b9f50(lVar7,lVar1,lVar8,iVar5,iVar12,iVar13,lVar9);
      thunk_FUN_00713720(param_1 + (long)(iVar5 * 2 + iVar15) * 8,0,(long)(iVar15 + iVar5 * -2) << 3
                        );
    }
    else if (iVar4 < 1) {
      lVar7 = thunk_FUN_00713720(lVar7,0,(long)iVar15 * 8);
      if ((param_5 < 0x10) && (param_6 < 0x10)) {
        FUN_004b9e30(lVar7,lVar1,param_5,lVar8,param_6);
      }
      else {
        iVar4 = param_6;
        if (param_6 <= param_5) {
          iVar4 = param_5;
        }
        do {
          iVar5 = iVar5 / 2;
          if (iVar5 < iVar4) {
            FUN_004ba490(lVar7,lVar1,lVar8,iVar5,param_5 - iVar5,param_6 - iVar5,lVar9);
            goto LAB_004ba77c;
          }
        } while ((param_5 != iVar5) && (param_6 != iVar5));
        FUN_004b9f50(lVar7,lVar1,lVar8,iVar5,param_5 - iVar5,param_6 - iVar5,lVar9);
      }
    }
    else {
      FUN_004ba490(lVar7,lVar1,lVar8,iVar5,iVar12,iVar13,lVar9);
      thunk_FUN_00713720(param_1 + (long)(param_5 + iVar15 + param_6) * 8,0,
                         (long)((iVar15 - param_5) - param_6) << 3);
    }
  }
LAB_004ba77c:
  iVar4 = FUN_005c1040(param_7,param_1,lVar7,iVar15);
  if (bVar3) {
    iVar5 = FUN_005c1070(lVar11,param_7,lVar11);
    iVar5 = -iVar5;
  }
  else {
    iVar5 = FUN_005c1040(lVar11,lVar11,param_7,iVar15);
  }
  iVar15 = FUN_005c1040(lVar6 + param_1,lVar6 + param_1,lVar11,iVar15);
  iVar15 = iVar4 + iVar5 + iVar15;
  if (iVar15 != 0) {
    puVar10 = (ulong *)(param_1 + (long)(param_4 * 3) * 8);
    uVar2 = *puVar10;
    *puVar10 = *puVar10 + (long)iVar15;
    if (CARRY8(uVar2,(long)iVar15)) {
      do {
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar10 + 1;
      } while (*puVar10 == 0);
    }
  }
  return;
}

