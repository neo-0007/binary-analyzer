
bool FUN_00465850(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if ((((iVar1 != 0) && (param_1 != (undefined8 *)0x0)) && (param_2 != 0)) &&
     (iVar1 = FUN_004ed9e0(param_2), iVar1 != 0)) {
    FUN_004ed620(param_1[1]);
    param_1[1] = param_2;
    param_1[3] = 0xffffffff;
    iVar1 = FUN_004650d0(param_1,param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_005b1f40(*param_1,param_2,1);
      return iVar1 != 0;
    }
  }
  return false;
}

