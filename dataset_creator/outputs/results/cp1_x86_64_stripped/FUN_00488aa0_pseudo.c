
undefined8 FUN_00488aa0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    iVar1 = FUN_00487d10(param_1,param_2,param_3,0,0);
    if (0 < iVar1) {
      *param_3 = 0;
      return 1;
    }
  }
  return 0;
}

