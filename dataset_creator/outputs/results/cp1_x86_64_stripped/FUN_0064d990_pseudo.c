
undefined1  [16]
FUN_0064d990(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,undefined8 param_8,char param_9,char param_10)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 local_44;
  char local_43;
  char local_42;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)FUN_0067c1e0(param_6 + 0xd0);
  *param_7 = 0;
  if ((char)plVar3[7] == '\0') {
    FUN_0063d6f0(plVar3);
    local_44 = 0x25;
    if (*(code **)(*plVar3 + 0x30) != FUN_00405e50) {
      local_44 = (**(code **)(*plVar3 + 0x30))(plVar3,0x25);
    }
  }
  else {
    local_44 = *(undefined1 *)((long)plVar3 + 0x5e);
  }
  if (param_10 == '\0') {
    local_42 = '\0';
    local_43 = param_9;
  }
  else {
    local_43 = param_10;
    local_41 = 0;
    local_42 = param_9;
  }
  auVar5 = FUN_0064bca0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_44);
  plVar3 = auVar5._0_8_;
  bVar4 = auVar5._8_4_ == -1;
  bVar1 = plVar3 != (long *)0x0 && bVar4;
  if ((bVar1) && (bVar4 = false, (ulong)plVar3[3] <= (ulong)plVar3[2])) {
    iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
    if (iVar2 == -1) {
      plVar3 = (long *)0x0;
    }
    bVar4 = iVar2 == -1 && bVar1;
  }
  bVar1 = (int)param_5 == -1;
  if (((param_4 != (long *)0x0) && (bVar1)) &&
     (bVar1 = false, (ulong)param_4[3] <= (ulong)param_4[2])) {
    iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
    bVar1 = iVar2 == -1;
  }
  if (bVar4 == bVar1) {
    *param_7 = *param_7 | 2;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  auVar5._8_8_ = param_3 & 0xffffffff00000000 | auVar5._8_8_ & 0xffffffff;
  auVar5._0_8_ = plVar3;
  return auVar5;
}

