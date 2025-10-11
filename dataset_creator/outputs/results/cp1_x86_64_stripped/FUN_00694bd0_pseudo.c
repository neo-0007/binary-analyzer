
void FUN_00694bd0(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
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
  local_70 = param_1[4];
  if (lVar3 == 0) {
    if (local_70 != 0) {
      local_90 = -1;
      local_88 = -1;
      local_a8 = local_70 - lVar4;
      local_b0 = -1;
      local_70 = param_1[5] - local_70;
      local_78 = param_1[6] - lVar4;
      uVar8 = param_1[5];
      goto LAB_00694c78;
    }
    local_78 = -1;
    local_70 = -1;
    local_a8 = -1;
    local_90 = -1;
    local_88 = -1;
    local_b0 = -1;
  }
  else {
    local_b0 = lVar3 - lVar4;
    local_88 = param_1[2] - lVar4;
    uVar5 = param_1[3];
    local_90 = uVar5 - lVar4;
    if (local_70 == 0) {
      local_78 = -1;
      local_70 = -1;
      local_a8 = -1;
      uVar8 = uVar5;
    }
    else {
      uVar6 = param_1[5];
      local_a8 = local_70 - lVar4;
      local_70 = uVar6 - local_70;
      local_78 = param_1[6] - lVar4;
      uVar8 = uVar6;
      if ((uVar5 != 0) && (uVar8 = uVar5, uVar5 < uVar6)) {
        uVar8 = uVar6;
      }
    }
LAB_00694c78:
    if (uVar8 != 0) {
      param_1[10] = uVar8 - lVar4;
    }
  }
  lVar4 = param_2[1];
  lVar7 = param_2[9];
  local_60 = param_2[4];
  if (lVar4 == 0) {
    if (local_60 == 0) {
      local_68 = -1;
      local_60 = -1;
      local_a0 = -1;
      local_98 = -1;
      local_80 = -1;
      local_b8 = -1;
      goto LAB_00694d12;
    }
    local_98 = -1;
    local_80 = -1;
    local_a0 = local_60 - lVar7;
    local_b8 = -1;
    local_60 = param_2[5] - local_60;
    local_68 = param_2[6] - lVar7;
    uVar8 = param_2[5];
  }
  else {
    local_b8 = lVar4 - lVar7;
    local_80 = param_2[2] - lVar7;
    uVar5 = param_2[3];
    local_98 = uVar5 - lVar7;
    if (local_60 == 0) {
      local_68 = -1;
      local_60 = -1;
      local_a0 = -1;
      uVar8 = uVar5;
    }
    else {
      uVar6 = param_2[5];
      local_a0 = local_60 - lVar7;
      local_60 = uVar6 - local_60;
      local_68 = param_2[6] - lVar7;
      uVar8 = uVar6;
      if ((uVar5 != 0) && (uVar8 = uVar5, uVar5 < uVar6)) {
        uVar8 = uVar6;
      }
    }
  }
  if (uVar8 != 0) {
    param_2[10] = uVar8 - lVar7;
  }
LAB_00694d12:
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
                    /* try { // try from 00694de0 to 00694de2 has its CatchHandler @ 006950a0 */
  (**(code **)(*param_1 + 0x10))(param_1,local_58);
  FUN_006258d0(plVar1,local_58);
  FUN_00625160(local_48,plVar2);
                    /* try { // try from 00694e05 to 00694e07 has its CatchHandler @ 006950a6 */
  (**(code **)(*param_2 + 0x10))(param_2,local_50);
  FUN_006258d0(plVar2,local_50);
  FUN_00625980(local_48);
  FUN_00625980(local_50);
  FUN_00625980(local_58);
  lVar3 = param_1[8];
  *(int *)(param_1 + 8) = (int)param_2[8];
  *(int *)(param_2 + 8) = (int)lVar3;
  FUN_0069fef0(param_1 + 9,param_2 + 9);
  lVar3 = param_1[9];
  if (local_b8 != -1) {
    param_1[1] = local_b8 + lVar3;
    param_1[2] = local_80 + lVar3;
    param_1[3] = local_98 + lVar3;
  }
  if (local_a0 != -1) {
    FUN_006943b0(param_1,lVar3 + local_a0,local_68 + lVar3,local_60);
  }
  lVar3 = param_2[9];
  if (local_b0 != -1) {
    param_2[1] = local_b0 + lVar3;
    param_2[2] = local_88 + lVar3;
    param_2[3] = local_90 + lVar3;
  }
  if (local_a8 != -1) {
    FUN_006943b0(param_2,lVar3 + local_a8,local_78 + lVar3,local_70);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

