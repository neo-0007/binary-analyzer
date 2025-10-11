
undefined1  [16]
FUN_00661b20(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,undefined8 param_8,char param_9,char param_10)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)FUN_006a4ba0(param_6 + 0xd0);
  *param_7 = 0;
  local_58 = (**(code **)(*plVar3 + 0x50))(plVar3,0x25);
  if (param_10 == '\0') {
    local_50 = 0;
    local_54 = (int)param_9;
  }
  else {
    local_54 = (int)param_10;
    local_4c = 0;
    local_50 = (int)param_9;
  }
  auVar6 = FUN_006602b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_58);
  plVar4 = auVar6._0_8_;
  bVar5 = auVar6._8_4_ == -1;
  bVar1 = plVar4 != (long *)0x0 && bVar5;
  plVar3 = plVar4;
  if (bVar1) {
    if ((int *)plVar4[2] < (int *)plVar4[3]) {
      iVar2 = *(int *)plVar4[2];
    }
    else {
      iVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
    }
    plVar3 = (long *)0x0;
    if (iVar2 != -1) {
      plVar3 = plVar4;
    }
    bVar5 = iVar2 == -1 && bVar1;
  }
  bVar1 = (int)param_5 == -1;
  if ((param_4 != (long *)0x0) && (bVar1)) {
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar2 = *(int *)param_4[2];
    }
    else {
      iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
    }
    bVar1 = iVar2 == -1;
  }
  if (bVar1 == bVar5) {
    *param_7 = *param_7 | 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar6._8_8_ = param_3 & 0xffffffff00000000 | auVar6._8_8_ & 0xffffffff;
    auVar6._0_8_ = plVar3;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

