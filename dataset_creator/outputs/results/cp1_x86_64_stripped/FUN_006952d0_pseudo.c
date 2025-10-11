
long * FUN_006952d0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
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
  lVar2 = *(long *)(param_2 + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = -1;
  local_58 = -1;
  local_50 = -1;
  local_48 = -1;
  local_40 = -1;
  local_38 = -1;
  if (*(long *)(param_2 + 8) == 0) {
    if (lVar2 != 0) {
      local_48 = lVar2 - lVar6;
      local_40 = *(ulong *)(param_2 + 0x28) - lVar2;
      local_38 = *(long *)(param_2 + 0x30) - lVar6;
      uVar5 = *(ulong *)(param_2 + 0x28);
      goto LAB_006953a5;
    }
  }
  else {
    local_60 = *(long *)(param_2 + 8) - lVar6;
    local_58 = *(long *)(param_2 + 0x10) - lVar6;
    uVar3 = *(ulong *)(param_2 + 0x18);
    local_50 = uVar3 - lVar6;
    uVar5 = uVar3;
    if (lVar2 != 0) {
      local_48 = lVar2 - lVar6;
      uVar4 = *(ulong *)(param_2 + 0x28);
      local_40 = uVar4 - lVar2;
      local_38 = *(long *)(param_2 + 0x30) - lVar6;
      uVar5 = uVar4;
      if ((uVar3 != 0) && (uVar5 = uVar3, uVar3 < uVar4)) {
        uVar5 = uVar4;
      }
    }
LAB_006953a5:
    if (uVar5 != 0) {
      *(ulong *)(param_2 + 0x50) = uVar5 - lVar6;
    }
  }
  local_68 = param_1;
                    /* try { // try from 006953b7 to 006953bb has its CatchHandler @ 006955ce */
  FUN_0069d510(param_1,param_2);
  FUN_00625160(auStack_78,param_2 + 0x38);
  FUN_00625160(local_70,param_1 + 7);
                    /* try { // try from 006953ea to 006953ec has its CatchHandler @ 006955c5 */
  (**(code **)(*param_1 + 0x10))(param_1,auStack_78);
  FUN_006258d0(param_1 + 7,auStack_78);
  FUN_00625980(local_70);
  FUN_00625980(auStack_78);
  plVar7 = *(long **)(param_2 + 0x48);
  plVar8 = (long *)param_1[9];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  plVar1 = (long *)(param_2 + 0x58);
  if (plVar7 == plVar1) {
    if ((long *)(param_2 + 0x48) != param_1 + 9) {
      lVar6 = *(long *)(param_2 + 0x50);
      if (lVar6 != 0) {
        if (lVar6 == 1) {
          *(undefined1 *)plVar8 = *(undefined1 *)(param_2 + 0x58);
          lVar6 = *(long *)(param_2 + 0x50);
          plVar8 = (long *)param_1[9];
        }
        else {
          thunk_FUN_00713a50();
          lVar6 = *(long *)(param_2 + 0x50);
          plVar8 = (long *)param_1[9];
        }
      }
      param_1[10] = lVar6;
      *(undefined1 *)((long)plVar8 + lVar6) = 0;
      plVar7 = *(long **)(param_2 + 0x48);
    }
  }
  else {
    lVar6 = *(long *)(param_2 + 0x50);
    if (plVar8 == param_1 + 0xb) {
      param_1[9] = (long)plVar7;
      param_1[10] = lVar6;
      param_1[0xb] = *(long *)(param_2 + 0x58);
    }
    else {
      param_1[9] = (long)plVar7;
      lVar2 = param_1[0xb];
      param_1[10] = lVar6;
      param_1[0xb] = *(long *)(param_2 + 0x58);
      if (plVar8 != (long *)0x0) {
        *(long **)(param_2 + 0x48) = plVar8;
        *(long *)(param_2 + 0x58) = lVar2;
        plVar7 = plVar8;
        goto LAB_00695465;
      }
    }
    *(long **)(param_2 + 0x48) = plVar1;
    plVar7 = plVar1;
  }
LAB_00695465:
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)plVar7 = 0;
                    /* try { // try from 0069547b to 0069547f has its CatchHandler @ 006955ce */
  FUN_00694640(param_2,*(undefined8 *)(param_2 + 0x48),0,0);
  lVar6 = param_1[9];
  if (local_60 != -1) {
    param_1[1] = local_60 + lVar6;
    param_1[2] = local_58 + lVar6;
    param_1[3] = local_50 + lVar6;
  }
  if (local_48 != -1) {
    FUN_006943b0(param_1,lVar6 + local_48,local_38 + lVar6,local_40);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}

