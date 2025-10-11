
undefined4 FUN_00457500(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004ee630();
  FUN_004ee640(param_1,uVar1 | 1);
  uVar2 = FUN_004ea4a0(param_1,param_2);
  FUN_004ee640(param_1,uVar1);
  return uVar2;
}

