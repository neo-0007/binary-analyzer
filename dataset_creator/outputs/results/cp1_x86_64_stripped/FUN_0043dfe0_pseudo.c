
bool FUN_0043dfe0(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return false;
  }
  if ((param_2 != 0) && (iVar1 = FUN_004ed9e0(param_2), iVar1 != 0)) {
    FUN_004ed620(param_1[1]);
    param_1[1] = param_2;
    if (param_3 == 0) {
      return true;
    }
    iVar1 = FUN_0043c6f0(param_1 + 2,param_3,*param_1);
    return iVar1 != 0;
  }
  return false;
}

