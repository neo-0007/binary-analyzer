
void FUN_00699320(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  long local_40;
  
  lVar3 = param_1[1];
  lVar4 = param_1[9];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = param_1[4];
  if (lVar3 == 0) {
    if (lVar5 != 0) {
      local_90 = -1;
      local_88 = -1;
      local_b0 = -1;
      local_a8 = lVar5 - lVar4 >> 2;
      local_70 = param_1[5] - lVar5 >> 2;
      local_78 = param_1[6] - lVar4 >> 2;
      uVar9 = param_1[5];
      goto LAB_006993e0;
    }
    local_78 = -1;
    local_70 = -1;
    local_a8 = -1;
    local_90 = -1;
    local_88 = -1;
    local_b0 = -1;
  }
  else {
    local_b0 = lVar3 - lVar4 >> 2;
    local_88 = param_1[2] - lVar4 >> 2;
    uVar6 = param_1[3];
    local_90 = (long)(uVar6 - lVar4) >> 2;
    if (lVar5 == 0) {
      local_78 = -1;
      local_70 = -1;
      local_a8 = -1;
      uVar9 = uVar6;
    }
    else {
      local_a8 = lVar5 - lVar4 >> 2;
      uVar7 = param_1[5];
      local_70 = (long)(uVar7 - lVar5) >> 2;
      local_78 = param_1[6] - lVar4 >> 2;
      uVar9 = uVar7;
      if ((uVar6 != 0) && (uVar9 = uVar6, uVar6 < uVar7)) {
        uVar9 = uVar7;
      }
    }
LAB_006993e0:
    if (uVar9 != 0) {
      param_1[10] = (long)(uVar9 - lVar4) >> 2;
    }
  }
  lVar4 = param_2[1];
  lVar5 = param_2[9];
  lVar8 = param_2[4];
  if (lVar4 == 0) {
    if (lVar8 == 0) {
      local_68 = -1;
      local_60 = -1;
      local_a0 = -1;
      local_98 = -1;
      local_80 = -1;
      local_b8 = -1;
      goto LAB_0069949a;
    }
    local_98 = -1;
    local_80 = -1;
    local_b8 = -1;
    local_a0 = lVar8 - lVar5 >> 2;
    local_60 = param_2[5] - lVar8 >> 2;
    local_68 = param_2[6] - lVar5 >> 2;
    uVar9 = param_2[5];
  }
  else {
    local_b8 = lVar4 - lVar5 >> 2;
    local_80 = param_2[2] - lVar5 >> 2;
    uVar6 = param_2[3];
    local_98 = (long)(uVar6 - lVar5) >> 2;
    if (lVar8 == 0) {
      local_68 = -1;
      local_60 = -1;
      local_a0 = -1;
      uVar9 = uVar6;
    }
    else {
      local_a0 = lVar8 - lVar5 >> 2;
      uVar7 = param_2[5];
      local_60 = (long)(uVar7 - lVar8) >> 2;
      local_68 = param_2[6] - lVar5 >> 2;
      uVar9 = uVar7;
      if ((uVar6 != 0) && (uVar9 = uVar6, uVar6 < uVar7)) {
        uVar9 = uVar7;
      }
    }
  }
  if (uVar9 != 0) {
    param_2[10] = (long)(uVar9 - lVar5) >> 2;
  }
LAB_0069949a:
  param_1[1] = lVar4;
  plVar1 = param_1 + 7;
  param_2[1] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[2];
  plVar2 = param_2 + 7;
  param_2[2] = lVar3;
  lVar3 = param_1[3];
  param_1[3] = param_2[3];
  param_2[3] = lVar3;
  lVar3 = param_1[4];
  param_1[4] = param_2[4];
  param_2[4] = lVar3;
  lVar3 = param_1[5];
  param_1[5] = param_2[5];
  param_2[5] = lVar3;
  lVar3 = param_1[6];
  param_1[6] = param_2[6];
  param_2[6] = lVar3;
  FUN_00625160(local_48,plVar1);
  FUN_006258d0(plVar1,plVar2);
  FUN_006258d0(plVar2,local_48);
  FUN_00625980(local_48);
  FUN_00625160(local_58,plVar2);
  FUN_00625160(local_50,plVar1);
                    /* try { // try from 00699568 to 0069956a has its CatchHandler @ 00699840 */
  (**(code **)(*param_1 + 0x10))(param_1,local_58);
  FUN_006258d0(plVar1,local_58);
  FUN_00625160(local_48,plVar2);
                    /* try { // try from 0069958d to 0069958f has its CatchHandler @ 00699846 */
  (**(code **)(*param_2 + 0x10))(param_2,local_50);
  FUN_006258d0(plVar2,local_50);
  FUN_00625980(local_48);
  FUN_00625980(local_50);
  FUN_00625980(local_58);
  lVar3 = param_1[8];
  *(int *)(param_1 + 8) = (int)param_2[8];
  *(int *)(param_2 + 8) = (int)lVar3;
  FUN_006b7550(param_1 + 9,param_2 + 9);
  lVar3 = param_1[9];
  if (local_b8 != -1) {
    param_1[1] = lVar3 + local_b8 * 4;
    param_1[2] = lVar3 + local_80 * 4;
    param_1[3] = lVar3 + local_98 * 4;
  }
  if (local_a0 != -1) {
    FUN_00698ae0(param_1,lVar3 + local_a0 * 4,lVar3 + local_68 * 4,local_60);
  }
  lVar3 = param_2[9];
  if (local_b0 != -1) {
    param_2[1] = lVar3 + local_b0 * 4;
    param_2[2] = lVar3 + local_88 * 4;
    param_2[3] = lVar3 + local_90 * 4;
  }
  if (local_a8 != -1) {
    FUN_00698ae0(param_2,lVar3 + local_a8 * 4,lVar3 + local_78 * 4,local_70);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

