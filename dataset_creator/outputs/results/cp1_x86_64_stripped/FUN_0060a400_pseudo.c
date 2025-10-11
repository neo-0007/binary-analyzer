
ulong FUN_0060a400(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  
  if ((*param_2 != 0) &&
     (uVar2 = FUN_0060a250(param_3,*param_2,param_4,"Autonomous System Numbers"), (int)uVar2 == 0))
  {
    return uVar2;
  }
  uVar2 = 1;
  if (param_2[1] != 0) {
    iVar1 = FUN_0060a250(param_3,param_2[1],param_4,"Routing Domain Identifiers");
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}

