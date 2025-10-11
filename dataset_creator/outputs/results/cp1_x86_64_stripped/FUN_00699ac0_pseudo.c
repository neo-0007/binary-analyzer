
long * FUN_00699ac0(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long in_FS_OFFSET;
  undefined1 auStack_78 [8];
  undefined1 local_70 [8];
  long *local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  lVar6 = *(long *)(param_2 + 0x48);
  lVar1 = *(long *)(param_2 + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = -1;
  local_58 = -1;
  local_50 = -1;
  local_48 = -1;
  local_40 = -1;
  local_38 = -1;
  if (*(long *)(param_2 + 8) == 0) {
    if (lVar1 != 0) {
      local_48 = lVar1 - lVar6 >> 2;
      local_40 = (long)(*(ulong *)(param_2 + 0x28) - lVar1) >> 2;
      local_38 = *(long *)(param_2 + 0x30) - lVar6 >> 2;
      uVar5 = *(ulong *)(param_2 + 0x28);
      goto LAB_00699bad;
    }
  }
  else {
    local_60 = *(long *)(param_2 + 8) - lVar6 >> 2;
    local_58 = *(long *)(param_2 + 0x10) - lVar6 >> 2;
    uVar2 = *(ulong *)(param_2 + 0x18);
    local_50 = (long)(uVar2 - lVar6) >> 2;
    uVar5 = uVar2;
    if (lVar1 != 0) {
      local_48 = lVar1 - lVar6 >> 2;
      uVar3 = *(ulong *)(param_2 + 0x28);
      local_40 = (long)(uVar3 - lVar1) >> 2;
      local_38 = *(long *)(param_2 + 0x30) - lVar6 >> 2;
      uVar5 = uVar3;
      if ((uVar2 != 0) && (uVar5 = uVar2, uVar2 < uVar3)) {
        uVar5 = uVar3;
      }
    }
LAB_00699bad:
    if (uVar5 != 0) {
      *(long *)(param_2 + 0x50) = (long)(uVar5 - lVar6) >> 2;
    }
  }
  local_68 = param_1;
                    /* try { // try from 00699bc3 to 00699bc7 has its CatchHandler @ 00699e0e */
  FUN_0069dcb0(param_1,param_2);
  FUN_00625160(auStack_78,param_2 + 0x38);
  FUN_00625160(local_70,param_1 + 7);
                    /* try { // try from 00699bf6 to 00699bf8 has its CatchHandler @ 00699e05 */
  (**(code **)(*param_1 + 0x10))(param_1,auStack_78);
  FUN_006258d0(param_1 + 7,auStack_78);
  FUN_00625980(local_70);
  FUN_00625980(auStack_78);
  plVar7 = (long *)(param_2 + 0x58);
  plVar9 = (long *)param_1[9];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  plVar8 = *(long **)(param_2 + 0x48);
  if (plVar8 == plVar7) {
    if ((long *)(param_2 + 0x48) != param_1 + 9) {
      lVar6 = *(long *)(param_2 + 0x50);
      if (lVar6 != 0) {
        if (lVar6 == 1) {
          *(undefined4 *)plVar9 = *(undefined4 *)(param_2 + 0x58);
        }
        else {
          FUN_00771ea0(plVar9,plVar7,lVar6,0x3fffffffffffffff);
          lVar6 = *(long *)(param_2 + 0x50);
          plVar9 = (long *)param_1[9];
          plVar7 = *(long **)(param_2 + 0x48);
        }
      }
      param_1[10] = lVar6;
      *(undefined4 *)((long)plVar9 + lVar6 * 4) = 0;
      plVar8 = plVar7;
    }
  }
  else {
    lVar6 = *(long *)(param_2 + 0x58);
    lVar1 = *(long *)(param_2 + 0x50);
    if (plVar9 == param_1 + 0xb) {
      param_1[9] = (long)plVar8;
      param_1[10] = lVar1;
      param_1[0xb] = lVar6;
    }
    else {
      lVar4 = param_1[0xb];
      param_1[9] = (long)plVar8;
      param_1[10] = lVar1;
      param_1[0xb] = lVar6;
      if (plVar9 != (long *)0x0) {
        *(long **)(param_2 + 0x48) = plVar9;
        *(long *)(param_2 + 0x58) = lVar4;
        plVar8 = plVar9;
        goto LAB_00699c71;
      }
    }
    *(long **)(param_2 + 0x48) = plVar7;
    plVar8 = plVar7;
  }
LAB_00699c71:
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)plVar8 = 0;
                    /* try { // try from 00699c8a to 00699c8e has its CatchHandler @ 00699e0e */
  FUN_00698d90(param_2,plVar8,0,0);
  lVar6 = param_1[9];
  if (local_60 != -1) {
    param_1[1] = lVar6 + local_60 * 4;
    param_1[2] = lVar6 + local_58 * 4;
    param_1[3] = lVar6 + local_50 * 4;
  }
  if (local_48 != -1) {
    FUN_00698ae0(param_1,lVar6 + local_48 * 4,lVar6 + local_38 * 4,local_40);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}

