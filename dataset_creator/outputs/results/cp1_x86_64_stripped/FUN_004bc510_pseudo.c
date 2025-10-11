
void FUN_004bc510(long param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  if (param_3 == 4) {
    FUN_005c1b50();
    return;
  }
  if (param_3 == 8) {
    FUN_005c1720();
    return;
  }
  if (param_3 < 0x10) {
    FUN_004bc420();
    return;
  }
  iVar10 = param_3 >> 1;
  lVar8 = (long)param_3 * 8;
  lVar1 = param_4 + lVar8;
  lVar6 = (long)iVar10 * 8 + param_2;
  iVar3 = FUN_004b7920(param_2,lVar6,iVar10);
  lVar9 = lVar1 + lVar8;
  if (iVar3 < 1) {
    if (iVar3 == 0) {
      thunk_FUN_00713720(lVar1,0,lVar8);
      goto LAB_004bc5b3;
    }
    FUN_005c1070(param_4,lVar6,param_2,iVar10);
  }
  else {
    FUN_005c1070(param_4,param_2,lVar6,iVar10);
  }
  FUN_004bc510(lVar1,param_4,iVar10,lVar9);
LAB_004bc5b3:
  FUN_004bc510(param_1,param_2,iVar10,lVar9);
  FUN_004bc510(lVar8 + param_1,lVar6,iVar10,lVar9);
  iVar3 = FUN_005c1040(param_4,param_1,lVar8 + param_1,param_3);
  iVar4 = FUN_005c1070(lVar1,param_4,lVar1,param_3);
  lVar9 = (long)iVar10 * 8 + param_1;
  iVar5 = FUN_005c1040(lVar9,lVar9,lVar1,param_3);
  iVar5 = (iVar3 - iVar4) + iVar5;
  if (iVar5 != 0) {
    puVar7 = (ulong *)(param_1 + (long)(param_3 + iVar10) * 8);
    uVar2 = *puVar7;
    *puVar7 = *puVar7 + (long)iVar5;
    if (CARRY8(uVar2,(long)iVar5)) {
      do {
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar7 + 1;
      } while (*puVar7 == 0);
    }
  }
  return;
}

