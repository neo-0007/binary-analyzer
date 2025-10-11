
undefined8 FUN_00546c60(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = FUN_004b7d60(param_3);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_004b7ba0(param_3);
  if (iVar1 == 0) {
    uVar2 = FUN_00546920(param_1,param_2,FUN_005467b0,param_3);
    return uVar2;
  }
  uVar2 = FUN_00546c30(param_1,param_2,0);
  return uVar2;
}

