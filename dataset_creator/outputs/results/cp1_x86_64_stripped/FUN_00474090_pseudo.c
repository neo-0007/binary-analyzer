
undefined8 FUN_00474090(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043b840();
  if (((iVar1 != 0) && (param_1 != 0)) && ((param_2 & 1) != 0)) {
    uVar2 = FUN_00473bb0(param_1,param_3);
    return uVar2;
  }
  return 0;
}

