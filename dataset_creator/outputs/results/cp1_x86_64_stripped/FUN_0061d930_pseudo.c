
void FUN_0061d930(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_30;
  
  local_30 = param_4;
  uVar3 = FUN_0061d030(&local_30);
  iVar4 = FUN_0061d0a0(&local_30);
  uVar2 = local_30;
  if (iVar4 == 0) {
    FUN_0061d500(param_1,param_2,param_3,uVar3,local_30);
    return;
  }
  uVar1 = FUN_00423b00(param_3);
  FUN_0061d150(uVar1,uVar2,uVar3,iVar4,param_2);
  return;
}

