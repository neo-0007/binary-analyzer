
bool FUN_00547b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00547650(param_1,param_4);
  if (iVar1 != 0) {
    iVar1 = FUN_00547420(param_1,param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_00547aa0(param_1);
      return iVar1 != 0;
    }
  }
  return false;
}

