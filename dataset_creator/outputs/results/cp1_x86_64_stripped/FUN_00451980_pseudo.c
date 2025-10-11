
bool FUN_00451980(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    iVar1 = FUN_0054b350(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_00451920(param_1,param_2);
      return iVar1 != 0;
    }
  }
  return false;
}

