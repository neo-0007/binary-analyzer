
void FUN_004b9f50(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                 long param_7)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  byte bVar18;
  long local_78;
  long local_48;
  
  bVar18 = 0;
  bVar17 = param_5 == 0;
  if ((param_4 == 8) && (bVar17)) {
    if (param_6 == 0) {
      FUN_005c10a0();
      return;
    }
LAB_004b9f98:
    FUN_004b9e30(param_1,param_2,param_4 + param_5,param_3,param_4 + param_6);
    if (-1 < param_5 + param_6) {
      return;
    }
    thunk_FUN_00713720(param_1 + (long)(param_4 + param_5 + param_4 + param_6) * 8,0,
                       (long)-(param_5 + param_6) << 3);
    return;
  }
  if (param_4 < 0x10) goto LAB_004b9f98;
  iVar3 = param_4 >> 1;
  iVar15 = -param_5;
  iVar16 = iVar3 + param_5;
  iVar9 = iVar3 + param_6;
  lVar6 = (long)iVar3 * 8;
  lVar1 = param_2 + lVar6;
  iVar4 = FUN_004b7990(param_2,lVar1,iVar16,iVar15);
  lVar7 = lVar6 + param_3;
  iVar5 = FUN_004b7990(lVar7,param_3,iVar9,param_6);
  switch(iVar4 * 3 + 4 + iVar5) {
  case 0:
    FUN_004b9c80(param_7,lVar1,param_2,iVar16,param_5);
    iVar4 = -param_6;
    lVar12 = lVar7;
    lVar13 = param_3;
    break;
  case 1:
  case 3:
  case 4:
  case 5:
  case 7:
    if (((iVar3 != 8) || (!bVar17)) || (param_6 != 0)) {
      local_78 = param_7 + (long)(param_4 * 2) * 8;
      local_48 = (long)param_4 * 8;
      puVar8 = (undefined8 *)thunk_FUN_00713720(param_7 + local_48,0);
      bVar2 = false;
      goto LAB_004ba0d5;
    }
    local_48 = (long)param_4 * 8;
    puVar8 = (undefined8 *)(param_7 + local_48);
    *puVar8 = 0;
    puVar8[0xf] = 0;
    puVar14 = (undefined8 *)((ulong)(puVar8 + 1) & 0xfffffffffffffff8);
    for (uVar10 = (ulong)(((int)puVar8 -
                          (int)(undefined8 *)((ulong)(puVar8 + 1) & 0xfffffffffffffff8)) + 0x80U >>
                         3); uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar14 = 0;
      puVar14 = puVar14 + (ulong)bVar18 * -2 + 1;
    }
    bVar2 = false;
    goto LAB_004ba1e5;
  case 2:
    FUN_004b9c80(param_7,lVar1,param_2,iVar16,param_5);
    lVar12 = param_3;
    lVar13 = lVar7;
    iVar4 = param_6;
    goto LAB_004ba18b;
  case 6:
    FUN_004b9c80(param_7,param_2,lVar1,iVar16,iVar15);
    lVar12 = lVar7;
    lVar13 = param_3;
    iVar4 = -param_6;
LAB_004ba18b:
    FUN_004b9c80(param_7 + lVar6,lVar13,lVar12,iVar9,iVar4);
    bVar2 = true;
    goto LAB_004ba1a7;
  case 8:
    FUN_004b9c80(param_7,param_2,lVar1,iVar16,iVar15);
    lVar12 = param_3;
    lVar13 = lVar7;
    iVar4 = param_6;
    break;
  default:
    bVar2 = false;
    goto LAB_004ba1a7;
  }
  FUN_004b9c80(param_7 + lVar6,lVar13,lVar12,iVar9,iVar4);
  bVar2 = false;
LAB_004ba1a7:
  if (((iVar3 == 8) && (bVar17)) && (param_6 == 0)) {
    local_48 = (long)param_4 * 8;
    puVar8 = (undefined8 *)(param_7 + local_48);
    FUN_005c10a0(puVar8,param_7,param_7 + lVar6);
LAB_004ba1e5:
    FUN_005c10a0(param_1,param_2,param_3);
    local_48 = param_1 + local_48;
    FUN_005c10a0(local_48,lVar1,lVar7);
  }
  else {
    local_78 = param_7 + (long)(param_4 * 2) * 8;
    local_48 = (long)param_4 * 8;
    puVar8 = (undefined8 *)(param_7 + local_48);
    FUN_004b9f50(puVar8,param_7,param_7 + lVar6,iVar3,0,0,local_78);
LAB_004ba0d5:
    FUN_004b9f50(param_1,param_2,param_3,iVar3,0,0,local_78);
    local_48 = local_48 + param_1;
    FUN_004b9f50(local_48,lVar1,lVar7,iVar3,param_5,param_6,local_78);
  }
  iVar4 = FUN_005c1040(param_7,param_1,local_48,param_4);
  if (bVar2) {
    iVar5 = FUN_005c1070(puVar8,param_7,puVar8);
    iVar5 = -iVar5;
  }
  else {
    iVar5 = FUN_005c1040(puVar8,puVar8,param_7,param_4);
  }
  iVar9 = FUN_005c1040(lVar6 + param_1,lVar6 + param_1,puVar8,param_4);
  iVar9 = iVar4 + iVar5 + iVar9;
  if (iVar9 != 0) {
    puVar11 = (ulong *)(param_1 + (long)(param_4 + iVar3) * 8);
    uVar10 = *puVar11;
    *puVar11 = *puVar11 + (long)iVar9;
    if (CARRY8(uVar10,(long)iVar9)) {
      do {
        puVar11 = puVar11 + 1;
        *puVar11 = *puVar11 + 1;
      } while (*puVar11 == 0);
      return;
    }
  }
  return;
}

