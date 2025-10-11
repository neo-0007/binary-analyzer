
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bee90(uint *param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  uint *puVar14;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  puVar9 = param_1 + 0x12;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = DAT_0080fa20;
  *(undefined8 *)(param_1 + 0x410) = _DAT_00810a60;
  lVar3 = (long)param_1 - (long)((ulong)(param_1 + 2) & 0xfffffffffffffff8);
  puVar10 = (undefined8 *)((long)&DAT_0080fa20 - lVar3);
  puVar12 = (undefined8 *)((ulong)(param_1 + 2) & 0xfffffffffffffff8);
  for (uVar5 = (ulong)((int)lVar3 + 0x1048U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  iVar2 = 0x48;
  if (param_2 < 0x49) {
    iVar2 = param_2;
  }
  puVar13 = param_3 + iVar2;
  puVar4 = param_3;
  puVar11 = param_1;
  do {
    uVar1 = *puVar4;
    puVar6 = puVar4 + 1;
    if (puVar13 <= puVar4 + 1) {
      puVar6 = param_3;
    }
    puVar8 = puVar6 + 1;
    if (puVar13 <= puVar6 + 1) {
      puVar8 = param_3;
    }
    puVar7 = puVar8 + 1;
    if (puVar13 <= puVar8 + 1) {
      puVar7 = param_3;
    }
    puVar4 = puVar7 + 1;
    if (puVar13 <= puVar7 + 1) {
      puVar4 = param_3;
    }
    *puVar11 = *puVar11 ^ CONCAT31(CONCAT21(CONCAT11(uVar1,*puVar6),*puVar8),*puVar7);
    puVar11 = puVar11 + 1;
  } while (puVar9 != puVar11);
  local_38 = 0;
  puVar11 = param_1;
  do {
    puVar14 = puVar11 + 2;
    FUN_005be050(&local_38,param_1);
    *puVar11 = (uint)local_38;
    puVar11[1] = local_38._4_4_;
    puVar11 = puVar14;
  } while (puVar9 != puVar14);
  do {
    puVar11 = puVar9 + 2;
    FUN_005be050(&local_38,param_1);
    *puVar9 = (uint)local_38;
    puVar9[1] = local_38._4_4_;
    puVar9 = puVar11;
  } while (param_1 + 0x412 != puVar11);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

