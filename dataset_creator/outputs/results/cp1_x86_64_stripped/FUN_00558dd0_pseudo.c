
ulong FUN_00558dd0(undefined8 param_1,long param_2,long param_3,long param_4,int param_5,
                  code *param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int local_3c;
  
  uVar3 = FUN_00518970(param_2,0x87,&DAT_0080656e,"PrivateKeyInfo",param_9);
  iVar1 = FUN_00516aa0(uVar3);
  if (iVar1 == 0) {
    FUN_00518590(uVar3);
    if ((*(long *)(param_2 + 8) != 0) && (*(long *)(*(long *)(param_2 + 8) + 0x48) == 0)) {
      uVar5 = FUN_00558c70(param_1,param_2,param_3,param_4,param_5,param_6);
      return uVar5;
    }
    uVar5 = FUN_005580f0(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar5;
  }
  local_3c = param_5;
  if (param_4 == 0 && param_6 == (code *)0x0) {
    if (param_7 == 0) {
      param_6 = FUN_005551d0;
      param_4 = 0;
    }
    else {
      param_6 = (code *)0x0;
      local_3c = thunk_FUN_007129d0(param_7);
      param_4 = param_7;
    }
  }
  if (param_3 != 0) {
    uVar4 = FUN_0040a3d0(param_3);
    iVar1 = FUN_00518860(uVar3,uVar4,0);
    if (((iVar1 == 0) ||
        ((param_4 != 0 && (iVar1 = FUN_00518930(uVar3,param_4,(long)local_3c), iVar1 == 0)))) ||
       ((param_6 != (code *)0x0 && (iVar1 = FUN_00518950(uVar3,param_6,param_7), iVar1 == 0)))) {
      FUN_00518590(uVar3);
      return 0;
    }
  }
  uVar2 = FUN_00517230(uVar3,param_1);
  FUN_00518590(uVar3);
  return (ulong)uVar2;
}

