
undefined8 FUN_00474720(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043b840();
  if ((iVar1 != 0) && ((param_2 & 3) != 0)) {
    uVar2 = FUN_0042ae10(param_1,param_2);
    return uVar2;
  }
  return 0;
}

