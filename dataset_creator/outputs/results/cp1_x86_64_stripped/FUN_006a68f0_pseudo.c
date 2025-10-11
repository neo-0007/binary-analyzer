
long * FUN_006a68f0(undefined8 param_1,long *param_2,char param_3,long param_4,undefined8 param_5,
                   undefined8 param_6,char param_7,char param_8)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_258;
  int local_254;
  int local_250;
  undefined4 local_24c;
  undefined1 local_248 [520];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_006a4ba0(param_4 + 0xd0);
  uVar3 = FUN_006a68a0(param_4 + 0xd0);
  local_258 = (**(code **)(*plVar2 + 0x50))(plVar2,0x25);
  if (param_8 == '\0') {
    local_250 = 0;
    local_254 = (int)param_7;
  }
  else {
    local_254 = (int)param_8;
    local_24c = 0;
    local_250 = (int)param_7;
  }
  FUN_006c89a0(uVar3,local_248,0x80,&local_258,param_6);
  iVar1 = thunk_FUN_007564d0(local_248);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x60))(param_2,local_248,(long)iVar1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_2;
}

